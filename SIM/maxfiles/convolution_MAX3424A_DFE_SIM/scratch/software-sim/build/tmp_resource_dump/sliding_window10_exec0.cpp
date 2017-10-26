#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window10_exec1.h"
//#include "sliding_window10.h"

namespace maxcompilersim {

sliding_window10Block1Vars sliding_window10::execute0() {
  { // Node ID: 10021 (NodeConstantRawBits)
  }
  { // Node ID: 10020 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 2 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id2in_enable = id10021out_value;
    const HWOffsetFix<33,0,UNSIGNED> &id2in_max = id10020out_value;

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
  { // Node ID: 10019 (NodeConstantRawBits)
  }
  { // Node ID: 4 (NodeGt)
    const HWOffsetFix<32,0,UNSIGNED> &id4in_a = id2out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id4in_b = id10019out_value;

    id4out_result[(getCycle()+1)%2] = (gt_fixed(id4in_a,id4in_b));
  }
  { // Node ID: 10018 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 6 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id6in_enable = id4out_result[getCycle()%2];
    const HWOffsetFix<17,0,UNSIGNED> &id6in_max = id10018out_value;

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
  { // Node ID: 10017 (NodeConstantRawBits)
  }
  { // Node ID: 26 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id26in_a = id6out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id26in_b = id10017out_value;

    id26out_result[(getCycle()+1)%2] = (eq_fixed(id26in_a,id26in_b));
  }
  { // Node ID: 7597 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id7597in_input = id26out_result[getCycle()%2];

    id7597out_output[(getCycle()+1)%2] = id7597in_input;
  }
  { // Node ID: 7596 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id7596in_input = id6out_wrap;

    id7596out_output[(getCycle()+1)%2] = id7596in_input;
  }
  { // Node ID: 10016 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (2l)))
  { // Node ID: 8 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id8in_enable = id7596out_output[getCycle()%2];
    const HWOffsetFix<17,0,UNSIGNED> &id8in_max = id10016out_value;

    HWOffsetFix<17,0,UNSIGNED> id8x_1;
    HWOffsetFix<1,0,UNSIGNED> id8x_2;
    HWOffsetFix<1,0,UNSIGNED> id8x_3;
    HWOffsetFix<17,0,UNSIGNED> id8x_4t_1e_1;

    id8out_count = (cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>((id8st_count)));
    (id8x_1) = (add_fixed<17,0,UNSIGNED,TRUNCATE>((id8st_count),(c_hw_fix_17_0_uns_bits_2)));
    (id8x_2) = (gte_fixed((id8x_1),id8in_max));
    (id8x_3) = (and_fixed((id8x_2),id8in_enable));
    id8out_wrap = (id8x_3);
    if((id8in_enable.getValueAsBool())) {
      if(((id8x_3).getValueAsBool())) {
        (id8st_count) = (c_hw_fix_17_0_uns_bits_1);
      }
      else {
        (id8x_4t_1e_1) = (id8x_1);
        (id8st_count) = (id8x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 10015 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (2l)))
  { // Node ID: 10 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id10in_enable = id8out_wrap;
    const HWOffsetFix<17,0,UNSIGNED> &id10in_max = id10015out_value;

    HWOffsetFix<17,0,UNSIGNED> id10x_1;
    HWOffsetFix<1,0,UNSIGNED> id10x_2;
    HWOffsetFix<1,0,UNSIGNED> id10x_3;
    HWOffsetFix<17,0,UNSIGNED> id10x_4t_1e_1;

    id10out_count = (cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>((id10st_count)));
    (id10x_1) = (add_fixed<17,0,UNSIGNED,TRUNCATE>((id10st_count),(c_hw_fix_17_0_uns_bits_2)));
    (id10x_2) = (gte_fixed((id10x_1),id10in_max));
    (id10x_3) = (and_fixed((id10x_2),id10in_enable));
    id10out_wrap = (id10x_3);
    if((id10in_enable.getValueAsBool())) {
      if(((id10x_3).getValueAsBool())) {
        (id10st_count) = (c_hw_fix_17_0_uns_bits_1);
      }
      else {
        (id10x_4t_1e_1) = (id10x_1);
        (id10st_count) = (id10x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 10014 (NodeConstantRawBits)
  }
  { // Node ID: 28 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id28in_a = id10out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id28in_b = id10014out_value;

    id28out_result[(getCycle()+1)%2] = (eq_fixed(id28in_a,id28in_b));
  }
  { // Node ID: 29 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id29in_a = id7597out_output[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id29in_b = id28out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id29x_1;

    (id29x_1) = (and_fixed(id29in_a,id29in_b));
    id29out_result[(getCycle()+1)%2] = (id29x_1);
  }
  { // Node ID: 10013 (NodeConstantRawBits)
  }
  { // Node ID: 31 (NodeLt)
    const HWOffsetFix<16,0,UNSIGNED> &id31in_a = id8out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id31in_b = id10013out_value;

    id31out_result[(getCycle()+1)%2] = (lt_fixed(id31in_a,id31in_b));
  }
  { // Node ID: 7598 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id7598in_input = id31out_result[getCycle()%2];

    id7598out_output[(getCycle()+1)%2] = id7598in_input;
  }
  { // Node ID: 32 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id32in_a = id29out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id32in_b = id7598out_output[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id32x_1;

    (id32x_1) = (and_fixed(id32in_a,id32in_b));
    id32out_result[(getCycle()+1)%2] = (id32x_1);
  }
  { // Node ID: 10012 (NodeConstantRawBits)
  }
  { // Node ID: 34 (NodeGt)
    const HWOffsetFix<32,0,UNSIGNED> &id34in_a = id2out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id34in_b = id10012out_value;

    id34out_result[(getCycle()+1)%2] = (gt_fixed(id34in_a,id34in_b));
  }
  { // Node ID: 7599 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id7599in_input = id34out_result[getCycle()%2];

    id7599out_output[(getCycle()+4)%5] = id7599in_input;
  }
  { // Node ID: 35 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id35in_a = id32out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id35in_b = id7599out_output[getCycle()%5];

    HWOffsetFix<1,0,UNSIGNED> id35x_1;

    (id35x_1) = (and_fixed(id35in_a,id35in_b));
    id35out_result[(getCycle()+1)%2] = (id35x_1);
  }
  { // Node ID: 7600 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id7600in_input = id35out_result[getCycle()%2];

    id7600out_output[(getCycle()+12)%13] = id7600in_input;
  }
  { // Node ID: 3697 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id3698out_result;

  { // Node ID: 3698 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id3698in_a = id3697out_io_y01_force_disabled;

    id3698out_result = (not_fixed(id3698in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id3699out_result;

  { // Node ID: 3699 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id3699in_a = id7600out_output[getCycle()%13];
    const HWOffsetFix<1,0,UNSIGNED> &id3699in_b = id3698out_result;

    HWOffsetFix<1,0,UNSIGNED> id3699x_1;

    (id3699x_1) = (and_fixed(id3699in_a,id3699in_b));
    id3699out_result = (id3699x_1);
  }
  { // Node ID: 7537 (NodeConstantRawBits)
  }
  { // Node ID: 7539 (NodeConstantRawBits)
  }
  { // Node ID: 7541 (NodeConstantRawBits)
  }
  { // Node ID: 7543 (NodeConstantRawBits)
  }
  { // Node ID: 7545 (NodeConstantRawBits)
  }
  { // Node ID: 7547 (NodeConstantRawBits)
  }
  { // Node ID: 7549 (NodeConstantRawBits)
  }
  { // Node ID: 7551 (NodeConstantRawBits)
  }
  { // Node ID: 7553 (NodeConstantRawBits)
  }
  { // Node ID: 7555 (NodeConstantRawBits)
  }
  { // Node ID: 7557 (NodeConstantRawBits)
  }
  { // Node ID: 7559 (NodeConstantRawBits)
  }
  { // Node ID: 7561 (NodeConstantRawBits)
  }
  { // Node ID: 7563 (NodeConstantRawBits)
  }
  { // Node ID: 7565 (NodeConstantRawBits)
  }
  { // Node ID: 10011 (NodeConstantRawBits)
  }
  { // Node ID: 12 (NodeLt)
    const HWOffsetFix<32,0,UNSIGNED> &id12in_a = id2out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id12in_b = id10011out_value;

    id12out_result[(getCycle()+1)%2] = (lt_fixed(id12in_a,id12in_b));
  }
  { // Node ID: 7603 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id7603in_input = id12out_result[getCycle()%2];

    id7603out_output[(getCycle()+4)%5] = id7603in_input;
  }
  { // Node ID: 10010 (NodeConstantRawBits)
  }
  { // Node ID: 14 (NodeLt)
    const HWOffsetFix<32,0,UNSIGNED> &id14in_a = id2out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id14in_b = id10010out_value;

    id14out_result[(getCycle()+1)%2] = (lt_fixed(id14in_a,id14in_b));
  }
  { // Node ID: 7601 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id7601in_input = id14out_result[getCycle()%2];

    id7601out_output[(getCycle()+1)%2] = id7601in_input;
  }
  { // Node ID: 10009 (NodeConstantRawBits)
  }
  { // Node ID: 16 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id16in_a = id6out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id16in_b = id10009out_value;

    id16out_result[(getCycle()+1)%2] = (eq_fixed(id16in_a,id16in_b));
  }
  { // Node ID: 17 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17in_a = id7601out_output[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17in_b = id16out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17x_1;

    (id17x_1) = (and_fixed(id17in_a,id17in_b));
    id17out_result[(getCycle()+1)%2] = (id17x_1);
  }
  { // Node ID: 10008 (NodeConstantRawBits)
  }
  { // Node ID: 19 (NodeLt)
    const HWOffsetFix<16,0,UNSIGNED> &id19in_a = id8out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id19in_b = id10008out_value;

    id19out_result[(getCycle()+1)%2] = (lt_fixed(id19in_a,id19in_b));
  }
  { // Node ID: 20 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20in_a = id17out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20in_b = id19out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20x_1;

    (id20x_1) = (and_fixed(id20in_a,id20in_b));
    id20out_result[(getCycle()+1)%2] = (id20x_1);
  }
  { // Node ID: 10007 (NodeConstantRawBits)
  }
  { // Node ID: 22 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id22in_a = id10out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id22in_b = id10007out_value;

    id22out_result[(getCycle()+1)%2] = (eq_fixed(id22in_a,id22in_b));
  }
  { // Node ID: 7602 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id7602in_input = id22out_result[getCycle()%2];

    id7602out_output[(getCycle()+1)%2] = id7602in_input;
  }
  { // Node ID: 23 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23in_a = id20out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23in_b = id7602out_output[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id23x_1;

    (id23x_1) = (and_fixed(id23in_a,id23in_b));
    id23out_result[(getCycle()+1)%2] = (id23x_1);
  }
  { // Node ID: 24 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24in_a = id7603out_output[getCycle()%5];
    const HWOffsetFix<1,0,UNSIGNED> &id24in_b = id23out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24x_1;

    (id24x_1) = (or_fixed(id24in_a,id24in_b));
    id24out_result[(getCycle()+1)%2] = (id24x_1);
  }
  { // Node ID: 7604 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id7604in_input = id24out_result[getCycle()%2];

    id7604out_output[(getCycle()+11)%12] = id7604in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3484out_output;

  { // Node ID: 3484 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3484in_input = id3485out_result[getCycle()%2];

    id3484out_output = id3484in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3481out_output;

  { // Node ID: 3481 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3481in_input = id3482out_result[getCycle()%2];

    id3481out_output = id3481in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3478out_output;

  { // Node ID: 3478 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3478in_input = id3479out_result[getCycle()%2];

    id3478out_output = id3478in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3475out_output;

  { // Node ID: 3475 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3475in_input = id3476out_result[getCycle()%2];

    id3475out_output = id3475in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3472out_output;

  { // Node ID: 3472 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3472in_input = id3473out_result[getCycle()%2];

    id3472out_output = id3472in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3469out_output;

  { // Node ID: 3469 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3469in_input = id3470out_result[getCycle()%2];

    id3469out_output = id3469in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3466out_output;

  { // Node ID: 3466 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3466in_input = id3467out_result[getCycle()%2];

    id3466out_output = id3466in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3463out_output;

  { // Node ID: 3463 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3463in_input = id3464out_result[getCycle()%2];

    id3463out_output = id3463in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3460out_output;

  { // Node ID: 3460 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3460in_input = id3461out_result[getCycle()%2];

    id3460out_output = id3460in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3457out_output;

  { // Node ID: 3457 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3457in_input = id3458out_result[getCycle()%2];

    id3457out_output = id3457in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3454out_output;

  { // Node ID: 3454 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3454in_input = id3455out_result[getCycle()%2];

    id3454out_output = id3454in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3451out_output;

  { // Node ID: 3451 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3451in_input = id3452out_result[getCycle()%2];

    id3451out_output = id3451in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3448out_output;

  { // Node ID: 3448 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3448in_input = id3449out_result[getCycle()%2];

    id3448out_output = id3448in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3445out_output;

  { // Node ID: 3445 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3445in_input = id3446out_result[getCycle()%2];

    id3445out_output = id3445in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3442out_output;

  { // Node ID: 3442 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3442in_input = id3443out_result[getCycle()%2];

    id3442out_output = id3442in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3439out_output;

  { // Node ID: 3439 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3439in_input = id3440out_result[getCycle()%2];

    id3439out_output = id3439in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3436out_output;

  { // Node ID: 3436 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3436in_input = id3437out_result[getCycle()%2];

    id3436out_output = id3436in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3433out_output;

  { // Node ID: 3433 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3433in_input = id3434out_result[getCycle()%2];

    id3433out_output = id3433in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3430out_output;

  { // Node ID: 3430 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3430in_input = id3431out_result[getCycle()%2];

    id3430out_output = id3430in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3427out_output;

  { // Node ID: 3427 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3427in_input = id3428out_result[getCycle()%2];

    id3427out_output = id3427in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3424out_output;

  { // Node ID: 3424 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3424in_input = id3425out_result[getCycle()%2];

    id3424out_output = id3424in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3421out_output;

  { // Node ID: 3421 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3421in_input = id3422out_result[getCycle()%2];

    id3421out_output = id3421in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3418out_output;

  { // Node ID: 3418 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3418in_input = id3419out_result[getCycle()%2];

    id3418out_output = id3418in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3415out_output;

  { // Node ID: 3415 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3415in_input = id3416out_result[getCycle()%2];

    id3415out_output = id3415in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3412out_output;

  { // Node ID: 3412 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3412in_input = id3413out_result[getCycle()%2];

    id3412out_output = id3412in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3409out_output;

  { // Node ID: 3409 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3409in_input = id3410out_result[getCycle()%2];

    id3409out_output = id3409in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3406out_output;

  { // Node ID: 3406 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3406in_input = id3407out_result[getCycle()%2];

    id3406out_output = id3406in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3403out_output;

  { // Node ID: 3403 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3403in_input = id3404out_result[getCycle()%2];

    id3403out_output = id3403in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3400out_output;

  { // Node ID: 3400 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3400in_input = id3401out_result[getCycle()%2];

    id3400out_output = id3400in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3397out_output;

  { // Node ID: 3397 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3397in_input = id3398out_result[getCycle()%2];

    id3397out_output = id3397in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3394out_output;

  { // Node ID: 3394 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3394in_input = id3395out_result[getCycle()%2];

    id3394out_output = id3394in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3391out_output;

  { // Node ID: 3391 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3391in_input = id3392out_result[getCycle()%2];

    id3391out_output = id3391in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3388out_output;

  { // Node ID: 3388 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3388in_input = id3389out_result[getCycle()%2];

    id3388out_output = id3388in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3385out_output;

  { // Node ID: 3385 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3385in_input = id3386out_result[getCycle()%2];

    id3385out_output = id3385in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3382out_output;

  { // Node ID: 3382 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3382in_input = id3383out_result[getCycle()%2];

    id3382out_output = id3382in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3379out_output;

  { // Node ID: 3379 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3379in_input = id3380out_result[getCycle()%2];

    id3379out_output = id3379in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3376out_output;

  { // Node ID: 3376 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3376in_input = id3377out_result[getCycle()%2];

    id3376out_output = id3376in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3373out_output;

  { // Node ID: 3373 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3373in_input = id3374out_result[getCycle()%2];

    id3373out_output = id3373in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3370out_output;

  { // Node ID: 3370 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3370in_input = id3371out_result[getCycle()%2];

    id3370out_output = id3370in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3367out_output;

  { // Node ID: 3367 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3367in_input = id3368out_result[getCycle()%2];

    id3367out_output = id3367in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3364out_output;

  { // Node ID: 3364 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3364in_input = id3365out_result[getCycle()%2];

    id3364out_output = id3364in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3361out_output;

  { // Node ID: 3361 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3361in_input = id3362out_result[getCycle()%2];

    id3361out_output = id3361in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3358out_output;

  { // Node ID: 3358 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3358in_input = id3359out_result[getCycle()%2];

    id3358out_output = id3358in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3355out_output;

  { // Node ID: 3355 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3355in_input = id3356out_result[getCycle()%2];

    id3355out_output = id3355in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3352out_output;

  { // Node ID: 3352 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3352in_input = id3353out_result[getCycle()%2];

    id3352out_output = id3352in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3349out_output;

  { // Node ID: 3349 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3349in_input = id3350out_result[getCycle()%2];

    id3349out_output = id3349in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3346out_output;

  { // Node ID: 3346 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3346in_input = id3347out_result[getCycle()%2];

    id3346out_output = id3346in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3343out_output;

  { // Node ID: 3343 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3343in_input = id3344out_result[getCycle()%2];

    id3343out_output = id3343in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3340out_output;

  { // Node ID: 3340 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3340in_input = id3341out_result[getCycle()%2];

    id3340out_output = id3340in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3337out_output;

  { // Node ID: 3337 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3337in_input = id3338out_result[getCycle()%2];

    id3337out_output = id3337in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3334out_output;

  { // Node ID: 3334 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3334in_input = id3335out_result[getCycle()%2];

    id3334out_output = id3334in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3331out_output;

  { // Node ID: 3331 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3331in_input = id3332out_result[getCycle()%2];

    id3331out_output = id3331in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3328out_output;

  { // Node ID: 3328 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3328in_input = id3329out_result[getCycle()%2];

    id3328out_output = id3328in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3325out_output;

  { // Node ID: 3325 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3325in_input = id3326out_result[getCycle()%2];

    id3325out_output = id3325in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3322out_output;

  { // Node ID: 3322 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3322in_input = id3323out_result[getCycle()%2];

    id3322out_output = id3322in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3319out_output;

  { // Node ID: 3319 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3319in_input = id3320out_result[getCycle()%2];

    id3319out_output = id3319in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3316out_output;

  { // Node ID: 3316 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3316in_input = id3317out_result[getCycle()%2];

    id3316out_output = id3316in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3313out_output;

  { // Node ID: 3313 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3313in_input = id3314out_result[getCycle()%2];

    id3313out_output = id3313in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3310out_output;

  { // Node ID: 3310 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3310in_input = id3311out_result[getCycle()%2];

    id3310out_output = id3310in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3307out_output;

  { // Node ID: 3307 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3307in_input = id3308out_result[getCycle()%2];

    id3307out_output = id3307in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3304out_output;

  { // Node ID: 3304 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3304in_input = id3305out_result[getCycle()%2];

    id3304out_output = id3304in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3301out_output;

  { // Node ID: 3301 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3301in_input = id3302out_result[getCycle()%2];

    id3301out_output = id3301in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3298out_output;

  { // Node ID: 3298 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3298in_input = id3299out_result[getCycle()%2];

    id3298out_output = id3298in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3295out_output;

  { // Node ID: 3295 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3295in_input = id3296out_result[getCycle()%2];

    id3295out_output = id3295in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3292out_output;

  { // Node ID: 3292 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3292in_input = id3293out_result[getCycle()%2];

    id3292out_output = id3292in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3289out_output;

  { // Node ID: 3289 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3289in_input = id3290out_result[getCycle()%2];

    id3289out_output = id3289in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3286out_output;

  { // Node ID: 3286 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3286in_input = id3287out_result[getCycle()%2];

    id3286out_output = id3286in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3283out_output;

  { // Node ID: 3283 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3283in_input = id3284out_result[getCycle()%2];

    id3283out_output = id3283in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3280out_output;

  { // Node ID: 3280 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3280in_input = id3281out_result[getCycle()%2];

    id3280out_output = id3280in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3277out_output;

  { // Node ID: 3277 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3277in_input = id3278out_result[getCycle()%2];

    id3277out_output = id3277in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3274out_output;

  { // Node ID: 3274 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3274in_input = id3275out_result[getCycle()%2];

    id3274out_output = id3274in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3271out_output;

  { // Node ID: 3271 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3271in_input = id3272out_result[getCycle()%2];

    id3271out_output = id3271in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3268out_output;

  { // Node ID: 3268 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3268in_input = id3269out_result[getCycle()%2];

    id3268out_output = id3268in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3265out_output;

  { // Node ID: 3265 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3265in_input = id3266out_result[getCycle()%2];

    id3265out_output = id3265in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3262out_output;

  { // Node ID: 3262 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3262in_input = id3263out_result[getCycle()%2];

    id3262out_output = id3262in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3259out_output;

  { // Node ID: 3259 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3259in_input = id3260out_result[getCycle()%2];

    id3259out_output = id3259in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3256out_output;

  { // Node ID: 3256 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3256in_input = id3257out_result[getCycle()%2];

    id3256out_output = id3256in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3253out_output;

  { // Node ID: 3253 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3253in_input = id3254out_result[getCycle()%2];

    id3253out_output = id3253in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3250out_output;

  { // Node ID: 3250 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3250in_input = id3251out_result[getCycle()%2];

    id3250out_output = id3250in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3247out_output;

  { // Node ID: 3247 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3247in_input = id3248out_result[getCycle()%2];

    id3247out_output = id3247in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3244out_output;

  { // Node ID: 3244 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3244in_input = id3245out_result[getCycle()%2];

    id3244out_output = id3244in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3241out_output;

  { // Node ID: 3241 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3241in_input = id3242out_result[getCycle()%2];

    id3241out_output = id3241in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3238out_output;

  { // Node ID: 3238 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3238in_input = id3239out_result[getCycle()%2];

    id3238out_output = id3238in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3235out_output;

  { // Node ID: 3235 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3235in_input = id3236out_result[getCycle()%2];

    id3235out_output = id3235in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3232out_output;

  { // Node ID: 3232 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3232in_input = id3233out_result[getCycle()%2];

    id3232out_output = id3232in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3229out_output;

  { // Node ID: 3229 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3229in_input = id3230out_result[getCycle()%2];

    id3229out_output = id3229in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3226out_output;

  { // Node ID: 3226 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3226in_input = id3227out_result[getCycle()%2];

    id3226out_output = id3226in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3223out_output;

  { // Node ID: 3223 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3223in_input = id3224out_result[getCycle()%2];

    id3223out_output = id3223in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3220out_output;

  { // Node ID: 3220 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3220in_input = id3221out_result[getCycle()%2];

    id3220out_output = id3220in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3217out_output;

  { // Node ID: 3217 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3217in_input = id3218out_result[getCycle()%2];

    id3217out_output = id3217in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3214out_output;

  { // Node ID: 3214 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3214in_input = id3215out_result[getCycle()%2];

    id3214out_output = id3214in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3211out_output;

  { // Node ID: 3211 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3211in_input = id3212out_result[getCycle()%2];

    id3211out_output = id3211in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3208out_output;

  { // Node ID: 3208 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3208in_input = id3209out_result[getCycle()%2];

    id3208out_output = id3208in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3205out_output;

  { // Node ID: 3205 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3205in_input = id3206out_result[getCycle()%2];

    id3205out_output = id3205in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3202out_output;

  { // Node ID: 3202 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3202in_input = id3203out_result[getCycle()%2];

    id3202out_output = id3202in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3199out_output;

  { // Node ID: 3199 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3199in_input = id3200out_result[getCycle()%2];

    id3199out_output = id3199in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3196out_output;

  { // Node ID: 3196 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3196in_input = id3197out_result[getCycle()%2];

    id3196out_output = id3196in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3193out_output;

  { // Node ID: 3193 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3193in_input = id3194out_result[getCycle()%2];

    id3193out_output = id3193in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3190out_output;

  { // Node ID: 3190 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3190in_input = id3191out_result[getCycle()%2];

    id3190out_output = id3190in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3187out_output;

  { // Node ID: 3187 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3187in_input = id3188out_result[getCycle()%2];

    id3187out_output = id3187in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3184out_output;

  { // Node ID: 3184 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3184in_input = id3185out_result[getCycle()%2];

    id3184out_output = id3184in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3181out_output;

  { // Node ID: 3181 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3181in_input = id3182out_result[getCycle()%2];

    id3181out_output = id3181in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3178out_output;

  { // Node ID: 3178 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3178in_input = id3179out_result[getCycle()%2];

    id3178out_output = id3178in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3175out_output;

  { // Node ID: 3175 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3175in_input = id3176out_result[getCycle()%2];

    id3175out_output = id3175in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3172out_output;

  { // Node ID: 3172 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3172in_input = id3173out_result[getCycle()%2];

    id3172out_output = id3172in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3169out_output;

  { // Node ID: 3169 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3169in_input = id3170out_result[getCycle()%2];

    id3169out_output = id3169in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3166out_output;

  { // Node ID: 3166 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3166in_input = id3167out_result[getCycle()%2];

    id3166out_output = id3166in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3163out_output;

  { // Node ID: 3163 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3163in_input = id3164out_result[getCycle()%2];

    id3163out_output = id3163in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3160out_output;

  { // Node ID: 3160 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3160in_input = id3161out_result[getCycle()%2];

    id3160out_output = id3160in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3157out_output;

  { // Node ID: 3157 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3157in_input = id3158out_result[getCycle()%2];

    id3157out_output = id3157in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3154out_output;

  { // Node ID: 3154 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3154in_input = id3155out_result[getCycle()%2];

    id3154out_output = id3154in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3151out_output;

  { // Node ID: 3151 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3151in_input = id3152out_result[getCycle()%2];

    id3151out_output = id3151in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3148out_output;

  { // Node ID: 3148 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3148in_input = id3149out_result[getCycle()%2];

    id3148out_output = id3148in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3145out_output;

  { // Node ID: 3145 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3145in_input = id3146out_result[getCycle()%2];

    id3145out_output = id3145in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3142out_output;

  { // Node ID: 3142 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3142in_input = id3143out_result[getCycle()%2];

    id3142out_output = id3142in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3139out_output;

  { // Node ID: 3139 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3139in_input = id3140out_result[getCycle()%2];

    id3139out_output = id3139in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3136out_output;

  { // Node ID: 3136 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3136in_input = id3137out_result[getCycle()%2];

    id3136out_output = id3136in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3133out_output;

  { // Node ID: 3133 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3133in_input = id3134out_result[getCycle()%2];

    id3133out_output = id3133in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3130out_output;

  { // Node ID: 3130 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3130in_input = id3131out_result[getCycle()%2];

    id3130out_output = id3130in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3127out_output;

  { // Node ID: 3127 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3127in_input = id3128out_result[getCycle()%2];

    id3127out_output = id3127in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3124out_output;

  { // Node ID: 3124 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3124in_input = id3125out_result[getCycle()%2];

    id3124out_output = id3124in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3121out_output;

  { // Node ID: 3121 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3121in_input = id3122out_result[getCycle()%2];

    id3121out_output = id3121in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3118out_output;

  { // Node ID: 3118 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3118in_input = id3119out_result[getCycle()%2];

    id3118out_output = id3118in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3115out_output;

  { // Node ID: 3115 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3115in_input = id3116out_result[getCycle()%2];

    id3115out_output = id3115in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3112out_output;

  { // Node ID: 3112 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3112in_input = id3113out_result[getCycle()%2];

    id3112out_output = id3112in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3109out_output;

  { // Node ID: 3109 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3109in_input = id3110out_result[getCycle()%2];

    id3109out_output = id3109in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3106out_output;

  { // Node ID: 3106 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3106in_input = id3107out_result[getCycle()%2];

    id3106out_output = id3106in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3103out_output;

  { // Node ID: 3103 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3103in_input = id3104out_result[getCycle()%2];

    id3103out_output = id3103in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3100out_output;

  { // Node ID: 3100 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3100in_input = id3101out_result[getCycle()%2];

    id3100out_output = id3100in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3097out_output;

  { // Node ID: 3097 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3097in_input = id3098out_result[getCycle()%2];

    id3097out_output = id3097in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3094out_output;

  { // Node ID: 3094 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3094in_input = id3095out_result[getCycle()%2];

    id3094out_output = id3094in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3091out_output;

  { // Node ID: 3091 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3091in_input = id3092out_result[getCycle()%2];

    id3091out_output = id3091in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3088out_output;

  { // Node ID: 3088 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3088in_input = id3089out_result[getCycle()%2];

    id3088out_output = id3088in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3085out_output;

  { // Node ID: 3085 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3085in_input = id3086out_result[getCycle()%2];

    id3085out_output = id3085in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3082out_output;

  { // Node ID: 3082 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3082in_input = id3083out_result[getCycle()%2];

    id3082out_output = id3082in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3079out_output;

  { // Node ID: 3079 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3079in_input = id3080out_result[getCycle()%2];

    id3079out_output = id3079in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3076out_output;

  { // Node ID: 3076 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3076in_input = id3077out_result[getCycle()%2];

    id3076out_output = id3076in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3073out_output;

  { // Node ID: 3073 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3073in_input = id3074out_result[getCycle()%2];

    id3073out_output = id3073in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3070out_output;

  { // Node ID: 3070 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3070in_input = id3071out_result[getCycle()%2];

    id3070out_output = id3070in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3067out_output;

  { // Node ID: 3067 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3067in_input = id3068out_result[getCycle()%2];

    id3067out_output = id3067in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3064out_output;

  { // Node ID: 3064 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3064in_input = id3065out_result[getCycle()%2];

    id3064out_output = id3064in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3061out_output;

  { // Node ID: 3061 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3061in_input = id3062out_result[getCycle()%2];

    id3061out_output = id3061in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3058out_output;

  { // Node ID: 3058 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3058in_input = id3059out_result[getCycle()%2];

    id3058out_output = id3058in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3055out_output;

  { // Node ID: 3055 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3055in_input = id3056out_result[getCycle()%2];

    id3055out_output = id3055in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3052out_output;

  { // Node ID: 3052 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3052in_input = id3053out_result[getCycle()%2];

    id3052out_output = id3052in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3049out_output;

  { // Node ID: 3049 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3049in_input = id3050out_result[getCycle()%2];

    id3049out_output = id3049in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3046out_output;

  { // Node ID: 3046 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3046in_input = id3047out_result[getCycle()%2];

    id3046out_output = id3046in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3043out_output;

  { // Node ID: 3043 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3043in_input = id3044out_result[getCycle()%2];

    id3043out_output = id3043in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3040out_output;

  { // Node ID: 3040 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3040in_input = id3041out_result[getCycle()%2];

    id3040out_output = id3040in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3037out_output;

  { // Node ID: 3037 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3037in_input = id3038out_result[getCycle()%2];

    id3037out_output = id3037in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3034out_output;

  { // Node ID: 3034 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3034in_input = id3035out_result[getCycle()%2];

    id3034out_output = id3034in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3031out_output;

  { // Node ID: 3031 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3031in_input = id3032out_result[getCycle()%2];

    id3031out_output = id3031in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3028out_output;

  { // Node ID: 3028 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3028in_input = id3029out_result[getCycle()%2];

    id3028out_output = id3028in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3025out_output;

  { // Node ID: 3025 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3025in_input = id3026out_result[getCycle()%2];

    id3025out_output = id3025in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3022out_output;

  { // Node ID: 3022 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3022in_input = id3023out_result[getCycle()%2];

    id3022out_output = id3022in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3019out_output;

  { // Node ID: 3019 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3019in_input = id3020out_result[getCycle()%2];

    id3019out_output = id3019in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3016out_output;

  { // Node ID: 3016 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3016in_input = id3017out_result[getCycle()%2];

    id3016out_output = id3016in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3013out_output;

  { // Node ID: 3013 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3013in_input = id3014out_result[getCycle()%2];

    id3013out_output = id3013in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3010out_output;

  { // Node ID: 3010 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3010in_input = id3011out_result[getCycle()%2];

    id3010out_output = id3010in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3007out_output;

  { // Node ID: 3007 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3007in_input = id3008out_result[getCycle()%2];

    id3007out_output = id3007in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3004out_output;

  { // Node ID: 3004 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3004in_input = id3005out_result[getCycle()%2];

    id3004out_output = id3004in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3001out_output;

  { // Node ID: 3001 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3001in_input = id3002out_result[getCycle()%2];

    id3001out_output = id3001in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2998out_output;

  { // Node ID: 2998 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2998in_input = id2999out_result[getCycle()%2];

    id2998out_output = id2998in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2995out_output;

  { // Node ID: 2995 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2995in_input = id2996out_result[getCycle()%2];

    id2995out_output = id2995in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2992out_output;

  { // Node ID: 2992 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2992in_input = id2993out_result[getCycle()%2];

    id2992out_output = id2992in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2989out_output;

  { // Node ID: 2989 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2989in_input = id2990out_result[getCycle()%2];

    id2989out_output = id2989in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2986out_output;

  { // Node ID: 2986 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2986in_input = id2987out_result[getCycle()%2];

    id2986out_output = id2986in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2983out_output;

  { // Node ID: 2983 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2983in_input = id2984out_result[getCycle()%2];

    id2983out_output = id2983in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2980out_output;

  { // Node ID: 2980 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2980in_input = id2981out_result[getCycle()%2];

    id2980out_output = id2980in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2977out_output;

  { // Node ID: 2977 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2977in_input = id2978out_result[getCycle()%2];

    id2977out_output = id2977in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2974out_output;

  { // Node ID: 2974 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2974in_input = id2975out_result[getCycle()%2];

    id2974out_output = id2974in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2971out_output;

  { // Node ID: 2971 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2971in_input = id2972out_result[getCycle()%2];

    id2971out_output = id2971in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2968out_output;

  { // Node ID: 2968 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2968in_input = id2969out_result[getCycle()%2];

    id2968out_output = id2968in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2965out_output;

  { // Node ID: 2965 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2965in_input = id2966out_result[getCycle()%2];

    id2965out_output = id2965in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2962out_output;

  { // Node ID: 2962 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2962in_input = id2963out_result[getCycle()%2];

    id2962out_output = id2962in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2959out_output;

  { // Node ID: 2959 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2959in_input = id2960out_result[getCycle()%2];

    id2959out_output = id2959in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2956out_output;

  { // Node ID: 2956 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2956in_input = id2957out_result[getCycle()%2];

    id2956out_output = id2956in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2953out_output;

  { // Node ID: 2953 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2953in_input = id2954out_result[getCycle()%2];

    id2953out_output = id2953in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2950out_output;

  { // Node ID: 2950 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2950in_input = id2951out_result[getCycle()%2];

    id2950out_output = id2950in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2947out_output;

  { // Node ID: 2947 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2947in_input = id2948out_result[getCycle()%2];

    id2947out_output = id2947in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2944out_output;

  { // Node ID: 2944 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2944in_input = id2945out_result[getCycle()%2];

    id2944out_output = id2944in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2941out_output;

  { // Node ID: 2941 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2941in_input = id2942out_result[getCycle()%2];

    id2941out_output = id2941in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2938out_output;

  { // Node ID: 2938 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2938in_input = id2939out_result[getCycle()%2];

    id2938out_output = id2938in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2935out_output;

  { // Node ID: 2935 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2935in_input = id2936out_result[getCycle()%2];

    id2935out_output = id2935in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2932out_output;

  { // Node ID: 2932 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2932in_input = id2933out_result[getCycle()%2];

    id2932out_output = id2932in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2929out_output;

  { // Node ID: 2929 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2929in_input = id2930out_result[getCycle()%2];

    id2929out_output = id2929in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2926out_output;

  { // Node ID: 2926 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2926in_input = id2927out_result[getCycle()%2];

    id2926out_output = id2926in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2923out_output;

  { // Node ID: 2923 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2923in_input = id2924out_result[getCycle()%2];

    id2923out_output = id2923in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2920out_output;

  { // Node ID: 2920 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2920in_input = id2921out_result[getCycle()%2];

    id2920out_output = id2920in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2917out_output;

  { // Node ID: 2917 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2917in_input = id2918out_result[getCycle()%2];

    id2917out_output = id2917in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2914out_output;

  { // Node ID: 2914 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2914in_input = id2915out_result[getCycle()%2];

    id2914out_output = id2914in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2911out_output;

  { // Node ID: 2911 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2911in_input = id2912out_result[getCycle()%2];

    id2911out_output = id2911in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2908out_output;

  { // Node ID: 2908 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2908in_input = id2909out_result[getCycle()%2];

    id2908out_output = id2908in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2905out_output;

  { // Node ID: 2905 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2905in_input = id2906out_result[getCycle()%2];

    id2905out_output = id2905in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2902out_output;

  { // Node ID: 2902 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2902in_input = id2903out_result[getCycle()%2];

    id2902out_output = id2902in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2899out_output;

  { // Node ID: 2899 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2899in_input = id2900out_result[getCycle()%2];

    id2899out_output = id2899in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2896out_output;

  { // Node ID: 2896 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2896in_input = id2897out_result[getCycle()%2];

    id2896out_output = id2896in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2893out_output;

  { // Node ID: 2893 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2893in_input = id2894out_result[getCycle()%2];

    id2893out_output = id2893in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2890out_output;

  { // Node ID: 2890 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2890in_input = id2891out_result[getCycle()%2];

    id2890out_output = id2890in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2887out_output;

  { // Node ID: 2887 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2887in_input = id2888out_result[getCycle()%2];

    id2887out_output = id2887in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2884out_output;

  { // Node ID: 2884 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2884in_input = id2885out_result[getCycle()%2];

    id2884out_output = id2884in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2881out_output;

  { // Node ID: 2881 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2881in_input = id2882out_result[getCycle()%2];

    id2881out_output = id2881in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2878out_output;

  { // Node ID: 2878 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2878in_input = id2879out_result[getCycle()%2];

    id2878out_output = id2878in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2875out_output;

  { // Node ID: 2875 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2875in_input = id2876out_result[getCycle()%2];

    id2875out_output = id2875in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2872out_output;

  { // Node ID: 2872 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2872in_input = id2873out_result[getCycle()%2];

    id2872out_output = id2872in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2869out_output;

  { // Node ID: 2869 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2869in_input = id2870out_result[getCycle()%2];

    id2869out_output = id2869in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2866out_output;

  { // Node ID: 2866 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2866in_input = id2867out_result[getCycle()%2];

    id2866out_output = id2866in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2863out_output;

  { // Node ID: 2863 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2863in_input = id2864out_result[getCycle()%2];

    id2863out_output = id2863in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2860out_output;

  { // Node ID: 2860 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2860in_input = id2861out_result[getCycle()%2];

    id2860out_output = id2860in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2857out_output;

  { // Node ID: 2857 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2857in_input = id2858out_result[getCycle()%2];

    id2857out_output = id2857in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2854out_output;

  { // Node ID: 2854 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2854in_input = id2855out_result[getCycle()%2];

    id2854out_output = id2854in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2851out_output;

  { // Node ID: 2851 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2851in_input = id2852out_result[getCycle()%2];

    id2851out_output = id2851in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2848out_output;

  { // Node ID: 2848 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2848in_input = id2849out_result[getCycle()%2];

    id2848out_output = id2848in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2845out_output;

  { // Node ID: 2845 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2845in_input = id2846out_result[getCycle()%2];

    id2845out_output = id2845in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2842out_output;

  { // Node ID: 2842 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2842in_input = id2843out_result[getCycle()%2];

    id2842out_output = id2842in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2839out_output;

  { // Node ID: 2839 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2839in_input = id2840out_result[getCycle()%2];

    id2839out_output = id2839in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2836out_output;

  { // Node ID: 2836 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2836in_input = id2837out_result[getCycle()%2];

    id2836out_output = id2836in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2833out_output;

  { // Node ID: 2833 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2833in_input = id2834out_result[getCycle()%2];

    id2833out_output = id2833in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2830out_output;

  { // Node ID: 2830 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2830in_input = id2831out_result[getCycle()%2];

    id2830out_output = id2830in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2827out_output;

  { // Node ID: 2827 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2827in_input = id2828out_result[getCycle()%2];

    id2827out_output = id2827in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2824out_output;

  { // Node ID: 2824 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2824in_input = id2825out_result[getCycle()%2];

    id2824out_output = id2824in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2821out_output;

  { // Node ID: 2821 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2821in_input = id2822out_result[getCycle()%2];

    id2821out_output = id2821in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2818out_output;

  { // Node ID: 2818 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2818in_input = id2819out_result[getCycle()%2];

    id2818out_output = id2818in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2815out_output;

  { // Node ID: 2815 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2815in_input = id2816out_result[getCycle()%2];

    id2815out_output = id2815in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2812out_output;

  { // Node ID: 2812 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2812in_input = id2813out_result[getCycle()%2];

    id2812out_output = id2812in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2809out_output;

  { // Node ID: 2809 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2809in_input = id2810out_result[getCycle()%2];

    id2809out_output = id2809in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2806out_output;

  { // Node ID: 2806 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2806in_input = id2807out_result[getCycle()%2];

    id2806out_output = id2806in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2803out_output;

  { // Node ID: 2803 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2803in_input = id2804out_result[getCycle()%2];

    id2803out_output = id2803in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2800out_output;

  { // Node ID: 2800 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2800in_input = id2801out_result[getCycle()%2];

    id2800out_output = id2800in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2797out_output;

  { // Node ID: 2797 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2797in_input = id2798out_result[getCycle()%2];

    id2797out_output = id2797in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2794out_output;

  { // Node ID: 2794 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2794in_input = id2795out_result[getCycle()%2];

    id2794out_output = id2794in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2791out_output;

  { // Node ID: 2791 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2791in_input = id2792out_result[getCycle()%2];

    id2791out_output = id2791in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2788out_output;

  { // Node ID: 2788 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2788in_input = id2789out_result[getCycle()%2];

    id2788out_output = id2788in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2785out_output;

  { // Node ID: 2785 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2785in_input = id2786out_result[getCycle()%2];

    id2785out_output = id2785in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2782out_output;

  { // Node ID: 2782 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2782in_input = id2783out_result[getCycle()%2];

    id2782out_output = id2782in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2779out_output;

  { // Node ID: 2779 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2779in_input = id2780out_result[getCycle()%2];

    id2779out_output = id2779in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2776out_output;

  { // Node ID: 2776 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2776in_input = id2777out_result[getCycle()%2];

    id2776out_output = id2776in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2773out_output;

  { // Node ID: 2773 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2773in_input = id2774out_result[getCycle()%2];

    id2773out_output = id2773in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2770out_output;

  { // Node ID: 2770 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2770in_input = id2771out_result[getCycle()%2];

    id2770out_output = id2770in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2767out_output;

  { // Node ID: 2767 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2767in_input = id2768out_result[getCycle()%2];

    id2767out_output = id2767in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2764out_output;

  { // Node ID: 2764 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2764in_input = id2765out_result[getCycle()%2];

    id2764out_output = id2764in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2761out_output;

  { // Node ID: 2761 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2761in_input = id2762out_result[getCycle()%2];

    id2761out_output = id2761in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2758out_output;

  { // Node ID: 2758 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2758in_input = id2759out_result[getCycle()%2];

    id2758out_output = id2758in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2755out_output;

  { // Node ID: 2755 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2755in_input = id2756out_result[getCycle()%2];

    id2755out_output = id2755in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2752out_output;

  { // Node ID: 2752 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2752in_input = id2753out_result[getCycle()%2];

    id2752out_output = id2752in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2749out_output;

  { // Node ID: 2749 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2749in_input = id2750out_result[getCycle()%2];

    id2749out_output = id2749in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2746out_output;

  { // Node ID: 2746 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2746in_input = id2747out_result[getCycle()%2];

    id2746out_output = id2746in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2743out_output;

  { // Node ID: 2743 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2743in_input = id2744out_result[getCycle()%2];

    id2743out_output = id2743in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2740out_output;

  { // Node ID: 2740 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2740in_input = id2741out_result[getCycle()%2];

    id2740out_output = id2740in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2737out_output;

  { // Node ID: 2737 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2737in_input = id2738out_result[getCycle()%2];

    id2737out_output = id2737in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2734out_output;

  { // Node ID: 2734 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2734in_input = id2735out_result[getCycle()%2];

    id2734out_output = id2734in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2731out_output;

  { // Node ID: 2731 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2731in_input = id2732out_result[getCycle()%2];

    id2731out_output = id2731in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2728out_output;

  { // Node ID: 2728 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2728in_input = id2729out_result[getCycle()%2];

    id2728out_output = id2728in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2725out_output;

  { // Node ID: 2725 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2725in_input = id2726out_result[getCycle()%2];

    id2725out_output = id2725in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2722out_output;

  { // Node ID: 2722 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2722in_input = id2723out_result[getCycle()%2];

    id2722out_output = id2722in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2719out_output;

  { // Node ID: 2719 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2719in_input = id2720out_result[getCycle()%2];

    id2719out_output = id2719in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2716out_output;

  { // Node ID: 2716 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2716in_input = id2717out_result[getCycle()%2];

    id2716out_output = id2716in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2713out_output;

  { // Node ID: 2713 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2713in_input = id2714out_result[getCycle()%2];

    id2713out_output = id2713in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2710out_output;

  { // Node ID: 2710 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2710in_input = id2711out_result[getCycle()%2];

    id2710out_output = id2710in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2707out_output;

  { // Node ID: 2707 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2707in_input = id2708out_result[getCycle()%2];

    id2707out_output = id2707in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2704out_output;

  { // Node ID: 2704 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2704in_input = id2705out_result[getCycle()%2];

    id2704out_output = id2704in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2701out_output;

  { // Node ID: 2701 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2701in_input = id2702out_result[getCycle()%2];

    id2701out_output = id2701in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2698out_output;

  { // Node ID: 2698 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2698in_input = id2699out_result[getCycle()%2];

    id2698out_output = id2698in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2695out_output;

  { // Node ID: 2695 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2695in_input = id2696out_result[getCycle()%2];

    id2695out_output = id2695in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2692out_output;

  { // Node ID: 2692 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2692in_input = id2693out_result[getCycle()%2];

    id2692out_output = id2692in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2689out_output;

  { // Node ID: 2689 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2689in_input = id2690out_result[getCycle()%2];

    id2689out_output = id2689in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2686out_output;

  { // Node ID: 2686 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2686in_input = id2687out_result[getCycle()%2];

    id2686out_output = id2686in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2683out_output;

  { // Node ID: 2683 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2683in_input = id2684out_result[getCycle()%2];

    id2683out_output = id2683in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2680out_output;

  { // Node ID: 2680 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2680in_input = id2681out_result[getCycle()%2];

    id2680out_output = id2680in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2677out_output;

  { // Node ID: 2677 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2677in_input = id2678out_result[getCycle()%2];

    id2677out_output = id2677in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2674out_output;

  { // Node ID: 2674 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2674in_input = id2675out_result[getCycle()%2];

    id2674out_output = id2674in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2671out_output;

  { // Node ID: 2671 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2671in_input = id2672out_result[getCycle()%2];

    id2671out_output = id2671in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2668out_output;

  { // Node ID: 2668 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2668in_input = id2669out_result[getCycle()%2];

    id2668out_output = id2668in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2665out_output;

  { // Node ID: 2665 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2665in_input = id2666out_result[getCycle()%2];

    id2665out_output = id2665in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2662out_output;

  { // Node ID: 2662 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2662in_input = id2663out_result[getCycle()%2];

    id2662out_output = id2662in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2659out_output;

  { // Node ID: 2659 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2659in_input = id2660out_result[getCycle()%2];

    id2659out_output = id2659in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2656out_output;

  { // Node ID: 2656 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2656in_input = id2657out_result[getCycle()%2];

    id2656out_output = id2656in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2653out_output;

  { // Node ID: 2653 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2653in_input = id2654out_result[getCycle()%2];

    id2653out_output = id2653in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2650out_output;

  { // Node ID: 2650 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2650in_input = id2651out_result[getCycle()%2];

    id2650out_output = id2650in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2647out_output;

  { // Node ID: 2647 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2647in_input = id2648out_result[getCycle()%2];

    id2647out_output = id2647in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2644out_output;

  { // Node ID: 2644 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2644in_input = id2645out_result[getCycle()%2];

    id2644out_output = id2644in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2641out_output;

  { // Node ID: 2641 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2641in_input = id2642out_result[getCycle()%2];

    id2641out_output = id2641in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2638out_output;

  { // Node ID: 2638 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2638in_input = id2639out_result[getCycle()%2];

    id2638out_output = id2638in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2635out_output;

  { // Node ID: 2635 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2635in_input = id2636out_result[getCycle()%2];

    id2635out_output = id2635in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2632out_output;

  { // Node ID: 2632 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2632in_input = id2633out_result[getCycle()%2];

    id2632out_output = id2632in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2629out_output;

  { // Node ID: 2629 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2629in_input = id2630out_result[getCycle()%2];

    id2629out_output = id2629in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2626out_output;

  { // Node ID: 2626 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2626in_input = id2627out_result[getCycle()%2];

    id2626out_output = id2626in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2623out_output;

  { // Node ID: 2623 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2623in_input = id2624out_result[getCycle()%2];

    id2623out_output = id2623in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2620out_output;

  { // Node ID: 2620 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2620in_input = id2621out_result[getCycle()%2];

    id2620out_output = id2620in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2617out_output;

  { // Node ID: 2617 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2617in_input = id2618out_result[getCycle()%2];

    id2617out_output = id2617in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2614out_output;

  { // Node ID: 2614 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2614in_input = id2615out_result[getCycle()%2];

    id2614out_output = id2614in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2611out_output;

  { // Node ID: 2611 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2611in_input = id2612out_result[getCycle()%2];

    id2611out_output = id2611in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2608out_output;

  { // Node ID: 2608 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2608in_input = id2609out_result[getCycle()%2];

    id2608out_output = id2608in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2605out_output;

  { // Node ID: 2605 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2605in_input = id2606out_result[getCycle()%2];

    id2605out_output = id2605in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2602out_output;

  { // Node ID: 2602 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2602in_input = id2603out_result[getCycle()%2];

    id2602out_output = id2602in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2599out_output;

  { // Node ID: 2599 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2599in_input = id2600out_result[getCycle()%2];

    id2599out_output = id2599in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2596out_output;

  { // Node ID: 2596 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2596in_input = id2597out_result[getCycle()%2];

    id2596out_output = id2596in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2593out_output;

  { // Node ID: 2593 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2593in_input = id2594out_result[getCycle()%2];

    id2593out_output = id2593in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2590out_output;

  { // Node ID: 2590 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2590in_input = id2591out_result[getCycle()%2];

    id2590out_output = id2590in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2587out_output;

  { // Node ID: 2587 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2587in_input = id2588out_result[getCycle()%2];

    id2587out_output = id2587in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2584out_output;

  { // Node ID: 2584 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2584in_input = id2585out_result[getCycle()%2];

    id2584out_output = id2584in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2581out_output;

  { // Node ID: 2581 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2581in_input = id2582out_result[getCycle()%2];

    id2581out_output = id2581in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2578out_output;

  { // Node ID: 2578 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2578in_input = id2579out_result[getCycle()%2];

    id2578out_output = id2578in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2575out_output;

  { // Node ID: 2575 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2575in_input = id2576out_result[getCycle()%2];

    id2575out_output = id2575in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2572out_output;

  { // Node ID: 2572 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2572in_input = id2573out_result[getCycle()%2];

    id2572out_output = id2572in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2569out_output;

  { // Node ID: 2569 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2569in_input = id2570out_result[getCycle()%2];

    id2569out_output = id2569in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2566out_output;

  { // Node ID: 2566 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2566in_input = id2567out_result[getCycle()%2];

    id2566out_output = id2566in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2563out_output;

  { // Node ID: 2563 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2563in_input = id2564out_result[getCycle()%2];

    id2563out_output = id2563in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2560out_output;

  { // Node ID: 2560 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2560in_input = id2561out_result[getCycle()%2];

    id2560out_output = id2560in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2557out_output;

  { // Node ID: 2557 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2557in_input = id2558out_result[getCycle()%2];

    id2557out_output = id2557in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2554out_output;

  { // Node ID: 2554 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2554in_input = id2555out_result[getCycle()%2];

    id2554out_output = id2554in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2551out_output;

  { // Node ID: 2551 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2551in_input = id2552out_result[getCycle()%2];

    id2551out_output = id2551in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2548out_output;

  { // Node ID: 2548 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2548in_input = id2549out_result[getCycle()%2];

    id2548out_output = id2548in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2545out_output;

  { // Node ID: 2545 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2545in_input = id2546out_result[getCycle()%2];

    id2545out_output = id2545in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2542out_output;

  { // Node ID: 2542 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2542in_input = id2543out_result[getCycle()%2];

    id2542out_output = id2542in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2539out_output;

  { // Node ID: 2539 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2539in_input = id2540out_result[getCycle()%2];

    id2539out_output = id2539in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2536out_output;

  { // Node ID: 2536 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2536in_input = id2537out_result[getCycle()%2];

    id2536out_output = id2536in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2533out_output;

  { // Node ID: 2533 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2533in_input = id2534out_result[getCycle()%2];

    id2533out_output = id2533in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2530out_output;

  { // Node ID: 2530 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2530in_input = id2531out_result[getCycle()%2];

    id2530out_output = id2530in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2527out_output;

  { // Node ID: 2527 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2527in_input = id2528out_result[getCycle()%2];

    id2527out_output = id2527in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2524out_output;

  { // Node ID: 2524 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2524in_input = id2525out_result[getCycle()%2];

    id2524out_output = id2524in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2521out_output;

  { // Node ID: 2521 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2521in_input = id2522out_result[getCycle()%2];

    id2521out_output = id2521in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2518out_output;

  { // Node ID: 2518 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2518in_input = id2519out_result[getCycle()%2];

    id2518out_output = id2518in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2515out_output;

  { // Node ID: 2515 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2515in_input = id2516out_result[getCycle()%2];

    id2515out_output = id2515in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2512out_output;

  { // Node ID: 2512 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2512in_input = id2513out_result[getCycle()%2];

    id2512out_output = id2512in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2509out_output;

  { // Node ID: 2509 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2509in_input = id2510out_result[getCycle()%2];

    id2509out_output = id2509in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2506out_output;

  { // Node ID: 2506 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2506in_input = id2507out_result[getCycle()%2];

    id2506out_output = id2506in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2503out_output;

  { // Node ID: 2503 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2503in_input = id2504out_result[getCycle()%2];

    id2503out_output = id2503in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2500out_output;

  { // Node ID: 2500 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2500in_input = id2501out_result[getCycle()%2];

    id2500out_output = id2500in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2497out_output;

  { // Node ID: 2497 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2497in_input = id2498out_result[getCycle()%2];

    id2497out_output = id2497in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2494out_output;

  { // Node ID: 2494 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2494in_input = id2495out_result[getCycle()%2];

    id2494out_output = id2494in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2491out_output;

  { // Node ID: 2491 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2491in_input = id2492out_result[getCycle()%2];

    id2491out_output = id2491in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2488out_output;

  { // Node ID: 2488 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2488in_input = id2489out_result[getCycle()%2];

    id2488out_output = id2488in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2485out_output;

  { // Node ID: 2485 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2485in_input = id2486out_result[getCycle()%2];

    id2485out_output = id2485in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2482out_output;

  { // Node ID: 2482 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2482in_input = id2483out_result[getCycle()%2];

    id2482out_output = id2482in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2479out_output;

  { // Node ID: 2479 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2479in_input = id2480out_result[getCycle()%2];

    id2479out_output = id2479in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2476out_output;

  { // Node ID: 2476 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2476in_input = id2477out_result[getCycle()%2];

    id2476out_output = id2476in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2473out_output;

  { // Node ID: 2473 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2473in_input = id2474out_result[getCycle()%2];

    id2473out_output = id2473in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2470out_output;

  { // Node ID: 2470 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2470in_input = id2471out_result[getCycle()%2];

    id2470out_output = id2470in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2467out_output;

  { // Node ID: 2467 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2467in_input = id2468out_result[getCycle()%2];

    id2467out_output = id2467in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2464out_output;

  { // Node ID: 2464 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2464in_input = id2465out_result[getCycle()%2];

    id2464out_output = id2464in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2461out_output;

  { // Node ID: 2461 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2461in_input = id2462out_result[getCycle()%2];

    id2461out_output = id2461in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2458out_output;

  { // Node ID: 2458 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2458in_input = id2459out_result[getCycle()%2];

    id2458out_output = id2458in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2455out_output;

  { // Node ID: 2455 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2455in_input = id2456out_result[getCycle()%2];

    id2455out_output = id2455in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2452out_output;

  { // Node ID: 2452 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2452in_input = id2453out_result[getCycle()%2];

    id2452out_output = id2452in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2449out_output;

  { // Node ID: 2449 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2449in_input = id2450out_result[getCycle()%2];

    id2449out_output = id2449in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2446out_output;

  { // Node ID: 2446 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2446in_input = id2447out_result[getCycle()%2];

    id2446out_output = id2446in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2443out_output;

  { // Node ID: 2443 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2443in_input = id2444out_result[getCycle()%2];

    id2443out_output = id2443in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2440out_output;

  { // Node ID: 2440 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2440in_input = id2441out_result[getCycle()%2];

    id2440out_output = id2440in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2437out_output;

  { // Node ID: 2437 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2437in_input = id2438out_result[getCycle()%2];

    id2437out_output = id2437in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2434out_output;

  { // Node ID: 2434 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2434in_input = id2435out_result[getCycle()%2];

    id2434out_output = id2434in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2431out_output;

  { // Node ID: 2431 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2431in_input = id2432out_result[getCycle()%2];

    id2431out_output = id2431in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2428out_output;

  { // Node ID: 2428 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2428in_input = id2429out_result[getCycle()%2];

    id2428out_output = id2428in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2425out_output;

  { // Node ID: 2425 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2425in_input = id2426out_result[getCycle()%2];

    id2425out_output = id2425in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2422out_output;

  { // Node ID: 2422 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2422in_input = id2423out_result[getCycle()%2];

    id2422out_output = id2422in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2419out_output;

  { // Node ID: 2419 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2419in_input = id2420out_result[getCycle()%2];

    id2419out_output = id2419in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2416out_output;

  { // Node ID: 2416 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2416in_input = id2417out_result[getCycle()%2];

    id2416out_output = id2416in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2413out_output;

  { // Node ID: 2413 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2413in_input = id2414out_result[getCycle()%2];

    id2413out_output = id2413in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2410out_output;

  { // Node ID: 2410 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2410in_input = id2411out_result[getCycle()%2];

    id2410out_output = id2410in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2407out_output;

  { // Node ID: 2407 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2407in_input = id2408out_result[getCycle()%2];

    id2407out_output = id2407in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2404out_output;

  { // Node ID: 2404 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2404in_input = id2405out_result[getCycle()%2];

    id2404out_output = id2404in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2401out_output;

  { // Node ID: 2401 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2401in_input = id2402out_result[getCycle()%2];

    id2401out_output = id2401in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2398out_output;

  { // Node ID: 2398 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2398in_input = id2399out_result[getCycle()%2];

    id2398out_output = id2398in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2395out_output;

  { // Node ID: 2395 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2395in_input = id2396out_result[getCycle()%2];

    id2395out_output = id2395in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2392out_output;

  { // Node ID: 2392 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2392in_input = id2393out_result[getCycle()%2];

    id2392out_output = id2392in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2389out_output;

  { // Node ID: 2389 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2389in_input = id2390out_result[getCycle()%2];

    id2389out_output = id2389in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2386out_output;

  { // Node ID: 2386 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2386in_input = id2387out_result[getCycle()%2];

    id2386out_output = id2386in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2383out_output;

  { // Node ID: 2383 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2383in_input = id2384out_result[getCycle()%2];

    id2383out_output = id2383in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2380out_output;

  { // Node ID: 2380 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2380in_input = id2381out_result[getCycle()%2];

    id2380out_output = id2380in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2377out_output;

  { // Node ID: 2377 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2377in_input = id2378out_result[getCycle()%2];

    id2377out_output = id2377in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2374out_output;

  { // Node ID: 2374 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2374in_input = id2375out_result[getCycle()%2];

    id2374out_output = id2374in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2371out_output;

  { // Node ID: 2371 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2371in_input = id2372out_result[getCycle()%2];

    id2371out_output = id2371in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2368out_output;

  { // Node ID: 2368 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2368in_input = id2369out_result[getCycle()%2];

    id2368out_output = id2368in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2365out_output;

  { // Node ID: 2365 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2365in_input = id2366out_result[getCycle()%2];

    id2365out_output = id2365in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2362out_output;

  { // Node ID: 2362 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2362in_input = id2363out_result[getCycle()%2];

    id2362out_output = id2362in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2359out_output;

  { // Node ID: 2359 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2359in_input = id2360out_result[getCycle()%2];

    id2359out_output = id2359in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2356out_output;

  { // Node ID: 2356 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2356in_input = id2357out_result[getCycle()%2];

    id2356out_output = id2356in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2353out_output;

  { // Node ID: 2353 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2353in_input = id2354out_result[getCycle()%2];

    id2353out_output = id2353in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2350out_output;

  { // Node ID: 2350 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2350in_input = id2351out_result[getCycle()%2];

    id2350out_output = id2350in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2347out_output;

  { // Node ID: 2347 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2347in_input = id2348out_result[getCycle()%2];

    id2347out_output = id2347in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2344out_output;

  { // Node ID: 2344 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2344in_input = id2345out_result[getCycle()%2];

    id2344out_output = id2344in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2341out_output;

  { // Node ID: 2341 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2341in_input = id2342out_result[getCycle()%2];

    id2341out_output = id2341in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2338out_output;

  { // Node ID: 2338 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2338in_input = id2339out_result[getCycle()%2];

    id2338out_output = id2338in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2335out_output;

  { // Node ID: 2335 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2335in_input = id2336out_result[getCycle()%2];

    id2335out_output = id2335in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2332out_output;

  { // Node ID: 2332 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2332in_input = id2333out_result[getCycle()%2];

    id2332out_output = id2332in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2329out_output;

  { // Node ID: 2329 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2329in_input = id2330out_result[getCycle()%2];

    id2329out_output = id2329in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2326out_output;

  { // Node ID: 2326 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2326in_input = id2327out_result[getCycle()%2];

    id2326out_output = id2326in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2323out_output;

  { // Node ID: 2323 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2323in_input = id2324out_result[getCycle()%2];

    id2323out_output = id2323in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2320out_output;

  { // Node ID: 2320 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2320in_input = id2321out_result[getCycle()%2];

    id2320out_output = id2320in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2317out_output;

  { // Node ID: 2317 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2317in_input = id2318out_result[getCycle()%2];

    id2317out_output = id2317in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2314out_output;

  { // Node ID: 2314 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2314in_input = id2315out_result[getCycle()%2];

    id2314out_output = id2314in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2311out_output;

  { // Node ID: 2311 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2311in_input = id2312out_result[getCycle()%2];

    id2311out_output = id2311in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2308out_output;

  { // Node ID: 2308 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2308in_input = id2309out_result[getCycle()%2];

    id2308out_output = id2308in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2305out_output;

  { // Node ID: 2305 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2305in_input = id2306out_result[getCycle()%2];

    id2305out_output = id2305in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2302out_output;

  { // Node ID: 2302 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2302in_input = id2303out_result[getCycle()%2];

    id2302out_output = id2302in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2299out_output;

  { // Node ID: 2299 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2299in_input = id2300out_result[getCycle()%2];

    id2299out_output = id2299in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2296out_output;

  { // Node ID: 2296 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2296in_input = id2297out_result[getCycle()%2];

    id2296out_output = id2296in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2293out_output;

  { // Node ID: 2293 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2293in_input = id2294out_result[getCycle()%2];

    id2293out_output = id2293in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2290out_output;

  { // Node ID: 2290 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2290in_input = id2291out_result[getCycle()%2];

    id2290out_output = id2290in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2287out_output;

  { // Node ID: 2287 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2287in_input = id2288out_result[getCycle()%2];

    id2287out_output = id2287in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2284out_output;

  { // Node ID: 2284 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2284in_input = id2285out_result[getCycle()%2];

    id2284out_output = id2284in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2281out_output;

  { // Node ID: 2281 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2281in_input = id2282out_result[getCycle()%2];

    id2281out_output = id2281in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2278out_output;

  { // Node ID: 2278 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2278in_input = id2279out_result[getCycle()%2];

    id2278out_output = id2278in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2275out_output;

  { // Node ID: 2275 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2275in_input = id2276out_result[getCycle()%2];

    id2275out_output = id2275in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2272out_output;

  { // Node ID: 2272 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2272in_input = id2273out_result[getCycle()%2];

    id2272out_output = id2272in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2269out_output;

  { // Node ID: 2269 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2269in_input = id2270out_result[getCycle()%2];

    id2269out_output = id2269in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2266out_output;

  { // Node ID: 2266 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2266in_input = id2267out_result[getCycle()%2];

    id2266out_output = id2266in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2263out_output;

  { // Node ID: 2263 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2263in_input = id2264out_result[getCycle()%2];

    id2263out_output = id2263in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2260out_output;

  { // Node ID: 2260 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2260in_input = id2261out_result[getCycle()%2];

    id2260out_output = id2260in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2257out_output;

  { // Node ID: 2257 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2257in_input = id2258out_result[getCycle()%2];

    id2257out_output = id2257in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2254out_output;

  { // Node ID: 2254 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2254in_input = id2255out_result[getCycle()%2];

    id2254out_output = id2254in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2251out_output;

  { // Node ID: 2251 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2251in_input = id2252out_result[getCycle()%2];

    id2251out_output = id2251in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2248out_output;

  { // Node ID: 2248 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2248in_input = id2249out_result[getCycle()%2];

    id2248out_output = id2248in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2245out_output;

  { // Node ID: 2245 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2245in_input = id2246out_result[getCycle()%2];

    id2245out_output = id2245in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2242out_output;

  { // Node ID: 2242 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2242in_input = id2243out_result[getCycle()%2];

    id2242out_output = id2242in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2239out_output;

  { // Node ID: 2239 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2239in_input = id2240out_result[getCycle()%2];

    id2239out_output = id2239in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2236out_output;

  { // Node ID: 2236 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2236in_input = id2237out_result[getCycle()%2];

    id2236out_output = id2236in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2233out_output;

  { // Node ID: 2233 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2233in_input = id2234out_result[getCycle()%2];

    id2233out_output = id2233in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2230out_output;

  { // Node ID: 2230 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2230in_input = id2231out_result[getCycle()%2];

    id2230out_output = id2230in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2227out_output;

  { // Node ID: 2227 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2227in_input = id2228out_result[getCycle()%2];

    id2227out_output = id2227in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2224out_output;

  { // Node ID: 2224 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2224in_input = id2225out_result[getCycle()%2];

    id2224out_output = id2224in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2221out_output;

  { // Node ID: 2221 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2221in_input = id2222out_result[getCycle()%2];

    id2221out_output = id2221in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2218out_output;

  { // Node ID: 2218 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2218in_input = id2219out_result[getCycle()%2];

    id2218out_output = id2218in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2215out_output;

  { // Node ID: 2215 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2215in_input = id2216out_result[getCycle()%2];

    id2215out_output = id2215in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2212out_output;

  { // Node ID: 2212 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2212in_input = id2213out_result[getCycle()%2];

    id2212out_output = id2212in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2209out_output;

  { // Node ID: 2209 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2209in_input = id2210out_result[getCycle()%2];

    id2209out_output = id2209in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2206out_output;

  { // Node ID: 2206 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2206in_input = id2207out_result[getCycle()%2];

    id2206out_output = id2206in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2203out_output;

  { // Node ID: 2203 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2203in_input = id2204out_result[getCycle()%2];

    id2203out_output = id2203in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2200out_output;

  { // Node ID: 2200 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2200in_input = id2201out_result[getCycle()%2];

    id2200out_output = id2200in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2197out_output;

  { // Node ID: 2197 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2197in_input = id2198out_result[getCycle()%2];

    id2197out_output = id2197in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2194out_output;

  { // Node ID: 2194 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2194in_input = id2195out_result[getCycle()%2];

    id2194out_output = id2194in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2191out_output;

  { // Node ID: 2191 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2191in_input = id2192out_result[getCycle()%2];

    id2191out_output = id2191in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2188out_output;

  { // Node ID: 2188 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2188in_input = id2189out_result[getCycle()%2];

    id2188out_output = id2188in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2185out_output;

  { // Node ID: 2185 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2185in_input = id2186out_result[getCycle()%2];

    id2185out_output = id2185in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2182out_output;

  { // Node ID: 2182 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2182in_input = id2183out_result[getCycle()%2];

    id2182out_output = id2182in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2179out_output;

  { // Node ID: 2179 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2179in_input = id2180out_result[getCycle()%2];

    id2179out_output = id2179in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2176out_output;

  { // Node ID: 2176 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2176in_input = id2177out_result[getCycle()%2];

    id2176out_output = id2176in_input;
  }

  sliding_window10Block1Vars out_vars;
  out_vars.id3699out_result = id3699out_result;
  out_vars.id7537out_value = id7537out_value;
  out_vars.id7539out_value = id7539out_value;
  out_vars.id7541out_value = id7541out_value;
  out_vars.id7543out_value = id7543out_value;
  out_vars.id7545out_value = id7545out_value;
  out_vars.id7547out_value = id7547out_value;
  out_vars.id7549out_value = id7549out_value;
  out_vars.id7551out_value = id7551out_value;
  out_vars.id7553out_value = id7553out_value;
  out_vars.id7555out_value = id7555out_value;
  out_vars.id7557out_value = id7557out_value;
  out_vars.id7559out_value = id7559out_value;
  out_vars.id7561out_value = id7561out_value;
  out_vars.id7563out_value = id7563out_value;
  out_vars.id7565out_value = id7565out_value;
  out_vars.id3484out_output = id3484out_output;
  out_vars.id3481out_output = id3481out_output;
  out_vars.id3478out_output = id3478out_output;
  out_vars.id3475out_output = id3475out_output;
  out_vars.id3472out_output = id3472out_output;
  out_vars.id3469out_output = id3469out_output;
  out_vars.id3466out_output = id3466out_output;
  out_vars.id3463out_output = id3463out_output;
  out_vars.id3460out_output = id3460out_output;
  out_vars.id3457out_output = id3457out_output;
  out_vars.id3454out_output = id3454out_output;
  out_vars.id3451out_output = id3451out_output;
  out_vars.id3448out_output = id3448out_output;
  out_vars.id3445out_output = id3445out_output;
  out_vars.id3442out_output = id3442out_output;
  out_vars.id3439out_output = id3439out_output;
  out_vars.id3436out_output = id3436out_output;
  out_vars.id3433out_output = id3433out_output;
  out_vars.id3430out_output = id3430out_output;
  out_vars.id3427out_output = id3427out_output;
  out_vars.id3424out_output = id3424out_output;
  out_vars.id3421out_output = id3421out_output;
  out_vars.id3418out_output = id3418out_output;
  out_vars.id3415out_output = id3415out_output;
  out_vars.id3412out_output = id3412out_output;
  out_vars.id3409out_output = id3409out_output;
  out_vars.id3406out_output = id3406out_output;
  out_vars.id3403out_output = id3403out_output;
  out_vars.id3400out_output = id3400out_output;
  out_vars.id3397out_output = id3397out_output;
  out_vars.id3394out_output = id3394out_output;
  out_vars.id3391out_output = id3391out_output;
  out_vars.id3388out_output = id3388out_output;
  out_vars.id3385out_output = id3385out_output;
  out_vars.id3382out_output = id3382out_output;
  out_vars.id3379out_output = id3379out_output;
  out_vars.id3376out_output = id3376out_output;
  out_vars.id3373out_output = id3373out_output;
  out_vars.id3370out_output = id3370out_output;
  out_vars.id3367out_output = id3367out_output;
  out_vars.id3364out_output = id3364out_output;
  out_vars.id3361out_output = id3361out_output;
  out_vars.id3358out_output = id3358out_output;
  out_vars.id3355out_output = id3355out_output;
  out_vars.id3352out_output = id3352out_output;
  out_vars.id3349out_output = id3349out_output;
  out_vars.id3346out_output = id3346out_output;
  out_vars.id3343out_output = id3343out_output;
  out_vars.id3340out_output = id3340out_output;
  out_vars.id3337out_output = id3337out_output;
  out_vars.id3334out_output = id3334out_output;
  out_vars.id3331out_output = id3331out_output;
  out_vars.id3328out_output = id3328out_output;
  out_vars.id3325out_output = id3325out_output;
  out_vars.id3322out_output = id3322out_output;
  out_vars.id3319out_output = id3319out_output;
  out_vars.id3316out_output = id3316out_output;
  out_vars.id3313out_output = id3313out_output;
  out_vars.id3310out_output = id3310out_output;
  out_vars.id3307out_output = id3307out_output;
  out_vars.id3304out_output = id3304out_output;
  out_vars.id3301out_output = id3301out_output;
  out_vars.id3298out_output = id3298out_output;
  out_vars.id3295out_output = id3295out_output;
  out_vars.id3292out_output = id3292out_output;
  out_vars.id3289out_output = id3289out_output;
  out_vars.id3286out_output = id3286out_output;
  out_vars.id3283out_output = id3283out_output;
  out_vars.id3280out_output = id3280out_output;
  out_vars.id3277out_output = id3277out_output;
  out_vars.id3274out_output = id3274out_output;
  out_vars.id3271out_output = id3271out_output;
  out_vars.id3268out_output = id3268out_output;
  out_vars.id3265out_output = id3265out_output;
  out_vars.id3262out_output = id3262out_output;
  out_vars.id3259out_output = id3259out_output;
  out_vars.id3256out_output = id3256out_output;
  out_vars.id3253out_output = id3253out_output;
  out_vars.id3250out_output = id3250out_output;
  out_vars.id3247out_output = id3247out_output;
  out_vars.id3244out_output = id3244out_output;
  out_vars.id3241out_output = id3241out_output;
  out_vars.id3238out_output = id3238out_output;
  out_vars.id3235out_output = id3235out_output;
  out_vars.id3232out_output = id3232out_output;
  out_vars.id3229out_output = id3229out_output;
  out_vars.id3226out_output = id3226out_output;
  out_vars.id3223out_output = id3223out_output;
  out_vars.id3220out_output = id3220out_output;
  out_vars.id3217out_output = id3217out_output;
  out_vars.id3214out_output = id3214out_output;
  out_vars.id3211out_output = id3211out_output;
  out_vars.id3208out_output = id3208out_output;
  out_vars.id3205out_output = id3205out_output;
  out_vars.id3202out_output = id3202out_output;
  out_vars.id3199out_output = id3199out_output;
  out_vars.id3196out_output = id3196out_output;
  out_vars.id3193out_output = id3193out_output;
  out_vars.id3190out_output = id3190out_output;
  out_vars.id3187out_output = id3187out_output;
  out_vars.id3184out_output = id3184out_output;
  out_vars.id3181out_output = id3181out_output;
  out_vars.id3178out_output = id3178out_output;
  out_vars.id3175out_output = id3175out_output;
  out_vars.id3172out_output = id3172out_output;
  out_vars.id3169out_output = id3169out_output;
  out_vars.id3166out_output = id3166out_output;
  out_vars.id3163out_output = id3163out_output;
  out_vars.id3160out_output = id3160out_output;
  out_vars.id3157out_output = id3157out_output;
  out_vars.id3154out_output = id3154out_output;
  out_vars.id3151out_output = id3151out_output;
  out_vars.id3148out_output = id3148out_output;
  out_vars.id3145out_output = id3145out_output;
  out_vars.id3142out_output = id3142out_output;
  out_vars.id3139out_output = id3139out_output;
  out_vars.id3136out_output = id3136out_output;
  out_vars.id3133out_output = id3133out_output;
  out_vars.id3130out_output = id3130out_output;
  out_vars.id3127out_output = id3127out_output;
  out_vars.id3124out_output = id3124out_output;
  out_vars.id3121out_output = id3121out_output;
  out_vars.id3118out_output = id3118out_output;
  out_vars.id3115out_output = id3115out_output;
  out_vars.id3112out_output = id3112out_output;
  out_vars.id3109out_output = id3109out_output;
  out_vars.id3106out_output = id3106out_output;
  out_vars.id3103out_output = id3103out_output;
  out_vars.id3100out_output = id3100out_output;
  out_vars.id3097out_output = id3097out_output;
  out_vars.id3094out_output = id3094out_output;
  out_vars.id3091out_output = id3091out_output;
  out_vars.id3088out_output = id3088out_output;
  out_vars.id3085out_output = id3085out_output;
  out_vars.id3082out_output = id3082out_output;
  out_vars.id3079out_output = id3079out_output;
  out_vars.id3076out_output = id3076out_output;
  out_vars.id3073out_output = id3073out_output;
  out_vars.id3070out_output = id3070out_output;
  out_vars.id3067out_output = id3067out_output;
  out_vars.id3064out_output = id3064out_output;
  out_vars.id3061out_output = id3061out_output;
  out_vars.id3058out_output = id3058out_output;
  out_vars.id3055out_output = id3055out_output;
  out_vars.id3052out_output = id3052out_output;
  out_vars.id3049out_output = id3049out_output;
  out_vars.id3046out_output = id3046out_output;
  out_vars.id3043out_output = id3043out_output;
  out_vars.id3040out_output = id3040out_output;
  out_vars.id3037out_output = id3037out_output;
  out_vars.id3034out_output = id3034out_output;
  out_vars.id3031out_output = id3031out_output;
  out_vars.id3028out_output = id3028out_output;
  out_vars.id3025out_output = id3025out_output;
  out_vars.id3022out_output = id3022out_output;
  out_vars.id3019out_output = id3019out_output;
  out_vars.id3016out_output = id3016out_output;
  out_vars.id3013out_output = id3013out_output;
  out_vars.id3010out_output = id3010out_output;
  out_vars.id3007out_output = id3007out_output;
  out_vars.id3004out_output = id3004out_output;
  out_vars.id3001out_output = id3001out_output;
  out_vars.id2998out_output = id2998out_output;
  out_vars.id2995out_output = id2995out_output;
  out_vars.id2992out_output = id2992out_output;
  out_vars.id2989out_output = id2989out_output;
  out_vars.id2986out_output = id2986out_output;
  out_vars.id2983out_output = id2983out_output;
  out_vars.id2980out_output = id2980out_output;
  out_vars.id2977out_output = id2977out_output;
  out_vars.id2974out_output = id2974out_output;
  out_vars.id2971out_output = id2971out_output;
  out_vars.id2968out_output = id2968out_output;
  out_vars.id2965out_output = id2965out_output;
  out_vars.id2962out_output = id2962out_output;
  out_vars.id2959out_output = id2959out_output;
  out_vars.id2956out_output = id2956out_output;
  out_vars.id2953out_output = id2953out_output;
  out_vars.id2950out_output = id2950out_output;
  out_vars.id2947out_output = id2947out_output;
  out_vars.id2944out_output = id2944out_output;
  out_vars.id2941out_output = id2941out_output;
  out_vars.id2938out_output = id2938out_output;
  out_vars.id2935out_output = id2935out_output;
  out_vars.id2932out_output = id2932out_output;
  out_vars.id2929out_output = id2929out_output;
  out_vars.id2926out_output = id2926out_output;
  out_vars.id2923out_output = id2923out_output;
  out_vars.id2920out_output = id2920out_output;
  out_vars.id2917out_output = id2917out_output;
  out_vars.id2914out_output = id2914out_output;
  out_vars.id2911out_output = id2911out_output;
  out_vars.id2908out_output = id2908out_output;
  out_vars.id2905out_output = id2905out_output;
  out_vars.id2902out_output = id2902out_output;
  out_vars.id2899out_output = id2899out_output;
  out_vars.id2896out_output = id2896out_output;
  out_vars.id2893out_output = id2893out_output;
  out_vars.id2890out_output = id2890out_output;
  out_vars.id2887out_output = id2887out_output;
  out_vars.id2884out_output = id2884out_output;
  out_vars.id2881out_output = id2881out_output;
  out_vars.id2878out_output = id2878out_output;
  out_vars.id2875out_output = id2875out_output;
  out_vars.id2872out_output = id2872out_output;
  out_vars.id2869out_output = id2869out_output;
  out_vars.id2866out_output = id2866out_output;
  out_vars.id2863out_output = id2863out_output;
  out_vars.id2860out_output = id2860out_output;
  out_vars.id2857out_output = id2857out_output;
  out_vars.id2854out_output = id2854out_output;
  out_vars.id2851out_output = id2851out_output;
  out_vars.id2848out_output = id2848out_output;
  out_vars.id2845out_output = id2845out_output;
  out_vars.id2842out_output = id2842out_output;
  out_vars.id2839out_output = id2839out_output;
  out_vars.id2836out_output = id2836out_output;
  out_vars.id2833out_output = id2833out_output;
  out_vars.id2830out_output = id2830out_output;
  out_vars.id2827out_output = id2827out_output;
  out_vars.id2824out_output = id2824out_output;
  out_vars.id2821out_output = id2821out_output;
  out_vars.id2818out_output = id2818out_output;
  out_vars.id2815out_output = id2815out_output;
  out_vars.id2812out_output = id2812out_output;
  out_vars.id2809out_output = id2809out_output;
  out_vars.id2806out_output = id2806out_output;
  out_vars.id2803out_output = id2803out_output;
  out_vars.id2800out_output = id2800out_output;
  out_vars.id2797out_output = id2797out_output;
  out_vars.id2794out_output = id2794out_output;
  out_vars.id2791out_output = id2791out_output;
  out_vars.id2788out_output = id2788out_output;
  out_vars.id2785out_output = id2785out_output;
  out_vars.id2782out_output = id2782out_output;
  out_vars.id2779out_output = id2779out_output;
  out_vars.id2776out_output = id2776out_output;
  out_vars.id2773out_output = id2773out_output;
  out_vars.id2770out_output = id2770out_output;
  out_vars.id2767out_output = id2767out_output;
  out_vars.id2764out_output = id2764out_output;
  out_vars.id2761out_output = id2761out_output;
  out_vars.id2758out_output = id2758out_output;
  out_vars.id2755out_output = id2755out_output;
  out_vars.id2752out_output = id2752out_output;
  out_vars.id2749out_output = id2749out_output;
  out_vars.id2746out_output = id2746out_output;
  out_vars.id2743out_output = id2743out_output;
  out_vars.id2740out_output = id2740out_output;
  out_vars.id2737out_output = id2737out_output;
  out_vars.id2734out_output = id2734out_output;
  out_vars.id2731out_output = id2731out_output;
  out_vars.id2728out_output = id2728out_output;
  out_vars.id2725out_output = id2725out_output;
  out_vars.id2722out_output = id2722out_output;
  out_vars.id2719out_output = id2719out_output;
  out_vars.id2716out_output = id2716out_output;
  out_vars.id2713out_output = id2713out_output;
  out_vars.id2710out_output = id2710out_output;
  out_vars.id2707out_output = id2707out_output;
  out_vars.id2704out_output = id2704out_output;
  out_vars.id2701out_output = id2701out_output;
  out_vars.id2698out_output = id2698out_output;
  out_vars.id2695out_output = id2695out_output;
  out_vars.id2692out_output = id2692out_output;
  out_vars.id2689out_output = id2689out_output;
  out_vars.id2686out_output = id2686out_output;
  out_vars.id2683out_output = id2683out_output;
  out_vars.id2680out_output = id2680out_output;
  out_vars.id2677out_output = id2677out_output;
  out_vars.id2674out_output = id2674out_output;
  out_vars.id2671out_output = id2671out_output;
  out_vars.id2668out_output = id2668out_output;
  out_vars.id2665out_output = id2665out_output;
  out_vars.id2662out_output = id2662out_output;
  out_vars.id2659out_output = id2659out_output;
  out_vars.id2656out_output = id2656out_output;
  out_vars.id2653out_output = id2653out_output;
  out_vars.id2650out_output = id2650out_output;
  out_vars.id2647out_output = id2647out_output;
  out_vars.id2644out_output = id2644out_output;
  out_vars.id2641out_output = id2641out_output;
  out_vars.id2638out_output = id2638out_output;
  out_vars.id2635out_output = id2635out_output;
  out_vars.id2632out_output = id2632out_output;
  out_vars.id2629out_output = id2629out_output;
  out_vars.id2626out_output = id2626out_output;
  out_vars.id2623out_output = id2623out_output;
  out_vars.id2620out_output = id2620out_output;
  out_vars.id2617out_output = id2617out_output;
  out_vars.id2614out_output = id2614out_output;
  out_vars.id2611out_output = id2611out_output;
  out_vars.id2608out_output = id2608out_output;
  out_vars.id2605out_output = id2605out_output;
  out_vars.id2602out_output = id2602out_output;
  out_vars.id2599out_output = id2599out_output;
  out_vars.id2596out_output = id2596out_output;
  out_vars.id2593out_output = id2593out_output;
  out_vars.id2590out_output = id2590out_output;
  out_vars.id2587out_output = id2587out_output;
  out_vars.id2584out_output = id2584out_output;
  out_vars.id2581out_output = id2581out_output;
  out_vars.id2578out_output = id2578out_output;
  out_vars.id2575out_output = id2575out_output;
  out_vars.id2572out_output = id2572out_output;
  out_vars.id2569out_output = id2569out_output;
  out_vars.id2566out_output = id2566out_output;
  out_vars.id2563out_output = id2563out_output;
  out_vars.id2560out_output = id2560out_output;
  out_vars.id2557out_output = id2557out_output;
  out_vars.id2554out_output = id2554out_output;
  out_vars.id2551out_output = id2551out_output;
  out_vars.id2548out_output = id2548out_output;
  out_vars.id2545out_output = id2545out_output;
  out_vars.id2542out_output = id2542out_output;
  out_vars.id2539out_output = id2539out_output;
  out_vars.id2536out_output = id2536out_output;
  out_vars.id2533out_output = id2533out_output;
  out_vars.id2530out_output = id2530out_output;
  out_vars.id2527out_output = id2527out_output;
  out_vars.id2524out_output = id2524out_output;
  out_vars.id2521out_output = id2521out_output;
  out_vars.id2518out_output = id2518out_output;
  out_vars.id2515out_output = id2515out_output;
  out_vars.id2512out_output = id2512out_output;
  out_vars.id2509out_output = id2509out_output;
  out_vars.id2506out_output = id2506out_output;
  out_vars.id2503out_output = id2503out_output;
  out_vars.id2500out_output = id2500out_output;
  out_vars.id2497out_output = id2497out_output;
  out_vars.id2494out_output = id2494out_output;
  out_vars.id2491out_output = id2491out_output;
  out_vars.id2488out_output = id2488out_output;
  out_vars.id2485out_output = id2485out_output;
  out_vars.id2482out_output = id2482out_output;
  out_vars.id2479out_output = id2479out_output;
  out_vars.id2476out_output = id2476out_output;
  out_vars.id2473out_output = id2473out_output;
  out_vars.id2470out_output = id2470out_output;
  out_vars.id2467out_output = id2467out_output;
  out_vars.id2464out_output = id2464out_output;
  out_vars.id2461out_output = id2461out_output;
  out_vars.id2458out_output = id2458out_output;
  out_vars.id2455out_output = id2455out_output;
  out_vars.id2452out_output = id2452out_output;
  out_vars.id2449out_output = id2449out_output;
  out_vars.id2446out_output = id2446out_output;
  out_vars.id2443out_output = id2443out_output;
  out_vars.id2440out_output = id2440out_output;
  out_vars.id2437out_output = id2437out_output;
  out_vars.id2434out_output = id2434out_output;
  out_vars.id2431out_output = id2431out_output;
  out_vars.id2428out_output = id2428out_output;
  out_vars.id2425out_output = id2425out_output;
  out_vars.id2422out_output = id2422out_output;
  out_vars.id2419out_output = id2419out_output;
  out_vars.id2416out_output = id2416out_output;
  out_vars.id2413out_output = id2413out_output;
  out_vars.id2410out_output = id2410out_output;
  out_vars.id2407out_output = id2407out_output;
  out_vars.id2404out_output = id2404out_output;
  out_vars.id2401out_output = id2401out_output;
  out_vars.id2398out_output = id2398out_output;
  out_vars.id2395out_output = id2395out_output;
  out_vars.id2392out_output = id2392out_output;
  out_vars.id2389out_output = id2389out_output;
  out_vars.id2386out_output = id2386out_output;
  out_vars.id2383out_output = id2383out_output;
  out_vars.id2380out_output = id2380out_output;
  out_vars.id2377out_output = id2377out_output;
  out_vars.id2374out_output = id2374out_output;
  out_vars.id2371out_output = id2371out_output;
  out_vars.id2368out_output = id2368out_output;
  out_vars.id2365out_output = id2365out_output;
  out_vars.id2362out_output = id2362out_output;
  out_vars.id2359out_output = id2359out_output;
  out_vars.id2356out_output = id2356out_output;
  out_vars.id2353out_output = id2353out_output;
  out_vars.id2350out_output = id2350out_output;
  out_vars.id2347out_output = id2347out_output;
  out_vars.id2344out_output = id2344out_output;
  out_vars.id2341out_output = id2341out_output;
  out_vars.id2338out_output = id2338out_output;
  out_vars.id2335out_output = id2335out_output;
  out_vars.id2332out_output = id2332out_output;
  out_vars.id2329out_output = id2329out_output;
  out_vars.id2326out_output = id2326out_output;
  out_vars.id2323out_output = id2323out_output;
  out_vars.id2320out_output = id2320out_output;
  out_vars.id2317out_output = id2317out_output;
  out_vars.id2314out_output = id2314out_output;
  out_vars.id2311out_output = id2311out_output;
  out_vars.id2308out_output = id2308out_output;
  out_vars.id2305out_output = id2305out_output;
  out_vars.id2302out_output = id2302out_output;
  out_vars.id2299out_output = id2299out_output;
  out_vars.id2296out_output = id2296out_output;
  out_vars.id2293out_output = id2293out_output;
  out_vars.id2290out_output = id2290out_output;
  out_vars.id2287out_output = id2287out_output;
  out_vars.id2284out_output = id2284out_output;
  out_vars.id2281out_output = id2281out_output;
  out_vars.id2278out_output = id2278out_output;
  out_vars.id2275out_output = id2275out_output;
  out_vars.id2272out_output = id2272out_output;
  out_vars.id2269out_output = id2269out_output;
  out_vars.id2266out_output = id2266out_output;
  out_vars.id2263out_output = id2263out_output;
  out_vars.id2260out_output = id2260out_output;
  out_vars.id2257out_output = id2257out_output;
  out_vars.id2254out_output = id2254out_output;
  out_vars.id2251out_output = id2251out_output;
  out_vars.id2248out_output = id2248out_output;
  out_vars.id2245out_output = id2245out_output;
  out_vars.id2242out_output = id2242out_output;
  out_vars.id2239out_output = id2239out_output;
  out_vars.id2236out_output = id2236out_output;
  out_vars.id2233out_output = id2233out_output;
  out_vars.id2230out_output = id2230out_output;
  out_vars.id2227out_output = id2227out_output;
  out_vars.id2224out_output = id2224out_output;
  out_vars.id2221out_output = id2221out_output;
  out_vars.id2218out_output = id2218out_output;
  out_vars.id2215out_output = id2215out_output;
  out_vars.id2212out_output = id2212out_output;
  out_vars.id2209out_output = id2209out_output;
  out_vars.id2206out_output = id2206out_output;
  out_vars.id2203out_output = id2203out_output;
  out_vars.id2200out_output = id2200out_output;
  out_vars.id2197out_output = id2197out_output;
  out_vars.id2194out_output = id2194out_output;
  out_vars.id2191out_output = id2191out_output;
  out_vars.id2188out_output = id2188out_output;
  out_vars.id2185out_output = id2185out_output;
  out_vars.id2182out_output = id2182out_output;
  out_vars.id2179out_output = id2179out_output;
  out_vars.id2176out_output = id2176out_output;
  return out_vars;
};

};
