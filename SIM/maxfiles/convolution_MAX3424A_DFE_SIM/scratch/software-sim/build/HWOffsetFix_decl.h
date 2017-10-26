#ifndef HWOFFSETFIX_DECL_H_
#define HWOFFSETFIX_DECL_H_

#include <sstream>
#include <iostream>

#include "HWTypes.h"

using namespace std;

namespace maxcompilersim {

CLASS_HWOffsetFix {
public:
	enum {totalBitSize = size};

	// Constructors
	HWOffsetFix(varint_u<size> raw_bits);
	HWOffsetFix(double v);
	HWOffsetFix(long v);
	HWOffsetFix(int v) {*this = HWOffsetFix(long(v));}
	HWOffsetFix();

	// Getters
	varint_u<size> getBitString() const;
	double getValueAsDouble() const;
	long getValueAsLong() const;
	bool getValueAsBool() const;

	// Print help
	HWOffsetFix<size,offset,sign_mode> clearFormatting() const;
	HWOffsetFix<size,offset,sign_mode> printAsChar() const;
	HWOffsetFix<size,offset,sign_mode> printAsString() const;

	friend std::ostream& operator<<(std::ostream& o, const HWOffsetFix<size,offset,sign_mode>& v) {
		if(o.flags() & std::ios_base::dec) {
			if (v.charPrint) {
				v.printCharFromBits(o, 0, 8);
			} else if (v.stringPrint) {
				v.printString(o);
			} else {
				if (offset == 0) {
					// ordinary integer
					if(sign_mode == TWOSCOMPLEMENT){
						return o << varint_s<size>(v.getBitString());
					}
					else {
						return o << v.getBitString();
					}

				} else {
					return o << v.getValueAsDouble();
				}
			}
		} else {
			// hex and binary (%o)
			return o << v.getBitString();
		}

		return o;
	}

	// Report type
	std::string getTypeString() const {
		std::ostringstream tmp;
		tmp << "{HWOffsetFix:" << size << ", " << offset << ", "
		<< (sign_mode == UNSIGNED ? "UNSIGNED" : "TWOSCOMPLEMENT") << "}";
		return tmp.str();
	}

	// Constants
	CONST_true(friend);
	CONST_false(friend);
	CONST_bool(friend);

	// Operators
	ADD_fixed(friend,HWEXCEPT,EXCEPTOVERFLOW);
	SUB_fixed(friend,HWEXCEPT,EXCEPTOVERFLOW);
	MUL_fixed(friend,HWEXCEPT,EXCEPTOVERFLOW);
	DIV_fixed(friend,HWEXCEPT,EXCEPTFLOAT);
	DIVMOD_fixed(friend,HWEXCEPT,EXCEPTFLOAT);
	NEG_fixed(friend,HWEXCEPT,EXCEPTOVERFLOW);

	// Comparison
	EQ_fixed(friend);
	NEQ_fixed(friend);
	GT_fixed(friend);
	GTE_fixed(friend);
	LT_fixed(friend);
	LTE_fixed(friend);

	// Shifting
	SHIFTLEFT_fixed(friend,HWEXCEPT,EXCEPTOVERFLOW);
	SHIFTRIGHT_fixed(friend);

	// Bitwise Operators
	NOT_fixed(friend);
	AND_fixed(friend);
	OR_fixed(friend);
	XOR_fixed(friend);

	// Casting
	CAST_fixed2fixed(friend,HWEXCEPT,EXCEPTOVERFLOW);

private:
	varint_u<size> m_bits;

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

		o << charToPrint;
	}

	void printString(std::ostream& o) const {
		uint numChars = (uint)this->totalBitSize / 8 + ((this->totalBitSize%8>0)?1:0);

		for (uint i = numChars; i > 0; i--)
			printCharFromBits(o, 8 * (i - 1), 8 * i);
	}
};

} /* end namespace maxcompilersim */

#endif /* HWOFFSETFIX_DECL_H_ */
