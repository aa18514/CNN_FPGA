#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "convolutionKernel00_exec1.h"
//#include "convolutionKernel00.h"

namespace maxcompilersim {

convolutionKernel00Block1Vars convolutionKernel00::execute0() {
  { // Node ID: 1832 (NodeConstantRawBits)
  }
  { // Node ID: 1831 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 2 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id2in_enable = id1832out_value;
    const HWOffsetFix<17,0,UNSIGNED> &id2in_max = id1831out_value;

    HWOffsetFix<17,0,UNSIGNED> id2x_1;
    HWOffsetFix<1,0,UNSIGNED> id2x_2;
    HWOffsetFix<1,0,UNSIGNED> id2x_3;
    HWOffsetFix<17,0,UNSIGNED> id2x_4t_1e_1;

    id2out_count = (cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>((id2st_count)));
    (id2x_1) = (add_fixed<17,0,UNSIGNED,TRUNCATE>((id2st_count),(c_hw_fix_17_0_uns_bits)));
    (id2x_2) = (gte_fixed((id2x_1),id2in_max));
    (id2x_3) = (and_fixed((id2x_2),id2in_enable));
    id2out_wrap = (id2x_3);
    if((id2in_enable.getValueAsBool())) {
      if(((id2x_3).getValueAsBool())) {
        (id2st_count) = (c_hw_fix_17_0_uns_bits_1);
      }
      else {
        (id2x_4t_1e_1) = (id2x_1);
        (id2st_count) = (id2x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 1830 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 4 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id4in_enable = id2out_wrap;
    const HWOffsetFix<17,0,UNSIGNED> &id4in_max = id1830out_value;

    HWOffsetFix<17,0,UNSIGNED> id4x_1;
    HWOffsetFix<1,0,UNSIGNED> id4x_2;
    HWOffsetFix<1,0,UNSIGNED> id4x_3;
    HWOffsetFix<17,0,UNSIGNED> id4x_4t_1e_1;

    id4out_count = (cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>((id4st_count)));
    (id4x_1) = (add_fixed<17,0,UNSIGNED,TRUNCATE>((id4st_count),(c_hw_fix_17_0_uns_bits)));
    (id4x_2) = (gte_fixed((id4x_1),id4in_max));
    (id4x_3) = (and_fixed((id4x_2),id4in_enable));
    id4out_wrap = (id4x_3);
    if((id4in_enable.getValueAsBool())) {
      if(((id4x_3).getValueAsBool())) {
        (id4st_count) = (c_hw_fix_17_0_uns_bits_1);
      }
      else {
        (id4x_4t_1e_1) = (id4x_1);
        (id4st_count) = (id4x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 1829 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 6 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id6in_enable = id4out_wrap;
    const HWOffsetFix<17,0,UNSIGNED> &id6in_max = id1829out_value;

    HWOffsetFix<17,0,UNSIGNED> id6x_1;
    HWOffsetFix<1,0,UNSIGNED> id6x_2;
    HWOffsetFix<1,0,UNSIGNED> id6x_3;
    HWOffsetFix<17,0,UNSIGNED> id6x_4t_1e_1;

    id6out_count = (cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>((id6st_count)));
    (id6x_1) = (add_fixed<17,0,UNSIGNED,TRUNCATE>((id6st_count),(c_hw_fix_17_0_uns_bits)));
    (id6x_2) = (gte_fixed((id6x_1),id6in_max));
    (id6x_3) = (and_fixed((id6x_2),id6in_enable));
    id6out_wrap = (id6x_3);
    if((id6in_enable.getValueAsBool())) {
      if(((id6x_3).getValueAsBool())) {
        (id6st_count) = (c_hw_fix_17_0_uns_bits_1);
      }
      else {
        (id6x_4t_1e_1) = (id6x_1);
        (id6st_count) = (id6x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 1712 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id1712in_input = id6out_count;

    id1712out_output[(getCycle()+5)%6] = id1712in_input;
  }
  { // Node ID: 1828 (NodeConstantRawBits)
  }
  { // Node ID: 126 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id126in_a = id1712out_output[getCycle()%6];
    const HWOffsetFix<16,0,UNSIGNED> &id126in_b = id1828out_value;

    id126out_result[(getCycle()+1)%2] = (eq_fixed(id126in_a,id126in_b));
  }
  { // Node ID: 1713 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id1713in_input = id4out_count;

    id1713out_output[(getCycle()+4)%5] = id1713in_input;
  }
  { // Node ID: 1827 (NodeConstantRawBits)
  }
  { // Node ID: 128 (NodeGt)
    const HWOffsetFix<16,0,UNSIGNED> &id128in_a = id1713out_output[getCycle()%5];
    const HWOffsetFix<16,0,UNSIGNED> &id128in_b = id1827out_value;

    id128out_result[(getCycle()+1)%2] = (gt_fixed(id128in_a,id128in_b));
  }
  { // Node ID: 1826 (NodeConstantRawBits)
  }
  { // Node ID: 130 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id130in_a = id1713out_output[getCycle()%5];
    const HWOffsetFix<16,0,UNSIGNED> &id130in_b = id1826out_value;

    id130out_result[(getCycle()+1)%2] = (eq_fixed(id130in_a,id130in_b));
  }
  { // Node ID: 131 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id131in_a = id128out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id131in_b = id130out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id131x_1;

    (id131x_1) = (or_fixed(id131in_a,id131in_b));
    id131out_result[(getCycle()+1)%2] = (id131x_1);
  }
  { // Node ID: 132 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id132in_a = id126out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id132in_b = id131out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id132x_1;

    (id132x_1) = (and_fixed(id132in_a,id132in_b));
    id132out_result[(getCycle()+1)%2] = (id132x_1);
  }
  { // Node ID: 1723 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id1723in_input = id132out_result[getCycle()%2];

    id1723out_output[(getCycle()+15)%16] = id1723in_input;
  }
  { // Node ID: 1812 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id1812in_input = id1723out_output[getCycle()%16];

    id1812out_output[(getCycle()+2)%3] = id1812in_input;
  }
  { // Node ID: 1404 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1405out_result;

  { // Node ID: 1405 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1405in_a = id1404out_io_y01_force_disabled;

    id1405out_result = (not_fixed(id1405in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id1406out_result;

  { // Node ID: 1406 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1406in_a = id1812out_output[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1406in_b = id1405out_result;

    HWOffsetFix<1,0,UNSIGNED> id1406x_1;

    (id1406x_1) = (and_fixed(id1406in_a,id1406in_b));
    id1406out_result = (id1406x_1);
  }
  { // Node ID: 1810 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id1810in_input = id1713out_output[getCycle()%5];

    id1810out_output[(getCycle()+1)%2] = id1810in_input;
  }
  { // Node ID: 133 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id133in_a = id1712out_output[getCycle()%6];
    const HWOffsetFix<16,0,UNSIGNED> &id133in_b = id1810out_output[getCycle()%2];

    id133out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id133in_a,id133in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id788out_o;

  { // Node ID: 788 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id788in_i = id133out_result[getCycle()%2];

    id788out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id788in_i));
  }
  { // Node ID: 1718 (NodeFIFO)
    const HWOffsetFix<2,0,UNSIGNED> &id1718in_input = id788out_o;

    id1718out_output[(getCycle()+5)%6] = id1718in_input;
  }
  { // Node ID: 1469 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1469in_addra = id1718out_output[getCycle()%6];

    long id1469x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1469x_2;

    (id1469x_1) = (id1469in_addra.getValueAsLong());
    switch(((long)((id1469x_1)<(4l)))) {
      case 0l:
        id1469x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1469x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom34", id1469x_1) );
        break;
      default:
        id1469x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1469out_dataa[(getCycle()+2)%3] = (id1469x_2);
  }
  HWRawBits<64> id1677out_output;

  { // Node ID: 1677 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1677in_input = id1469out_dataa[getCycle()%3];

    id1677out_output = (cast_fixed2bits(id1677in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id791out_output;

  { // Node ID: 791 (NodeReinterpret)
    const HWRawBits<64> &id791in_input = id1677out_output;

    id791out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id791in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id792out_o;

  { // Node ID: 792 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id792in_i = id791out_output;

    id792out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id792in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id793out_o;

  { // Node ID: 793 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id793in_i = id792out_o;

    id793out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id793in_i));
  }
  { // Node ID: 1825 (NodeConstantRawBits)
  }
  { // Node ID: 8 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id8in_a = id6out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id8in_b = id1825out_value;

    id8out_result[(getCycle()+1)%2] = (eq_fixed(id8in_a,id8in_b));
  }
  { // Node ID: 1824 (NodeConstantRawBits)
  }
  { // Node ID: 10 (NodeLt)
    const HWOffsetFix<16,0,UNSIGNED> &id10in_a = id4out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id10in_b = id1824out_value;

    id10out_result[(getCycle()+1)%2] = (lt_fixed(id10in_a,id10in_b));
  }
  { // Node ID: 11 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11in_a = id8out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11in_b = id10out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11x_1;

    (id11x_1) = (and_fixed(id11in_a,id11in_b));
    id11out_result[(getCycle()+1)%2] = (id11x_1);
  }
  { // Node ID: 1719 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id1719in_input = id2out_count;

    id1719out_output[(getCycle()+1)%2] = id1719in_input;
  }
  { // Node ID: 1823 (NodeConstantRawBits)
  }
  { // Node ID: 13 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id13in_a = id1719out_output[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id13in_b = id1823out_value;

    id13out_result[(getCycle()+1)%2] = (eq_fixed(id13in_a,id13in_b));
  }
  { // Node ID: 14 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id14in_a = id11out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id14in_b = id13out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id14x_1;

    (id14x_1) = (and_fixed(id14in_a,id14in_b));
    id14out_result[(getCycle()+1)%2] = (id14x_1);
  }
  { // Node ID: 15 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id16out_result;

  { // Node ID: 16 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id16in_a = id15out_io_x01_force_disabled;

    id16out_result = (not_fixed(id16in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id17out_result;

  { // Node ID: 17 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17in_a = id14out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17in_b = id16out_result;

    HWOffsetFix<1,0,UNSIGNED> id17x_1;

    (id17x_1) = (and_fixed(id17in_a,id17in_b));
    id17out_result = (id17x_1);
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 18 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id18in_enable = id17out_result;

    (id18st_read_next_cycle) = ((id18in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_x01, id18st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<32> id67out_result;

  { // Node ID: 67 (NodeSlice)
    const HWRawBits<800> &id67in_a = id18out_data;

    id67out_result = (slice<768,32>(id67in_a));
  }
  { // Node ID: 1720 (NodeFIFO)
    const HWRawBits<32> &id1720in_input = id67out_result;

    id1720out_output[(getCycle()+5)%6] = id1720in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id68out_output;

  { // Node ID: 68 (NodeReinterpret)
    const HWRawBits<32> &id68in_input = id1720out_output[getCycle()%6];

    id68out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id68in_input));
  }
  { // Node ID: 1210 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1210in_a = id793out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1210in_b = id68out_output;

    id1210out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1210in_a,id1210in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id746out_o;

  { // Node ID: 746 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id746in_i = id133out_result[getCycle()%2];

    id746out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id746in_i));
  }
  { // Node ID: 1467 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1467in_addra = id746out_o;

    long id1467x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1467x_2;

    (id1467x_1) = (id1467in_addra.getValueAsLong());
    switch(((long)((id1467x_1)<(4l)))) {
      case 0l:
        id1467x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1467x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom32", id1467x_1) );
        break;
      default:
        id1467x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1467out_dataa[(getCycle()+2)%3] = (id1467x_2);
  }
  HWRawBits<64> id1678out_output;

  { // Node ID: 1678 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1678in_input = id1467out_dataa[getCycle()%3];

    id1678out_output = (cast_fixed2bits(id1678in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id749out_output;

  { // Node ID: 749 (NodeReinterpret)
    const HWRawBits<64> &id749in_input = id1678out_output;

    id749out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id749in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id750out_o;

  { // Node ID: 750 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id750in_i = id749out_output;

    id750out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id750in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id751out_o;

  { // Node ID: 751 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id751in_i = id750out_o;

    id751out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id751in_i));
  }
  HWRawBits<32> id51out_result;

  { // Node ID: 51 (NodeSlice)
    const HWRawBits<800> &id51in_a = id18out_data;

    id51out_result = (slice<512,32>(id51in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id52out_output;

  { // Node ID: 52 (NodeReinterpret)
    const HWRawBits<32> &id52in_input = id51out_result;

    id52out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id52in_input));
  }
  { // Node ID: 1202 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1202in_a = id751out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1202in_b = id52out_output;

    id1202out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1202in_a,id1202in_b));
  }
  HWRawBits<64> id1484out_dataout;

  { // Node ID: 1484 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1484in_datain = id1467out_dataa[getCycle()%3];

    id1484out_dataout = (shift_left_fixed(id1484in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id754out_output;

  { // Node ID: 754 (NodeReinterpret)
    const HWRawBits<64> &id754in_input = id1484out_dataout;

    id754out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id754in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id755out_o;

  { // Node ID: 755 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id755in_i = id754out_output;

    id755out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id755in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id756out_o;

  { // Node ID: 756 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id756in_i = id755out_o;

    id756out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id756in_i));
  }
  HWRawBits<32> id53out_result;

  { // Node ID: 53 (NodeSlice)
    const HWRawBits<800> &id53in_a = id18out_data;

    id53out_result = (slice<544,32>(id53in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id54out_output;

  { // Node ID: 54 (NodeReinterpret)
    const HWRawBits<32> &id54in_input = id53out_result;

    id54out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id54in_input));
  }
  { // Node ID: 1203 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1203in_a = id756out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1203in_b = id54out_output;

    id1203out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1203in_a,id1203in_b));
  }
  { // Node ID: 1219 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1219in_a = id1202out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1219in_b = id1203out_result[getCycle()%8];

    id1219out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1219in_a,id1219in_b));
  }
  HWRawBits<64> id1485out_dataout;

  { // Node ID: 1485 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1485in_datain = id1467out_dataa[getCycle()%3];

    id1485out_dataout = (shift_left_fixed(id1485in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id759out_output;

  { // Node ID: 759 (NodeReinterpret)
    const HWRawBits<64> &id759in_input = id1485out_dataout;

    id759out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id759in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id760out_o;

  { // Node ID: 760 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id760in_i = id759out_output;

    id760out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id760in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id761out_o;

  { // Node ID: 761 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id761in_i = id760out_o;

    id761out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id761in_i));
  }
  HWRawBits<32> id55out_result;

  { // Node ID: 55 (NodeSlice)
    const HWRawBits<800> &id55in_a = id18out_data;

    id55out_result = (slice<576,32>(id55in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id56out_output;

  { // Node ID: 56 (NodeReinterpret)
    const HWRawBits<32> &id56in_input = id55out_result;

    id56out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id56in_input));
  }
  { // Node ID: 1204 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1204in_a = id761out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1204in_b = id56out_output;

    id1204out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1204in_a,id1204in_b));
  }
  HWRawBits<64> id1486out_dataout;

  { // Node ID: 1486 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1486in_datain = id1467out_dataa[getCycle()%3];

    id1486out_dataout = (shift_left_fixed(id1486in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id764out_output;

  { // Node ID: 764 (NodeReinterpret)
    const HWRawBits<64> &id764in_input = id1486out_dataout;

    id764out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id764in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id765out_o;

  { // Node ID: 765 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id765in_i = id764out_output;

    id765out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id765in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id766out_o;

  { // Node ID: 766 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id766in_i = id765out_o;

    id766out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id766in_i));
  }
  HWRawBits<32> id57out_result;

  { // Node ID: 57 (NodeSlice)
    const HWRawBits<800> &id57in_a = id18out_data;

    id57out_result = (slice<608,32>(id57in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id58out_output;

  { // Node ID: 58 (NodeReinterpret)
    const HWRawBits<32> &id58in_input = id57out_result;

    id58out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id58in_input));
  }
  { // Node ID: 1205 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1205in_a = id766out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1205in_b = id58out_output;

    id1205out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1205in_a,id1205in_b));
  }
  { // Node ID: 1220 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1220in_a = id1204out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1220in_b = id1205out_result[getCycle()%8];

    id1220out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1220in_a,id1220in_b));
  }
  { // Node ID: 1227 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1227in_a = id1219out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1227in_b = id1220out_result[getCycle()%2];

    id1227out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1227in_a,id1227in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id767out_o;

  { // Node ID: 767 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id767in_i = id133out_result[getCycle()%2];

    id767out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id767in_i));
  }
  { // Node ID: 1468 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1468in_addra = id767out_o;

    long id1468x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1468x_2;

    (id1468x_1) = (id1468in_addra.getValueAsLong());
    switch(((long)((id1468x_1)<(4l)))) {
      case 0l:
        id1468x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1468x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom33", id1468x_1) );
        break;
      default:
        id1468x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1468out_dataa[(getCycle()+2)%3] = (id1468x_2);
  }
  HWRawBits<64> id1679out_output;

  { // Node ID: 1679 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1679in_input = id1468out_dataa[getCycle()%3];

    id1679out_output = (cast_fixed2bits(id1679in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id770out_output;

  { // Node ID: 770 (NodeReinterpret)
    const HWRawBits<64> &id770in_input = id1679out_output;

    id770out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id770in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id771out_o;

  { // Node ID: 771 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id771in_i = id770out_output;

    id771out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id771in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id772out_o;

  { // Node ID: 772 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id772in_i = id771out_o;

    id772out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id772in_i));
  }
  HWRawBits<32> id59out_result;

  { // Node ID: 59 (NodeSlice)
    const HWRawBits<800> &id59in_a = id18out_data;

    id59out_result = (slice<640,32>(id59in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id60out_output;

  { // Node ID: 60 (NodeReinterpret)
    const HWRawBits<32> &id60in_input = id59out_result;

    id60out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id60in_input));
  }
  { // Node ID: 1206 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1206in_a = id772out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1206in_b = id60out_output;

    id1206out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1206in_a,id1206in_b));
  }
  HWRawBits<64> id1488out_dataout;

  { // Node ID: 1488 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1488in_datain = id1468out_dataa[getCycle()%3];

    id1488out_dataout = (shift_left_fixed(id1488in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id775out_output;

  { // Node ID: 775 (NodeReinterpret)
    const HWRawBits<64> &id775in_input = id1488out_dataout;

    id775out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id775in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id776out_o;

  { // Node ID: 776 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id776in_i = id775out_output;

    id776out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id776in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id777out_o;

  { // Node ID: 777 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id777in_i = id776out_o;

    id777out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id777in_i));
  }
  HWRawBits<32> id61out_result;

  { // Node ID: 61 (NodeSlice)
    const HWRawBits<800> &id61in_a = id18out_data;

    id61out_result = (slice<672,32>(id61in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id62out_output;

  { // Node ID: 62 (NodeReinterpret)
    const HWRawBits<32> &id62in_input = id61out_result;

    id62out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id62in_input));
  }
  { // Node ID: 1207 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1207in_a = id777out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1207in_b = id62out_output;

    id1207out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1207in_a,id1207in_b));
  }
  { // Node ID: 1221 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1221in_a = id1206out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1221in_b = id1207out_result[getCycle()%8];

    id1221out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1221in_a,id1221in_b));
  }
  HWRawBits<64> id1489out_dataout;

  { // Node ID: 1489 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1489in_datain = id1468out_dataa[getCycle()%3];

    id1489out_dataout = (shift_left_fixed(id1489in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id780out_output;

  { // Node ID: 780 (NodeReinterpret)
    const HWRawBits<64> &id780in_input = id1489out_dataout;

    id780out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id780in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id781out_o;

  { // Node ID: 781 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id781in_i = id780out_output;

    id781out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id781in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id782out_o;

  { // Node ID: 782 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id782in_i = id781out_o;

    id782out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id782in_i));
  }
  HWRawBits<32> id63out_result;

  { // Node ID: 63 (NodeSlice)
    const HWRawBits<800> &id63in_a = id18out_data;

    id63out_result = (slice<704,32>(id63in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id64out_output;

  { // Node ID: 64 (NodeReinterpret)
    const HWRawBits<32> &id64in_input = id63out_result;

    id64out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id64in_input));
  }
  { // Node ID: 1208 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1208in_a = id782out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1208in_b = id64out_output;

    id1208out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1208in_a,id1208in_b));
  }
  HWRawBits<64> id1490out_dataout;

  { // Node ID: 1490 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1490in_datain = id1468out_dataa[getCycle()%3];

    id1490out_dataout = (shift_left_fixed(id1490in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id785out_output;

  { // Node ID: 785 (NodeReinterpret)
    const HWRawBits<64> &id785in_input = id1490out_dataout;

    id785out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id785in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id786out_o;

  { // Node ID: 786 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id786in_i = id785out_output;

    id786out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id786in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id787out_o;

  { // Node ID: 787 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id787in_i = id786out_o;

    id787out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id787in_i));
  }
  HWRawBits<32> id65out_result;

  { // Node ID: 65 (NodeSlice)
    const HWRawBits<800> &id65in_a = id18out_data;

    id65out_result = (slice<736,32>(id65in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id66out_output;

  { // Node ID: 66 (NodeReinterpret)
    const HWRawBits<32> &id66in_input = id65out_result;

    id66out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id66in_input));
  }
  { // Node ID: 1209 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1209in_a = id787out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1209in_b = id66out_output;

    id1209out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1209in_a,id1209in_b));
  }
  { // Node ID: 1222 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1222in_a = id1208out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1222in_b = id1209out_result[getCycle()%8];

    id1222out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1222in_a,id1222in_b));
  }
  { // Node ID: 1228 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1228in_a = id1221out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1228in_b = id1222out_result[getCycle()%2];

    id1228out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1228in_a,id1228in_b));
  }
  { // Node ID: 1231 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1231in_a = id1227out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1231in_b = id1228out_result[getCycle()%2];

    id1231out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1231in_a,id1231in_b));
  }
  { // Node ID: 1721 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1721in_input = id1231out_result[getCycle()%2];

    id1721out_output[(getCycle()+1)%2] = id1721in_input;
  }
  HWOffsetFix<2,0,UNSIGNED> id662out_o;

  { // Node ID: 662 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id662in_i = id133out_result[getCycle()%2];

    id662out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id662in_i));
  }
  { // Node ID: 1463 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1463in_addra = id662out_o;

    long id1463x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1463x_2;

    (id1463x_1) = (id1463in_addra.getValueAsLong());
    switch(((long)((id1463x_1)<(4l)))) {
      case 0l:
        id1463x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1463x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom28", id1463x_1) );
        break;
      default:
        id1463x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1463out_dataa[(getCycle()+2)%3] = (id1463x_2);
  }
  HWRawBits<64> id1680out_output;

  { // Node ID: 1680 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1680in_input = id1463out_dataa[getCycle()%3];

    id1680out_output = (cast_fixed2bits(id1680in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id665out_output;

  { // Node ID: 665 (NodeReinterpret)
    const HWRawBits<64> &id665in_input = id1680out_output;

    id665out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id665in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id666out_o;

  { // Node ID: 666 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id666in_i = id665out_output;

    id666out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id666in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id667out_o;

  { // Node ID: 667 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id667in_i = id666out_o;

    id667out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id667in_i));
  }
  HWRawBits<32> id19out_result;

  { // Node ID: 19 (NodeSlice)
    const HWRawBits<800> &id19in_a = id18out_data;

    id19out_result = (slice<0,32>(id19in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id20out_output;

  { // Node ID: 20 (NodeReinterpret)
    const HWRawBits<32> &id20in_input = id19out_result;

    id20out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id20in_input));
  }
  { // Node ID: 1186 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1186in_a = id667out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1186in_b = id20out_output;

    id1186out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1186in_a,id1186in_b));
  }
  HWRawBits<64> id1492out_dataout;

  { // Node ID: 1492 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1492in_datain = id1463out_dataa[getCycle()%3];

    id1492out_dataout = (shift_left_fixed(id1492in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id670out_output;

  { // Node ID: 670 (NodeReinterpret)
    const HWRawBits<64> &id670in_input = id1492out_dataout;

    id670out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id670in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id671out_o;

  { // Node ID: 671 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id671in_i = id670out_output;

    id671out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id671in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id672out_o;

  { // Node ID: 672 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id672in_i = id671out_o;

    id672out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id672in_i));
  }
  HWRawBits<32> id21out_result;

  { // Node ID: 21 (NodeSlice)
    const HWRawBits<800> &id21in_a = id18out_data;

    id21out_result = (slice<32,32>(id21in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id22out_output;

  { // Node ID: 22 (NodeReinterpret)
    const HWRawBits<32> &id22in_input = id21out_result;

    id22out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id22in_input));
  }
  { // Node ID: 1187 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1187in_a = id672out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1187in_b = id22out_output;

    id1187out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1187in_a,id1187in_b));
  }
  { // Node ID: 1211 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1211in_a = id1186out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1211in_b = id1187out_result[getCycle()%8];

    id1211out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1211in_a,id1211in_b));
  }
  HWRawBits<64> id1493out_dataout;

  { // Node ID: 1493 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1493in_datain = id1463out_dataa[getCycle()%3];

    id1493out_dataout = (shift_left_fixed(id1493in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id675out_output;

  { // Node ID: 675 (NodeReinterpret)
    const HWRawBits<64> &id675in_input = id1493out_dataout;

    id675out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id675in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id676out_o;

  { // Node ID: 676 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id676in_i = id675out_output;

    id676out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id676in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id677out_o;

  { // Node ID: 677 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id677in_i = id676out_o;

    id677out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id677in_i));
  }
  HWRawBits<32> id23out_result;

  { // Node ID: 23 (NodeSlice)
    const HWRawBits<800> &id23in_a = id18out_data;

    id23out_result = (slice<64,32>(id23in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id24out_output;

  { // Node ID: 24 (NodeReinterpret)
    const HWRawBits<32> &id24in_input = id23out_result;

    id24out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id24in_input));
  }
  { // Node ID: 1188 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1188in_a = id677out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1188in_b = id24out_output;

    id1188out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1188in_a,id1188in_b));
  }
  HWRawBits<64> id1494out_dataout;

  { // Node ID: 1494 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1494in_datain = id1463out_dataa[getCycle()%3];

    id1494out_dataout = (shift_left_fixed(id1494in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id680out_output;

  { // Node ID: 680 (NodeReinterpret)
    const HWRawBits<64> &id680in_input = id1494out_dataout;

    id680out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id680in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id681out_o;

  { // Node ID: 681 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id681in_i = id680out_output;

    id681out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id681in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id682out_o;

  { // Node ID: 682 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id682in_i = id681out_o;

    id682out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id682in_i));
  }
  HWRawBits<32> id25out_result;

  { // Node ID: 25 (NodeSlice)
    const HWRawBits<800> &id25in_a = id18out_data;

    id25out_result = (slice<96,32>(id25in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id26out_output;

  { // Node ID: 26 (NodeReinterpret)
    const HWRawBits<32> &id26in_input = id25out_result;

    id26out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id26in_input));
  }
  { // Node ID: 1189 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1189in_a = id682out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1189in_b = id26out_output;

    id1189out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1189in_a,id1189in_b));
  }
  { // Node ID: 1212 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1212in_a = id1188out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1212in_b = id1189out_result[getCycle()%8];

    id1212out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1212in_a,id1212in_b));
  }
  { // Node ID: 1223 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1223in_a = id1211out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1223in_b = id1212out_result[getCycle()%2];

    id1223out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1223in_a,id1223in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id683out_o;

  { // Node ID: 683 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id683in_i = id133out_result[getCycle()%2];

    id683out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id683in_i));
  }
  { // Node ID: 1464 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1464in_addra = id683out_o;

    long id1464x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1464x_2;

    (id1464x_1) = (id1464in_addra.getValueAsLong());
    switch(((long)((id1464x_1)<(4l)))) {
      case 0l:
        id1464x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1464x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom29", id1464x_1) );
        break;
      default:
        id1464x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1464out_dataa[(getCycle()+2)%3] = (id1464x_2);
  }
  HWRawBits<64> id1681out_output;

  { // Node ID: 1681 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1681in_input = id1464out_dataa[getCycle()%3];

    id1681out_output = (cast_fixed2bits(id1681in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id686out_output;

  { // Node ID: 686 (NodeReinterpret)
    const HWRawBits<64> &id686in_input = id1681out_output;

    id686out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id686in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id687out_o;

  { // Node ID: 687 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id687in_i = id686out_output;

    id687out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id687in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id688out_o;

  { // Node ID: 688 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id688in_i = id687out_o;

    id688out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id688in_i));
  }
  HWRawBits<32> id27out_result;

  { // Node ID: 27 (NodeSlice)
    const HWRawBits<800> &id27in_a = id18out_data;

    id27out_result = (slice<128,32>(id27in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id28out_output;

  { // Node ID: 28 (NodeReinterpret)
    const HWRawBits<32> &id28in_input = id27out_result;

    id28out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id28in_input));
  }
  { // Node ID: 1190 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1190in_a = id688out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1190in_b = id28out_output;

    id1190out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1190in_a,id1190in_b));
  }
  HWRawBits<64> id1496out_dataout;

  { // Node ID: 1496 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1496in_datain = id1464out_dataa[getCycle()%3];

    id1496out_dataout = (shift_left_fixed(id1496in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id691out_output;

  { // Node ID: 691 (NodeReinterpret)
    const HWRawBits<64> &id691in_input = id1496out_dataout;

    id691out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id691in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id692out_o;

  { // Node ID: 692 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id692in_i = id691out_output;

    id692out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id692in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id693out_o;

  { // Node ID: 693 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id693in_i = id692out_o;

    id693out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id693in_i));
  }
  HWRawBits<32> id29out_result;

  { // Node ID: 29 (NodeSlice)
    const HWRawBits<800> &id29in_a = id18out_data;

    id29out_result = (slice<160,32>(id29in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id30out_output;

  { // Node ID: 30 (NodeReinterpret)
    const HWRawBits<32> &id30in_input = id29out_result;

    id30out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id30in_input));
  }
  { // Node ID: 1191 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1191in_a = id693out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1191in_b = id30out_output;

    id1191out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1191in_a,id1191in_b));
  }
  { // Node ID: 1213 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1213in_a = id1190out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1213in_b = id1191out_result[getCycle()%8];

    id1213out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1213in_a,id1213in_b));
  }
  HWRawBits<64> id1497out_dataout;

  { // Node ID: 1497 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1497in_datain = id1464out_dataa[getCycle()%3];

    id1497out_dataout = (shift_left_fixed(id1497in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id696out_output;

  { // Node ID: 696 (NodeReinterpret)
    const HWRawBits<64> &id696in_input = id1497out_dataout;

    id696out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id696in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id697out_o;

  { // Node ID: 697 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id697in_i = id696out_output;

    id697out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id697in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id698out_o;

  { // Node ID: 698 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id698in_i = id697out_o;

    id698out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id698in_i));
  }
  HWRawBits<32> id31out_result;

  { // Node ID: 31 (NodeSlice)
    const HWRawBits<800> &id31in_a = id18out_data;

    id31out_result = (slice<192,32>(id31in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id32out_output;

  { // Node ID: 32 (NodeReinterpret)
    const HWRawBits<32> &id32in_input = id31out_result;

    id32out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id32in_input));
  }
  { // Node ID: 1192 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1192in_a = id698out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1192in_b = id32out_output;

    id1192out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1192in_a,id1192in_b));
  }
  HWRawBits<64> id1498out_dataout;

  { // Node ID: 1498 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1498in_datain = id1464out_dataa[getCycle()%3];

    id1498out_dataout = (shift_left_fixed(id1498in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id701out_output;

  { // Node ID: 701 (NodeReinterpret)
    const HWRawBits<64> &id701in_input = id1498out_dataout;

    id701out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id701in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id702out_o;

  { // Node ID: 702 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id702in_i = id701out_output;

    id702out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id702in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id703out_o;

  { // Node ID: 703 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id703in_i = id702out_o;

    id703out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id703in_i));
  }
  HWRawBits<32> id33out_result;

  { // Node ID: 33 (NodeSlice)
    const HWRawBits<800> &id33in_a = id18out_data;

    id33out_result = (slice<224,32>(id33in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id34out_output;

  { // Node ID: 34 (NodeReinterpret)
    const HWRawBits<32> &id34in_input = id33out_result;

    id34out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id34in_input));
  }
  { // Node ID: 1193 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1193in_a = id703out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1193in_b = id34out_output;

    id1193out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1193in_a,id1193in_b));
  }
  { // Node ID: 1214 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1214in_a = id1192out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1214in_b = id1193out_result[getCycle()%8];

    id1214out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1214in_a,id1214in_b));
  }
  { // Node ID: 1224 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1224in_a = id1213out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1224in_b = id1214out_result[getCycle()%2];

    id1224out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1224in_a,id1224in_b));
  }
  { // Node ID: 1229 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1229in_a = id1223out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1229in_b = id1224out_result[getCycle()%2];

    id1229out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1229in_a,id1229in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id704out_o;

  { // Node ID: 704 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id704in_i = id133out_result[getCycle()%2];

    id704out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id704in_i));
  }
  { // Node ID: 1465 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1465in_addra = id704out_o;

    long id1465x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1465x_2;

    (id1465x_1) = (id1465in_addra.getValueAsLong());
    switch(((long)((id1465x_1)<(4l)))) {
      case 0l:
        id1465x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1465x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom30", id1465x_1) );
        break;
      default:
        id1465x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1465out_dataa[(getCycle()+2)%3] = (id1465x_2);
  }
  HWRawBits<64> id1682out_output;

  { // Node ID: 1682 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1682in_input = id1465out_dataa[getCycle()%3];

    id1682out_output = (cast_fixed2bits(id1682in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id707out_output;

  { // Node ID: 707 (NodeReinterpret)
    const HWRawBits<64> &id707in_input = id1682out_output;

    id707out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id707in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id708out_o;

  { // Node ID: 708 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id708in_i = id707out_output;

    id708out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id708in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id709out_o;

  { // Node ID: 709 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id709in_i = id708out_o;

    id709out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id709in_i));
  }
  HWRawBits<32> id35out_result;

  { // Node ID: 35 (NodeSlice)
    const HWRawBits<800> &id35in_a = id18out_data;

    id35out_result = (slice<256,32>(id35in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id36out_output;

  { // Node ID: 36 (NodeReinterpret)
    const HWRawBits<32> &id36in_input = id35out_result;

    id36out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id36in_input));
  }
  { // Node ID: 1194 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1194in_a = id709out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1194in_b = id36out_output;

    id1194out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1194in_a,id1194in_b));
  }
  HWRawBits<64> id1500out_dataout;

  { // Node ID: 1500 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1500in_datain = id1465out_dataa[getCycle()%3];

    id1500out_dataout = (shift_left_fixed(id1500in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id712out_output;

  { // Node ID: 712 (NodeReinterpret)
    const HWRawBits<64> &id712in_input = id1500out_dataout;

    id712out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id712in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id713out_o;

  { // Node ID: 713 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id713in_i = id712out_output;

    id713out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id713in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id714out_o;

  { // Node ID: 714 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id714in_i = id713out_o;

    id714out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id714in_i));
  }
  HWRawBits<32> id37out_result;

  { // Node ID: 37 (NodeSlice)
    const HWRawBits<800> &id37in_a = id18out_data;

    id37out_result = (slice<288,32>(id37in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id38out_output;

  { // Node ID: 38 (NodeReinterpret)
    const HWRawBits<32> &id38in_input = id37out_result;

    id38out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id38in_input));
  }
  { // Node ID: 1195 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1195in_a = id714out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1195in_b = id38out_output;

    id1195out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1195in_a,id1195in_b));
  }
  { // Node ID: 1215 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1215in_a = id1194out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1215in_b = id1195out_result[getCycle()%8];

    id1215out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1215in_a,id1215in_b));
  }
  HWRawBits<64> id1501out_dataout;

  { // Node ID: 1501 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1501in_datain = id1465out_dataa[getCycle()%3];

    id1501out_dataout = (shift_left_fixed(id1501in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id717out_output;

  { // Node ID: 717 (NodeReinterpret)
    const HWRawBits<64> &id717in_input = id1501out_dataout;

    id717out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id717in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id718out_o;

  { // Node ID: 718 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id718in_i = id717out_output;

    id718out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id718in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id719out_o;

  { // Node ID: 719 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id719in_i = id718out_o;

    id719out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id719in_i));
  }
  HWRawBits<32> id39out_result;

  { // Node ID: 39 (NodeSlice)
    const HWRawBits<800> &id39in_a = id18out_data;

    id39out_result = (slice<320,32>(id39in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id40out_output;

  { // Node ID: 40 (NodeReinterpret)
    const HWRawBits<32> &id40in_input = id39out_result;

    id40out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id40in_input));
  }
  { // Node ID: 1196 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1196in_a = id719out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1196in_b = id40out_output;

    id1196out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1196in_a,id1196in_b));
  }
  HWRawBits<64> id1502out_dataout;

  { // Node ID: 1502 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1502in_datain = id1465out_dataa[getCycle()%3];

    id1502out_dataout = (shift_left_fixed(id1502in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id722out_output;

  { // Node ID: 722 (NodeReinterpret)
    const HWRawBits<64> &id722in_input = id1502out_dataout;

    id722out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id722in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id723out_o;

  { // Node ID: 723 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id723in_i = id722out_output;

    id723out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id723in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id724out_o;

  { // Node ID: 724 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id724in_i = id723out_o;

    id724out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id724in_i));
  }
  HWRawBits<32> id41out_result;

  { // Node ID: 41 (NodeSlice)
    const HWRawBits<800> &id41in_a = id18out_data;

    id41out_result = (slice<352,32>(id41in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id42out_output;

  { // Node ID: 42 (NodeReinterpret)
    const HWRawBits<32> &id42in_input = id41out_result;

    id42out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id42in_input));
  }
  { // Node ID: 1197 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1197in_a = id724out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1197in_b = id42out_output;

    id1197out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1197in_a,id1197in_b));
  }
  { // Node ID: 1216 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1216in_a = id1196out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1216in_b = id1197out_result[getCycle()%8];

    id1216out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1216in_a,id1216in_b));
  }
  { // Node ID: 1225 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1225in_a = id1215out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1225in_b = id1216out_result[getCycle()%2];

    id1225out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1225in_a,id1225in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id725out_o;

  { // Node ID: 725 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id725in_i = id133out_result[getCycle()%2];

    id725out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id725in_i));
  }
  { // Node ID: 1466 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1466in_addra = id725out_o;

    long id1466x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1466x_2;

    (id1466x_1) = (id1466in_addra.getValueAsLong());
    switch(((long)((id1466x_1)<(4l)))) {
      case 0l:
        id1466x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1466x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom31", id1466x_1) );
        break;
      default:
        id1466x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1466out_dataa[(getCycle()+2)%3] = (id1466x_2);
  }
  HWRawBits<64> id1683out_output;

  { // Node ID: 1683 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1683in_input = id1466out_dataa[getCycle()%3];

    id1683out_output = (cast_fixed2bits(id1683in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id728out_output;

  { // Node ID: 728 (NodeReinterpret)
    const HWRawBits<64> &id728in_input = id1683out_output;

    id728out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id728in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id729out_o;

  { // Node ID: 729 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id729in_i = id728out_output;

    id729out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id729in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id730out_o;

  { // Node ID: 730 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id730in_i = id729out_o;

    id730out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id730in_i));
  }
  HWRawBits<32> id43out_result;

  { // Node ID: 43 (NodeSlice)
    const HWRawBits<800> &id43in_a = id18out_data;

    id43out_result = (slice<384,32>(id43in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id44out_output;

  { // Node ID: 44 (NodeReinterpret)
    const HWRawBits<32> &id44in_input = id43out_result;

    id44out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id44in_input));
  }
  { // Node ID: 1198 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1198in_a = id730out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1198in_b = id44out_output;

    id1198out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1198in_a,id1198in_b));
  }
  HWRawBits<64> id1504out_dataout;

  { // Node ID: 1504 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1504in_datain = id1466out_dataa[getCycle()%3];

    id1504out_dataout = (shift_left_fixed(id1504in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id733out_output;

  { // Node ID: 733 (NodeReinterpret)
    const HWRawBits<64> &id733in_input = id1504out_dataout;

    id733out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id733in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id734out_o;

  { // Node ID: 734 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id734in_i = id733out_output;

    id734out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id734in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id735out_o;

  { // Node ID: 735 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id735in_i = id734out_o;

    id735out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id735in_i));
  }
  HWRawBits<32> id45out_result;

  { // Node ID: 45 (NodeSlice)
    const HWRawBits<800> &id45in_a = id18out_data;

    id45out_result = (slice<416,32>(id45in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id46out_output;

  { // Node ID: 46 (NodeReinterpret)
    const HWRawBits<32> &id46in_input = id45out_result;

    id46out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id46in_input));
  }
  { // Node ID: 1199 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1199in_a = id735out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1199in_b = id46out_output;

    id1199out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1199in_a,id1199in_b));
  }
  { // Node ID: 1217 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1217in_a = id1198out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1217in_b = id1199out_result[getCycle()%8];

    id1217out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1217in_a,id1217in_b));
  }
  HWRawBits<64> id1505out_dataout;

  { // Node ID: 1505 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1505in_datain = id1466out_dataa[getCycle()%3];

    id1505out_dataout = (shift_left_fixed(id1505in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id738out_output;

  { // Node ID: 738 (NodeReinterpret)
    const HWRawBits<64> &id738in_input = id1505out_dataout;

    id738out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id738in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id739out_o;

  { // Node ID: 739 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id739in_i = id738out_output;

    id739out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id739in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id740out_o;

  { // Node ID: 740 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id740in_i = id739out_o;

    id740out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id740in_i));
  }
  HWRawBits<32> id47out_result;

  { // Node ID: 47 (NodeSlice)
    const HWRawBits<800> &id47in_a = id18out_data;

    id47out_result = (slice<448,32>(id47in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id48out_output;

  { // Node ID: 48 (NodeReinterpret)
    const HWRawBits<32> &id48in_input = id47out_result;

    id48out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id48in_input));
  }
  { // Node ID: 1200 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1200in_a = id740out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1200in_b = id48out_output;

    id1200out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1200in_a,id1200in_b));
  }
  HWRawBits<64> id1506out_dataout;

  { // Node ID: 1506 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1506in_datain = id1466out_dataa[getCycle()%3];

    id1506out_dataout = (shift_left_fixed(id1506in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id743out_output;

  { // Node ID: 743 (NodeReinterpret)
    const HWRawBits<64> &id743in_input = id1506out_dataout;

    id743out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id743in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id744out_o;

  { // Node ID: 744 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id744in_i = id743out_output;

    id744out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id744in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id745out_o;

  { // Node ID: 745 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id745in_i = id744out_o;

    id745out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id745in_i));
  }
  HWRawBits<32> id49out_result;

  { // Node ID: 49 (NodeSlice)
    const HWRawBits<800> &id49in_a = id18out_data;

    id49out_result = (slice<480,32>(id49in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id50out_output;

  { // Node ID: 50 (NodeReinterpret)
    const HWRawBits<32> &id50in_input = id49out_result;

    id50out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id50in_input));
  }
  { // Node ID: 1201 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1201in_a = id745out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1201in_b = id50out_output;

    id1201out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1201in_a,id1201in_b));
  }
  { // Node ID: 1218 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1218in_a = id1200out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1218in_b = id1201out_result[getCycle()%8];

    id1218out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1218in_a,id1218in_b));
  }
  { // Node ID: 1226 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1226in_a = id1217out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1226in_b = id1218out_result[getCycle()%2];

    id1226out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1226in_a,id1226in_b));
  }
  { // Node ID: 1230 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1230in_a = id1225out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1230in_b = id1226out_result[getCycle()%2];

    id1230out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1230in_a,id1230in_b));
  }
  { // Node ID: 1232 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1232in_a = id1229out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1232in_b = id1230out_result[getCycle()%2];

    id1232out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1232in_a,id1232in_b));
  }
  { // Node ID: 1233 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1233in_a = id1721out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1233in_b = id1232out_result[getCycle()%2];

    id1233out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1233in_a,id1233in_b));
  }
  { // Node ID: 1234 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1234in_a = id1210out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1234in_b = id1233out_result[getCycle()%2];

    id1234out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1234in_a,id1234in_b));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1391out_output;

  { // Node ID: 1391 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1391in_input = id1389out_result[getCycle()%2];

    id1391out_output = id1391in_input;
  }
  { // Node ID: 1722 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1722in_input = id1391out_output;

    id1722out_output[(getCycle()+3)%4] = id1722in_input;
  }
  { // Node ID: 1388 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1388in_a = id1234out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1388in_b = id1722out_output[getCycle()%4];

    id1388out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1388in_a,id1388in_b));
  }
  { // Node ID: 1724 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1724in_input = id1234out_result[getCycle()%2];

    id1724out_output[(getCycle()+1)%2] = id1724in_input;
  }
  { // Node ID: 1389 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1389in_sel = id1723out_output[getCycle()%16];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1389in_option0 = id1388out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1389in_option1 = id1724out_output[getCycle()%2];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1389x_1;

    switch((id1389in_sel.getValueAsLong())) {
      case 0l:
        id1389x_1 = id1389in_option0;
        break;
      case 1l:
        id1389x_1 = id1389in_option1;
        break;
      default:
        id1389x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1389out_result[(getCycle()+1)%2] = (id1389x_1);
  }
  { // Node ID: 1811 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id1811in_input = id1810out_output[getCycle()%2];

    id1811out_output[(getCycle()+13)%14] = id1811in_input;
  }
  HWOffsetFix<16,2,UNSIGNED> id1507out_output;

  { // Node ID: 1507 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1507in_input = id1811out_output[getCycle()%14];

    id1507out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1507in_input))));
  }
  { // Node ID: 1508 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1508in_a = id1811out_output[getCycle()%14];
    const HWOffsetFix<16,2,UNSIGNED> &id1508in_b = id1507out_output;

    id1508out_result[(getCycle()+1)%2] = (add_fixed<19,0,UNSIGNED,TONEAREVEN>(id1508in_a,id1508in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1509out_o;

  { // Node ID: 1509 (NodeCast)
    const HWOffsetFix<19,0,UNSIGNED> &id1509in_i = id1508out_result[getCycle()%2];

    id1509out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1509in_i));
  }
  { // Node ID: 1809 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id1809in_input = id1719out_output[getCycle()%2];

    id1809out_output[(getCycle()+17)%18] = id1809in_input;
  }
  HWOffsetFix<16,2,UNSIGNED> id1510out_output;

  { // Node ID: 1510 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1510in_input = id1809out_output[getCycle()%18];

    id1510out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1510in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id1511out_output;

  { // Node ID: 1511 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1511in_input = id1809out_output[getCycle()%18];

    id1511out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id1511in_input))));
  }
  { // Node ID: 1512 (NodeAdd)
    const HWOffsetFix<16,2,UNSIGNED> &id1512in_a = id1510out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id1512in_b = id1511out_output;

    id1512out_result[(getCycle()+1)%2] = (add_fixed<19,2,UNSIGNED,TONEAREVEN>(id1512in_a,id1512in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1513out_o;

  { // Node ID: 1513 (NodeCast)
    const HWOffsetFix<19,2,UNSIGNED> &id1513in_i = id1512out_result[getCycle()%2];

    id1513out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1513in_i));
  }
  { // Node ID: 1384 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1384in_a = id1509out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id1384in_b = id1513out_o;

    id1384out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1384in_a,id1384in_b));
  }
  { // Node ID: 1822 (NodeConstantRawBits)
  }
  { // Node ID: 1386 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1386in_a = id1384out_result[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id1386in_b = id1822out_value;

    id1386out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1386in_a,id1386in_b));
  }
  HWOffsetFix<5,0,UNSIGNED> id1387out_o;

  { // Node ID: 1387 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id1387in_i = id1386out_result[getCycle()%2];

    id1387out_o = (cast_fixed2fixed<5,0,UNSIGNED,TONEAREVEN>(id1387in_i));
  }
  HWOffsetFix<16,2,UNSIGNED> id1514out_output;

  { // Node ID: 1514 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1514in_input = id1811out_output[getCycle()%14];

    id1514out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1514in_input))));
  }
  { // Node ID: 1515 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1515in_a = id1811out_output[getCycle()%14];
    const HWOffsetFix<16,2,UNSIGNED> &id1515in_b = id1514out_output;

    id1515out_result[(getCycle()+1)%2] = (add_fixed<19,0,UNSIGNED,TONEAREVEN>(id1515in_a,id1515in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1516out_o;

  { // Node ID: 1516 (NodeCast)
    const HWOffsetFix<19,0,UNSIGNED> &id1516in_i = id1515out_result[getCycle()%2];

    id1516out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1516in_i));
  }
  HWOffsetFix<16,2,UNSIGNED> id1517out_output;

  { // Node ID: 1517 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1517in_input = id1809out_output[getCycle()%18];

    id1517out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1517in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id1518out_output;

  { // Node ID: 1518 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1518in_input = id1809out_output[getCycle()%18];

    id1518out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id1518in_input))));
  }
  { // Node ID: 1519 (NodeAdd)
    const HWOffsetFix<16,2,UNSIGNED> &id1519in_a = id1517out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id1519in_b = id1518out_output;

    id1519out_result[(getCycle()+1)%2] = (add_fixed<19,2,UNSIGNED,TONEAREVEN>(id1519in_a,id1519in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1520out_o;

  { // Node ID: 1520 (NodeCast)
    const HWOffsetFix<19,2,UNSIGNED> &id1520in_i = id1519out_result[getCycle()%2];

    id1520out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1520in_i));
  }
  { // Node ID: 1396 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1396in_a = id1516out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id1396in_b = id1520out_o;

    id1396out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1396in_a,id1396in_b));
  }
  { // Node ID: 1821 (NodeConstantRawBits)
  }
  { // Node ID: 1398 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1398in_a = id1396out_result[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id1398in_b = id1821out_value;

    id1398out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1398in_a,id1398in_b));
  }
  HWOffsetFix<5,0,UNSIGNED> id1399out_o;

  { // Node ID: 1399 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id1399in_i = id1398out_result[getCycle()%2];

    id1399out_o = (cast_fixed2fixed<5,0,UNSIGNED,TONEAREVEN>(id1399in_i));
  }
  { // Node ID: 1434 (NodeMappedRom)
    const HWOffsetFix<5,0,UNSIGNED> &id1434in_addra = id1387out_o;
    const HWOffsetFix<5,0,UNSIGNED> &id1434in_addrb = id1399out_o;

    long id1434x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1434x_2;
    long id1434x_3;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1434x_4;

    (id1434x_1) = (id1434in_addra.getValueAsLong());
    switch(((long)((id1434x_1)<(20l)))) {
      case 0l:
        id1434x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id1434x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("replicated_mem_4_bias", id1434x_1) );
        break;
      default:
        id1434x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1434out_dataa[(getCycle()+2)%3] = (id1434x_2);
    (id1434x_3) = (id1434in_addrb.getValueAsLong());
    switch(((long)((id1434x_3)<(20l)))) {
      case 0l:
        id1434x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id1434x_4 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("replicated_mem_4_bias", id1434x_3) );
        break;
      default:
        id1434x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1434out_datab[(getCycle()+2)%3] = (id1434x_4);
  }
  { // Node ID: 1390 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1390in_a = id1389out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1390in_b = id1434out_dataa[getCycle()%3];

    id1390out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1390in_a,id1390in_b));
  }
  HWRawBits<32> id1415out_output;

  { // Node ID: 1415 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1415in_input = id1390out_result[getCycle()%2];

    id1415out_output = (cast_fixed2bits(id1415in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id656out_o;

  { // Node ID: 656 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id656in_i = id133out_result[getCycle()%2];

    id656out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id656in_i));
  }
  { // Node ID: 1733 (NodeFIFO)
    const HWOffsetFix<2,0,UNSIGNED> &id1733in_input = id656out_o;

    id1733out_output[(getCycle()+5)%6] = id1733in_input;
  }
  { // Node ID: 1462 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1462in_addra = id1733out_output[getCycle()%6];

    long id1462x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1462x_2;

    (id1462x_1) = (id1462in_addra.getValueAsLong());
    switch(((long)((id1462x_1)<(4l)))) {
      case 0l:
        id1462x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1462x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom27", id1462x_1) );
        break;
      default:
        id1462x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1462out_dataa[(getCycle()+2)%3] = (id1462x_2);
  }
  HWRawBits<64> id1684out_output;

  { // Node ID: 1684 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1684in_input = id1462out_dataa[getCycle()%3];

    id1684out_output = (cast_fixed2bits(id1684in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id659out_output;

  { // Node ID: 659 (NodeReinterpret)
    const HWRawBits<64> &id659in_input = id1684out_output;

    id659out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id659in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id660out_o;

  { // Node ID: 660 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id660in_i = id659out_output;

    id660out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id660in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id661out_o;

  { // Node ID: 661 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id661in_i = id660out_o;

    id661out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id661in_i));
  }
  { // Node ID: 1112 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1112in_a = id661out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1112in_b = id68out_output;

    id1112out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1112in_a,id1112in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id614out_o;

  { // Node ID: 614 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id614in_i = id133out_result[getCycle()%2];

    id614out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id614in_i));
  }
  { // Node ID: 1460 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1460in_addra = id614out_o;

    long id1460x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1460x_2;

    (id1460x_1) = (id1460in_addra.getValueAsLong());
    switch(((long)((id1460x_1)<(4l)))) {
      case 0l:
        id1460x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1460x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom25", id1460x_1) );
        break;
      default:
        id1460x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1460out_dataa[(getCycle()+2)%3] = (id1460x_2);
  }
  HWRawBits<64> id1685out_output;

  { // Node ID: 1685 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1685in_input = id1460out_dataa[getCycle()%3];

    id1685out_output = (cast_fixed2bits(id1685in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id617out_output;

  { // Node ID: 617 (NodeReinterpret)
    const HWRawBits<64> &id617in_input = id1685out_output;

    id617out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id617in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id618out_o;

  { // Node ID: 618 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id618in_i = id617out_output;

    id618out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id618in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id619out_o;

  { // Node ID: 619 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id619in_i = id618out_o;

    id619out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id619in_i));
  }
  { // Node ID: 1104 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1104in_a = id619out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1104in_b = id52out_output;

    id1104out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1104in_a,id1104in_b));
  }
  HWRawBits<64> id1523out_dataout;

  { // Node ID: 1523 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1523in_datain = id1460out_dataa[getCycle()%3];

    id1523out_dataout = (shift_left_fixed(id1523in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id622out_output;

  { // Node ID: 622 (NodeReinterpret)
    const HWRawBits<64> &id622in_input = id1523out_dataout;

    id622out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id622in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id623out_o;

  { // Node ID: 623 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id623in_i = id622out_output;

    id623out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id623in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id624out_o;

  { // Node ID: 624 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id624in_i = id623out_o;

    id624out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id624in_i));
  }
  { // Node ID: 1105 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1105in_a = id624out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1105in_b = id54out_output;

    id1105out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1105in_a,id1105in_b));
  }
  { // Node ID: 1121 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1121in_a = id1104out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1121in_b = id1105out_result[getCycle()%8];

    id1121out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1121in_a,id1121in_b));
  }
  HWRawBits<64> id1524out_dataout;

  { // Node ID: 1524 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1524in_datain = id1460out_dataa[getCycle()%3];

    id1524out_dataout = (shift_left_fixed(id1524in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id627out_output;

  { // Node ID: 627 (NodeReinterpret)
    const HWRawBits<64> &id627in_input = id1524out_dataout;

    id627out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id627in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id628out_o;

  { // Node ID: 628 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id628in_i = id627out_output;

    id628out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id628in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id629out_o;

  { // Node ID: 629 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id629in_i = id628out_o;

    id629out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id629in_i));
  }
  { // Node ID: 1106 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1106in_a = id629out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1106in_b = id56out_output;

    id1106out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1106in_a,id1106in_b));
  }
  HWRawBits<64> id1525out_dataout;

  { // Node ID: 1525 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1525in_datain = id1460out_dataa[getCycle()%3];

    id1525out_dataout = (shift_left_fixed(id1525in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id632out_output;

  { // Node ID: 632 (NodeReinterpret)
    const HWRawBits<64> &id632in_input = id1525out_dataout;

    id632out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id632in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id633out_o;

  { // Node ID: 633 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id633in_i = id632out_output;

    id633out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id633in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id634out_o;

  { // Node ID: 634 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id634in_i = id633out_o;

    id634out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id634in_i));
  }
  { // Node ID: 1107 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1107in_a = id634out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1107in_b = id58out_output;

    id1107out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1107in_a,id1107in_b));
  }
  { // Node ID: 1122 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1122in_a = id1106out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1122in_b = id1107out_result[getCycle()%8];

    id1122out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1122in_a,id1122in_b));
  }
  { // Node ID: 1129 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1129in_a = id1121out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1129in_b = id1122out_result[getCycle()%2];

    id1129out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1129in_a,id1129in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id635out_o;

  { // Node ID: 635 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id635in_i = id133out_result[getCycle()%2];

    id635out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id635in_i));
  }
  { // Node ID: 1461 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1461in_addra = id635out_o;

    long id1461x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1461x_2;

    (id1461x_1) = (id1461in_addra.getValueAsLong());
    switch(((long)((id1461x_1)<(4l)))) {
      case 0l:
        id1461x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1461x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom26", id1461x_1) );
        break;
      default:
        id1461x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1461out_dataa[(getCycle()+2)%3] = (id1461x_2);
  }
  HWRawBits<64> id1686out_output;

  { // Node ID: 1686 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1686in_input = id1461out_dataa[getCycle()%3];

    id1686out_output = (cast_fixed2bits(id1686in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id638out_output;

  { // Node ID: 638 (NodeReinterpret)
    const HWRawBits<64> &id638in_input = id1686out_output;

    id638out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id638in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id639out_o;

  { // Node ID: 639 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id639in_i = id638out_output;

    id639out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id639in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id640out_o;

  { // Node ID: 640 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id640in_i = id639out_o;

    id640out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id640in_i));
  }
  { // Node ID: 1108 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1108in_a = id640out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1108in_b = id60out_output;

    id1108out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1108in_a,id1108in_b));
  }
  HWRawBits<64> id1527out_dataout;

  { // Node ID: 1527 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1527in_datain = id1461out_dataa[getCycle()%3];

    id1527out_dataout = (shift_left_fixed(id1527in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id643out_output;

  { // Node ID: 643 (NodeReinterpret)
    const HWRawBits<64> &id643in_input = id1527out_dataout;

    id643out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id643in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id644out_o;

  { // Node ID: 644 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id644in_i = id643out_output;

    id644out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id644in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id645out_o;

  { // Node ID: 645 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id645in_i = id644out_o;

    id645out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id645in_i));
  }
  { // Node ID: 1109 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1109in_a = id645out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1109in_b = id62out_output;

    id1109out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1109in_a,id1109in_b));
  }
  { // Node ID: 1123 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1123in_a = id1108out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1123in_b = id1109out_result[getCycle()%8];

    id1123out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1123in_a,id1123in_b));
  }
  HWRawBits<64> id1528out_dataout;

  { // Node ID: 1528 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1528in_datain = id1461out_dataa[getCycle()%3];

    id1528out_dataout = (shift_left_fixed(id1528in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id648out_output;

  { // Node ID: 648 (NodeReinterpret)
    const HWRawBits<64> &id648in_input = id1528out_dataout;

    id648out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id648in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id649out_o;

  { // Node ID: 649 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id649in_i = id648out_output;

    id649out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id649in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id650out_o;

  { // Node ID: 650 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id650in_i = id649out_o;

    id650out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id650in_i));
  }
  { // Node ID: 1110 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1110in_a = id650out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1110in_b = id64out_output;

    id1110out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1110in_a,id1110in_b));
  }
  HWRawBits<64> id1529out_dataout;

  { // Node ID: 1529 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1529in_datain = id1461out_dataa[getCycle()%3];

    id1529out_dataout = (shift_left_fixed(id1529in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id653out_output;

  { // Node ID: 653 (NodeReinterpret)
    const HWRawBits<64> &id653in_input = id1529out_dataout;

    id653out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id653in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id654out_o;

  { // Node ID: 654 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id654in_i = id653out_output;

    id654out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id654in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id655out_o;

  { // Node ID: 655 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id655in_i = id654out_o;

    id655out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id655in_i));
  }
  { // Node ID: 1111 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1111in_a = id655out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1111in_b = id66out_output;

    id1111out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1111in_a,id1111in_b));
  }
  { // Node ID: 1124 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1124in_a = id1110out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1124in_b = id1111out_result[getCycle()%8];

    id1124out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1124in_a,id1124in_b));
  }
  { // Node ID: 1130 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1130in_a = id1123out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1130in_b = id1124out_result[getCycle()%2];

    id1130out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1130in_a,id1130in_b));
  }
  { // Node ID: 1133 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1133in_a = id1129out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1133in_b = id1130out_result[getCycle()%2];

    id1133out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1133in_a,id1133in_b));
  }
  { // Node ID: 1734 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1734in_input = id1133out_result[getCycle()%2];

    id1734out_output[(getCycle()+1)%2] = id1734in_input;
  }
  HWOffsetFix<2,0,UNSIGNED> id530out_o;

  { // Node ID: 530 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id530in_i = id133out_result[getCycle()%2];

    id530out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id530in_i));
  }
  { // Node ID: 1456 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1456in_addra = id530out_o;

    long id1456x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1456x_2;

    (id1456x_1) = (id1456in_addra.getValueAsLong());
    switch(((long)((id1456x_1)<(4l)))) {
      case 0l:
        id1456x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1456x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom21", id1456x_1) );
        break;
      default:
        id1456x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1456out_dataa[(getCycle()+2)%3] = (id1456x_2);
  }
  HWRawBits<64> id1687out_output;

  { // Node ID: 1687 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1687in_input = id1456out_dataa[getCycle()%3];

    id1687out_output = (cast_fixed2bits(id1687in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id533out_output;

  { // Node ID: 533 (NodeReinterpret)
    const HWRawBits<64> &id533in_input = id1687out_output;

    id533out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id533in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id534out_o;

  { // Node ID: 534 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id534in_i = id533out_output;

    id534out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id534in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id535out_o;

  { // Node ID: 535 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id535in_i = id534out_o;

    id535out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id535in_i));
  }
  { // Node ID: 1088 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1088in_a = id535out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1088in_b = id20out_output;

    id1088out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1088in_a,id1088in_b));
  }
  HWRawBits<64> id1531out_dataout;

  { // Node ID: 1531 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1531in_datain = id1456out_dataa[getCycle()%3];

    id1531out_dataout = (shift_left_fixed(id1531in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id538out_output;

  { // Node ID: 538 (NodeReinterpret)
    const HWRawBits<64> &id538in_input = id1531out_dataout;

    id538out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id538in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id539out_o;

  { // Node ID: 539 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id539in_i = id538out_output;

    id539out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id539in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id540out_o;

  { // Node ID: 540 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id540in_i = id539out_o;

    id540out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id540in_i));
  }
  { // Node ID: 1089 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1089in_a = id540out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1089in_b = id22out_output;

    id1089out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1089in_a,id1089in_b));
  }
  { // Node ID: 1113 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1113in_a = id1088out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1113in_b = id1089out_result[getCycle()%8];

    id1113out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1113in_a,id1113in_b));
  }
  HWRawBits<64> id1532out_dataout;

  { // Node ID: 1532 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1532in_datain = id1456out_dataa[getCycle()%3];

    id1532out_dataout = (shift_left_fixed(id1532in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id543out_output;

  { // Node ID: 543 (NodeReinterpret)
    const HWRawBits<64> &id543in_input = id1532out_dataout;

    id543out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id543in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id544out_o;

  { // Node ID: 544 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id544in_i = id543out_output;

    id544out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id544in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id545out_o;

  { // Node ID: 545 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id545in_i = id544out_o;

    id545out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id545in_i));
  }
  { // Node ID: 1090 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1090in_a = id545out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1090in_b = id24out_output;

    id1090out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1090in_a,id1090in_b));
  }
  HWRawBits<64> id1533out_dataout;

  { // Node ID: 1533 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1533in_datain = id1456out_dataa[getCycle()%3];

    id1533out_dataout = (shift_left_fixed(id1533in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id548out_output;

  { // Node ID: 548 (NodeReinterpret)
    const HWRawBits<64> &id548in_input = id1533out_dataout;

    id548out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id548in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id549out_o;

  { // Node ID: 549 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id549in_i = id548out_output;

    id549out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id549in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id550out_o;

  { // Node ID: 550 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id550in_i = id549out_o;

    id550out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id550in_i));
  }
  { // Node ID: 1091 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1091in_a = id550out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1091in_b = id26out_output;

    id1091out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1091in_a,id1091in_b));
  }
  { // Node ID: 1114 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1114in_a = id1090out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1114in_b = id1091out_result[getCycle()%8];

    id1114out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1114in_a,id1114in_b));
  }
  { // Node ID: 1125 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1125in_a = id1113out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1125in_b = id1114out_result[getCycle()%2];

    id1125out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1125in_a,id1125in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id551out_o;

  { // Node ID: 551 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id551in_i = id133out_result[getCycle()%2];

    id551out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id551in_i));
  }
  { // Node ID: 1457 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1457in_addra = id551out_o;

    long id1457x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1457x_2;

    (id1457x_1) = (id1457in_addra.getValueAsLong());
    switch(((long)((id1457x_1)<(4l)))) {
      case 0l:
        id1457x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1457x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom22", id1457x_1) );
        break;
      default:
        id1457x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1457out_dataa[(getCycle()+2)%3] = (id1457x_2);
  }
  HWRawBits<64> id1688out_output;

  { // Node ID: 1688 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1688in_input = id1457out_dataa[getCycle()%3];

    id1688out_output = (cast_fixed2bits(id1688in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id554out_output;

  { // Node ID: 554 (NodeReinterpret)
    const HWRawBits<64> &id554in_input = id1688out_output;

    id554out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id554in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id555out_o;

  { // Node ID: 555 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id555in_i = id554out_output;

    id555out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id555in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id556out_o;

  { // Node ID: 556 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id556in_i = id555out_o;

    id556out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id556in_i));
  }
  { // Node ID: 1092 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1092in_a = id556out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1092in_b = id28out_output;

    id1092out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1092in_a,id1092in_b));
  }
  HWRawBits<64> id1535out_dataout;

  { // Node ID: 1535 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1535in_datain = id1457out_dataa[getCycle()%3];

    id1535out_dataout = (shift_left_fixed(id1535in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id559out_output;

  { // Node ID: 559 (NodeReinterpret)
    const HWRawBits<64> &id559in_input = id1535out_dataout;

    id559out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id559in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id560out_o;

  { // Node ID: 560 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id560in_i = id559out_output;

    id560out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id560in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id561out_o;

  { // Node ID: 561 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id561in_i = id560out_o;

    id561out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id561in_i));
  }
  { // Node ID: 1093 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1093in_a = id561out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1093in_b = id30out_output;

    id1093out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1093in_a,id1093in_b));
  }
  { // Node ID: 1115 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1115in_a = id1092out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1115in_b = id1093out_result[getCycle()%8];

    id1115out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1115in_a,id1115in_b));
  }
  HWRawBits<64> id1536out_dataout;

  { // Node ID: 1536 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1536in_datain = id1457out_dataa[getCycle()%3];

    id1536out_dataout = (shift_left_fixed(id1536in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id564out_output;

  { // Node ID: 564 (NodeReinterpret)
    const HWRawBits<64> &id564in_input = id1536out_dataout;

    id564out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id564in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id565out_o;

  { // Node ID: 565 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id565in_i = id564out_output;

    id565out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id565in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id566out_o;

  { // Node ID: 566 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id566in_i = id565out_o;

    id566out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id566in_i));
  }
  { // Node ID: 1094 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1094in_a = id566out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1094in_b = id32out_output;

    id1094out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1094in_a,id1094in_b));
  }
  HWRawBits<64> id1537out_dataout;

  { // Node ID: 1537 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1537in_datain = id1457out_dataa[getCycle()%3];

    id1537out_dataout = (shift_left_fixed(id1537in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id569out_output;

  { // Node ID: 569 (NodeReinterpret)
    const HWRawBits<64> &id569in_input = id1537out_dataout;

    id569out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id569in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id570out_o;

  { // Node ID: 570 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id570in_i = id569out_output;

    id570out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id570in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id571out_o;

  { // Node ID: 571 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id571in_i = id570out_o;

    id571out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id571in_i));
  }
  { // Node ID: 1095 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1095in_a = id571out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1095in_b = id34out_output;

    id1095out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1095in_a,id1095in_b));
  }
  { // Node ID: 1116 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1116in_a = id1094out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1116in_b = id1095out_result[getCycle()%8];

    id1116out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1116in_a,id1116in_b));
  }
  { // Node ID: 1126 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1126in_a = id1115out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1126in_b = id1116out_result[getCycle()%2];

    id1126out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1126in_a,id1126in_b));
  }
  { // Node ID: 1131 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1131in_a = id1125out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1131in_b = id1126out_result[getCycle()%2];

    id1131out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1131in_a,id1131in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id572out_o;

  { // Node ID: 572 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id572in_i = id133out_result[getCycle()%2];

    id572out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id572in_i));
  }
  { // Node ID: 1458 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1458in_addra = id572out_o;

    long id1458x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1458x_2;

    (id1458x_1) = (id1458in_addra.getValueAsLong());
    switch(((long)((id1458x_1)<(4l)))) {
      case 0l:
        id1458x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1458x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom23", id1458x_1) );
        break;
      default:
        id1458x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1458out_dataa[(getCycle()+2)%3] = (id1458x_2);
  }
  HWRawBits<64> id1689out_output;

  { // Node ID: 1689 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1689in_input = id1458out_dataa[getCycle()%3];

    id1689out_output = (cast_fixed2bits(id1689in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id575out_output;

  { // Node ID: 575 (NodeReinterpret)
    const HWRawBits<64> &id575in_input = id1689out_output;

    id575out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id575in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id576out_o;

  { // Node ID: 576 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id576in_i = id575out_output;

    id576out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id576in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id577out_o;

  { // Node ID: 577 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id577in_i = id576out_o;

    id577out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id577in_i));
  }
  { // Node ID: 1096 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1096in_a = id577out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1096in_b = id36out_output;

    id1096out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1096in_a,id1096in_b));
  }
  HWRawBits<64> id1539out_dataout;

  { // Node ID: 1539 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1539in_datain = id1458out_dataa[getCycle()%3];

    id1539out_dataout = (shift_left_fixed(id1539in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id580out_output;

  { // Node ID: 580 (NodeReinterpret)
    const HWRawBits<64> &id580in_input = id1539out_dataout;

    id580out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id580in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id581out_o;

  { // Node ID: 581 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id581in_i = id580out_output;

    id581out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id581in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id582out_o;

  { // Node ID: 582 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id582in_i = id581out_o;

    id582out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id582in_i));
  }
  { // Node ID: 1097 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1097in_a = id582out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1097in_b = id38out_output;

    id1097out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1097in_a,id1097in_b));
  }
  { // Node ID: 1117 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1117in_a = id1096out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1117in_b = id1097out_result[getCycle()%8];

    id1117out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1117in_a,id1117in_b));
  }
  HWRawBits<64> id1540out_dataout;

  { // Node ID: 1540 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1540in_datain = id1458out_dataa[getCycle()%3];

    id1540out_dataout = (shift_left_fixed(id1540in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id585out_output;

  { // Node ID: 585 (NodeReinterpret)
    const HWRawBits<64> &id585in_input = id1540out_dataout;

    id585out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id585in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id586out_o;

  { // Node ID: 586 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id586in_i = id585out_output;

    id586out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id586in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id587out_o;

  { // Node ID: 587 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id587in_i = id586out_o;

    id587out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id587in_i));
  }
  { // Node ID: 1098 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1098in_a = id587out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1098in_b = id40out_output;

    id1098out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1098in_a,id1098in_b));
  }
  HWRawBits<64> id1541out_dataout;

  { // Node ID: 1541 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1541in_datain = id1458out_dataa[getCycle()%3];

    id1541out_dataout = (shift_left_fixed(id1541in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id590out_output;

  { // Node ID: 590 (NodeReinterpret)
    const HWRawBits<64> &id590in_input = id1541out_dataout;

    id590out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id590in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id591out_o;

  { // Node ID: 591 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id591in_i = id590out_output;

    id591out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id591in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id592out_o;

  { // Node ID: 592 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id592in_i = id591out_o;

    id592out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id592in_i));
  }
  { // Node ID: 1099 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1099in_a = id592out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1099in_b = id42out_output;

    id1099out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1099in_a,id1099in_b));
  }
  { // Node ID: 1118 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1118in_a = id1098out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1118in_b = id1099out_result[getCycle()%8];

    id1118out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1118in_a,id1118in_b));
  }
  { // Node ID: 1127 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1127in_a = id1117out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1127in_b = id1118out_result[getCycle()%2];

    id1127out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1127in_a,id1127in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id593out_o;

  { // Node ID: 593 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id593in_i = id133out_result[getCycle()%2];

    id593out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id593in_i));
  }
  { // Node ID: 1459 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1459in_addra = id593out_o;

    long id1459x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1459x_2;

    (id1459x_1) = (id1459in_addra.getValueAsLong());
    switch(((long)((id1459x_1)<(4l)))) {
      case 0l:
        id1459x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1459x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom24", id1459x_1) );
        break;
      default:
        id1459x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1459out_dataa[(getCycle()+2)%3] = (id1459x_2);
  }
  HWRawBits<64> id1690out_output;

  { // Node ID: 1690 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1690in_input = id1459out_dataa[getCycle()%3];

    id1690out_output = (cast_fixed2bits(id1690in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id596out_output;

  { // Node ID: 596 (NodeReinterpret)
    const HWRawBits<64> &id596in_input = id1690out_output;

    id596out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id596in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id597out_o;

  { // Node ID: 597 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id597in_i = id596out_output;

    id597out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id597in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id598out_o;

  { // Node ID: 598 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id598in_i = id597out_o;

    id598out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id598in_i));
  }
  { // Node ID: 1100 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1100in_a = id598out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1100in_b = id44out_output;

    id1100out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1100in_a,id1100in_b));
  }
  HWRawBits<64> id1543out_dataout;

  { // Node ID: 1543 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1543in_datain = id1459out_dataa[getCycle()%3];

    id1543out_dataout = (shift_left_fixed(id1543in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id601out_output;

  { // Node ID: 601 (NodeReinterpret)
    const HWRawBits<64> &id601in_input = id1543out_dataout;

    id601out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id601in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id602out_o;

  { // Node ID: 602 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id602in_i = id601out_output;

    id602out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id602in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id603out_o;

  { // Node ID: 603 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id603in_i = id602out_o;

    id603out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id603in_i));
  }
  { // Node ID: 1101 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1101in_a = id603out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1101in_b = id46out_output;

    id1101out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1101in_a,id1101in_b));
  }
  { // Node ID: 1119 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1119in_a = id1100out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1119in_b = id1101out_result[getCycle()%8];

    id1119out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1119in_a,id1119in_b));
  }
  HWRawBits<64> id1544out_dataout;

  { // Node ID: 1544 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1544in_datain = id1459out_dataa[getCycle()%3];

    id1544out_dataout = (shift_left_fixed(id1544in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id606out_output;

  { // Node ID: 606 (NodeReinterpret)
    const HWRawBits<64> &id606in_input = id1544out_dataout;

    id606out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id606in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id607out_o;

  { // Node ID: 607 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id607in_i = id606out_output;

    id607out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id607in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id608out_o;

  { // Node ID: 608 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id608in_i = id607out_o;

    id608out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id608in_i));
  }
  { // Node ID: 1102 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1102in_a = id608out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1102in_b = id48out_output;

    id1102out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1102in_a,id1102in_b));
  }
  HWRawBits<64> id1545out_dataout;

  { // Node ID: 1545 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1545in_datain = id1459out_dataa[getCycle()%3];

    id1545out_dataout = (shift_left_fixed(id1545in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id611out_output;

  { // Node ID: 611 (NodeReinterpret)
    const HWRawBits<64> &id611in_input = id1545out_dataout;

    id611out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id611in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id612out_o;

  { // Node ID: 612 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id612in_i = id611out_output;

    id612out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id612in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id613out_o;

  { // Node ID: 613 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id613in_i = id612out_o;

    id613out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id613in_i));
  }
  { // Node ID: 1103 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1103in_a = id613out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1103in_b = id50out_output;

    id1103out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1103in_a,id1103in_b));
  }
  { // Node ID: 1120 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1120in_a = id1102out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1120in_b = id1103out_result[getCycle()%8];

    id1120out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1120in_a,id1120in_b));
  }
  { // Node ID: 1128 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1128in_a = id1119out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1128in_b = id1120out_result[getCycle()%2];

    id1128out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1128in_a,id1128in_b));
  }
  { // Node ID: 1132 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1132in_a = id1127out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1132in_b = id1128out_result[getCycle()%2];

    id1132out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1132in_a,id1132in_b));
  }
  { // Node ID: 1134 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1134in_a = id1131out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1134in_b = id1132out_result[getCycle()%2];

    id1134out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1134in_a,id1134in_b));
  }
  { // Node ID: 1135 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1135in_a = id1734out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1135in_b = id1134out_result[getCycle()%2];

    id1135out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1135in_a,id1135in_b));
  }
  { // Node ID: 1136 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1136in_a = id1112out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1136in_b = id1135out_result[getCycle()%2];

    id1136out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1136in_a,id1136in_b));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1367out_output;

  { // Node ID: 1367 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1367in_input = id1365out_result[getCycle()%2];

    id1367out_output = id1367in_input;
  }
  { // Node ID: 1735 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1735in_input = id1367out_output;

    id1735out_output[(getCycle()+3)%4] = id1735in_input;
  }
  { // Node ID: 1364 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1364in_a = id1136out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1364in_b = id1735out_output[getCycle()%4];

    id1364out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1364in_a,id1364in_b));
  }
  { // Node ID: 1737 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1737in_input = id1136out_result[getCycle()%2];

    id1737out_output[(getCycle()+1)%2] = id1737in_input;
  }
  { // Node ID: 1365 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1365in_sel = id1723out_output[getCycle()%16];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1365in_option0 = id1364out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1365in_option1 = id1737out_output[getCycle()%2];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1365x_1;

    switch((id1365in_sel.getValueAsLong())) {
      case 0l:
        id1365x_1 = id1365in_option0;
        break;
      case 1l:
        id1365x_1 = id1365in_option1;
        break;
      default:
        id1365x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1365out_result[(getCycle()+1)%2] = (id1365x_1);
  }
  HWOffsetFix<16,2,UNSIGNED> id1546out_output;

  { // Node ID: 1546 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1546in_input = id1811out_output[getCycle()%14];

    id1546out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1546in_input))));
  }
  { // Node ID: 1547 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1547in_a = id1811out_output[getCycle()%14];
    const HWOffsetFix<16,2,UNSIGNED> &id1547in_b = id1546out_output;

    id1547out_result[(getCycle()+1)%2] = (add_fixed<19,0,UNSIGNED,TONEAREVEN>(id1547in_a,id1547in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1548out_o;

  { // Node ID: 1548 (NodeCast)
    const HWOffsetFix<19,0,UNSIGNED> &id1548in_i = id1547out_result[getCycle()%2];

    id1548out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1548in_i));
  }
  HWOffsetFix<16,2,UNSIGNED> id1549out_output;

  { // Node ID: 1549 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1549in_input = id1809out_output[getCycle()%18];

    id1549out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1549in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id1550out_output;

  { // Node ID: 1550 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1550in_input = id1809out_output[getCycle()%18];

    id1550out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id1550in_input))));
  }
  { // Node ID: 1551 (NodeAdd)
    const HWOffsetFix<16,2,UNSIGNED> &id1551in_a = id1549out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id1551in_b = id1550out_output;

    id1551out_result[(getCycle()+1)%2] = (add_fixed<19,2,UNSIGNED,TONEAREVEN>(id1551in_a,id1551in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1552out_o;

  { // Node ID: 1552 (NodeCast)
    const HWOffsetFix<19,2,UNSIGNED> &id1552in_i = id1551out_result[getCycle()%2];

    id1552out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1552in_i));
  }
  { // Node ID: 1360 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1360in_a = id1548out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id1360in_b = id1552out_o;

    id1360out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1360in_a,id1360in_b));
  }
  { // Node ID: 1820 (NodeConstantRawBits)
  }
  { // Node ID: 1362 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1362in_a = id1360out_result[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id1362in_b = id1820out_value;

    id1362out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1362in_a,id1362in_b));
  }
  HWOffsetFix<5,0,UNSIGNED> id1363out_o;

  { // Node ID: 1363 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id1363in_i = id1362out_result[getCycle()%2];

    id1363out_o = (cast_fixed2fixed<5,0,UNSIGNED,TONEAREVEN>(id1363in_i));
  }
  HWOffsetFix<16,2,UNSIGNED> id1553out_output;

  { // Node ID: 1553 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1553in_input = id1811out_output[getCycle()%14];

    id1553out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1553in_input))));
  }
  { // Node ID: 1554 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1554in_a = id1811out_output[getCycle()%14];
    const HWOffsetFix<16,2,UNSIGNED> &id1554in_b = id1553out_output;

    id1554out_result[(getCycle()+1)%2] = (add_fixed<19,0,UNSIGNED,TONEAREVEN>(id1554in_a,id1554in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1555out_o;

  { // Node ID: 1555 (NodeCast)
    const HWOffsetFix<19,0,UNSIGNED> &id1555in_i = id1554out_result[getCycle()%2];

    id1555out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1555in_i));
  }
  HWOffsetFix<16,2,UNSIGNED> id1556out_output;

  { // Node ID: 1556 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1556in_input = id1809out_output[getCycle()%18];

    id1556out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1556in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id1557out_output;

  { // Node ID: 1557 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1557in_input = id1809out_output[getCycle()%18];

    id1557out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id1557in_input))));
  }
  { // Node ID: 1558 (NodeAdd)
    const HWOffsetFix<16,2,UNSIGNED> &id1558in_a = id1556out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id1558in_b = id1557out_output;

    id1558out_result[(getCycle()+1)%2] = (add_fixed<19,2,UNSIGNED,TONEAREVEN>(id1558in_a,id1558in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1559out_o;

  { // Node ID: 1559 (NodeCast)
    const HWOffsetFix<19,2,UNSIGNED> &id1559in_i = id1558out_result[getCycle()%2];

    id1559out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1559in_i));
  }
  { // Node ID: 1372 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1372in_a = id1555out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id1372in_b = id1559out_o;

    id1372out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1372in_a,id1372in_b));
  }
  { // Node ID: 1819 (NodeConstantRawBits)
  }
  { // Node ID: 1374 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1374in_a = id1372out_result[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id1374in_b = id1819out_value;

    id1374out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1374in_a,id1374in_b));
  }
  HWOffsetFix<5,0,UNSIGNED> id1375out_o;

  { // Node ID: 1375 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id1375in_i = id1374out_result[getCycle()%2];

    id1375out_o = (cast_fixed2fixed<5,0,UNSIGNED,TONEAREVEN>(id1375in_i));
  }
  { // Node ID: 1433 (NodeMappedRom)
    const HWOffsetFix<5,0,UNSIGNED> &id1433in_addra = id1363out_o;
    const HWOffsetFix<5,0,UNSIGNED> &id1433in_addrb = id1375out_o;

    long id1433x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1433x_2;
    long id1433x_3;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1433x_4;

    (id1433x_1) = (id1433in_addra.getValueAsLong());
    switch(((long)((id1433x_1)<(20l)))) {
      case 0l:
        id1433x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id1433x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("replicated_mem_3_bias", id1433x_1) );
        break;
      default:
        id1433x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1433out_dataa[(getCycle()+2)%3] = (id1433x_2);
    (id1433x_3) = (id1433in_addrb.getValueAsLong());
    switch(((long)((id1433x_3)<(20l)))) {
      case 0l:
        id1433x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id1433x_4 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("replicated_mem_3_bias", id1433x_3) );
        break;
      default:
        id1433x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1433out_datab[(getCycle()+2)%3] = (id1433x_4);
  }
  { // Node ID: 1366 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1366in_a = id1365out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1366in_b = id1433out_dataa[getCycle()%3];

    id1366out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1366in_a,id1366in_b));
  }
  HWRawBits<32> id1413out_output;

  { // Node ID: 1413 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1413in_input = id1366out_result[getCycle()%2];

    id1413out_output = (cast_fixed2bits(id1413in_input));
  }
  HWOffsetFix<2,0,UNSIGNED> id524out_o;

  { // Node ID: 524 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id524in_i = id133out_result[getCycle()%2];

    id524out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id524in_i));
  }
  { // Node ID: 1746 (NodeFIFO)
    const HWOffsetFix<2,0,UNSIGNED> &id1746in_input = id524out_o;

    id1746out_output[(getCycle()+5)%6] = id1746in_input;
  }
  { // Node ID: 1455 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1455in_addra = id1746out_output[getCycle()%6];

    long id1455x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1455x_2;

    (id1455x_1) = (id1455in_addra.getValueAsLong());
    switch(((long)((id1455x_1)<(4l)))) {
      case 0l:
        id1455x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1455x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom20", id1455x_1) );
        break;
      default:
        id1455x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1455out_dataa[(getCycle()+2)%3] = (id1455x_2);
  }
  HWRawBits<64> id1691out_output;

  { // Node ID: 1691 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1691in_input = id1455out_dataa[getCycle()%3];

    id1691out_output = (cast_fixed2bits(id1691in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id527out_output;

  { // Node ID: 527 (NodeReinterpret)
    const HWRawBits<64> &id527in_input = id1691out_output;

    id527out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id527in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id528out_o;

  { // Node ID: 528 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id528in_i = id527out_output;

    id528out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id528in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id529out_o;

  { // Node ID: 529 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id529in_i = id528out_o;

    id529out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id529in_i));
  }
  { // Node ID: 1014 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1014in_a = id529out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1014in_b = id68out_output;

    id1014out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1014in_a,id1014in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id482out_o;

  { // Node ID: 482 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id482in_i = id133out_result[getCycle()%2];

    id482out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id482in_i));
  }
  { // Node ID: 1453 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1453in_addra = id482out_o;

    long id1453x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1453x_2;

    (id1453x_1) = (id1453in_addra.getValueAsLong());
    switch(((long)((id1453x_1)<(4l)))) {
      case 0l:
        id1453x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1453x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom18", id1453x_1) );
        break;
      default:
        id1453x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1453out_dataa[(getCycle()+2)%3] = (id1453x_2);
  }
  HWRawBits<64> id1692out_output;

  { // Node ID: 1692 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1692in_input = id1453out_dataa[getCycle()%3];

    id1692out_output = (cast_fixed2bits(id1692in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id485out_output;

  { // Node ID: 485 (NodeReinterpret)
    const HWRawBits<64> &id485in_input = id1692out_output;

    id485out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id485in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id486out_o;

  { // Node ID: 486 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id486in_i = id485out_output;

    id486out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id486in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id487out_o;

  { // Node ID: 487 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id487in_i = id486out_o;

    id487out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id487in_i));
  }
  { // Node ID: 1006 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1006in_a = id487out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1006in_b = id52out_output;

    id1006out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1006in_a,id1006in_b));
  }
  HWRawBits<64> id1562out_dataout;

  { // Node ID: 1562 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1562in_datain = id1453out_dataa[getCycle()%3];

    id1562out_dataout = (shift_left_fixed(id1562in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id490out_output;

  { // Node ID: 490 (NodeReinterpret)
    const HWRawBits<64> &id490in_input = id1562out_dataout;

    id490out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id490in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id491out_o;

  { // Node ID: 491 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id491in_i = id490out_output;

    id491out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id491in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id492out_o;

  { // Node ID: 492 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id492in_i = id491out_o;

    id492out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id492in_i));
  }
  { // Node ID: 1007 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1007in_a = id492out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1007in_b = id54out_output;

    id1007out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1007in_a,id1007in_b));
  }

  convolutionKernel00Block1Vars out_vars;
  out_vars.id1406out_result = id1406out_result;
  out_vars.id793out_o = id793out_o;
  out_vars.id68out_output = id68out_output;
  out_vars.id751out_o = id751out_o;
  out_vars.id52out_output = id52out_output;
  out_vars.id756out_o = id756out_o;
  out_vars.id54out_output = id54out_output;
  out_vars.id761out_o = id761out_o;
  out_vars.id56out_output = id56out_output;
  out_vars.id766out_o = id766out_o;
  out_vars.id58out_output = id58out_output;
  out_vars.id772out_o = id772out_o;
  out_vars.id60out_output = id60out_output;
  out_vars.id777out_o = id777out_o;
  out_vars.id62out_output = id62out_output;
  out_vars.id782out_o = id782out_o;
  out_vars.id64out_output = id64out_output;
  out_vars.id787out_o = id787out_o;
  out_vars.id66out_output = id66out_output;
  out_vars.id667out_o = id667out_o;
  out_vars.id20out_output = id20out_output;
  out_vars.id672out_o = id672out_o;
  out_vars.id22out_output = id22out_output;
  out_vars.id677out_o = id677out_o;
  out_vars.id24out_output = id24out_output;
  out_vars.id682out_o = id682out_o;
  out_vars.id26out_output = id26out_output;
  out_vars.id688out_o = id688out_o;
  out_vars.id28out_output = id28out_output;
  out_vars.id693out_o = id693out_o;
  out_vars.id30out_output = id30out_output;
  out_vars.id698out_o = id698out_o;
  out_vars.id32out_output = id32out_output;
  out_vars.id703out_o = id703out_o;
  out_vars.id34out_output = id34out_output;
  out_vars.id709out_o = id709out_o;
  out_vars.id36out_output = id36out_output;
  out_vars.id714out_o = id714out_o;
  out_vars.id38out_output = id38out_output;
  out_vars.id719out_o = id719out_o;
  out_vars.id40out_output = id40out_output;
  out_vars.id724out_o = id724out_o;
  out_vars.id42out_output = id42out_output;
  out_vars.id730out_o = id730out_o;
  out_vars.id44out_output = id44out_output;
  out_vars.id735out_o = id735out_o;
  out_vars.id46out_output = id46out_output;
  out_vars.id740out_o = id740out_o;
  out_vars.id48out_output = id48out_output;
  out_vars.id745out_o = id745out_o;
  out_vars.id50out_output = id50out_output;
  out_vars.id1415out_output = id1415out_output;
  out_vars.id661out_o = id661out_o;
  out_vars.id619out_o = id619out_o;
  out_vars.id624out_o = id624out_o;
  out_vars.id629out_o = id629out_o;
  out_vars.id634out_o = id634out_o;
  out_vars.id640out_o = id640out_o;
  out_vars.id645out_o = id645out_o;
  out_vars.id650out_o = id650out_o;
  out_vars.id655out_o = id655out_o;
  out_vars.id535out_o = id535out_o;
  out_vars.id540out_o = id540out_o;
  out_vars.id545out_o = id545out_o;
  out_vars.id550out_o = id550out_o;
  out_vars.id556out_o = id556out_o;
  out_vars.id561out_o = id561out_o;
  out_vars.id566out_o = id566out_o;
  out_vars.id571out_o = id571out_o;
  out_vars.id577out_o = id577out_o;
  out_vars.id582out_o = id582out_o;
  out_vars.id587out_o = id587out_o;
  out_vars.id592out_o = id592out_o;
  out_vars.id598out_o = id598out_o;
  out_vars.id603out_o = id603out_o;
  out_vars.id608out_o = id608out_o;
  out_vars.id613out_o = id613out_o;
  out_vars.id1413out_output = id1413out_output;
  out_vars.id529out_o = id529out_o;
  out_vars.id487out_o = id487out_o;
  out_vars.id492out_o = id492out_o;
  return out_vars;
};

};
