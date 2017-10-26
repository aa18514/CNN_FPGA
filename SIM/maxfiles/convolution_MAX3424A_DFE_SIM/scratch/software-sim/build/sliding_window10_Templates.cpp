#include "stdsimheader.h"
//#include "sliding_window10.h"
//#include "HWTypes.h"
//#include "KernelManagerBlockSync.h"

using namespace maxcompilersim;

// Templated Types used in the kernel
template class HWRawBits<832>;
template class HWRawBits<256>;
template class HWRawBits<384>;
template class HWRawBits<1216>;
template class HWRawBits<1120>;
template class HWRawBits<288>;
template class HWRawBits<320>;
template class HWRawBits<96>;
template class HWOffsetFix<49,0,UNSIGNED>;
template class HWOffsetFix<33,0,UNSIGNED>;
template class HWRawBits<448>;
template class HWRawBits<736>;
template class HWRawBits<64>;
template class HWRawBits<1248>;
template class HWRawBits<1056>;
template class HWOffsetFix<1,0,UNSIGNED>;
template class HWRawBits<32>;
template class HWRawBits<160>;
template class HWRawBits<640>;
template class HWRawBits<192>;
template class HWRawBits<576>;
template class HWRawBits<1152>;
template class HWRawBits<928>;
template class HWRawBits<512>;
template class HWRawBits<1184>;
template class HWRawBits<608>;
template class HWRawBits<416>;
template class HWRawBits<352>;
template class HWOffsetFix<48,0,UNSIGNED>;
template class HWRawBits<768>;
template class HWRawBits<1024>;
template class HWRawBits<864>;
template class HWRawBits<1280>;
template class HWRawBits<800>;
template class HWOffsetFix<16,0,UNSIGNED>;
template class HWOffsetFix<32,0,UNSIGNED>;
template class HWRawBits<128>;
template class HWRawBits<896>;
template class HWOffsetFix<32,-24,TWOSCOMPLEMENT>;
template class HWRawBits<480>;
template class HWFloat<8,24>;
template class HWRawBits<704>;
template class HWRawBits<672>;
template class HWOffsetFix<17,0,UNSIGNED>;
template class HWRawBits<992>;
template class HWRawBits<544>;
template class HWRawBits<224>;
template class HWRawBits<960>;
template class HWRawBits<1088>;
// add. templates from the default formatter 


// Templated Methods/Functions
template HWRawBits<352> cat<>(const HWRawBits<32> &a, const HWRawBits<320> &b);
template HWRawBits<384> cat<>(const HWRawBits<32> &a, const HWRawBits<352> &b);
template HWRawBits<160> cat<>(const HWRawBits<32> &a, const HWRawBits<128> &b);
template HWRawBits<1248> cat<>(const HWRawBits<32> &a, const HWRawBits<1216> &b);
template HWRawBits<704> cat<>(const HWRawBits<32> &a, const HWRawBits<672> &b);
template HWRawBits<672> cat<>(const HWRawBits<32> &a, const HWRawBits<640> &b);
template HWRawBits<896> cat<>(const HWRawBits<32> &a, const HWRawBits<864> &b);
template HWRawBits<32> cast_fixed2bits<>(const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &a);
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<17,0,UNSIGNED> &a, const HWOffsetFix<17,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED>or_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWRawBits<224> cat<>(const HWRawBits<32> &a, const HWRawBits<192> &b);
template HWOffsetFix<17,0,UNSIGNED>add_fixed <17,0,UNSIGNED,TRUNCATE,17,0,UNSIGNED,17,0,UNSIGNED, false>(const HWOffsetFix<17,0,UNSIGNED> &a, const HWOffsetFix<17,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWRawBits<864> cat<>(const HWRawBits<32> &a, const HWRawBits<832> &b);
template HWRawBits<64> cat<>(const HWRawBits<32> &a, const HWRawBits<32> &b);
template HWRawBits<1184> cat<>(const HWRawBits<32> &a, const HWRawBits<1152> &b);
template HWOffsetFix<1,0,UNSIGNED>gt_fixed<>(const HWOffsetFix<32,0,UNSIGNED> &a, const HWOffsetFix<32,0,UNSIGNED> &b );
template HWRawBits<1056> cat<>(const HWRawBits<32> &a, const HWRawBits<1024> &b);
template HWOffsetFix<32,-24,TWOSCOMPLEMENT> cast_float2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(const HWFloat<8,24> &a);
template HWRawBits<256> cat<>(const HWRawBits<32> &a, const HWRawBits<224> &b);
template HWRawBits<288> cat<>(const HWRawBits<32> &a, const HWRawBits<256> &b);
template HWOffsetFix<49,0,UNSIGNED>add_fixed <49,0,UNSIGNED,TRUNCATE,49,0,UNSIGNED,49,0,UNSIGNED, false>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWOffsetFix<1,0,UNSIGNED>lt_fixed<>(const HWOffsetFix<16,0,UNSIGNED> &a, const HWOffsetFix<16,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<1,0,UNSIGNED> >(const std::string &name);
template HWRawBits<928> cat<>(const HWRawBits<32> &a, const HWRawBits<896> &b);
template HWRawBits<768> cat<>(const HWRawBits<32> &a, const HWRawBits<736> &b);
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<33,0,UNSIGNED> &a, const HWOffsetFix<33,0,UNSIGNED> &b );
template HWRawBits<608> cat<>(const HWRawBits<32> &a, const HWRawBits<576> &b);
template HWRawBits<1216> cat<>(const HWRawBits<32> &a, const HWRawBits<1184> &b);
template HWRawBits<448> cat<>(const HWRawBits<32> &a, const HWRawBits<416> &b);
template HWRawBits<416> cat<>(const HWRawBits<32> &a, const HWRawBits<384> &b);
template HWOffsetFix<16,0,UNSIGNED> cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<17,0,UNSIGNED> &a);
template HWRawBits<320> cat<>(const HWRawBits<32> &a, const HWRawBits<288> &b);
template HWRawBits<1280> cat<>(const HWRawBits<32> &a, const HWRawBits<1248> &b);
template void KernelManagerBlockSync::setMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name, const HWOffsetFix<48,0,UNSIGNED> & value);
template HWRawBits<736> cat<>(const HWRawBits<32> &a, const HWRawBits<704> &b);
template HWOffsetFix<1,0,UNSIGNED>and_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a, const HWOffsetFix<1,0,UNSIGNED> &b );
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<16,0,UNSIGNED> &a, const HWOffsetFix<16,0,UNSIGNED> &b );
template HWRawBits<192> cat<>(const HWRawBits<32> &a, const HWRawBits<160> &b);
template HWRawBits<1024> cat<>(const HWRawBits<32> &a, const HWRawBits<992> &b);
template HWOffsetFix<1,0,UNSIGNED>eq_fixed<>(const HWOffsetFix<48,0,UNSIGNED> &a, const HWOffsetFix<48,0,UNSIGNED> &b );
template void KernelManagerBlockSync::writeOutput< HWRawBits<1280> >(const t_port_number port_number, const HWRawBits<1280> &value);
template HWOffsetFix<1,0,UNSIGNED>lt_fixed<>(const HWOffsetFix<32,0,UNSIGNED> &a, const HWOffsetFix<32,0,UNSIGNED> &b );
template HWRawBits<1088> cat<>(const HWRawBits<32> &a, const HWRawBits<1056> &b);
template HWFloat<8,24> cast_bits2float<8,24>(const HWRawBits<32> &a);
template HWOffsetFix<32,0,UNSIGNED> cast_fixed2fixed<32,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<33,0,UNSIGNED> &a);
template HWRawBits<128> cat<>(const HWRawBits<32> &a, const HWRawBits<96> &b);
template HWOffsetFix<48,0,UNSIGNED> cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>(const HWOffsetFix<49,0,UNSIGNED> &a);
template HWRawBits<512> cat<>(const HWRawBits<32> &a, const HWRawBits<480> &b);
template HWRawBits<640> cat<>(const HWRawBits<32> &a, const HWRawBits<608> &b);
template HWOffsetFix<1,0,UNSIGNED>not_fixed<>(const HWOffsetFix<1,0,UNSIGNED> &a );
template HWOffsetFix<1,0,UNSIGNED>gte_fixed<>(const HWOffsetFix<49,0,UNSIGNED> &a, const HWOffsetFix<49,0,UNSIGNED> &b );
template HWRawBits<1120> cat<>(const HWRawBits<32> &a, const HWRawBits<1088> &b);
template HWRawBits<576> cat<>(const HWRawBits<32> &a, const HWRawBits<544> &b);
template HWRawBits<992> cat<>(const HWRawBits<32> &a, const HWRawBits<960> &b);
template HWRawBits<96> cat<>(const HWRawBits<32> &a, const HWRawBits<64> &b);
template HWRawBits<832> cat<>(const HWRawBits<32> &a, const HWRawBits<800> &b);
template HWRawBits<960> cat<>(const HWRawBits<32> &a, const HWRawBits<928> &b);
template HWRawBits<1152> cat<>(const HWRawBits<32> &a, const HWRawBits<1120> &b);
template HWOffsetFix<48,0,UNSIGNED> KernelManagerBlockSync::getMappedRegValue< HWOffsetFix<48,0,UNSIGNED> >(const std::string &name);
template HWOffsetFix<33,0,UNSIGNED>add_fixed <33,0,UNSIGNED,TRUNCATE,33,0,UNSIGNED,33,0,UNSIGNED, false>(const HWOffsetFix<33,0,UNSIGNED> &a, const HWOffsetFix<33,0,UNSIGNED> &b , EXCEPTOVERFLOW);
template HWRawBits<480> cat<>(const HWRawBits<32> &a, const HWRawBits<448> &b);
template HWRawBits<32> KernelManagerBlockSync::readInput< HWRawBits<32> >(const t_port_number port_number);
template HWRawBits<800> cat<>(const HWRawBits<32> &a, const HWRawBits<768> &b);
template HWRawBits<544> cat<>(const HWRawBits<32> &a, const HWRawBits<512> &b);


// Additional Code

