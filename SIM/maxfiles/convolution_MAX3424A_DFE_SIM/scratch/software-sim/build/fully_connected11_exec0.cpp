#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "fully_connected11.h"

namespace maxcompilersim {

void fully_connected11::execute0() {
  { // Node ID: 323 (NodeConstantRawBits)
  }
  { // Node ID: 322 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 2 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id2in_enable = id323out_value;
    const HWOffsetFix<17,0,UNSIGNED> &id2in_max = id322out_value;

    HWOffsetFix<17,0,UNSIGNED> id2x_1;
    HWOffsetFix<1,0,UNSIGNED> id2x_2;
    HWOffsetFix<1,0,UNSIGNED> id2x_3;
    HWOffsetFix<17,0,UNSIGNED> id2x_4t_1e_1;

    id2out_count = (cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>((id2st_count)));
    (id2x_1) = (add_fixed<17,0,UNSIGNED,TRUNCATE>((id2st_count),(c_hw_fix_17_0_uns_bits_2)));
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
  { // Node ID: 262 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id262in_input = id2out_wrap;

    id262out_output[(getCycle()+3)%4] = id262in_input;
  }
  { // Node ID: 321 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (6l)))
  { // Node ID: 4 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id4in_enable = id262out_output[getCycle()%4];
    const HWOffsetFix<17,0,UNSIGNED> &id4in_max = id321out_value;

    HWOffsetFix<17,0,UNSIGNED> id4x_1;
    HWOffsetFix<1,0,UNSIGNED> id4x_2;
    HWOffsetFix<1,0,UNSIGNED> id4x_3;
    HWOffsetFix<17,0,UNSIGNED> id4x_4t_1e_1;

    id4out_count = (cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>((id4st_count)));
    (id4x_1) = (add_fixed<17,0,UNSIGNED,TRUNCATE>((id4st_count),(c_hw_fix_17_0_uns_bits_2)));
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
  { // Node ID: 320 (NodeConstantRawBits)
  }
  { // Node ID: 96 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id96in_a = id4out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id96in_b = id320out_value;

    id96out_result[(getCycle()+1)%2] = (eq_fixed(id96in_a,id96in_b));
  }
  { // Node ID: 319 (NodeConstantRawBits)
  }
  { // Node ID: 98 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id98in_a = id4out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id98in_b = id319out_value;

    id98out_result[(getCycle()+1)%2] = (eq_fixed(id98in_a,id98in_b));
  }
  { // Node ID: 99 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id99in_a = id96out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id99in_b = id98out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id99x_1;

    (id99x_1) = (or_fixed(id99in_a,id99in_b));
    id99out_result[(getCycle()+1)%2] = (id99x_1);
  }
  { // Node ID: 263 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id263in_input = id99out_result[getCycle()%2];

    id263out_output[(getCycle()+23)%24] = id263in_input;
  }
  { // Node ID: 137 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id138out_result;

  { // Node ID: 138 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id138in_a = id137out_io_y01_force_disabled;

    id138out_result = (not_fixed(id138in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id139out_result;

  { // Node ID: 139 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id139in_a = id263out_output[getCycle()%24];
    const HWOffsetFix<1,0,UNSIGNED> &id139in_b = id138out_result;

    HWOffsetFix<1,0,UNSIGNED> id139x_1;

    (id139x_1) = (and_fixed(id139in_a,id139in_b));
    id139out_result = (id139x_1);
  }
  { // Node ID: 267 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id267in_input = id2out_count;

    id267out_output[(getCycle()+1)%2] = id267in_input;
  }
  { // Node ID: 309 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id309in_input = id267out_output[getCycle()%2];

    id309out_output[(getCycle()+1)%2] = id309in_input;
  }
  { // Node ID: 318 (NodeConstantRawBits)
  }
  { // Node ID: 101 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id101in_a = id309out_output[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id101in_b = id318out_value;

    id101out_result[(getCycle()+1)%2] = (eq_fixed(id101in_a,id101in_b));
  }
  { // Node ID: 265 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id265in_input = id101out_result[getCycle()%2];

    id265out_output[(getCycle()+1)%2] = id265in_input;
  }
  { // Node ID: 317 (NodeConstantRawBits)
  }
  { // Node ID: 103 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id103in_a = id4out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id103in_b = id317out_value;

    id103out_result[(getCycle()+1)%2] = (eq_fixed(id103in_a,id103in_b));
  }
  { // Node ID: 104 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id104in_a = id265out_output[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id104in_b = id103out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id104x_1;

    (id104x_1) = (and_fixed(id104in_a,id104in_b));
    id104out_result[(getCycle()+1)%2] = (id104x_1);
  }
  { // Node ID: 266 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id266in_input = id104out_result[getCycle()%2];

    id266out_output[(getCycle()+3)%4] = id266in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id128out_output;

  { // Node ID: 128 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id128in_input = id127out_result[getCycle()%2];

    id128out_output = id128in_input;
  }
  { // Node ID: 200 (NodeConstantRawBits)
  }
  { // Node ID: 107 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id107in_sel = id266out_output[getCycle()%4];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id107in_option0 = id128out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id107in_option1 = id200out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id107x_1;

    switch((id107in_sel.getValueAsLong())) {
      case 0l:
        id107x_1 = id107in_option0;
        break;
      case 1l:
        id107x_1 = id107in_option1;
        break;
      default:
        id107x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id107out_result[(getCycle()+1)%2] = (id107x_1);
  }
  { // Node ID: 298 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id298in_input = id107out_result[getCycle()%2];

    id298out_output[(getCycle()+8)%9] = id298in_input;
  }
  HWOffsetFix<16,1,UNSIGNED> id202out_output;

  { // Node ID: 202 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id202in_input = id267out_output[getCycle()%2];

    id202out_output = (cast_bits2fixed<16,1,UNSIGNED>((cast_fixed2bits(id202in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id203out_output;

  { // Node ID: 203 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id203in_input = id267out_output[getCycle()%2];

    id203out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id203in_input))));
  }
  { // Node ID: 205 (NodeAdd)
    const HWOffsetFix<16,1,UNSIGNED> &id205in_a = id202out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id205in_b = id203out_output;

    id205out_result[(getCycle()+1)%2] = (add_fixed<20,1,UNSIGNED,TONEAREVEN>(id205in_a,id205in_b));
  }
  HWOffsetFix<16,5,UNSIGNED> id204out_output;

  { // Node ID: 204 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id204in_input = id309out_output[getCycle()%2];

    id204out_output = (cast_bits2fixed<16,5,UNSIGNED>((cast_fixed2bits(id204in_input))));
  }
  { // Node ID: 206 (NodeAdd)
    const HWOffsetFix<20,1,UNSIGNED> &id206in_a = id205out_result[getCycle()%2];
    const HWOffsetFix<16,5,UNSIGNED> &id206in_b = id204out_output;

    id206out_result[(getCycle()+1)%2] = (add_fixed<21,1,UNSIGNED,TONEAREVEN>(id206in_a,id206in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id207out_o;

  { // Node ID: 207 (NodeCast)
    const HWOffsetFix<21,1,UNSIGNED> &id207in_i = id206out_result[getCycle()%2];

    id207out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id207in_i));
  }
  { // Node ID: 89 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id89in_a = id207out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id89in_b = id4out_count;

    id89out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id89in_a,id89in_b));
  }
  HWOffsetFix<9,0,UNSIGNED> id90out_o;

  { // Node ID: 90 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id90in_i = id89out_result[getCycle()%2];

    id90out_o = (cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(id90in_i));
  }
  { // Node ID: 186 (NodeMappedRom)
    const HWOffsetFix<9,0,UNSIGNED> &id186in_addra = id90out_o;

    long id186x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id186x_2;

    (id186x_1) = (id186in_addra.getValueAsLong());
    switch(((long)((id186x_1)<(500l)))) {
      case 0l:
        id186x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id186x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom8", id186x_1) );
        break;
      default:
        id186x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id186out_dataa[(getCycle()+2)%3] = (id186x_2);
  }
  { // Node ID: 316 (NodeConstantRawBits)
  }
  { // Node ID: 6 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id6in_a = id2out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id6in_b = id316out_value;

    id6out_result[(getCycle()+1)%2] = (eq_fixed(id6in_a,id6in_b));
  }
  { // Node ID: 7 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id8out_result;

  { // Node ID: 8 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id8in_a = id7out_io_x01_force_disabled;

    id8out_result = (not_fixed(id8in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id9out_result;

  { // Node ID: 9 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id9in_a = id6out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id9in_b = id8out_result;

    HWOffsetFix<1,0,UNSIGNED> id9x_1;

    (id9x_1) = (and_fixed(id9in_a,id9in_b));
    id9out_result = (id9x_1);
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 10 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id10in_enable = id9out_result;

    (id10st_read_next_cycle) = ((id10in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_x01, id10st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<32> id27out_result;

  { // Node ID: 27 (NodeSlice)
    const HWRawBits<320> &id27in_a = id10out_data;

    id27out_result = (slice<256,32>(id27in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id28out_output;

  { // Node ID: 28 (NodeReinterpret)
    const HWRawBits<32> &id28in_input = id27out_result;

    id28out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id28in_input));
  }
  { // Node ID: 116 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id116in_a = id186out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id116in_b = id28out_output;

    id116out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id116in_a,id116in_b));
  }
  HWOffsetFix<16,1,UNSIGNED> id208out_output;

  { // Node ID: 208 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id208in_input = id267out_output[getCycle()%2];

    id208out_output = (cast_bits2fixed<16,1,UNSIGNED>((cast_fixed2bits(id208in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id209out_output;

  { // Node ID: 209 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id209in_input = id267out_output[getCycle()%2];

    id209out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id209in_input))));
  }
  { // Node ID: 211 (NodeAdd)
    const HWOffsetFix<16,1,UNSIGNED> &id211in_a = id208out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id211in_b = id209out_output;

    id211out_result[(getCycle()+1)%2] = (add_fixed<20,1,UNSIGNED,TONEAREVEN>(id211in_a,id211in_b));
  }
  HWOffsetFix<16,5,UNSIGNED> id210out_output;

  { // Node ID: 210 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id210in_input = id309out_output[getCycle()%2];

    id210out_output = (cast_bits2fixed<16,5,UNSIGNED>((cast_fixed2bits(id210in_input))));
  }
  { // Node ID: 212 (NodeAdd)
    const HWOffsetFix<20,1,UNSIGNED> &id212in_a = id211out_result[getCycle()%2];
    const HWOffsetFix<16,5,UNSIGNED> &id212in_b = id210out_output;

    id212out_result[(getCycle()+1)%2] = (add_fixed<21,1,UNSIGNED,TONEAREVEN>(id212in_a,id212in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id213out_o;

  { // Node ID: 213 (NodeCast)
    const HWOffsetFix<21,1,UNSIGNED> &id213in_i = id212out_result[getCycle()%2];

    id213out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id213in_i));
  }
  { // Node ID: 93 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id93in_a = id213out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id93in_b = id4out_count;

    id93out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id93in_a,id93in_b));
  }
  HWOffsetFix<9,0,UNSIGNED> id94out_o;

  { // Node ID: 94 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id94in_i = id93out_result[getCycle()%2];

    id94out_o = (cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(id94in_i));
  }
  { // Node ID: 187 (NodeMappedRom)
    const HWOffsetFix<9,0,UNSIGNED> &id187in_addra = id94out_o;

    long id187x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id187x_2;

    (id187x_1) = (id187in_addra.getValueAsLong());
    switch(((long)((id187x_1)<(500l)))) {
      case 0l:
        id187x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id187x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom9", id187x_1) );
        break;
      default:
        id187x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id187out_dataa[(getCycle()+2)%3] = (id187x_2);
  }
  HWRawBits<32> id29out_result;

  { // Node ID: 29 (NodeSlice)
    const HWRawBits<320> &id29in_a = id10out_data;

    id29out_result = (slice<288,32>(id29in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id30out_output;

  { // Node ID: 30 (NodeReinterpret)
    const HWRawBits<32> &id30in_input = id29out_result;

    id30out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id30in_input));
  }
  { // Node ID: 117 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id117in_a = id187out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id117in_b = id30out_output;

    id117out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id117in_a,id117in_b));
  }
  { // Node ID: 122 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id122in_a = id116out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id122in_b = id117out_result[getCycle()%8];

    id122out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id122in_a,id122in_b));
  }
  { // Node ID: 297 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id297in_input = id122out_result[getCycle()%2];

    id297out_output[(getCycle()+2)%3] = id297in_input;
  }
  HWOffsetFix<16,1,UNSIGNED> id214out_output;

  { // Node ID: 214 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id214in_input = id267out_output[getCycle()%2];

    id214out_output = (cast_bits2fixed<16,1,UNSIGNED>((cast_fixed2bits(id214in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id215out_output;

  { // Node ID: 215 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id215in_input = id267out_output[getCycle()%2];

    id215out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id215in_input))));
  }
  { // Node ID: 217 (NodeAdd)
    const HWOffsetFix<16,1,UNSIGNED> &id217in_a = id214out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id217in_b = id215out_output;

    id217out_result[(getCycle()+1)%2] = (add_fixed<20,1,UNSIGNED,TONEAREVEN>(id217in_a,id217in_b));
  }
  HWOffsetFix<16,5,UNSIGNED> id216out_output;

  { // Node ID: 216 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id216in_input = id309out_output[getCycle()%2];

    id216out_output = (cast_bits2fixed<16,5,UNSIGNED>((cast_fixed2bits(id216in_input))));
  }
  { // Node ID: 218 (NodeAdd)
    const HWOffsetFix<20,1,UNSIGNED> &id218in_a = id217out_result[getCycle()%2];
    const HWOffsetFix<16,5,UNSIGNED> &id218in_b = id216out_output;

    id218out_result[(getCycle()+1)%2] = (add_fixed<21,1,UNSIGNED,TONEAREVEN>(id218in_a,id218in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id219out_o;

  { // Node ID: 219 (NodeCast)
    const HWOffsetFix<21,1,UNSIGNED> &id219in_i = id218out_result[getCycle()%2];

    id219out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id219in_i));
  }
  { // Node ID: 57 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id57in_a = id219out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id57in_b = id4out_count;

    id57out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id57in_a,id57in_b));
  }
  HWOffsetFix<9,0,UNSIGNED> id58out_o;

  { // Node ID: 58 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id58in_i = id57out_result[getCycle()%2];

    id58out_o = (cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(id58in_i));
  }
  { // Node ID: 178 (NodeMappedRom)
    const HWOffsetFix<9,0,UNSIGNED> &id178in_addra = id58out_o;

    long id178x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id178x_2;

    (id178x_1) = (id178in_addra.getValueAsLong());
    switch(((long)((id178x_1)<(500l)))) {
      case 0l:
        id178x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id178x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom0", id178x_1) );
        break;
      default:
        id178x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id178out_dataa[(getCycle()+2)%3] = (id178x_2);
  }
  HWRawBits<32> id11out_result;

  { // Node ID: 11 (NodeSlice)
    const HWRawBits<320> &id11in_a = id10out_data;

    id11out_result = (slice<0,32>(id11in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id12out_output;

  { // Node ID: 12 (NodeReinterpret)
    const HWRawBits<32> &id12in_input = id11out_result;

    id12out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id12in_input));
  }
  { // Node ID: 108 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id108in_a = id178out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id108in_b = id12out_output;

    id108out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id108in_a,id108in_b));
  }
  HWOffsetFix<16,1,UNSIGNED> id220out_output;

  { // Node ID: 220 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id220in_input = id267out_output[getCycle()%2];

    id220out_output = (cast_bits2fixed<16,1,UNSIGNED>((cast_fixed2bits(id220in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id221out_output;

  { // Node ID: 221 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id221in_input = id267out_output[getCycle()%2];

    id221out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id221in_input))));
  }
  { // Node ID: 223 (NodeAdd)
    const HWOffsetFix<16,1,UNSIGNED> &id223in_a = id220out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id223in_b = id221out_output;

    id223out_result[(getCycle()+1)%2] = (add_fixed<20,1,UNSIGNED,TONEAREVEN>(id223in_a,id223in_b));
  }
  HWOffsetFix<16,5,UNSIGNED> id222out_output;

  { // Node ID: 222 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id222in_input = id309out_output[getCycle()%2];

    id222out_output = (cast_bits2fixed<16,5,UNSIGNED>((cast_fixed2bits(id222in_input))));
  }
  { // Node ID: 224 (NodeAdd)
    const HWOffsetFix<20,1,UNSIGNED> &id224in_a = id223out_result[getCycle()%2];
    const HWOffsetFix<16,5,UNSIGNED> &id224in_b = id222out_output;

    id224out_result[(getCycle()+1)%2] = (add_fixed<21,1,UNSIGNED,TONEAREVEN>(id224in_a,id224in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id225out_o;

  { // Node ID: 225 (NodeCast)
    const HWOffsetFix<21,1,UNSIGNED> &id225in_i = id224out_result[getCycle()%2];

    id225out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id225in_i));
  }
  { // Node ID: 61 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id61in_a = id225out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id61in_b = id4out_count;

    id61out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id61in_a,id61in_b));
  }
  HWOffsetFix<9,0,UNSIGNED> id62out_o;

  { // Node ID: 62 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id62in_i = id61out_result[getCycle()%2];

    id62out_o = (cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(id62in_i));
  }
  { // Node ID: 179 (NodeMappedRom)
    const HWOffsetFix<9,0,UNSIGNED> &id179in_addra = id62out_o;

    long id179x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id179x_2;

    (id179x_1) = (id179in_addra.getValueAsLong());
    switch(((long)((id179x_1)<(500l)))) {
      case 0l:
        id179x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id179x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom1", id179x_1) );
        break;
      default:
        id179x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id179out_dataa[(getCycle()+2)%3] = (id179x_2);
  }
  HWRawBits<32> id13out_result;

  { // Node ID: 13 (NodeSlice)
    const HWRawBits<320> &id13in_a = id10out_data;

    id13out_result = (slice<32,32>(id13in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id14out_output;

  { // Node ID: 14 (NodeReinterpret)
    const HWRawBits<32> &id14in_input = id13out_result;

    id14out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id14in_input));
  }
  { // Node ID: 109 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id109in_a = id179out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id109in_b = id14out_output;

    id109out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id109in_a,id109in_b));
  }
  { // Node ID: 118 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id118in_a = id108out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id118in_b = id109out_result[getCycle()%8];

    id118out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id118in_a,id118in_b));
  }
  HWOffsetFix<16,1,UNSIGNED> id226out_output;

  { // Node ID: 226 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id226in_input = id267out_output[getCycle()%2];

    id226out_output = (cast_bits2fixed<16,1,UNSIGNED>((cast_fixed2bits(id226in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id227out_output;

  { // Node ID: 227 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id227in_input = id267out_output[getCycle()%2];

    id227out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id227in_input))));
  }
  { // Node ID: 229 (NodeAdd)
    const HWOffsetFix<16,1,UNSIGNED> &id229in_a = id226out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id229in_b = id227out_output;

    id229out_result[(getCycle()+1)%2] = (add_fixed<20,1,UNSIGNED,TONEAREVEN>(id229in_a,id229in_b));
  }
  HWOffsetFix<16,5,UNSIGNED> id228out_output;

  { // Node ID: 228 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id228in_input = id309out_output[getCycle()%2];

    id228out_output = (cast_bits2fixed<16,5,UNSIGNED>((cast_fixed2bits(id228in_input))));
  }
  { // Node ID: 230 (NodeAdd)
    const HWOffsetFix<20,1,UNSIGNED> &id230in_a = id229out_result[getCycle()%2];
    const HWOffsetFix<16,5,UNSIGNED> &id230in_b = id228out_output;

    id230out_result[(getCycle()+1)%2] = (add_fixed<21,1,UNSIGNED,TONEAREVEN>(id230in_a,id230in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id231out_o;

  { // Node ID: 231 (NodeCast)
    const HWOffsetFix<21,1,UNSIGNED> &id231in_i = id230out_result[getCycle()%2];

    id231out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id231in_i));
  }
  { // Node ID: 65 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id65in_a = id231out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id65in_b = id4out_count;

    id65out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id65in_a,id65in_b));
  }
  HWOffsetFix<9,0,UNSIGNED> id66out_o;

  { // Node ID: 66 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id66in_i = id65out_result[getCycle()%2];

    id66out_o = (cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(id66in_i));
  }
  { // Node ID: 180 (NodeMappedRom)
    const HWOffsetFix<9,0,UNSIGNED> &id180in_addra = id66out_o;

    long id180x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id180x_2;

    (id180x_1) = (id180in_addra.getValueAsLong());
    switch(((long)((id180x_1)<(500l)))) {
      case 0l:
        id180x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id180x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom2", id180x_1) );
        break;
      default:
        id180x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id180out_dataa[(getCycle()+2)%3] = (id180x_2);
  }
  HWRawBits<32> id15out_result;

  { // Node ID: 15 (NodeSlice)
    const HWRawBits<320> &id15in_a = id10out_data;

    id15out_result = (slice<64,32>(id15in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id16out_output;

  { // Node ID: 16 (NodeReinterpret)
    const HWRawBits<32> &id16in_input = id15out_result;

    id16out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id16in_input));
  }
  { // Node ID: 110 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id110in_a = id180out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id110in_b = id16out_output;

    id110out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id110in_a,id110in_b));
  }
  HWOffsetFix<16,1,UNSIGNED> id232out_output;

  { // Node ID: 232 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id232in_input = id267out_output[getCycle()%2];

    id232out_output = (cast_bits2fixed<16,1,UNSIGNED>((cast_fixed2bits(id232in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id233out_output;

  { // Node ID: 233 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id233in_input = id267out_output[getCycle()%2];

    id233out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id233in_input))));
  }
  { // Node ID: 235 (NodeAdd)
    const HWOffsetFix<16,1,UNSIGNED> &id235in_a = id232out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id235in_b = id233out_output;

    id235out_result[(getCycle()+1)%2] = (add_fixed<20,1,UNSIGNED,TONEAREVEN>(id235in_a,id235in_b));
  }
  HWOffsetFix<16,5,UNSIGNED> id234out_output;

  { // Node ID: 234 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id234in_input = id309out_output[getCycle()%2];

    id234out_output = (cast_bits2fixed<16,5,UNSIGNED>((cast_fixed2bits(id234in_input))));
  }
  { // Node ID: 236 (NodeAdd)
    const HWOffsetFix<20,1,UNSIGNED> &id236in_a = id235out_result[getCycle()%2];
    const HWOffsetFix<16,5,UNSIGNED> &id236in_b = id234out_output;

    id236out_result[(getCycle()+1)%2] = (add_fixed<21,1,UNSIGNED,TONEAREVEN>(id236in_a,id236in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id237out_o;

  { // Node ID: 237 (NodeCast)
    const HWOffsetFix<21,1,UNSIGNED> &id237in_i = id236out_result[getCycle()%2];

    id237out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id237in_i));
  }
  { // Node ID: 69 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id69in_a = id237out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id69in_b = id4out_count;

    id69out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id69in_a,id69in_b));
  }
  HWOffsetFix<9,0,UNSIGNED> id70out_o;

  { // Node ID: 70 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id70in_i = id69out_result[getCycle()%2];

    id70out_o = (cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(id70in_i));
  }
  { // Node ID: 181 (NodeMappedRom)
    const HWOffsetFix<9,0,UNSIGNED> &id181in_addra = id70out_o;

    long id181x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id181x_2;

    (id181x_1) = (id181in_addra.getValueAsLong());
    switch(((long)((id181x_1)<(500l)))) {
      case 0l:
        id181x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id181x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom3", id181x_1) );
        break;
      default:
        id181x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id181out_dataa[(getCycle()+2)%3] = (id181x_2);
  }
  HWRawBits<32> id17out_result;

  { // Node ID: 17 (NodeSlice)
    const HWRawBits<320> &id17in_a = id10out_data;

    id17out_result = (slice<96,32>(id17in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id18out_output;

  { // Node ID: 18 (NodeReinterpret)
    const HWRawBits<32> &id18in_input = id17out_result;

    id18out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id18in_input));
  }
  { // Node ID: 111 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id111in_a = id181out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id111in_b = id18out_output;

    id111out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id111in_a,id111in_b));
  }
  { // Node ID: 119 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id119in_a = id110out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id119in_b = id111out_result[getCycle()%8];

    id119out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id119in_a,id119in_b));
  }
  { // Node ID: 123 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id123in_a = id118out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id123in_b = id119out_result[getCycle()%2];

    id123out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id123in_a,id123in_b));
  }
  HWOffsetFix<16,1,UNSIGNED> id238out_output;

  { // Node ID: 238 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id238in_input = id267out_output[getCycle()%2];

    id238out_output = (cast_bits2fixed<16,1,UNSIGNED>((cast_fixed2bits(id238in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id239out_output;

  { // Node ID: 239 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id239in_input = id267out_output[getCycle()%2];

    id239out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id239in_input))));
  }
  { // Node ID: 241 (NodeAdd)
    const HWOffsetFix<16,1,UNSIGNED> &id241in_a = id238out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id241in_b = id239out_output;

    id241out_result[(getCycle()+1)%2] = (add_fixed<20,1,UNSIGNED,TONEAREVEN>(id241in_a,id241in_b));
  }
  HWOffsetFix<16,5,UNSIGNED> id240out_output;

  { // Node ID: 240 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id240in_input = id309out_output[getCycle()%2];

    id240out_output = (cast_bits2fixed<16,5,UNSIGNED>((cast_fixed2bits(id240in_input))));
  }
  { // Node ID: 242 (NodeAdd)
    const HWOffsetFix<20,1,UNSIGNED> &id242in_a = id241out_result[getCycle()%2];
    const HWOffsetFix<16,5,UNSIGNED> &id242in_b = id240out_output;

    id242out_result[(getCycle()+1)%2] = (add_fixed<21,1,UNSIGNED,TONEAREVEN>(id242in_a,id242in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id243out_o;

  { // Node ID: 243 (NodeCast)
    const HWOffsetFix<21,1,UNSIGNED> &id243in_i = id242out_result[getCycle()%2];

    id243out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id243in_i));
  }
  { // Node ID: 73 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id73in_a = id243out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id73in_b = id4out_count;

    id73out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id73in_a,id73in_b));
  }
  HWOffsetFix<9,0,UNSIGNED> id74out_o;

  { // Node ID: 74 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id74in_i = id73out_result[getCycle()%2];

    id74out_o = (cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(id74in_i));
  }
  { // Node ID: 182 (NodeMappedRom)
    const HWOffsetFix<9,0,UNSIGNED> &id182in_addra = id74out_o;

    long id182x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id182x_2;

    (id182x_1) = (id182in_addra.getValueAsLong());
    switch(((long)((id182x_1)<(500l)))) {
      case 0l:
        id182x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id182x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom4", id182x_1) );
        break;
      default:
        id182x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id182out_dataa[(getCycle()+2)%3] = (id182x_2);
  }
  HWRawBits<32> id19out_result;

  { // Node ID: 19 (NodeSlice)
    const HWRawBits<320> &id19in_a = id10out_data;

    id19out_result = (slice<128,32>(id19in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id20out_output;

  { // Node ID: 20 (NodeReinterpret)
    const HWRawBits<32> &id20in_input = id19out_result;

    id20out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id20in_input));
  }
  { // Node ID: 112 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id112in_a = id182out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id112in_b = id20out_output;

    id112out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id112in_a,id112in_b));
  }
  HWOffsetFix<16,1,UNSIGNED> id244out_output;

  { // Node ID: 244 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id244in_input = id267out_output[getCycle()%2];

    id244out_output = (cast_bits2fixed<16,1,UNSIGNED>((cast_fixed2bits(id244in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id245out_output;

  { // Node ID: 245 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id245in_input = id267out_output[getCycle()%2];

    id245out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id245in_input))));
  }
  { // Node ID: 247 (NodeAdd)
    const HWOffsetFix<16,1,UNSIGNED> &id247in_a = id244out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id247in_b = id245out_output;

    id247out_result[(getCycle()+1)%2] = (add_fixed<20,1,UNSIGNED,TONEAREVEN>(id247in_a,id247in_b));
  }
  HWOffsetFix<16,5,UNSIGNED> id246out_output;

  { // Node ID: 246 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id246in_input = id309out_output[getCycle()%2];

    id246out_output = (cast_bits2fixed<16,5,UNSIGNED>((cast_fixed2bits(id246in_input))));
  }
  { // Node ID: 248 (NodeAdd)
    const HWOffsetFix<20,1,UNSIGNED> &id248in_a = id247out_result[getCycle()%2];
    const HWOffsetFix<16,5,UNSIGNED> &id248in_b = id246out_output;

    id248out_result[(getCycle()+1)%2] = (add_fixed<21,1,UNSIGNED,TONEAREVEN>(id248in_a,id248in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id249out_o;

  { // Node ID: 249 (NodeCast)
    const HWOffsetFix<21,1,UNSIGNED> &id249in_i = id248out_result[getCycle()%2];

    id249out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id249in_i));
  }
  { // Node ID: 77 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id77in_a = id249out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id77in_b = id4out_count;

    id77out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id77in_a,id77in_b));
  }
  HWOffsetFix<9,0,UNSIGNED> id78out_o;

  { // Node ID: 78 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id78in_i = id77out_result[getCycle()%2];

    id78out_o = (cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(id78in_i));
  }
  { // Node ID: 183 (NodeMappedRom)
    const HWOffsetFix<9,0,UNSIGNED> &id183in_addra = id78out_o;

    long id183x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id183x_2;

    (id183x_1) = (id183in_addra.getValueAsLong());
    switch(((long)((id183x_1)<(500l)))) {
      case 0l:
        id183x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id183x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom5", id183x_1) );
        break;
      default:
        id183x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id183out_dataa[(getCycle()+2)%3] = (id183x_2);
  }
  HWRawBits<32> id21out_result;

  { // Node ID: 21 (NodeSlice)
    const HWRawBits<320> &id21in_a = id10out_data;

    id21out_result = (slice<160,32>(id21in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id22out_output;

  { // Node ID: 22 (NodeReinterpret)
    const HWRawBits<32> &id22in_input = id21out_result;

    id22out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id22in_input));
  }
  { // Node ID: 113 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id113in_a = id183out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id113in_b = id22out_output;

    id113out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id113in_a,id113in_b));
  }
  { // Node ID: 120 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id120in_a = id112out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id120in_b = id113out_result[getCycle()%8];

    id120out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id120in_a,id120in_b));
  }
  HWOffsetFix<16,1,UNSIGNED> id250out_output;

  { // Node ID: 250 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id250in_input = id267out_output[getCycle()%2];

    id250out_output = (cast_bits2fixed<16,1,UNSIGNED>((cast_fixed2bits(id250in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id251out_output;

  { // Node ID: 251 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id251in_input = id267out_output[getCycle()%2];

    id251out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id251in_input))));
  }
  { // Node ID: 253 (NodeAdd)
    const HWOffsetFix<16,1,UNSIGNED> &id253in_a = id250out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id253in_b = id251out_output;

    id253out_result[(getCycle()+1)%2] = (add_fixed<20,1,UNSIGNED,TONEAREVEN>(id253in_a,id253in_b));
  }
  HWOffsetFix<16,5,UNSIGNED> id252out_output;

  { // Node ID: 252 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id252in_input = id309out_output[getCycle()%2];

    id252out_output = (cast_bits2fixed<16,5,UNSIGNED>((cast_fixed2bits(id252in_input))));
  }
  { // Node ID: 254 (NodeAdd)
    const HWOffsetFix<20,1,UNSIGNED> &id254in_a = id253out_result[getCycle()%2];
    const HWOffsetFix<16,5,UNSIGNED> &id254in_b = id252out_output;

    id254out_result[(getCycle()+1)%2] = (add_fixed<21,1,UNSIGNED,TONEAREVEN>(id254in_a,id254in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id255out_o;

  { // Node ID: 255 (NodeCast)
    const HWOffsetFix<21,1,UNSIGNED> &id255in_i = id254out_result[getCycle()%2];

    id255out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id255in_i));
  }
  { // Node ID: 81 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id81in_a = id255out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id81in_b = id4out_count;

    id81out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id81in_a,id81in_b));
  }
  HWOffsetFix<9,0,UNSIGNED> id82out_o;

  { // Node ID: 82 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id82in_i = id81out_result[getCycle()%2];

    id82out_o = (cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(id82in_i));
  }
  { // Node ID: 184 (NodeMappedRom)
    const HWOffsetFix<9,0,UNSIGNED> &id184in_addra = id82out_o;

    long id184x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id184x_2;

    (id184x_1) = (id184in_addra.getValueAsLong());
    switch(((long)((id184x_1)<(500l)))) {
      case 0l:
        id184x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id184x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom6", id184x_1) );
        break;
      default:
        id184x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id184out_dataa[(getCycle()+2)%3] = (id184x_2);
  }
  HWRawBits<32> id23out_result;

  { // Node ID: 23 (NodeSlice)
    const HWRawBits<320> &id23in_a = id10out_data;

    id23out_result = (slice<192,32>(id23in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id24out_output;

  { // Node ID: 24 (NodeReinterpret)
    const HWRawBits<32> &id24in_input = id23out_result;

    id24out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id24in_input));
  }
  { // Node ID: 114 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id114in_a = id184out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id114in_b = id24out_output;

    id114out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id114in_a,id114in_b));
  }
  HWOffsetFix<16,1,UNSIGNED> id256out_output;

  { // Node ID: 256 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id256in_input = id267out_output[getCycle()%2];

    id256out_output = (cast_bits2fixed<16,1,UNSIGNED>((cast_fixed2bits(id256in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id257out_output;

  { // Node ID: 257 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id257in_input = id267out_output[getCycle()%2];

    id257out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id257in_input))));
  }
  { // Node ID: 259 (NodeAdd)
    const HWOffsetFix<16,1,UNSIGNED> &id259in_a = id256out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id259in_b = id257out_output;

    id259out_result[(getCycle()+1)%2] = (add_fixed<20,1,UNSIGNED,TONEAREVEN>(id259in_a,id259in_b));
  }
  HWOffsetFix<16,5,UNSIGNED> id258out_output;

  { // Node ID: 258 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id258in_input = id309out_output[getCycle()%2];

    id258out_output = (cast_bits2fixed<16,5,UNSIGNED>((cast_fixed2bits(id258in_input))));
  }
  { // Node ID: 260 (NodeAdd)
    const HWOffsetFix<20,1,UNSIGNED> &id260in_a = id259out_result[getCycle()%2];
    const HWOffsetFix<16,5,UNSIGNED> &id260in_b = id258out_output;

    id260out_result[(getCycle()+1)%2] = (add_fixed<21,1,UNSIGNED,TONEAREVEN>(id260in_a,id260in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id261out_o;

  { // Node ID: 261 (NodeCast)
    const HWOffsetFix<21,1,UNSIGNED> &id261in_i = id260out_result[getCycle()%2];

    id261out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id261in_i));
  }
  { // Node ID: 85 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id85in_a = id261out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id85in_b = id4out_count;

    id85out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id85in_a,id85in_b));
  }
  HWOffsetFix<9,0,UNSIGNED> id86out_o;

  { // Node ID: 86 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id86in_i = id85out_result[getCycle()%2];

    id86out_o = (cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(id86in_i));
  }
  { // Node ID: 185 (NodeMappedRom)
    const HWOffsetFix<9,0,UNSIGNED> &id185in_addra = id86out_o;

    long id185x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id185x_2;

    (id185x_1) = (id185in_addra.getValueAsLong());
    switch(((long)((id185x_1)<(500l)))) {
      case 0l:
        id185x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id185x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom7", id185x_1) );
        break;
      default:
        id185x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id185out_dataa[(getCycle()+2)%3] = (id185x_2);
  }
  HWRawBits<32> id25out_result;

  { // Node ID: 25 (NodeSlice)
    const HWRawBits<320> &id25in_a = id10out_data;

    id25out_result = (slice<224,32>(id25in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id26out_output;

  { // Node ID: 26 (NodeReinterpret)
    const HWRawBits<32> &id26in_input = id25out_result;

    id26out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id26in_input));
  }
  { // Node ID: 115 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id115in_a = id185out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id115in_b = id26out_output;

    id115out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id115in_a,id115in_b));
  }
  { // Node ID: 121 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id121in_a = id114out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id121in_b = id115out_result[getCycle()%8];

    id121out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id121in_a,id121in_b));
  }
  { // Node ID: 124 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id124in_a = id120out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id124in_b = id121out_result[getCycle()%2];

    id124out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id124in_a,id124in_b));
  }
  { // Node ID: 125 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id125in_a = id123out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id125in_b = id124out_result[getCycle()%2];

    id125out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id125in_a,id125in_b));
  }
  { // Node ID: 126 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id126in_a = id297out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id126in_b = id125out_result[getCycle()%2];

    id126out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id126in_a,id126in_b));
  }
  { // Node ID: 127 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id127in_a = id298out_output[getCycle()%9];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id127in_b = id126out_result[getCycle()%2];

    id127out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id127in_a,id127in_b));
  }
  HWOffsetFix<4,0,UNSIGNED> id129out_o;

  { // Node ID: 129 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id129in_i = id309out_output[getCycle()%2];

    id129out_o = (cast_fixed2fixed<4,0,UNSIGNED,TONEAREVEN>(id129in_i));
  }
  { // Node ID: 301 (NodeFIFO)
    const HWOffsetFix<4,0,UNSIGNED> &id301in_input = id129out_o;

    id301out_output[(getCycle()+14)%15] = id301in_input;
  }
  HWOffsetFix<4,0,UNSIGNED> id165out_o;

  { // Node ID: 165 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id165in_i = id309out_output[getCycle()%2];

    id165out_o = (cast_fixed2fixed<4,0,UNSIGNED,TONEAREVEN>(id165in_i));
  }
  { // Node ID: 302 (NodeFIFO)
    const HWOffsetFix<4,0,UNSIGNED> &id302in_input = id165out_o;

    id302out_output[(getCycle()+14)%15] = id302in_input;
  }
  { // Node ID: 177 (NodeMappedRom)
    const HWOffsetFix<4,0,UNSIGNED> &id177in_addra = id301out_output[getCycle()%15];
    const HWOffsetFix<4,0,UNSIGNED> &id177in_addrb = id302out_output[getCycle()%15];

    long id177x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id177x_2;
    long id177x_3;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id177x_4;

    (id177x_1) = (id177in_addra.getValueAsLong());
    switch(((long)((id177x_1)<(10l)))) {
      case 0l:
        id177x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id177x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("fully_connected_bias", id177x_1) );
        break;
      default:
        id177x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id177out_dataa[(getCycle()+2)%3] = (id177x_2);
    (id177x_3) = (id177in_addrb.getValueAsLong());
    switch(((long)((id177x_3)<(10l)))) {
      case 0l:
        id177x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id177x_4 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("fully_connected_bias", id177x_3) );
        break;
      default:
        id177x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id177out_datab[(getCycle()+2)%3] = (id177x_4);
  }
  { // Node ID: 130 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id130in_a = id127out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id130in_b = id177out_dataa[getCycle()%3];

    id130out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id130in_a,id130in_b));
  }
  { // Node ID: 131 (NodeCast)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id131in_i = id130out_result[getCycle()%2];

    id131out_o[(getCycle()+6)%7] = (cast_fixed2float<8,24>(id131in_i));
  }
  { // Node ID: 315 (NodeConstantRawBits)
  }
  { // Node ID: 133 (NodeLt)
    const HWFloat<8,24> &id133in_a = id131out_o[getCycle()%7];
    const HWFloat<8,24> &id133in_b = id315out_value;

    id133out_result[(getCycle()+2)%3] = (lt_float(id133in_a,id133in_b));
  }
  { // Node ID: 303 (NodeFIFO)
    const HWFloat<8,24> &id303in_input = id131out_o[getCycle()%7];

    id303out_output[(getCycle()+2)%3] = id303in_input;
  }
  { // Node ID: 314 (NodeConstantRawBits)
  }
  { // Node ID: 135 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id135in_sel = id133out_result[getCycle()%3];
    const HWFloat<8,24> &id135in_option0 = id303out_output[getCycle()%3];
    const HWFloat<8,24> &id135in_option1 = id314out_value;

    HWFloat<8,24> id135x_1;

    switch((id135in_sel.getValueAsLong())) {
      case 0l:
        id135x_1 = id135in_option0;
        break;
      case 1l:
        id135x_1 = id135in_option1;
        break;
      default:
        id135x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id135out_result[(getCycle()+1)%2] = (id135x_1);
  }
  if ( (getFillLevel() >= (31l)) && (getFlushLevel() < (31l)|| !isFlushingActive() ))
  { // Node ID: 140 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id140in_output_control = id139out_result;
    const HWFloat<8,24> &id140in_data = id135out_result[getCycle()%2];

    bool id140x_1;

    (id140x_1) = ((id140in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(31l))&(isFlushingActive()))));
    if((id140x_1)) {
      writeOutput(m_y01, id140in_data);
    }
  }
  { // Node ID: 173 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id174out_result;

  { // Node ID: 174 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id174in_a = id173out_io_y11_force_disabled;

    id174out_result = (not_fixed(id174in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id175out_result;

  { // Node ID: 175 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id175in_a = id263out_output[getCycle()%24];
    const HWOffsetFix<1,0,UNSIGNED> &id175in_b = id174out_result;

    HWOffsetFix<1,0,UNSIGNED> id175x_1;

    (id175x_1) = (and_fixed(id175in_a,id175in_b));
    id175out_result = (id175x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id164out_output;

  { // Node ID: 164 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id164in_input = id163out_result[getCycle()%2];

    id164out_output = id164in_input;
  }
  { // Node ID: 201 (NodeConstantRawBits)
  }
  { // Node ID: 143 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id143in_sel = id266out_output[getCycle()%4];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id143in_option0 = id164out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id143in_option1 = id201out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id143x_1;

    switch((id143in_sel.getValueAsLong())) {
      case 0l:
        id143x_1 = id143in_option0;
        break;
      case 1l:
        id143x_1 = id143in_option1;
        break;
      default:
        id143x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id143out_result[(getCycle()+1)%2] = (id143x_1);
  }
  { // Node ID: 307 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id307in_input = id143out_result[getCycle()%2];

    id307out_output[(getCycle()+8)%9] = id307in_input;
  }
  { // Node ID: 31 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id32out_result;

  { // Node ID: 32 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id32in_a = id31out_io_x11_force_disabled;

    id32out_result = (not_fixed(id32in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id33out_result;

  { // Node ID: 33 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id33in_a = id6out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id33in_b = id32out_result;

    HWOffsetFix<1,0,UNSIGNED> id33x_1;

    (id33x_1) = (and_fixed(id33in_a,id33in_b));
    id33out_result = (id33x_1);
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 34 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id34in_enable = id33out_result;

    (id34st_read_next_cycle) = ((id34in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_x11, id34st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<32> id51out_result;

  { // Node ID: 51 (NodeSlice)
    const HWRawBits<320> &id51in_a = id34out_data;

    id51out_result = (slice<256,32>(id51in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id52out_output;

  { // Node ID: 52 (NodeReinterpret)
    const HWRawBits<32> &id52in_input = id51out_result;

    id52out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id52in_input));
  }
  { // Node ID: 152 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id152in_a = id186out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id152in_b = id52out_output;

    id152out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id152in_a,id152in_b));
  }
  HWRawBits<32> id53out_result;

  { // Node ID: 53 (NodeSlice)
    const HWRawBits<320> &id53in_a = id34out_data;

    id53out_result = (slice<288,32>(id53in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id54out_output;

  { // Node ID: 54 (NodeReinterpret)
    const HWRawBits<32> &id54in_input = id53out_result;

    id54out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id54in_input));
  }
  { // Node ID: 153 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id153in_a = id187out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id153in_b = id54out_output;

    id153out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id153in_a,id153in_b));
  }
  { // Node ID: 158 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id158in_a = id152out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id158in_b = id153out_result[getCycle()%8];

    id158out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id158in_a,id158in_b));
  }
  { // Node ID: 306 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id306in_input = id158out_result[getCycle()%2];

    id306out_output[(getCycle()+2)%3] = id306in_input;
  }
  HWRawBits<32> id35out_result;

  { // Node ID: 35 (NodeSlice)
    const HWRawBits<320> &id35in_a = id34out_data;

    id35out_result = (slice<0,32>(id35in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id36out_output;

  { // Node ID: 36 (NodeReinterpret)
    const HWRawBits<32> &id36in_input = id35out_result;

    id36out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id36in_input));
  }
  { // Node ID: 144 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id144in_a = id178out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id144in_b = id36out_output;

    id144out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id144in_a,id144in_b));
  }
  HWRawBits<32> id37out_result;

  { // Node ID: 37 (NodeSlice)
    const HWRawBits<320> &id37in_a = id34out_data;

    id37out_result = (slice<32,32>(id37in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id38out_output;

  { // Node ID: 38 (NodeReinterpret)
    const HWRawBits<32> &id38in_input = id37out_result;

    id38out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id38in_input));
  }
  { // Node ID: 145 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id145in_a = id179out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id145in_b = id38out_output;

    id145out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id145in_a,id145in_b));
  }
  { // Node ID: 154 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id154in_a = id144out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id154in_b = id145out_result[getCycle()%8];

    id154out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id154in_a,id154in_b));
  }
  HWRawBits<32> id39out_result;

  { // Node ID: 39 (NodeSlice)
    const HWRawBits<320> &id39in_a = id34out_data;

    id39out_result = (slice<64,32>(id39in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id40out_output;

  { // Node ID: 40 (NodeReinterpret)
    const HWRawBits<32> &id40in_input = id39out_result;

    id40out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id40in_input));
  }
  { // Node ID: 146 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id146in_a = id180out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id146in_b = id40out_output;

    id146out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id146in_a,id146in_b));
  }
  HWRawBits<32> id41out_result;

  { // Node ID: 41 (NodeSlice)
    const HWRawBits<320> &id41in_a = id34out_data;

    id41out_result = (slice<96,32>(id41in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id42out_output;

  { // Node ID: 42 (NodeReinterpret)
    const HWRawBits<32> &id42in_input = id41out_result;

    id42out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id42in_input));
  }
  { // Node ID: 147 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id147in_a = id181out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id147in_b = id42out_output;

    id147out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id147in_a,id147in_b));
  }
  { // Node ID: 155 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id155in_a = id146out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id155in_b = id147out_result[getCycle()%8];

    id155out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id155in_a,id155in_b));
  }
  { // Node ID: 159 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id159in_a = id154out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id159in_b = id155out_result[getCycle()%2];

    id159out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id159in_a,id159in_b));
  }
  HWRawBits<32> id43out_result;

  { // Node ID: 43 (NodeSlice)
    const HWRawBits<320> &id43in_a = id34out_data;

    id43out_result = (slice<128,32>(id43in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id44out_output;

  { // Node ID: 44 (NodeReinterpret)
    const HWRawBits<32> &id44in_input = id43out_result;

    id44out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id44in_input));
  }
  { // Node ID: 148 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id148in_a = id182out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id148in_b = id44out_output;

    id148out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id148in_a,id148in_b));
  }
  HWRawBits<32> id45out_result;

  { // Node ID: 45 (NodeSlice)
    const HWRawBits<320> &id45in_a = id34out_data;

    id45out_result = (slice<160,32>(id45in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id46out_output;

  { // Node ID: 46 (NodeReinterpret)
    const HWRawBits<32> &id46in_input = id45out_result;

    id46out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id46in_input));
  }
  { // Node ID: 149 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id149in_a = id183out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id149in_b = id46out_output;

    id149out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id149in_a,id149in_b));
  }
  { // Node ID: 156 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id156in_a = id148out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id156in_b = id149out_result[getCycle()%8];

    id156out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id156in_a,id156in_b));
  }
  HWRawBits<32> id47out_result;

  { // Node ID: 47 (NodeSlice)
    const HWRawBits<320> &id47in_a = id34out_data;

    id47out_result = (slice<192,32>(id47in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id48out_output;

  { // Node ID: 48 (NodeReinterpret)
    const HWRawBits<32> &id48in_input = id47out_result;

    id48out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id48in_input));
  }
  { // Node ID: 150 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id150in_a = id184out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id150in_b = id48out_output;

    id150out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id150in_a,id150in_b));
  }
  HWRawBits<32> id49out_result;

  { // Node ID: 49 (NodeSlice)
    const HWRawBits<320> &id49in_a = id34out_data;

    id49out_result = (slice<224,32>(id49in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id50out_output;

  { // Node ID: 50 (NodeReinterpret)
    const HWRawBits<32> &id50in_input = id49out_result;

    id50out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id50in_input));
  }
  { // Node ID: 151 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id151in_a = id185out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id151in_b = id50out_output;

    id151out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id151in_a,id151in_b));
  }
  { // Node ID: 157 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id157in_a = id150out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id157in_b = id151out_result[getCycle()%8];

    id157out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id157in_a,id157in_b));
  }
  { // Node ID: 160 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id160in_a = id156out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id160in_b = id157out_result[getCycle()%2];

    id160out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id160in_a,id160in_b));
  }
  { // Node ID: 161 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id161in_a = id159out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id161in_b = id160out_result[getCycle()%2];

    id161out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id161in_a,id161in_b));
  }
  { // Node ID: 162 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id162in_a = id306out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id162in_b = id161out_result[getCycle()%2];

    id162out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id162in_a,id162in_b));
  }
  { // Node ID: 163 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id163in_a = id307out_output[getCycle()%9];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id163in_b = id162out_result[getCycle()%2];

    id163out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id163in_a,id163in_b));
  }
  { // Node ID: 166 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id166in_a = id163out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id166in_b = id177out_datab[getCycle()%3];

    id166out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id166in_a,id166in_b));
  }
  { // Node ID: 167 (NodeCast)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id167in_i = id166out_result[getCycle()%2];

    id167out_o[(getCycle()+6)%7] = (cast_fixed2float<8,24>(id167in_i));
  }
  { // Node ID: 313 (NodeConstantRawBits)
  }
  { // Node ID: 169 (NodeLt)
    const HWFloat<8,24> &id169in_a = id167out_o[getCycle()%7];
    const HWFloat<8,24> &id169in_b = id313out_value;

    id169out_result[(getCycle()+2)%3] = (lt_float(id169in_a,id169in_b));
  }
  { // Node ID: 308 (NodeFIFO)
    const HWFloat<8,24> &id308in_input = id167out_o[getCycle()%7];

    id308out_output[(getCycle()+2)%3] = id308in_input;
  }
  { // Node ID: 312 (NodeConstantRawBits)
  }
  { // Node ID: 171 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id171in_sel = id169out_result[getCycle()%3];
    const HWFloat<8,24> &id171in_option0 = id308out_output[getCycle()%3];
    const HWFloat<8,24> &id171in_option1 = id312out_value;

    HWFloat<8,24> id171x_1;

    switch((id171in_sel.getValueAsLong())) {
      case 0l:
        id171x_1 = id171in_option0;
        break;
      case 1l:
        id171x_1 = id171in_option1;
        break;
      default:
        id171x_1 = (c_hw_flt_8_24_undef);
        break;
    }
    id171out_result[(getCycle()+1)%2] = (id171x_1);
  }
  if ( (getFillLevel() >= (31l)) && (getFlushLevel() < (31l)|| !isFlushingActive() ))
  { // Node ID: 176 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id176in_output_control = id175out_result;
    const HWFloat<8,24> &id176in_data = id171out_result[getCycle()%2];

    bool id176x_1;

    (id176x_1) = ((id176in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(31l))&(isFlushingActive()))));
    if((id176x_1)) {
      writeOutput(m_y11, id176in_data);
    }
  }
  { // Node ID: 192 (NodeConstantRawBits)
  }
  { // Node ID: 311 (NodeConstantRawBits)
  }
  { // Node ID: 189 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 190 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id190in_enable = id311out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id190in_max = id189out_value;

    HWOffsetFix<49,0,UNSIGNED> id190x_1;
    HWOffsetFix<1,0,UNSIGNED> id190x_2;
    HWOffsetFix<1,0,UNSIGNED> id190x_3;
    HWOffsetFix<49,0,UNSIGNED> id190x_4t_1e_1;

    id190out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id190st_count)));
    (id190x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id190st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id190x_2) = (gte_fixed((id190x_1),id190in_max));
    (id190x_3) = (and_fixed((id190x_2),id190in_enable));
    id190out_wrap = (id190x_3);
    if((id190in_enable.getValueAsBool())) {
      if(((id190x_3).getValueAsBool())) {
        (id190st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id190x_4t_1e_1) = (id190x_1);
        (id190st_count) = (id190x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id191out_output;

  { // Node ID: 191 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id191in_input = id190out_count;

    id191out_output = id191in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 193 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id193in_load = id192out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id193in_data = id191out_output;

    bool id193x_1;

    (id193x_1) = ((id193in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id193x_1)) {
      setMappedRegValue("current_run_cycle_count", id193in_data);
    }
  }
  { // Node ID: 310 (NodeConstantRawBits)
  }
  { // Node ID: 195 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 196 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id196in_enable = id310out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id196in_max = id195out_value;

    HWOffsetFix<49,0,UNSIGNED> id196x_1;
    HWOffsetFix<1,0,UNSIGNED> id196x_2;
    HWOffsetFix<1,0,UNSIGNED> id196x_3;
    HWOffsetFix<49,0,UNSIGNED> id196x_4t_1e_1;

    id196out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id196st_count)));
    (id196x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id196st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id196x_2) = (gte_fixed((id196x_1),id196in_max));
    (id196x_3) = (and_fixed((id196x_2),id196in_enable));
    id196out_wrap = (id196x_3);
    if((id196in_enable.getValueAsBool())) {
      if(((id196x_3).getValueAsBool())) {
        (id196st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id196x_4t_1e_1) = (id196x_1);
        (id196st_count) = (id196x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 198 (NodeInputMappedReg)
  }
  { // Node ID: 199 (NodeEq)
    const HWOffsetFix<48,0,UNSIGNED> &id199in_a = id196out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id199in_b = id198out_run_cycle_count;

    id199out_result[(getCycle()+1)%2] = (eq_fixed(id199in_a,id199in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 197 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id197in_start = id199out_result[getCycle()%2];

    if((id197in_start.getValueAsBool())) {
      startFlushing();
    }
  }
};

};
