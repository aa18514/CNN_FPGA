#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "convolutionKernel00_exec2.h"
//#include "convolutionKernel00.h"

namespace maxcompilersim {

void convolutionKernel00::execute2(const convolutionKernel00Block2Vars &in_vars) {
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id194out_output;

  { // Node ID: 194 (NodeReinterpret)
    const HWRawBits<64> &id194in_input = in_vars.id1658out_dataout;

    id194out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id194in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id195out_o;

  { // Node ID: 195 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id195in_i = id194out_output;

    id195out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id195in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id196out_o;

  { // Node ID: 196 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id196in_i = id195out_o;

    id196out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id196in_i));
  }
  { // Node ID: 805 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id805in_a = id196out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id805in_b = in_vars.id42out_output;

    id805out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id805in_a,id805in_b));
  }
  { // Node ID: 824 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id824in_a = id804out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id824in_b = id805out_result[getCycle()%8];

    id824out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id824in_a,id824in_b));
  }
  { // Node ID: 833 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id833in_a = id823out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id833in_b = id824out_result[getCycle()%2];

    id833out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id833in_a,id833in_b));
  }
  HWOffsetFix<2,0,UNSIGNED> id197out_o;

  { // Node ID: 197 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id197in_i = id133out_result[getCycle()%2];

    id197out_o = (cast_fixed2fixed<2,0,UNSIGNED,TONEAREVEN>(id197in_i));
  }
  { // Node ID: 1438 (NodeMappedRom)
    const HWOffsetFix<2,0,UNSIGNED> &id1438in_addra = id197out_o;

    long id1438x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id1438x_2;

    (id1438x_1) = (id1438in_addra.getValueAsLong());
    switch(((long)((id1438x_1)<(4l)))) {
      case 0l:
        id1438x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id1438x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom3", id1438x_1) );
        break;
      default:
        id1438x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id1438out_dataa[(getCycle()+2)%3] = (id1438x_2);
  }
  HWRawBits<64> id1711out_output;

  { // Node ID: 1711 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1711in_input = id1438out_dataa[getCycle()%3];

    id1711out_output = (cast_fixed2bits(id1711in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id200out_output;

  { // Node ID: 200 (NodeReinterpret)
    const HWRawBits<64> &id200in_input = id1711out_output;

    id200out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id200in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id201out_o;

  { // Node ID: 201 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id201in_i = id200out_output;

    id201out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id201in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id202out_o;

  { // Node ID: 202 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id202in_i = id201out_o;

    id202out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id202in_i));
  }
  { // Node ID: 806 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id806in_a = id202out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id806in_b = in_vars.id44out_output;

    id806out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id806in_a,id806in_b));
  }
  HWRawBits<64> id1660out_dataout;

  { // Node ID: 1660 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1660in_datain = id1438out_dataa[getCycle()%3];

    id1660out_dataout = (shift_left_fixed(id1660in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id205out_output;

  { // Node ID: 205 (NodeReinterpret)
    const HWRawBits<64> &id205in_input = id1660out_dataout;

    id205out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id205in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id206out_o;

  { // Node ID: 206 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id206in_i = id205out_output;

    id206out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id206in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id207out_o;

  { // Node ID: 207 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id207in_i = id206out_o;

    id207out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id207in_i));
  }
  { // Node ID: 807 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id807in_a = id207out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id807in_b = in_vars.id46out_output;

    id807out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id807in_a,id807in_b));
  }
  { // Node ID: 825 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id825in_a = id806out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id825in_b = id807out_result[getCycle()%8];

    id825out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id825in_a,id825in_b));
  }
  HWRawBits<64> id1661out_dataout;

  { // Node ID: 1661 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1661in_datain = id1438out_dataa[getCycle()%3];

    id1661out_dataout = (shift_left_fixed(id1661in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id210out_output;

  { // Node ID: 210 (NodeReinterpret)
    const HWRawBits<64> &id210in_input = id1661out_dataout;

    id210out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id210in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id211out_o;

  { // Node ID: 211 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id211in_i = id210out_output;

    id211out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id211in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id212out_o;

  { // Node ID: 212 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id212in_i = id211out_o;

    id212out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id212in_i));
  }
  { // Node ID: 808 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id808in_a = id212out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id808in_b = in_vars.id48out_output;

    id808out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id808in_a,id808in_b));
  }
  HWRawBits<64> id1662out_dataout;

  { // Node ID: 1662 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id1662in_datain = id1438out_dataa[getCycle()%3];

    id1662out_dataout = (shift_left_fixed(id1662in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id215out_output;

  { // Node ID: 215 (NodeReinterpret)
    const HWRawBits<64> &id215in_input = id1662out_dataout;

    id215out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id215in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id216out_o;

  { // Node ID: 216 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id216in_i = id215out_output;

    id216out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id216in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id217out_o;

  { // Node ID: 217 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id217in_i = id216out_o;

    id217out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id217in_i));
  }
  { // Node ID: 809 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id809in_a = id217out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id809in_b = in_vars.id50out_output;

    id809out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id809in_a,id809in_b));
  }
  { // Node ID: 826 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id826in_a = id808out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id826in_b = id809out_result[getCycle()%8];

    id826out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id826in_a,id826in_b));
  }
  { // Node ID: 834 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id834in_a = id825out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id834in_b = id826out_result[getCycle()%2];

    id834out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id834in_a,id834in_b));
  }
  { // Node ID: 838 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id838in_a = id833out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id838in_b = id834out_result[getCycle()%2];

    id838out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id838in_a,id838in_b));
  }
  { // Node ID: 840 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id840in_a = id837out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id840in_b = id838out_result[getCycle()%2];

    id840out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id840in_a,id840in_b));
  }
  { // Node ID: 841 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id841in_a = id1773out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id841in_b = id840out_result[getCycle()%2];

    id841out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id841in_a,id841in_b));
  }
  { // Node ID: 842 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id842in_a = id818out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id842in_b = id841out_result[getCycle()%2];

    id842out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id842in_a,id842in_b));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1295out_output;

  { // Node ID: 1295 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1295in_input = id1293out_result[getCycle()%2];

    id1295out_output = id1295in_input;
  }
  { // Node ID: 1774 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1774in_input = id1295out_output;

    id1774out_output[(getCycle()+3)%4] = id1774in_input;
  }
  { // Node ID: 1292 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1292in_a = id842out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1292in_b = id1774out_output[getCycle()%4];

    id1292out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1292in_a,id1292in_b));
  }
  { // Node ID: 1776 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1776in_input = id842out_result[getCycle()%2];

    id1776out_output[(getCycle()+1)%2] = id1776in_input;
  }
  { // Node ID: 1293 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1293in_sel = id1723out_output[getCycle()%16];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1293in_option0 = id1292out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1293in_option1 = id1776out_output[getCycle()%2];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1293x_1;

    switch((id1293in_sel.getValueAsLong())) {
      case 0l:
        id1293x_1 = id1293in_option0;
        break;
      case 1l:
        id1293x_1 = id1293in_option1;
        break;
      default:
        id1293x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1293out_result[(getCycle()+1)%2] = (id1293x_1);
  }
  HWOffsetFix<16,2,UNSIGNED> id1663out_output;

  { // Node ID: 1663 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1663in_input = id1811out_output[getCycle()%14];

    id1663out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1663in_input))));
  }
  { // Node ID: 1664 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1664in_a = id1811out_output[getCycle()%14];
    const HWOffsetFix<16,2,UNSIGNED> &id1664in_b = id1663out_output;

    id1664out_result[(getCycle()+1)%2] = (add_fixed<19,0,UNSIGNED,TONEAREVEN>(id1664in_a,id1664in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1665out_o;

  { // Node ID: 1665 (NodeCast)
    const HWOffsetFix<19,0,UNSIGNED> &id1665in_i = id1664out_result[getCycle()%2];

    id1665out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1665in_i));
  }
  HWOffsetFix<16,2,UNSIGNED> id1666out_output;

  { // Node ID: 1666 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1666in_input = id1809out_output[getCycle()%18];

    id1666out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1666in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id1667out_output;

  { // Node ID: 1667 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1667in_input = id1809out_output[getCycle()%18];

    id1667out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id1667in_input))));
  }
  { // Node ID: 1668 (NodeAdd)
    const HWOffsetFix<16,2,UNSIGNED> &id1668in_a = id1666out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id1668in_b = id1667out_output;

    id1668out_result[(getCycle()+1)%2] = (add_fixed<19,2,UNSIGNED,TONEAREVEN>(id1668in_a,id1668in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1669out_o;

  { // Node ID: 1669 (NodeCast)
    const HWOffsetFix<19,2,UNSIGNED> &id1669in_i = id1668out_result[getCycle()%2];

    id1669out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1669in_i));
  }
  { // Node ID: 1288 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1288in_a = id1665out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id1288in_b = id1669out_o;

    id1288out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1288in_a,id1288in_b));
  }
  HWOffsetFix<5,0,UNSIGNED> id1291out_o;

  { // Node ID: 1291 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id1291in_i = id1288out_result[getCycle()%2];

    id1291out_o = (cast_fixed2fixed<5,0,UNSIGNED,TONEAREVEN>(id1291in_i));
  }
  { // Node ID: 1785 (NodeFIFO)
    const HWOffsetFix<5,0,UNSIGNED> &id1785in_input = id1291out_o;

    id1785out_output[(getCycle()+1)%2] = id1785in_input;
  }
  HWOffsetFix<16,2,UNSIGNED> id1670out_output;

  { // Node ID: 1670 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1670in_input = id1811out_output[getCycle()%14];

    id1670out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1670in_input))));
  }
  { // Node ID: 1671 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1671in_a = id1811out_output[getCycle()%14];
    const HWOffsetFix<16,2,UNSIGNED> &id1671in_b = id1670out_output;

    id1671out_result[(getCycle()+1)%2] = (add_fixed<19,0,UNSIGNED,TONEAREVEN>(id1671in_a,id1671in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1672out_o;

  { // Node ID: 1672 (NodeCast)
    const HWOffsetFix<19,0,UNSIGNED> &id1672in_i = id1671out_result[getCycle()%2];

    id1672out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1672in_i));
  }
  HWOffsetFix<16,2,UNSIGNED> id1673out_output;

  { // Node ID: 1673 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1673in_input = id1809out_output[getCycle()%18];

    id1673out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id1673in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id1674out_output;

  { // Node ID: 1674 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id1674in_input = id1809out_output[getCycle()%18];

    id1674out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id1674in_input))));
  }
  { // Node ID: 1675 (NodeAdd)
    const HWOffsetFix<16,2,UNSIGNED> &id1675in_a = id1673out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id1675in_b = id1674out_output;

    id1675out_result[(getCycle()+1)%2] = (add_fixed<19,2,UNSIGNED,TONEAREVEN>(id1675in_a,id1675in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id1676out_o;

  { // Node ID: 1676 (NodeCast)
    const HWOffsetFix<19,2,UNSIGNED> &id1676in_i = id1675out_result[getCycle()%2];

    id1676out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id1676in_i));
  }
  { // Node ID: 1300 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id1300in_a = id1672out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id1300in_b = id1676out_o;

    id1300out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id1300in_a,id1300in_b));
  }
  HWOffsetFix<5,0,UNSIGNED> id1303out_o;

  { // Node ID: 1303 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id1303in_i = id1300out_result[getCycle()%2];

    id1303out_o = (cast_fixed2fixed<5,0,UNSIGNED,TONEAREVEN>(id1303in_i));
  }
  { // Node ID: 1786 (NodeFIFO)
    const HWOffsetFix<5,0,UNSIGNED> &id1786in_input = id1303out_o;

    id1786out_output[(getCycle()+1)%2] = id1786in_input;
  }
  { // Node ID: 1430 (NodeMappedRom)
    const HWOffsetFix<5,0,UNSIGNED> &id1430in_addra = id1785out_output[getCycle()%2];
    const HWOffsetFix<5,0,UNSIGNED> &id1430in_addrb = id1786out_output[getCycle()%2];

    long id1430x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1430x_2;
    long id1430x_3;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1430x_4;

    (id1430x_1) = (id1430in_addra.getValueAsLong());
    switch(((long)((id1430x_1)<(20l)))) {
      case 0l:
        id1430x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id1430x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("replicated_mem_0_bias", id1430x_1) );
        break;
      default:
        id1430x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1430out_dataa[(getCycle()+2)%3] = (id1430x_2);
    (id1430x_3) = (id1430in_addrb.getValueAsLong());
    switch(((long)((id1430x_3)<(20l)))) {
      case 0l:
        id1430x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id1430x_4 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("replicated_mem_0_bias", id1430x_3) );
        break;
      default:
        id1430x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1430out_datab[(getCycle()+2)%3] = (id1430x_4);
  }
  { // Node ID: 1294 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1294in_a = id1293out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1294in_b = id1430out_dataa[getCycle()%3];

    id1294out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1294in_a,id1294in_b));
  }
  HWRawBits<32> id1408out_output;

  { // Node ID: 1408 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1408in_input = id1294out_result[getCycle()%2];

    id1408out_output = (cast_fixed2bits(id1408in_input));
  }
  HWRawBits<64> id1410out_result;

  { // Node ID: 1410 (NodeCat)
    const HWRawBits<32> &id1410in_in0 = in_vars.id1409out_output;
    const HWRawBits<32> &id1410in_in1 = id1408out_output;

    id1410out_result = (cat(id1410in_in0,id1410in_in1));
  }
  HWRawBits<96> id1412out_result;

  { // Node ID: 1412 (NodeCat)
    const HWRawBits<32> &id1412in_in0 = in_vars.id1411out_output;
    const HWRawBits<64> &id1412in_in1 = id1410out_result;

    id1412out_result = (cat(id1412in_in0,id1412in_in1));
  }
  HWRawBits<128> id1414out_result;

  { // Node ID: 1414 (NodeCat)
    const HWRawBits<32> &id1414in_in0 = in_vars.id1413out_output;
    const HWRawBits<96> &id1414in_in1 = id1412out_result;

    id1414out_result = (cat(id1414in_in0,id1414in_in1));
  }
  HWRawBits<160> id1416out_result;

  { // Node ID: 1416 (NodeCat)
    const HWRawBits<32> &id1416in_in0 = in_vars.id1415out_output;
    const HWRawBits<128> &id1416in_in1 = id1414out_result;

    id1416out_result = (cat(id1416in_in0,id1416in_in1));
  }
  if ( (getFillLevel() >= (25l)) && (getFlushLevel() < (25l)|| !isFlushingActive() ))
  { // Node ID: 1407 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id1407in_output_control = in_vars.id1406out_result;
    const HWRawBits<160> &id1407in_data = id1416out_result;

    bool id1407x_1;

    (id1407x_1) = ((id1407in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(25l))&(isFlushingActive()))));
    if((id1407x_1)) {
      writeOutput(m_y01, id1407in_data);
    }
  }
  { // Node ID: 1417 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id1418out_result;

  { // Node ID: 1418 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id1418in_a = id1417out_io_y11_force_disabled;

    id1418out_result = (not_fixed(id1418in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id1419out_result;

  { // Node ID: 1419 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id1419in_a = id1812out_output[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id1419in_b = id1418out_result;

    HWOffsetFix<1,0,UNSIGNED> id1419x_1;

    (id1419x_1) = (and_fixed(id1419in_a,id1419in_b));
    id1419out_result = (id1419x_1);
  }
  { // Node ID: 69 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id70out_result;

  { // Node ID: 70 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id70in_a = id69out_io_x11_force_disabled;

    id70out_result = (not_fixed(id70in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id71out_result;

  { // Node ID: 71 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id71in_a = id14out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id71in_b = id70out_result;

    HWOffsetFix<1,0,UNSIGNED> id71x_1;

    (id71x_1) = (and_fixed(id71in_a,id71in_b));
    id71out_result = (id71x_1);
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 72 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id72in_enable = id71out_result;

    (id72st_read_next_cycle) = ((id72in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_x11, id72st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<32> id121out_result;

  { // Node ID: 121 (NodeSlice)
    const HWRawBits<800> &id121in_a = id72out_data;

    id121out_result = (slice<768,32>(id121in_a));
  }
  { // Node ID: 1788 (NodeFIFO)
    const HWRawBits<32> &id1788in_input = id121out_result;

    id1788out_output[(getCycle()+5)%6] = id1788in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id122out_output;

  { // Node ID: 122 (NodeReinterpret)
    const HWRawBits<32> &id122in_input = id1788out_output[getCycle()%6];

    id122out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id122in_input));
  }
  { // Node ID: 1259 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1259in_a = in_vars.id793out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1259in_b = id122out_output;

    id1259out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1259in_a,id1259in_b));
  }
  HWRawBits<32> id105out_result;

  { // Node ID: 105 (NodeSlice)
    const HWRawBits<800> &id105in_a = id72out_data;

    id105out_result = (slice<512,32>(id105in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id106out_output;

  { // Node ID: 106 (NodeReinterpret)
    const HWRawBits<32> &id106in_input = id105out_result;

    id106out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id106in_input));
  }
  { // Node ID: 1251 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1251in_a = in_vars.id751out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1251in_b = id106out_output;

    id1251out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1251in_a,id1251in_b));
  }
  HWRawBits<32> id107out_result;

  { // Node ID: 107 (NodeSlice)
    const HWRawBits<800> &id107in_a = id72out_data;

    id107out_result = (slice<544,32>(id107in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id108out_output;

  { // Node ID: 108 (NodeReinterpret)
    const HWRawBits<32> &id108in_input = id107out_result;

    id108out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id108in_input));
  }
  { // Node ID: 1252 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1252in_a = in_vars.id756out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1252in_b = id108out_output;

    id1252out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1252in_a,id1252in_b));
  }
  { // Node ID: 1268 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1268in_a = id1251out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1268in_b = id1252out_result[getCycle()%8];

    id1268out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1268in_a,id1268in_b));
  }
  HWRawBits<32> id109out_result;

  { // Node ID: 109 (NodeSlice)
    const HWRawBits<800> &id109in_a = id72out_data;

    id109out_result = (slice<576,32>(id109in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id110out_output;

  { // Node ID: 110 (NodeReinterpret)
    const HWRawBits<32> &id110in_input = id109out_result;

    id110out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id110in_input));
  }
  { // Node ID: 1253 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1253in_a = in_vars.id761out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1253in_b = id110out_output;

    id1253out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1253in_a,id1253in_b));
  }
  HWRawBits<32> id111out_result;

  { // Node ID: 111 (NodeSlice)
    const HWRawBits<800> &id111in_a = id72out_data;

    id111out_result = (slice<608,32>(id111in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id112out_output;

  { // Node ID: 112 (NodeReinterpret)
    const HWRawBits<32> &id112in_input = id111out_result;

    id112out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id112in_input));
  }
  { // Node ID: 1254 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1254in_a = in_vars.id766out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1254in_b = id112out_output;

    id1254out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1254in_a,id1254in_b));
  }
  { // Node ID: 1269 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1269in_a = id1253out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1269in_b = id1254out_result[getCycle()%8];

    id1269out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1269in_a,id1269in_b));
  }
  { // Node ID: 1276 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1276in_a = id1268out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1276in_b = id1269out_result[getCycle()%2];

    id1276out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1276in_a,id1276in_b));
  }
  HWRawBits<32> id113out_result;

  { // Node ID: 113 (NodeSlice)
    const HWRawBits<800> &id113in_a = id72out_data;

    id113out_result = (slice<640,32>(id113in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id114out_output;

  { // Node ID: 114 (NodeReinterpret)
    const HWRawBits<32> &id114in_input = id113out_result;

    id114out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id114in_input));
  }
  { // Node ID: 1255 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1255in_a = in_vars.id772out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1255in_b = id114out_output;

    id1255out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1255in_a,id1255in_b));
  }
  HWRawBits<32> id115out_result;

  { // Node ID: 115 (NodeSlice)
    const HWRawBits<800> &id115in_a = id72out_data;

    id115out_result = (slice<672,32>(id115in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id116out_output;

  { // Node ID: 116 (NodeReinterpret)
    const HWRawBits<32> &id116in_input = id115out_result;

    id116out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id116in_input));
  }
  { // Node ID: 1256 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1256in_a = in_vars.id777out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1256in_b = id116out_output;

    id1256out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1256in_a,id1256in_b));
  }
  { // Node ID: 1270 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1270in_a = id1255out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1270in_b = id1256out_result[getCycle()%8];

    id1270out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1270in_a,id1270in_b));
  }
  HWRawBits<32> id117out_result;

  { // Node ID: 117 (NodeSlice)
    const HWRawBits<800> &id117in_a = id72out_data;

    id117out_result = (slice<704,32>(id117in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id118out_output;

  { // Node ID: 118 (NodeReinterpret)
    const HWRawBits<32> &id118in_input = id117out_result;

    id118out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id118in_input));
  }
  { // Node ID: 1257 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1257in_a = in_vars.id782out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1257in_b = id118out_output;

    id1257out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1257in_a,id1257in_b));
  }
  HWRawBits<32> id119out_result;

  { // Node ID: 119 (NodeSlice)
    const HWRawBits<800> &id119in_a = id72out_data;

    id119out_result = (slice<736,32>(id119in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id120out_output;

  { // Node ID: 120 (NodeReinterpret)
    const HWRawBits<32> &id120in_input = id119out_result;

    id120out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id120in_input));
  }
  { // Node ID: 1258 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1258in_a = in_vars.id787out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1258in_b = id120out_output;

    id1258out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1258in_a,id1258in_b));
  }
  { // Node ID: 1271 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1271in_a = id1257out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1271in_b = id1258out_result[getCycle()%8];

    id1271out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1271in_a,id1271in_b));
  }
  { // Node ID: 1277 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1277in_a = id1270out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1277in_b = id1271out_result[getCycle()%2];

    id1277out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1277in_a,id1277in_b));
  }
  { // Node ID: 1280 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1280in_a = id1276out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1280in_b = id1277out_result[getCycle()%2];

    id1280out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1280in_a,id1280in_b));
  }
  { // Node ID: 1789 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1789in_input = id1280out_result[getCycle()%2];

    id1789out_output[(getCycle()+1)%2] = id1789in_input;
  }
  HWRawBits<32> id73out_result;

  { // Node ID: 73 (NodeSlice)
    const HWRawBits<800> &id73in_a = id72out_data;

    id73out_result = (slice<0,32>(id73in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id74out_output;

  { // Node ID: 74 (NodeReinterpret)
    const HWRawBits<32> &id74in_input = id73out_result;

    id74out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id74in_input));
  }
  { // Node ID: 1235 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1235in_a = in_vars.id667out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1235in_b = id74out_output;

    id1235out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1235in_a,id1235in_b));
  }
  HWRawBits<32> id75out_result;

  { // Node ID: 75 (NodeSlice)
    const HWRawBits<800> &id75in_a = id72out_data;

    id75out_result = (slice<32,32>(id75in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id76out_output;

  { // Node ID: 76 (NodeReinterpret)
    const HWRawBits<32> &id76in_input = id75out_result;

    id76out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id76in_input));
  }
  { // Node ID: 1236 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1236in_a = in_vars.id672out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1236in_b = id76out_output;

    id1236out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1236in_a,id1236in_b));
  }
  { // Node ID: 1260 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1260in_a = id1235out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1260in_b = id1236out_result[getCycle()%8];

    id1260out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1260in_a,id1260in_b));
  }
  HWRawBits<32> id77out_result;

  { // Node ID: 77 (NodeSlice)
    const HWRawBits<800> &id77in_a = id72out_data;

    id77out_result = (slice<64,32>(id77in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id78out_output;

  { // Node ID: 78 (NodeReinterpret)
    const HWRawBits<32> &id78in_input = id77out_result;

    id78out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id78in_input));
  }
  { // Node ID: 1237 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1237in_a = in_vars.id677out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1237in_b = id78out_output;

    id1237out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1237in_a,id1237in_b));
  }
  HWRawBits<32> id79out_result;

  { // Node ID: 79 (NodeSlice)
    const HWRawBits<800> &id79in_a = id72out_data;

    id79out_result = (slice<96,32>(id79in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id80out_output;

  { // Node ID: 80 (NodeReinterpret)
    const HWRawBits<32> &id80in_input = id79out_result;

    id80out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id80in_input));
  }
  { // Node ID: 1238 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1238in_a = in_vars.id682out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1238in_b = id80out_output;

    id1238out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1238in_a,id1238in_b));
  }
  { // Node ID: 1261 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1261in_a = id1237out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1261in_b = id1238out_result[getCycle()%8];

    id1261out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1261in_a,id1261in_b));
  }
  { // Node ID: 1272 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1272in_a = id1260out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1272in_b = id1261out_result[getCycle()%2];

    id1272out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1272in_a,id1272in_b));
  }
  HWRawBits<32> id81out_result;

  { // Node ID: 81 (NodeSlice)
    const HWRawBits<800> &id81in_a = id72out_data;

    id81out_result = (slice<128,32>(id81in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id82out_output;

  { // Node ID: 82 (NodeReinterpret)
    const HWRawBits<32> &id82in_input = id81out_result;

    id82out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id82in_input));
  }
  { // Node ID: 1239 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1239in_a = in_vars.id688out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1239in_b = id82out_output;

    id1239out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1239in_a,id1239in_b));
  }
  HWRawBits<32> id83out_result;

  { // Node ID: 83 (NodeSlice)
    const HWRawBits<800> &id83in_a = id72out_data;

    id83out_result = (slice<160,32>(id83in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id84out_output;

  { // Node ID: 84 (NodeReinterpret)
    const HWRawBits<32> &id84in_input = id83out_result;

    id84out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id84in_input));
  }
  { // Node ID: 1240 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1240in_a = in_vars.id693out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1240in_b = id84out_output;

    id1240out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1240in_a,id1240in_b));
  }
  { // Node ID: 1262 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1262in_a = id1239out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1262in_b = id1240out_result[getCycle()%8];

    id1262out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1262in_a,id1262in_b));
  }
  HWRawBits<32> id85out_result;

  { // Node ID: 85 (NodeSlice)
    const HWRawBits<800> &id85in_a = id72out_data;

    id85out_result = (slice<192,32>(id85in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id86out_output;

  { // Node ID: 86 (NodeReinterpret)
    const HWRawBits<32> &id86in_input = id85out_result;

    id86out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id86in_input));
  }
  { // Node ID: 1241 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1241in_a = in_vars.id698out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1241in_b = id86out_output;

    id1241out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1241in_a,id1241in_b));
  }
  HWRawBits<32> id87out_result;

  { // Node ID: 87 (NodeSlice)
    const HWRawBits<800> &id87in_a = id72out_data;

    id87out_result = (slice<224,32>(id87in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id88out_output;

  { // Node ID: 88 (NodeReinterpret)
    const HWRawBits<32> &id88in_input = id87out_result;

    id88out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id88in_input));
  }
  { // Node ID: 1242 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1242in_a = in_vars.id703out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1242in_b = id88out_output;

    id1242out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1242in_a,id1242in_b));
  }
  { // Node ID: 1263 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1263in_a = id1241out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1263in_b = id1242out_result[getCycle()%8];

    id1263out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1263in_a,id1263in_b));
  }
  { // Node ID: 1273 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1273in_a = id1262out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1273in_b = id1263out_result[getCycle()%2];

    id1273out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1273in_a,id1273in_b));
  }
  { // Node ID: 1278 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1278in_a = id1272out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1278in_b = id1273out_result[getCycle()%2];

    id1278out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1278in_a,id1278in_b));
  }
  HWRawBits<32> id89out_result;

  { // Node ID: 89 (NodeSlice)
    const HWRawBits<800> &id89in_a = id72out_data;

    id89out_result = (slice<256,32>(id89in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id90out_output;

  { // Node ID: 90 (NodeReinterpret)
    const HWRawBits<32> &id90in_input = id89out_result;

    id90out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id90in_input));
  }
  { // Node ID: 1243 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1243in_a = in_vars.id709out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1243in_b = id90out_output;

    id1243out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1243in_a,id1243in_b));
  }
  HWRawBits<32> id91out_result;

  { // Node ID: 91 (NodeSlice)
    const HWRawBits<800> &id91in_a = id72out_data;

    id91out_result = (slice<288,32>(id91in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id92out_output;

  { // Node ID: 92 (NodeReinterpret)
    const HWRawBits<32> &id92in_input = id91out_result;

    id92out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id92in_input));
  }
  { // Node ID: 1244 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1244in_a = in_vars.id714out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1244in_b = id92out_output;

    id1244out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1244in_a,id1244in_b));
  }
  { // Node ID: 1264 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1264in_a = id1243out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1264in_b = id1244out_result[getCycle()%8];

    id1264out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1264in_a,id1264in_b));
  }
  HWRawBits<32> id93out_result;

  { // Node ID: 93 (NodeSlice)
    const HWRawBits<800> &id93in_a = id72out_data;

    id93out_result = (slice<320,32>(id93in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id94out_output;

  { // Node ID: 94 (NodeReinterpret)
    const HWRawBits<32> &id94in_input = id93out_result;

    id94out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id94in_input));
  }
  { // Node ID: 1245 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1245in_a = in_vars.id719out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1245in_b = id94out_output;

    id1245out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1245in_a,id1245in_b));
  }
  HWRawBits<32> id95out_result;

  { // Node ID: 95 (NodeSlice)
    const HWRawBits<800> &id95in_a = id72out_data;

    id95out_result = (slice<352,32>(id95in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id96out_output;

  { // Node ID: 96 (NodeReinterpret)
    const HWRawBits<32> &id96in_input = id95out_result;

    id96out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id96in_input));
  }
  { // Node ID: 1246 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1246in_a = in_vars.id724out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1246in_b = id96out_output;

    id1246out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1246in_a,id1246in_b));
  }
  { // Node ID: 1265 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1265in_a = id1245out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1265in_b = id1246out_result[getCycle()%8];

    id1265out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1265in_a,id1265in_b));
  }
  { // Node ID: 1274 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1274in_a = id1264out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1274in_b = id1265out_result[getCycle()%2];

    id1274out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1274in_a,id1274in_b));
  }
  HWRawBits<32> id97out_result;

  { // Node ID: 97 (NodeSlice)
    const HWRawBits<800> &id97in_a = id72out_data;

    id97out_result = (slice<384,32>(id97in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id98out_output;

  { // Node ID: 98 (NodeReinterpret)
    const HWRawBits<32> &id98in_input = id97out_result;

    id98out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id98in_input));
  }
  { // Node ID: 1247 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1247in_a = in_vars.id730out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1247in_b = id98out_output;

    id1247out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1247in_a,id1247in_b));
  }
  HWRawBits<32> id99out_result;

  { // Node ID: 99 (NodeSlice)
    const HWRawBits<800> &id99in_a = id72out_data;

    id99out_result = (slice<416,32>(id99in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id100out_output;

  { // Node ID: 100 (NodeReinterpret)
    const HWRawBits<32> &id100in_input = id99out_result;

    id100out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id100in_input));
  }
  { // Node ID: 1248 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1248in_a = in_vars.id735out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1248in_b = id100out_output;

    id1248out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1248in_a,id1248in_b));
  }
  { // Node ID: 1266 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1266in_a = id1247out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1266in_b = id1248out_result[getCycle()%8];

    id1266out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1266in_a,id1266in_b));
  }
  HWRawBits<32> id101out_result;

  { // Node ID: 101 (NodeSlice)
    const HWRawBits<800> &id101in_a = id72out_data;

    id101out_result = (slice<448,32>(id101in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id102out_output;

  { // Node ID: 102 (NodeReinterpret)
    const HWRawBits<32> &id102in_input = id101out_result;

    id102out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id102in_input));
  }
  { // Node ID: 1249 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1249in_a = in_vars.id740out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1249in_b = id102out_output;

    id1249out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1249in_a,id1249in_b));
  }
  HWRawBits<32> id103out_result;

  { // Node ID: 103 (NodeSlice)
    const HWRawBits<800> &id103in_a = id72out_data;

    id103out_result = (slice<480,32>(id103in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id104out_output;

  { // Node ID: 104 (NodeReinterpret)
    const HWRawBits<32> &id104in_input = id103out_result;

    id104out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id104in_input));
  }
  { // Node ID: 1250 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1250in_a = in_vars.id745out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1250in_b = id104out_output;

    id1250out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1250in_a,id1250in_b));
  }
  { // Node ID: 1267 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1267in_a = id1249out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1267in_b = id1250out_result[getCycle()%8];

    id1267out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1267in_a,id1267in_b));
  }
  { // Node ID: 1275 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1275in_a = id1266out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1275in_b = id1267out_result[getCycle()%2];

    id1275out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1275in_a,id1275in_b));
  }
  { // Node ID: 1279 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1279in_a = id1274out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1279in_b = id1275out_result[getCycle()%2];

    id1279out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1279in_a,id1279in_b));
  }
  { // Node ID: 1281 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1281in_a = id1278out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1281in_b = id1279out_result[getCycle()%2];

    id1281out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1281in_a,id1281in_b));
  }
  { // Node ID: 1282 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1282in_a = id1789out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1282in_b = id1281out_result[getCycle()%2];

    id1282out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1282in_a,id1282in_b));
  }
  { // Node ID: 1283 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1283in_a = id1259out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1283in_b = id1282out_result[getCycle()%2];

    id1283out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1283in_a,id1283in_b));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1403out_output;

  { // Node ID: 1403 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1403in_input = id1401out_result[getCycle()%2];

    id1403out_output = id1403in_input;
  }
  { // Node ID: 1790 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1790in_input = id1403out_output;

    id1790out_output[(getCycle()+3)%4] = id1790in_input;
  }
  { // Node ID: 1400 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1400in_a = id1283out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1400in_b = id1790out_output[getCycle()%4];

    id1400out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1400in_a,id1400in_b));
  }
  { // Node ID: 1792 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1792in_input = id1283out_result[getCycle()%2];

    id1792out_output[(getCycle()+1)%2] = id1792in_input;
  }
  { // Node ID: 1401 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1401in_sel = id1723out_output[getCycle()%16];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1401in_option0 = id1400out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1401in_option1 = id1792out_output[getCycle()%2];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1401x_1;

    switch((id1401in_sel.getValueAsLong())) {
      case 0l:
        id1401x_1 = id1401in_option0;
        break;
      case 1l:
        id1401x_1 = id1401in_option1;
        break;
      default:
        id1401x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1401out_result[(getCycle()+1)%2] = (id1401x_1);
  }
  { // Node ID: 1402 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1402in_a = id1401out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1402in_b = id1434out_datab[getCycle()%3];

    id1402out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1402in_a,id1402in_b));
  }
  HWRawBits<32> id1428out_output;

  { // Node ID: 1428 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1428in_input = id1402out_result[getCycle()%2];

    id1428out_output = (cast_fixed2bits(id1428in_input));
  }
  { // Node ID: 1161 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1161in_a = in_vars.id661out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1161in_b = id122out_output;

    id1161out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1161in_a,id1161in_b));
  }
  { // Node ID: 1153 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1153in_a = in_vars.id619out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1153in_b = id106out_output;

    id1153out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1153in_a,id1153in_b));
  }
  { // Node ID: 1154 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1154in_a = in_vars.id624out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1154in_b = id108out_output;

    id1154out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1154in_a,id1154in_b));
  }
  { // Node ID: 1170 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1170in_a = id1153out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1170in_b = id1154out_result[getCycle()%8];

    id1170out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1170in_a,id1170in_b));
  }
  { // Node ID: 1155 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1155in_a = in_vars.id629out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1155in_b = id110out_output;

    id1155out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1155in_a,id1155in_b));
  }
  { // Node ID: 1156 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1156in_a = in_vars.id634out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1156in_b = id112out_output;

    id1156out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1156in_a,id1156in_b));
  }
  { // Node ID: 1171 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1171in_a = id1155out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1171in_b = id1156out_result[getCycle()%8];

    id1171out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1171in_a,id1171in_b));
  }
  { // Node ID: 1178 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1178in_a = id1170out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1178in_b = id1171out_result[getCycle()%2];

    id1178out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1178in_a,id1178in_b));
  }
  { // Node ID: 1157 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1157in_a = in_vars.id640out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1157in_b = id114out_output;

    id1157out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1157in_a,id1157in_b));
  }
  { // Node ID: 1158 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1158in_a = in_vars.id645out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1158in_b = id116out_output;

    id1158out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1158in_a,id1158in_b));
  }
  { // Node ID: 1172 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1172in_a = id1157out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1172in_b = id1158out_result[getCycle()%8];

    id1172out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1172in_a,id1172in_b));
  }
  { // Node ID: 1159 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1159in_a = in_vars.id650out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1159in_b = id118out_output;

    id1159out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1159in_a,id1159in_b));
  }
  { // Node ID: 1160 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1160in_a = in_vars.id655out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1160in_b = id120out_output;

    id1160out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1160in_a,id1160in_b));
  }
  { // Node ID: 1173 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1173in_a = id1159out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1173in_b = id1160out_result[getCycle()%8];

    id1173out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1173in_a,id1173in_b));
  }
  { // Node ID: 1179 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1179in_a = id1172out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1179in_b = id1173out_result[getCycle()%2];

    id1179out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1179in_a,id1179in_b));
  }
  { // Node ID: 1182 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1182in_a = id1178out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1182in_b = id1179out_result[getCycle()%2];

    id1182out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1182in_a,id1182in_b));
  }
  { // Node ID: 1793 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1793in_input = id1182out_result[getCycle()%2];

    id1793out_output[(getCycle()+1)%2] = id1793in_input;
  }
  { // Node ID: 1137 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1137in_a = in_vars.id535out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1137in_b = id74out_output;

    id1137out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1137in_a,id1137in_b));
  }
  { // Node ID: 1138 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1138in_a = in_vars.id540out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1138in_b = id76out_output;

    id1138out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1138in_a,id1138in_b));
  }
  { // Node ID: 1162 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1162in_a = id1137out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1162in_b = id1138out_result[getCycle()%8];

    id1162out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1162in_a,id1162in_b));
  }
  { // Node ID: 1139 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1139in_a = in_vars.id545out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1139in_b = id78out_output;

    id1139out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1139in_a,id1139in_b));
  }
  { // Node ID: 1140 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1140in_a = in_vars.id550out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1140in_b = id80out_output;

    id1140out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1140in_a,id1140in_b));
  }
  { // Node ID: 1163 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1163in_a = id1139out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1163in_b = id1140out_result[getCycle()%8];

    id1163out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1163in_a,id1163in_b));
  }
  { // Node ID: 1174 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1174in_a = id1162out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1174in_b = id1163out_result[getCycle()%2];

    id1174out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1174in_a,id1174in_b));
  }
  { // Node ID: 1141 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1141in_a = in_vars.id556out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1141in_b = id82out_output;

    id1141out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1141in_a,id1141in_b));
  }
  { // Node ID: 1142 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1142in_a = in_vars.id561out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1142in_b = id84out_output;

    id1142out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1142in_a,id1142in_b));
  }
  { // Node ID: 1164 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1164in_a = id1141out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1164in_b = id1142out_result[getCycle()%8];

    id1164out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1164in_a,id1164in_b));
  }
  { // Node ID: 1143 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1143in_a = in_vars.id566out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1143in_b = id86out_output;

    id1143out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1143in_a,id1143in_b));
  }
  { // Node ID: 1144 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1144in_a = in_vars.id571out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1144in_b = id88out_output;

    id1144out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1144in_a,id1144in_b));
  }
  { // Node ID: 1165 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1165in_a = id1143out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1165in_b = id1144out_result[getCycle()%8];

    id1165out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1165in_a,id1165in_b));
  }
  { // Node ID: 1175 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1175in_a = id1164out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1175in_b = id1165out_result[getCycle()%2];

    id1175out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1175in_a,id1175in_b));
  }
  { // Node ID: 1180 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1180in_a = id1174out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1180in_b = id1175out_result[getCycle()%2];

    id1180out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1180in_a,id1180in_b));
  }
  { // Node ID: 1145 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1145in_a = in_vars.id577out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1145in_b = id90out_output;

    id1145out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1145in_a,id1145in_b));
  }
  { // Node ID: 1146 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1146in_a = in_vars.id582out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1146in_b = id92out_output;

    id1146out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1146in_a,id1146in_b));
  }
  { // Node ID: 1166 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1166in_a = id1145out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1166in_b = id1146out_result[getCycle()%8];

    id1166out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1166in_a,id1166in_b));
  }
  { // Node ID: 1147 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1147in_a = in_vars.id587out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1147in_b = id94out_output;

    id1147out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1147in_a,id1147in_b));
  }
  { // Node ID: 1148 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1148in_a = in_vars.id592out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1148in_b = id96out_output;

    id1148out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1148in_a,id1148in_b));
  }
  { // Node ID: 1167 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1167in_a = id1147out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1167in_b = id1148out_result[getCycle()%8];

    id1167out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1167in_a,id1167in_b));
  }
  { // Node ID: 1176 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1176in_a = id1166out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1176in_b = id1167out_result[getCycle()%2];

    id1176out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1176in_a,id1176in_b));
  }
  { // Node ID: 1149 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1149in_a = in_vars.id598out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1149in_b = id98out_output;

    id1149out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1149in_a,id1149in_b));
  }
  { // Node ID: 1150 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1150in_a = in_vars.id603out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1150in_b = id100out_output;

    id1150out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1150in_a,id1150in_b));
  }
  { // Node ID: 1168 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1168in_a = id1149out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1168in_b = id1150out_result[getCycle()%8];

    id1168out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1168in_a,id1168in_b));
  }
  { // Node ID: 1151 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1151in_a = in_vars.id608out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1151in_b = id102out_output;

    id1151out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1151in_a,id1151in_b));
  }
  { // Node ID: 1152 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1152in_a = in_vars.id613out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1152in_b = id104out_output;

    id1152out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1152in_a,id1152in_b));
  }
  { // Node ID: 1169 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1169in_a = id1151out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1169in_b = id1152out_result[getCycle()%8];

    id1169out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1169in_a,id1169in_b));
  }
  { // Node ID: 1177 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1177in_a = id1168out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1177in_b = id1169out_result[getCycle()%2];

    id1177out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1177in_a,id1177in_b));
  }
  { // Node ID: 1181 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1181in_a = id1176out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1181in_b = id1177out_result[getCycle()%2];

    id1181out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1181in_a,id1181in_b));
  }
  { // Node ID: 1183 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1183in_a = id1180out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1183in_b = id1181out_result[getCycle()%2];

    id1183out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1183in_a,id1183in_b));
  }
  { // Node ID: 1184 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1184in_a = id1793out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1184in_b = id1183out_result[getCycle()%2];

    id1184out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1184in_a,id1184in_b));
  }
  { // Node ID: 1185 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1185in_a = id1161out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1185in_b = id1184out_result[getCycle()%2];

    id1185out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1185in_a,id1185in_b));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1379out_output;

  { // Node ID: 1379 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1379in_input = id1377out_result[getCycle()%2];

    id1379out_output = id1379in_input;
  }
  { // Node ID: 1794 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1794in_input = id1379out_output;

    id1794out_output[(getCycle()+3)%4] = id1794in_input;
  }
  { // Node ID: 1376 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1376in_a = id1185out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1376in_b = id1794out_output[getCycle()%4];

    id1376out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1376in_a,id1376in_b));
  }
  { // Node ID: 1796 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1796in_input = id1185out_result[getCycle()%2];

    id1796out_output[(getCycle()+1)%2] = id1796in_input;
  }
  { // Node ID: 1377 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1377in_sel = id1723out_output[getCycle()%16];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1377in_option0 = id1376out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1377in_option1 = id1796out_output[getCycle()%2];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1377x_1;

    switch((id1377in_sel.getValueAsLong())) {
      case 0l:
        id1377x_1 = id1377in_option0;
        break;
      case 1l:
        id1377x_1 = id1377in_option1;
        break;
      default:
        id1377x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1377out_result[(getCycle()+1)%2] = (id1377x_1);
  }
  { // Node ID: 1378 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1378in_a = id1377out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1378in_b = id1433out_datab[getCycle()%3];

    id1378out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1378in_a,id1378in_b));
  }
  HWRawBits<32> id1426out_output;

  { // Node ID: 1426 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1426in_input = id1378out_result[getCycle()%2];

    id1426out_output = (cast_fixed2bits(id1426in_input));
  }
  { // Node ID: 1063 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1063in_a = in_vars.id529out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1063in_b = id122out_output;

    id1063out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1063in_a,id1063in_b));
  }
  { // Node ID: 1055 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1055in_a = in_vars.id487out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1055in_b = id106out_output;

    id1055out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1055in_a,id1055in_b));
  }
  { // Node ID: 1056 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1056in_a = in_vars.id492out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1056in_b = id108out_output;

    id1056out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1056in_a,id1056in_b));
  }
  { // Node ID: 1072 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1072in_a = id1055out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1072in_b = id1056out_result[getCycle()%8];

    id1072out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1072in_a,id1072in_b));
  }
  { // Node ID: 1057 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1057in_a = in_vars.id497out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1057in_b = id110out_output;

    id1057out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1057in_a,id1057in_b));
  }
  { // Node ID: 1058 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1058in_a = in_vars.id502out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1058in_b = id112out_output;

    id1058out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1058in_a,id1058in_b));
  }
  { // Node ID: 1073 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1073in_a = id1057out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1073in_b = id1058out_result[getCycle()%8];

    id1073out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1073in_a,id1073in_b));
  }
  { // Node ID: 1080 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1080in_a = id1072out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1080in_b = id1073out_result[getCycle()%2];

    id1080out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1080in_a,id1080in_b));
  }
  { // Node ID: 1059 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1059in_a = in_vars.id508out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1059in_b = id114out_output;

    id1059out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1059in_a,id1059in_b));
  }
  { // Node ID: 1060 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1060in_a = in_vars.id513out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1060in_b = id116out_output;

    id1060out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1060in_a,id1060in_b));
  }
  { // Node ID: 1074 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1074in_a = id1059out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1074in_b = id1060out_result[getCycle()%8];

    id1074out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1074in_a,id1074in_b));
  }
  { // Node ID: 1061 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1061in_a = in_vars.id518out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1061in_b = id118out_output;

    id1061out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1061in_a,id1061in_b));
  }
  { // Node ID: 1062 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1062in_a = in_vars.id523out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1062in_b = id120out_output;

    id1062out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1062in_a,id1062in_b));
  }
  { // Node ID: 1075 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1075in_a = id1061out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1075in_b = id1062out_result[getCycle()%8];

    id1075out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1075in_a,id1075in_b));
  }
  { // Node ID: 1081 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1081in_a = id1074out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1081in_b = id1075out_result[getCycle()%2];

    id1081out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1081in_a,id1081in_b));
  }
  { // Node ID: 1084 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1084in_a = id1080out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1084in_b = id1081out_result[getCycle()%2];

    id1084out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1084in_a,id1084in_b));
  }
  { // Node ID: 1797 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1797in_input = id1084out_result[getCycle()%2];

    id1797out_output[(getCycle()+1)%2] = id1797in_input;
  }
  { // Node ID: 1039 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1039in_a = in_vars.id403out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1039in_b = id74out_output;

    id1039out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1039in_a,id1039in_b));
  }
  { // Node ID: 1040 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1040in_a = in_vars.id408out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1040in_b = id76out_output;

    id1040out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1040in_a,id1040in_b));
  }
  { // Node ID: 1064 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1064in_a = id1039out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1064in_b = id1040out_result[getCycle()%8];

    id1064out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1064in_a,id1064in_b));
  }
  { // Node ID: 1041 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1041in_a = in_vars.id413out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1041in_b = id78out_output;

    id1041out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1041in_a,id1041in_b));
  }
  { // Node ID: 1042 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1042in_a = in_vars.id418out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1042in_b = id80out_output;

    id1042out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1042in_a,id1042in_b));
  }
  { // Node ID: 1065 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1065in_a = id1041out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1065in_b = id1042out_result[getCycle()%8];

    id1065out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1065in_a,id1065in_b));
  }
  { // Node ID: 1076 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1076in_a = id1064out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1076in_b = id1065out_result[getCycle()%2];

    id1076out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1076in_a,id1076in_b));
  }
  { // Node ID: 1043 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1043in_a = in_vars.id424out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1043in_b = id82out_output;

    id1043out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1043in_a,id1043in_b));
  }
  { // Node ID: 1044 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1044in_a = in_vars.id429out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1044in_b = id84out_output;

    id1044out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1044in_a,id1044in_b));
  }
  { // Node ID: 1066 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1066in_a = id1043out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1066in_b = id1044out_result[getCycle()%8];

    id1066out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1066in_a,id1066in_b));
  }
  { // Node ID: 1045 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1045in_a = in_vars.id434out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1045in_b = id86out_output;

    id1045out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1045in_a,id1045in_b));
  }
  { // Node ID: 1046 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1046in_a = in_vars.id439out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1046in_b = id88out_output;

    id1046out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1046in_a,id1046in_b));
  }
  { // Node ID: 1067 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1067in_a = id1045out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1067in_b = id1046out_result[getCycle()%8];

    id1067out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1067in_a,id1067in_b));
  }
  { // Node ID: 1077 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1077in_a = id1066out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1077in_b = id1067out_result[getCycle()%2];

    id1077out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1077in_a,id1077in_b));
  }
  { // Node ID: 1082 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1082in_a = id1076out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1082in_b = id1077out_result[getCycle()%2];

    id1082out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1082in_a,id1082in_b));
  }
  { // Node ID: 1047 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1047in_a = in_vars.id445out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1047in_b = id90out_output;

    id1047out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1047in_a,id1047in_b));
  }
  { // Node ID: 1048 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1048in_a = in_vars.id450out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1048in_b = id92out_output;

    id1048out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1048in_a,id1048in_b));
  }
  { // Node ID: 1068 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1068in_a = id1047out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1068in_b = id1048out_result[getCycle()%8];

    id1068out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1068in_a,id1068in_b));
  }
  { // Node ID: 1049 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1049in_a = in_vars.id455out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1049in_b = id94out_output;

    id1049out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1049in_a,id1049in_b));
  }
  { // Node ID: 1050 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1050in_a = in_vars.id460out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1050in_b = id96out_output;

    id1050out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1050in_a,id1050in_b));
  }
  { // Node ID: 1069 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1069in_a = id1049out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1069in_b = id1050out_result[getCycle()%8];

    id1069out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1069in_a,id1069in_b));
  }
  { // Node ID: 1078 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1078in_a = id1068out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1078in_b = id1069out_result[getCycle()%2];

    id1078out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1078in_a,id1078in_b));
  }
  { // Node ID: 1051 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1051in_a = in_vars.id466out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1051in_b = id98out_output;

    id1051out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1051in_a,id1051in_b));
  }
  { // Node ID: 1052 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1052in_a = in_vars.id471out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1052in_b = id100out_output;

    id1052out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1052in_a,id1052in_b));
  }
  { // Node ID: 1070 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1070in_a = id1051out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1070in_b = id1052out_result[getCycle()%8];

    id1070out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1070in_a,id1070in_b));
  }
  { // Node ID: 1053 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1053in_a = in_vars.id476out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1053in_b = id102out_output;

    id1053out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1053in_a,id1053in_b));
  }
  { // Node ID: 1054 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1054in_a = in_vars.id481out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1054in_b = id104out_output;

    id1054out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1054in_a,id1054in_b));
  }
  { // Node ID: 1071 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1071in_a = id1053out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1071in_b = id1054out_result[getCycle()%8];

    id1071out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1071in_a,id1071in_b));
  }
  { // Node ID: 1079 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1079in_a = id1070out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1079in_b = id1071out_result[getCycle()%2];

    id1079out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1079in_a,id1079in_b));
  }
  { // Node ID: 1083 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1083in_a = id1078out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1083in_b = id1079out_result[getCycle()%2];

    id1083out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1083in_a,id1083in_b));
  }
  { // Node ID: 1085 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1085in_a = id1082out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1085in_b = id1083out_result[getCycle()%2];

    id1085out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1085in_a,id1085in_b));
  }
  { // Node ID: 1086 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1086in_a = id1797out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1086in_b = id1085out_result[getCycle()%2];

    id1086out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1086in_a,id1086in_b));
  }
  { // Node ID: 1087 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1087in_a = id1063out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1087in_b = id1086out_result[getCycle()%2];

    id1087out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1087in_a,id1087in_b));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1355out_output;

  { // Node ID: 1355 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1355in_input = id1353out_result[getCycle()%2];

    id1355out_output = id1355in_input;
  }
  { // Node ID: 1798 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1798in_input = id1355out_output;

    id1798out_output[(getCycle()+3)%4] = id1798in_input;
  }
  { // Node ID: 1352 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1352in_a = id1087out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1352in_b = id1798out_output[getCycle()%4];

    id1352out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1352in_a,id1352in_b));
  }
  { // Node ID: 1800 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1800in_input = id1087out_result[getCycle()%2];

    id1800out_output[(getCycle()+1)%2] = id1800in_input;
  }
  { // Node ID: 1353 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1353in_sel = id1723out_output[getCycle()%16];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1353in_option0 = id1352out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1353in_option1 = id1800out_output[getCycle()%2];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1353x_1;

    switch((id1353in_sel.getValueAsLong())) {
      case 0l:
        id1353x_1 = id1353in_option0;
        break;
      case 1l:
        id1353x_1 = id1353in_option1;
        break;
      default:
        id1353x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1353out_result[(getCycle()+1)%2] = (id1353x_1);
  }
  { // Node ID: 1354 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1354in_a = id1353out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1354in_b = id1432out_datab[getCycle()%3];

    id1354out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1354in_a,id1354in_b));
  }
  HWRawBits<32> id1424out_output;

  { // Node ID: 1424 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1424in_input = id1354out_result[getCycle()%2];

    id1424out_output = (cast_fixed2bits(id1424in_input));
  }
  { // Node ID: 965 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id965in_a = in_vars.id397out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id965in_b = id122out_output;

    id965out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id965in_a,id965in_b));
  }
  { // Node ID: 957 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id957in_a = in_vars.id355out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id957in_b = id106out_output;

    id957out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id957in_a,id957in_b));
  }
  { // Node ID: 958 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id958in_a = in_vars.id360out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id958in_b = id108out_output;

    id958out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id958in_a,id958in_b));
  }
  { // Node ID: 974 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id974in_a = id957out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id974in_b = id958out_result[getCycle()%8];

    id974out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id974in_a,id974in_b));
  }
  { // Node ID: 959 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id959in_a = in_vars.id365out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id959in_b = id110out_output;

    id959out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id959in_a,id959in_b));
  }
  { // Node ID: 960 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id960in_a = in_vars.id370out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id960in_b = id112out_output;

    id960out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id960in_a,id960in_b));
  }
  { // Node ID: 975 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id975in_a = id959out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id975in_b = id960out_result[getCycle()%8];

    id975out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id975in_a,id975in_b));
  }
  { // Node ID: 982 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id982in_a = id974out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id982in_b = id975out_result[getCycle()%2];

    id982out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id982in_a,id982in_b));
  }
  { // Node ID: 961 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id961in_a = in_vars.id376out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id961in_b = id114out_output;

    id961out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id961in_a,id961in_b));
  }
  { // Node ID: 962 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id962in_a = in_vars.id381out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id962in_b = id116out_output;

    id962out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id962in_a,id962in_b));
  }
  { // Node ID: 976 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id976in_a = id961out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id976in_b = id962out_result[getCycle()%8];

    id976out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id976in_a,id976in_b));
  }
  { // Node ID: 963 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id963in_a = in_vars.id386out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id963in_b = id118out_output;

    id963out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id963in_a,id963in_b));
  }
  { // Node ID: 964 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id964in_a = in_vars.id391out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id964in_b = id120out_output;

    id964out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id964in_a,id964in_b));
  }
  { // Node ID: 977 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id977in_a = id963out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id977in_b = id964out_result[getCycle()%8];

    id977out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id977in_a,id977in_b));
  }
  { // Node ID: 983 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id983in_a = id976out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id983in_b = id977out_result[getCycle()%2];

    id983out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id983in_a,id983in_b));
  }
  { // Node ID: 986 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id986in_a = id982out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id986in_b = id983out_result[getCycle()%2];

    id986out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id986in_a,id986in_b));
  }
  { // Node ID: 1801 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1801in_input = id986out_result[getCycle()%2];

    id1801out_output[(getCycle()+1)%2] = id1801in_input;
  }
  { // Node ID: 941 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id941in_a = in_vars.id271out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id941in_b = id74out_output;

    id941out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id941in_a,id941in_b));
  }
  { // Node ID: 942 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id942in_a = in_vars.id276out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id942in_b = id76out_output;

    id942out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id942in_a,id942in_b));
  }
  { // Node ID: 966 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id966in_a = id941out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id966in_b = id942out_result[getCycle()%8];

    id966out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id966in_a,id966in_b));
  }
  { // Node ID: 943 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id943in_a = in_vars.id281out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id943in_b = id78out_output;

    id943out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id943in_a,id943in_b));
  }
  { // Node ID: 944 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id944in_a = in_vars.id286out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id944in_b = id80out_output;

    id944out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id944in_a,id944in_b));
  }
  { // Node ID: 967 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id967in_a = id943out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id967in_b = id944out_result[getCycle()%8];

    id967out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id967in_a,id967in_b));
  }
  { // Node ID: 978 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id978in_a = id966out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id978in_b = id967out_result[getCycle()%2];

    id978out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id978in_a,id978in_b));
  }
  { // Node ID: 945 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id945in_a = in_vars.id292out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id945in_b = id82out_output;

    id945out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id945in_a,id945in_b));
  }
  { // Node ID: 946 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id946in_a = in_vars.id297out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id946in_b = id84out_output;

    id946out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id946in_a,id946in_b));
  }
  { // Node ID: 968 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id968in_a = id945out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id968in_b = id946out_result[getCycle()%8];

    id968out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id968in_a,id968in_b));
  }
  { // Node ID: 947 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id947in_a = in_vars.id302out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id947in_b = id86out_output;

    id947out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id947in_a,id947in_b));
  }
  { // Node ID: 948 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id948in_a = in_vars.id307out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id948in_b = id88out_output;

    id948out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id948in_a,id948in_b));
  }
  { // Node ID: 969 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id969in_a = id947out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id969in_b = id948out_result[getCycle()%8];

    id969out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id969in_a,id969in_b));
  }
  { // Node ID: 979 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id979in_a = id968out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id979in_b = id969out_result[getCycle()%2];

    id979out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id979in_a,id979in_b));
  }
  { // Node ID: 984 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id984in_a = id978out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id984in_b = id979out_result[getCycle()%2];

    id984out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id984in_a,id984in_b));
  }
  { // Node ID: 949 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id949in_a = in_vars.id313out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id949in_b = id90out_output;

    id949out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id949in_a,id949in_b));
  }
  { // Node ID: 950 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id950in_a = in_vars.id318out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id950in_b = id92out_output;

    id950out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id950in_a,id950in_b));
  }
  { // Node ID: 970 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id970in_a = id949out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id970in_b = id950out_result[getCycle()%8];

    id970out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id970in_a,id970in_b));
  }
  { // Node ID: 951 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id951in_a = in_vars.id323out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id951in_b = id94out_output;

    id951out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id951in_a,id951in_b));
  }
  { // Node ID: 952 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id952in_a = in_vars.id328out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id952in_b = id96out_output;

    id952out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id952in_a,id952in_b));
  }
  { // Node ID: 971 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id971in_a = id951out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id971in_b = id952out_result[getCycle()%8];

    id971out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id971in_a,id971in_b));
  }
  { // Node ID: 980 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id980in_a = id970out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id980in_b = id971out_result[getCycle()%2];

    id980out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id980in_a,id980in_b));
  }
  { // Node ID: 953 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id953in_a = in_vars.id334out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id953in_b = id98out_output;

    id953out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id953in_a,id953in_b));
  }
  { // Node ID: 954 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id954in_a = in_vars.id339out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id954in_b = id100out_output;

    id954out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id954in_a,id954in_b));
  }
  { // Node ID: 972 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id972in_a = id953out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id972in_b = id954out_result[getCycle()%8];

    id972out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id972in_a,id972in_b));
  }
  { // Node ID: 955 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id955in_a = in_vars.id344out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id955in_b = id102out_output;

    id955out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id955in_a,id955in_b));
  }
  { // Node ID: 956 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id956in_a = in_vars.id349out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id956in_b = id104out_output;

    id956out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id956in_a,id956in_b));
  }
  { // Node ID: 973 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id973in_a = id955out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id973in_b = id956out_result[getCycle()%8];

    id973out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id973in_a,id973in_b));
  }
  { // Node ID: 981 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id981in_a = id972out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id981in_b = id973out_result[getCycle()%2];

    id981out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id981in_a,id981in_b));
  }
  { // Node ID: 985 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id985in_a = id980out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id985in_b = id981out_result[getCycle()%2];

    id985out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id985in_a,id985in_b));
  }
  { // Node ID: 987 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id987in_a = id984out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id987in_b = id985out_result[getCycle()%2];

    id987out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id987in_a,id987in_b));
  }
  { // Node ID: 988 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id988in_a = id1801out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id988in_b = id987out_result[getCycle()%2];

    id988out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id988in_a,id988in_b));
  }
  { // Node ID: 989 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id989in_a = id965out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id989in_b = id988out_result[getCycle()%2];

    id989out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id989in_a,id989in_b));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1331out_output;

  { // Node ID: 1331 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1331in_input = id1329out_result[getCycle()%2];

    id1331out_output = id1331in_input;
  }
  { // Node ID: 1802 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1802in_input = id1331out_output;

    id1802out_output[(getCycle()+3)%4] = id1802in_input;
  }
  { // Node ID: 1328 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1328in_a = id989out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1328in_b = id1802out_output[getCycle()%4];

    id1328out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1328in_a,id1328in_b));
  }
  { // Node ID: 1804 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1804in_input = id989out_result[getCycle()%2];

    id1804out_output[(getCycle()+1)%2] = id1804in_input;
  }
  { // Node ID: 1329 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1329in_sel = id1723out_output[getCycle()%16];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1329in_option0 = id1328out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1329in_option1 = id1804out_output[getCycle()%2];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1329x_1;

    switch((id1329in_sel.getValueAsLong())) {
      case 0l:
        id1329x_1 = id1329in_option0;
        break;
      case 1l:
        id1329x_1 = id1329in_option1;
        break;
      default:
        id1329x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1329out_result[(getCycle()+1)%2] = (id1329x_1);
  }
  { // Node ID: 1330 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1330in_a = id1329out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1330in_b = id1431out_datab[getCycle()%3];

    id1330out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1330in_a,id1330in_b));
  }
  HWRawBits<32> id1422out_output;

  { // Node ID: 1422 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1422in_input = id1330out_result[getCycle()%2];

    id1422out_output = (cast_fixed2bits(id1422in_input));
  }
  { // Node ID: 867 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id867in_a = in_vars.id265out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id867in_b = id122out_output;

    id867out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id867in_a,id867in_b));
  }
  { // Node ID: 859 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id859in_a = in_vars.id223out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id859in_b = id106out_output;

    id859out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id859in_a,id859in_b));
  }
  { // Node ID: 860 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id860in_a = in_vars.id228out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id860in_b = id108out_output;

    id860out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id860in_a,id860in_b));
  }
  { // Node ID: 876 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id876in_a = id859out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id876in_b = id860out_result[getCycle()%8];

    id876out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id876in_a,id876in_b));
  }
  { // Node ID: 861 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id861in_a = in_vars.id233out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id861in_b = id110out_output;

    id861out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id861in_a,id861in_b));
  }
  { // Node ID: 862 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id862in_a = in_vars.id238out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id862in_b = id112out_output;

    id862out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id862in_a,id862in_b));
  }
  { // Node ID: 877 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id877in_a = id861out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id877in_b = id862out_result[getCycle()%8];

    id877out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id877in_a,id877in_b));
  }
  { // Node ID: 884 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id884in_a = id876out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id884in_b = id877out_result[getCycle()%2];

    id884out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id884in_a,id884in_b));
  }
  { // Node ID: 863 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id863in_a = in_vars.id244out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id863in_b = id114out_output;

    id863out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id863in_a,id863in_b));
  }
  { // Node ID: 864 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id864in_a = in_vars.id249out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id864in_b = id116out_output;

    id864out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id864in_a,id864in_b));
  }
  { // Node ID: 878 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id878in_a = id863out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id878in_b = id864out_result[getCycle()%8];

    id878out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id878in_a,id878in_b));
  }
  { // Node ID: 865 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id865in_a = in_vars.id254out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id865in_b = id118out_output;

    id865out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id865in_a,id865in_b));
  }
  { // Node ID: 866 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id866in_a = in_vars.id259out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id866in_b = id120out_output;

    id866out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id866in_a,id866in_b));
  }
  { // Node ID: 879 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id879in_a = id865out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id879in_b = id866out_result[getCycle()%8];

    id879out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id879in_a,id879in_b));
  }
  { // Node ID: 885 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id885in_a = id878out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id885in_b = id879out_result[getCycle()%2];

    id885out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id885in_a,id885in_b));
  }
  { // Node ID: 888 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id888in_a = id884out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id888in_b = id885out_result[getCycle()%2];

    id888out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id888in_a,id888in_b));
  }
  { // Node ID: 1805 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1805in_input = id888out_result[getCycle()%2];

    id1805out_output[(getCycle()+1)%2] = id1805in_input;
  }
  { // Node ID: 843 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id843in_a = in_vars.id139out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id843in_b = id74out_output;

    id843out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id843in_a,id843in_b));
  }
  { // Node ID: 844 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id844in_a = in_vars.id144out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id844in_b = id76out_output;

    id844out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id844in_a,id844in_b));
  }
  { // Node ID: 868 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id868in_a = id843out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id868in_b = id844out_result[getCycle()%8];

    id868out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id868in_a,id868in_b));
  }
  { // Node ID: 845 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id845in_a = in_vars.id149out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id845in_b = id78out_output;

    id845out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id845in_a,id845in_b));
  }
  { // Node ID: 846 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id846in_a = in_vars.id154out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id846in_b = id80out_output;

    id846out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id846in_a,id846in_b));
  }
  { // Node ID: 869 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id869in_a = id845out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id869in_b = id846out_result[getCycle()%8];

    id869out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id869in_a,id869in_b));
  }
  { // Node ID: 880 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id880in_a = id868out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id880in_b = id869out_result[getCycle()%2];

    id880out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id880in_a,id880in_b));
  }
  { // Node ID: 847 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id847in_a = in_vars.id160out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id847in_b = id82out_output;

    id847out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id847in_a,id847in_b));
  }
  { // Node ID: 848 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id848in_a = in_vars.id165out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id848in_b = id84out_output;

    id848out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id848in_a,id848in_b));
  }
  { // Node ID: 870 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id870in_a = id847out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id870in_b = id848out_result[getCycle()%8];

    id870out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id870in_a,id870in_b));
  }
  { // Node ID: 849 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id849in_a = in_vars.id170out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id849in_b = id86out_output;

    id849out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id849in_a,id849in_b));
  }
  { // Node ID: 850 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id850in_a = in_vars.id175out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id850in_b = id88out_output;

    id850out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id850in_a,id850in_b));
  }
  { // Node ID: 871 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id871in_a = id849out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id871in_b = id850out_result[getCycle()%8];

    id871out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id871in_a,id871in_b));
  }
  { // Node ID: 881 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id881in_a = id870out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id881in_b = id871out_result[getCycle()%2];

    id881out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id881in_a,id881in_b));
  }
  { // Node ID: 886 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id886in_a = id880out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id886in_b = id881out_result[getCycle()%2];

    id886out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id886in_a,id886in_b));
  }
  { // Node ID: 851 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id851in_a = in_vars.id181out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id851in_b = id90out_output;

    id851out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id851in_a,id851in_b));
  }
  { // Node ID: 852 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id852in_a = in_vars.id186out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id852in_b = id92out_output;

    id852out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id852in_a,id852in_b));
  }
  { // Node ID: 872 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id872in_a = id851out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id872in_b = id852out_result[getCycle()%8];

    id872out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id872in_a,id872in_b));
  }
  { // Node ID: 853 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id853in_a = in_vars.id191out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id853in_b = id94out_output;

    id853out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id853in_a,id853in_b));
  }
  { // Node ID: 854 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id854in_a = id196out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id854in_b = id96out_output;

    id854out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id854in_a,id854in_b));
  }
  { // Node ID: 873 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id873in_a = id853out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id873in_b = id854out_result[getCycle()%8];

    id873out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id873in_a,id873in_b));
  }
  { // Node ID: 882 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id882in_a = id872out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id882in_b = id873out_result[getCycle()%2];

    id882out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id882in_a,id882in_b));
  }
  { // Node ID: 855 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id855in_a = id202out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id855in_b = id98out_output;

    id855out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id855in_a,id855in_b));
  }
  { // Node ID: 856 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id856in_a = id207out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id856in_b = id100out_output;

    id856out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id856in_a,id856in_b));
  }
  { // Node ID: 874 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id874in_a = id855out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id874in_b = id856out_result[getCycle()%8];

    id874out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id874in_a,id874in_b));
  }
  { // Node ID: 857 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id857in_a = id212out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id857in_b = id102out_output;

    id857out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id857in_a,id857in_b));
  }
  { // Node ID: 858 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id858in_a = id217out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id858in_b = id104out_output;

    id858out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id858in_a,id858in_b));
  }
  { // Node ID: 875 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id875in_a = id857out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id875in_b = id858out_result[getCycle()%8];

    id875out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id875in_a,id875in_b));
  }
  { // Node ID: 883 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id883in_a = id874out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id883in_b = id875out_result[getCycle()%2];

    id883out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id883in_a,id883in_b));
  }
  { // Node ID: 887 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id887in_a = id882out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id887in_b = id883out_result[getCycle()%2];

    id887out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id887in_a,id887in_b));
  }
  { // Node ID: 889 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id889in_a = id886out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id889in_b = id887out_result[getCycle()%2];

    id889out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id889in_a,id889in_b));
  }
  { // Node ID: 890 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id890in_a = id1805out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id890in_b = id889out_result[getCycle()%2];

    id890out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id890in_a,id890in_b));
  }
  { // Node ID: 891 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id891in_a = id867out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id891in_b = id890out_result[getCycle()%2];

    id891out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id891in_a,id891in_b));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1307out_output;

  { // Node ID: 1307 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1307in_input = id1305out_result[getCycle()%2];

    id1307out_output = id1307in_input;
  }
  { // Node ID: 1806 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1806in_input = id1307out_output;

    id1806out_output[(getCycle()+3)%4] = id1806in_input;
  }
  { // Node ID: 1304 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1304in_a = id891out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1304in_b = id1806out_output[getCycle()%4];

    id1304out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1304in_a,id1304in_b));
  }
  { // Node ID: 1808 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1808in_input = id891out_result[getCycle()%2];

    id1808out_output[(getCycle()+1)%2] = id1808in_input;
  }
  { // Node ID: 1305 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1305in_sel = id1723out_output[getCycle()%16];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1305in_option0 = id1304out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1305in_option1 = id1808out_output[getCycle()%2];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1305x_1;

    switch((id1305in_sel.getValueAsLong())) {
      case 0l:
        id1305x_1 = id1305in_option0;
        break;
      case 1l:
        id1305x_1 = id1305in_option1;
        break;
      default:
        id1305x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1305out_result[(getCycle()+1)%2] = (id1305x_1);
  }
  { // Node ID: 1306 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1306in_a = id1305out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1306in_b = id1430out_datab[getCycle()%3];

    id1306out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id1306in_a,id1306in_b));
  }
  HWRawBits<32> id1421out_output;

  { // Node ID: 1421 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1421in_input = id1306out_result[getCycle()%2];

    id1421out_output = (cast_fixed2bits(id1421in_input));
  }
  HWRawBits<64> id1423out_result;

  { // Node ID: 1423 (NodeCat)
    const HWRawBits<32> &id1423in_in0 = id1422out_output;
    const HWRawBits<32> &id1423in_in1 = id1421out_output;

    id1423out_result = (cat(id1423in_in0,id1423in_in1));
  }
  HWRawBits<96> id1425out_result;

  { // Node ID: 1425 (NodeCat)
    const HWRawBits<32> &id1425in_in0 = id1424out_output;
    const HWRawBits<64> &id1425in_in1 = id1423out_result;

    id1425out_result = (cat(id1425in_in0,id1425in_in1));
  }
  HWRawBits<128> id1427out_result;

  { // Node ID: 1427 (NodeCat)
    const HWRawBits<32> &id1427in_in0 = id1426out_output;
    const HWRawBits<96> &id1427in_in1 = id1425out_result;

    id1427out_result = (cat(id1427in_in0,id1427in_in1));
  }
  HWRawBits<160> id1429out_result;

  { // Node ID: 1429 (NodeCat)
    const HWRawBits<32> &id1429in_in0 = id1428out_output;
    const HWRawBits<128> &id1429in_in1 = id1427out_result;

    id1429out_result = (cat(id1429in_in0,id1429in_in1));
  }
  if ( (getFillLevel() >= (25l)) && (getFlushLevel() < (25l)|| !isFlushingActive() ))
  { // Node ID: 1420 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id1420in_output_control = id1419out_result;
    const HWRawBits<160> &id1420in_data = id1429out_result;

    bool id1420x_1;

    (id1420x_1) = ((id1420in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(25l))&(isFlushingActive()))));
    if((id1420x_1)) {
      writeOutput(m_y11, id1420in_data);
    }
  }
  { // Node ID: 1474 (NodeConstantRawBits)
  }
  { // Node ID: 1814 (NodeConstantRawBits)
  }
  { // Node ID: 1471 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 1472 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id1472in_enable = id1814out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id1472in_max = id1471out_value;

    HWOffsetFix<49,0,UNSIGNED> id1472x_1;
    HWOffsetFix<1,0,UNSIGNED> id1472x_2;
    HWOffsetFix<1,0,UNSIGNED> id1472x_3;
    HWOffsetFix<49,0,UNSIGNED> id1472x_4t_1e_1;

    id1472out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id1472st_count)));
    (id1472x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id1472st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id1472x_2) = (gte_fixed((id1472x_1),id1472in_max));
    (id1472x_3) = (and_fixed((id1472x_2),id1472in_enable));
    id1472out_wrap = (id1472x_3);
    if((id1472in_enable.getValueAsBool())) {
      if(((id1472x_3).getValueAsBool())) {
        (id1472st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id1472x_4t_1e_1) = (id1472x_1);
        (id1472st_count) = (id1472x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id1473out_output;

  { // Node ID: 1473 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id1473in_input = id1472out_count;

    id1473out_output = id1473in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 1475 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id1475in_load = id1474out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id1475in_data = id1473out_output;

    bool id1475x_1;

    (id1475x_1) = ((id1475in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id1475x_1)) {
      setMappedRegValue("current_run_cycle_count", id1475in_data);
    }
  }
  { // Node ID: 1813 (NodeConstantRawBits)
  }
  { // Node ID: 1477 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 1478 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id1478in_enable = id1813out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id1478in_max = id1477out_value;

    HWOffsetFix<49,0,UNSIGNED> id1478x_1;
    HWOffsetFix<1,0,UNSIGNED> id1478x_2;
    HWOffsetFix<1,0,UNSIGNED> id1478x_3;
    HWOffsetFix<49,0,UNSIGNED> id1478x_4t_1e_1;

    id1478out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id1478st_count)));
    (id1478x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id1478st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id1478x_2) = (gte_fixed((id1478x_1),id1478in_max));
    (id1478x_3) = (and_fixed((id1478x_2),id1478in_enable));
    id1478out_wrap = (id1478x_3);
    if((id1478in_enable.getValueAsBool())) {
      if(((id1478x_3).getValueAsBool())) {
        (id1478st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id1478x_4t_1e_1) = (id1478x_1);
        (id1478st_count) = (id1478x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 1480 (NodeInputMappedReg)
  }
  { // Node ID: 1481 (NodeEq)
    const HWOffsetFix<48,0,UNSIGNED> &id1481in_a = id1478out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id1481in_b = id1480out_run_cycle_count;

    id1481out_result[(getCycle()+1)%2] = (eq_fixed(id1481in_a,id1481in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 1479 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id1479in_start = id1481out_result[getCycle()%2];

    if((id1479in_start.getValueAsBool())) {
      startFlushing();
    }
  }
};

};
