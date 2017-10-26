#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "maxpooling10.h"

namespace maxcompilersim {

void maxpooling10::execute0() {
  { // Node ID: 159 (NodeConstantRawBits)
  }
  { // Node ID: 158 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (658l)))
  { // Node ID: 2 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id2in_enable = id159out_value;
    const HWOffsetFix<33,0,UNSIGNED> &id2in_max = id158out_value;

    HWOffsetFix<33,0,UNSIGNED> id2x_1;
    HWOffsetFix<1,0,UNSIGNED> id2x_2;
    HWOffsetFix<1,0,UNSIGNED> id2x_3;
    HWOffsetFix<33,0,UNSIGNED> id2x_4t_1e_1;

    id2out_count = (cast_fixed2fixed<32,0,UNSIGNED,TRUNCATE>((id2st_count)));
    (id2x_1) = (add_fixed<33,0,UNSIGNED,TRUNCATE>((id2st_count),(c_hw_fix_33_0_uns_bits_2)));
    (id2x_2) = (gte_fixed((id2x_1),id2in_max));
    (id2x_3) = (and_fixed((id2x_2),id2in_enable));
    id2out_wrap = (id2x_3);
    if((id2in_enable.getValueAsBool())) {
      if(((id2x_3).getValueAsBool())) {
        (id2st_count) = (c_hw_fix_33_0_uns_bits_1);
      }
      else {
        (id2x_4t_1e_1) = (id2x_1);
        (id2st_count) = (id2x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 157 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (658l)))
  { // Node ID: 4 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id4in_enable = id2out_wrap;
    const HWOffsetFix<33,0,UNSIGNED> &id4in_max = id157out_value;

    HWOffsetFix<33,0,UNSIGNED> id4x_1;
    HWOffsetFix<1,0,UNSIGNED> id4x_2;
    HWOffsetFix<1,0,UNSIGNED> id4x_3;
    HWOffsetFix<33,0,UNSIGNED> id4x_4t_1e_1;

    id4out_count = (cast_fixed2fixed<32,0,UNSIGNED,TRUNCATE>((id4st_count)));
    (id4x_1) = (add_fixed<33,0,UNSIGNED,TRUNCATE>((id4st_count),(c_hw_fix_33_0_uns_bits_2)));
    (id4x_2) = (gte_fixed((id4x_1),id4in_max));
    (id4x_3) = (and_fixed((id4x_2),id4in_enable));
    id4out_wrap = (id4x_3);
    if((id4in_enable.getValueAsBool())) {
      if(((id4x_3).getValueAsBool())) {
        (id4st_count) = (c_hw_fix_33_0_uns_bits_1);
      }
      else {
        (id4x_4t_1e_1) = (id4x_1);
        (id4st_count) = (id4x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 156 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (658l)))
  { // Node ID: 6 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id6in_enable = id4out_wrap;
    const HWOffsetFix<33,0,UNSIGNED> &id6in_max = id156out_value;

    HWOffsetFix<33,0,UNSIGNED> id6x_1;
    HWOffsetFix<1,0,UNSIGNED> id6x_2;
    HWOffsetFix<1,0,UNSIGNED> id6x_3;
    HWOffsetFix<33,0,UNSIGNED> id6x_4t_1e_1;

    id6out_count = (cast_fixed2fixed<32,0,UNSIGNED,TRUNCATE>((id6st_count)));
    (id6x_1) = (add_fixed<33,0,UNSIGNED,TRUNCATE>((id6st_count),(c_hw_fix_33_0_uns_bits_2)));
    (id6x_2) = (gte_fixed((id6x_1),id6in_max));
    (id6x_3) = (and_fixed((id6x_2),id6in_enable));
    id6out_wrap = (id6x_3);
    if((id6in_enable.getValueAsBool())) {
      if(((id6x_3).getValueAsBool())) {
        (id6st_count) = (c_hw_fix_33_0_uns_bits_1);
      }
      else {
        (id6x_4t_1e_1) = (id6x_1);
        (id6st_count) = (id6x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 155 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (658l)))
  { // Node ID: 8 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id8in_enable = id6out_wrap;
    const HWOffsetFix<33,0,UNSIGNED> &id8in_max = id155out_value;

    HWOffsetFix<33,0,UNSIGNED> id8x_1;
    HWOffsetFix<1,0,UNSIGNED> id8x_2;
    HWOffsetFix<1,0,UNSIGNED> id8x_3;
    HWOffsetFix<33,0,UNSIGNED> id8x_4t_1e_1;

    id8out_count = (cast_fixed2fixed<32,0,UNSIGNED,TRUNCATE>((id8st_count)));
    (id8x_1) = (add_fixed<33,0,UNSIGNED,TRUNCATE>((id8st_count),(c_hw_fix_33_0_uns_bits_2)));
    (id8x_2) = (gte_fixed((id8x_1),id8in_max));
    (id8x_3) = (and_fixed((id8x_2),id8in_enable));
    id8out_wrap = (id8x_3);
    if((id8in_enable.getValueAsBool())) {
      if(((id8x_3).getValueAsBool())) {
        (id8st_count) = (c_hw_fix_33_0_uns_bits_1);
      }
      else {
        (id8x_4t_1e_1) = (id8x_1);
        (id8st_count) = (id8x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 154 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (658l)))
  { // Node ID: 10 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id10in_enable = id8out_wrap;
    const HWOffsetFix<33,0,UNSIGNED> &id10in_max = id154out_value;

    HWOffsetFix<33,0,UNSIGNED> id10x_1;
    HWOffsetFix<1,0,UNSIGNED> id10x_2;
    HWOffsetFix<1,0,UNSIGNED> id10x_3;
    HWOffsetFix<33,0,UNSIGNED> id10x_4t_1e_1;

    id10out_count = (cast_fixed2fixed<32,0,UNSIGNED,TRUNCATE>((id10st_count)));
    (id10x_1) = (add_fixed<33,0,UNSIGNED,TRUNCATE>((id10st_count),(c_hw_fix_33_0_uns_bits_2)));
    (id10x_2) = (gte_fixed((id10x_1),id10in_max));
    (id10x_3) = (and_fixed((id10x_2),id10in_enable));
    id10out_wrap = (id10x_3);
    if((id10in_enable.getValueAsBool())) {
      if(((id10x_3).getValueAsBool())) {
        (id10st_count) = (c_hw_fix_33_0_uns_bits_1);
      }
      else {
        (id10x_4t_1e_1) = (id10x_1);
        (id10st_count) = (id10x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 153 (NodeConstantRawBits)
  }
  { // Node ID: 12 (NodeGt)
    const HWOffsetFix<32,0,UNSIGNED> &id12in_a = id10out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id12in_b = id153out_value;

    id12out_result[(getCycle()+1)%2] = (gt_fixed(id12in_a,id12in_b));
  }
  { // Node ID: 152 (NodeConstantRawBits)
  }
  { // Node ID: 14 (NodeGt)
    const HWOffsetFix<32,0,UNSIGNED> &id14in_a = id6out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id14in_b = id152out_value;

    id14out_result[(getCycle()+1)%2] = (gt_fixed(id14in_a,id14in_b));
  }
  { // Node ID: 15 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15in_a = id12out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15in_b = id14out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15x_1;

    (id15x_1) = (and_fixed(id15in_a,id15in_b));
    id15out_result[(getCycle()+1)%2] = (id15x_1);
  }
  { // Node ID: 151 (NodeConstantRawBits)
  }
  { // Node ID: 17 (NodeLt)
    const HWOffsetFix<32,0,UNSIGNED> &id17in_a = id10out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id17in_b = id151out_value;

    id17out_result[(getCycle()+1)%2] = (lt_fixed(id17in_a,id17in_b));
  }
  { // Node ID: 106 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id106in_input = id17out_result[getCycle()%2];

    id106out_output[(getCycle()+1)%2] = id106in_input;
  }
  { // Node ID: 18 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18in_a = id15out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18in_b = id106out_output[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18x_1;

    (id18x_1) = (and_fixed(id18in_a,id18in_b));
    id18out_result[(getCycle()+1)%2] = (id18x_1);
  }
  { // Node ID: 150 (NodeConstantRawBits)
  }
  { // Node ID: 20 (NodeLt)
    const HWOffsetFix<32,0,UNSIGNED> &id20in_a = id6out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id20in_b = id150out_value;

    id20out_result[(getCycle()+1)%2] = (lt_fixed(id20in_a,id20in_b));
  }
  { // Node ID: 107 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id107in_input = id20out_result[getCycle()%2];

    id107out_output[(getCycle()+2)%3] = id107in_input;
  }
  { // Node ID: 21 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21in_a = id18out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21in_b = id107out_output[getCycle()%3];

    HWOffsetFix<1,0,UNSIGNED> id21x_1;

    (id21x_1) = (and_fixed(id21in_a,id21in_b));
    id21out_result[(getCycle()+1)%2] = (id21x_1);
  }
  { // Node ID: 149 (NodeConstantRawBits)
  }
  { // Node ID: 23 (NodeEq)
    const HWOffsetFix<32,0,UNSIGNED> &id23in_a = id8out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id23in_b = id149out_value;

    id23out_result[(getCycle()+1)%2] = (eq_fixed(id23in_a,id23in_b));
  }
  { // Node ID: 108 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id108in_input = id23out_result[getCycle()%2];

    id108out_output[(getCycle()+3)%4] = id108in_input;
  }
  { // Node ID: 24 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24in_a = id21out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24in_b = id108out_output[getCycle()%4];

    HWOffsetFix<1,0,UNSIGNED> id24x_1;

    (id24x_1) = (and_fixed(id24in_a,id24in_b));
    id24out_result[(getCycle()+1)%2] = (id24x_1);
  }
  { // Node ID: 148 (NodeConstantRawBits)
  }
  { // Node ID: 26 (NodeEq)
    const HWOffsetFix<32,0,UNSIGNED> &id26in_a = id4out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id26in_b = id148out_value;

    id26out_result[(getCycle()+1)%2] = (eq_fixed(id26in_a,id26in_b));
  }
  { // Node ID: 109 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id109in_input = id26out_result[getCycle()%2];

    id109out_output[(getCycle()+4)%5] = id109in_input;
  }
  { // Node ID: 27 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id27in_a = id24out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id27in_b = id109out_output[getCycle()%5];

    HWOffsetFix<1,0,UNSIGNED> id27x_1;

    (id27x_1) = (and_fixed(id27in_a,id27in_b));
    id27out_result[(getCycle()+1)%2] = (id27x_1);
  }
  { // Node ID: 56 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id57out_result;

  { // Node ID: 57 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id57in_a = id56out_io_y01_force_disabled;

    id57out_result = (not_fixed(id57in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id58out_result;

  { // Node ID: 58 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id58in_a = id27out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id58in_b = id57out_result;

    HWOffsetFix<1,0,UNSIGNED> id58x_1;

    (id58x_1) = (and_fixed(id58in_a,id58in_b));
    id58out_result = (id58x_1);
  }
  { // Node ID: 28 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id29out_result;

  { // Node ID: 29 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id29in_a = id28out_io_x01_force_disabled;

    id29out_result = (not_fixed(id29in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 30 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id30in_enable = id29out_result;

    (id30st_read_next_cycle) = ((id30in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_x01, id30st_read_next_cycle.getValueAsBool());
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id32out_output;

  { // Node ID: 32 (NodeReinterpret)
    const HWRawBits<32> &id32in_input = id30out_data;

    id32out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id32in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id38out_output;

  { // Node ID: 38 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id38in_input = id32out_output;

    id38out_output = id38in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id36out_output;

  { // Node ID: 36 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id36in_input = id32out_output;

    id36out_output = id36in_input;
  }
  { // Node ID: 110 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id110in_input = id32out_output;

    id110out_output[(getCycle()+50)%51] = id110in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id34out_output;

  { // Node ID: 34 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id34in_input = id32out_output;

    id34out_output = id34in_input;
  }
  { // Node ID: 40 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id40in_a = id110out_output[getCycle()%51];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id40in_b = id34out_output;

    id40out_result[(getCycle()+1)%2] = (gt_fixed(id40in_a,id40in_b));
  }
  { // Node ID: 41 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id41in_a = id110out_output[getCycle()%51];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id41in_b = id34out_output;

    id41out_result[(getCycle()+1)%2] = (eq_fixed(id41in_a,id41in_b));
  }
  { // Node ID: 42 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id42in_a = id40out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id42in_b = id41out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id42x_1;

    (id42x_1) = (or_fixed(id42in_a,id42in_b));
    id42out_result[(getCycle()+1)%2] = (id42x_1);
  }
  { // Node ID: 112 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id112in_input = id34out_output;

    id112out_output[(getCycle()+2)%3] = id112in_input;
  }
  { // Node ID: 136 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id136in_input = id110out_output[getCycle()%51];

    id136out_output[(getCycle()+2)%3] = id136in_input;
  }
  { // Node ID: 43 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id43in_sel = id42out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id43in_option0 = id112out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id43in_option1 = id136out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id43x_1;

    switch((id43in_sel.getValueAsLong())) {
      case 0l:
        id43x_1 = id43in_option0;
        break;
      case 1l:
        id43x_1 = id43in_option1;
        break;
      default:
        id43x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id43out_result[(getCycle()+1)%2] = (id43x_1);
  }
  { // Node ID: 114 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id114in_input = id43out_result[getCycle()%2];

    id114out_output[(getCycle()+547)%548] = id114in_input;
  }
  { // Node ID: 44 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id44in_a = id36out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id44in_b = id114out_output[getCycle()%548];

    id44out_result[(getCycle()+1)%2] = (gt_fixed(id44in_a,id44in_b));
  }
  { // Node ID: 45 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id45in_a = id36out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id45in_b = id114out_output[getCycle()%548];

    id45out_result[(getCycle()+1)%2] = (eq_fixed(id45in_a,id45in_b));
  }
  { // Node ID: 46 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id46in_a = id44out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id46in_b = id45out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id46x_1;

    (id46x_1) = (or_fixed(id46in_a,id46in_b));
    id46out_result[(getCycle()+1)%2] = (id46x_1);
  }
  { // Node ID: 137 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id137in_input = id114out_output[getCycle()%548];

    id137out_output[(getCycle()+2)%3] = id137in_input;
  }
  { // Node ID: 117 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id117in_input = id36out_output;

    id117out_output[(getCycle()+2)%3] = id117in_input;
  }
  { // Node ID: 47 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id47in_sel = id46out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id47in_option0 = id137out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id47in_option1 = id117out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id47x_1;

    switch((id47in_sel.getValueAsLong())) {
      case 0l:
        id47x_1 = id47in_option0;
        break;
      case 1l:
        id47x_1 = id47in_option1;
        break;
      default:
        id47x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id47out_result[(getCycle()+1)%2] = (id47x_1);
  }
  { // Node ID: 118 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id118in_input = id47out_result[getCycle()%2];

    id118out_output[(getCycle()+47)%48] = id118in_input;
  }
  { // Node ID: 48 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id48in_a = id38out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id48in_b = id118out_output[getCycle()%48];

    id48out_result[(getCycle()+1)%2] = (gt_fixed(id48in_a,id48in_b));
  }
  { // Node ID: 49 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id49in_a = id38out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id49in_b = id118out_output[getCycle()%48];

    id49out_result[(getCycle()+1)%2] = (eq_fixed(id49in_a,id49in_b));
  }
  { // Node ID: 50 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id50in_a = id48out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id50in_b = id49out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id50x_1;

    (id50x_1) = (or_fixed(id50in_a,id50in_b));
    id50out_result[(getCycle()+1)%2] = (id50x_1);
  }
  { // Node ID: 138 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id138in_input = id118out_output[getCycle()%48];

    id138out_output[(getCycle()+2)%3] = id138in_input;
  }
  { // Node ID: 121 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id121in_input = id38out_output;

    id121out_output[(getCycle()+2)%3] = id121in_input;
  }
  { // Node ID: 51 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id51in_sel = id50out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id51in_option0 = id138out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id51in_option1 = id121out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id51x_1;

    switch((id51in_sel.getValueAsLong())) {
      case 0l:
        id51x_1 = id51in_option0;
        break;
      case 1l:
        id51x_1 = id51in_option1;
        break;
      default:
        id51x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id51out_result[(getCycle()+1)%2] = (id51x_1);
  }
  { // Node ID: 147 (NodeConstantRawBits)
  }
  { // Node ID: 53 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id53in_a = id51out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id53in_b = id147out_value;

    id53out_result[(getCycle()+1)%2] = (lt_fixed(id53in_a,id53in_b));
  }
  { // Node ID: 122 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id122in_input = id51out_result[getCycle()%2];

    id122out_output[(getCycle()+1)%2] = id122in_input;
  }
  { // Node ID: 146 (NodeConstantRawBits)
  }
  { // Node ID: 55 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id55in_sel = id53out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id55in_option0 = id122out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id55in_option1 = id146out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id55x_1;

    switch((id55in_sel.getValueAsLong())) {
      case 0l:
        id55x_1 = id55in_option0;
        break;
      case 1l:
        id55x_1 = id55in_option1;
        break;
      default:
        id55x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id55out_result[(getCycle()+1)%2] = (id55x_1);
  }
  HWRawBits<32> id60out_output;

  { // Node ID: 60 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id60in_input = id55out_result[getCycle()%2];

    id60out_output = (cast_fixed2bits(id60in_input));
  }
  if ( (getFillLevel() >= (664l)) && (getFlushLevel() < (664l)|| !isFlushingActive() ))
  { // Node ID: 59 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id59in_output_control = id58out_result;
    const HWRawBits<32> &id59in_data = id60out_output;

    bool id59x_1;

    (id59x_1) = ((id59in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(664l))&(isFlushingActive()))));
    if((id59x_1)) {
      writeOutput(m_y01, id59in_data);
    }
  }
  { // Node ID: 89 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id90out_result;

  { // Node ID: 90 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id90in_a = id89out_io_y11_force_disabled;

    id90out_result = (not_fixed(id90in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id91out_result;

  { // Node ID: 91 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id91in_a = id27out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id91in_b = id90out_result;

    HWOffsetFix<1,0,UNSIGNED> id91x_1;

    (id91x_1) = (and_fixed(id91in_a,id91in_b));
    id91out_result = (id91x_1);
  }
  { // Node ID: 61 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id62out_result;

  { // Node ID: 62 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id62in_a = id61out_io_x11_force_disabled;

    id62out_result = (not_fixed(id62in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 63 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id63in_enable = id62out_result;

    (id63st_read_next_cycle) = ((id63in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_x11, id63st_read_next_cycle.getValueAsBool());
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id65out_output;

  { // Node ID: 65 (NodeReinterpret)
    const HWRawBits<32> &id65in_input = id63out_data;

    id65out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id65in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id71out_output;

  { // Node ID: 71 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id71in_input = id65out_output;

    id71out_output = id71in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id69out_output;

  { // Node ID: 69 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id69in_input = id65out_output;

    id69out_output = id69in_input;
  }
  { // Node ID: 123 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id123in_input = id65out_output;

    id123out_output[(getCycle()+50)%51] = id123in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id67out_output;

  { // Node ID: 67 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id67in_input = id65out_output;

    id67out_output = id67in_input;
  }
  { // Node ID: 73 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id73in_a = id123out_output[getCycle()%51];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id73in_b = id67out_output;

    id73out_result[(getCycle()+1)%2] = (gt_fixed(id73in_a,id73in_b));
  }
  { // Node ID: 74 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id74in_a = id123out_output[getCycle()%51];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id74in_b = id67out_output;

    id74out_result[(getCycle()+1)%2] = (eq_fixed(id74in_a,id74in_b));
  }
  { // Node ID: 75 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id75in_a = id73out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id75in_b = id74out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id75x_1;

    (id75x_1) = (or_fixed(id75in_a,id75in_b));
    id75out_result[(getCycle()+1)%2] = (id75x_1);
  }
  { // Node ID: 125 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id125in_input = id67out_output;

    id125out_output[(getCycle()+2)%3] = id125in_input;
  }
  { // Node ID: 139 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id139in_input = id123out_output[getCycle()%51];

    id139out_output[(getCycle()+2)%3] = id139in_input;
  }
  { // Node ID: 76 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id76in_sel = id75out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id76in_option0 = id125out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id76in_option1 = id139out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id76x_1;

    switch((id76in_sel.getValueAsLong())) {
      case 0l:
        id76x_1 = id76in_option0;
        break;
      case 1l:
        id76x_1 = id76in_option1;
        break;
      default:
        id76x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id76out_result[(getCycle()+1)%2] = (id76x_1);
  }
  { // Node ID: 127 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id127in_input = id76out_result[getCycle()%2];

    id127out_output[(getCycle()+547)%548] = id127in_input;
  }
  { // Node ID: 77 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id77in_a = id69out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id77in_b = id127out_output[getCycle()%548];

    id77out_result[(getCycle()+1)%2] = (gt_fixed(id77in_a,id77in_b));
  }
  { // Node ID: 78 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id78in_a = id69out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id78in_b = id127out_output[getCycle()%548];

    id78out_result[(getCycle()+1)%2] = (eq_fixed(id78in_a,id78in_b));
  }
  { // Node ID: 79 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id79in_a = id77out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id79in_b = id78out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id79x_1;

    (id79x_1) = (or_fixed(id79in_a,id79in_b));
    id79out_result[(getCycle()+1)%2] = (id79x_1);
  }
  { // Node ID: 140 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id140in_input = id127out_output[getCycle()%548];

    id140out_output[(getCycle()+2)%3] = id140in_input;
  }
  { // Node ID: 130 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id130in_input = id69out_output;

    id130out_output[(getCycle()+2)%3] = id130in_input;
  }
  { // Node ID: 80 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id80in_sel = id79out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id80in_option0 = id140out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id80in_option1 = id130out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id80x_1;

    switch((id80in_sel.getValueAsLong())) {
      case 0l:
        id80x_1 = id80in_option0;
        break;
      case 1l:
        id80x_1 = id80in_option1;
        break;
      default:
        id80x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id80out_result[(getCycle()+1)%2] = (id80x_1);
  }
  { // Node ID: 131 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id131in_input = id80out_result[getCycle()%2];

    id131out_output[(getCycle()+47)%48] = id131in_input;
  }
  { // Node ID: 81 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id81in_a = id71out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id81in_b = id131out_output[getCycle()%48];

    id81out_result[(getCycle()+1)%2] = (gt_fixed(id81in_a,id81in_b));
  }
  { // Node ID: 82 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id82in_a = id71out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id82in_b = id131out_output[getCycle()%48];

    id82out_result[(getCycle()+1)%2] = (eq_fixed(id82in_a,id82in_b));
  }
  { // Node ID: 83 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id83in_a = id81out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id83in_b = id82out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id83x_1;

    (id83x_1) = (or_fixed(id83in_a,id83in_b));
    id83out_result[(getCycle()+1)%2] = (id83x_1);
  }
  { // Node ID: 141 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id141in_input = id131out_output[getCycle()%48];

    id141out_output[(getCycle()+2)%3] = id141in_input;
  }
  { // Node ID: 134 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id134in_input = id71out_output;

    id134out_output[(getCycle()+2)%3] = id134in_input;
  }
  { // Node ID: 84 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id84in_sel = id83out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id84in_option0 = id141out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id84in_option1 = id134out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id84x_1;

    switch((id84in_sel.getValueAsLong())) {
      case 0l:
        id84x_1 = id84in_option0;
        break;
      case 1l:
        id84x_1 = id84in_option1;
        break;
      default:
        id84x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id84out_result[(getCycle()+1)%2] = (id84x_1);
  }
  { // Node ID: 145 (NodeConstantRawBits)
  }
  { // Node ID: 86 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id86in_a = id84out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id86in_b = id145out_value;

    id86out_result[(getCycle()+1)%2] = (lt_fixed(id86in_a,id86in_b));
  }
  { // Node ID: 135 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id135in_input = id84out_result[getCycle()%2];

    id135out_output[(getCycle()+1)%2] = id135in_input;
  }
  { // Node ID: 144 (NodeConstantRawBits)
  }
  { // Node ID: 88 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id88in_sel = id86out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id88in_option0 = id135out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id88in_option1 = id144out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id88x_1;

    switch((id88in_sel.getValueAsLong())) {
      case 0l:
        id88x_1 = id88in_option0;
        break;
      case 1l:
        id88x_1 = id88in_option1;
        break;
      default:
        id88x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id88out_result[(getCycle()+1)%2] = (id88x_1);
  }
  HWRawBits<32> id93out_output;

  { // Node ID: 93 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id93in_input = id88out_result[getCycle()%2];

    id93out_output = (cast_fixed2bits(id93in_input));
  }
  if ( (getFillLevel() >= (664l)) && (getFlushLevel() < (664l)|| !isFlushingActive() ))
  { // Node ID: 92 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id92in_output_control = id91out_result;
    const HWRawBits<32> &id92in_data = id93out_output;

    bool id92x_1;

    (id92x_1) = ((id92in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(664l))&(isFlushingActive()))));
    if((id92x_1)) {
      writeOutput(m_y11, id92in_data);
    }
  }
  { // Node ID: 98 (NodeConstantRawBits)
  }
  { // Node ID: 143 (NodeConstantRawBits)
  }
  { // Node ID: 95 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 96 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id96in_enable = id143out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id96in_max = id95out_value;

    HWOffsetFix<49,0,UNSIGNED> id96x_1;
    HWOffsetFix<1,0,UNSIGNED> id96x_2;
    HWOffsetFix<1,0,UNSIGNED> id96x_3;
    HWOffsetFix<49,0,UNSIGNED> id96x_4t_1e_1;

    id96out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id96st_count)));
    (id96x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id96st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id96x_2) = (gte_fixed((id96x_1),id96in_max));
    (id96x_3) = (and_fixed((id96x_2),id96in_enable));
    id96out_wrap = (id96x_3);
    if((id96in_enable.getValueAsBool())) {
      if(((id96x_3).getValueAsBool())) {
        (id96st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id96x_4t_1e_1) = (id96x_1);
        (id96st_count) = (id96x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id97out_output;

  { // Node ID: 97 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id97in_input = id96out_count;

    id97out_output = id97in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 99 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id99in_load = id98out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id99in_data = id97out_output;

    bool id99x_1;

    (id99x_1) = ((id99in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id99x_1)) {
      setMappedRegValue("current_run_cycle_count", id99in_data);
    }
  }
  { // Node ID: 142 (NodeConstantRawBits)
  }
  { // Node ID: 101 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 102 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id102in_enable = id142out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id102in_max = id101out_value;

    HWOffsetFix<49,0,UNSIGNED> id102x_1;
    HWOffsetFix<1,0,UNSIGNED> id102x_2;
    HWOffsetFix<1,0,UNSIGNED> id102x_3;
    HWOffsetFix<49,0,UNSIGNED> id102x_4t_1e_1;

    id102out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id102st_count)));
    (id102x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id102st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id102x_2) = (gte_fixed((id102x_1),id102in_max));
    (id102x_3) = (and_fixed((id102x_2),id102in_enable));
    id102out_wrap = (id102x_3);
    if((id102in_enable.getValueAsBool())) {
      if(((id102x_3).getValueAsBool())) {
        (id102st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id102x_4t_1e_1) = (id102x_1);
        (id102st_count) = (id102x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 104 (NodeInputMappedReg)
  }
  { // Node ID: 105 (NodeEq)
    const HWOffsetFix<48,0,UNSIGNED> &id105in_a = id102out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id105in_b = id104out_run_cycle_count;

    id105out_result[(getCycle()+1)%2] = (eq_fixed(id105in_a,id105in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 103 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id103in_start = id105out_result[getCycle()%2];

    if((id103in_start.getValueAsBool())) {
      startFlushing();
    }
  }
};

};
