#ifndef HWRAWBITS_IMPL_H_
#define HWRAWBITS_IMPL_H_

#include "HWRawBits_decl.h"

namespace maxcompilersim {

// Constructors //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <uint size> inline
HWRawBits<size>::HWRawBits(const varint_u<size> &bits)
{
	for(uint i=0; i<m_chunks; i++) {
		m_bits[i] = bits.get_chunk(i);
	}
	m_bits[m_chunks-1] &= m_mask_highest;
}

template <uint size> inline
HWRawBits<size>::HWRawBits(const long v)
{
	m_bits[0] = v;
	for(uint i=1; i<m_chunks; i++) {
		m_bits[i]=0;
	}
	m_bits[m_chunks-1] &= m_mask_highest;
}

template <uint size> inline
HWRawBits<size>::HWRawBits()
: charPrint(false), stringPrint(false)
	{ }

// Getters ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <uint size> inline
varint_u<size> HWRawBits<size>::getBitString() const {
	uint64_t tmp_store[m_chunks];
	for(uint i=0; i<m_chunks; i++) {
		tmp_store[i] = m_bits[i];
	}
	return varint_u<size>(tmp_store, m_chunks);
}

template <uint size> inline
long HWRawBits<size>::getValueAsLong() const {
	return (long)m_bits[0];
}

template <uint size> inline
bool HWRawBits<size>::getValueAsBool() const {
	return (bool)m_bits[0];
}

// Print help //////////////////////////////////////////////////////////
template <uint size> inline
HWRawBits<size> HWRawBits<size>::clearFormatting() const {
	const_cast<HWRawBits<size>*>(this)->charPrint = false;
	const_cast<HWRawBits<size>*>(this)->stringPrint = false;
	return *this;
}

template <uint size> inline
HWRawBits<size> HWRawBits<size>::printAsChar() const {
	const_cast<HWRawBits<size>*>(this)->charPrint = true;
	return *this;
}

template <uint size> inline
HWRawBits<size> HWRawBits<size>::printAsString() const {
	const_cast<HWRawBits<size>*>(this)->stringPrint = true;
	return *this;
}

// Casting ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CAST_bits2bits(inline) {
	HWRawBits<r_size> resized;
	const uint min_chunks =
			(a.m_chunks<resized.m_chunks) ? a.m_chunks : resized.m_chunks;

	for(uint i=0; i<min_chunks; i++) {
		resized.m_bits[i]=a.m_bits[i];
	}
	// In case of up-casting
	for(uint i=a.m_chunks; i<resized.m_chunks; i++) {
		resized.m_bits[i] = 0;
	}
	resized.m_bits[resized.m_chunks-1] &= resized.m_mask_highest;
	return resized;
}

// Reinterpret Casting ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CAST_float2bits(inline) {
	return HWRawBits<a_esize+a_msize>( a.getBitString() );
}

CAST_bits2float(inline) {
	return HWFloat<r_esize, r_msize>( a.getBitString() );
}

CAST_fixed2bits(inline) {
	return HWRawBits<a_size>( a.getBitString() );
}

CAST_bits2fixed(inline) {
	return HWOffsetFix<r_size,r_offset,r_sign_mode>( a.getBitString() );
}

// Shifting //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SHIFTLEFT_bits(inline) {
	if(shift_by == 0) {
		return a;
	}

	HWRawBits<a_size> ret;

	if(shift_by >= a_size) {
		for(uint i=0; i<ret.m_chunks; i++) {
			ret.m_bits[i] = 0;
		}
		return ret;
	}

	unsigned int elems_shift=shift_by/HWRawBits<a_size>::e_chunk_size;

	for(uint i=0; i<elems_shift; i++) {
		ret.m_bits[i] = 0;
	}

	// shift remaining bits
	shift_by %= HWRawBits<a_size>::e_chunk_size;
	if(shift_by != 0) {
		ret.m_bits[0+elems_shift] = a.m_bits[0] << shift_by;
		for(uint i=1+elems_shift; i<ret.m_chunks; i++) {
			ret.m_bits[i] = a.m_bits[i-elems_shift] << shift_by;
			ret.m_bits[i] |= a.m_bits[i-1-elems_shift] >> (HWRawBits<a_size>::e_chunk_size-shift_by);
		}
	} else {
		for(uint i=elems_shift; i<ret.m_chunks; i++) {
			ret.m_bits[i] = a.m_bits[i-elems_shift];
		}
	}
	ret.m_bits[ret.m_chunks-1] &= ret.m_mask_highest;
	return ret;
}

SHIFTRIGHT_bits(inline) {
	if(shift_by == 0) {
		return a;
	}

	HWRawBits<a_size> ret;

	if(shift_by >= a_size) {
		for(uint i=0; i<ret.m_chunks; i++) {
			ret.m_bits[i] = 0;
		}
		return ret;
	}

	unsigned int elems_shift=shift_by/HWRawBits<a_size>::e_chunk_size;

	for(uint i=ret.m_chunks-elems_shift; i<ret.m_chunks; i++) {
		ret.m_bits[i] = 0;
	}

	// shift remaining bits
	shift_by %= HWRawBits<a_size>::e_chunk_size;
	if(shift_by != 0) {
		for(uint i=0; i<ret.m_chunks-1-elems_shift; i++) {
			ret.m_bits[i] = a.m_bits[i+elems_shift] >> shift_by;
			ret.m_bits[i] |= a.m_bits[i+1+elems_shift] << (HWRawBits<a_size>::e_chunk_size-shift_by);
		}
		ret.m_bits[ret.m_chunks-1-elems_shift] = a.m_bits[a.m_chunks-1] >> shift_by;
	} else {
		for(uint i=0; i<ret.m_chunks-elems_shift; i++) {
			ret.m_bits[i] = a.m_bits[i+elems_shift];
		}
	}
	return ret;
}

// Bit-wise operations ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

NOT_bits(inline) {
	HWRawBits<r_size> ret;
	for(uint i=0; i<ret.m_chunks; i++) {
		ret.m_bits[i] = ~a.m_bits[i];
	}
	ret.m_bits[ret.m_chunks-1] &= ret.m_mask_highest;
	return ret;
}

AND_bits(inline) {
	HWRawBits<r_size> ret;
	for(uint i=0; i<ret.m_chunks; i++) {
		ret.m_bits[i] = a.m_bits[i] & b.m_bits[i];
	}
	ret.m_bits[ret.m_chunks-1] &= ret.m_mask_highest;
	return ret;
}

OR_bits(inline) {
	HWRawBits<r_size> ret;
	for(uint i=0; i<ret.m_chunks; i++) {
		ret.m_bits[i] = a.m_bits[i] | b.m_bits[i];
	}
	ret.m_bits[ret.m_chunks-1] &= ret.m_mask_highest;
	return ret;
}

XOR_bits(inline) {
	HWRawBits<r_size> ret;
	for(uint i=0; i<ret.m_chunks; i++) {
		ret.m_bits[i] = a.m_bits[i] ^ b.m_bits[i];
	}
	ret.m_bits[ret.m_chunks-1] &= ret.m_mask_highest;
	return ret;
}

EQ_bits(inline) {
	bool result=true;
	for(uint i=0; i<a.m_chunks; i++) {
		if(a.m_bits[i] != b.m_bits[i]) {
			result=false;
			break;
		}
	}
	return HWBool( result );
}

NEQ_bits(inline) {
	bool result=false;
	for(uint i=0; i<a.m_chunks; i++) {
		if(a.m_bits[i] != b.m_bits[i]) {
			result=true;
			break;
		}
	}
	return HWBool( result );
}

// Cat-ting //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*#define CATTER(name,asize,bsize) 								\
name(inline) {													\
	const uint r_size = asize + bsize;							\
	varint_u<r_size> a_large = a.getBitString();				\
	varint_u<r_size> b_large = b.getBitString();				\
	varint_u<r_size> result = (a_large << bsize) | b_large;		\
	return HWRawBits<r_size>(result);							\
}*/

#define CATTER(name,asize,bsize) 								\
name(inline) {													\
	const uint r_size = asize + bsize;							\
	varint_u<asize> tmpa = a.getBitString();					\
	varint_u<bsize> tmpb = b.getBitString();					\
	HWRawBits<asize> raw_a( tmpa );								\
	HWRawBits<bsize> raw_b( tmpb );								\
	HWRawBits<r_size> ra = cast_bits2bits<r_size>(raw_a);		\
	HWRawBits<r_size> rb = cast_bits2bits<r_size>(raw_b);		\
	ra = shift_left_bits(ra, bsize);							\
	return or_bits(ra, rb);										\
/*  The code below is a second version of the original catter.	\
 *  It is tested and produces the correct results. It avoids one\
 *  typecast operation and and performs only one bitwise 'or' operation\
 *  in the intersection chunk rather than the whole result HWRawBits.\
 *  However, it proved slower in real simulations. Profiling with\
 *  callgrind showed that overall it increases the number of	\
 *  executed instructions										\
 */  															\
/* 	HWRawBits<r_size> ca = cast_bits2bits<r_size>(raw_a);		\
	HWRawBits<r_size> ret = shift_left_bits(ca, bsize);			\
	for(uint i=0; i<raw_b.m_chunks-1; i++) {					\
		ret.m_bits[i] = raw_b.m_bits[i];						\
	}															\
	ret.m_bits[raw_b.m_chunks-1] |= raw_b.m_bits[raw_b.m_chunks-1];	\
	return ret;		*/											\
}

CAT_bits_bits(inline) {
	const uint r_size = a_size + b_size;
	HWRawBits<r_size> ra = cast_bits2bits<r_size>(a);
	HWRawBits<r_size> rb = cast_bits2bits<r_size>(b);
	ra = shift_left_bits(ra, b_size);
	return or_bits(ra, rb);
}

#define CATTER_Abits(name,asize,bsize) 							\
name(inline) {													\
	const uint r_size = asize + bsize;							\
	varint_u<bsize> tmpb = b.getBitString();					\
	HWRawBits<bsize> raw_b( tmpb );								\
	HWRawBits<r_size> ra = cast_bits2bits<r_size>(a);			\
	HWRawBits<r_size> rb = cast_bits2bits<r_size>(raw_b);		\
	ra = shift_left_bits(ra, bsize);							\
	return or_bits(ra, rb);										\
}

#define CATTER_Bbits(name,asize,bsize) 							\
name(inline) {													\
	const uint r_size = asize + bsize;							\
	varint_u<asize> tmpa = a.getBitString();					\
	HWRawBits<asize> raw_a( tmpa );								\
	HWRawBits<r_size> ra = cast_bits2bits<r_size>(raw_a);		\
	HWRawBits<r_size> rb = cast_bits2bits<r_size>(b);			\
	ra = shift_left_bits(ra, bsize);							\
	return or_bits(ra, rb);										\
}

//CATTER(CAT_bits_bits,	a_size, b_size)
CATTER_Abits(CAT_bits_float,	a_size, b_esize+b_msize)
CATTER_Abits(CAT_bits_fixed,	a_size, b_size)
CATTER_Bbits(CAT_float_bits,	a_esize+a_msize, b_size)
CATTER(CAT_float_float,	a_esize+a_msize, b_esize+b_msize)
CATTER(CAT_float_fixed, a_esize+a_msize, b_size)
CATTER_Bbits(CAT_fixed_bits,	a_size, b_size)
CATTER(CAT_fixed_float,	a_size, b_esize+b_msize)
CATTER(CAT_fixed_fixed,	a_size, b_size)

#undef CATTER

// Slice-ing /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SLICE_bits(inline) {
	HWRawBits<a_size> shifted = shift_right_bits(a, base) ;
	HWRawBits<length> ret = cast_bits2bits<length>(shifted) ;
	return ret;
}

SLICE_float(inline) {
	HWRawBits<a_esize+a_msize> shifted(a.getBitString());
	shifted = shift_right_bits(shifted, base);
	HWRawBits<length> ret = cast_bits2bits<length>(shifted);
	return ret;
}

SLICE_fixed(inline) {
	HWRawBits<a_size> shifted( a.getBitString() );
	shifted = shift_right_bits(shifted, base);
	HWRawBits<length> ret = cast_bits2bits<length>(shifted);
	return ret;
}

} /* end namespace maxcompilersim */

#endif /* HWRAWBITS_IMPL_H_ */
