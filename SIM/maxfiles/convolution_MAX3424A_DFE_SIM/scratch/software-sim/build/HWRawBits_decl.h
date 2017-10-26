#ifndef HWRAWBITS_DECL_H_
#define HWRAWBITS_DECL_H_

#include <sstream>
#include <iostream>

#include "HWTypes.h"

namespace maxcompilersim {

CLASS_HWRawBits {

private:
	//varint_u<size> m_bits;
	//uint m_size;
	enum { e_chunk_size=(uint)sizeof(uint64_t)*8U };
	static const uint m_chunks = ((size-1U)/e_chunk_size) + 1;
	static const uint64_t m_mask_highest = size%e_chunk_size==0 ? -1UL : (1UL<<(size%e_chunk_size))-1UL;
	uint64_t m_bits[m_chunks];

	bool charPrint;
		bool stringPrint;

		// Distance between start and end bit must be 8, of course.
		// No input value checking, this is for internal use. - But should be added.
		void printCharFromBits(std::ostream& o, unsigned start, unsigned end) const {
			unsigned char charToPrint =
					(unsigned char)(getBitString().get_bits(start, end));

			// 0-31 and >126 dec value are nonprintable characters.
			// Print space(32 dec) if any of these occure.
			charToPrint = (charToPrint < 31) ? 32 : (charToPrint > 126) ? 32 : charToPrint;


			o <<  charToPrint;
		}

		void printString(std::ostream& o) const {
			uint numChars = (uint)this->totalBitSize / 8 + ((this->totalBitSize%8>0)?1:0);

			for (uint i = numChars; i > 0; i--)
				printCharFromBits(o, 8 * (i - 1), 8 * i);
		}

public:
	enum { totalBitSize = size };

	// Constructors
	HWRawBits(const varint_u<size> &bits);
	HWRawBits(const long v);
	HWRawBits();

	// Getters
	varint_u<size> getBitString() const;
	long getValueAsLong() const;
	bool getValueAsBool() const;
	// Print help
	HWRawBits<size> clearFormatting() const;
	HWRawBits<size> printAsChar() const;
	HWRawBits<size> printAsString() const;

	friend std::ostream& operator<<(std::ostream& o, const HWRawBits<size>& v) {
		if (v.charPrint) {
			v.printCharFromBits(o, 0, 8);
		} else if (v.stringPrint) {
			v.printString(o);
		} else {
			o << v.getBitString();
		}

		return o;
	}
	// Report type
	std::string getTypeString() const {
		std::ostringstream tmp;
		tmp << "{HWRawBits:" << size << "}";
		return tmp.str();
	}

	// Shifting
	SHIFTLEFT_bits(friend);
	SHIFTRIGHT_bits(friend);

	// Operators
	NOT_bits(friend);
	AND_bits(friend);
	OR_bits(friend);
	XOR_bits(friend);
	EQ_bits(friend);
	NEQ_bits(friend);

	// Casting
	CAST_bits2bits(friend);
	CAST_bits2float(friend);
	CAST_float2bits(friend);
	CAST_bits2fixed(friend);
	CAST_fixed2bits(friend);

	// Cat-ting
	CAT_bits_bits(friend);
	CAT_bits_float(friend);
	CAT_bits_fixed(friend);
	CAT_float_bits(friend);
	CAT_float_float(friend);
	CAT_float_fixed(friend);
	CAT_fixed_bits(friend);
	CAT_fixed_float(friend);
	CAT_fixed_fixed(friend);

	// Slice-ing
	SLICE_bits(friend);
	SLICE_float(friend);
	SLICE_fixed(friend);

};

} /* end namespace maxcompilersim */

#endif /* HWRAWBITS_DECL_H_ */
