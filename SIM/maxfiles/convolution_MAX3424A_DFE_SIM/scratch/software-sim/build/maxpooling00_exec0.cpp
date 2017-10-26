#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "maxpooling00.h"

namespace maxcompilersim {

void maxpooling00::execute0() {
  { // Node ID: 519 (NodeConstantRawBits)
  }
  { // Node ID: 518 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (124l)))
  { // Node ID: 2 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id2in_enable = id519out_value;
    const HWOffsetFix<33,0,UNSIGNED> &id2in_max = id518out_value;

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
  { // Node ID: 517 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (124l)))
  { // Node ID: 4 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id4in_enable = id2out_wrap;
    const HWOffsetFix<33,0,UNSIGNED> &id4in_max = id517out_value;

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
  { // Node ID: 516 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (124l)))
  { // Node ID: 6 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id6in_enable = id4out_wrap;
    const HWOffsetFix<33,0,UNSIGNED> &id6in_max = id516out_value;

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
  { // Node ID: 515 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (124l)))
  { // Node ID: 8 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id8in_enable = id6out_wrap;
    const HWOffsetFix<33,0,UNSIGNED> &id8in_max = id515out_value;

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
  { // Node ID: 514 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (124l)))
  { // Node ID: 10 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id10in_enable = id8out_wrap;
    const HWOffsetFix<33,0,UNSIGNED> &id10in_max = id514out_value;

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
  { // Node ID: 513 (NodeConstantRawBits)
  }
  { // Node ID: 12 (NodeGt)
    const HWOffsetFix<32,0,UNSIGNED> &id12in_a = id10out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id12in_b = id513out_value;

    id12out_result[(getCycle()+1)%2] = (gt_fixed(id12in_a,id12in_b));
  }
  { // Node ID: 512 (NodeConstantRawBits)
  }
  { // Node ID: 14 (NodeGt)
    const HWOffsetFix<32,0,UNSIGNED> &id14in_a = id6out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id14in_b = id512out_value;

    id14out_result[(getCycle()+1)%2] = (gt_fixed(id14in_a,id14in_b));
  }
  { // Node ID: 15 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id15in_a = id12out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id15in_b = id14out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id15x_1;

    (id15x_1) = (and_fixed(id15in_a,id15in_b));
    id15out_result[(getCycle()+1)%2] = (id15x_1);
  }
  { // Node ID: 511 (NodeConstantRawBits)
  }
  { // Node ID: 17 (NodeLt)
    const HWOffsetFix<32,0,UNSIGNED> &id17in_a = id10out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id17in_b = id511out_value;

    id17out_result[(getCycle()+1)%2] = (lt_fixed(id17in_a,id17in_b));
  }
  { // Node ID: 322 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id322in_input = id17out_result[getCycle()%2];

    id322out_output[(getCycle()+1)%2] = id322in_input;
  }
  { // Node ID: 18 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id18in_a = id15out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id18in_b = id322out_output[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id18x_1;

    (id18x_1) = (and_fixed(id18in_a,id18in_b));
    id18out_result[(getCycle()+1)%2] = (id18x_1);
  }
  { // Node ID: 510 (NodeConstantRawBits)
  }
  { // Node ID: 20 (NodeLt)
    const HWOffsetFix<32,0,UNSIGNED> &id20in_a = id6out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id20in_b = id510out_value;

    id20out_result[(getCycle()+1)%2] = (lt_fixed(id20in_a,id20in_b));
  }
  { // Node ID: 323 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id323in_input = id20out_result[getCycle()%2];

    id323out_output[(getCycle()+2)%3] = id323in_input;
  }
  { // Node ID: 21 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id21in_a = id18out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id21in_b = id323out_output[getCycle()%3];

    HWOffsetFix<1,0,UNSIGNED> id21x_1;

    (id21x_1) = (and_fixed(id21in_a,id21in_b));
    id21out_result[(getCycle()+1)%2] = (id21x_1);
  }
  { // Node ID: 509 (NodeConstantRawBits)
  }
  { // Node ID: 23 (NodeEq)
    const HWOffsetFix<32,0,UNSIGNED> &id23in_a = id8out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id23in_b = id509out_value;

    id23out_result[(getCycle()+1)%2] = (eq_fixed(id23in_a,id23in_b));
  }
  { // Node ID: 324 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id324in_input = id23out_result[getCycle()%2];

    id324out_output[(getCycle()+3)%4] = id324in_input;
  }
  { // Node ID: 24 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id24in_a = id21out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id24in_b = id324out_output[getCycle()%4];

    HWOffsetFix<1,0,UNSIGNED> id24x_1;

    (id24x_1) = (and_fixed(id24in_a,id24in_b));
    id24out_result[(getCycle()+1)%2] = (id24x_1);
  }
  { // Node ID: 508 (NodeConstantRawBits)
  }
  { // Node ID: 26 (NodeEq)
    const HWOffsetFix<32,0,UNSIGNED> &id26in_a = id4out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id26in_b = id508out_value;

    id26out_result[(getCycle()+1)%2] = (eq_fixed(id26in_a,id26in_b));
  }
  { // Node ID: 325 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id325in_input = id26out_result[getCycle()%2];

    id325out_output[(getCycle()+4)%5] = id325in_input;
  }
  { // Node ID: 27 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id27in_a = id24out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id27in_b = id325out_output[getCycle()%5];

    HWOffsetFix<1,0,UNSIGNED> id27x_1;

    (id27x_1) = (and_fixed(id27in_a,id27in_b));
    id27out_result[(getCycle()+1)%2] = (id27x_1);
  }
  { // Node ID: 156 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id157out_result;

  { // Node ID: 157 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id157in_a = id156out_io_y01_force_disabled;

    id157out_result = (not_fixed(id157in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id158out_result;

  { // Node ID: 158 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id158in_a = id27out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id158in_b = id157out_result;

    HWOffsetFix<1,0,UNSIGNED> id158x_1;

    (id158x_1) = (and_fixed(id158in_a,id158in_b));
    id158out_result = (id158x_1);
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
  HWRawBits<32> id39out_result;

  { // Node ID: 39 (NodeSlice)
    const HWRawBits<160> &id39in_a = id30out_data;

    id39out_result = (slice<128,32>(id39in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id40out_output;

  { // Node ID: 40 (NodeReinterpret)
    const HWRawBits<32> &id40in_input = id39out_result;

    id40out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id40in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id70out_output;

  { // Node ID: 70 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id70in_input = id40out_output;

    id70out_output = id70in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id60out_output;

  { // Node ID: 60 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id60in_input = id40out_output;

    id60out_output = id60in_input;
  }
  { // Node ID: 326 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id326in_input = id40out_output;

    id326out_output[(getCycle()+4)%5] = id326in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id50out_output;

  { // Node ID: 50 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id50in_input = id40out_output;

    id50out_output = id50in_input;
  }
  { // Node ID: 140 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id140in_a = id326out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id140in_b = id50out_output;

    id140out_result[(getCycle()+1)%2] = (gt_fixed(id140in_a,id140in_b));
  }
  { // Node ID: 141 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id141in_a = id326out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id141in_b = id50out_output;

    id141out_result[(getCycle()+1)%2] = (eq_fixed(id141in_a,id141in_b));
  }
  { // Node ID: 142 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id142in_a = id140out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id142in_b = id141out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id142x_1;

    (id142x_1) = (or_fixed(id142in_a,id142in_b));
    id142out_result[(getCycle()+1)%2] = (id142x_1);
  }
  { // Node ID: 328 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id328in_input = id50out_output;

    id328out_output[(getCycle()+2)%3] = id328in_input;
  }
  { // Node ID: 456 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id456in_input = id326out_output[getCycle()%5];

    id456out_output[(getCycle()+2)%3] = id456in_input;
  }
  { // Node ID: 143 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id143in_sel = id142out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id143in_option0 = id328out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id143in_option1 = id456out_output[getCycle()%3];

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
  { // Node ID: 330 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id330in_input = id143out_result[getCycle()%2];

    id330out_output[(getCycle()+105)%106] = id330in_input;
  }
  { // Node ID: 144 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id144in_a = id60out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id144in_b = id330out_output[getCycle()%106];

    id144out_result[(getCycle()+1)%2] = (gt_fixed(id144in_a,id144in_b));
  }
  { // Node ID: 145 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id145in_a = id60out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id145in_b = id330out_output[getCycle()%106];

    id145out_result[(getCycle()+1)%2] = (eq_fixed(id145in_a,id145in_b));
  }
  { // Node ID: 146 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id146in_a = id144out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id146in_b = id145out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id146x_1;

    (id146x_1) = (or_fixed(id146in_a,id146in_b));
    id146out_result[(getCycle()+1)%2] = (id146x_1);
  }
  { // Node ID: 457 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id457in_input = id330out_output[getCycle()%106];

    id457out_output[(getCycle()+2)%3] = id457in_input;
  }
  { // Node ID: 333 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id333in_input = id60out_output;

    id333out_output[(getCycle()+2)%3] = id333in_input;
  }
  { // Node ID: 147 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id147in_sel = id146out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id147in_option0 = id457out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id147in_option1 = id333out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id147x_1;

    switch((id147in_sel.getValueAsLong())) {
      case 0l:
        id147x_1 = id147in_option0;
        break;
      case 1l:
        id147x_1 = id147in_option1;
        break;
      default:
        id147x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id147out_result[(getCycle()+1)%2] = (id147x_1);
  }
  { // Node ID: 334 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id334in_input = id147out_result[getCycle()%2];

    id334out_output[(getCycle()+1)%2] = id334in_input;
  }
  { // Node ID: 148 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id148in_a = id70out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id148in_b = id334out_output[getCycle()%2];

    id148out_result[(getCycle()+1)%2] = (gt_fixed(id148in_a,id148in_b));
  }
  { // Node ID: 149 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id149in_a = id70out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id149in_b = id334out_output[getCycle()%2];

    id149out_result[(getCycle()+1)%2] = (eq_fixed(id149in_a,id149in_b));
  }
  { // Node ID: 150 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id150in_a = id148out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id150in_b = id149out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id150x_1;

    (id150x_1) = (or_fixed(id150in_a,id150in_b));
    id150out_result[(getCycle()+1)%2] = (id150x_1);
  }
  { // Node ID: 458 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id458in_input = id334out_output[getCycle()%2];

    id458out_output[(getCycle()+2)%3] = id458in_input;
  }
  { // Node ID: 337 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id337in_input = id70out_output;

    id337out_output[(getCycle()+2)%3] = id337in_input;
  }
  { // Node ID: 151 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id151in_sel = id150out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id151in_option0 = id458out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id151in_option1 = id337out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id151x_1;

    switch((id151in_sel.getValueAsLong())) {
      case 0l:
        id151x_1 = id151in_option0;
        break;
      case 1l:
        id151x_1 = id151in_option1;
        break;
      default:
        id151x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id151out_result[(getCycle()+1)%2] = (id151x_1);
  }
  { // Node ID: 507 (NodeConstantRawBits)
  }
  { // Node ID: 153 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id153in_a = id151out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id153in_b = id507out_value;

    id153out_result[(getCycle()+1)%2] = (lt_fixed(id153in_a,id153in_b));
  }
  { // Node ID: 338 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id338in_input = id151out_result[getCycle()%2];

    id338out_output[(getCycle()+1)%2] = id338in_input;
  }
  { // Node ID: 506 (NodeConstantRawBits)
  }
  { // Node ID: 155 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id155in_sel = id153out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id155in_option0 = id338out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id155in_option1 = id506out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id155x_1;

    switch((id155in_sel.getValueAsLong())) {
      case 0l:
        id155x_1 = id155in_option0;
        break;
      case 1l:
        id155x_1 = id155in_option1;
        break;
      default:
        id155x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id155out_result[(getCycle()+1)%2] = (id155x_1);
  }
  HWRawBits<32> id167out_output;

  { // Node ID: 167 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id167in_input = id155out_result[getCycle()%2];

    id167out_output = (cast_fixed2bits(id167in_input));
  }
  HWRawBits<32> id37out_result;

  { // Node ID: 37 (NodeSlice)
    const HWRawBits<160> &id37in_a = id30out_data;

    id37out_result = (slice<96,32>(id37in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id38out_output;

  { // Node ID: 38 (NodeReinterpret)
    const HWRawBits<32> &id38in_input = id37out_result;

    id38out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id38in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id69out_output;

  { // Node ID: 69 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id69in_input = id38out_output;

    id69out_output = id69in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id59out_output;

  { // Node ID: 59 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id59in_input = id38out_output;

    id59out_output = id59in_input;
  }
  { // Node ID: 339 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id339in_input = id38out_output;

    id339out_output[(getCycle()+4)%5] = id339in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id49out_output;

  { // Node ID: 49 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id49in_input = id38out_output;

    id49out_output = id49in_input;
  }
  { // Node ID: 124 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id124in_a = id339out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id124in_b = id49out_output;

    id124out_result[(getCycle()+1)%2] = (gt_fixed(id124in_a,id124in_b));
  }
  { // Node ID: 125 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id125in_a = id339out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id125in_b = id49out_output;

    id125out_result[(getCycle()+1)%2] = (eq_fixed(id125in_a,id125in_b));
  }
  { // Node ID: 126 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id126in_a = id124out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id126in_b = id125out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id126x_1;

    (id126x_1) = (or_fixed(id126in_a,id126in_b));
    id126out_result[(getCycle()+1)%2] = (id126x_1);
  }
  { // Node ID: 341 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id341in_input = id49out_output;

    id341out_output[(getCycle()+2)%3] = id341in_input;
  }
  { // Node ID: 459 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id459in_input = id339out_output[getCycle()%5];

    id459out_output[(getCycle()+2)%3] = id459in_input;
  }
  { // Node ID: 127 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id127in_sel = id126out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id127in_option0 = id341out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id127in_option1 = id459out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id127x_1;

    switch((id127in_sel.getValueAsLong())) {
      case 0l:
        id127x_1 = id127in_option0;
        break;
      case 1l:
        id127x_1 = id127in_option1;
        break;
      default:
        id127x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id127out_result[(getCycle()+1)%2] = (id127x_1);
  }
  { // Node ID: 343 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id343in_input = id127out_result[getCycle()%2];

    id343out_output[(getCycle()+105)%106] = id343in_input;
  }
  { // Node ID: 128 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id128in_a = id59out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id128in_b = id343out_output[getCycle()%106];

    id128out_result[(getCycle()+1)%2] = (gt_fixed(id128in_a,id128in_b));
  }
  { // Node ID: 129 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id129in_a = id59out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id129in_b = id343out_output[getCycle()%106];

    id129out_result[(getCycle()+1)%2] = (eq_fixed(id129in_a,id129in_b));
  }
  { // Node ID: 130 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id130in_a = id128out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id130in_b = id129out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id130x_1;

    (id130x_1) = (or_fixed(id130in_a,id130in_b));
    id130out_result[(getCycle()+1)%2] = (id130x_1);
  }
  { // Node ID: 460 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id460in_input = id343out_output[getCycle()%106];

    id460out_output[(getCycle()+2)%3] = id460in_input;
  }
  { // Node ID: 346 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id346in_input = id59out_output;

    id346out_output[(getCycle()+2)%3] = id346in_input;
  }
  { // Node ID: 131 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id131in_sel = id130out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id131in_option0 = id460out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id131in_option1 = id346out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id131x_1;

    switch((id131in_sel.getValueAsLong())) {
      case 0l:
        id131x_1 = id131in_option0;
        break;
      case 1l:
        id131x_1 = id131in_option1;
        break;
      default:
        id131x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id131out_result[(getCycle()+1)%2] = (id131x_1);
  }
  { // Node ID: 347 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id347in_input = id131out_result[getCycle()%2];

    id347out_output[(getCycle()+1)%2] = id347in_input;
  }
  { // Node ID: 132 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id132in_a = id69out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id132in_b = id347out_output[getCycle()%2];

    id132out_result[(getCycle()+1)%2] = (gt_fixed(id132in_a,id132in_b));
  }
  { // Node ID: 133 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id133in_a = id69out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id133in_b = id347out_output[getCycle()%2];

    id133out_result[(getCycle()+1)%2] = (eq_fixed(id133in_a,id133in_b));
  }
  { // Node ID: 134 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id134in_a = id132out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id134in_b = id133out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id134x_1;

    (id134x_1) = (or_fixed(id134in_a,id134in_b));
    id134out_result[(getCycle()+1)%2] = (id134x_1);
  }
  { // Node ID: 461 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id461in_input = id347out_output[getCycle()%2];

    id461out_output[(getCycle()+2)%3] = id461in_input;
  }
  { // Node ID: 350 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id350in_input = id69out_output;

    id350out_output[(getCycle()+2)%3] = id350in_input;
  }
  { // Node ID: 135 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id135in_sel = id134out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id135in_option0 = id461out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id135in_option1 = id350out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id135x_1;

    switch((id135in_sel.getValueAsLong())) {
      case 0l:
        id135x_1 = id135in_option0;
        break;
      case 1l:
        id135x_1 = id135in_option1;
        break;
      default:
        id135x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id135out_result[(getCycle()+1)%2] = (id135x_1);
  }
  { // Node ID: 505 (NodeConstantRawBits)
  }
  { // Node ID: 137 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id137in_a = id135out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id137in_b = id505out_value;

    id137out_result[(getCycle()+1)%2] = (lt_fixed(id137in_a,id137in_b));
  }
  { // Node ID: 351 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id351in_input = id135out_result[getCycle()%2];

    id351out_output[(getCycle()+1)%2] = id351in_input;
  }
  { // Node ID: 504 (NodeConstantRawBits)
  }
  { // Node ID: 139 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id139in_sel = id137out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id139in_option0 = id351out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id139in_option1 = id504out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id139x_1;

    switch((id139in_sel.getValueAsLong())) {
      case 0l:
        id139x_1 = id139in_option0;
        break;
      case 1l:
        id139x_1 = id139in_option1;
        break;
      default:
        id139x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id139out_result[(getCycle()+1)%2] = (id139x_1);
  }
  HWRawBits<32> id165out_output;

  { // Node ID: 165 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id165in_input = id139out_result[getCycle()%2];

    id165out_output = (cast_fixed2bits(id165in_input));
  }
  HWRawBits<32> id35out_result;

  { // Node ID: 35 (NodeSlice)
    const HWRawBits<160> &id35in_a = id30out_data;

    id35out_result = (slice<64,32>(id35in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id36out_output;

  { // Node ID: 36 (NodeReinterpret)
    const HWRawBits<32> &id36in_input = id35out_result;

    id36out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id36in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id68out_output;

  { // Node ID: 68 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id68in_input = id36out_output;

    id68out_output = id68in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id58out_output;

  { // Node ID: 58 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id58in_input = id36out_output;

    id58out_output = id58in_input;
  }
  { // Node ID: 352 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id352in_input = id36out_output;

    id352out_output[(getCycle()+4)%5] = id352in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id48out_output;

  { // Node ID: 48 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id48in_input = id36out_output;

    id48out_output = id48in_input;
  }
  { // Node ID: 108 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id108in_a = id352out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id108in_b = id48out_output;

    id108out_result[(getCycle()+1)%2] = (gt_fixed(id108in_a,id108in_b));
  }
  { // Node ID: 109 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id109in_a = id352out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id109in_b = id48out_output;

    id109out_result[(getCycle()+1)%2] = (eq_fixed(id109in_a,id109in_b));
  }
  { // Node ID: 110 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id110in_a = id108out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id110in_b = id109out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id110x_1;

    (id110x_1) = (or_fixed(id110in_a,id110in_b));
    id110out_result[(getCycle()+1)%2] = (id110x_1);
  }
  { // Node ID: 354 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id354in_input = id48out_output;

    id354out_output[(getCycle()+2)%3] = id354in_input;
  }
  { // Node ID: 462 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id462in_input = id352out_output[getCycle()%5];

    id462out_output[(getCycle()+2)%3] = id462in_input;
  }
  { // Node ID: 111 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id111in_sel = id110out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id111in_option0 = id354out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id111in_option1 = id462out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id111x_1;

    switch((id111in_sel.getValueAsLong())) {
      case 0l:
        id111x_1 = id111in_option0;
        break;
      case 1l:
        id111x_1 = id111in_option1;
        break;
      default:
        id111x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id111out_result[(getCycle()+1)%2] = (id111x_1);
  }
  { // Node ID: 356 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id356in_input = id111out_result[getCycle()%2];

    id356out_output[(getCycle()+105)%106] = id356in_input;
  }
  { // Node ID: 112 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id112in_a = id58out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id112in_b = id356out_output[getCycle()%106];

    id112out_result[(getCycle()+1)%2] = (gt_fixed(id112in_a,id112in_b));
  }
  { // Node ID: 113 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id113in_a = id58out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id113in_b = id356out_output[getCycle()%106];

    id113out_result[(getCycle()+1)%2] = (eq_fixed(id113in_a,id113in_b));
  }
  { // Node ID: 114 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id114in_a = id112out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id114in_b = id113out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id114x_1;

    (id114x_1) = (or_fixed(id114in_a,id114in_b));
    id114out_result[(getCycle()+1)%2] = (id114x_1);
  }
  { // Node ID: 463 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id463in_input = id356out_output[getCycle()%106];

    id463out_output[(getCycle()+2)%3] = id463in_input;
  }
  { // Node ID: 359 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id359in_input = id58out_output;

    id359out_output[(getCycle()+2)%3] = id359in_input;
  }
  { // Node ID: 115 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id115in_sel = id114out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id115in_option0 = id463out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id115in_option1 = id359out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id115x_1;

    switch((id115in_sel.getValueAsLong())) {
      case 0l:
        id115x_1 = id115in_option0;
        break;
      case 1l:
        id115x_1 = id115in_option1;
        break;
      default:
        id115x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id115out_result[(getCycle()+1)%2] = (id115x_1);
  }
  { // Node ID: 360 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id360in_input = id115out_result[getCycle()%2];

    id360out_output[(getCycle()+1)%2] = id360in_input;
  }
  { // Node ID: 116 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id116in_a = id68out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id116in_b = id360out_output[getCycle()%2];

    id116out_result[(getCycle()+1)%2] = (gt_fixed(id116in_a,id116in_b));
  }
  { // Node ID: 117 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id117in_a = id68out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id117in_b = id360out_output[getCycle()%2];

    id117out_result[(getCycle()+1)%2] = (eq_fixed(id117in_a,id117in_b));
  }
  { // Node ID: 118 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id118in_a = id116out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id118in_b = id117out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id118x_1;

    (id118x_1) = (or_fixed(id118in_a,id118in_b));
    id118out_result[(getCycle()+1)%2] = (id118x_1);
  }
  { // Node ID: 464 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id464in_input = id360out_output[getCycle()%2];

    id464out_output[(getCycle()+2)%3] = id464in_input;
  }
  { // Node ID: 363 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id363in_input = id68out_output;

    id363out_output[(getCycle()+2)%3] = id363in_input;
  }
  { // Node ID: 119 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id119in_sel = id118out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id119in_option0 = id464out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id119in_option1 = id363out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id119x_1;

    switch((id119in_sel.getValueAsLong())) {
      case 0l:
        id119x_1 = id119in_option0;
        break;
      case 1l:
        id119x_1 = id119in_option1;
        break;
      default:
        id119x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id119out_result[(getCycle()+1)%2] = (id119x_1);
  }
  { // Node ID: 503 (NodeConstantRawBits)
  }
  { // Node ID: 121 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id121in_a = id119out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id121in_b = id503out_value;

    id121out_result[(getCycle()+1)%2] = (lt_fixed(id121in_a,id121in_b));
  }
  { // Node ID: 364 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id364in_input = id119out_result[getCycle()%2];

    id364out_output[(getCycle()+1)%2] = id364in_input;
  }
  { // Node ID: 502 (NodeConstantRawBits)
  }
  { // Node ID: 123 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id123in_sel = id121out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id123in_option0 = id364out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id123in_option1 = id502out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id123x_1;

    switch((id123in_sel.getValueAsLong())) {
      case 0l:
        id123x_1 = id123in_option0;
        break;
      case 1l:
        id123x_1 = id123in_option1;
        break;
      default:
        id123x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id123out_result[(getCycle()+1)%2] = (id123x_1);
  }
  HWRawBits<32> id163out_output;

  { // Node ID: 163 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id163in_input = id123out_result[getCycle()%2];

    id163out_output = (cast_fixed2bits(id163in_input));
  }
  HWRawBits<32> id33out_result;

  { // Node ID: 33 (NodeSlice)
    const HWRawBits<160> &id33in_a = id30out_data;

    id33out_result = (slice<32,32>(id33in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id34out_output;

  { // Node ID: 34 (NodeReinterpret)
    const HWRawBits<32> &id34in_input = id33out_result;

    id34out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id34in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id67out_output;

  { // Node ID: 67 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id67in_input = id34out_output;

    id67out_output = id67in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id57out_output;

  { // Node ID: 57 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id57in_input = id34out_output;

    id57out_output = id57in_input;
  }
  { // Node ID: 365 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id365in_input = id34out_output;

    id365out_output[(getCycle()+4)%5] = id365in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id47out_output;

  { // Node ID: 47 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id47in_input = id34out_output;

    id47out_output = id47in_input;
  }
  { // Node ID: 92 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id92in_a = id365out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id92in_b = id47out_output;

    id92out_result[(getCycle()+1)%2] = (gt_fixed(id92in_a,id92in_b));
  }
  { // Node ID: 93 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id93in_a = id365out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id93in_b = id47out_output;

    id93out_result[(getCycle()+1)%2] = (eq_fixed(id93in_a,id93in_b));
  }
  { // Node ID: 94 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id94in_a = id92out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id94in_b = id93out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id94x_1;

    (id94x_1) = (or_fixed(id94in_a,id94in_b));
    id94out_result[(getCycle()+1)%2] = (id94x_1);
  }
  { // Node ID: 367 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id367in_input = id47out_output;

    id367out_output[(getCycle()+2)%3] = id367in_input;
  }
  { // Node ID: 465 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id465in_input = id365out_output[getCycle()%5];

    id465out_output[(getCycle()+2)%3] = id465in_input;
  }
  { // Node ID: 95 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id95in_sel = id94out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id95in_option0 = id367out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id95in_option1 = id465out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id95x_1;

    switch((id95in_sel.getValueAsLong())) {
      case 0l:
        id95x_1 = id95in_option0;
        break;
      case 1l:
        id95x_1 = id95in_option1;
        break;
      default:
        id95x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id95out_result[(getCycle()+1)%2] = (id95x_1);
  }
  { // Node ID: 369 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id369in_input = id95out_result[getCycle()%2];

    id369out_output[(getCycle()+105)%106] = id369in_input;
  }
  { // Node ID: 96 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id96in_a = id57out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id96in_b = id369out_output[getCycle()%106];

    id96out_result[(getCycle()+1)%2] = (gt_fixed(id96in_a,id96in_b));
  }
  { // Node ID: 97 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id97in_a = id57out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id97in_b = id369out_output[getCycle()%106];

    id97out_result[(getCycle()+1)%2] = (eq_fixed(id97in_a,id97in_b));
  }
  { // Node ID: 98 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id98in_a = id96out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id98in_b = id97out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id98x_1;

    (id98x_1) = (or_fixed(id98in_a,id98in_b));
    id98out_result[(getCycle()+1)%2] = (id98x_1);
  }
  { // Node ID: 466 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id466in_input = id369out_output[getCycle()%106];

    id466out_output[(getCycle()+2)%3] = id466in_input;
  }
  { // Node ID: 372 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id372in_input = id57out_output;

    id372out_output[(getCycle()+2)%3] = id372in_input;
  }
  { // Node ID: 99 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id99in_sel = id98out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id99in_option0 = id466out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id99in_option1 = id372out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id99x_1;

    switch((id99in_sel.getValueAsLong())) {
      case 0l:
        id99x_1 = id99in_option0;
        break;
      case 1l:
        id99x_1 = id99in_option1;
        break;
      default:
        id99x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id99out_result[(getCycle()+1)%2] = (id99x_1);
  }
  { // Node ID: 373 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id373in_input = id99out_result[getCycle()%2];

    id373out_output[(getCycle()+1)%2] = id373in_input;
  }
  { // Node ID: 100 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id100in_a = id67out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id100in_b = id373out_output[getCycle()%2];

    id100out_result[(getCycle()+1)%2] = (gt_fixed(id100in_a,id100in_b));
  }
  { // Node ID: 101 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id101in_a = id67out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id101in_b = id373out_output[getCycle()%2];

    id101out_result[(getCycle()+1)%2] = (eq_fixed(id101in_a,id101in_b));
  }
  { // Node ID: 102 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id102in_a = id100out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id102in_b = id101out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id102x_1;

    (id102x_1) = (or_fixed(id102in_a,id102in_b));
    id102out_result[(getCycle()+1)%2] = (id102x_1);
  }
  { // Node ID: 467 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id467in_input = id373out_output[getCycle()%2];

    id467out_output[(getCycle()+2)%3] = id467in_input;
  }
  { // Node ID: 376 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id376in_input = id67out_output;

    id376out_output[(getCycle()+2)%3] = id376in_input;
  }
  { // Node ID: 103 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id103in_sel = id102out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id103in_option0 = id467out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id103in_option1 = id376out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id103x_1;

    switch((id103in_sel.getValueAsLong())) {
      case 0l:
        id103x_1 = id103in_option0;
        break;
      case 1l:
        id103x_1 = id103in_option1;
        break;
      default:
        id103x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id103out_result[(getCycle()+1)%2] = (id103x_1);
  }
  { // Node ID: 501 (NodeConstantRawBits)
  }
  { // Node ID: 105 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id105in_a = id103out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id105in_b = id501out_value;

    id105out_result[(getCycle()+1)%2] = (lt_fixed(id105in_a,id105in_b));
  }
  { // Node ID: 377 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id377in_input = id103out_result[getCycle()%2];

    id377out_output[(getCycle()+1)%2] = id377in_input;
  }
  { // Node ID: 500 (NodeConstantRawBits)
  }
  { // Node ID: 107 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id107in_sel = id105out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id107in_option0 = id377out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id107in_option1 = id500out_value;

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
  HWRawBits<32> id161out_output;

  { // Node ID: 161 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id161in_input = id107out_result[getCycle()%2];

    id161out_output = (cast_fixed2bits(id161in_input));
  }
  HWRawBits<32> id31out_result;

  { // Node ID: 31 (NodeSlice)
    const HWRawBits<160> &id31in_a = id30out_data;

    id31out_result = (slice<0,32>(id31in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id32out_output;

  { // Node ID: 32 (NodeReinterpret)
    const HWRawBits<32> &id32in_input = id31out_result;

    id32out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id32in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id66out_output;

  { // Node ID: 66 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id66in_input = id32out_output;

    id66out_output = id66in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id56out_output;

  { // Node ID: 56 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id56in_input = id32out_output;

    id56out_output = id56in_input;
  }
  { // Node ID: 378 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id378in_input = id32out_output;

    id378out_output[(getCycle()+4)%5] = id378in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id46out_output;

  { // Node ID: 46 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id46in_input = id32out_output;

    id46out_output = id46in_input;
  }
  { // Node ID: 76 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id76in_a = id378out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id76in_b = id46out_output;

    id76out_result[(getCycle()+1)%2] = (gt_fixed(id76in_a,id76in_b));
  }
  { // Node ID: 77 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id77in_a = id378out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id77in_b = id46out_output;

    id77out_result[(getCycle()+1)%2] = (eq_fixed(id77in_a,id77in_b));
  }
  { // Node ID: 78 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id78in_a = id76out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id78in_b = id77out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id78x_1;

    (id78x_1) = (or_fixed(id78in_a,id78in_b));
    id78out_result[(getCycle()+1)%2] = (id78x_1);
  }
  { // Node ID: 380 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id380in_input = id46out_output;

    id380out_output[(getCycle()+2)%3] = id380in_input;
  }
  { // Node ID: 468 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id468in_input = id378out_output[getCycle()%5];

    id468out_output[(getCycle()+2)%3] = id468in_input;
  }
  { // Node ID: 79 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id79in_sel = id78out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id79in_option0 = id380out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id79in_option1 = id468out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id79x_1;

    switch((id79in_sel.getValueAsLong())) {
      case 0l:
        id79x_1 = id79in_option0;
        break;
      case 1l:
        id79x_1 = id79in_option1;
        break;
      default:
        id79x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id79out_result[(getCycle()+1)%2] = (id79x_1);
  }
  { // Node ID: 382 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id382in_input = id79out_result[getCycle()%2];

    id382out_output[(getCycle()+105)%106] = id382in_input;
  }
  { // Node ID: 80 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id80in_a = id56out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id80in_b = id382out_output[getCycle()%106];

    id80out_result[(getCycle()+1)%2] = (gt_fixed(id80in_a,id80in_b));
  }
  { // Node ID: 81 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id81in_a = id56out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id81in_b = id382out_output[getCycle()%106];

    id81out_result[(getCycle()+1)%2] = (eq_fixed(id81in_a,id81in_b));
  }
  { // Node ID: 82 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id82in_a = id80out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id82in_b = id81out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id82x_1;

    (id82x_1) = (or_fixed(id82in_a,id82in_b));
    id82out_result[(getCycle()+1)%2] = (id82x_1);
  }
  { // Node ID: 469 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id469in_input = id382out_output[getCycle()%106];

    id469out_output[(getCycle()+2)%3] = id469in_input;
  }
  { // Node ID: 385 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id385in_input = id56out_output;

    id385out_output[(getCycle()+2)%3] = id385in_input;
  }
  { // Node ID: 83 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id83in_sel = id82out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id83in_option0 = id469out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id83in_option1 = id385out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id83x_1;

    switch((id83in_sel.getValueAsLong())) {
      case 0l:
        id83x_1 = id83in_option0;
        break;
      case 1l:
        id83x_1 = id83in_option1;
        break;
      default:
        id83x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id83out_result[(getCycle()+1)%2] = (id83x_1);
  }
  { // Node ID: 386 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id386in_input = id83out_result[getCycle()%2];

    id386out_output[(getCycle()+1)%2] = id386in_input;
  }
  { // Node ID: 84 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id84in_a = id66out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id84in_b = id386out_output[getCycle()%2];

    id84out_result[(getCycle()+1)%2] = (gt_fixed(id84in_a,id84in_b));
  }
  { // Node ID: 85 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id85in_a = id66out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id85in_b = id386out_output[getCycle()%2];

    id85out_result[(getCycle()+1)%2] = (eq_fixed(id85in_a,id85in_b));
  }
  { // Node ID: 86 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id86in_a = id84out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id86in_b = id85out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id86x_1;

    (id86x_1) = (or_fixed(id86in_a,id86in_b));
    id86out_result[(getCycle()+1)%2] = (id86x_1);
  }
  { // Node ID: 470 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id470in_input = id386out_output[getCycle()%2];

    id470out_output[(getCycle()+2)%3] = id470in_input;
  }
  { // Node ID: 389 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id389in_input = id66out_output;

    id389out_output[(getCycle()+2)%3] = id389in_input;
  }
  { // Node ID: 87 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id87in_sel = id86out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id87in_option0 = id470out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id87in_option1 = id389out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id87x_1;

    switch((id87in_sel.getValueAsLong())) {
      case 0l:
        id87x_1 = id87in_option0;
        break;
      case 1l:
        id87x_1 = id87in_option1;
        break;
      default:
        id87x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id87out_result[(getCycle()+1)%2] = (id87x_1);
  }
  { // Node ID: 499 (NodeConstantRawBits)
  }
  { // Node ID: 89 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id89in_a = id87out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id89in_b = id499out_value;

    id89out_result[(getCycle()+1)%2] = (lt_fixed(id89in_a,id89in_b));
  }
  { // Node ID: 390 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id390in_input = id87out_result[getCycle()%2];

    id390out_output[(getCycle()+1)%2] = id390in_input;
  }
  { // Node ID: 498 (NodeConstantRawBits)
  }
  { // Node ID: 91 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id91in_sel = id89out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id91in_option0 = id390out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id91in_option1 = id498out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id91x_1;

    switch((id91in_sel.getValueAsLong())) {
      case 0l:
        id91x_1 = id91in_option0;
        break;
      case 1l:
        id91x_1 = id91in_option1;
        break;
      default:
        id91x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id91out_result[(getCycle()+1)%2] = (id91x_1);
  }
  HWRawBits<32> id160out_output;

  { // Node ID: 160 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id160in_input = id91out_result[getCycle()%2];

    id160out_output = (cast_fixed2bits(id160in_input));
  }
  HWRawBits<64> id162out_result;

  { // Node ID: 162 (NodeCat)
    const HWRawBits<32> &id162in_in0 = id161out_output;
    const HWRawBits<32> &id162in_in1 = id160out_output;

    id162out_result = (cat(id162in_in0,id162in_in1));
  }
  HWRawBits<96> id164out_result;

  { // Node ID: 164 (NodeCat)
    const HWRawBits<32> &id164in_in0 = id163out_output;
    const HWRawBits<64> &id164in_in1 = id162out_result;

    id164out_result = (cat(id164in_in0,id164in_in1));
  }
  HWRawBits<128> id166out_result;

  { // Node ID: 166 (NodeCat)
    const HWRawBits<32> &id166in_in0 = id165out_output;
    const HWRawBits<96> &id166in_in1 = id164out_result;

    id166out_result = (cat(id166in_in0,id166in_in1));
  }
  HWRawBits<160> id168out_result;

  { // Node ID: 168 (NodeCat)
    const HWRawBits<32> &id168in_in0 = id167out_output;
    const HWRawBits<128> &id168in_in1 = id166out_result;

    id168out_result = (cat(id168in_in0,id168in_in1));
  }
  if ( (getFillLevel() >= (130l)) && (getFlushLevel() < (130l)|| !isFlushingActive() ))
  { // Node ID: 159 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id159in_output_control = id158out_result;
    const HWRawBits<160> &id159in_data = id168out_result;

    bool id159x_1;

    (id159x_1) = ((id159in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(130l))&(isFlushingActive()))));
    if((id159x_1)) {
      writeOutput(m_y01, id159in_data);
    }
  }
  { // Node ID: 297 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id298out_result;

  { // Node ID: 298 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id298in_a = id297out_io_y11_force_disabled;

    id298out_result = (not_fixed(id298in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id299out_result;

  { // Node ID: 299 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id299in_a = id27out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id299in_b = id298out_result;

    HWOffsetFix<1,0,UNSIGNED> id299x_1;

    (id299x_1) = (and_fixed(id299in_a,id299in_b));
    id299out_result = (id299x_1);
  }
  { // Node ID: 169 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id170out_result;

  { // Node ID: 170 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id170in_a = id169out_io_x11_force_disabled;

    id170out_result = (not_fixed(id170in_a));
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 171 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id171in_enable = id170out_result;

    (id171st_read_next_cycle) = ((id171in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_x11, id171st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<32> id180out_result;

  { // Node ID: 180 (NodeSlice)
    const HWRawBits<160> &id180in_a = id171out_data;

    id180out_result = (slice<128,32>(id180in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id181out_output;

  { // Node ID: 181 (NodeReinterpret)
    const HWRawBits<32> &id181in_input = id180out_result;

    id181out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id181in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id211out_output;

  { // Node ID: 211 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id211in_input = id181out_output;

    id211out_output = id211in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id201out_output;

  { // Node ID: 201 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id201in_input = id181out_output;

    id201out_output = id201in_input;
  }
  { // Node ID: 391 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id391in_input = id181out_output;

    id391out_output[(getCycle()+4)%5] = id391in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id191out_output;

  { // Node ID: 191 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id191in_input = id181out_output;

    id191out_output = id191in_input;
  }
  { // Node ID: 281 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id281in_a = id391out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id281in_b = id191out_output;

    id281out_result[(getCycle()+1)%2] = (gt_fixed(id281in_a,id281in_b));
  }
  { // Node ID: 282 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id282in_a = id391out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id282in_b = id191out_output;

    id282out_result[(getCycle()+1)%2] = (eq_fixed(id282in_a,id282in_b));
  }
  { // Node ID: 283 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id283in_a = id281out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id283in_b = id282out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id283x_1;

    (id283x_1) = (or_fixed(id283in_a,id283in_b));
    id283out_result[(getCycle()+1)%2] = (id283x_1);
  }
  { // Node ID: 393 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id393in_input = id191out_output;

    id393out_output[(getCycle()+2)%3] = id393in_input;
  }
  { // Node ID: 471 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id471in_input = id391out_output[getCycle()%5];

    id471out_output[(getCycle()+2)%3] = id471in_input;
  }
  { // Node ID: 284 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id284in_sel = id283out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id284in_option0 = id393out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id284in_option1 = id471out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id284x_1;

    switch((id284in_sel.getValueAsLong())) {
      case 0l:
        id284x_1 = id284in_option0;
        break;
      case 1l:
        id284x_1 = id284in_option1;
        break;
      default:
        id284x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id284out_result[(getCycle()+1)%2] = (id284x_1);
  }
  { // Node ID: 395 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id395in_input = id284out_result[getCycle()%2];

    id395out_output[(getCycle()+105)%106] = id395in_input;
  }
  { // Node ID: 285 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id285in_a = id201out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id285in_b = id395out_output[getCycle()%106];

    id285out_result[(getCycle()+1)%2] = (gt_fixed(id285in_a,id285in_b));
  }
  { // Node ID: 286 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id286in_a = id201out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id286in_b = id395out_output[getCycle()%106];

    id286out_result[(getCycle()+1)%2] = (eq_fixed(id286in_a,id286in_b));
  }
  { // Node ID: 287 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id287in_a = id285out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id287in_b = id286out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id287x_1;

    (id287x_1) = (or_fixed(id287in_a,id287in_b));
    id287out_result[(getCycle()+1)%2] = (id287x_1);
  }
  { // Node ID: 472 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id472in_input = id395out_output[getCycle()%106];

    id472out_output[(getCycle()+2)%3] = id472in_input;
  }
  { // Node ID: 398 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id398in_input = id201out_output;

    id398out_output[(getCycle()+2)%3] = id398in_input;
  }
  { // Node ID: 288 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id288in_sel = id287out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id288in_option0 = id472out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id288in_option1 = id398out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id288x_1;

    switch((id288in_sel.getValueAsLong())) {
      case 0l:
        id288x_1 = id288in_option0;
        break;
      case 1l:
        id288x_1 = id288in_option1;
        break;
      default:
        id288x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id288out_result[(getCycle()+1)%2] = (id288x_1);
  }
  { // Node ID: 399 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id399in_input = id288out_result[getCycle()%2];

    id399out_output[(getCycle()+1)%2] = id399in_input;
  }
  { // Node ID: 289 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id289in_a = id211out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id289in_b = id399out_output[getCycle()%2];

    id289out_result[(getCycle()+1)%2] = (gt_fixed(id289in_a,id289in_b));
  }
  { // Node ID: 290 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id290in_a = id211out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id290in_b = id399out_output[getCycle()%2];

    id290out_result[(getCycle()+1)%2] = (eq_fixed(id290in_a,id290in_b));
  }
  { // Node ID: 291 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id291in_a = id289out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id291in_b = id290out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id291x_1;

    (id291x_1) = (or_fixed(id291in_a,id291in_b));
    id291out_result[(getCycle()+1)%2] = (id291x_1);
  }
  { // Node ID: 473 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id473in_input = id399out_output[getCycle()%2];

    id473out_output[(getCycle()+2)%3] = id473in_input;
  }
  { // Node ID: 402 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id402in_input = id211out_output;

    id402out_output[(getCycle()+2)%3] = id402in_input;
  }
  { // Node ID: 292 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id292in_sel = id291out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id292in_option0 = id473out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id292in_option1 = id402out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id292x_1;

    switch((id292in_sel.getValueAsLong())) {
      case 0l:
        id292x_1 = id292in_option0;
        break;
      case 1l:
        id292x_1 = id292in_option1;
        break;
      default:
        id292x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id292out_result[(getCycle()+1)%2] = (id292x_1);
  }
  { // Node ID: 497 (NodeConstantRawBits)
  }
  { // Node ID: 294 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id294in_a = id292out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id294in_b = id497out_value;

    id294out_result[(getCycle()+1)%2] = (lt_fixed(id294in_a,id294in_b));
  }
  { // Node ID: 403 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id403in_input = id292out_result[getCycle()%2];

    id403out_output[(getCycle()+1)%2] = id403in_input;
  }
  { // Node ID: 496 (NodeConstantRawBits)
  }
  { // Node ID: 296 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id296in_sel = id294out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id296in_option0 = id403out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id296in_option1 = id496out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id296x_1;

    switch((id296in_sel.getValueAsLong())) {
      case 0l:
        id296x_1 = id296in_option0;
        break;
      case 1l:
        id296x_1 = id296in_option1;
        break;
      default:
        id296x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id296out_result[(getCycle()+1)%2] = (id296x_1);
  }
  HWRawBits<32> id308out_output;

  { // Node ID: 308 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id308in_input = id296out_result[getCycle()%2];

    id308out_output = (cast_fixed2bits(id308in_input));
  }
  HWRawBits<32> id178out_result;

  { // Node ID: 178 (NodeSlice)
    const HWRawBits<160> &id178in_a = id171out_data;

    id178out_result = (slice<96,32>(id178in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id179out_output;

  { // Node ID: 179 (NodeReinterpret)
    const HWRawBits<32> &id179in_input = id178out_result;

    id179out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id179in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id210out_output;

  { // Node ID: 210 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id210in_input = id179out_output;

    id210out_output = id210in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id200out_output;

  { // Node ID: 200 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id200in_input = id179out_output;

    id200out_output = id200in_input;
  }
  { // Node ID: 404 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id404in_input = id179out_output;

    id404out_output[(getCycle()+4)%5] = id404in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id190out_output;

  { // Node ID: 190 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id190in_input = id179out_output;

    id190out_output = id190in_input;
  }
  { // Node ID: 265 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id265in_a = id404out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id265in_b = id190out_output;

    id265out_result[(getCycle()+1)%2] = (gt_fixed(id265in_a,id265in_b));
  }
  { // Node ID: 266 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id266in_a = id404out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id266in_b = id190out_output;

    id266out_result[(getCycle()+1)%2] = (eq_fixed(id266in_a,id266in_b));
  }
  { // Node ID: 267 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id267in_a = id265out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id267in_b = id266out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id267x_1;

    (id267x_1) = (or_fixed(id267in_a,id267in_b));
    id267out_result[(getCycle()+1)%2] = (id267x_1);
  }
  { // Node ID: 406 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id406in_input = id190out_output;

    id406out_output[(getCycle()+2)%3] = id406in_input;
  }
  { // Node ID: 474 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id474in_input = id404out_output[getCycle()%5];

    id474out_output[(getCycle()+2)%3] = id474in_input;
  }
  { // Node ID: 268 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id268in_sel = id267out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id268in_option0 = id406out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id268in_option1 = id474out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id268x_1;

    switch((id268in_sel.getValueAsLong())) {
      case 0l:
        id268x_1 = id268in_option0;
        break;
      case 1l:
        id268x_1 = id268in_option1;
        break;
      default:
        id268x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id268out_result[(getCycle()+1)%2] = (id268x_1);
  }
  { // Node ID: 408 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id408in_input = id268out_result[getCycle()%2];

    id408out_output[(getCycle()+105)%106] = id408in_input;
  }
  { // Node ID: 269 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id269in_a = id200out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id269in_b = id408out_output[getCycle()%106];

    id269out_result[(getCycle()+1)%2] = (gt_fixed(id269in_a,id269in_b));
  }
  { // Node ID: 270 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id270in_a = id200out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id270in_b = id408out_output[getCycle()%106];

    id270out_result[(getCycle()+1)%2] = (eq_fixed(id270in_a,id270in_b));
  }
  { // Node ID: 271 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id271in_a = id269out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id271in_b = id270out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id271x_1;

    (id271x_1) = (or_fixed(id271in_a,id271in_b));
    id271out_result[(getCycle()+1)%2] = (id271x_1);
  }
  { // Node ID: 475 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id475in_input = id408out_output[getCycle()%106];

    id475out_output[(getCycle()+2)%3] = id475in_input;
  }
  { // Node ID: 411 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id411in_input = id200out_output;

    id411out_output[(getCycle()+2)%3] = id411in_input;
  }
  { // Node ID: 272 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id272in_sel = id271out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id272in_option0 = id475out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id272in_option1 = id411out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id272x_1;

    switch((id272in_sel.getValueAsLong())) {
      case 0l:
        id272x_1 = id272in_option0;
        break;
      case 1l:
        id272x_1 = id272in_option1;
        break;
      default:
        id272x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id272out_result[(getCycle()+1)%2] = (id272x_1);
  }
  { // Node ID: 412 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id412in_input = id272out_result[getCycle()%2];

    id412out_output[(getCycle()+1)%2] = id412in_input;
  }
  { // Node ID: 273 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id273in_a = id210out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id273in_b = id412out_output[getCycle()%2];

    id273out_result[(getCycle()+1)%2] = (gt_fixed(id273in_a,id273in_b));
  }
  { // Node ID: 274 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id274in_a = id210out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id274in_b = id412out_output[getCycle()%2];

    id274out_result[(getCycle()+1)%2] = (eq_fixed(id274in_a,id274in_b));
  }
  { // Node ID: 275 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id275in_a = id273out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id275in_b = id274out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id275x_1;

    (id275x_1) = (or_fixed(id275in_a,id275in_b));
    id275out_result[(getCycle()+1)%2] = (id275x_1);
  }
  { // Node ID: 476 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id476in_input = id412out_output[getCycle()%2];

    id476out_output[(getCycle()+2)%3] = id476in_input;
  }
  { // Node ID: 415 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id415in_input = id210out_output;

    id415out_output[(getCycle()+2)%3] = id415in_input;
  }
  { // Node ID: 276 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id276in_sel = id275out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id276in_option0 = id476out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id276in_option1 = id415out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id276x_1;

    switch((id276in_sel.getValueAsLong())) {
      case 0l:
        id276x_1 = id276in_option0;
        break;
      case 1l:
        id276x_1 = id276in_option1;
        break;
      default:
        id276x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id276out_result[(getCycle()+1)%2] = (id276x_1);
  }
  { // Node ID: 495 (NodeConstantRawBits)
  }
  { // Node ID: 278 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id278in_a = id276out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id278in_b = id495out_value;

    id278out_result[(getCycle()+1)%2] = (lt_fixed(id278in_a,id278in_b));
  }
  { // Node ID: 416 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id416in_input = id276out_result[getCycle()%2];

    id416out_output[(getCycle()+1)%2] = id416in_input;
  }
  { // Node ID: 494 (NodeConstantRawBits)
  }
  { // Node ID: 280 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id280in_sel = id278out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id280in_option0 = id416out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id280in_option1 = id494out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id280x_1;

    switch((id280in_sel.getValueAsLong())) {
      case 0l:
        id280x_1 = id280in_option0;
        break;
      case 1l:
        id280x_1 = id280in_option1;
        break;
      default:
        id280x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id280out_result[(getCycle()+1)%2] = (id280x_1);
  }
  HWRawBits<32> id306out_output;

  { // Node ID: 306 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id306in_input = id280out_result[getCycle()%2];

    id306out_output = (cast_fixed2bits(id306in_input));
  }
  HWRawBits<32> id176out_result;

  { // Node ID: 176 (NodeSlice)
    const HWRawBits<160> &id176in_a = id171out_data;

    id176out_result = (slice<64,32>(id176in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id177out_output;

  { // Node ID: 177 (NodeReinterpret)
    const HWRawBits<32> &id177in_input = id176out_result;

    id177out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id177in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id209out_output;

  { // Node ID: 209 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id209in_input = id177out_output;

    id209out_output = id209in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id199out_output;

  { // Node ID: 199 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id199in_input = id177out_output;

    id199out_output = id199in_input;
  }
  { // Node ID: 417 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id417in_input = id177out_output;

    id417out_output[(getCycle()+4)%5] = id417in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id189out_output;

  { // Node ID: 189 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id189in_input = id177out_output;

    id189out_output = id189in_input;
  }
  { // Node ID: 249 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id249in_a = id417out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id249in_b = id189out_output;

    id249out_result[(getCycle()+1)%2] = (gt_fixed(id249in_a,id249in_b));
  }
  { // Node ID: 250 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id250in_a = id417out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id250in_b = id189out_output;

    id250out_result[(getCycle()+1)%2] = (eq_fixed(id250in_a,id250in_b));
  }
  { // Node ID: 251 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id251in_a = id249out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id251in_b = id250out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id251x_1;

    (id251x_1) = (or_fixed(id251in_a,id251in_b));
    id251out_result[(getCycle()+1)%2] = (id251x_1);
  }
  { // Node ID: 419 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id419in_input = id189out_output;

    id419out_output[(getCycle()+2)%3] = id419in_input;
  }
  { // Node ID: 477 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id477in_input = id417out_output[getCycle()%5];

    id477out_output[(getCycle()+2)%3] = id477in_input;
  }
  { // Node ID: 252 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id252in_sel = id251out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id252in_option0 = id419out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id252in_option1 = id477out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id252x_1;

    switch((id252in_sel.getValueAsLong())) {
      case 0l:
        id252x_1 = id252in_option0;
        break;
      case 1l:
        id252x_1 = id252in_option1;
        break;
      default:
        id252x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id252out_result[(getCycle()+1)%2] = (id252x_1);
  }
  { // Node ID: 421 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id421in_input = id252out_result[getCycle()%2];

    id421out_output[(getCycle()+105)%106] = id421in_input;
  }
  { // Node ID: 253 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id253in_a = id199out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id253in_b = id421out_output[getCycle()%106];

    id253out_result[(getCycle()+1)%2] = (gt_fixed(id253in_a,id253in_b));
  }
  { // Node ID: 254 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id254in_a = id199out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id254in_b = id421out_output[getCycle()%106];

    id254out_result[(getCycle()+1)%2] = (eq_fixed(id254in_a,id254in_b));
  }
  { // Node ID: 255 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id255in_a = id253out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id255in_b = id254out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id255x_1;

    (id255x_1) = (or_fixed(id255in_a,id255in_b));
    id255out_result[(getCycle()+1)%2] = (id255x_1);
  }
  { // Node ID: 478 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id478in_input = id421out_output[getCycle()%106];

    id478out_output[(getCycle()+2)%3] = id478in_input;
  }
  { // Node ID: 424 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id424in_input = id199out_output;

    id424out_output[(getCycle()+2)%3] = id424in_input;
  }
  { // Node ID: 256 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id256in_sel = id255out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id256in_option0 = id478out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id256in_option1 = id424out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id256x_1;

    switch((id256in_sel.getValueAsLong())) {
      case 0l:
        id256x_1 = id256in_option0;
        break;
      case 1l:
        id256x_1 = id256in_option1;
        break;
      default:
        id256x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id256out_result[(getCycle()+1)%2] = (id256x_1);
  }
  { // Node ID: 425 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id425in_input = id256out_result[getCycle()%2];

    id425out_output[(getCycle()+1)%2] = id425in_input;
  }
  { // Node ID: 257 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id257in_a = id209out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id257in_b = id425out_output[getCycle()%2];

    id257out_result[(getCycle()+1)%2] = (gt_fixed(id257in_a,id257in_b));
  }
  { // Node ID: 258 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id258in_a = id209out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id258in_b = id425out_output[getCycle()%2];

    id258out_result[(getCycle()+1)%2] = (eq_fixed(id258in_a,id258in_b));
  }
  { // Node ID: 259 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id259in_a = id257out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id259in_b = id258out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id259x_1;

    (id259x_1) = (or_fixed(id259in_a,id259in_b));
    id259out_result[(getCycle()+1)%2] = (id259x_1);
  }
  { // Node ID: 479 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id479in_input = id425out_output[getCycle()%2];

    id479out_output[(getCycle()+2)%3] = id479in_input;
  }
  { // Node ID: 428 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id428in_input = id209out_output;

    id428out_output[(getCycle()+2)%3] = id428in_input;
  }
  { // Node ID: 260 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id260in_sel = id259out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id260in_option0 = id479out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id260in_option1 = id428out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id260x_1;

    switch((id260in_sel.getValueAsLong())) {
      case 0l:
        id260x_1 = id260in_option0;
        break;
      case 1l:
        id260x_1 = id260in_option1;
        break;
      default:
        id260x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id260out_result[(getCycle()+1)%2] = (id260x_1);
  }
  { // Node ID: 493 (NodeConstantRawBits)
  }
  { // Node ID: 262 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id262in_a = id260out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id262in_b = id493out_value;

    id262out_result[(getCycle()+1)%2] = (lt_fixed(id262in_a,id262in_b));
  }
  { // Node ID: 429 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id429in_input = id260out_result[getCycle()%2];

    id429out_output[(getCycle()+1)%2] = id429in_input;
  }
  { // Node ID: 492 (NodeConstantRawBits)
  }
  { // Node ID: 264 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id264in_sel = id262out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id264in_option0 = id429out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id264in_option1 = id492out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id264x_1;

    switch((id264in_sel.getValueAsLong())) {
      case 0l:
        id264x_1 = id264in_option0;
        break;
      case 1l:
        id264x_1 = id264in_option1;
        break;
      default:
        id264x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id264out_result[(getCycle()+1)%2] = (id264x_1);
  }
  HWRawBits<32> id304out_output;

  { // Node ID: 304 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id304in_input = id264out_result[getCycle()%2];

    id304out_output = (cast_fixed2bits(id304in_input));
  }
  HWRawBits<32> id174out_result;

  { // Node ID: 174 (NodeSlice)
    const HWRawBits<160> &id174in_a = id171out_data;

    id174out_result = (slice<32,32>(id174in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id175out_output;

  { // Node ID: 175 (NodeReinterpret)
    const HWRawBits<32> &id175in_input = id174out_result;

    id175out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id175in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id208out_output;

  { // Node ID: 208 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id208in_input = id175out_output;

    id208out_output = id208in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id198out_output;

  { // Node ID: 198 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id198in_input = id175out_output;

    id198out_output = id198in_input;
  }
  { // Node ID: 430 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id430in_input = id175out_output;

    id430out_output[(getCycle()+4)%5] = id430in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id188out_output;

  { // Node ID: 188 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id188in_input = id175out_output;

    id188out_output = id188in_input;
  }
  { // Node ID: 233 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id233in_a = id430out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id233in_b = id188out_output;

    id233out_result[(getCycle()+1)%2] = (gt_fixed(id233in_a,id233in_b));
  }
  { // Node ID: 234 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id234in_a = id430out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id234in_b = id188out_output;

    id234out_result[(getCycle()+1)%2] = (eq_fixed(id234in_a,id234in_b));
  }
  { // Node ID: 235 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id235in_a = id233out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id235in_b = id234out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id235x_1;

    (id235x_1) = (or_fixed(id235in_a,id235in_b));
    id235out_result[(getCycle()+1)%2] = (id235x_1);
  }
  { // Node ID: 432 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id432in_input = id188out_output;

    id432out_output[(getCycle()+2)%3] = id432in_input;
  }
  { // Node ID: 480 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id480in_input = id430out_output[getCycle()%5];

    id480out_output[(getCycle()+2)%3] = id480in_input;
  }
  { // Node ID: 236 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id236in_sel = id235out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id236in_option0 = id432out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id236in_option1 = id480out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id236x_1;

    switch((id236in_sel.getValueAsLong())) {
      case 0l:
        id236x_1 = id236in_option0;
        break;
      case 1l:
        id236x_1 = id236in_option1;
        break;
      default:
        id236x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id236out_result[(getCycle()+1)%2] = (id236x_1);
  }
  { // Node ID: 434 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id434in_input = id236out_result[getCycle()%2];

    id434out_output[(getCycle()+105)%106] = id434in_input;
  }
  { // Node ID: 237 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id237in_a = id198out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id237in_b = id434out_output[getCycle()%106];

    id237out_result[(getCycle()+1)%2] = (gt_fixed(id237in_a,id237in_b));
  }
  { // Node ID: 238 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id238in_a = id198out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id238in_b = id434out_output[getCycle()%106];

    id238out_result[(getCycle()+1)%2] = (eq_fixed(id238in_a,id238in_b));
  }
  { // Node ID: 239 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id239in_a = id237out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id239in_b = id238out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id239x_1;

    (id239x_1) = (or_fixed(id239in_a,id239in_b));
    id239out_result[(getCycle()+1)%2] = (id239x_1);
  }
  { // Node ID: 481 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id481in_input = id434out_output[getCycle()%106];

    id481out_output[(getCycle()+2)%3] = id481in_input;
  }
  { // Node ID: 437 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id437in_input = id198out_output;

    id437out_output[(getCycle()+2)%3] = id437in_input;
  }
  { // Node ID: 240 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id240in_sel = id239out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id240in_option0 = id481out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id240in_option1 = id437out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id240x_1;

    switch((id240in_sel.getValueAsLong())) {
      case 0l:
        id240x_1 = id240in_option0;
        break;
      case 1l:
        id240x_1 = id240in_option1;
        break;
      default:
        id240x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id240out_result[(getCycle()+1)%2] = (id240x_1);
  }
  { // Node ID: 438 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id438in_input = id240out_result[getCycle()%2];

    id438out_output[(getCycle()+1)%2] = id438in_input;
  }
  { // Node ID: 241 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id241in_a = id208out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id241in_b = id438out_output[getCycle()%2];

    id241out_result[(getCycle()+1)%2] = (gt_fixed(id241in_a,id241in_b));
  }
  { // Node ID: 242 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id242in_a = id208out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id242in_b = id438out_output[getCycle()%2];

    id242out_result[(getCycle()+1)%2] = (eq_fixed(id242in_a,id242in_b));
  }
  { // Node ID: 243 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id243in_a = id241out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id243in_b = id242out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id243x_1;

    (id243x_1) = (or_fixed(id243in_a,id243in_b));
    id243out_result[(getCycle()+1)%2] = (id243x_1);
  }
  { // Node ID: 482 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id482in_input = id438out_output[getCycle()%2];

    id482out_output[(getCycle()+2)%3] = id482in_input;
  }
  { // Node ID: 441 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id441in_input = id208out_output;

    id441out_output[(getCycle()+2)%3] = id441in_input;
  }
  { // Node ID: 244 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id244in_sel = id243out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id244in_option0 = id482out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id244in_option1 = id441out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id244x_1;

    switch((id244in_sel.getValueAsLong())) {
      case 0l:
        id244x_1 = id244in_option0;
        break;
      case 1l:
        id244x_1 = id244in_option1;
        break;
      default:
        id244x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id244out_result[(getCycle()+1)%2] = (id244x_1);
  }
  { // Node ID: 491 (NodeConstantRawBits)
  }
  { // Node ID: 246 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id246in_a = id244out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id246in_b = id491out_value;

    id246out_result[(getCycle()+1)%2] = (lt_fixed(id246in_a,id246in_b));
  }
  { // Node ID: 442 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id442in_input = id244out_result[getCycle()%2];

    id442out_output[(getCycle()+1)%2] = id442in_input;
  }
  { // Node ID: 490 (NodeConstantRawBits)
  }
  { // Node ID: 248 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id248in_sel = id246out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id248in_option0 = id442out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id248in_option1 = id490out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id248x_1;

    switch((id248in_sel.getValueAsLong())) {
      case 0l:
        id248x_1 = id248in_option0;
        break;
      case 1l:
        id248x_1 = id248in_option1;
        break;
      default:
        id248x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id248out_result[(getCycle()+1)%2] = (id248x_1);
  }
  HWRawBits<32> id302out_output;

  { // Node ID: 302 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id302in_input = id248out_result[getCycle()%2];

    id302out_output = (cast_fixed2bits(id302in_input));
  }
  HWRawBits<32> id172out_result;

  { // Node ID: 172 (NodeSlice)
    const HWRawBits<160> &id172in_a = id171out_data;

    id172out_result = (slice<0,32>(id172in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id173out_output;

  { // Node ID: 173 (NodeReinterpret)
    const HWRawBits<32> &id173in_input = id172out_result;

    id173out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id173in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id207out_output;

  { // Node ID: 207 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id207in_input = id173out_output;

    id207out_output = id207in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id197out_output;

  { // Node ID: 197 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id197in_input = id173out_output;

    id197out_output = id197in_input;
  }
  { // Node ID: 443 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id443in_input = id173out_output;

    id443out_output[(getCycle()+4)%5] = id443in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id187out_output;

  { // Node ID: 187 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id187in_input = id173out_output;

    id187out_output = id187in_input;
  }
  { // Node ID: 217 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id217in_a = id443out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id217in_b = id187out_output;

    id217out_result[(getCycle()+1)%2] = (gt_fixed(id217in_a,id217in_b));
  }
  { // Node ID: 218 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id218in_a = id443out_output[getCycle()%5];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id218in_b = id187out_output;

    id218out_result[(getCycle()+1)%2] = (eq_fixed(id218in_a,id218in_b));
  }
  { // Node ID: 219 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id219in_a = id217out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id219in_b = id218out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id219x_1;

    (id219x_1) = (or_fixed(id219in_a,id219in_b));
    id219out_result[(getCycle()+1)%2] = (id219x_1);
  }
  { // Node ID: 445 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id445in_input = id187out_output;

    id445out_output[(getCycle()+2)%3] = id445in_input;
  }
  { // Node ID: 483 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id483in_input = id443out_output[getCycle()%5];

    id483out_output[(getCycle()+2)%3] = id483in_input;
  }
  { // Node ID: 220 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id220in_sel = id219out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id220in_option0 = id445out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id220in_option1 = id483out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id220x_1;

    switch((id220in_sel.getValueAsLong())) {
      case 0l:
        id220x_1 = id220in_option0;
        break;
      case 1l:
        id220x_1 = id220in_option1;
        break;
      default:
        id220x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id220out_result[(getCycle()+1)%2] = (id220x_1);
  }
  { // Node ID: 447 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id447in_input = id220out_result[getCycle()%2];

    id447out_output[(getCycle()+105)%106] = id447in_input;
  }
  { // Node ID: 221 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id221in_a = id197out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id221in_b = id447out_output[getCycle()%106];

    id221out_result[(getCycle()+1)%2] = (gt_fixed(id221in_a,id221in_b));
  }
  { // Node ID: 222 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id222in_a = id197out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id222in_b = id447out_output[getCycle()%106];

    id222out_result[(getCycle()+1)%2] = (eq_fixed(id222in_a,id222in_b));
  }
  { // Node ID: 223 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id223in_a = id221out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id223in_b = id222out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id223x_1;

    (id223x_1) = (or_fixed(id223in_a,id223in_b));
    id223out_result[(getCycle()+1)%2] = (id223x_1);
  }
  { // Node ID: 484 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id484in_input = id447out_output[getCycle()%106];

    id484out_output[(getCycle()+2)%3] = id484in_input;
  }
  { // Node ID: 450 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id450in_input = id197out_output;

    id450out_output[(getCycle()+2)%3] = id450in_input;
  }
  { // Node ID: 224 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id224in_sel = id223out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id224in_option0 = id484out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id224in_option1 = id450out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id224x_1;

    switch((id224in_sel.getValueAsLong())) {
      case 0l:
        id224x_1 = id224in_option0;
        break;
      case 1l:
        id224x_1 = id224in_option1;
        break;
      default:
        id224x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id224out_result[(getCycle()+1)%2] = (id224x_1);
  }
  { // Node ID: 451 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id451in_input = id224out_result[getCycle()%2];

    id451out_output[(getCycle()+1)%2] = id451in_input;
  }
  { // Node ID: 225 (NodeGt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id225in_a = id207out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id225in_b = id451out_output[getCycle()%2];

    id225out_result[(getCycle()+1)%2] = (gt_fixed(id225in_a,id225in_b));
  }
  { // Node ID: 226 (NodeEq)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id226in_a = id207out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id226in_b = id451out_output[getCycle()%2];

    id226out_result[(getCycle()+1)%2] = (eq_fixed(id226in_a,id226in_b));
  }
  { // Node ID: 227 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id227in_a = id225out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id227in_b = id226out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id227x_1;

    (id227x_1) = (or_fixed(id227in_a,id227in_b));
    id227out_result[(getCycle()+1)%2] = (id227x_1);
  }
  { // Node ID: 485 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id485in_input = id451out_output[getCycle()%2];

    id485out_output[(getCycle()+2)%3] = id485in_input;
  }
  { // Node ID: 454 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id454in_input = id207out_output;

    id454out_output[(getCycle()+2)%3] = id454in_input;
  }
  { // Node ID: 228 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id228in_sel = id227out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id228in_option0 = id485out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id228in_option1 = id454out_output[getCycle()%3];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id228x_1;

    switch((id228in_sel.getValueAsLong())) {
      case 0l:
        id228x_1 = id228in_option0;
        break;
      case 1l:
        id228x_1 = id228in_option1;
        break;
      default:
        id228x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id228out_result[(getCycle()+1)%2] = (id228x_1);
  }
  { // Node ID: 489 (NodeConstantRawBits)
  }
  { // Node ID: 230 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id230in_a = id228out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id230in_b = id489out_value;

    id230out_result[(getCycle()+1)%2] = (lt_fixed(id230in_a,id230in_b));
  }
  { // Node ID: 455 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id455in_input = id228out_result[getCycle()%2];

    id455out_output[(getCycle()+1)%2] = id455in_input;
  }
  { // Node ID: 488 (NodeConstantRawBits)
  }
  { // Node ID: 232 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id232in_sel = id230out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id232in_option0 = id455out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id232in_option1 = id488out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id232x_1;

    switch((id232in_sel.getValueAsLong())) {
      case 0l:
        id232x_1 = id232in_option0;
        break;
      case 1l:
        id232x_1 = id232in_option1;
        break;
      default:
        id232x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id232out_result[(getCycle()+1)%2] = (id232x_1);
  }
  HWRawBits<32> id301out_output;

  { // Node ID: 301 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id301in_input = id232out_result[getCycle()%2];

    id301out_output = (cast_fixed2bits(id301in_input));
  }
  HWRawBits<64> id303out_result;

  { // Node ID: 303 (NodeCat)
    const HWRawBits<32> &id303in_in0 = id302out_output;
    const HWRawBits<32> &id303in_in1 = id301out_output;

    id303out_result = (cat(id303in_in0,id303in_in1));
  }
  HWRawBits<96> id305out_result;

  { // Node ID: 305 (NodeCat)
    const HWRawBits<32> &id305in_in0 = id304out_output;
    const HWRawBits<64> &id305in_in1 = id303out_result;

    id305out_result = (cat(id305in_in0,id305in_in1));
  }
  HWRawBits<128> id307out_result;

  { // Node ID: 307 (NodeCat)
    const HWRawBits<32> &id307in_in0 = id306out_output;
    const HWRawBits<96> &id307in_in1 = id305out_result;

    id307out_result = (cat(id307in_in0,id307in_in1));
  }
  HWRawBits<160> id309out_result;

  { // Node ID: 309 (NodeCat)
    const HWRawBits<32> &id309in_in0 = id308out_output;
    const HWRawBits<128> &id309in_in1 = id307out_result;

    id309out_result = (cat(id309in_in0,id309in_in1));
  }
  if ( (getFillLevel() >= (130l)) && (getFlushLevel() < (130l)|| !isFlushingActive() ))
  { // Node ID: 300 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id300in_output_control = id299out_result;
    const HWRawBits<160> &id300in_data = id309out_result;

    bool id300x_1;

    (id300x_1) = ((id300in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(130l))&(isFlushingActive()))));
    if((id300x_1)) {
      writeOutput(m_y11, id300in_data);
    }
  }
  { // Node ID: 314 (NodeConstantRawBits)
  }
  { // Node ID: 487 (NodeConstantRawBits)
  }
  { // Node ID: 311 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 312 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id312in_enable = id487out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id312in_max = id311out_value;

    HWOffsetFix<49,0,UNSIGNED> id312x_1;
    HWOffsetFix<1,0,UNSIGNED> id312x_2;
    HWOffsetFix<1,0,UNSIGNED> id312x_3;
    HWOffsetFix<49,0,UNSIGNED> id312x_4t_1e_1;

    id312out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id312st_count)));
    (id312x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id312st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id312x_2) = (gte_fixed((id312x_1),id312in_max));
    (id312x_3) = (and_fixed((id312x_2),id312in_enable));
    id312out_wrap = (id312x_3);
    if((id312in_enable.getValueAsBool())) {
      if(((id312x_3).getValueAsBool())) {
        (id312st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id312x_4t_1e_1) = (id312x_1);
        (id312st_count) = (id312x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id313out_output;

  { // Node ID: 313 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id313in_input = id312out_count;

    id313out_output = id313in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 315 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id315in_load = id314out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id315in_data = id313out_output;

    bool id315x_1;

    (id315x_1) = ((id315in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id315x_1)) {
      setMappedRegValue("current_run_cycle_count", id315in_data);
    }
  }
  { // Node ID: 486 (NodeConstantRawBits)
  }
  { // Node ID: 317 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 318 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id318in_enable = id486out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id318in_max = id317out_value;

    HWOffsetFix<49,0,UNSIGNED> id318x_1;
    HWOffsetFix<1,0,UNSIGNED> id318x_2;
    HWOffsetFix<1,0,UNSIGNED> id318x_3;
    HWOffsetFix<49,0,UNSIGNED> id318x_4t_1e_1;

    id318out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id318st_count)));
    (id318x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id318st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id318x_2) = (gte_fixed((id318x_1),id318in_max));
    (id318x_3) = (and_fixed((id318x_2),id318in_enable));
    id318out_wrap = (id318x_3);
    if((id318in_enable.getValueAsBool())) {
      if(((id318x_3).getValueAsBool())) {
        (id318st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id318x_4t_1e_1) = (id318x_1);
        (id318st_count) = (id318x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 320 (NodeInputMappedReg)
  }
  { // Node ID: 321 (NodeEq)
    const HWOffsetFix<48,0,UNSIGNED> &id321in_a = id318out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id321in_b = id320out_run_cycle_count;

    id321out_result[(getCycle()+1)%2] = (eq_fixed(id321in_a,id321in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 319 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id319in_start = id321out_result[getCycle()%2];

    if((id319in_start.getValueAsBool())) {
      startFlushing();
    }
  }
};

};
