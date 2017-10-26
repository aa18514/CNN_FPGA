#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "convolutionKernel10.h"

namespace maxcompilersim {

void convolutionKernel10::execute0() {
  { // Node ID: 678 (NodeConstantRawBits)
  }
  { // Node ID: 677 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 2 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id2in_enable = id678out_value;
    const HWOffsetFix<17,0,UNSIGNED> &id2in_max = id677out_value;

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
  { // Node ID: 676 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 4 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id4in_enable = id2out_wrap;
    const HWOffsetFix<17,0,UNSIGNED> &id4in_max = id676out_value;

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
  { // Node ID: 675 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 6 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id6in_enable = id4out_wrap;
    const HWOffsetFix<17,0,UNSIGNED> &id6in_max = id675out_value;

    HWOffsetFix<17,0,UNSIGNED> id6x_1;
    HWOffsetFix<1,0,UNSIGNED> id6x_2;
    HWOffsetFix<1,0,UNSIGNED> id6x_3;
    HWOffsetFix<17,0,UNSIGNED> id6x_4t_1e_1;

    id6out_count = (cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>((id6st_count)));
    (id6x_1) = (add_fixed<17,0,UNSIGNED,TRUNCATE>((id6st_count),(c_hw_fix_17_0_uns_bits_2)));
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
  { // Node ID: 674 (NodeConstantRawBits)
  }
  { // Node ID: 306 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id306in_a = id6out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id306in_b = id674out_value;

    id306out_result[(getCycle()+1)%2] = (eq_fixed(id306in_a,id306in_b));
  }
  { // Node ID: 595 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id595in_input = id306out_result[getCycle()%2];

    id595out_output[(getCycle()+1)%2] = id595in_input;
  }
  { // Node ID: 673 (NodeConstantRawBits)
  }
  { // Node ID: 308 (NodeGt)
    const HWOffsetFix<16,0,UNSIGNED> &id308in_a = id4out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id308in_b = id673out_value;

    id308out_result[(getCycle()+1)%2] = (gt_fixed(id308in_a,id308in_b));
  }
  { // Node ID: 672 (NodeConstantRawBits)
  }
  { // Node ID: 310 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id310in_a = id4out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id310in_b = id672out_value;

    id310out_result[(getCycle()+1)%2] = (eq_fixed(id310in_a,id310in_b));
  }
  { // Node ID: 311 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id311in_a = id308out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id311in_b = id310out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id311x_1;

    (id311x_1) = (or_fixed(id311in_a,id311in_b));
    id311out_result[(getCycle()+1)%2] = (id311x_1);
  }
  { // Node ID: 312 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id312in_a = id595out_output[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id312in_b = id311out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id312x_1;

    (id312x_1) = (and_fixed(id312in_a,id312in_b));
    id312out_result[(getCycle()+1)%2] = (id312x_1);
  }
  { // Node ID: 628 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id628in_input = id312out_result[getCycle()%2];

    id628out_output[(getCycle()+19)%20] = id628in_input;
  }
  { // Node ID: 664 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id664in_input = id628out_output[getCycle()%20];

    id664out_output[(getCycle()+2)%3] = id664in_input;
  }
  { // Node ID: 528 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id529out_result;

  { // Node ID: 529 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id529in_a = id528out_io_y01_force_disabled;

    id529out_result = (not_fixed(id529in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id530out_result;

  { // Node ID: 530 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id530in_a = id664out_output[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id530in_b = id529out_result;

    HWOffsetFix<1,0,UNSIGNED> id530x_1;

    (id530x_1) = (and_fixed(id530in_a,id530in_b));
    id530out_result = (id530x_1);
  }
  { // Node ID: 671 (NodeConstantRawBits)
  }
  { // Node ID: 314 (NodeSub)
    const HWOffsetFix<16,0,UNSIGNED> &id314in_a = id671out_value;
    const HWOffsetFix<16,0,UNSIGNED> &id314in_b = id6out_count;

    id314out_result[(getCycle()+1)%2] = (sub_fixed<16,0,UNSIGNED,TONEAREVEN>(id314in_a,id314in_b));
  }
  { // Node ID: 597 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id597in_input = id4out_count;

    id597out_output[(getCycle()+1)%2] = id597in_input;
  }
  HWOffsetFix<16,1,UNSIGNED> id556out_output;

  { // Node ID: 556 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id556in_input = id597out_output[getCycle()%2];

    id556out_output = (cast_bits2fixed<16,1,UNSIGNED>((cast_fixed2bits(id556in_input))));
  }
  HWOffsetFix<16,0,UNSIGNED> id557out_o;

  { // Node ID: 557 (NodeCast)
    const HWOffsetFix<16,1,UNSIGNED> &id557in_i = id556out_output;

    id557out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id557in_i));
  }
  { // Node ID: 317 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id317in_a = id314out_result[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id317in_b = id557out_o;

    id317out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id317in_a,id317in_b));
  }
  { // Node ID: 598 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id598in_input = id2out_count;

    id598out_output[(getCycle()+1)%2] = id598in_input;
  }
  HWOffsetFix<16,3,UNSIGNED> id558out_output;

  { // Node ID: 558 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id558in_input = id598out_output[getCycle()%2];

    id558out_output = (cast_bits2fixed<16,3,UNSIGNED>((cast_fixed2bits(id558in_input))));
  }
  HWOffsetFix<16,5,UNSIGNED> id559out_output;

  { // Node ID: 559 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id559in_input = id598out_output[getCycle()%2];

    id559out_output = (cast_bits2fixed<16,5,UNSIGNED>((cast_fixed2bits(id559in_input))));
  }
  { // Node ID: 560 (NodeAdd)
    const HWOffsetFix<16,3,UNSIGNED> &id560in_a = id558out_output;
    const HWOffsetFix<16,5,UNSIGNED> &id560in_b = id559out_output;

    id560out_result[(getCycle()+1)%2] = (add_fixed<19,3,UNSIGNED,TONEAREVEN>(id560in_a,id560in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id561out_o;

  { // Node ID: 561 (NodeCast)
    const HWOffsetFix<19,3,UNSIGNED> &id561in_i = id560out_result[getCycle()%2];

    id561out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id561in_i));
  }
  { // Node ID: 320 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id320in_a = id317out_result[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id320in_b = id561out_o;

    id320out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id320in_a,id320in_b));
  }
  { // Node ID: 600 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id600in_input = id320out_result[getCycle()%2];

    id600out_output[(getCycle()+4)%5] = id600in_input;
  }
  HWOffsetFix<11,0,UNSIGNED> id405out_o;

  { // Node ID: 405 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id405in_i = id600out_output[getCycle()%5];

    id405out_o = (cast_fixed2fixed<11,0,UNSIGNED,TONEAREVEN>(id405in_i));
  }
  { // Node ID: 543 (NodeMappedRom)
    const HWOffsetFix<11,0,UNSIGNED> &id543in_addra = id405out_o;

    long id543x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id543x_2;

    (id543x_1) = (id543in_addra.getValueAsLong());
    switch(((long)((id543x_1)<(2000l)))) {
      case 0l:
        id543x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id543x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom4", id543x_1) );
        break;
      default:
        id543x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id543out_dataa[(getCycle()+2)%3] = (id543x_2);
  }
  HWRawBits<64> id590out_output;

  { // Node ID: 590 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id590in_input = id543out_dataa[getCycle()%3];

    id590out_output = (cast_fixed2bits(id590in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id408out_output;

  { // Node ID: 408 (NodeReinterpret)
    const HWRawBits<64> &id408in_input = id590out_output;

    id408out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id408in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id409out_o;

  { // Node ID: 409 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id409in_i = id408out_output;

    id409out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id409in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id410out_o;

  { // Node ID: 410 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id410in_i = id409out_o;

    id410out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id410in_i));
  }
  { // Node ID: 670 (NodeConstantRawBits)
  }
  { // Node ID: 184 (NodeGt)
    const HWOffsetFix<16,0,UNSIGNED> &id184in_a = id6out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id184in_b = id670out_value;

    id184out_result[(getCycle()+1)%2] = (gt_fixed(id184in_a,id184in_b));
  }
  { // Node ID: 602 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id602in_input = id184out_result[getCycle()%2];

    id602out_output[(getCycle()+7)%8] = id602in_input;
  }
  { // Node ID: 669 (NodeConstantRawBits)
  }
  { // Node ID: 8 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id8in_a = id6out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id8in_b = id669out_value;

    id8out_result[(getCycle()+1)%2] = (eq_fixed(id8in_a,id8in_b));
  }
  { // Node ID: 668 (NodeConstantRawBits)
  }
  { // Node ID: 10 (NodeLt)
    const HWOffsetFix<16,0,UNSIGNED> &id10in_a = id4out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id10in_b = id668out_value;

    id10out_result[(getCycle()+1)%2] = (lt_fixed(id10in_a,id10in_b));
  }
  { // Node ID: 11 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id11in_a = id8out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id11in_b = id10out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id11x_1;

    (id11x_1) = (and_fixed(id11in_a,id11in_b));
    id11out_result[(getCycle()+1)%2] = (id11x_1);
  }
  { // Node ID: 667 (NodeConstantRawBits)
  }
  { // Node ID: 13 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id13in_a = id598out_output[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id13in_b = id667out_value;

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
  HWRawBits<32> id51out_result;

  { // Node ID: 51 (NodeSlice)
    const HWRawBits<1280> &id51in_a = id18out_data;

    id51out_result = (slice<512,32>(id51in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id52out_output;

  { // Node ID: 52 (NodeReinterpret)
    const HWRawBits<32> &id52in_input = id51out_result;

    id52out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id52in_input));
  }
  HWRawBits<32> id91out_result;

  { // Node ID: 91 (NodeSlice)
    const HWRawBits<1280> &id91in_a = id18out_data;

    id91out_result = (slice<1152,32>(id91in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id92out_output;

  { // Node ID: 92 (NodeReinterpret)
    const HWRawBits<32> &id92in_input = id91out_result;

    id92out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id92in_input));
  }
  { // Node ID: 283 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id283in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id283in_option0 = id52out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id283in_option1 = id92out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id283x_1;

    switch((id283in_sel.getValueAsLong())) {
      case 0l:
        id283x_1 = id283in_option0;
        break;
      case 1l:
        id283x_1 = id283in_option1;
        break;
      default:
        id283x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id283out_result[(getCycle()+1)%2] = (id283x_1);
  }
  { // Node ID: 442 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id442in_a = id410out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id442in_b = id283out_result[getCycle()%2];

    id442out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id442in_a,id442in_b));
  }
  HWRawBits<64> id563out_dataout;

  { // Node ID: 563 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id563in_datain = id543out_dataa[getCycle()%3];

    id563out_dataout = (shift_left_fixed(id563in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id413out_output;

  { // Node ID: 413 (NodeReinterpret)
    const HWRawBits<64> &id413in_input = id563out_dataout;

    id413out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id413in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id414out_o;

  { // Node ID: 414 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id414in_i = id413out_output;

    id414out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id414in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id415out_o;

  { // Node ID: 415 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id415in_i = id414out_o;

    id415out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id415in_i));
  }
  HWRawBits<32> id53out_result;

  { // Node ID: 53 (NodeSlice)
    const HWRawBits<1280> &id53in_a = id18out_data;

    id53out_result = (slice<544,32>(id53in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id54out_output;

  { // Node ID: 54 (NodeReinterpret)
    const HWRawBits<32> &id54in_input = id53out_result;

    id54out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id54in_input));
  }
  HWRawBits<32> id93out_result;

  { // Node ID: 93 (NodeSlice)
    const HWRawBits<1280> &id93in_a = id18out_data;

    id93out_result = (slice<1184,32>(id93in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id94out_output;

  { // Node ID: 94 (NodeReinterpret)
    const HWRawBits<32> &id94in_input = id93out_result;

    id94out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id94in_input));
  }
  { // Node ID: 289 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id289in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id289in_option0 = id54out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id289in_option1 = id94out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id289x_1;

    switch((id289in_sel.getValueAsLong())) {
      case 0l:
        id289x_1 = id289in_option0;
        break;
      case 1l:
        id289x_1 = id289in_option1;
        break;
      default:
        id289x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id289out_result[(getCycle()+1)%2] = (id289x_1);
  }
  { // Node ID: 443 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id443in_a = id415out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id443in_b = id289out_result[getCycle()%2];

    id443out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id443in_a,id443in_b));
  }
  { // Node ID: 454 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id454in_a = id442out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id454in_b = id443out_result[getCycle()%8];

    id454out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id454in_a,id454in_b));
  }
  HWRawBits<64> id564out_dataout;

  { // Node ID: 564 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id564in_datain = id543out_dataa[getCycle()%3];

    id564out_dataout = (shift_left_fixed(id564in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id418out_output;

  { // Node ID: 418 (NodeReinterpret)
    const HWRawBits<64> &id418in_input = id564out_dataout;

    id418out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id418in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id419out_o;

  { // Node ID: 419 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id419in_i = id418out_output;

    id419out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id419in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id420out_o;

  { // Node ID: 420 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id420in_i = id419out_o;

    id420out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id420in_i));
  }
  HWRawBits<32> id55out_result;

  { // Node ID: 55 (NodeSlice)
    const HWRawBits<1280> &id55in_a = id18out_data;

    id55out_result = (slice<576,32>(id55in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id56out_output;

  { // Node ID: 56 (NodeReinterpret)
    const HWRawBits<32> &id56in_input = id55out_result;

    id56out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id56in_input));
  }
  HWRawBits<32> id95out_result;

  { // Node ID: 95 (NodeSlice)
    const HWRawBits<1280> &id95in_a = id18out_data;

    id95out_result = (slice<1216,32>(id95in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id96out_output;

  { // Node ID: 96 (NodeReinterpret)
    const HWRawBits<32> &id96in_input = id95out_result;

    id96out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id96in_input));
  }
  { // Node ID: 295 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id295in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id295in_option0 = id56out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id295in_option1 = id96out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id295x_1;

    switch((id295in_sel.getValueAsLong())) {
      case 0l:
        id295x_1 = id295in_option0;
        break;
      case 1l:
        id295x_1 = id295in_option1;
        break;
      default:
        id295x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id295out_result[(getCycle()+1)%2] = (id295x_1);
  }
  { // Node ID: 444 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id444in_a = id420out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id444in_b = id295out_result[getCycle()%2];

    id444out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id444in_a,id444in_b));
  }
  HWRawBits<64> id565out_dataout;

  { // Node ID: 565 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id565in_datain = id543out_dataa[getCycle()%3];

    id565out_dataout = (shift_left_fixed(id565in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id423out_output;

  { // Node ID: 423 (NodeReinterpret)
    const HWRawBits<64> &id423in_input = id565out_dataout;

    id423out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id423in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id424out_o;

  { // Node ID: 424 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id424in_i = id423out_output;

    id424out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id424in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id425out_o;

  { // Node ID: 425 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id425in_i = id424out_o;

    id425out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id425in_i));
  }
  HWRawBits<32> id57out_result;

  { // Node ID: 57 (NodeSlice)
    const HWRawBits<1280> &id57in_a = id18out_data;

    id57out_result = (slice<608,32>(id57in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id58out_output;

  { // Node ID: 58 (NodeReinterpret)
    const HWRawBits<32> &id58in_input = id57out_result;

    id58out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id58in_input));
  }
  HWRawBits<32> id97out_result;

  { // Node ID: 97 (NodeSlice)
    const HWRawBits<1280> &id97in_a = id18out_data;

    id97out_result = (slice<1248,32>(id97in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id98out_output;

  { // Node ID: 98 (NodeReinterpret)
    const HWRawBits<32> &id98in_input = id97out_result;

    id98out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id98in_input));
  }
  { // Node ID: 301 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id301in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id301in_option0 = id58out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id301in_option1 = id98out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id301x_1;

    switch((id301in_sel.getValueAsLong())) {
      case 0l:
        id301x_1 = id301in_option0;
        break;
      case 1l:
        id301x_1 = id301in_option1;
        break;
      default:
        id301x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id301out_result[(getCycle()+1)%2] = (id301x_1);
  }
  { // Node ID: 445 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id445in_a = id425out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id445in_b = id301out_result[getCycle()%2];

    id445out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id445in_a,id445in_b));
  }
  { // Node ID: 455 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id455in_a = id444out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id455in_b = id445out_result[getCycle()%8];

    id455out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id455in_a,id455in_b));
  }
  { // Node ID: 460 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id460in_a = id454out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id460in_b = id455out_result[getCycle()%2];

    id460out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id460in_a,id460in_b));
  }
  { // Node ID: 626 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id626in_input = id460out_result[getCycle()%2];

    id626out_output[(getCycle()+2)%3] = id626in_input;
  }
  HWOffsetFix<11,0,UNSIGNED> id321out_o;

  { // Node ID: 321 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id321in_i = id600out_output[getCycle()%5];

    id321out_o = (cast_fixed2fixed<11,0,UNSIGNED,TONEAREVEN>(id321in_i));
  }
  { // Node ID: 539 (NodeMappedRom)
    const HWOffsetFix<11,0,UNSIGNED> &id539in_addra = id321out_o;

    long id539x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id539x_2;

    (id539x_1) = (id539in_addra.getValueAsLong());
    switch(((long)((id539x_1)<(2000l)))) {
      case 0l:
        id539x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id539x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom0", id539x_1) );
        break;
      default:
        id539x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id539out_dataa[(getCycle()+2)%3] = (id539x_2);
  }
  HWRawBits<64> id591out_output;

  { // Node ID: 591 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id591in_input = id539out_dataa[getCycle()%3];

    id591out_output = (cast_fixed2bits(id591in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id324out_output;

  { // Node ID: 324 (NodeReinterpret)
    const HWRawBits<64> &id324in_input = id591out_output;

    id324out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id324in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id325out_o;

  { // Node ID: 325 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id325in_i = id324out_output;

    id325out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id325in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id326out_o;

  { // Node ID: 326 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id326in_i = id325out_o;

    id326out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id326in_i));
  }
  HWRawBits<32> id19out_result;

  { // Node ID: 19 (NodeSlice)
    const HWRawBits<1280> &id19in_a = id18out_data;

    id19out_result = (slice<0,32>(id19in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id20out_output;

  { // Node ID: 20 (NodeReinterpret)
    const HWRawBits<32> &id20in_input = id19out_result;

    id20out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id20in_input));
  }
  HWRawBits<32> id59out_result;

  { // Node ID: 59 (NodeSlice)
    const HWRawBits<1280> &id59in_a = id18out_data;

    id59out_result = (slice<640,32>(id59in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id60out_output;

  { // Node ID: 60 (NodeReinterpret)
    const HWRawBits<32> &id60in_input = id59out_result;

    id60out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id60in_input));
  }
  { // Node ID: 187 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id187in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id187in_option0 = id20out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id187in_option1 = id60out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id187x_1;

    switch((id187in_sel.getValueAsLong())) {
      case 0l:
        id187x_1 = id187in_option0;
        break;
      case 1l:
        id187x_1 = id187in_option1;
        break;
      default:
        id187x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id187out_result[(getCycle()+1)%2] = (id187x_1);
  }
  { // Node ID: 426 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id426in_a = id326out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id426in_b = id187out_result[getCycle()%2];

    id426out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id426in_a,id426in_b));
  }
  HWRawBits<64> id567out_dataout;

  { // Node ID: 567 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id567in_datain = id539out_dataa[getCycle()%3];

    id567out_dataout = (shift_left_fixed(id567in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id329out_output;

  { // Node ID: 329 (NodeReinterpret)
    const HWRawBits<64> &id329in_input = id567out_dataout;

    id329out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id329in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id330out_o;

  { // Node ID: 330 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id330in_i = id329out_output;

    id330out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id330in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id331out_o;

  { // Node ID: 331 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id331in_i = id330out_o;

    id331out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id331in_i));
  }
  HWRawBits<32> id21out_result;

  { // Node ID: 21 (NodeSlice)
    const HWRawBits<1280> &id21in_a = id18out_data;

    id21out_result = (slice<32,32>(id21in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id22out_output;

  { // Node ID: 22 (NodeReinterpret)
    const HWRawBits<32> &id22in_input = id21out_result;

    id22out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id22in_input));
  }
  HWRawBits<32> id61out_result;

  { // Node ID: 61 (NodeSlice)
    const HWRawBits<1280> &id61in_a = id18out_data;

    id61out_result = (slice<672,32>(id61in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id62out_output;

  { // Node ID: 62 (NodeReinterpret)
    const HWRawBits<32> &id62in_input = id61out_result;

    id62out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id62in_input));
  }
  { // Node ID: 193 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id193in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id193in_option0 = id22out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id193in_option1 = id62out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id193x_1;

    switch((id193in_sel.getValueAsLong())) {
      case 0l:
        id193x_1 = id193in_option0;
        break;
      case 1l:
        id193x_1 = id193in_option1;
        break;
      default:
        id193x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id193out_result[(getCycle()+1)%2] = (id193x_1);
  }
  { // Node ID: 427 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id427in_a = id331out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id427in_b = id193out_result[getCycle()%2];

    id427out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id427in_a,id427in_b));
  }
  { // Node ID: 446 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id446in_a = id426out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id446in_b = id427out_result[getCycle()%8];

    id446out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id446in_a,id446in_b));
  }
  HWRawBits<64> id568out_dataout;

  { // Node ID: 568 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id568in_datain = id539out_dataa[getCycle()%3];

    id568out_dataout = (shift_left_fixed(id568in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id334out_output;

  { // Node ID: 334 (NodeReinterpret)
    const HWRawBits<64> &id334in_input = id568out_dataout;

    id334out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id334in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id335out_o;

  { // Node ID: 335 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id335in_i = id334out_output;

    id335out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id335in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id336out_o;

  { // Node ID: 336 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id336in_i = id335out_o;

    id336out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id336in_i));
  }
  HWRawBits<32> id23out_result;

  { // Node ID: 23 (NodeSlice)
    const HWRawBits<1280> &id23in_a = id18out_data;

    id23out_result = (slice<64,32>(id23in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id24out_output;

  { // Node ID: 24 (NodeReinterpret)
    const HWRawBits<32> &id24in_input = id23out_result;

    id24out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id24in_input));
  }
  HWRawBits<32> id63out_result;

  { // Node ID: 63 (NodeSlice)
    const HWRawBits<1280> &id63in_a = id18out_data;

    id63out_result = (slice<704,32>(id63in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id64out_output;

  { // Node ID: 64 (NodeReinterpret)
    const HWRawBits<32> &id64in_input = id63out_result;

    id64out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id64in_input));
  }
  { // Node ID: 199 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id199in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id199in_option0 = id24out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id199in_option1 = id64out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id199x_1;

    switch((id199in_sel.getValueAsLong())) {
      case 0l:
        id199x_1 = id199in_option0;
        break;
      case 1l:
        id199x_1 = id199in_option1;
        break;
      default:
        id199x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id199out_result[(getCycle()+1)%2] = (id199x_1);
  }
  { // Node ID: 428 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id428in_a = id336out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id428in_b = id199out_result[getCycle()%2];

    id428out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id428in_a,id428in_b));
  }
  HWRawBits<64> id569out_dataout;

  { // Node ID: 569 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id569in_datain = id539out_dataa[getCycle()%3];

    id569out_dataout = (shift_left_fixed(id569in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id339out_output;

  { // Node ID: 339 (NodeReinterpret)
    const HWRawBits<64> &id339in_input = id569out_dataout;

    id339out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id339in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id340out_o;

  { // Node ID: 340 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id340in_i = id339out_output;

    id340out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id340in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id341out_o;

  { // Node ID: 341 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id341in_i = id340out_o;

    id341out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id341in_i));
  }
  HWRawBits<32> id25out_result;

  { // Node ID: 25 (NodeSlice)
    const HWRawBits<1280> &id25in_a = id18out_data;

    id25out_result = (slice<96,32>(id25in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id26out_output;

  { // Node ID: 26 (NodeReinterpret)
    const HWRawBits<32> &id26in_input = id25out_result;

    id26out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id26in_input));
  }
  HWRawBits<32> id65out_result;

  { // Node ID: 65 (NodeSlice)
    const HWRawBits<1280> &id65in_a = id18out_data;

    id65out_result = (slice<736,32>(id65in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id66out_output;

  { // Node ID: 66 (NodeReinterpret)
    const HWRawBits<32> &id66in_input = id65out_result;

    id66out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id66in_input));
  }
  { // Node ID: 205 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id205in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id205in_option0 = id26out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id205in_option1 = id66out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id205x_1;

    switch((id205in_sel.getValueAsLong())) {
      case 0l:
        id205x_1 = id205in_option0;
        break;
      case 1l:
        id205x_1 = id205in_option1;
        break;
      default:
        id205x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id205out_result[(getCycle()+1)%2] = (id205x_1);
  }
  { // Node ID: 429 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id429in_a = id341out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id429in_b = id205out_result[getCycle()%2];

    id429out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id429in_a,id429in_b));
  }
  { // Node ID: 447 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id447in_a = id428out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id447in_b = id429out_result[getCycle()%8];

    id447out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id447in_a,id447in_b));
  }
  { // Node ID: 456 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id456in_a = id446out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id456in_b = id447out_result[getCycle()%2];

    id456out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id456in_a,id456in_b));
  }
  HWOffsetFix<11,0,UNSIGNED> id342out_o;

  { // Node ID: 342 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id342in_i = id600out_output[getCycle()%5];

    id342out_o = (cast_fixed2fixed<11,0,UNSIGNED,TONEAREVEN>(id342in_i));
  }
  { // Node ID: 540 (NodeMappedRom)
    const HWOffsetFix<11,0,UNSIGNED> &id540in_addra = id342out_o;

    long id540x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id540x_2;

    (id540x_1) = (id540in_addra.getValueAsLong());
    switch(((long)((id540x_1)<(2000l)))) {
      case 0l:
        id540x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id540x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom1", id540x_1) );
        break;
      default:
        id540x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id540out_dataa[(getCycle()+2)%3] = (id540x_2);
  }
  HWRawBits<64> id592out_output;

  { // Node ID: 592 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id592in_input = id540out_dataa[getCycle()%3];

    id592out_output = (cast_fixed2bits(id592in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id345out_output;

  { // Node ID: 345 (NodeReinterpret)
    const HWRawBits<64> &id345in_input = id592out_output;

    id345out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id345in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id346out_o;

  { // Node ID: 346 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id346in_i = id345out_output;

    id346out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id346in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id347out_o;

  { // Node ID: 347 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id347in_i = id346out_o;

    id347out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id347in_i));
  }
  HWRawBits<32> id27out_result;

  { // Node ID: 27 (NodeSlice)
    const HWRawBits<1280> &id27in_a = id18out_data;

    id27out_result = (slice<128,32>(id27in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id28out_output;

  { // Node ID: 28 (NodeReinterpret)
    const HWRawBits<32> &id28in_input = id27out_result;

    id28out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id28in_input));
  }
  HWRawBits<32> id67out_result;

  { // Node ID: 67 (NodeSlice)
    const HWRawBits<1280> &id67in_a = id18out_data;

    id67out_result = (slice<768,32>(id67in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id68out_output;

  { // Node ID: 68 (NodeReinterpret)
    const HWRawBits<32> &id68in_input = id67out_result;

    id68out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id68in_input));
  }
  { // Node ID: 211 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id211in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id211in_option0 = id28out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id211in_option1 = id68out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id211x_1;

    switch((id211in_sel.getValueAsLong())) {
      case 0l:
        id211x_1 = id211in_option0;
        break;
      case 1l:
        id211x_1 = id211in_option1;
        break;
      default:
        id211x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id211out_result[(getCycle()+1)%2] = (id211x_1);
  }
  { // Node ID: 430 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id430in_a = id347out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id430in_b = id211out_result[getCycle()%2];

    id430out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id430in_a,id430in_b));
  }
  HWRawBits<64> id571out_dataout;

  { // Node ID: 571 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id571in_datain = id540out_dataa[getCycle()%3];

    id571out_dataout = (shift_left_fixed(id571in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id350out_output;

  { // Node ID: 350 (NodeReinterpret)
    const HWRawBits<64> &id350in_input = id571out_dataout;

    id350out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id350in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id351out_o;

  { // Node ID: 351 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id351in_i = id350out_output;

    id351out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id351in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id352out_o;

  { // Node ID: 352 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id352in_i = id351out_o;

    id352out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id352in_i));
  }
  HWRawBits<32> id29out_result;

  { // Node ID: 29 (NodeSlice)
    const HWRawBits<1280> &id29in_a = id18out_data;

    id29out_result = (slice<160,32>(id29in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id30out_output;

  { // Node ID: 30 (NodeReinterpret)
    const HWRawBits<32> &id30in_input = id29out_result;

    id30out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id30in_input));
  }
  HWRawBits<32> id69out_result;

  { // Node ID: 69 (NodeSlice)
    const HWRawBits<1280> &id69in_a = id18out_data;

    id69out_result = (slice<800,32>(id69in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id70out_output;

  { // Node ID: 70 (NodeReinterpret)
    const HWRawBits<32> &id70in_input = id69out_result;

    id70out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id70in_input));
  }
  { // Node ID: 217 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id217in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id217in_option0 = id30out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id217in_option1 = id70out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id217x_1;

    switch((id217in_sel.getValueAsLong())) {
      case 0l:
        id217x_1 = id217in_option0;
        break;
      case 1l:
        id217x_1 = id217in_option1;
        break;
      default:
        id217x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id217out_result[(getCycle()+1)%2] = (id217x_1);
  }
  { // Node ID: 431 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id431in_a = id352out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id431in_b = id217out_result[getCycle()%2];

    id431out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id431in_a,id431in_b));
  }
  { // Node ID: 448 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id448in_a = id430out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id448in_b = id431out_result[getCycle()%8];

    id448out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id448in_a,id448in_b));
  }
  HWRawBits<64> id572out_dataout;

  { // Node ID: 572 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id572in_datain = id540out_dataa[getCycle()%3];

    id572out_dataout = (shift_left_fixed(id572in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id355out_output;

  { // Node ID: 355 (NodeReinterpret)
    const HWRawBits<64> &id355in_input = id572out_dataout;

    id355out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id355in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id356out_o;

  { // Node ID: 356 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id356in_i = id355out_output;

    id356out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id356in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id357out_o;

  { // Node ID: 357 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id357in_i = id356out_o;

    id357out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id357in_i));
  }
  HWRawBits<32> id31out_result;

  { // Node ID: 31 (NodeSlice)
    const HWRawBits<1280> &id31in_a = id18out_data;

    id31out_result = (slice<192,32>(id31in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id32out_output;

  { // Node ID: 32 (NodeReinterpret)
    const HWRawBits<32> &id32in_input = id31out_result;

    id32out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id32in_input));
  }
  HWRawBits<32> id71out_result;

  { // Node ID: 71 (NodeSlice)
    const HWRawBits<1280> &id71in_a = id18out_data;

    id71out_result = (slice<832,32>(id71in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id72out_output;

  { // Node ID: 72 (NodeReinterpret)
    const HWRawBits<32> &id72in_input = id71out_result;

    id72out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id72in_input));
  }
  { // Node ID: 223 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id223in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id223in_option0 = id32out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id223in_option1 = id72out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id223x_1;

    switch((id223in_sel.getValueAsLong())) {
      case 0l:
        id223x_1 = id223in_option0;
        break;
      case 1l:
        id223x_1 = id223in_option1;
        break;
      default:
        id223x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id223out_result[(getCycle()+1)%2] = (id223x_1);
  }
  { // Node ID: 432 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id432in_a = id357out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id432in_b = id223out_result[getCycle()%2];

    id432out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id432in_a,id432in_b));
  }
  HWRawBits<64> id573out_dataout;

  { // Node ID: 573 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id573in_datain = id540out_dataa[getCycle()%3];

    id573out_dataout = (shift_left_fixed(id573in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id360out_output;

  { // Node ID: 360 (NodeReinterpret)
    const HWRawBits<64> &id360in_input = id573out_dataout;

    id360out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id360in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id361out_o;

  { // Node ID: 361 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id361in_i = id360out_output;

    id361out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id361in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id362out_o;

  { // Node ID: 362 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id362in_i = id361out_o;

    id362out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id362in_i));
  }
  HWRawBits<32> id33out_result;

  { // Node ID: 33 (NodeSlice)
    const HWRawBits<1280> &id33in_a = id18out_data;

    id33out_result = (slice<224,32>(id33in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id34out_output;

  { // Node ID: 34 (NodeReinterpret)
    const HWRawBits<32> &id34in_input = id33out_result;

    id34out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id34in_input));
  }
  HWRawBits<32> id73out_result;

  { // Node ID: 73 (NodeSlice)
    const HWRawBits<1280> &id73in_a = id18out_data;

    id73out_result = (slice<864,32>(id73in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id74out_output;

  { // Node ID: 74 (NodeReinterpret)
    const HWRawBits<32> &id74in_input = id73out_result;

    id74out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id74in_input));
  }
  { // Node ID: 229 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id229in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id229in_option0 = id34out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id229in_option1 = id74out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id229x_1;

    switch((id229in_sel.getValueAsLong())) {
      case 0l:
        id229x_1 = id229in_option0;
        break;
      case 1l:
        id229x_1 = id229in_option1;
        break;
      default:
        id229x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id229out_result[(getCycle()+1)%2] = (id229x_1);
  }
  { // Node ID: 433 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id433in_a = id362out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id433in_b = id229out_result[getCycle()%2];

    id433out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id433in_a,id433in_b));
  }
  { // Node ID: 449 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id449in_a = id432out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id449in_b = id433out_result[getCycle()%8];

    id449out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id449in_a,id449in_b));
  }
  { // Node ID: 457 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id457in_a = id448out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id457in_b = id449out_result[getCycle()%2];

    id457out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id457in_a,id457in_b));
  }
  { // Node ID: 461 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id461in_a = id456out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id461in_b = id457out_result[getCycle()%2];

    id461out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id461in_a,id461in_b));
  }
  HWOffsetFix<11,0,UNSIGNED> id363out_o;

  { // Node ID: 363 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id363in_i = id600out_output[getCycle()%5];

    id363out_o = (cast_fixed2fixed<11,0,UNSIGNED,TONEAREVEN>(id363in_i));
  }
  { // Node ID: 541 (NodeMappedRom)
    const HWOffsetFix<11,0,UNSIGNED> &id541in_addra = id363out_o;

    long id541x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id541x_2;

    (id541x_1) = (id541in_addra.getValueAsLong());
    switch(((long)((id541x_1)<(2000l)))) {
      case 0l:
        id541x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id541x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom2", id541x_1) );
        break;
      default:
        id541x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id541out_dataa[(getCycle()+2)%3] = (id541x_2);
  }
  HWRawBits<64> id593out_output;

  { // Node ID: 593 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id593in_input = id541out_dataa[getCycle()%3];

    id593out_output = (cast_fixed2bits(id593in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id366out_output;

  { // Node ID: 366 (NodeReinterpret)
    const HWRawBits<64> &id366in_input = id593out_output;

    id366out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id366in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id367out_o;

  { // Node ID: 367 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id367in_i = id366out_output;

    id367out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id367in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id368out_o;

  { // Node ID: 368 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id368in_i = id367out_o;

    id368out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id368in_i));
  }
  HWRawBits<32> id35out_result;

  { // Node ID: 35 (NodeSlice)
    const HWRawBits<1280> &id35in_a = id18out_data;

    id35out_result = (slice<256,32>(id35in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id36out_output;

  { // Node ID: 36 (NodeReinterpret)
    const HWRawBits<32> &id36in_input = id35out_result;

    id36out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id36in_input));
  }
  HWRawBits<32> id75out_result;

  { // Node ID: 75 (NodeSlice)
    const HWRawBits<1280> &id75in_a = id18out_data;

    id75out_result = (slice<896,32>(id75in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id76out_output;

  { // Node ID: 76 (NodeReinterpret)
    const HWRawBits<32> &id76in_input = id75out_result;

    id76out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id76in_input));
  }
  { // Node ID: 235 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id235in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id235in_option0 = id36out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id235in_option1 = id76out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id235x_1;

    switch((id235in_sel.getValueAsLong())) {
      case 0l:
        id235x_1 = id235in_option0;
        break;
      case 1l:
        id235x_1 = id235in_option1;
        break;
      default:
        id235x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id235out_result[(getCycle()+1)%2] = (id235x_1);
  }
  { // Node ID: 434 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id434in_a = id368out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id434in_b = id235out_result[getCycle()%2];

    id434out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id434in_a,id434in_b));
  }
  HWRawBits<64> id575out_dataout;

  { // Node ID: 575 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id575in_datain = id541out_dataa[getCycle()%3];

    id575out_dataout = (shift_left_fixed(id575in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id371out_output;

  { // Node ID: 371 (NodeReinterpret)
    const HWRawBits<64> &id371in_input = id575out_dataout;

    id371out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id371in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id372out_o;

  { // Node ID: 372 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id372in_i = id371out_output;

    id372out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id372in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id373out_o;

  { // Node ID: 373 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id373in_i = id372out_o;

    id373out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id373in_i));
  }
  HWRawBits<32> id37out_result;

  { // Node ID: 37 (NodeSlice)
    const HWRawBits<1280> &id37in_a = id18out_data;

    id37out_result = (slice<288,32>(id37in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id38out_output;

  { // Node ID: 38 (NodeReinterpret)
    const HWRawBits<32> &id38in_input = id37out_result;

    id38out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id38in_input));
  }
  HWRawBits<32> id77out_result;

  { // Node ID: 77 (NodeSlice)
    const HWRawBits<1280> &id77in_a = id18out_data;

    id77out_result = (slice<928,32>(id77in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id78out_output;

  { // Node ID: 78 (NodeReinterpret)
    const HWRawBits<32> &id78in_input = id77out_result;

    id78out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id78in_input));
  }
  { // Node ID: 241 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id241in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id241in_option0 = id38out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id241in_option1 = id78out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id241x_1;

    switch((id241in_sel.getValueAsLong())) {
      case 0l:
        id241x_1 = id241in_option0;
        break;
      case 1l:
        id241x_1 = id241in_option1;
        break;
      default:
        id241x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id241out_result[(getCycle()+1)%2] = (id241x_1);
  }
  { // Node ID: 435 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id435in_a = id373out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id435in_b = id241out_result[getCycle()%2];

    id435out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id435in_a,id435in_b));
  }
  { // Node ID: 450 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id450in_a = id434out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id450in_b = id435out_result[getCycle()%8];

    id450out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id450in_a,id450in_b));
  }
  HWRawBits<64> id576out_dataout;

  { // Node ID: 576 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id576in_datain = id541out_dataa[getCycle()%3];

    id576out_dataout = (shift_left_fixed(id576in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id376out_output;

  { // Node ID: 376 (NodeReinterpret)
    const HWRawBits<64> &id376in_input = id576out_dataout;

    id376out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id376in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id377out_o;

  { // Node ID: 377 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id377in_i = id376out_output;

    id377out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id377in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id378out_o;

  { // Node ID: 378 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id378in_i = id377out_o;

    id378out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id378in_i));
  }
  HWRawBits<32> id39out_result;

  { // Node ID: 39 (NodeSlice)
    const HWRawBits<1280> &id39in_a = id18out_data;

    id39out_result = (slice<320,32>(id39in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id40out_output;

  { // Node ID: 40 (NodeReinterpret)
    const HWRawBits<32> &id40in_input = id39out_result;

    id40out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id40in_input));
  }
  HWRawBits<32> id79out_result;

  { // Node ID: 79 (NodeSlice)
    const HWRawBits<1280> &id79in_a = id18out_data;

    id79out_result = (slice<960,32>(id79in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id80out_output;

  { // Node ID: 80 (NodeReinterpret)
    const HWRawBits<32> &id80in_input = id79out_result;

    id80out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id80in_input));
  }
  { // Node ID: 247 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id247in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id247in_option0 = id40out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id247in_option1 = id80out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id247x_1;

    switch((id247in_sel.getValueAsLong())) {
      case 0l:
        id247x_1 = id247in_option0;
        break;
      case 1l:
        id247x_1 = id247in_option1;
        break;
      default:
        id247x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id247out_result[(getCycle()+1)%2] = (id247x_1);
  }
  { // Node ID: 436 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id436in_a = id378out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id436in_b = id247out_result[getCycle()%2];

    id436out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id436in_a,id436in_b));
  }
  HWRawBits<64> id577out_dataout;

  { // Node ID: 577 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id577in_datain = id541out_dataa[getCycle()%3];

    id577out_dataout = (shift_left_fixed(id577in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id381out_output;

  { // Node ID: 381 (NodeReinterpret)
    const HWRawBits<64> &id381in_input = id577out_dataout;

    id381out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id381in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id382out_o;

  { // Node ID: 382 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id382in_i = id381out_output;

    id382out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id382in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id383out_o;

  { // Node ID: 383 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id383in_i = id382out_o;

    id383out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id383in_i));
  }
  HWRawBits<32> id41out_result;

  { // Node ID: 41 (NodeSlice)
    const HWRawBits<1280> &id41in_a = id18out_data;

    id41out_result = (slice<352,32>(id41in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id42out_output;

  { // Node ID: 42 (NodeReinterpret)
    const HWRawBits<32> &id42in_input = id41out_result;

    id42out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id42in_input));
  }
  HWRawBits<32> id81out_result;

  { // Node ID: 81 (NodeSlice)
    const HWRawBits<1280> &id81in_a = id18out_data;

    id81out_result = (slice<992,32>(id81in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id82out_output;

  { // Node ID: 82 (NodeReinterpret)
    const HWRawBits<32> &id82in_input = id81out_result;

    id82out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id82in_input));
  }
  { // Node ID: 253 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id253in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id253in_option0 = id42out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id253in_option1 = id82out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id253x_1;

    switch((id253in_sel.getValueAsLong())) {
      case 0l:
        id253x_1 = id253in_option0;
        break;
      case 1l:
        id253x_1 = id253in_option1;
        break;
      default:
        id253x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id253out_result[(getCycle()+1)%2] = (id253x_1);
  }
  { // Node ID: 437 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id437in_a = id383out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id437in_b = id253out_result[getCycle()%2];

    id437out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id437in_a,id437in_b));
  }
  { // Node ID: 451 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id451in_a = id436out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id451in_b = id437out_result[getCycle()%8];

    id451out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id451in_a,id451in_b));
  }
  { // Node ID: 458 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id458in_a = id450out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id458in_b = id451out_result[getCycle()%2];

    id458out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id458in_a,id458in_b));
  }
  HWOffsetFix<11,0,UNSIGNED> id384out_o;

  { // Node ID: 384 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id384in_i = id600out_output[getCycle()%5];

    id384out_o = (cast_fixed2fixed<11,0,UNSIGNED,TONEAREVEN>(id384in_i));
  }
  { // Node ID: 542 (NodeMappedRom)
    const HWOffsetFix<11,0,UNSIGNED> &id542in_addra = id384out_o;

    long id542x_1;
    HWOffsetFix<64,0,TWOSCOMPLEMENT> id542x_2;

    (id542x_1) = (id542in_addra.getValueAsLong());
    switch(((long)((id542x_1)<(2000l)))) {
      case 0l:
        id542x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
      case 1l:
        id542x_2 = (getMappedMemValue< HWOffsetFix<64,0,TWOSCOMPLEMENT> > ("mappedRom3", id542x_1) );
        break;
      default:
        id542x_2 = (c_hw_fix_64_0_sgn_undef);
        break;
    }
    id542out_dataa[(getCycle()+2)%3] = (id542x_2);
  }
  HWRawBits<64> id594out_output;

  { // Node ID: 594 (NodeReinterpret)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id594in_input = id542out_dataa[getCycle()%3];

    id594out_output = (cast_fixed2bits(id594in_input));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id387out_output;

  { // Node ID: 387 (NodeReinterpret)
    const HWRawBits<64> &id387in_input = id594out_output;

    id387out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id387in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id388out_o;

  { // Node ID: 388 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id388in_i = id387out_output;

    id388out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id388in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id389out_o;

  { // Node ID: 389 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id389in_i = id388out_o;

    id389out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id389in_i));
  }
  HWRawBits<32> id43out_result;

  { // Node ID: 43 (NodeSlice)
    const HWRawBits<1280> &id43in_a = id18out_data;

    id43out_result = (slice<384,32>(id43in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id44out_output;

  { // Node ID: 44 (NodeReinterpret)
    const HWRawBits<32> &id44in_input = id43out_result;

    id44out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id44in_input));
  }
  HWRawBits<32> id83out_result;

  { // Node ID: 83 (NodeSlice)
    const HWRawBits<1280> &id83in_a = id18out_data;

    id83out_result = (slice<1024,32>(id83in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id84out_output;

  { // Node ID: 84 (NodeReinterpret)
    const HWRawBits<32> &id84in_input = id83out_result;

    id84out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id84in_input));
  }
  { // Node ID: 259 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id259in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id259in_option0 = id44out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id259in_option1 = id84out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id259x_1;

    switch((id259in_sel.getValueAsLong())) {
      case 0l:
        id259x_1 = id259in_option0;
        break;
      case 1l:
        id259x_1 = id259in_option1;
        break;
      default:
        id259x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id259out_result[(getCycle()+1)%2] = (id259x_1);
  }
  { // Node ID: 438 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id438in_a = id389out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id438in_b = id259out_result[getCycle()%2];

    id438out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id438in_a,id438in_b));
  }
  HWRawBits<64> id579out_dataout;

  { // Node ID: 579 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id579in_datain = id542out_dataa[getCycle()%3];

    id579out_dataout = (shift_left_fixed(id579in_datain,(16l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id392out_output;

  { // Node ID: 392 (NodeReinterpret)
    const HWRawBits<64> &id392in_input = id579out_dataout;

    id392out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id392in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id393out_o;

  { // Node ID: 393 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id393in_i = id392out_output;

    id393out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id393in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id394out_o;

  { // Node ID: 394 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id394in_i = id393out_o;

    id394out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id394in_i));
  }
  HWRawBits<32> id45out_result;

  { // Node ID: 45 (NodeSlice)
    const HWRawBits<1280> &id45in_a = id18out_data;

    id45out_result = (slice<416,32>(id45in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id46out_output;

  { // Node ID: 46 (NodeReinterpret)
    const HWRawBits<32> &id46in_input = id45out_result;

    id46out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id46in_input));
  }
  HWRawBits<32> id85out_result;

  { // Node ID: 85 (NodeSlice)
    const HWRawBits<1280> &id85in_a = id18out_data;

    id85out_result = (slice<1056,32>(id85in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id86out_output;

  { // Node ID: 86 (NodeReinterpret)
    const HWRawBits<32> &id86in_input = id85out_result;

    id86out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id86in_input));
  }
  { // Node ID: 265 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id265in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id265in_option0 = id46out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id265in_option1 = id86out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id265x_1;

    switch((id265in_sel.getValueAsLong())) {
      case 0l:
        id265x_1 = id265in_option0;
        break;
      case 1l:
        id265x_1 = id265in_option1;
        break;
      default:
        id265x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id265out_result[(getCycle()+1)%2] = (id265x_1);
  }
  { // Node ID: 439 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id439in_a = id394out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id439in_b = id265out_result[getCycle()%2];

    id439out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id439in_a,id439in_b));
  }
  { // Node ID: 452 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id452in_a = id438out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id452in_b = id439out_result[getCycle()%8];

    id452out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id452in_a,id452in_b));
  }
  HWRawBits<64> id580out_dataout;

  { // Node ID: 580 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id580in_datain = id542out_dataa[getCycle()%3];

    id580out_dataout = (shift_left_fixed(id580in_datain,(32l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id397out_output;

  { // Node ID: 397 (NodeReinterpret)
    const HWRawBits<64> &id397in_input = id580out_dataout;

    id397out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id397in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id398out_o;

  { // Node ID: 398 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id398in_i = id397out_output;

    id398out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id398in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id399out_o;

  { // Node ID: 399 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id399in_i = id398out_o;

    id399out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id399in_i));
  }
  HWRawBits<32> id47out_result;

  { // Node ID: 47 (NodeSlice)
    const HWRawBits<1280> &id47in_a = id18out_data;

    id47out_result = (slice<448,32>(id47in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id48out_output;

  { // Node ID: 48 (NodeReinterpret)
    const HWRawBits<32> &id48in_input = id47out_result;

    id48out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id48in_input));
  }
  HWRawBits<32> id87out_result;

  { // Node ID: 87 (NodeSlice)
    const HWRawBits<1280> &id87in_a = id18out_data;

    id87out_result = (slice<1088,32>(id87in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id88out_output;

  { // Node ID: 88 (NodeReinterpret)
    const HWRawBits<32> &id88in_input = id87out_result;

    id88out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id88in_input));
  }
  { // Node ID: 271 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id271in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id271in_option0 = id48out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id271in_option1 = id88out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id271x_1;

    switch((id271in_sel.getValueAsLong())) {
      case 0l:
        id271x_1 = id271in_option0;
        break;
      case 1l:
        id271x_1 = id271in_option1;
        break;
      default:
        id271x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id271out_result[(getCycle()+1)%2] = (id271x_1);
  }
  { // Node ID: 440 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id440in_a = id399out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id440in_b = id271out_result[getCycle()%2];

    id440out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id440in_a,id440in_b));
  }
  HWRawBits<64> id581out_dataout;

  { // Node ID: 581 (NodeShift)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id581in_datain = id542out_dataa[getCycle()%3];

    id581out_dataout = (shift_left_fixed(id581in_datain,(48l)));
  }
  HWOffsetFix<64,0,TWOSCOMPLEMENT> id402out_output;

  { // Node ID: 402 (NodeReinterpret)
    const HWRawBits<64> &id402in_input = id581out_dataout;

    id402out_output = (cast_bits2fixed<64,0,TWOSCOMPLEMENT>(id402in_input));
  }
  HWOffsetFix<24,-8,TWOSCOMPLEMENT> id403out_o;

  { // Node ID: 403 (NodeCast)
    const HWOffsetFix<64,0,TWOSCOMPLEMENT> &id403in_i = id402out_output;

    id403out_o = (cast_fixed2fixed<24,-8,TWOSCOMPLEMENT,TONEAREVEN>(id403in_i));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id404out_o;

  { // Node ID: 404 (NodeCast)
    const HWOffsetFix<24,-8,TWOSCOMPLEMENT> &id404in_i = id403out_o;

    id404out_o = (cast_fixed2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id404in_i));
  }
  HWRawBits<32> id49out_result;

  { // Node ID: 49 (NodeSlice)
    const HWRawBits<1280> &id49in_a = id18out_data;

    id49out_result = (slice<480,32>(id49in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id50out_output;

  { // Node ID: 50 (NodeReinterpret)
    const HWRawBits<32> &id50in_input = id49out_result;

    id50out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id50in_input));
  }
  HWRawBits<32> id89out_result;

  { // Node ID: 89 (NodeSlice)
    const HWRawBits<1280> &id89in_a = id18out_data;

    id89out_result = (slice<1120,32>(id89in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id90out_output;

  { // Node ID: 90 (NodeReinterpret)
    const HWRawBits<32> &id90in_input = id89out_result;

    id90out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id90in_input));
  }
  { // Node ID: 277 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id277in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id277in_option0 = id50out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id277in_option1 = id90out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id277x_1;

    switch((id277in_sel.getValueAsLong())) {
      case 0l:
        id277x_1 = id277in_option0;
        break;
      case 1l:
        id277x_1 = id277in_option1;
        break;
      default:
        id277x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id277out_result[(getCycle()+1)%2] = (id277x_1);
  }
  { // Node ID: 441 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id441in_a = id404out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id441in_b = id277out_result[getCycle()%2];

    id441out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id441in_a,id441in_b));
  }
  { // Node ID: 453 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id453in_a = id440out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id453in_b = id441out_result[getCycle()%8];

    id453out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id453in_a,id453in_b));
  }
  { // Node ID: 459 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id459in_a = id452out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id459in_b = id453out_result[getCycle()%2];

    id459out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id459in_a,id459in_b));
  }
  { // Node ID: 462 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id462in_a = id458out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id462in_b = id459out_result[getCycle()%2];

    id462out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id462in_a,id462in_b));
  }
  { // Node ID: 463 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id463in_a = id461out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id463in_b = id462out_result[getCycle()%2];

    id463out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id463in_a,id463in_b));
  }
  { // Node ID: 464 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id464in_a = id626out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id464in_b = id463out_result[getCycle()%2];

    id464out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id464in_a,id464in_b));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id515out_output;

  { // Node ID: 515 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id515in_input = id513out_result[getCycle()%2];

    id515out_output = id515in_input;
  }
  { // Node ID: 627 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id627in_input = id515out_output;

    id627out_output[(getCycle()+98)%99] = id627in_input;
  }
  { // Node ID: 512 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id512in_a = id464out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id512in_b = id627out_output[getCycle()%99];

    id512out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id512in_a,id512in_b));
  }
  { // Node ID: 629 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id629in_input = id464out_result[getCycle()%2];

    id629out_output[(getCycle()+1)%2] = id629in_input;
  }
  { // Node ID: 513 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id513in_sel = id628out_output[getCycle()%20];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id513in_option0 = id512out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id513in_option1 = id629out_output[getCycle()%2];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id513x_1;

    switch((id513in_sel.getValueAsLong())) {
      case 0l:
        id513x_1 = id513in_option0;
        break;
      case 1l:
        id513x_1 = id513in_option1;
        break;
      default:
        id513x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id513out_result[(getCycle()+1)%2] = (id513x_1);
  }
  { // Node ID: 663 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id663in_input = id597out_output[getCycle()%2];

    id663out_output[(getCycle()+1)%2] = id663in_input;
  }
  HWOffsetFix<16,2,UNSIGNED> id582out_output;

  { // Node ID: 582 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id582in_input = id598out_output[getCycle()%2];

    id582out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id582in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id583out_output;

  { // Node ID: 583 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id583in_input = id598out_output[getCycle()%2];

    id583out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id583in_input))));
  }
  { // Node ID: 584 (NodeAdd)
    const HWOffsetFix<16,2,UNSIGNED> &id584in_a = id582out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id584in_b = id583out_output;

    id584out_result[(getCycle()+1)%2] = (add_fixed<19,2,UNSIGNED,TONEAREVEN>(id584in_a,id584in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id585out_o;

  { // Node ID: 585 (NodeCast)
    const HWOffsetFix<19,2,UNSIGNED> &id585in_i = id584out_result[getCycle()%2];

    id585out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id585in_i));
  }
  { // Node ID: 508 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id508in_a = id663out_output[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id508in_b = id585out_o;

    id508out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id508in_a,id508in_b));
  }
  HWOffsetFix<10,0,UNSIGNED> id511out_o;

  { // Node ID: 511 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id511in_i = id508out_result[getCycle()%2];

    id511out_o = (cast_fixed2fixed<10,0,UNSIGNED,TONEAREVEN>(id511in_i));
  }
  { // Node ID: 636 (NodeFIFO)
    const HWOffsetFix<10,0,UNSIGNED> &id636in_input = id511out_o;

    id636out_output[(getCycle()+18)%19] = id636in_input;
  }
  HWOffsetFix<16,2,UNSIGNED> id586out_output;

  { // Node ID: 586 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id586in_input = id598out_output[getCycle()%2];

    id586out_output = (cast_bits2fixed<16,2,UNSIGNED>((cast_fixed2bits(id586in_input))));
  }
  HWOffsetFix<16,4,UNSIGNED> id587out_output;

  { // Node ID: 587 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id587in_input = id598out_output[getCycle()%2];

    id587out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id587in_input))));
  }
  { // Node ID: 588 (NodeAdd)
    const HWOffsetFix<16,2,UNSIGNED> &id588in_a = id586out_output;
    const HWOffsetFix<16,4,UNSIGNED> &id588in_b = id587out_output;

    id588out_result[(getCycle()+1)%2] = (add_fixed<19,2,UNSIGNED,TONEAREVEN>(id588in_a,id588in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id589out_o;

  { // Node ID: 589 (NodeCast)
    const HWOffsetFix<19,2,UNSIGNED> &id589in_i = id588out_result[getCycle()%2];

    id589out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id589in_i));
  }
  { // Node ID: 520 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id520in_a = id663out_output[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id520in_b = id589out_o;

    id520out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id520in_a,id520in_b));
  }
  HWOffsetFix<10,0,UNSIGNED> id523out_o;

  { // Node ID: 523 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id523in_i = id520out_result[getCycle()%2];

    id523out_o = (cast_fixed2fixed<10,0,UNSIGNED,TONEAREVEN>(id523in_i));
  }
  { // Node ID: 637 (NodeFIFO)
    const HWOffsetFix<10,0,UNSIGNED> &id637in_input = id523out_o;

    id637out_output[(getCycle()+18)%19] = id637in_input;
  }
  { // Node ID: 538 (NodeMappedRom)
    const HWOffsetFix<10,0,UNSIGNED> &id538in_addra = id636out_output[getCycle()%19];
    const HWOffsetFix<10,0,UNSIGNED> &id538in_addrb = id637out_output[getCycle()%19];

    long id538x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id538x_2;
    long id538x_3;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id538x_4;

    (id538x_1) = (id538in_addra.getValueAsLong());
    switch(((long)((id538x_1)<(1000l)))) {
      case 0l:
        id538x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id538x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("bias", id538x_1) );
        break;
      default:
        id538x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id538out_dataa[(getCycle()+2)%3] = (id538x_2);
    (id538x_3) = (id538in_addrb.getValueAsLong());
    switch(((long)((id538x_3)<(1000l)))) {
      case 0l:
        id538x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id538x_4 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("bias", id538x_3) );
        break;
      default:
        id538x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id538out_datab[(getCycle()+2)%3] = (id538x_4);
  }
  { // Node ID: 514 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id514in_a = id513out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id514in_b = id538out_dataa[getCycle()%3];

    id514out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id514in_a,id514in_b));
  }
  HWRawBits<32> id532out_output;

  { // Node ID: 532 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id532in_input = id514out_result[getCycle()%2];

    id532out_output = (cast_fixed2bits(id532in_input));
  }
  if ( (getFillLevel() >= (25l)) && (getFlushLevel() < (25l)|| !isFlushingActive() ))
  { // Node ID: 531 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id531in_output_control = id530out_result;
    const HWRawBits<32> &id531in_data = id532out_output;

    bool id531x_1;

    (id531x_1) = ((id531in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(25l))&(isFlushingActive()))));
    if((id531x_1)) {
      writeOutput(m_y01, id531in_data);
    }
  }
  { // Node ID: 533 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id534out_result;

  { // Node ID: 534 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id534in_a = id533out_io_y11_force_disabled;

    id534out_result = (not_fixed(id534in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id535out_result;

  { // Node ID: 535 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id535in_a = id664out_output[getCycle()%3];
    const HWOffsetFix<1,0,UNSIGNED> &id535in_b = id534out_result;

    HWOffsetFix<1,0,UNSIGNED> id535x_1;

    (id535x_1) = (and_fixed(id535in_a,id535in_b));
    id535out_result = (id535x_1);
  }
  { // Node ID: 99 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id100out_result;

  { // Node ID: 100 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id100in_a = id99out_io_x11_force_disabled;

    id100out_result = (not_fixed(id100in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id101out_result;

  { // Node ID: 101 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id101in_a = id14out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id101in_b = id100out_result;

    HWOffsetFix<1,0,UNSIGNED> id101x_1;

    (id101x_1) = (and_fixed(id101in_a,id101in_b));
    id101out_result = (id101x_1);
  }
  if ( (getFillLevel() >= (4l)))
  { // Node ID: 102 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id102in_enable = id101out_result;

    (id102st_read_next_cycle) = ((id102in_enable.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    queueReadRequest(m_x11, id102st_read_next_cycle.getValueAsBool());
  }
  HWRawBits<32> id135out_result;

  { // Node ID: 135 (NodeSlice)
    const HWRawBits<1280> &id135in_a = id102out_data;

    id135out_result = (slice<512,32>(id135in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id136out_output;

  { // Node ID: 136 (NodeReinterpret)
    const HWRawBits<32> &id136in_input = id135out_result;

    id136out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id136in_input));
  }
  HWRawBits<32> id175out_result;

  { // Node ID: 175 (NodeSlice)
    const HWRawBits<1280> &id175in_a = id102out_data;

    id175out_result = (slice<1152,32>(id175in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id176out_output;

  { // Node ID: 176 (NodeReinterpret)
    const HWRawBits<32> &id176in_input = id175out_result;

    id176out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id176in_input));
  }
  { // Node ID: 286 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id286in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id286in_option0 = id136out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id286in_option1 = id176out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id286x_1;

    switch((id286in_sel.getValueAsLong())) {
      case 0l:
        id286x_1 = id286in_option0;
        break;
      case 1l:
        id286x_1 = id286in_option1;
        break;
      default:
        id286x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id286out_result[(getCycle()+1)%2] = (id286x_1);
  }
  { // Node ID: 481 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id481in_a = id410out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id481in_b = id286out_result[getCycle()%2];

    id481out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id481in_a,id481in_b));
  }
  HWRawBits<32> id137out_result;

  { // Node ID: 137 (NodeSlice)
    const HWRawBits<1280> &id137in_a = id102out_data;

    id137out_result = (slice<544,32>(id137in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id138out_output;

  { // Node ID: 138 (NodeReinterpret)
    const HWRawBits<32> &id138in_input = id137out_result;

    id138out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id138in_input));
  }
  HWRawBits<32> id177out_result;

  { // Node ID: 177 (NodeSlice)
    const HWRawBits<1280> &id177in_a = id102out_data;

    id177out_result = (slice<1184,32>(id177in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id178out_output;

  { // Node ID: 178 (NodeReinterpret)
    const HWRawBits<32> &id178in_input = id177out_result;

    id178out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id178in_input));
  }
  { // Node ID: 292 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id292in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id292in_option0 = id138out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id292in_option1 = id178out_output;

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
  { // Node ID: 482 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id482in_a = id415out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id482in_b = id292out_result[getCycle()%2];

    id482out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id482in_a,id482in_b));
  }
  { // Node ID: 493 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id493in_a = id481out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id493in_b = id482out_result[getCycle()%8];

    id493out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id493in_a,id493in_b));
  }
  HWRawBits<32> id139out_result;

  { // Node ID: 139 (NodeSlice)
    const HWRawBits<1280> &id139in_a = id102out_data;

    id139out_result = (slice<576,32>(id139in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id140out_output;

  { // Node ID: 140 (NodeReinterpret)
    const HWRawBits<32> &id140in_input = id139out_result;

    id140out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id140in_input));
  }
  HWRawBits<32> id179out_result;

  { // Node ID: 179 (NodeSlice)
    const HWRawBits<1280> &id179in_a = id102out_data;

    id179out_result = (slice<1216,32>(id179in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id180out_output;

  { // Node ID: 180 (NodeReinterpret)
    const HWRawBits<32> &id180in_input = id179out_result;

    id180out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id180in_input));
  }
  { // Node ID: 298 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id298in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id298in_option0 = id140out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id298in_option1 = id180out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id298x_1;

    switch((id298in_sel.getValueAsLong())) {
      case 0l:
        id298x_1 = id298in_option0;
        break;
      case 1l:
        id298x_1 = id298in_option1;
        break;
      default:
        id298x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id298out_result[(getCycle()+1)%2] = (id298x_1);
  }
  { // Node ID: 483 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id483in_a = id420out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id483in_b = id298out_result[getCycle()%2];

    id483out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id483in_a,id483in_b));
  }
  HWRawBits<32> id141out_result;

  { // Node ID: 141 (NodeSlice)
    const HWRawBits<1280> &id141in_a = id102out_data;

    id141out_result = (slice<608,32>(id141in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id142out_output;

  { // Node ID: 142 (NodeReinterpret)
    const HWRawBits<32> &id142in_input = id141out_result;

    id142out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id142in_input));
  }
  HWRawBits<32> id181out_result;

  { // Node ID: 181 (NodeSlice)
    const HWRawBits<1280> &id181in_a = id102out_data;

    id181out_result = (slice<1248,32>(id181in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id182out_output;

  { // Node ID: 182 (NodeReinterpret)
    const HWRawBits<32> &id182in_input = id181out_result;

    id182out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id182in_input));
  }
  { // Node ID: 304 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id304in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id304in_option0 = id142out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id304in_option1 = id182out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id304x_1;

    switch((id304in_sel.getValueAsLong())) {
      case 0l:
        id304x_1 = id304in_option0;
        break;
      case 1l:
        id304x_1 = id304in_option1;
        break;
      default:
        id304x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id304out_result[(getCycle()+1)%2] = (id304x_1);
  }
  { // Node ID: 484 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id484in_a = id425out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id484in_b = id304out_result[getCycle()%2];

    id484out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id484in_a,id484in_b));
  }
  { // Node ID: 494 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id494in_a = id483out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id494in_b = id484out_result[getCycle()%8];

    id494out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id494in_a,id494in_b));
  }
  { // Node ID: 499 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id499in_a = id493out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id499in_b = id494out_result[getCycle()%2];

    id499out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id499in_a,id499in_b));
  }
  { // Node ID: 659 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id659in_input = id499out_result[getCycle()%2];

    id659out_output[(getCycle()+2)%3] = id659in_input;
  }
  HWRawBits<32> id103out_result;

  { // Node ID: 103 (NodeSlice)
    const HWRawBits<1280> &id103in_a = id102out_data;

    id103out_result = (slice<0,32>(id103in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id104out_output;

  { // Node ID: 104 (NodeReinterpret)
    const HWRawBits<32> &id104in_input = id103out_result;

    id104out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id104in_input));
  }
  HWRawBits<32> id143out_result;

  { // Node ID: 143 (NodeSlice)
    const HWRawBits<1280> &id143in_a = id102out_data;

    id143out_result = (slice<640,32>(id143in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id144out_output;

  { // Node ID: 144 (NodeReinterpret)
    const HWRawBits<32> &id144in_input = id143out_result;

    id144out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id144in_input));
  }
  { // Node ID: 190 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id190in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id190in_option0 = id104out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id190in_option1 = id144out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id190x_1;

    switch((id190in_sel.getValueAsLong())) {
      case 0l:
        id190x_1 = id190in_option0;
        break;
      case 1l:
        id190x_1 = id190in_option1;
        break;
      default:
        id190x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id190out_result[(getCycle()+1)%2] = (id190x_1);
  }
  { // Node ID: 465 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id465in_a = id326out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id465in_b = id190out_result[getCycle()%2];

    id465out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id465in_a,id465in_b));
  }
  HWRawBits<32> id105out_result;

  { // Node ID: 105 (NodeSlice)
    const HWRawBits<1280> &id105in_a = id102out_data;

    id105out_result = (slice<32,32>(id105in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id106out_output;

  { // Node ID: 106 (NodeReinterpret)
    const HWRawBits<32> &id106in_input = id105out_result;

    id106out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id106in_input));
  }
  HWRawBits<32> id145out_result;

  { // Node ID: 145 (NodeSlice)
    const HWRawBits<1280> &id145in_a = id102out_data;

    id145out_result = (slice<672,32>(id145in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id146out_output;

  { // Node ID: 146 (NodeReinterpret)
    const HWRawBits<32> &id146in_input = id145out_result;

    id146out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id146in_input));
  }
  { // Node ID: 196 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id196in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id196in_option0 = id106out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id196in_option1 = id146out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id196x_1;

    switch((id196in_sel.getValueAsLong())) {
      case 0l:
        id196x_1 = id196in_option0;
        break;
      case 1l:
        id196x_1 = id196in_option1;
        break;
      default:
        id196x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id196out_result[(getCycle()+1)%2] = (id196x_1);
  }
  { // Node ID: 466 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id466in_a = id331out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id466in_b = id196out_result[getCycle()%2];

    id466out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id466in_a,id466in_b));
  }
  { // Node ID: 485 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id485in_a = id465out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id485in_b = id466out_result[getCycle()%8];

    id485out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id485in_a,id485in_b));
  }
  HWRawBits<32> id107out_result;

  { // Node ID: 107 (NodeSlice)
    const HWRawBits<1280> &id107in_a = id102out_data;

    id107out_result = (slice<64,32>(id107in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id108out_output;

  { // Node ID: 108 (NodeReinterpret)
    const HWRawBits<32> &id108in_input = id107out_result;

    id108out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id108in_input));
  }
  HWRawBits<32> id147out_result;

  { // Node ID: 147 (NodeSlice)
    const HWRawBits<1280> &id147in_a = id102out_data;

    id147out_result = (slice<704,32>(id147in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id148out_output;

  { // Node ID: 148 (NodeReinterpret)
    const HWRawBits<32> &id148in_input = id147out_result;

    id148out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id148in_input));
  }
  { // Node ID: 202 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id202in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id202in_option0 = id108out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id202in_option1 = id148out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id202x_1;

    switch((id202in_sel.getValueAsLong())) {
      case 0l:
        id202x_1 = id202in_option0;
        break;
      case 1l:
        id202x_1 = id202in_option1;
        break;
      default:
        id202x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id202out_result[(getCycle()+1)%2] = (id202x_1);
  }
  { // Node ID: 467 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id467in_a = id336out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id467in_b = id202out_result[getCycle()%2];

    id467out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id467in_a,id467in_b));
  }
  HWRawBits<32> id109out_result;

  { // Node ID: 109 (NodeSlice)
    const HWRawBits<1280> &id109in_a = id102out_data;

    id109out_result = (slice<96,32>(id109in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id110out_output;

  { // Node ID: 110 (NodeReinterpret)
    const HWRawBits<32> &id110in_input = id109out_result;

    id110out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id110in_input));
  }
  HWRawBits<32> id149out_result;

  { // Node ID: 149 (NodeSlice)
    const HWRawBits<1280> &id149in_a = id102out_data;

    id149out_result = (slice<736,32>(id149in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id150out_output;

  { // Node ID: 150 (NodeReinterpret)
    const HWRawBits<32> &id150in_input = id149out_result;

    id150out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id150in_input));
  }
  { // Node ID: 208 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id208in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id208in_option0 = id110out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id208in_option1 = id150out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id208x_1;

    switch((id208in_sel.getValueAsLong())) {
      case 0l:
        id208x_1 = id208in_option0;
        break;
      case 1l:
        id208x_1 = id208in_option1;
        break;
      default:
        id208x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id208out_result[(getCycle()+1)%2] = (id208x_1);
  }
  { // Node ID: 468 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id468in_a = id341out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id468in_b = id208out_result[getCycle()%2];

    id468out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id468in_a,id468in_b));
  }
  { // Node ID: 486 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id486in_a = id467out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id486in_b = id468out_result[getCycle()%8];

    id486out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id486in_a,id486in_b));
  }
  { // Node ID: 495 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id495in_a = id485out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id495in_b = id486out_result[getCycle()%2];

    id495out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id495in_a,id495in_b));
  }
  HWRawBits<32> id111out_result;

  { // Node ID: 111 (NodeSlice)
    const HWRawBits<1280> &id111in_a = id102out_data;

    id111out_result = (slice<128,32>(id111in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id112out_output;

  { // Node ID: 112 (NodeReinterpret)
    const HWRawBits<32> &id112in_input = id111out_result;

    id112out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id112in_input));
  }
  HWRawBits<32> id151out_result;

  { // Node ID: 151 (NodeSlice)
    const HWRawBits<1280> &id151in_a = id102out_data;

    id151out_result = (slice<768,32>(id151in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id152out_output;

  { // Node ID: 152 (NodeReinterpret)
    const HWRawBits<32> &id152in_input = id151out_result;

    id152out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id152in_input));
  }
  { // Node ID: 214 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id214in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id214in_option0 = id112out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id214in_option1 = id152out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id214x_1;

    switch((id214in_sel.getValueAsLong())) {
      case 0l:
        id214x_1 = id214in_option0;
        break;
      case 1l:
        id214x_1 = id214in_option1;
        break;
      default:
        id214x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id214out_result[(getCycle()+1)%2] = (id214x_1);
  }
  { // Node ID: 469 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id469in_a = id347out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id469in_b = id214out_result[getCycle()%2];

    id469out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id469in_a,id469in_b));
  }
  HWRawBits<32> id113out_result;

  { // Node ID: 113 (NodeSlice)
    const HWRawBits<1280> &id113in_a = id102out_data;

    id113out_result = (slice<160,32>(id113in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id114out_output;

  { // Node ID: 114 (NodeReinterpret)
    const HWRawBits<32> &id114in_input = id113out_result;

    id114out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id114in_input));
  }
  HWRawBits<32> id153out_result;

  { // Node ID: 153 (NodeSlice)
    const HWRawBits<1280> &id153in_a = id102out_data;

    id153out_result = (slice<800,32>(id153in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id154out_output;

  { // Node ID: 154 (NodeReinterpret)
    const HWRawBits<32> &id154in_input = id153out_result;

    id154out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id154in_input));
  }
  { // Node ID: 220 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id220in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id220in_option0 = id114out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id220in_option1 = id154out_output;

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
  { // Node ID: 470 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id470in_a = id352out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id470in_b = id220out_result[getCycle()%2];

    id470out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id470in_a,id470in_b));
  }
  { // Node ID: 487 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id487in_a = id469out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id487in_b = id470out_result[getCycle()%8];

    id487out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id487in_a,id487in_b));
  }
  HWRawBits<32> id115out_result;

  { // Node ID: 115 (NodeSlice)
    const HWRawBits<1280> &id115in_a = id102out_data;

    id115out_result = (slice<192,32>(id115in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id116out_output;

  { // Node ID: 116 (NodeReinterpret)
    const HWRawBits<32> &id116in_input = id115out_result;

    id116out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id116in_input));
  }
  HWRawBits<32> id155out_result;

  { // Node ID: 155 (NodeSlice)
    const HWRawBits<1280> &id155in_a = id102out_data;

    id155out_result = (slice<832,32>(id155in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id156out_output;

  { // Node ID: 156 (NodeReinterpret)
    const HWRawBits<32> &id156in_input = id155out_result;

    id156out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id156in_input));
  }
  { // Node ID: 226 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id226in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id226in_option0 = id116out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id226in_option1 = id156out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id226x_1;

    switch((id226in_sel.getValueAsLong())) {
      case 0l:
        id226x_1 = id226in_option0;
        break;
      case 1l:
        id226x_1 = id226in_option1;
        break;
      default:
        id226x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id226out_result[(getCycle()+1)%2] = (id226x_1);
  }
  { // Node ID: 471 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id471in_a = id357out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id471in_b = id226out_result[getCycle()%2];

    id471out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id471in_a,id471in_b));
  }
  HWRawBits<32> id117out_result;

  { // Node ID: 117 (NodeSlice)
    const HWRawBits<1280> &id117in_a = id102out_data;

    id117out_result = (slice<224,32>(id117in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id118out_output;

  { // Node ID: 118 (NodeReinterpret)
    const HWRawBits<32> &id118in_input = id117out_result;

    id118out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id118in_input));
  }
  HWRawBits<32> id157out_result;

  { // Node ID: 157 (NodeSlice)
    const HWRawBits<1280> &id157in_a = id102out_data;

    id157out_result = (slice<864,32>(id157in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id158out_output;

  { // Node ID: 158 (NodeReinterpret)
    const HWRawBits<32> &id158in_input = id157out_result;

    id158out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id158in_input));
  }
  { // Node ID: 232 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id232in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id232in_option0 = id118out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id232in_option1 = id158out_output;

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
  { // Node ID: 472 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id472in_a = id362out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id472in_b = id232out_result[getCycle()%2];

    id472out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id472in_a,id472in_b));
  }
  { // Node ID: 488 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id488in_a = id471out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id488in_b = id472out_result[getCycle()%8];

    id488out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id488in_a,id488in_b));
  }
  { // Node ID: 496 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id496in_a = id487out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id496in_b = id488out_result[getCycle()%2];

    id496out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id496in_a,id496in_b));
  }
  { // Node ID: 500 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id500in_a = id495out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id500in_b = id496out_result[getCycle()%2];

    id500out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id500in_a,id500in_b));
  }
  HWRawBits<32> id119out_result;

  { // Node ID: 119 (NodeSlice)
    const HWRawBits<1280> &id119in_a = id102out_data;

    id119out_result = (slice<256,32>(id119in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id120out_output;

  { // Node ID: 120 (NodeReinterpret)
    const HWRawBits<32> &id120in_input = id119out_result;

    id120out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id120in_input));
  }
  HWRawBits<32> id159out_result;

  { // Node ID: 159 (NodeSlice)
    const HWRawBits<1280> &id159in_a = id102out_data;

    id159out_result = (slice<896,32>(id159in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id160out_output;

  { // Node ID: 160 (NodeReinterpret)
    const HWRawBits<32> &id160in_input = id159out_result;

    id160out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id160in_input));
  }
  { // Node ID: 238 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id238in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id238in_option0 = id120out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id238in_option1 = id160out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id238x_1;

    switch((id238in_sel.getValueAsLong())) {
      case 0l:
        id238x_1 = id238in_option0;
        break;
      case 1l:
        id238x_1 = id238in_option1;
        break;
      default:
        id238x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id238out_result[(getCycle()+1)%2] = (id238x_1);
  }
  { // Node ID: 473 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id473in_a = id368out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id473in_b = id238out_result[getCycle()%2];

    id473out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id473in_a,id473in_b));
  }
  HWRawBits<32> id121out_result;

  { // Node ID: 121 (NodeSlice)
    const HWRawBits<1280> &id121in_a = id102out_data;

    id121out_result = (slice<288,32>(id121in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id122out_output;

  { // Node ID: 122 (NodeReinterpret)
    const HWRawBits<32> &id122in_input = id121out_result;

    id122out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id122in_input));
  }
  HWRawBits<32> id161out_result;

  { // Node ID: 161 (NodeSlice)
    const HWRawBits<1280> &id161in_a = id102out_data;

    id161out_result = (slice<928,32>(id161in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id162out_output;

  { // Node ID: 162 (NodeReinterpret)
    const HWRawBits<32> &id162in_input = id161out_result;

    id162out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id162in_input));
  }
  { // Node ID: 244 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id244in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id244in_option0 = id122out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id244in_option1 = id162out_output;

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
  { // Node ID: 474 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id474in_a = id373out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id474in_b = id244out_result[getCycle()%2];

    id474out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id474in_a,id474in_b));
  }
  { // Node ID: 489 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id489in_a = id473out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id489in_b = id474out_result[getCycle()%8];

    id489out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id489in_a,id489in_b));
  }
  HWRawBits<32> id123out_result;

  { // Node ID: 123 (NodeSlice)
    const HWRawBits<1280> &id123in_a = id102out_data;

    id123out_result = (slice<320,32>(id123in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id124out_output;

  { // Node ID: 124 (NodeReinterpret)
    const HWRawBits<32> &id124in_input = id123out_result;

    id124out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id124in_input));
  }
  HWRawBits<32> id163out_result;

  { // Node ID: 163 (NodeSlice)
    const HWRawBits<1280> &id163in_a = id102out_data;

    id163out_result = (slice<960,32>(id163in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id164out_output;

  { // Node ID: 164 (NodeReinterpret)
    const HWRawBits<32> &id164in_input = id163out_result;

    id164out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id164in_input));
  }
  { // Node ID: 250 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id250in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id250in_option0 = id124out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id250in_option1 = id164out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id250x_1;

    switch((id250in_sel.getValueAsLong())) {
      case 0l:
        id250x_1 = id250in_option0;
        break;
      case 1l:
        id250x_1 = id250in_option1;
        break;
      default:
        id250x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id250out_result[(getCycle()+1)%2] = (id250x_1);
  }
  { // Node ID: 475 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id475in_a = id378out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id475in_b = id250out_result[getCycle()%2];

    id475out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id475in_a,id475in_b));
  }
  HWRawBits<32> id125out_result;

  { // Node ID: 125 (NodeSlice)
    const HWRawBits<1280> &id125in_a = id102out_data;

    id125out_result = (slice<352,32>(id125in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id126out_output;

  { // Node ID: 126 (NodeReinterpret)
    const HWRawBits<32> &id126in_input = id125out_result;

    id126out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id126in_input));
  }
  HWRawBits<32> id165out_result;

  { // Node ID: 165 (NodeSlice)
    const HWRawBits<1280> &id165in_a = id102out_data;

    id165out_result = (slice<992,32>(id165in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id166out_output;

  { // Node ID: 166 (NodeReinterpret)
    const HWRawBits<32> &id166in_input = id165out_result;

    id166out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id166in_input));
  }
  { // Node ID: 256 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id256in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id256in_option0 = id126out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id256in_option1 = id166out_output;

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
  { // Node ID: 476 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id476in_a = id383out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id476in_b = id256out_result[getCycle()%2];

    id476out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id476in_a,id476in_b));
  }
  { // Node ID: 490 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id490in_a = id475out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id490in_b = id476out_result[getCycle()%8];

    id490out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id490in_a,id490in_b));
  }
  { // Node ID: 497 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id497in_a = id489out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id497in_b = id490out_result[getCycle()%2];

    id497out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id497in_a,id497in_b));
  }
  HWRawBits<32> id127out_result;

  { // Node ID: 127 (NodeSlice)
    const HWRawBits<1280> &id127in_a = id102out_data;

    id127out_result = (slice<384,32>(id127in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id128out_output;

  { // Node ID: 128 (NodeReinterpret)
    const HWRawBits<32> &id128in_input = id127out_result;

    id128out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id128in_input));
  }
  HWRawBits<32> id167out_result;

  { // Node ID: 167 (NodeSlice)
    const HWRawBits<1280> &id167in_a = id102out_data;

    id167out_result = (slice<1024,32>(id167in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id168out_output;

  { // Node ID: 168 (NodeReinterpret)
    const HWRawBits<32> &id168in_input = id167out_result;

    id168out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id168in_input));
  }
  { // Node ID: 262 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id262in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id262in_option0 = id128out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id262in_option1 = id168out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id262x_1;

    switch((id262in_sel.getValueAsLong())) {
      case 0l:
        id262x_1 = id262in_option0;
        break;
      case 1l:
        id262x_1 = id262in_option1;
        break;
      default:
        id262x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id262out_result[(getCycle()+1)%2] = (id262x_1);
  }
  { // Node ID: 477 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id477in_a = id389out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id477in_b = id262out_result[getCycle()%2];

    id477out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id477in_a,id477in_b));
  }
  HWRawBits<32> id129out_result;

  { // Node ID: 129 (NodeSlice)
    const HWRawBits<1280> &id129in_a = id102out_data;

    id129out_result = (slice<416,32>(id129in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id130out_output;

  { // Node ID: 130 (NodeReinterpret)
    const HWRawBits<32> &id130in_input = id129out_result;

    id130out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id130in_input));
  }
  HWRawBits<32> id169out_result;

  { // Node ID: 169 (NodeSlice)
    const HWRawBits<1280> &id169in_a = id102out_data;

    id169out_result = (slice<1056,32>(id169in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id170out_output;

  { // Node ID: 170 (NodeReinterpret)
    const HWRawBits<32> &id170in_input = id169out_result;

    id170out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id170in_input));
  }
  { // Node ID: 268 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id268in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id268in_option0 = id130out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id268in_option1 = id170out_output;

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
  { // Node ID: 478 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id478in_a = id394out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id478in_b = id268out_result[getCycle()%2];

    id478out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id478in_a,id478in_b));
  }
  { // Node ID: 491 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id491in_a = id477out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id491in_b = id478out_result[getCycle()%8];

    id491out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id491in_a,id491in_b));
  }
  HWRawBits<32> id131out_result;

  { // Node ID: 131 (NodeSlice)
    const HWRawBits<1280> &id131in_a = id102out_data;

    id131out_result = (slice<448,32>(id131in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id132out_output;

  { // Node ID: 132 (NodeReinterpret)
    const HWRawBits<32> &id132in_input = id131out_result;

    id132out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id132in_input));
  }
  HWRawBits<32> id171out_result;

  { // Node ID: 171 (NodeSlice)
    const HWRawBits<1280> &id171in_a = id102out_data;

    id171out_result = (slice<1088,32>(id171in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id172out_output;

  { // Node ID: 172 (NodeReinterpret)
    const HWRawBits<32> &id172in_input = id171out_result;

    id172out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id172in_input));
  }
  { // Node ID: 274 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id274in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id274in_option0 = id132out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id274in_option1 = id172out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id274x_1;

    switch((id274in_sel.getValueAsLong())) {
      case 0l:
        id274x_1 = id274in_option0;
        break;
      case 1l:
        id274x_1 = id274in_option1;
        break;
      default:
        id274x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id274out_result[(getCycle()+1)%2] = (id274x_1);
  }
  { // Node ID: 479 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id479in_a = id399out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id479in_b = id274out_result[getCycle()%2];

    id479out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id479in_a,id479in_b));
  }
  HWRawBits<32> id133out_result;

  { // Node ID: 133 (NodeSlice)
    const HWRawBits<1280> &id133in_a = id102out_data;

    id133out_result = (slice<480,32>(id133in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id134out_output;

  { // Node ID: 134 (NodeReinterpret)
    const HWRawBits<32> &id134in_input = id133out_result;

    id134out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id134in_input));
  }
  HWRawBits<32> id173out_result;

  { // Node ID: 173 (NodeSlice)
    const HWRawBits<1280> &id173in_a = id102out_data;

    id173out_result = (slice<1120,32>(id173in_a));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id174out_output;

  { // Node ID: 174 (NodeReinterpret)
    const HWRawBits<32> &id174in_input = id173out_result;

    id174out_output = (cast_bits2fixed<32,-24,TWOSCOMPLEMENT>(id174in_input));
  }
  { // Node ID: 280 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id280in_sel = id602out_output[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id280in_option0 = id134out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id280in_option1 = id174out_output;

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
  { // Node ID: 480 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id480in_a = id404out_o;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id480in_b = id280out_result[getCycle()%2];

    id480out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id480in_a,id480in_b));
  }
  { // Node ID: 492 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id492in_a = id479out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id492in_b = id480out_result[getCycle()%8];

    id492out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id492in_a,id492in_b));
  }
  { // Node ID: 498 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id498in_a = id491out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id498in_b = id492out_result[getCycle()%2];

    id498out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id498in_a,id498in_b));
  }
  { // Node ID: 501 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id501in_a = id497out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id501in_b = id498out_result[getCycle()%2];

    id501out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id501in_a,id501in_b));
  }
  { // Node ID: 502 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id502in_a = id500out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id502in_b = id501out_result[getCycle()%2];

    id502out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id502in_a,id502in_b));
  }
  { // Node ID: 503 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id503in_a = id659out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id503in_b = id502out_result[getCycle()%2];

    id503out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id503in_a,id503in_b));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id527out_output;

  { // Node ID: 527 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id527in_input = id525out_result[getCycle()%2];

    id527out_output = id527in_input;
  }
  { // Node ID: 660 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id660in_input = id527out_output;

    id660out_output[(getCycle()+98)%99] = id660in_input;
  }
  { // Node ID: 524 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id524in_a = id503out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id524in_b = id660out_output[getCycle()%99];

    id524out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id524in_a,id524in_b));
  }
  { // Node ID: 662 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id662in_input = id503out_result[getCycle()%2];

    id662out_output[(getCycle()+1)%2] = id662in_input;
  }
  { // Node ID: 525 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id525in_sel = id628out_output[getCycle()%20];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id525in_option0 = id524out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id525in_option1 = id662out_output[getCycle()%2];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id525x_1;

    switch((id525in_sel.getValueAsLong())) {
      case 0l:
        id525x_1 = id525in_option0;
        break;
      case 1l:
        id525x_1 = id525in_option1;
        break;
      default:
        id525x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id525out_result[(getCycle()+1)%2] = (id525x_1);
  }
  { // Node ID: 526 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id526in_a = id525out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id526in_b = id538out_datab[getCycle()%3];

    id526out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id526in_a,id526in_b));
  }
  HWRawBits<32> id537out_output;

  { // Node ID: 537 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id537in_input = id526out_result[getCycle()%2];

    id537out_output = (cast_fixed2bits(id537in_input));
  }
  if ( (getFillLevel() >= (25l)) && (getFlushLevel() < (25l)|| !isFlushingActive() ))
  { // Node ID: 536 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id536in_output_control = id535out_result;
    const HWRawBits<32> &id536in_data = id537out_output;

    bool id536x_1;

    (id536x_1) = ((id536in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(25l))&(isFlushingActive()))));
    if((id536x_1)) {
      writeOutput(m_y11, id536in_data);
    }
  }
  { // Node ID: 548 (NodeConstantRawBits)
  }
  { // Node ID: 666 (NodeConstantRawBits)
  }
  { // Node ID: 545 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 546 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id546in_enable = id666out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id546in_max = id545out_value;

    HWOffsetFix<49,0,UNSIGNED> id546x_1;
    HWOffsetFix<1,0,UNSIGNED> id546x_2;
    HWOffsetFix<1,0,UNSIGNED> id546x_3;
    HWOffsetFix<49,0,UNSIGNED> id546x_4t_1e_1;

    id546out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id546st_count)));
    (id546x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id546st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id546x_2) = (gte_fixed((id546x_1),id546in_max));
    (id546x_3) = (and_fixed((id546x_2),id546in_enable));
    id546out_wrap = (id546x_3);
    if((id546in_enable.getValueAsBool())) {
      if(((id546x_3).getValueAsBool())) {
        (id546st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id546x_4t_1e_1) = (id546x_1);
        (id546st_count) = (id546x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id547out_output;

  { // Node ID: 547 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id547in_input = id546out_count;

    id547out_output = id547in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 549 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id549in_load = id548out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id549in_data = id547out_output;

    bool id549x_1;

    (id549x_1) = ((id549in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id549x_1)) {
      setMappedRegValue("current_run_cycle_count", id549in_data);
    }
  }
  { // Node ID: 665 (NodeConstantRawBits)
  }
  { // Node ID: 551 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 552 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id552in_enable = id665out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id552in_max = id551out_value;

    HWOffsetFix<49,0,UNSIGNED> id552x_1;
    HWOffsetFix<1,0,UNSIGNED> id552x_2;
    HWOffsetFix<1,0,UNSIGNED> id552x_3;
    HWOffsetFix<49,0,UNSIGNED> id552x_4t_1e_1;

    id552out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id552st_count)));
    (id552x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id552st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id552x_2) = (gte_fixed((id552x_1),id552in_max));
    (id552x_3) = (and_fixed((id552x_2),id552in_enable));
    id552out_wrap = (id552x_3);
    if((id552in_enable.getValueAsBool())) {
      if(((id552x_3).getValueAsBool())) {
        (id552st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id552x_4t_1e_1) = (id552x_1);
        (id552st_count) = (id552x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 554 (NodeInputMappedReg)
  }
  { // Node ID: 555 (NodeEq)
    const HWOffsetFix<48,0,UNSIGNED> &id555in_a = id552out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id555in_b = id554out_run_cycle_count;

    id555out_result[(getCycle()+1)%2] = (eq_fixed(id555in_a,id555in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 553 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id553in_start = id555out_result[getCycle()%2];

    if((id553in_start.getValueAsBool())) {
      startFlushing();
    }
  }
};

};
