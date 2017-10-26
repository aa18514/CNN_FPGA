#include "stdsimheader.h"
//#include "convolutionKernel00.h"
//#include "HWTypes.h"
//#include "KernelManagerBlockSync.h"

using namespace maxcompilersim;

// Templated Types used in the kernel
template class HWOffsetFix<16,4,UNSIGNED>;
template class HWRawBits<96>;
template class HWOffsetFix<48,0,UNSIGNED>;
template class HWOffsetFix<49,0,UNSIGNED>;
template class HWOffsetFix<16,2,UNSIGNED>;
template class HWOffsetFix<64,0,TWOSCOMPLEMENT>;
template class HWRawBits<800>;
template class HWOffsetFix<19,2,UNSIGNED>;
template class HWOffsetFix<16,0,UNSIGNED>;
template class HWRawBits<128>;
template class HWOffsetFix<2,0,UNSIGNED>;
template class HWRawBits<16>;
template class HWRawBits<64>;
template class HWOffsetFix<32,-24,TWOSCOMPLEMENT>;
template class HWOffsetFix<1,0,UNSIGNED>;
template class HWOffsetFix<17,0,UNSIGNED>;
template class HWRawBits<32>;
template class HWRawBits<160>;
template class HWOffsetFix<24,-8,TWOSCOMPLEMENT>;
template class HWOffsetFix<5,0,UNSIGNED>;
template class HWOffsetFix<19,0,UNSIGNED>;
// add. templates from the default formatter 


// Templated Methods/Functions
template HWOffsetFix<16,0,UNSIGNED> cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(const HWOffsetFix<19,0,UNSIGNED> &a);
template HWRawBits<32> slice<128,32>(const HWRawBits<800> &a);
template HWRawBits<32> slice<288,32>(const HWRawBits<800> &a);
template HWRawBits<32> slice<448,32>(const HWRawBits<800> &a);
template HWOffsetFix<16,4,UNSIGNED> cast_bits2fixed<16,4,UNSIGNED>(const HWRawBits<16> &a);
template HWRawBits<160> cat<>(const HWRawBits<32> &a, const HWRawBits<128> &b);
template HWOffsetFix<19,0,UNSIGNED>add_fixed <19,0,UNSIGNED,TONEAREVEN,16,0,UNSIGNED,16,2,UNSIGNED, false>(const HWOffsetFix<16,0,UNSIGNED> &a, const HWOffsetFix<16,2,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWRawBits<64> cast_fixed2bits<>(const HWOffsetFix<64,0,TWOSCOMPLEMENT> &a);
template HWRawBits<32> cast_fixed2bits<>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a);
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<17,0,UNSIGNED> &a, const HWOffsetFix<17,0,UNSIGNED> &b );
template HWOffsetFix<32,-24,TWOSCOMPLEMENT>add_fixed <32,-24,TWOSCOMPLEMENT,TONEAREVEN,32,-24,TWOSCOMPLEMENT,32,-24,TWOSCOMPLEMENT, false>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a, const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWRawBits<32> slice<32,32>(const HWRawBits<800> &a);
template HWOffsetFix<16,2,UNSIGNED> cast_bits2fixed<16,2,UNSIGNED>(const HWRawBits<16> &a);
template HWOffsetFix<1,0,UNSIGNED>or_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWOffsetFix<17,0,UNSIGNED>add_fixed <17,0,UNSIGNED,TRUNCATE,17,0,UNSIGNED,17,0,UNSIGNED, false>(const HWOffsetFix<17,0,UNSIGNED> &a, const HWOffsetFix<17,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template void KernelManagerBlockSync::writeOutput< HWRawBits<160> >(const t_port_number port_number, const HWRawBits<160> &value);
template HWRawBits<32> slice<512,32>(const HWRawBits<800> &a);
template HWRawBits<64> cat<>(const HWRawBits<32> &a, const HWRawBits<32> &b);
template HWOffsetFix<16,0,UNSIGNED>add_fixed <16,0,UNSIGNED,TONEAREVEN,16,0,UNSIGNED,16,0,UNSIGNED, false>(const HWOffsetFix<16,0,UNSIGNED> &a, const HWOffsetFix<16,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<1,0,UNSIGNED>gt_fixed<>(const HWOffsetFix<16,0,UNSIGNED> &a, const HWOffsetFix<16,0,UNSIGNED> &b );
template HWRawBits<16> cast_fixed2bits<>(const HWOffsetFix<16,0,UNSIGNED> &a);
template HWRawBits<32> slice<480,32>(const HWRawBits<800> &a);
template HWOffsetFix<49,0,UNSIGNED>add_fixed <49,0,UNSIGNED,TRUNCATE,49,0,UNSIGNED,49,0,UNSIGNED, false>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<1,0,UNSIGNED>lt_fixed<>(const HWOffsetFix<16,0,UNSIGNED> &a, const HWOffsetFix<16,0,UNSIGNED> &b );
template HWRawBits<32> slice<192,32>(const HWRawBits<800> &a);
template HWRawBits<64>shift_left_fixed<>(const HWOffsetFix<64,0,TWOSCOMPLEMENT> &a, long shift_by );
template HWRawBits<32> slice<672,32>(const HWRawBits<800> &a);
template HWOffsetFix<1,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<1,0,UNSIGNED> >(const std::string &name);
template HWRawBits<32> slice<256,32>(const HWRawBits<800> &a);
template HWRawBits<32> slice<160,32>(const HWRawBits<800> &a);
template HWRawBits<800> KernelManagerBlockSync::readInput< HWRawBits<800> >(const t_port_number port_number);
template HWRawBits<32> slice<416,32>(const HWRawBits<800> &a);
template HWRawBits<32> slice<768,32>(const HWRawBits<800> &a);
template HWRawBits<32> slice<640,32>(const HWRawBits<800> &a);
template HWOffsetFix<32,-24,TWOSCOMPLEMENT>mul_fixed <32,-24,TWOSCOMPLEMENT,TONEAREVEN,32,-24,TWOSCOMPLEMENT,32,-24,TWOSCOMPLEMENT, false>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a, const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWOffsetFix<16,0,UNSIGNED> cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(const HWOffsetFix<19,2,UNSIGNED> &a);
template HWOffsetFix<16,0,UNSIGNED> cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<17,0,UNSIGNED> &a);
template HWRawBits<32> slice<384,32>(const HWRawBits<800> &a);
template void KernelManagerBlockSync::setMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name, const HWOffsetFix<48,0,UNSIGNED> & value);
template HWOffsetFix<32,-24,TWOSCOMPLEMENT> cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &a);
template HWOffsetFix<1,0,UNSIGNED>and_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<16,0,UNSIGNED> &a, const HWOffsetFix<16,0,UNSIGNED> &b );
template HWRawBits<32> slice<576,32>(const HWRawBits<800> &a);
template HWOffsetFix<2,0,UNSIGNED> cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(const HWOffsetFix<16,0,UNSIGNED> &a);
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<48,0,UNSIGNED> &a, const HWOffsetFix<48,0,UNSIGNED> &b );
template HWRawBits<32> slice<544,32>(const HWRawBits<800> &a);
template HWRawBits<128> cat<>(const HWRawBits<32> &a, const HWRawBits<96> &b);
template HWOffsetFix<48,0,UNSIGNED> cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<49,0,UNSIGNED> &a);
template HWRawBits<32> slice<0,32>(const HWRawBits<800> &a);
template HWRawBits<32> slice<608,32>(const HWRawBits<800> &a);
template HWRawBits<32> slice<352,32>(const HWRawBits<800> &a);
template HWRawBits<32> slice<736,32>(const HWRawBits<800> &a);
template HWOffsetFix<1,0,UNSIGNED>not_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a );
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b );
template HWOffsetFix<24,-8,TWOSCOMPLEMENT> cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(const HWOffsetFix<64,0,TWOSCOMPLEMENT> &a);
template HWOffsetFix<19,2,UNSIGNED>add_fixed <19,2,UNSIGNED,TONEAREVEN,16,2,UNSIGNED,16,4,UNSIGNED, false>(const HWOffsetFix<16,2,UNSIGNED> &a, const HWOffsetFix<16,4,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWRawBits<96> cat<>(const HWRawBits<32> &a, const HWRawBits<64> &b);
template HWRawBits<32> slice<224,32>(const HWRawBits<800> &a);
template HWRawBits<32> slice<96,32>(const HWRawBits<800> &a);
template HWOffsetFix<48,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name);
template HWRawBits<32> slice<704,32>(const HWRawBits<800> &a);
template HWOffsetFix<32,-24,TWOSCOMPLEMENT> cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(const HWRawBits<32> &a);
template HWRawBits<32> slice<64,32>(const HWRawBits<800> &a);
template HWOffsetFix<5,0,UNSIGNED> cast_fixed2fixed<5,0,UNSIGNED,TONEAREVEN>(const HWOffsetFix<16,0,UNSIGNED> &a);
template HWOffsetFix<64,0,TWOSCOMPLEMENT> cast_bits2fixed<64,0,TWOSCOMPLEMENT>(const HWRawBits<64> &a);
template HWRawBits<32> slice<320,32>(const HWRawBits<800> &a);


// Additional Code

