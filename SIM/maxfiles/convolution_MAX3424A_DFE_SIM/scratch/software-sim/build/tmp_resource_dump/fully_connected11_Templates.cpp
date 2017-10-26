#include "stdsimheader.h"
//#include "fully_connected11.h"
//#include "HWTypes.h"
//#include "KernelManagerBlockSync.h"

using namespace maxcompilersim;

// Templated Types used in the kernel
template class HWOffsetFix<16,4,UNSIGNED>;
template class HWOffsetFix<20,1,UNSIGNED>;
template class HWOffsetFix<21,1,UNSIGNED>;
template class HWRawBits<320>;
template class HWOffsetFix<48,0,UNSIGNED>;
template class HWOffsetFix<49,0,UNSIGNED>;
template class HWOffsetFix<16,0,UNSIGNED>;
template class HWOffsetFix<32,-24,TWOSCOMPLEMENT>;
template class HWRawBits<16>;
template class HWFloat<8,24>;
template class HWOffsetFix<1,0,UNSIGNED>;
template class HWOffsetFix<17,0,UNSIGNED>;
template class HWOffsetFix<16,5,UNSIGNED>;
template class HWRawBits<32>;
template class HWOffsetFix<9,0,UNSIGNED>;
template class HWOffsetFix<16,1,UNSIGNED>;
template class HWOffsetFix<4,0,UNSIGNED>;
// add. templates from the default formatter 


// Templated Methods/Functions
template HWOffsetFix<1,0,UNSIGNED>and_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWOffsetFix<16,4,UNSIGNED> cast_bits2fixed<16,4,UNSIGNED>(const HWRawBits<16> &a);
template HWRawBits<32> slice<64,32>(const HWRawBits<320> &a);
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<16,0,UNSIGNED> &a, const HWOffsetFix<16,0,UNSIGNED> &b );
template HWOffsetFix<16,5,UNSIGNED> cast_bits2fixed<16,5,UNSIGNED>(const HWRawBits<16> &a);
template HWOffsetFix<21,1,UNSIGNED>add_fixed <21,1,UNSIGNED,TONEAREVEN,20,1,UNSIGNED,16,5,UNSIGNED, false>(const HWOffsetFix<20,1,UNSIGNED> &a, const HWOffsetFix<16,5,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<48,0,UNSIGNED> &a, const HWOffsetFix<48,0,UNSIGNED> &b );
template HWRawBits<32> slice<0,32>(const HWRawBits<320> &a);
template HWRawBits<320> KernelManagerBlockSync::readInput< HWRawBits<320> >(const t_port_number port_number);
template HWOffsetFix<16,0,UNSIGNED> cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(const HWOffsetFix<21,1,UNSIGNED> &a);
template HWOffsetFix<32,-24,TWOSCOMPLEMENT>add_fixed <32,-24,TWOSCOMPLEMENT,TONEAREVEN,32,-24,TWOSCOMPLEMENT,32,-24,TWOSCOMPLEMENT, false>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a, const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<17,0,UNSIGNED> &a, const HWOffsetFix<17,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED>or_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWRawBits<32> slice<128,32>(const HWRawBits<320> &a);
template HWOffsetFix<17,0,UNSIGNED>add_fixed <17,0,UNSIGNED,TRUNCATE,17,0,UNSIGNED,17,0,UNSIGNED, false>(const HWOffsetFix<17,0,UNSIGNED> &a, const HWOffsetFix<17,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<48,0,UNSIGNED> cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<49,0,UNSIGNED> &a);
template HWOffsetFix<1,0,UNSIGNED>lt_float<>(const HWFloat<8,24> &a, const HWFloat<8,24> &b );
template HWOffsetFix<16,0,UNSIGNED>add_fixed <16,0,UNSIGNED,TONEAREVEN,16,0,UNSIGNED,16,0,UNSIGNED, false>(const HWOffsetFix<16,0,UNSIGNED> &a, const HWOffsetFix<16,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWRawBits<32> slice<256,32>(const HWRawBits<320> &a);
template HWOffsetFix<4,0,UNSIGNED> cast_fixed2fixed<4,0,UNSIGNED,TONEAREVEN>(const HWOffsetFix<16,0,UNSIGNED> &a);
template HWRawBits<16> cast_fixed2bits<>(const HWOffsetFix<16,0,UNSIGNED> &a);
template HWOffsetFix<1,0,UNSIGNED>not_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a );
template HWOffsetFix<20,1,UNSIGNED>add_fixed <20,1,UNSIGNED,TONEAREVEN,16,1,UNSIGNED,16,4,UNSIGNED, false>(const HWOffsetFix<16,1,UNSIGNED> &a, const HWOffsetFix<16,4,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<49,0,UNSIGNED>add_fixed <49,0,UNSIGNED,TRUNCATE,49,0,UNSIGNED,49,0,UNSIGNED, false>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWRawBits<32> slice<224,32>(const HWRawBits<320> &a);
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<1,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<16,1,UNSIGNED> cast_bits2fixed<16,1,UNSIGNED>(const HWRawBits<16> &a);
template void KernelManagerBlockSync::writeOutput< HWFloat<8,24> >(const t_port_number port_number, const HWFloat<8,24> &value);
template HWFloat<8,24> cast_fixed2float<8,24>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a);
template HWRawBits<32> slice<288,32>(const HWRawBits<320> &a);
template HWRawBits<32> slice<96,32>(const HWRawBits<320> &a);
template HWRawBits<32> slice<32,32>(const HWRawBits<320> &a);
template HWOffsetFix<9,0,UNSIGNED> cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(const HWOffsetFix<16,0,UNSIGNED> &a);
template HWOffsetFix<48,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name);
template HWRawBits<32> slice<160,32>(const HWRawBits<320> &a);
template HWRawBits<32> slice<192,32>(const HWRawBits<320> &a);
template HWOffsetFix<32,-24,TWOSCOMPLEMENT>mul_fixed <32,-24,TWOSCOMPLEMENT,TONEAREVEN,32,-24,TWOSCOMPLEMENT,32,-24,TWOSCOMPLEMENT, false>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a, const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWOffsetFix<32,-24,TWOSCOMPLEMENT> cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(const HWRawBits<32> &a);
template HWOffsetFix<16,0,UNSIGNED> cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<17,0,UNSIGNED> &a);
template void KernelManagerBlockSync::setMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name, const HWOffsetFix<48,0,UNSIGNED> & value);


// Additional Code

