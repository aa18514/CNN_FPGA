#include "stdsimheader.h"
//#include "fully_connected01.h"
//#include "HWTypes.h"
//#include "KernelManagerBlockSync.h"

using namespace maxcompilersim;

// Templated Types used in the kernel
template class HWRawBits<16>;
template class HWOffsetFix<32,-24,TWOSCOMPLEMENT>;
template class HWOffsetFix<19,4,UNSIGNED>;
template class HWOffsetFix<1,0,UNSIGNED>;
template class HWOffsetFix<16,4,UNSIGNED>;
template class HWOffsetFix<17,0,UNSIGNED>;
template class HWOffsetFix<9,0,UNSIGNED>;
template class HWRawBits<32>;
template class HWOffsetFix<16,6,UNSIGNED>;
template class HWRawBits<320>;
template class HWOffsetFix<48,0,UNSIGNED>;
template class HWOffsetFix<49,0,UNSIGNED>;
template class HWOffsetFix<16,0,UNSIGNED>;
// add. templates from the default formatter 


// Templated Methods/Functions
template HWOffsetFix<1,0,UNSIGNED>and_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWOffsetFix<16,4,UNSIGNED> cast_bits2fixed<16,4,UNSIGNED>(const HWRawBits<16> &a);
template HWRawBits<32> slice<64,32>(const HWRawBits<320> &a);
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<16,0,UNSIGNED> &a, const HWOffsetFix<16,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<48,0,UNSIGNED> &a, const HWOffsetFix<48,0,UNSIGNED> &b );
template HWRawBits<32> slice<0,32>(const HWRawBits<320> &a);
template HWRawBits<320> KernelManagerBlockSync::readInput< HWRawBits<320> >(const t_port_number port_number);
template HWOffsetFix<16,0,UNSIGNED> cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(const HWOffsetFix<19,4,UNSIGNED> &a);
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<17,0,UNSIGNED> &a, const HWOffsetFix<17,0,UNSIGNED> &b );
template HWOffsetFix<32,-24,TWOSCOMPLEMENT>add_fixed <32,-24,TWOSCOMPLEMENT,TONEAREVEN,32,-24,TWOSCOMPLEMENT,32,-24,TWOSCOMPLEMENT, false>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a, const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWRawBits<32> slice<128,32>(const HWRawBits<320> &a);
template HWOffsetFix<17,0,UNSIGNED>add_fixed <17,0,UNSIGNED,TRUNCATE,17,0,UNSIGNED,17,0,UNSIGNED, false>(const HWOffsetFix<17,0,UNSIGNED> &a, const HWOffsetFix<17,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<48,0,UNSIGNED> cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<49,0,UNSIGNED> &a);
template HWOffsetFix<16,0,UNSIGNED>add_fixed <16,0,UNSIGNED,TONEAREVEN,16,0,UNSIGNED,16,0,UNSIGNED, false>(const HWOffsetFix<16,0,UNSIGNED> &a, const HWOffsetFix<16,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWRawBits<32> slice<256,32>(const HWRawBits<320> &a);
template HWRawBits<16> cast_fixed2bits<>(const HWOffsetFix<16,0,UNSIGNED> &a);
template HWOffsetFix<1,0,UNSIGNED>not_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a );
template HWOffsetFix<49,0,UNSIGNED>add_fixed <49,0,UNSIGNED,TRUNCATE,49,0,UNSIGNED,49,0,UNSIGNED, false>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWRawBits<32> slice<224,32>(const HWRawBits<320> &a);
template HWOffsetFix<1,0,UNSIGNED>lt_fixed<>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a, const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &b );
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<1,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<16,6,UNSIGNED> cast_bits2fixed<16,6,UNSIGNED>(const HWRawBits<16> &a);
template HWRawBits<32> slice<288,32>(const HWRawBits<320> &a);
template HWRawBits<32> slice<96,32>(const HWRawBits<320> &a);
template HWRawBits<32> slice<32,32>(const HWRawBits<320> &a);
template HWOffsetFix<9,0,UNSIGNED> cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(const HWOffsetFix<16,0,UNSIGNED> &a);
template HWOffsetFix<48,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name);
template HWRawBits<32> slice<160,32>(const HWRawBits<320> &a);
template HWRawBits<32> slice<192,32>(const HWRawBits<320> &a);
template HWOffsetFix<19,4,UNSIGNED>add_fixed <19,4,UNSIGNED,TONEAREVEN,16,4,UNSIGNED,16,6,UNSIGNED, false>(const HWOffsetFix<16,4,UNSIGNED> &a, const HWOffsetFix<16,6,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<32,-24,TWOSCOMPLEMENT>mul_fixed <32,-24,TWOSCOMPLEMENT,TONEAREVEN,32,-24,TWOSCOMPLEMENT,32,-24,TWOSCOMPLEMENT, false>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a, const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &b , EXCEPTOVERFLOW);
template HWOffsetFix<32,-24,TWOSCOMPLEMENT> cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(const HWRawBits<32> &a);
template HWOffsetFix<16,0,UNSIGNED> cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<17,0,UNSIGNED> &a);
template void KernelManagerBlockSync::writeOutput< HWOffsetFix<32,-24,TWOSCOMPLEMENT> >(const t_port_number port_number, const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &value);
template void KernelManagerBlockSync::setMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name, const HWOffsetFix<48,0,UNSIGNED> & value);


// Additional Code

