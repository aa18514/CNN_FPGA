#include "stdsimheader.h"
//#include "maxpooling00.h"
//#include "HWTypes.h"
//#include "KernelManagerBlockSync.h"

using namespace maxcompilersim;

// Templated Types used in the kernel
template class HWRawBits<64>;
template class HWOffsetFix<32,-24,TWOSCOMPLEMENT>;
template class HWOffsetFix<1,0,UNSIGNED>;
template class HWRawBits<32>;
template class HWRawBits<96>;
template class HWOffsetFix<48,0,UNSIGNED>;
template class HWOffsetFix<49,0,UNSIGNED>;
template class HWRawBits<160>;
template class HWOffsetFix<33,0,UNSIGNED>;
template class HWRawBits<128>;
template class HWOffsetFix<32,0,UNSIGNED>;
// add. templates from the default formatter 


// Templated Methods/Functions
template HWOffsetFix<1,0,UNSIGNED>and_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWRawBits<32> slice<32,32>(const HWRawBits<160> &a);
template HWRawBits<160> cat<>(const HWRawBits<32> &a, const HWRawBits<128> &b);
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<48,0,UNSIGNED> &a, const HWOffsetFix<48,0,UNSIGNED> &b );
template HWRawBits<32> slice<0,32>(const HWRawBits<160> &a);
template HWOffsetFix<1,0,UNSIGNED>lt_fixed<>(const HWOffsetFix<32,0,UNSIGNED> &a, const HWOffsetFix<32,0,UNSIGNED> &b );
template HWRawBits<32> cast_fixed2bits<>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a);
template HWOffsetFix<32,0,UNSIGNED> cast_fixed2fixed<32,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<33,0,UNSIGNED> &a);
template HWRawBits<160> KernelManagerBlockSync::readInput< HWRawBits<160> >(const t_port_number port_number);
template HWOffsetFix<1,0,UNSIGNED>or_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWRawBits<128> cat<>(const HWRawBits<32> &a, const HWRawBits<96> &b);
template void KernelManagerBlockSync::writeOutput< HWRawBits<160> >(const t_port_number port_number, const HWRawBits<160> &value);
template HWOffsetFix<48,0,UNSIGNED> cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<49,0,UNSIGNED> &a);
template HWRawBits<64> cat<>(const HWRawBits<32> &a, const HWRawBits<32> &b);
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<32,0,UNSIGNED> &a, const HWOffsetFix<32,0,UNSIGNED> &b );
template HWRawBits<32> slice<96,32>(const HWRawBits<160> &a);
template HWOffsetFix<1,0,UNSIGNED>gt_fixed<>(const HWOffsetFix<32,0,UNSIGNED> &a, const HWOffsetFix<32,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a, const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &b );
template HWRawBits<32> slice<128,32>(const HWRawBits<160> &a);
template HWOffsetFix<1,0,UNSIGNED>not_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a );
template HWOffsetFix<49,0,UNSIGNED>add_fixed <49,0,UNSIGNED,TRUNCATE,49,0,UNSIGNED,49,0,UNSIGNED, false>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<1,0,UNSIGNED>lt_fixed<>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a, const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &b );
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<1,0,UNSIGNED> >(const std::string &name);
template HWRawBits<96> cat<>(const HWRawBits<32> &a, const HWRawBits<64> &b);
template HWOffsetFix<1,0,UNSIGNED>gt_fixed<>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a, const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &b );
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<33,0,UNSIGNED> &a, const HWOffsetFix<33,0,UNSIGNED> &b );
template HWOffsetFix<48,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<33,0,UNSIGNED>add_fixed <33,0,UNSIGNED,TRUNCATE,33,0,UNSIGNED,33,0,UNSIGNED, false>(const HWOffsetFix<33,0,UNSIGNED> &a, const HWOffsetFix<33,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<32,-24,TWOSCOMPLEMENT> cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(const HWRawBits<32> &a);
template HWRawBits<32> slice<64,32>(const HWRawBits<160> &a);
template void KernelManagerBlockSync::setMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name, const HWOffsetFix<48,0,UNSIGNED> & value);


// Additional Code

