#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "convolutionKernel00_exec1.h"
//#include "convolutionKernel00_exec2.h"
//#include "convolutionKernel00.h"

namespace maxcompilersim {

convolutionKernel00Block2Vars convolutionKernel00::execute1(const convolutionKernel00Block1Vars &in_vars) {
  { // Node ID: 1023 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1023in_a = id1006out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1023in_b = id1007out_result[getCycle()%8];

    id1023out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1023in_a,id1023in_b));
  }
  HWRawBits<64> id1563out_dataout;

  { // Node ID: 1563 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1563in_datain = id1453out_dataa[getCycle()%3];

    id1563out_dataout = (shift_left_fixed(id1563in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id495out_output;

  { // Node ID: 495 (NodeReinterpret)
    const HWRawBits<64> &id495in_input = id1563out_dataout;

    id495out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id495in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id496out_o;

  { // Node ID: 496 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id496in_i = id495out_output;

    id496out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id496in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id497out_o;

  { // Node ID: 497 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id497in_i = id496out_o;

    id497out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id497in_i));
  }
  { // Node ID: 1008 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1008in_a = id497out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1008in_b = in_vars.id56out_output;

    id1008out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1008in_a,id1008in_b));
  }
  HWRawBits<64> id1564out_dataout;

  { // Node ID: 1564 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1564in_datain = id1453out_dataa[getCycle()%3];

    id1564out_dataout = (shift_left_fixed(id1564in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id500out_output;

  { // Node ID: 500 (NodeReinterpret)
    const HWRawBits<64> &id500in_input = id1564out_dataout;

    id500out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id500in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id501out_o;

  { // Node ID: 501 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id501in_i = id500out_output;

    id501out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id501in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id502out_o;

  { // Node ID: 502 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id502in_i = id501out_o;

    id502out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id502in_i));
  }
  { // Node ID: 1009 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1009in_a = id502out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1009in_b = in_vars.id58out_output;

    id1009out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1009in_a,id1009in_b));
  }
  { // Node ID: 1024 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1024in_a = id1008out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1024in_b = id1009out_result[getCycle()%8];

    id1024out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1024in_a,id1024in_b));
  }
  { // Node ID: 1031 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1031in_a = id1023out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1031in_b = id1024out_result[getCycle()%2];

    id1031out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1031in_a,id1031in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id503out_o;

  { // Node ID: 503 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id503in_i = id133out_result[getCycle()%2];

    id503out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id503in_i));
  }
  { // Node ID: 1454 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1454in_addra = id503out_o;

    long id1454x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1454x_2;

    (id1454x_1) = (id1454in_addra.getValueAsLong());
    switch(((long)((id1454x_1)<(4l)))) {
      case 0l:
        id1454x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1454x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom19", id1454x_1) );
        break;
      default:
        id1454x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1454out_dataa[(getCycle()+2)%3] = (id1454x_2);
  }
  HWRawBits<64> id1693out_output;

  { // Node ID: 1693 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1693in_input = id1454out_dataa[getCycle()%3];

    id1693out_output = (cast_fixed2bits(id1693in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id506out_output;

  { // Node ID: 506 (NodeReinterpret)
    const HWRawBits<64> &id506in_input = id1693out_output;

    id506out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id506in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id507out_o;

  { // Node ID: 507 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id507in_i = id506out_output;

    id507out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id507in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id508out_o;

  { // Node ID: 508 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id508in_i = id507out_o;

    id508out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id508in_i));
  }
  { // Node ID: 1010 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1010in_a = id508out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1010in_b = in_vars.id60out_output;

    id1010out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1010in_a,id1010in_b));
  }
  HWRawBits<64> id1566out_dataout;

  { // Node ID: 1566 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1566in_datain = id1454out_dataa[getCycle()%3];

    id1566out_dataout = (shift_left_fixed(id1566in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id511out_output;

  { // Node ID: 511 (NodeReinterpret)
    const HWRawBits<64> &id511in_input = id1566out_dataout;

    id511out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id511in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id512out_o;

  { // Node ID: 512 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id512in_i = id511out_output;

    id512out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id512in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id513out_o;

  { // Node ID: 513 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id513in_i = id512out_o;

    id513out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id513in_i));
  }
  { // Node ID: 1011 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1011in_a = id513out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1011in_b = in_vars.id62out_output;

    id1011out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1011in_a,id1011in_b));
  }
  { // Node ID: 1025 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1025in_a = id1010out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1025in_b = id1011out_result[getCycle()%8];

    id1025out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1025in_a,id1025in_b));
  }
  HWRawBits<64> id1567out_dataout;

  { // Node ID: 1567 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1567in_datain = id1454out_dataa[getCycle()%3];

    id1567out_dataout = (shift_left_fixed(id1567in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id516out_output;

  { // Node ID: 516 (NodeReinterpret)
    const HWRawBits<64> &id516in_input = id1567out_dataout;

    id516out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id516in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id517out_o;

  { // Node ID: 517 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id517in_i = id516out_output;

    id517out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id517in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id518out_o;

  { // Node ID: 518 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id518in_i = id517out_o;

    id518out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id518in_i));
  }
  { // Node ID: 1012 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1012in_a = id518out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1012in_b = in_vars.id64out_output;

    id1012out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1012in_a,id1012in_b));
  }
  HWRawBits<64> id1568out_dataout;

  { // Node ID: 1568 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1568in_datain = id1454out_dataa[getCycle()%3];

    id1568out_dataout = (shift_left_fixed(id1568in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id521out_output;

  { // Node ID: 521 (NodeReinterpret)
    const HWRawBits<64> &id521in_input = id1568out_dataout;

    id521out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id521in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id522out_o;

  { // Node ID: 522 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id522in_i = id521out_output;

    id522out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id522in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id523out_o;

  { // Node ID: 523 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id523in_i = id522out_o;

    id523out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id523in_i));
  }
  { // Node ID: 1013 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1013in_a = id523out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1013in_b = in_vars.id66out_output;

    id1013out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1013in_a,id1013in_b));
  }
  { // Node ID: 1026 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1026in_a = id1012out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1026in_b = id1013out_result[getCycle()%8];

    id1026out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1026in_a,id1026in_b));
  }
  { // Node ID: 1032 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1032in_a = id1025out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1032in_b = id1026out_result[getCycle()%2];

    id1032out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1032in_a,id1032in_b));
  }
  { // Node ID: 1035 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1035in_a = id1031out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1035in_b = id1032out_result[getCycle()%2];

    id1035out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1035in_a,id1035in_b));
  }
  { // Node ID: 1747 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1747in_input = id1035out_result[getCycle()%2];

    id1747out_output[(getCycle()+1)%2] = id1747in_input;
  }
  HWOffsetFix<2,0,UNSIGNED> id398out_o;

  { // Node ID: 398 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id398in_i = id133out_result[getCycle()%2];

    id398out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id398in_i));
  }
  { // Node ID: 1449 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1449in_addra = id398out_o;

    long id1449x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1449x_2;

    (id1449x_1) = (id1449in_addra.getValueAsLong());
    switch(((long)((id1449x_1)<(4l)))) {
      case 0l:
        id1449x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1449x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom14", id1449x_1) );
        break;
      default:
        id1449x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1449out_dataa[(getCycle()+2)%3] = (id1449x_2);
  }
  HWRawBits<64> id1694out_output;

  { // Node ID: 1694 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1694in_input = id1449out_dataa[getCycle()%3];

    id1694out_output = (cast_fixed2bits(id1694in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id401out_output;

  { // Node ID: 401 (NodeReinterpret)
    const HWRawBits<64> &id401in_input = id1694out_output;

    id401out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id401in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id402out_o;

  { // Node ID: 402 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id402in_i = id401out_output;

    id402out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id402in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id403out_o;

  { // Node ID: 403 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id403in_i = id402out_o;

    id403out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id403in_i));
  }
  { // Node ID: 990 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id990in_a = id403out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id990in_b = in_vars.id20out_output;

    id990out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id990in_a,id990in_b));
  }
  HWRawBits<64> id1570out_dataout;

  { // Node ID: 1570 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1570in_datain = id1449out_dataa[getCycle()%3];

    id1570out_dataout = (shift_left_fixed(id1570in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id406out_output;

  { // Node ID: 406 (NodeReinterpret)
    const HWRawBits<64> &id406in_input = id1570out_dataout;

    id406out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id406in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id407out_o;

  { // Node ID: 407 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id407in_i = id406out_output;

    id407out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id407in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id408out_o;

  { // Node ID: 408 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id408in_i = id407out_o;

    id408out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id408in_i));
  }
  { // Node ID: 991 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id991in_a = id408out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id991in_b = in_vars.id22out_output;

    id991out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id991in_a,id991in_b));
  }
  { // Node ID: 1015 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1015in_a = id990out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1015in_b = id991out_result[getCycle()%8];

    id1015out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1015in_a,id1015in_b));
  }
  HWRawBits<64> id1571out_dataout;

  { // Node ID: 1571 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1571in_datain = id1449out_dataa[getCycle()%3];

    id1571out_dataout = (shift_left_fixed(id1571in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id411out_output;

  { // Node ID: 411 (NodeReinterpret)
    const HWRawBits<64> &id411in_input = id1571out_dataout;

    id411out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id411in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id412out_o;

  { // Node ID: 412 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id412in_i = id411out_output;

    id412out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id412in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id413out_o;

  { // Node ID: 413 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id413in_i = id412out_o;

    id413out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id413in_i));
  }
  { // Node ID: 992 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id992in_a = id413out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id992in_b = in_vars.id24out_output;

    id992out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id992in_a,id992in_b));
  }
  HWRawBits<64> id1572out_dataout;

  { // Node ID: 1572 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1572in_datain = id1449out_dataa[getCycle()%3];

    id1572out_dataout = (shift_left_fixed(id1572in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id416out_output;

  { // Node ID: 416 (NodeReinterpret)
    const HWRawBits<64> &id416in_input = id1572out_dataout;

    id416out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id416in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id417out_o;

  { // Node ID: 417 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id417in_i = id416out_output;

    id417out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id417in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id418out_o;

  { // Node ID: 418 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id418in_i = id417out_o;

    id418out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id418in_i));
  }
  { // Node ID: 993 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id993in_a = id418out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id993in_b = in_vars.id26out_output;

    id993out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id993in_a,id993in_b));
  }
  { // Node ID: 1016 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1016in_a = id992out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1016in_b = id993out_result[getCycle()%8];

    id1016out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1016in_a,id1016in_b));
  }
  { // Node ID: 1027 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1027in_a = id1015out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1027in_b = id1016out_result[getCycle()%2];

    id1027out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1027in_a,id1027in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id419out_o;

  { // Node ID: 419 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id419in_i = id133out_result[getCycle()%2];

    id419out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id419in_i));
  }
  { // Node ID: 1450 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1450in_addra = id419out_o;

    long id1450x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1450x_2;

    (id1450x_1) = (id1450in_addra.getValueAsLong());
    switch(((long)((id1450x_1)<(4l)))) {
      case 0l:
        id1450x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1450x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom15", id1450x_1) );
        break;
      default:
        id1450x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1450out_dataa[(getCycle()+2)%3] = (id1450x_2);
  }
  HWRawBits<64> id1695out_output;

  { // Node ID: 1695 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1695in_input = id1450out_dataa[getCycle()%3];

    id1695out_output = (cast_fixed2bits(id1695in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id422out_output;

  { // Node ID: 422 (NodeReinterpret)
    const HWRawBits<64> &id422in_input = id1695out_output;

    id422out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id422in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id423out_o;

  { // Node ID: 423 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id423in_i = id422out_output;

    id423out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id423in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id424out_o;

  { // Node ID: 424 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id424in_i = id423out_o;

    id424out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id424in_i));
  }
  { // Node ID: 994 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id994in_a = id424out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id994in_b = in_vars.id28out_output;

    id994out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id994in_a,id994in_b));
  }
  HWRawBits<64> id1574out_dataout;

  { // Node ID: 1574 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1574in_datain = id1450out_dataa[getCycle()%3];

    id1574out_dataout = (shift_left_fixed(id1574in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id427out_output;

  { // Node ID: 427 (NodeReinterpret)
    const HWRawBits<64> &id427in_input = id1574out_dataout;

    id427out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id427in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id428out_o;

  { // Node ID: 428 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id428in_i = id427out_output;

    id428out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id428in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id429out_o;

  { // Node ID: 429 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id429in_i = id428out_o;

    id429out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id429in_i));
  }
  { // Node ID: 995 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id995in_a = id429out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id995in_b = in_vars.id30out_output;

    id995out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id995in_a,id995in_b));
  }
  { // Node ID: 1017 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1017in_a = id994out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1017in_b = id995out_result[getCycle()%8];

    id1017out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1017in_a,id1017in_b));
  }
  HWRawBits<64> id1575out_dataout;

  { // Node ID: 1575 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1575in_datain = id1450out_dataa[getCycle()%3];

    id1575out_dataout = (shift_left_fixed(id1575in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id432out_output;

  { // Node ID: 432 (NodeReinterpret)
    const HWRawBits<64> &id432in_input = id1575out_dataout;

    id432out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id432in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id433out_o;

  { // Node ID: 433 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id433in_i = id432out_output;

    id433out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id433in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id434out_o;

  { // Node ID: 434 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id434in_i = id433out_o;

    id434out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id434in_i));
  }
  { // Node ID: 996 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id996in_a = id434out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id996in_b = in_vars.id32out_output;

    id996out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id996in_a,id996in_b));
  }
  HWRawBits<64> id1576out_dataout;

  { // Node ID: 1576 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1576in_datain = id1450out_dataa[getCycle()%3];

    id1576out_dataout = (shift_left_fixed(id1576in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id437out_output;

  { // Node ID: 437 (NodeReinterpret)
    const HWRawBits<64> &id437in_input = id1576out_dataout;

    id437out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id437in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id438out_o;

  { // Node ID: 438 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id438in_i = id437out_output;

    id438out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id438in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id439out_o;

  { // Node ID: 439 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id439in_i = id438out_o;

    id439out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id439in_i));
  }
  { // Node ID: 997 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id997in_a = id439out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id997in_b = in_vars.id34out_output;

    id997out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id997in_a,id997in_b));
  }
  { // Node ID: 1018 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1018in_a = id996out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1018in_b = id997out_result[getCycle()%8];

    id1018out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1018in_a,id1018in_b));
  }
  { // Node ID: 1028 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1028in_a = id1017out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1028in_b = id1018out_result[getCycle()%2];

    id1028out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1028in_a,id1028in_b));
  }
  { // Node ID: 1033 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1033in_a = id1027out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1033in_b = id1028out_result[getCycle()%2];

    id1033out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1033in_a,id1033in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id440out_o;

  { // Node ID: 440 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id440in_i = id133out_result[getCycle()%2];

    id440out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id440in_i));
  }
  { // Node ID: 1451 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1451in_addra = id440out_o;

    long id1451x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1451x_2;

    (id1451x_1) = (id1451in_addra.getValueAsLong());
    switch(((long)((id1451x_1)<(4l)))) {
      case 0l:
        id1451x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1451x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom16", id1451x_1) );
        break;
      default:
        id1451x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1451out_dataa[(getCycle()+2)%3] = (id1451x_2);
  }
  HWRawBits<64> id1696out_output;

  { // Node ID: 1696 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1696in_input = id1451out_dataa[getCycle()%3];

    id1696out_output = (cast_fixed2bits(id1696in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id443out_output;

  { // Node ID: 443 (NodeReinterpret)
    const HWRawBits<64> &id443in_input = id1696out_output;

    id443out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id443in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id444out_o;

  { // Node ID: 444 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id444in_i = id443out_output;

    id444out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id444in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id445out_o;

  { // Node ID: 445 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id445in_i = id444out_o;

    id445out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id445in_i));
  }
  { // Node ID: 998 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id998in_a = id445out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id998in_b = in_vars.id36out_output;

    id998out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id998in_a,id998in_b));
  }
  HWRawBits<64> id1578out_dataout;

  { // Node ID: 1578 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1578in_datain = id1451out_dataa[getCycle()%3];

    id1578out_dataout = (shift_left_fixed(id1578in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id448out_output;

  { // Node ID: 448 (NodeReinterpret)
    const HWRawBits<64> &id448in_input = id1578out_dataout;

    id448out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id448in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id449out_o;

  { // Node ID: 449 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id449in_i = id448out_output;

    id449out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id449in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id450out_o;

  { // Node ID: 450 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id450in_i = id449out_o;

    id450out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id450in_i));
  }
  { // Node ID: 999 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id999in_a = id450out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id999in_b = in_vars.id38out_output;

    id999out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id999in_a,id999in_b));
  }
  { // Node ID: 1019 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1019in_a = id998out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1019in_b = id999out_result[getCycle()%8];

    id1019out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1019in_a,id1019in_b));
  }
  HWRawBits<64> id1579out_dataout;

  { // Node ID: 1579 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1579in_datain = id1451out_dataa[getCycle()%3];

    id1579out_dataout = (shift_left_fixed(id1579in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id453out_output;

  { // Node ID: 453 (NodeReinterpret)
    const HWRawBits<64> &id453in_input = id1579out_dataout;

    id453out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id453in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id454out_o;

  { // Node ID: 454 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id454in_i = id453out_output;

    id454out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id454in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id455out_o;

  { // Node ID: 455 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id455in_i = id454out_o;

    id455out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id455in_i));
  }
  { // Node ID: 1000 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1000in_a = id455out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1000in_b = in_vars.id40out_output;

    id1000out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1000in_a,id1000in_b));
  }
  HWRawBits<64> id1580out_dataout;

  { // Node ID: 1580 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1580in_datain = id1451out_dataa[getCycle()%3];

    id1580out_dataout = (shift_left_fixed(id1580in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id458out_output;

  { // Node ID: 458 (NodeReinterpret)
    const HWRawBits<64> &id458in_input = id1580out_dataout;

    id458out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id458in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id459out_o;

  { // Node ID: 459 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id459in_i = id458out_output;

    id459out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id459in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id460out_o;

  { // Node ID: 460 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id460in_i = id459out_o;

    id460out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id460in_i));
  }
  { // Node ID: 1001 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1001in_a = id460out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1001in_b = in_vars.id42out_output;

    id1001out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1001in_a,id1001in_b));
  }
  { // Node ID: 1020 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1020in_a = id1000out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1020in_b = id1001out_result[getCycle()%8];

    id1020out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1020in_a,id1020in_b));
  }
  { // Node ID: 1029 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1029in_a = id1019out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1029in_b = id1020out_result[getCycle()%2];

    id1029out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1029in_a,id1029in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id461out_o;

  { // Node ID: 461 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id461in_i = id133out_result[getCycle()%2];

    id461out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id461in_i));
  }
  { // Node ID: 1452 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1452in_addra = id461out_o;

    long id1452x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1452x_2;

    (id1452x_1) = (id1452in_addra.getValueAsLong());
    switch(((long)((id1452x_1)<(4l)))) {
      case 0l:
        id1452x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1452x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom17", id1452x_1) );
        break;
      default:
        id1452x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1452out_dataa[(getCycle()+2)%3] = (id1452x_2);
  }
  HWRawBits<64> id1697out_output;

  { // Node ID: 1697 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1697in_input = id1452out_dataa[getCycle()%3];

    id1697out_output = (cast_fixed2bits(id1697in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id464out_output;

  { // Node ID: 464 (NodeReinterpret)
    const HWRawBits<64> &id464in_input = id1697out_output;

    id464out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id464in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id465out_o;

  { // Node ID: 465 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id465in_i = id464out_output;

    id465out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id465in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id466out_o;

  { // Node ID: 466 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id466in_i = id465out_o;

    id466out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id466in_i));
  }
  { // Node ID: 1002 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1002in_a = id466out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1002in_b = in_vars.id44out_output;

    id1002out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1002in_a,id1002in_b));
  }
  HWRawBits<64> id1582out_dataout;

  { // Node ID: 1582 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1582in_datain = id1452out_dataa[getCycle()%3];

    id1582out_dataout = (shift_left_fixed(id1582in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id469out_output;

  { // Node ID: 469 (NodeReinterpret)
    const HWRawBits<64> &id469in_input = id1582out_dataout;

    id469out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id469in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id470out_o;

  { // Node ID: 470 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id470in_i = id469out_output;

    id470out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id470in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id471out_o;

  { // Node ID: 471 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id471in_i = id470out_o;

    id471out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id471in_i));
  }
  { // Node ID: 1003 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1003in_a = id471out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1003in_b = in_vars.id46out_output;

    id1003out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1003in_a,id1003in_b));
  }
  { // Node ID: 1021 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1021in_a = id1002out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1021in_b = id1003out_result[getCycle()%8];

    id1021out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1021in_a,id1021in_b));
  }
  HWRawBits<64> id1583out_dataout;

  { // Node ID: 1583 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1583in_datain = id1452out_dataa[getCycle()%3];

    id1583out_dataout = (shift_left_fixed(id1583in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id474out_output;

  { // Node ID: 474 (NodeReinterpret)
    const HWRawBits<64> &id474in_input = id1583out_dataout;

    id474out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id474in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id475out_o;

  { // Node ID: 475 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id475in_i = id474out_output;

    id475out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id475in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id476out_o;

  { // Node ID: 476 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id476in_i = id475out_o;

    id476out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id476in_i));
  }
  { // Node ID: 1004 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1004in_a = id476out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1004in_b = in_vars.id48out_output;

    id1004out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1004in_a,id1004in_b));
  }
  HWRawBits<64> id1584out_dataout;

  { // Node ID: 1584 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1584in_datain = id1452out_dataa[getCycle()%3];

    id1584out_dataout = (shift_left_fixed(id1584in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id479out_output;

  { // Node ID: 479 (NodeReinterpret)
    const HWRawBits<64> &id479in_input = id1584out_dataout;

    id479out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id479in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id480out_o;

  { // Node ID: 480 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id480in_i = id479out_output;

    id480out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id480in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id481out_o;

  { // Node ID: 481 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id481in_i = id480out_o;

    id481out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id481in_i));
  }
  { // Node ID: 1005 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1005in_a = id481out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1005in_b = in_vars.id50out_output;

    id1005out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1005in_a,id1005in_b));
  }
  { // Node ID: 1022 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1022in_a = id1004out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1022in_b = id1005out_result[getCycle()%8];

    id1022out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1022in_a,id1022in_b));
  }
  { // Node ID: 1030 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1030in_a = id1021out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1030in_b = id1022out_result[getCycle()%2];

    id1030out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1030in_a,id1030in_b));
  }
  { // Node ID: 1034 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1034in_a = id1029out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1034in_b = id1030out_result[getCycle()%2];

    id1034out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1034in_a,id1034in_b));
  }
  { // Node ID: 1036 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1036in_a = id1033out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1036in_b = id1034out_result[getCycle()%2];

    id1036out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1036in_a,id1036in_b));
  }
  { // Node ID: 1037 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1037in_a = id1747out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1037in_b = id1036out_result[getCycle()%2];

    id1037out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1037in_a,id1037in_b));
  }
  { // Node ID: 1038 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1038in_a = id1014out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1038in_b = id1037out_result[getCycle()%2];

    id1038out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1038in_a,id1038in_b));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1343out_output;

  { // Node ID: 1343 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1343in_input = id1341out_result[getCycle()%2];

    id1343out_output = id1343in_input;
  }
  { // Node ID: 1748 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1748in_input = id1343out_output;

    id1748out_output[(getCycle()+3)%4] = id1748in_input;
  }
  { // Node ID: 1340 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1340in_a = id1038out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1340in_b = id1748out_output[getCycle()%4];

    id1340out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1340in_a,id1340in_b));
  }
  { // Node ID: 1750 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1750in_input = id1038out_result[getCycle()%2];

    id1750out_output[(getCycle()+1)%2] = id1750in_input;
  }
  { // Node ID: 1341 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1341in_sel = id1723out_output[getCycle()%16];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1341in_option0 = id1340out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1341in_option1 = id1750out_output[getCycle()%2];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1341x_1;

    switch((id1341in_sel.getValueAsLong())) {
      case 0l:
        id1341x_1 = id1341in_option0;
        break;
      case 1l:
        id1341x_1 = id1341in_option1;
        break;
      default:
        id1341x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1341out_result[(getCycle()+1)%2] = (id1341x_1);
  }
  HWOffsetFix<16,2,UNSIGNED> id1585out_output;

  { // Node ID: 1585 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1585in_input = id1811out_output[getCycle()%14];

    id1585out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1585in_input))));
  }
  { // Node ID: 1586 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1586in_a = id1811out_output[getCycle()%14];
    const HWOffsetFix<16,2,UNSIGNED> &id1586in_b = id1585out_output;

    id1586out_result[(getCycle()+1)%2] = (add_fixed<19,0,UNSIGNED,TONEAREVEN>(id1586in_a,id1586in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1587out_o;

  { // Node ID: 1587 (NodeCast)
    const HWOffsetFix<19,0,UNSIGNED> &id1587in_i = id1586out_result[getCycle()%2];

    id1587out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1587in_i));
  }
  HWOffsetFix<16,2,UNSIGNED> id1588out_output;

  { // Node ID: 1588 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1588in_input = id1809out_output[getCycle()%18];

    id1588out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1588in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id1589out_output;

  { // Node ID: 1589 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1589in_input = id1809out_output[getCycle()%18];

    id1589out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id1589in_input))));
  }
  { // Node ID: 1590 (NodeAdd)
    const HWOffsetFix<16,2,UNSIGNED> &id1590in_a = id1588out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id1590in_b = id1589out_output;

    id1590out_result[(getCycle()+1)%2] = (add_fixed<19,2,UNSIGNED,TONEAREVEN>(id1590in_a,id1590in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1591out_o;

  { // Node ID: 1591 (NodeCast)
    const HWOffsetFix<19,2,UNSIGNED> &id1591in_i = id1590out_result[getCycle()%2];

    id1591out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1591in_i));
  }
  { // Node ID: 1336 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1336in_a = id1587out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id1336in_b = id1591out_o;

    id1336out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1336in_a,id1336in_b));
  }
  { // Node ID: 1818 (NodeConstantRawBits)
  }
  { // Node ID: 1338 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1338in_a = id1336out_result[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id1338in_b = id1818out_value;

    id1338out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1338in_a,id1338in_b));
  }
  HWOffsetFix<5,0,UNSIGNED> id1339out_o;

  { // Node ID: 1339 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id1339in_i = id1338out_result[getCycle()%2];

    id1339out_o = (cast_fixed2fixed<5,0,UNSIGNED,TONEAREVEN>(id1339in_i));
  }
  HWOffsetFix<16,2,UNSIGNED> id1592out_output;

  { // Node ID: 1592 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1592in_input = id1811out_output[getCycle()%14];

    id1592out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1592in_input))));
  }
  { // Node ID: 1593 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1593in_a = id1811out_output[getCycle()%14];
    const HWOffsetFix<16,2,UNSIGNED> &id1593in_b = id1592out_output;

    id1593out_result[(getCycle()+1)%2] = (add_fixed<19,0,UNSIGNED,TONEAREVEN>(id1593in_a,id1593in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1594out_o;

  { // Node ID: 1594 (NodeCast)
    const HWOffsetFix<19,0,UNSIGNED> &id1594in_i = id1593out_result[getCycle()%2];

    id1594out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1594in_i));
  }
  HWOffsetFix<16,2,UNSIGNED> id1595out_output;

  { // Node ID: 1595 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1595in_input = id1809out_output[getCycle()%18];

    id1595out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1595in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id1596out_output;

  { // Node ID: 1596 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1596in_input = id1809out_output[getCycle()%18];

    id1596out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id1596in_input))));
  }
  { // Node ID: 1597 (NodeAdd)
    const HWOffsetFix<16,2,UNSIGNED> &id1597in_a = id1595out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id1597in_b = id1596out_output;

    id1597out_result[(getCycle()+1)%2] = (add_fixed<19,2,UNSIGNED,TONEAREVEN>(id1597in_a,id1597in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1598out_o;

  { // Node ID: 1598 (NodeCast)
    const HWOffsetFix<19,2,UNSIGNED> &id1598in_i = id1597out_result[getCycle()%2];

    id1598out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1598in_i));
  }
  { // Node ID: 1348 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1348in_a = id1594out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id1348in_b = id1598out_o;

    id1348out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1348in_a,id1348in_b));
  }
  { // Node ID: 1817 (NodeConstantRawBits)
  }
  { // Node ID: 1350 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1350in_a = id1348out_result[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id1350in_b = id1817out_value;

    id1350out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1350in_a,id1350in_b));
  }
  HWOffsetFix<5,0,UNSIGNED> id1351out_o;

  { // Node ID: 1351 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id1351in_i = id1350out_result[getCycle()%2];

    id1351out_o = (cast_fixed2fixed<5,0,UNSIGNED,TONEAREVEN>(id1351in_i));
  }
  { // Node ID: 1432 (NodeMappedRom)
    const HWOffsetFix<5,0,UNSIGNED> &id1432in_addra = id1339out_o;
    const HWOffsetFix<5,0,UNSIGNED> &id1432in_addrb = id1351out_o;

    long id1432x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1432x_2;
    long id1432x_3;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1432x_4;

    (id1432x_1) = (id1432in_addra.getValueAsLong());
    switch(((long)((id1432x_1)<(20l)))) {
      case 0l:
        id1432x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id1432x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("replicated_mem_2_bias", id1432x_1) );
        break;
      default:
        id1432x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1432out_dataa[(getCycle()+2)%3] = (id1432x_2);
    (id1432x_3) = (id1432in_addrb.getValueAsLong());
    switch(((long)((id1432x_3)<(20l)))) {
      case 0l:
        id1432x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id1432x_4 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("replicated_mem_2_bias", id1432x_3) );
        break;
      default:
        id1432x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1432out_datab[(getCycle()+2)%3] = (id1432x_4);
  }
  { // Node ID: 1342 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1342in_a = id1341out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1342in_b = id1432out_dataa[getCycle()%3];

    id1342out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1342in_a,id1342in_b));
  }
  HWRawBits<32> id1411out_output;

  { // Node ID: 1411 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1411in_input = id1342out_result[getCycle()%2];

    id1411out_output = (cast_fixed2bits(id1411in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id392out_o;

  { // Node ID: 392 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id392in_i = id133out_result[getCycle()%2];

    id392out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id392in_i));
  }
  { // Node ID: 1759 (NodeFIFO)
    const HWOffsetFix<2,0,UNSIGNED> &id1759in_input = id392out_o;

    id1759out_output[(getCycle()+5)%6] = id1759in_input;
  }
  { // Node ID: 1448 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1448in_addra = id1759out_output[getCycle()%6];

    long id1448x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1448x_2;

    (id1448x_1) = (id1448in_addra.getValueAsLong());
    switch(((long)((id1448x_1)<(4l)))) {
      case 0l:
        id1448x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1448x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom13", id1448x_1) );
        break;
      default:
        id1448x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1448out_dataa[(getCycle()+2)%3] = (id1448x_2);
  }
  HWRawBits<64> id1698out_output;

  { // Node ID: 1698 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1698in_input = id1448out_dataa[getCycle()%3];

    id1698out_output = (cast_fixed2bits(id1698in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id395out_output;

  { // Node ID: 395 (NodeReinterpret)
    const HWRawBits<64> &id395in_input = id1698out_output;

    id395out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id395in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id396out_o;

  { // Node ID: 396 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id396in_i = id395out_output;

    id396out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id396in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id397out_o;

  { // Node ID: 397 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id397in_i = id396out_o;

    id397out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id397in_i));
  }
  { // Node ID: 916 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id916in_a = id397out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id916in_b = in_vars.id68out_output;

    id916out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id916in_a,id916in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id350out_o;

  { // Node ID: 350 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id350in_i = id133out_result[getCycle()%2];

    id350out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id350in_i));
  }
  { // Node ID: 1446 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1446in_addra = id350out_o;

    long id1446x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1446x_2;

    (id1446x_1) = (id1446in_addra.getValueAsLong());
    switch(((long)((id1446x_1)<(4l)))) {
      case 0l:
        id1446x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1446x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom11", id1446x_1) );
        break;
      default:
        id1446x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1446out_dataa[(getCycle()+2)%3] = (id1446x_2);
  }
  HWRawBits<64> id1699out_output;

  { // Node ID: 1699 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1699in_input = id1446out_dataa[getCycle()%3];

    id1699out_output = (cast_fixed2bits(id1699in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id353out_output;

  { // Node ID: 353 (NodeReinterpret)
    const HWRawBits<64> &id353in_input = id1699out_output;

    id353out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id353in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id354out_o;

  { // Node ID: 354 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id354in_i = id353out_output;

    id354out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id354in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id355out_o;

  { // Node ID: 355 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id355in_i = id354out_o;

    id355out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id355in_i));
  }
  { // Node ID: 908 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id908in_a = id355out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id908in_b = in_vars.id52out_output;

    id908out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id908in_a,id908in_b));
  }
  HWRawBits<64> id1601out_dataout;

  { // Node ID: 1601 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1601in_datain = id1446out_dataa[getCycle()%3];

    id1601out_dataout = (shift_left_fixed(id1601in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id358out_output;

  { // Node ID: 358 (NodeReinterpret)
    const HWRawBits<64> &id358in_input = id1601out_dataout;

    id358out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id358in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id359out_o;

  { // Node ID: 359 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id359in_i = id358out_output;

    id359out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id359in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id360out_o;

  { // Node ID: 360 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id360in_i = id359out_o;

    id360out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id360in_i));
  }
  { // Node ID: 909 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id909in_a = id360out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id909in_b = in_vars.id54out_output;

    id909out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id909in_a,id909in_b));
  }
  { // Node ID: 925 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id925in_a = id908out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id925in_b = id909out_result[getCycle()%8];

    id925out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id925in_a,id925in_b));
  }
  HWRawBits<64> id1602out_dataout;

  { // Node ID: 1602 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1602in_datain = id1446out_dataa[getCycle()%3];

    id1602out_dataout = (shift_left_fixed(id1602in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id363out_output;

  { // Node ID: 363 (NodeReinterpret)
    const HWRawBits<64> &id363in_input = id1602out_dataout;

    id363out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id363in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id364out_o;

  { // Node ID: 364 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id364in_i = id363out_output;

    id364out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id364in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id365out_o;

  { // Node ID: 365 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id365in_i = id364out_o;

    id365out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id365in_i));
  }
  { // Node ID: 910 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id910in_a = id365out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id910in_b = in_vars.id56out_output;

    id910out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id910in_a,id910in_b));
  }
  HWRawBits<64> id1603out_dataout;

  { // Node ID: 1603 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1603in_datain = id1446out_dataa[getCycle()%3];

    id1603out_dataout = (shift_left_fixed(id1603in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id368out_output;

  { // Node ID: 368 (NodeReinterpret)
    const HWRawBits<64> &id368in_input = id1603out_dataout;

    id368out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id368in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id369out_o;

  { // Node ID: 369 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id369in_i = id368out_output;

    id369out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id369in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id370out_o;

  { // Node ID: 370 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id370in_i = id369out_o;

    id370out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id370in_i));
  }
  { // Node ID: 911 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id911in_a = id370out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id911in_b = in_vars.id58out_output;

    id911out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id911in_a,id911in_b));
  }
  { // Node ID: 926 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id926in_a = id910out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id926in_b = id911out_result[getCycle()%8];

    id926out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id926in_a,id926in_b));
  }
  { // Node ID: 933 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id933in_a = id925out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id933in_b = id926out_result[getCycle()%2];

    id933out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id933in_a,id933in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id371out_o;

  { // Node ID: 371 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id371in_i = id133out_result[getCycle()%2];

    id371out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id371in_i));
  }
  { // Node ID: 1447 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1447in_addra = id371out_o;

    long id1447x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1447x_2;

    (id1447x_1) = (id1447in_addra.getValueAsLong());
    switch(((long)((id1447x_1)<(4l)))) {
      case 0l:
        id1447x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1447x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom12", id1447x_1) );
        break;
      default:
        id1447x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1447out_dataa[(getCycle()+2)%3] = (id1447x_2);
  }
  HWRawBits<64> id1700out_output;

  { // Node ID: 1700 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1700in_input = id1447out_dataa[getCycle()%3];

    id1700out_output = (cast_fixed2bits(id1700in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id374out_output;

  { // Node ID: 374 (NodeReinterpret)
    const HWRawBits<64> &id374in_input = id1700out_output;

    id374out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id374in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id375out_o;

  { // Node ID: 375 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id375in_i = id374out_output;

    id375out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id375in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id376out_o;

  { // Node ID: 376 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id376in_i = id375out_o;

    id376out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id376in_i));
  }
  { // Node ID: 912 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id912in_a = id376out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id912in_b = in_vars.id60out_output;

    id912out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id912in_a,id912in_b));
  }
  HWRawBits<64> id1605out_dataout;

  { // Node ID: 1605 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1605in_datain = id1447out_dataa[getCycle()%3];

    id1605out_dataout = (shift_left_fixed(id1605in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id379out_output;

  { // Node ID: 379 (NodeReinterpret)
    const HWRawBits<64> &id379in_input = id1605out_dataout;

    id379out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id379in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id380out_o;

  { // Node ID: 380 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id380in_i = id379out_output;

    id380out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id380in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id381out_o;

  { // Node ID: 381 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id381in_i = id380out_o;

    id381out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id381in_i));
  }
  { // Node ID: 913 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id913in_a = id381out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id913in_b = in_vars.id62out_output;

    id913out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id913in_a,id913in_b));
  }
  { // Node ID: 927 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id927in_a = id912out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id927in_b = id913out_result[getCycle()%8];

    id927out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id927in_a,id927in_b));
  }
  HWRawBits<64> id1606out_dataout;

  { // Node ID: 1606 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1606in_datain = id1447out_dataa[getCycle()%3];

    id1606out_dataout = (shift_left_fixed(id1606in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id384out_output;

  { // Node ID: 384 (NodeReinterpret)
    const HWRawBits<64> &id384in_input = id1606out_dataout;

    id384out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id384in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id385out_o;

  { // Node ID: 385 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id385in_i = id384out_output;

    id385out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id385in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id386out_o;

  { // Node ID: 386 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id386in_i = id385out_o;

    id386out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id386in_i));
  }
  { // Node ID: 914 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id914in_a = id386out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id914in_b = in_vars.id64out_output;

    id914out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id914in_a,id914in_b));
  }
  HWRawBits<64> id1607out_dataout;

  { // Node ID: 1607 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1607in_datain = id1447out_dataa[getCycle()%3];

    id1607out_dataout = (shift_left_fixed(id1607in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id389out_output;

  { // Node ID: 389 (NodeReinterpret)
    const HWRawBits<64> &id389in_input = id1607out_dataout;

    id389out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id389in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id390out_o;

  { // Node ID: 390 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id390in_i = id389out_output;

    id390out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id390in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id391out_o;

  { // Node ID: 391 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id391in_i = id390out_o;

    id391out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id391in_i));
  }
  { // Node ID: 915 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id915in_a = id391out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id915in_b = in_vars.id66out_output;

    id915out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id915in_a,id915in_b));
  }
  { // Node ID: 928 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id928in_a = id914out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id928in_b = id915out_result[getCycle()%8];

    id928out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id928in_a,id928in_b));
  }
  { // Node ID: 934 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id934in_a = id927out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id934in_b = id928out_result[getCycle()%2];

    id934out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id934in_a,id934in_b));
  }
  { // Node ID: 937 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id937in_a = id933out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id937in_b = id934out_result[getCycle()%2];

    id937out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id937in_a,id937in_b));
  }
  { // Node ID: 1760 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1760in_input = id937out_result[getCycle()%2];

    id1760out_output[(getCycle()+1)%2] = id1760in_input;
  }
  HWOffsetFix<2,0,UNSIGNED> id266out_o;

  { // Node ID: 266 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id266in_i = id133out_result[getCycle()%2];

    id266out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id266in_i));
  }
  { // Node ID: 1442 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1442in_addra = id266out_o;

    long id1442x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1442x_2;

    (id1442x_1) = (id1442in_addra.getValueAsLong());
    switch(((long)((id1442x_1)<(4l)))) {
      case 0l:
        id1442x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1442x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom7", id1442x_1) );
        break;
      default:
        id1442x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1442out_dataa[(getCycle()+2)%3] = (id1442x_2);
  }
  HWRawBits<64> id1701out_output;

  { // Node ID: 1701 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1701in_input = id1442out_dataa[getCycle()%3];

    id1701out_output = (cast_fixed2bits(id1701in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id269out_output;

  { // Node ID: 269 (NodeReinterpret)
    const HWRawBits<64> &id269in_input = id1701out_output;

    id269out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id269in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id270out_o;

  { // Node ID: 270 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id270in_i = id269out_output;

    id270out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id270in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id271out_o;

  { // Node ID: 271 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id271in_i = id270out_o;

    id271out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id271in_i));
  }
  { // Node ID: 892 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id892in_a = id271out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id892in_b = in_vars.id20out_output;

    id892out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id892in_a,id892in_b));
  }
  HWRawBits<64> id1609out_dataout;

  { // Node ID: 1609 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1609in_datain = id1442out_dataa[getCycle()%3];

    id1609out_dataout = (shift_left_fixed(id1609in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id274out_output;

  { // Node ID: 274 (NodeReinterpret)
    const HWRawBits<64> &id274in_input = id1609out_dataout;

    id274out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id274in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id275out_o;

  { // Node ID: 275 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id275in_i = id274out_output;

    id275out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id275in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id276out_o;

  { // Node ID: 276 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id276in_i = id275out_o;

    id276out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id276in_i));
  }
  { // Node ID: 893 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id893in_a = id276out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id893in_b = in_vars.id22out_output;

    id893out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id893in_a,id893in_b));
  }
  { // Node ID: 917 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id917in_a = id892out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id917in_b = id893out_result[getCycle()%8];

    id917out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id917in_a,id917in_b));
  }
  HWRawBits<64> id1610out_dataout;

  { // Node ID: 1610 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1610in_datain = id1442out_dataa[getCycle()%3];

    id1610out_dataout = (shift_left_fixed(id1610in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id279out_output;

  { // Node ID: 279 (NodeReinterpret)
    const HWRawBits<64> &id279in_input = id1610out_dataout;

    id279out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id279in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id280out_o;

  { // Node ID: 280 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id280in_i = id279out_output;

    id280out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id280in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id281out_o;

  { // Node ID: 281 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id281in_i = id280out_o;

    id281out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id281in_i));
  }
  { // Node ID: 894 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id894in_a = id281out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id894in_b = in_vars.id24out_output;

    id894out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id894in_a,id894in_b));
  }
  HWRawBits<64> id1611out_dataout;

  { // Node ID: 1611 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1611in_datain = id1442out_dataa[getCycle()%3];

    id1611out_dataout = (shift_left_fixed(id1611in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id284out_output;

  { // Node ID: 284 (NodeReinterpret)
    const HWRawBits<64> &id284in_input = id1611out_dataout;

    id284out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id284in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id285out_o;

  { // Node ID: 285 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id285in_i = id284out_output;

    id285out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id285in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id286out_o;

  { // Node ID: 286 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id286in_i = id285out_o;

    id286out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id286in_i));
  }
  { // Node ID: 895 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id895in_a = id286out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id895in_b = in_vars.id26out_output;

    id895out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id895in_a,id895in_b));
  }
  { // Node ID: 918 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id918in_a = id894out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id918in_b = id895out_result[getCycle()%8];

    id918out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id918in_a,id918in_b));
  }
  { // Node ID: 929 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id929in_a = id917out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id929in_b = id918out_result[getCycle()%2];

    id929out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id929in_a,id929in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id287out_o;

  { // Node ID: 287 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id287in_i = id133out_result[getCycle()%2];

    id287out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id287in_i));
  }
  { // Node ID: 1443 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1443in_addra = id287out_o;

    long id1443x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1443x_2;

    (id1443x_1) = (id1443in_addra.getValueAsLong());
    switch(((long)((id1443x_1)<(4l)))) {
      case 0l:
        id1443x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1443x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom8", id1443x_1) );
        break;
      default:
        id1443x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1443out_dataa[(getCycle()+2)%3] = (id1443x_2);
  }
  HWRawBits<64> id1702out_output;

  { // Node ID: 1702 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1702in_input = id1443out_dataa[getCycle()%3];

    id1702out_output = (cast_fixed2bits(id1702in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id290out_output;

  { // Node ID: 290 (NodeReinterpret)
    const HWRawBits<64> &id290in_input = id1702out_output;

    id290out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id290in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id291out_o;

  { // Node ID: 291 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id291in_i = id290out_output;

    id291out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id291in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id292out_o;

  { // Node ID: 292 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id292in_i = id291out_o;

    id292out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id292in_i));
  }
  { // Node ID: 896 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id896in_a = id292out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id896in_b = in_vars.id28out_output;

    id896out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id896in_a,id896in_b));
  }
  HWRawBits<64> id1613out_dataout;

  { // Node ID: 1613 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1613in_datain = id1443out_dataa[getCycle()%3];

    id1613out_dataout = (shift_left_fixed(id1613in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id295out_output;

  { // Node ID: 295 (NodeReinterpret)
    const HWRawBits<64> &id295in_input = id1613out_dataout;

    id295out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id295in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id296out_o;

  { // Node ID: 296 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id296in_i = id295out_output;

    id296out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id296in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id297out_o;

  { // Node ID: 297 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id297in_i = id296out_o;

    id297out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id297in_i));
  }
  { // Node ID: 897 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id897in_a = id297out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id897in_b = in_vars.id30out_output;

    id897out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id897in_a,id897in_b));
  }
  { // Node ID: 919 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id919in_a = id896out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id919in_b = id897out_result[getCycle()%8];

    id919out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id919in_a,id919in_b));
  }
  HWRawBits<64> id1614out_dataout;

  { // Node ID: 1614 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1614in_datain = id1443out_dataa[getCycle()%3];

    id1614out_dataout = (shift_left_fixed(id1614in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id300out_output;

  { // Node ID: 300 (NodeReinterpret)
    const HWRawBits<64> &id300in_input = id1614out_dataout;

    id300out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id300in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id301out_o;

  { // Node ID: 301 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id301in_i = id300out_output;

    id301out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id301in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id302out_o;

  { // Node ID: 302 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id302in_i = id301out_o;

    id302out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id302in_i));
  }
  { // Node ID: 898 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id898in_a = id302out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id898in_b = in_vars.id32out_output;

    id898out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id898in_a,id898in_b));
  }
  HWRawBits<64> id1615out_dataout;

  { // Node ID: 1615 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1615in_datain = id1443out_dataa[getCycle()%3];

    id1615out_dataout = (shift_left_fixed(id1615in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id305out_output;

  { // Node ID: 305 (NodeReinterpret)
    const HWRawBits<64> &id305in_input = id1615out_dataout;

    id305out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id305in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id306out_o;

  { // Node ID: 306 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id306in_i = id305out_output;

    id306out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id306in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id307out_o;

  { // Node ID: 307 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id307in_i = id306out_o;

    id307out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id307in_i));
  }
  { // Node ID: 899 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id899in_a = id307out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id899in_b = in_vars.id34out_output;

    id899out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id899in_a,id899in_b));
  }
  { // Node ID: 920 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id920in_a = id898out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id920in_b = id899out_result[getCycle()%8];

    id920out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id920in_a,id920in_b));
  }
  { // Node ID: 930 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id930in_a = id919out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id930in_b = id920out_result[getCycle()%2];

    id930out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id930in_a,id930in_b));
  }
  { // Node ID: 935 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id935in_a = id929out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id935in_b = id930out_result[getCycle()%2];

    id935out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id935in_a,id935in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id308out_o;

  { // Node ID: 308 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id308in_i = id133out_result[getCycle()%2];

    id308out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id308in_i));
  }
  { // Node ID: 1444 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1444in_addra = id308out_o;

    long id1444x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1444x_2;

    (id1444x_1) = (id1444in_addra.getValueAsLong());
    switch(((long)((id1444x_1)<(4l)))) {
      case 0l:
        id1444x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1444x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom9", id1444x_1) );
        break;
      default:
        id1444x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1444out_dataa[(getCycle()+2)%3] = (id1444x_2);
  }
  HWRawBits<64> id1703out_output;

  { // Node ID: 1703 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1703in_input = id1444out_dataa[getCycle()%3];

    id1703out_output = (cast_fixed2bits(id1703in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id311out_output;

  { // Node ID: 311 (NodeReinterpret)
    const HWRawBits<64> &id311in_input = id1703out_output;

    id311out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id311in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id312out_o;

  { // Node ID: 312 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id312in_i = id311out_output;

    id312out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id312in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id313out_o;

  { // Node ID: 313 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id313in_i = id312out_o;

    id313out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id313in_i));
  }
  { // Node ID: 900 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id900in_a = id313out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id900in_b = in_vars.id36out_output;

    id900out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id900in_a,id900in_b));
  }
  HWRawBits<64> id1617out_dataout;

  { // Node ID: 1617 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1617in_datain = id1444out_dataa[getCycle()%3];

    id1617out_dataout = (shift_left_fixed(id1617in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id316out_output;

  { // Node ID: 316 (NodeReinterpret)
    const HWRawBits<64> &id316in_input = id1617out_dataout;

    id316out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id316in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id317out_o;

  { // Node ID: 317 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id317in_i = id316out_output;

    id317out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id317in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id318out_o;

  { // Node ID: 318 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id318in_i = id317out_o;

    id318out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id318in_i));
  }
  { // Node ID: 901 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id901in_a = id318out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id901in_b = in_vars.id38out_output;

    id901out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id901in_a,id901in_b));
  }
  { // Node ID: 921 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id921in_a = id900out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id921in_b = id901out_result[getCycle()%8];

    id921out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id921in_a,id921in_b));
  }
  HWRawBits<64> id1618out_dataout;

  { // Node ID: 1618 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1618in_datain = id1444out_dataa[getCycle()%3];

    id1618out_dataout = (shift_left_fixed(id1618in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id321out_output;

  { // Node ID: 321 (NodeReinterpret)
    const HWRawBits<64> &id321in_input = id1618out_dataout;

    id321out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id321in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id322out_o;

  { // Node ID: 322 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id322in_i = id321out_output;

    id322out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id322in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id323out_o;

  { // Node ID: 323 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id323in_i = id322out_o;

    id323out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id323in_i));
  }
  { // Node ID: 902 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id902in_a = id323out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id902in_b = in_vars.id40out_output;

    id902out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id902in_a,id902in_b));
  }
  HWRawBits<64> id1619out_dataout;

  { // Node ID: 1619 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1619in_datain = id1444out_dataa[getCycle()%3];

    id1619out_dataout = (shift_left_fixed(id1619in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id326out_output;

  { // Node ID: 326 (NodeReinterpret)
    const HWRawBits<64> &id326in_input = id1619out_dataout;

    id326out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id326in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id327out_o;

  { // Node ID: 327 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id327in_i = id326out_output;

    id327out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id327in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id328out_o;

  { // Node ID: 328 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id328in_i = id327out_o;

    id328out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id328in_i));
  }
  { // Node ID: 903 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id903in_a = id328out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id903in_b = in_vars.id42out_output;

    id903out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id903in_a,id903in_b));
  }
  { // Node ID: 922 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id922in_a = id902out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id922in_b = id903out_result[getCycle()%8];

    id922out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id922in_a,id922in_b));
  }
  { // Node ID: 931 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id931in_a = id921out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id931in_b = id922out_result[getCycle()%2];

    id931out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id931in_a,id931in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id329out_o;

  { // Node ID: 329 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id329in_i = id133out_result[getCycle()%2];

    id329out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id329in_i));
  }
  { // Node ID: 1445 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1445in_addra = id329out_o;

    long id1445x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1445x_2;

    (id1445x_1) = (id1445in_addra.getValueAsLong());
    switch(((long)((id1445x_1)<(4l)))) {
      case 0l:
        id1445x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1445x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom10", id1445x_1) );
        break;
      default:
        id1445x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1445out_dataa[(getCycle()+2)%3] = (id1445x_2);
  }
  HWRawBits<64> id1704out_output;

  { // Node ID: 1704 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1704in_input = id1445out_dataa[getCycle()%3];

    id1704out_output = (cast_fixed2bits(id1704in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id332out_output;

  { // Node ID: 332 (NodeReinterpret)
    const HWRawBits<64> &id332in_input = id1704out_output;

    id332out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id332in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id333out_o;

  { // Node ID: 333 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id333in_i = id332out_output;

    id333out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id333in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id334out_o;

  { // Node ID: 334 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id334in_i = id333out_o;

    id334out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id334in_i));
  }
  { // Node ID: 904 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id904in_a = id334out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id904in_b = in_vars.id44out_output;

    id904out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id904in_a,id904in_b));
  }
  HWRawBits<64> id1621out_dataout;

  { // Node ID: 1621 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1621in_datain = id1445out_dataa[getCycle()%3];

    id1621out_dataout = (shift_left_fixed(id1621in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id337out_output;

  { // Node ID: 337 (NodeReinterpret)
    const HWRawBits<64> &id337in_input = id1621out_dataout;

    id337out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id337in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id338out_o;

  { // Node ID: 338 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id338in_i = id337out_output;

    id338out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id338in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id339out_o;

  { // Node ID: 339 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id339in_i = id338out_o;

    id339out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id339in_i));
  }
  { // Node ID: 905 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id905in_a = id339out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id905in_b = in_vars.id46out_output;

    id905out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id905in_a,id905in_b));
  }
  { // Node ID: 923 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id923in_a = id904out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id923in_b = id905out_result[getCycle()%8];

    id923out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id923in_a,id923in_b));
  }
  HWRawBits<64> id1622out_dataout;

  { // Node ID: 1622 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1622in_datain = id1445out_dataa[getCycle()%3];

    id1622out_dataout = (shift_left_fixed(id1622in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id342out_output;

  { // Node ID: 342 (NodeReinterpret)
    const HWRawBits<64> &id342in_input = id1622out_dataout;

    id342out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id342in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id343out_o;

  { // Node ID: 343 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id343in_i = id342out_output;

    id343out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id343in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id344out_o;

  { // Node ID: 344 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id344in_i = id343out_o;

    id344out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id344in_i));
  }
  { // Node ID: 906 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id906in_a = id344out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id906in_b = in_vars.id48out_output;

    id906out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id906in_a,id906in_b));
  }
  HWRawBits<64> id1623out_dataout;

  { // Node ID: 1623 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1623in_datain = id1445out_dataa[getCycle()%3];

    id1623out_dataout = (shift_left_fixed(id1623in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id347out_output;

  { // Node ID: 347 (NodeReinterpret)
    const HWRawBits<64> &id347in_input = id1623out_dataout;

    id347out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id347in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id348out_o;

  { // Node ID: 348 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id348in_i = id347out_output;

    id348out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id348in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id349out_o;

  { // Node ID: 349 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id349in_i = id348out_o;

    id349out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id349in_i));
  }
  { // Node ID: 907 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id907in_a = id349out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id907in_b = in_vars.id50out_output;

    id907out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id907in_a,id907in_b));
  }
  { // Node ID: 924 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id924in_a = id906out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id924in_b = id907out_result[getCycle()%8];

    id924out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id924in_a,id924in_b));
  }
  { // Node ID: 932 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id932in_a = id923out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id932in_b = id924out_result[getCycle()%2];

    id932out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id932in_a,id932in_b));
  }
  { // Node ID: 936 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id936in_a = id931out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id936in_b = id932out_result[getCycle()%2];

    id936out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id936in_a,id936in_b));
  }
  { // Node ID: 938 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id938in_a = id935out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id938in_b = id936out_result[getCycle()%2];

    id938out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id938in_a,id938in_b));
  }
  { // Node ID: 939 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id939in_a = id1760out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id939in_b = id938out_result[getCycle()%2];

    id939out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id939in_a,id939in_b));
  }
  { // Node ID: 940 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id940in_a = id916out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id940in_b = id939out_result[getCycle()%2];

    id940out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id940in_a,id940in_b));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1319out_output;

  { // Node ID: 1319 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1319in_input = id1317out_result[getCycle()%2];

    id1319out_output = id1319in_input;
  }
  { // Node ID: 1761 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1761in_input = id1319out_output;

    id1761out_output[(getCycle()+3)%4] = id1761in_input;
  }
  { // Node ID: 1316 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1316in_a = id940out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1316in_b = id1761out_output[getCycle()%4];

    id1316out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1316in_a,id1316in_b));
  }
  { // Node ID: 1763 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1763in_input = id940out_result[getCycle()%2];

    id1763out_output[(getCycle()+1)%2] = id1763in_input;
  }
  { // Node ID: 1317 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1317in_sel = id1723out_output[getCycle()%16];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1317in_option0 = id1316out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1317in_option1 = id1763out_output[getCycle()%2];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1317x_1;

    switch((id1317in_sel.getValueAsLong())) {
      case 0l:
        id1317x_1 = id1317in_option0;
        break;
      case 1l:
        id1317x_1 = id1317in_option1;
        break;
      default:
        id1317x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1317out_result[(getCycle()+1)%2] = (id1317x_1);
  }
  HWOffsetFix<16,2,UNSIGNED> id1624out_output;

  { // Node ID: 1624 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1624in_input = id1811out_output[getCycle()%14];

    id1624out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1624in_input))));
  }
  { // Node ID: 1625 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1625in_a = id1811out_output[getCycle()%14];
    const HWOffsetFix<16,2,UNSIGNED> &id1625in_b = id1624out_output;

    id1625out_result[(getCycle()+1)%2] = (add_fixed<19,0,UNSIGNED,TONEAREVEN>(id1625in_a,id1625in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1626out_o;

  { // Node ID: 1626 (NodeCast)
    const HWOffsetFix<19,0,UNSIGNED> &id1626in_i = id1625out_result[getCycle()%2];

    id1626out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1626in_i));
  }
  HWOffsetFix<16,2,UNSIGNED> id1627out_output;

  { // Node ID: 1627 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1627in_input = id1809out_output[getCycle()%18];

    id1627out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1627in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id1628out_output;

  { // Node ID: 1628 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1628in_input = id1809out_output[getCycle()%18];

    id1628out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id1628in_input))));
  }
  { // Node ID: 1629 (NodeAdd)
    const HWOffsetFix<16,2,UNSIGNED> &id1629in_a = id1627out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id1629in_b = id1628out_output;

    id1629out_result[(getCycle()+1)%2] = (add_fixed<19,2,UNSIGNED,TONEAREVEN>(id1629in_a,id1629in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1630out_o;

  { // Node ID: 1630 (NodeCast)
    const HWOffsetFix<19,2,UNSIGNED> &id1630in_i = id1629out_result[getCycle()%2];

    id1630out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1630in_i));
  }
  { // Node ID: 1312 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1312in_a = id1626out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id1312in_b = id1630out_o;

    id1312out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1312in_a,id1312in_b));
  }
  { // Node ID: 1816 (NodeConstantRawBits)
  }
  { // Node ID: 1314 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1314in_a = id1312out_result[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id1314in_b = id1816out_value;

    id1314out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1314in_a,id1314in_b));
  }
  HWOffsetFix<5,0,UNSIGNED> id1315out_o;

  { // Node ID: 1315 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id1315in_i = id1314out_result[getCycle()%2];

    id1315out_o = (cast_fixed2fixed<5,0,UNSIGNED,TONEAREVEN>(id1315in_i));
  }
  HWOffsetFix<16,2,UNSIGNED> id1631out_output;

  { // Node ID: 1631 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1631in_input = id1811out_output[getCycle()%14];

    id1631out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1631in_input))));
  }
  { // Node ID: 1632 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1632in_a = id1811out_output[getCycle()%14];
    const HWOffsetFix<16,2,UNSIGNED> &id1632in_b = id1631out_output;

    id1632out_result[(getCycle()+1)%2] = (add_fixed<19,0,UNSIGNED,TONEAREVEN>(id1632in_a,id1632in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1633out_o;

  { // Node ID: 1633 (NodeCast)
    const HWOffsetFix<19,0,UNSIGNED> &id1633in_i = id1632out_result[getCycle()%2];

    id1633out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1633in_i));
  }
  HWOffsetFix<16,2,UNSIGNED> id1634out_output;

  { // Node ID: 1634 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1634in_input = id1809out_output[getCycle()%18];

    id1634out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1634in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id1635out_output;

  { // Node ID: 1635 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1635in_input = id1809out_output[getCycle()%18];

    id1635out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id1635in_input))));
  }
  { // Node ID: 1636 (NodeAdd)
    const HWOffsetFix<16,2,UNSIGNED> &id1636in_a = id1634out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id1636in_b = id1635out_output;

    id1636out_result[(getCycle()+1)%2] = (add_fixed<19,2,UNSIGNED,TONEAREVEN>(id1636in_a,id1636in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1637out_o;

  { // Node ID: 1637 (NodeCast)
    const HWOffsetFix<19,2,UNSIGNED> &id1637in_i = id1636out_result[getCycle()%2];

    id1637out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1637in_i));
  }
  { // Node ID: 1324 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1324in_a = id1633out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id1324in_b = id1637out_o;

    id1324out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1324in_a,id1324in_b));
  }
  { // Node ID: 1815 (NodeConstantRawBits)
  }
  { // Node ID: 1326 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1326in_a = id1324out_result[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id1326in_b = id1815out_value;

    id1326out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1326in_a,id1326in_b));
  }
  HWOffsetFix<5,0,UNSIGNED> id1327out_o;

  { // Node ID: 1327 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id1327in_i = id1326out_result[getCycle()%2];

    id1327out_o = (cast_fixed2fixed<5,0,UNSIGNED,TONEAREVEN>(id1327in_i));
  }
  { // Node ID: 1431 (NodeMappedRom)
    const HWOffsetFix<5,0,UNSIGNED> &id1431in_addra = id1315out_o;
    const HWOffsetFix<5,0,UNSIGNED> &id1431in_addrb = id1327out_o;

    long id1431x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1431x_2;
    long id1431x_3;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1431x_4;

    (id1431x_1) = (id1431in_addra.getValueAsLong());
    switch(((long)((id1431x_1)<(20l)))) {
      case 0l:
        id1431x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id1431x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("replicated_mem_1_bias", id1431x_1) );
        break;
      default:
        id1431x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1431out_dataa[(getCycle()+2)%3] = (id1431x_2);
    (id1431x_3) = (id1431in_addrb.getValueAsLong());
    switch(((long)((id1431x_3)<(20l)))) {
      case 0l:
        id1431x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id1431x_4 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("replicated_mem_1_bias", id1431x_3) );
        break;
      default:
        id1431x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1431out_datab[(getCycle()+2)%3] = (id1431x_4);
  }
  { // Node ID: 1318 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1318in_a = id1317out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1318in_b = id1431out_dataa[getCycle()%3];

    id1318out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1318in_a,id1318in_b));
  }
  HWRawBits<32> id1409out_output;

  { // Node ID: 1409 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1409in_input = id1318out_result[getCycle()%2];

    id1409out_output = (cast_fixed2bits(id1409in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id260out_o;

  { // Node ID: 260 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id260in_i = id133out_result[getCycle()%2];

    id260out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id260in_i));
  }
  { // Node ID: 1772 (NodeFIFO)
    const HWOffsetFix<2,0,UNSIGNED> &id1772in_input = id260out_o;

    id1772out_output[(getCycle()+5)%6] = id1772in_input;
  }
  { // Node ID: 1441 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1441in_addra = id1772out_output[getCycle()%6];

    long id1441x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1441x_2;

    (id1441x_1) = (id1441in_addra.getValueAsLong());
    switch(((long)((id1441x_1)<(4l)))) {
      case 0l:
        id1441x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1441x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom6", id1441x_1) );
        break;
      default:
        id1441x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1441out_dataa[(getCycle()+2)%3] = (id1441x_2);
  }
  HWRawBits<64> id1705out_output;

  { // Node ID: 1705 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1705in_input = id1441out_dataa[getCycle()%3];

    id1705out_output = (cast_fixed2bits(id1705in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id263out_output;

  { // Node ID: 263 (NodeReinterpret)
    const HWRawBits<64> &id263in_input = id1705out_output;

    id263out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id263in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id264out_o;

  { // Node ID: 264 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id264in_i = id263out_output;

    id264out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id264in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id265out_o;

  { // Node ID: 265 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id265in_i = id264out_o;

    id265out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id265in_i));
  }
  { // Node ID: 818 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id818in_a = id265out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id818in_b = in_vars.id68out_output;

    id818out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id818in_a,id818in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id218out_o;

  { // Node ID: 218 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id218in_i = id133out_result[getCycle()%2];

    id218out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id218in_i));
  }
  { // Node ID: 1439 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1439in_addra = id218out_o;

    long id1439x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1439x_2;

    (id1439x_1) = (id1439in_addra.getValueAsLong());
    switch(((long)((id1439x_1)<(4l)))) {
      case 0l:
        id1439x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1439x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom4", id1439x_1) );
        break;
      default:
        id1439x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1439out_dataa[(getCycle()+2)%3] = (id1439x_2);
  }
  HWRawBits<64> id1706out_output;

  { // Node ID: 1706 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1706in_input = id1439out_dataa[getCycle()%3];

    id1706out_output = (cast_fixed2bits(id1706in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id221out_output;

  { // Node ID: 221 (NodeReinterpret)
    const HWRawBits<64> &id221in_input = id1706out_output;

    id221out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id221in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id222out_o;

  { // Node ID: 222 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id222in_i = id221out_output;

    id222out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id222in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id223out_o;

  { // Node ID: 223 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id223in_i = id222out_o;

    id223out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id223in_i));
  }
  { // Node ID: 810 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id810in_a = id223out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id810in_b = in_vars.id52out_output;

    id810out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id810in_a,id810in_b));
  }
  HWRawBits<64> id1640out_dataout;

  { // Node ID: 1640 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1640in_datain = id1439out_dataa[getCycle()%3];

    id1640out_dataout = (shift_left_fixed(id1640in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id226out_output;

  { // Node ID: 226 (NodeReinterpret)
    const HWRawBits<64> &id226in_input = id1640out_dataout;

    id226out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id226in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id227out_o;

  { // Node ID: 227 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id227in_i = id226out_output;

    id227out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id227in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id228out_o;

  { // Node ID: 228 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id228in_i = id227out_o;

    id228out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id228in_i));
  }
  { // Node ID: 811 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id811in_a = id228out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id811in_b = in_vars.id54out_output;

    id811out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id811in_a,id811in_b));
  }
  { // Node ID: 827 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id827in_a = id810out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id827in_b = id811out_result[getCycle()%8];

    id827out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id827in_a,id827in_b));
  }
  HWRawBits<64> id1641out_dataout;

  { // Node ID: 1641 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1641in_datain = id1439out_dataa[getCycle()%3];

    id1641out_dataout = (shift_left_fixed(id1641in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id231out_output;

  { // Node ID: 231 (NodeReinterpret)
    const HWRawBits<64> &id231in_input = id1641out_dataout;

    id231out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id231in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id232out_o;

  { // Node ID: 232 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id232in_i = id231out_output;

    id232out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id232in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id233out_o;

  { // Node ID: 233 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id233in_i = id232out_o;

    id233out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id233in_i));
  }
  { // Node ID: 812 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id812in_a = id233out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id812in_b = in_vars.id56out_output;

    id812out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id812in_a,id812in_b));
  }
  HWRawBits<64> id1642out_dataout;

  { // Node ID: 1642 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1642in_datain = id1439out_dataa[getCycle()%3];

    id1642out_dataout = (shift_left_fixed(id1642in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id236out_output;

  { // Node ID: 236 (NodeReinterpret)
    const HWRawBits<64> &id236in_input = id1642out_dataout;

    id236out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id236in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id237out_o;

  { // Node ID: 237 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id237in_i = id236out_output;

    id237out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id237in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id238out_o;

  { // Node ID: 238 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id238in_i = id237out_o;

    id238out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id238in_i));
  }
  { // Node ID: 813 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id813in_a = id238out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id813in_b = in_vars.id58out_output;

    id813out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id813in_a,id813in_b));
  }
  { // Node ID: 828 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id828in_a = id812out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id828in_b = id813out_result[getCycle()%8];

    id828out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id828in_a,id828in_b));
  }
  { // Node ID: 835 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id835in_a = id827out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id835in_b = id828out_result[getCycle()%2];

    id835out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id835in_a,id835in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id239out_o;

  { // Node ID: 239 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id239in_i = id133out_result[getCycle()%2];

    id239out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id239in_i));
  }
  { // Node ID: 1440 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1440in_addra = id239out_o;

    long id1440x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1440x_2;

    (id1440x_1) = (id1440in_addra.getValueAsLong());
    switch(((long)((id1440x_1)<(4l)))) {
      case 0l:
        id1440x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1440x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom5", id1440x_1) );
        break;
      default:
        id1440x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1440out_dataa[(getCycle()+2)%3] = (id1440x_2);
  }
  HWRawBits<64> id1707out_output;

  { // Node ID: 1707 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1707in_input = id1440out_dataa[getCycle()%3];

    id1707out_output = (cast_fixed2bits(id1707in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id242out_output;

  { // Node ID: 242 (NodeReinterpret)
    const HWRawBits<64> &id242in_input = id1707out_output;

    id242out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id242in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id243out_o;

  { // Node ID: 243 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id243in_i = id242out_output;

    id243out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id243in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id244out_o;

  { // Node ID: 244 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id244in_i = id243out_o;

    id244out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id244in_i));
  }
  { // Node ID: 814 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id814in_a = id244out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id814in_b = in_vars.id60out_output;

    id814out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id814in_a,id814in_b));
  }
  HWRawBits<64> id1644out_dataout;

  { // Node ID: 1644 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1644in_datain = id1440out_dataa[getCycle()%3];

    id1644out_dataout = (shift_left_fixed(id1644in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id247out_output;

  { // Node ID: 247 (NodeReinterpret)
    const HWRawBits<64> &id247in_input = id1644out_dataout;

    id247out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id247in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id248out_o;

  { // Node ID: 248 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id248in_i = id247out_output;

    id248out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id248in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id249out_o;

  { // Node ID: 249 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id249in_i = id248out_o;

    id249out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id249in_i));
  }
  { // Node ID: 815 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id815in_a = id249out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id815in_b = in_vars.id62out_output;

    id815out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id815in_a,id815in_b));
  }
  { // Node ID: 829 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id829in_a = id814out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id829in_b = id815out_result[getCycle()%8];

    id829out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id829in_a,id829in_b));
  }
  HWRawBits<64> id1645out_dataout;

  { // Node ID: 1645 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1645in_datain = id1440out_dataa[getCycle()%3];

    id1645out_dataout = (shift_left_fixed(id1645in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id252out_output;

  { // Node ID: 252 (NodeReinterpret)
    const HWRawBits<64> &id252in_input = id1645out_dataout;

    id252out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id252in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id253out_o;

  { // Node ID: 253 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id253in_i = id252out_output;

    id253out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id253in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id254out_o;

  { // Node ID: 254 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id254in_i = id253out_o;

    id254out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id254in_i));
  }
  { // Node ID: 816 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id816in_a = id254out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id816in_b = in_vars.id64out_output;

    id816out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id816in_a,id816in_b));
  }
  HWRawBits<64> id1646out_dataout;

  { // Node ID: 1646 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1646in_datain = id1440out_dataa[getCycle()%3];

    id1646out_dataout = (shift_left_fixed(id1646in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id257out_output;

  { // Node ID: 257 (NodeReinterpret)
    const HWRawBits<64> &id257in_input = id1646out_dataout;

    id257out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id257in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id258out_o;

  { // Node ID: 258 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id258in_i = id257out_output;

    id258out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id258in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id259out_o;

  { // Node ID: 259 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id259in_i = id258out_o;

    id259out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id259in_i));
  }
  { // Node ID: 817 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id817in_a = id259out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id817in_b = in_vars.id66out_output;

    id817out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id817in_a,id817in_b));
  }
  { // Node ID: 830 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id830in_a = id816out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id830in_b = id817out_result[getCycle()%8];

    id830out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id830in_a,id830in_b));
  }
  { // Node ID: 836 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id836in_a = id829out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id836in_b = id830out_result[getCycle()%2];

    id836out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id836in_a,id836in_b));
  }
  { // Node ID: 839 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id839in_a = id835out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id839in_b = id836out_result[getCycle()%2];

    id839out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id839in_a,id839in_b));
  }
  { // Node ID: 1773 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1773in_input = id839out_result[getCycle()%2];

    id1773out_output[(getCycle()+1)%2] = id1773in_input;
  }
  HWOffsetFix<2,0,UNSIGNED> id134out_o;

  { // Node ID: 134 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id134in_i = id133out_result[getCycle()%2];

    id134out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id134in_i));
  }
  { // Node ID: 1435 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1435in_addra = id134out_o;

    long id1435x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1435x_2;

    (id1435x_1) = (id1435in_addra.getValueAsLong());
    switch(((long)((id1435x_1)<(4l)))) {
      case 0l:
        id1435x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1435x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom0", id1435x_1) );
        break;
      default:
        id1435x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1435out_dataa[(getCycle()+2)%3] = (id1435x_2);
  }
  HWRawBits<64> id1708out_output;

  { // Node ID: 1708 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1708in_input = id1435out_dataa[getCycle()%3];

    id1708out_output = (cast_fixed2bits(id1708in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id137out_output;

  { // Node ID: 137 (NodeReinterpret)
    const HWRawBits<64> &id137in_input = id1708out_output;

    id137out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id137in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id138out_o;

  { // Node ID: 138 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id138in_i = id137out_output;

    id138out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id138in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id139out_o;

  { // Node ID: 139 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id139in_i = id138out_o;

    id139out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id139in_i));
  }
  { // Node ID: 794 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id794in_a = id139out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id794in_b = in_vars.id20out_output;

    id794out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id794in_a,id794in_b));
  }
  HWRawBits<64> id1648out_dataout;

  { // Node ID: 1648 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1648in_datain = id1435out_dataa[getCycle()%3];

    id1648out_dataout = (shift_left_fixed(id1648in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id142out_output;

  { // Node ID: 142 (NodeReinterpret)
    const HWRawBits<64> &id142in_input = id1648out_dataout;

    id142out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id142in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id143out_o;

  { // Node ID: 143 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id143in_i = id142out_output;

    id143out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id143in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id144out_o;

  { // Node ID: 144 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id144in_i = id143out_o;

    id144out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id144in_i));
  }
  { // Node ID: 795 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id795in_a = id144out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id795in_b = in_vars.id22out_output;

    id795out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id795in_a,id795in_b));
  }
  { // Node ID: 819 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id819in_a = id794out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id819in_b = id795out_result[getCycle()%8];

    id819out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id819in_a,id819in_b));
  }
  HWRawBits<64> id1649out_dataout;

  { // Node ID: 1649 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1649in_datain = id1435out_dataa[getCycle()%3];

    id1649out_dataout = (shift_left_fixed(id1649in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id147out_output;

  { // Node ID: 147 (NodeReinterpret)
    const HWRawBits<64> &id147in_input = id1649out_dataout;

    id147out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id147in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id148out_o;

  { // Node ID: 148 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id148in_i = id147out_output;

    id148out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id148in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id149out_o;

  { // Node ID: 149 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id149in_i = id148out_o;

    id149out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id149in_i));
  }
  { // Node ID: 796 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id796in_a = id149out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id796in_b = in_vars.id24out_output;

    id796out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id796in_a,id796in_b));
  }
  HWRawBits<64> id1650out_dataout;

  { // Node ID: 1650 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1650in_datain = id1435out_dataa[getCycle()%3];

    id1650out_dataout = (shift_left_fixed(id1650in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id152out_output;

  { // Node ID: 152 (NodeReinterpret)
    const HWRawBits<64> &id152in_input = id1650out_dataout;

    id152out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id152in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id153out_o;

  { // Node ID: 153 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id153in_i = id152out_output;

    id153out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id153in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id154out_o;

  { // Node ID: 154 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id154in_i = id153out_o;

    id154out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id154in_i));
  }
  { // Node ID: 797 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id797in_a = id154out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id797in_b = in_vars.id26out_output;

    id797out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id797in_a,id797in_b));
  }
  { // Node ID: 820 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id820in_a = id796out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id820in_b = id797out_result[getCycle()%8];

    id820out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id820in_a,id820in_b));
  }
  { // Node ID: 831 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id831in_a = id819out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id831in_b = id820out_result[getCycle()%2];

    id831out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id831in_a,id831in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id155out_o;

  { // Node ID: 155 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id155in_i = id133out_result[getCycle()%2];

    id155out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id155in_i));
  }
  { // Node ID: 1436 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1436in_addra = id155out_o;

    long id1436x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1436x_2;

    (id1436x_1) = (id1436in_addra.getValueAsLong());
    switch(((long)((id1436x_1)<(4l)))) {
      case 0l:
        id1436x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1436x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom1", id1436x_1) );
        break;
      default:
        id1436x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1436out_dataa[(getCycle()+2)%3] = (id1436x_2);
  }
  HWRawBits<64> id1709out_output;

  { // Node ID: 1709 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1709in_input = id1436out_dataa[getCycle()%3];

    id1709out_output = (cast_fixed2bits(id1709in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id158out_output;

  { // Node ID: 158 (NodeReinterpret)
    const HWRawBits<64> &id158in_input = id1709out_output;

    id158out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id158in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id159out_o;

  { // Node ID: 159 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id159in_i = id158out_output;

    id159out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id159in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id160out_o;

  { // Node ID: 160 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id160in_i = id159out_o;

    id160out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id160in_i));
  }
  { // Node ID: 798 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id798in_a = id160out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id798in_b = in_vars.id28out_output;

    id798out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id798in_a,id798in_b));
  }
  HWRawBits<64> id1652out_dataout;

  { // Node ID: 1652 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1652in_datain = id1436out_dataa[getCycle()%3];

    id1652out_dataout = (shift_left_fixed(id1652in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id163out_output;

  { // Node ID: 163 (NodeReinterpret)
    const HWRawBits<64> &id163in_input = id1652out_dataout;

    id163out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id163in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id164out_o;

  { // Node ID: 164 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id164in_i = id163out_output;

    id164out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id164in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id165out_o;

  { // Node ID: 165 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id165in_i = id164out_o;

    id165out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id165in_i));
  }
  { // Node ID: 799 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id799in_a = id165out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id799in_b = in_vars.id30out_output;

    id799out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id799in_a,id799in_b));
  }
  { // Node ID: 821 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id821in_a = id798out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id821in_b = id799out_result[getCycle()%8];

    id821out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id821in_a,id821in_b));
  }
  HWRawBits<64> id1653out_dataout;

  { // Node ID: 1653 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1653in_datain = id1436out_dataa[getCycle()%3];

    id1653out_dataout = (shift_left_fixed(id1653in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id168out_output;

  { // Node ID: 168 (NodeReinterpret)
    const HWRawBits<64> &id168in_input = id1653out_dataout;

    id168out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id168in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id169out_o;

  { // Node ID: 169 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id169in_i = id168out_output;

    id169out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id169in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id170out_o;

  { // Node ID: 170 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id170in_i = id169out_o;

    id170out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id170in_i));
  }
  { // Node ID: 800 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id800in_a = id170out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id800in_b = in_vars.id32out_output;

    id800out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id800in_a,id800in_b));
  }
  HWRawBits<64> id1654out_dataout;

  { // Node ID: 1654 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1654in_datain = id1436out_dataa[getCycle()%3];

    id1654out_dataout = (shift_left_fixed(id1654in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id173out_output;

  { // Node ID: 173 (NodeReinterpret)
    const HWRawBits<64> &id173in_input = id1654out_dataout;

    id173out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id173in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id174out_o;

  { // Node ID: 174 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id174in_i = id173out_output;

    id174out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id174in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id175out_o;

  { // Node ID: 175 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id175in_i = id174out_o;

    id175out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id175in_i));
  }
  { // Node ID: 801 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id801in_a = id175out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id801in_b = in_vars.id34out_output;

    id801out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id801in_a,id801in_b));
  }
  { // Node ID: 822 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id822in_a = id800out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id822in_b = id801out_result[getCycle()%8];

    id822out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id822in_a,id822in_b));
  }
  { // Node ID: 832 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id832in_a = id821out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id832in_b = id822out_result[getCycle()%2];

    id832out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id832in_a,id832in_b));
  }
  { // Node ID: 837 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id837in_a = id831out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id837in_b = id832out_result[getCycle()%2];

    id837out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id837in_a,id837in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id176out_o;

  { // Node ID: 176 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id176in_i = id133out_result[getCycle()%2];

    id176out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id176in_i));
  }
  { // Node ID: 1437 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1437in_addra = id176out_o;

    long id1437x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1437x_2;

    (id1437x_1) = (id1437in_addra.getValueAsLong());
    switch(((long)((id1437x_1)<(4l)))) {
      case 0l:
        id1437x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1437x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom2", id1437x_1) );
        break;
      default:
        id1437x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1437out_dataa[(getCycle()+2)%3] = (id1437x_2);
  }
  HWRawBits<64> id1710out_output;

  { // Node ID: 1710 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1710in_input = id1437out_dataa[getCycle()%3];

    id1710out_output = (cast_fixed2bits(id1710in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id179out_output;

  { // Node ID: 179 (NodeReinterpret)
    const HWRawBits<64> &id179in_input = id1710out_output;

    id179out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id179in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id180out_o;

  { // Node ID: 180 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id180in_i = id179out_output;

    id180out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id180in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id181out_o;

  { // Node ID: 181 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id181in_i = id180out_o;

    id181out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id181in_i));
  }
  { // Node ID: 802 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id802in_a = id181out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id802in_b = in_vars.id36out_output;

    id802out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id802in_a,id802in_b));
  }
  HWRawBits<64> id1656out_dataout;

  { // Node ID: 1656 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1656in_datain = id1437out_dataa[getCycle()%3];

    id1656out_dataout = (shift_left_fixed(id1656in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id184out_output;

  { // Node ID: 184 (NodeReinterpret)
    const HWRawBits<64> &id184in_input = id1656out_dataout;

    id184out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id184in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id185out_o;

  { // Node ID: 185 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id185in_i = id184out_output;

    id185out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id185in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id186out_o;

  { // Node ID: 186 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id186in_i = id185out_o;

    id186out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id186in_i));
  }
  { // Node ID: 803 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id803in_a = id186out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id803in_b = in_vars.id38out_output;

    id803out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id803in_a,id803in_b));
  }
  { // Node ID: 823 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id823in_a = id802out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id823in_b = id803out_result[getCycle()%8];

    id823out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id823in_a,id823in_b));
  }
  HWRawBits<64> id1657out_dataout;

  { // Node ID: 1657 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1657in_datain = id1437out_dataa[getCycle()%3];

    id1657out_dataout = (shift_left_fixed(id1657in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id189out_output;

  { // Node ID: 189 (NodeReinterpret)
    const HWRawBits<64> &id189in_input = id1657out_dataout;

    id189out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id189in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id190out_o;

  { // Node ID: 190 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id190in_i = id189out_output;

    id190out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id190in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id191out_o;

  { // Node ID: 191 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id191in_i = id190out_o;

    id191out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id191in_i));
  }
  { // Node ID: 804 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id804in_a = id191out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id804in_b = in_vars.id40out_output;

    id804out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id804in_a,id804in_b));
  }
  HWRawBits<64> id1658out_dataout;

  { // Node ID: 1658 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1658in_datain = id1437out_dataa[getCycle()%3];

    id1658out_dataout = (shift_left_fixed(id1658in_datain,(48l)));
  }

  convolutionKernel00Block2Vars out_vars;
  out_vars.id1406out_result = in_vars.id1406out_result;
  out_vars.id793out_o = in_vars.id793out_o;
  out_vars.id751out_o = in_vars.id751out_o;
  out_vars.id756out_o = in_vars.id756out_o;
  out_vars.id761out_o = in_vars.id761out_o;
  out_vars.id766out_o = in_vars.id766out_o;
  out_vars.id772out_o = in_vars.id772out_o;
  out_vars.id777out_o = in_vars.id777out_o;
  out_vars.id782out_o = in_vars.id782out_o;
  out_vars.id787out_o = in_vars.id787out_o;
  out_vars.id667out_o = in_vars.id667out_o;
  out_vars.id672out_o = in_vars.id672out_o;
  out_vars.id677out_o = in_vars.id677out_o;
  out_vars.id682out_o = in_vars.id682out_o;
  out_vars.id688out_o = in_vars.id688out_o;
  out_vars.id693out_o = in_vars.id693out_o;
  out_vars.id698out_o = in_vars.id698out_o;
  out_vars.id703out_o = in_vars.id703out_o;
  out_vars.id709out_o = in_vars.id709out_o;
  out_vars.id714out_o = in_vars.id714out_o;
  out_vars.id719out_o = in_vars.id719out_o;
  out_vars.id724out_o = in_vars.id724out_o;
  out_vars.id42out_output = in_vars.id42out_output;
  out_vars.id730out_o = in_vars.id730out_o;
  out_vars.id44out_output = in_vars.id44out_output;
  out_vars.id735out_o = in_vars.id735out_o;
  out_vars.id46out_output = in_vars.id46out_output;
  out_vars.id740out_o = in_vars.id740out_o;
  out_vars.id48out_output = in_vars.id48out_output;
  out_vars.id745out_o = in_vars.id745out_o;
  out_vars.id50out_output = in_vars.id50out_output;
  out_vars.id1415out_output = in_vars.id1415out_output;
  out_vars.id661out_o = in_vars.id661out_o;
  out_vars.id619out_o = in_vars.id619out_o;
  out_vars.id624out_o = in_vars.id624out_o;
  out_vars.id629out_o = in_vars.id629out_o;
  out_vars.id634out_o = in_vars.id634out_o;
  out_vars.id640out_o = in_vars.id640out_o;
  out_vars.id645out_o = in_vars.id645out_o;
  out_vars.id650out_o = in_vars.id650out_o;
  out_vars.id655out_o = in_vars.id655out_o;
  out_vars.id535out_o = in_vars.id535out_o;
  out_vars.id540out_o = in_vars.id540out_o;
  out_vars.id545out_o = in_vars.id545out_o;
  out_vars.id550out_o = in_vars.id550out_o;
  out_vars.id556out_o = in_vars.id556out_o;
  out_vars.id561out_o = in_vars.id561out_o;
  out_vars.id566out_o = in_vars.id566out_o;
  out_vars.id571out_o = in_vars.id571out_o;
  out_vars.id577out_o = in_vars.id577out_o;
  out_vars.id582out_o = in_vars.id582out_o;
  out_vars.id587out_o = in_vars.id587out_o;
  out_vars.id592out_o = in_vars.id592out_o;
  out_vars.id598out_o = in_vars.id598out_o;
  out_vars.id603out_o = in_vars.id603out_o;
  out_vars.id608out_o = in_vars.id608out_o;
  out_vars.id613out_o = in_vars.id613out_o;
  out_vars.id1413out_output = in_vars.id1413out_output;
  out_vars.id529out_o = in_vars.id529out_o;
  out_vars.id487out_o = in_vars.id487out_o;
  out_vars.id492out_o = in_vars.id492out_o;
  out_vars.id497out_o = id497out_o;
  out_vars.id502out_o = id502out_o;
  out_vars.id508out_o = id508out_o;
  out_vars.id513out_o = id513out_o;
  out_vars.id518out_o = id518out_o;
  out_vars.id523out_o = id523out_o;
  out_vars.id403out_o = id403out_o;
  out_vars.id408out_o = id408out_o;
  out_vars.id413out_o = id413out_o;
  out_vars.id418out_o = id418out_o;
  out_vars.id424out_o = id424out_o;
  out_vars.id429out_o = id429out_o;
  out_vars.id434out_o = id434out_o;
  out_vars.id439out_o = id439out_o;
  out_vars.id445out_o = id445out_o;
  out_vars.id450out_o = id450out_o;
  out_vars.id455out_o = id455out_o;
  out_vars.id460out_o = id460out_o;
  out_vars.id466out_o = id466out_o;
  out_vars.id471out_o = id471out_o;
  out_vars.id476out_o = id476out_o;
  out_vars.id481out_o = id481out_o;
  out_vars.id1411out_output = id1411out_output;
  out_vars.id397out_o = id397out_o;
  out_vars.id355out_o = id355out_o;
  out_vars.id360out_o = id360out_o;
  out_vars.id365out_o = id365out_o;
  out_vars.id370out_o = id370out_o;
  out_vars.id376out_o = id376out_o;
  out_vars.id381out_o = id381out_o;
  out_vars.id386out_o = id386out_o;
  out_vars.id391out_o = id391out_o;
  out_vars.id271out_o = id271out_o;
  out_vars.id276out_o = id276out_o;
  out_vars.id281out_o = id281out_o;
  out_vars.id286out_o = id286out_o;
  out_vars.id292out_o = id292out_o;
  out_vars.id297out_o = id297out_o;
  out_vars.id302out_o = id302out_o;
  out_vars.id307out_o = id307out_o;
  out_vars.id313out_o = id313out_o;
  out_vars.id318out_o = id318out_o;
  out_vars.id323out_o = id323out_o;
  out_vars.id328out_o = id328out_o;
  out_vars.id334out_o = id334out_o;
  out_vars.id339out_o = id339out_o;
  out_vars.id344out_o = id344out_o;
  out_vars.id349out_o = id349out_o;
  out_vars.id1409out_output = id1409out_output;
  out_vars.id265out_o = id265out_o;
  out_vars.id223out_o = id223out_o;
  out_vars.id228out_o = id228out_o;
  out_vars.id233out_o = id233out_o;
  out_vars.id238out_o = id238out_o;
  out_vars.id244out_o = id244out_o;
  out_vars.id249out_o = id249out_o;
  out_vars.id254out_o = id254out_o;
  out_vars.id259out_o = id259out_o;
  out_vars.id139out_o = id139out_o;
  out_vars.id144out_o = id144out_o;
  out_vars.id149out_o = id149out_o;
  out_vars.id154out_o = id154out_o;
  out_vars.id160out_o = id160out_o;
  out_vars.id165out_o = id165out_o;
  out_vars.id170out_o = id170out_o;
  out_vars.id175out_o = id175out_o;
  out_vars.id181out_o = id181out_o;
  out_vars.id186out_o = id186out_o;
  out_vars.id191out_o = id191out_o;
  out_vars.id1658out_dataout = id1658out_dataout;
  return out_vars;
};

};
