#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window00_exec1.h"
//#include "sliding_window00.h"

namespace maxcompilersim {

sliding_window00Block1Vars sliding_window00::execute0() {
  { // Node ID: 1360 (NodeConstantRawBits)
  }
  { // Node ID: 1359 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 2 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id2in_enable = id1360out_value;
    const HWOffsetFix<33,0,UNSIGNED> &id2in_max = id1359out_value;

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
  { // Node ID: 1358 (NodeConstantRawBits)
  }
  { // Node ID: 4 (NodeGt)
    const HWOffsetFix<32,0,UNSIGNED> &id4in_a = id2out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id4in_b = id1358out_value;

    id4out_result[(getCycle()+1)%2] = (gt_fixed(id4in_a,id4in_b));
  }
  { // Node ID: 1357 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 6 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id6in_enable = id4out_result[getCycle()%2];
    const HWOffsetFix<17,0,UNSIGNED> &id6in_max = id1357out_value;

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
  { // Node ID: 1356 (NodeConstantRawBits)
  }
  { // Node ID: 26 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id26in_a = id6out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id26in_b = id1356out_value;

    id26out_result[(getCycle()+1)%2] = (eq_fixed(id26in_a,id26in_b));
  }
  { // Node ID: 1355 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 8 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id8in_enable = id6out_wrap;
    const HWOffsetFix<17,0,UNSIGNED> &id8in_max = id1355out_value;

    HWOffsetFix<17,0,UNSIGNED> id8x_1;
    HWOffsetFix<1,0,UNSIGNED> id8x_2;
    HWOffsetFix<1,0,UNSIGNED> id8x_3;
    HWOffsetFix<17,0,UNSIGNED> id8x_4t_1e_1;

    id8out_count = (cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>((id8st_count)));
    (id8x_1) = (add_fixed<17,0,UNSIGNED,TRUNCATE>((id8st_count),(c_hw_fix_17_0_uns_bits)));
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
  { // Node ID: 1354 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 10 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id10in_enable = id8out_wrap;
    const HWOffsetFix<17,0,UNSIGNED> &id10in_max = id1354out_value;

    HWOffsetFix<17,0,UNSIGNED> id10x_1;
    HWOffsetFix<1,0,UNSIGNED> id10x_2;
    HWOffsetFix<1,0,UNSIGNED> id10x_3;
    HWOffsetFix<17,0,UNSIGNED> id10x_4t_1e_1;

    id10out_count = (cast_fixed2fixed<16,0,UNSIGNED,TRUNCATE>((id10st_count)));
    (id10x_1) = (add_fixed<17,0,UNSIGNED,TRUNCATE>((id10st_count),(c_hw_fix_17_0_uns_bits)));
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
  { // Node ID: 1353 (NodeConstantRawBits)
  }
  { // Node ID: 28 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id28in_a = id10out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id28in_b = id1353out_value;

    id28out_result[(getCycle()+1)%2] = (eq_fixed(id28in_a,id28in_b));
  }
  { // Node ID: 29 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id29in_a = id26out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id29in_b = id28out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id29x_1;

    (id29x_1) = (and_fixed(id29in_a,id29in_b));
    id29out_result[(getCycle()+1)%2] = (id29x_1);
  }
  { // Node ID: 1352 (NodeConstantRawBits)
  }
  { // Node ID: 31 (NodeLt)
    const HWOffsetFix<16,0,UNSIGNED> &id31in_a = id8out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id31in_b = id1352out_value;

    id31out_result[(getCycle()+1)%2] = (lt_fixed(id31in_a,id31in_b));
  }
  { // Node ID: 1056 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id1056in_input = id31out_result[getCycle()%2];

    id1056out_output[(getCycle()+1)%2] = id1056in_input;
  }
  { // Node ID: 32 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id32in_a = id29out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id32in_b = id1056out_output[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id32x_1;

    (id32x_1) = (and_fixed(id32in_a,id32in_b));
    id32out_result[(getCycle()+1)%2] = (id32x_1);
  }
  { // Node ID: 1351 (NodeConstantRawBits)
  }
  { // Node ID: 34 (NodeGt)
    const HWOffsetFix<32,0,UNSIGNED> &id34in_a = id2out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id34in_b = id1351out_value;

    id34out_result[(getCycle()+1)%2] = (gt_fixed(id34in_a,id34in_b));
  }
  { // Node ID: 1057 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id1057in_input = id34out_result[getCycle()%2];

    id1057out_output[(getCycle()+3)%4] = id1057in_input;
  }
  { // Node ID: 35 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id35in_a = id32out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id35in_b = id1057out_output[getCycle()%4];

    HWOffsetFix<1,0,UNSIGNED> id35x_1;

    (id35x_1) = (and_fixed(id35in_a,id35in_b));
    id35out_result[(getCycle()+1)%2] = (id35x_1);
  }
  { // Node ID: 1058 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id1058in_input = id35out_result[getCycle()%2];

    id1058out_output[(getCycle()+13)%14] = id1058in_input;
  }
  { // Node ID: 487 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id488out_result;

  { // Node ID: 488 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id488in_a = id487out_io_y01_force_disabled;

    id488out_result = (not_fixed(id488in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id489out_result;

  { // Node ID: 489 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id489in_a = id1058out_output[getCycle()%14];
    const HWOffsetFix<1,0,UNSIGNED> &id489in_b = id488out_result;

    HWOffsetFix<1,0,UNSIGNED> id489x_1;

    (id489x_1) = (and_fixed(id489in_a,id489in_b));
    id489out_result = (id489x_1);
  }
  { // Node ID: 1350 (NodeConstantRawBits)
  }
  { // Node ID: 12 (NodeLt)
    const HWOffsetFix<32,0,UNSIGNED> &id12in_a = id2out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id12in_b = id1350out_value;

    id12out_result[(getCycle()+1)%2] = (lt_fixed(id12in_a,id12in_b));
  }
  { // Node ID: 1062 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id1062in_input = id12out_result[getCycle()%2];

    id1062out_output[(getCycle()+4)%5] = id1062in_input;
  }
  { // Node ID: 1349 (NodeConstantRawBits)
  }
  { // Node ID: 14 (NodeLt)
    const HWOffsetFix<32,0,UNSIGNED> &id14in_a = id2out_count;
    const HWOffsetFix<32,0,UNSIGNED> &id14in_b = id1349out_value;

    id14out_result[(getCycle()+1)%2] = (lt_fixed(id14in_a,id14in_b));
  }
  { // Node ID: 1059 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id1059in_input = id14out_result[getCycle()%2];

    id1059out_output[(getCycle()+1)%2] = id1059in_input;
  }
  { // Node ID: 1348 (NodeConstantRawBits)
  }
  { // Node ID: 16 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id16in_a = id6out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id16in_b = id1348out_value;

    id16out_result[(getCycle()+1)%2] = (eq_fixed(id16in_a,id16in_b));
  }
  { // Node ID: 17 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id17in_a = id1059out_output[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id17in_b = id16out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id17x_1;

    (id17x_1) = (and_fixed(id17in_a,id17in_b));
    id17out_result[(getCycle()+1)%2] = (id17x_1);
  }
  { // Node ID: 1347 (NodeConstantRawBits)
  }
  { // Node ID: 19 (NodeLt)
    const HWOffsetFix<16,0,UNSIGNED> &id19in_a = id8out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id19in_b = id1347out_value;

    id19out_result[(getCycle()+1)%2] = (lt_fixed(id19in_a,id19in_b));
  }
  { // Node ID: 1060 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id1060in_input = id19out_result[getCycle()%2];

    id1060out_output[(getCycle()+1)%2] = id1060in_input;
  }
  { // Node ID: 20 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id20in_a = id17out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id20in_b = id1060out_output[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id20x_1;

    (id20x_1) = (and_fixed(id20in_a,id20in_b));
    id20out_result[(getCycle()+1)%2] = (id20x_1);
  }
  { // Node ID: 1346 (NodeConstantRawBits)
  }
  { // Node ID: 22 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id22in_a = id10out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id22in_b = id1346out_value;

    id22out_result[(getCycle()+1)%2] = (eq_fixed(id22in_a,id22in_b));
  }
  { // Node ID: 1061 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id1061in_input = id22out_result[getCycle()%2];

    id1061out_output[(getCycle()+2)%3] = id1061in_input;
  }
  { // Node ID: 23 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id23in_a = id20out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id23in_b = id1061out_output[getCycle()%3];

    HWOffsetFix<1,0,UNSIGNED> id23x_1;

    (id23x_1) = (and_fixed(id23in_a,id23in_b));
    id23out_result[(getCycle()+1)%2] = (id23x_1);
  }
  { // Node ID: 24 (NodeOr)
    const HWOffsetFix<1,0,UNSIGNED> &id24in_a = id1062out_output[getCycle()%5];
    const HWOffsetFix<1,0,UNSIGNED> &id24in_b = id23out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id24x_1;

    (id24x_1) = (or_fixed(id24in_a,id24in_b));
    id24out_result[(getCycle()+1)%2] = (id24x_1);
  }
  { // Node ID: 1063 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id1063in_input = id24out_result[getCycle()%2];

    id1063out_output[(getCycle()+11)%12] = id1063in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id112out_output;

  { // Node ID: 112 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id112in_input = id113out_result[getCycle()%2];

    id112out_output = id112in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id109out_output;

  { // Node ID: 109 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id109in_input = id110out_result[getCycle()%2];

    id109out_output = id109in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id106out_output;

  { // Node ID: 106 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id106in_input = id107out_result[getCycle()%2];

    id106out_output = id106in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id103out_output;

  { // Node ID: 103 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id103in_input = id104out_result[getCycle()%2];

    id103out_output = id103in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id100out_output;

  { // Node ID: 100 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id100in_input = id101out_result[getCycle()%2];

    id100out_output = id100in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id97out_output;

  { // Node ID: 97 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id97in_input = id98out_result[getCycle()%2];

    id97out_output = id97in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id94out_output;

  { // Node ID: 94 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id94in_input = id95out_result[getCycle()%2];

    id94out_output = id94in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id91out_output;

  { // Node ID: 91 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id91in_input = id92out_result[getCycle()%2];

    id91out_output = id91in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id88out_output;

  { // Node ID: 88 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id88in_input = id89out_result[getCycle()%2];

    id88out_output = id88in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id85out_output;

  { // Node ID: 85 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id85in_input = id86out_result[getCycle()%2];

    id85out_output = id85in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id82out_output;

  { // Node ID: 82 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id82in_input = id83out_result[getCycle()%2];

    id82out_output = id82in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id79out_output;

  { // Node ID: 79 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id79in_input = id80out_result[getCycle()%2];

    id79out_output = id79in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id76out_output;

  { // Node ID: 76 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id76in_input = id77out_result[getCycle()%2];

    id76out_output = id76in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id73out_output;

  { // Node ID: 73 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id73in_input = id74out_result[getCycle()%2];

    id73out_output = id73in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id70out_output;

  { // Node ID: 70 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id70in_input = id71out_result[getCycle()%2];

    id70out_output = id70in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id67out_output;

  { // Node ID: 67 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id67in_input = id68out_result[getCycle()%2];

    id67out_output = id67in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id64out_output;

  { // Node ID: 64 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id64in_input = id65out_result[getCycle()%2];

    id64out_output = id64in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id61out_output;

  { // Node ID: 61 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id61in_input = id62out_result[getCycle()%2];

    id61out_output = id61in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id58out_output;

  { // Node ID: 58 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id58in_input = id59out_result[getCycle()%2];

    id58out_output = id58in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id55out_output;

  { // Node ID: 55 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id55in_input = id56out_result[getCycle()%2];

    id55out_output = id55in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id52out_output;

  { // Node ID: 52 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id52in_input = id53out_result[getCycle()%2];

    id52out_output = id52in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id49out_output;

  { // Node ID: 49 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id49in_input = id50out_result[getCycle()%2];

    id49out_output = id49in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id46out_output;

  { // Node ID: 46 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id46in_input = id47out_result[getCycle()%2];

    id46out_output = id46in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id43out_output;

  { // Node ID: 43 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id43in_input = id44out_result[getCycle()%2];

    id43out_output = id43in_input;
  }
  { // Node ID: 36 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id37out_result;

  { // Node ID: 37 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id37in_a = id36out_io_x01_force_disabled;

    id37out_result = (not_fixed(id37in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id38out_result;

  { // Node ID: 38 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id38in_a = id24out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id38in_b = id37out_result;

    HWOffsetFix<1,0,UNSIGNED> id38x_1;

    (id38x_1) = (and_fixed(id38in_a,id38in_b));
    id38out_result = (id38x_1);
  }
  if ( (getFillLevel() >= (6l)))
  { // Node ID: 39 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id39in_enable = id38out_result;

    (id39st_read_next_cycle) = ((id39in_enable.getValueAsBool())&(!(((getFlushLevel())>=(6l))&(isFlushingActive()))));
    queueReadRequest(m_x01, id39st_read_next_cycle.getValueAsBool());
  }
  HWFloat<8,24> id41out_output;

  { // Node ID: 41 (NodeReinterpret)
    const HWRawBits<32> &id41in_input = id39out_data;

    id41out_output = (cast_bits2float<8,24>(id41in_input));
  }
  { // Node ID: 42 (NodeCast)
    const HWFloat<8,24> &id42in_i = id41out_output;

    id42out_o[(getCycle()+6)%7] = (cast_float2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id42in_i));
  }
  { // Node ID: 44 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id44in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id44in_option0 = id43out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id44in_option1 = id42out_o[getCycle()%7];

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id44x_1;

    switch((id44in_sel.getValueAsLong())) {
      case 0l:
        id44x_1 = id44in_option0;
        break;
      case 1l:
        id44x_1 = id44in_option1;
        break;
      default:
        id44x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id44out_result[(getCycle()+1)%2] = (id44x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id45out_output;

  { // Node ID: 45 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id45in_input = id44out_result[getCycle()%2];

    id45out_output = id45in_input;
  }
  { // Node ID: 47 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id47in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id47in_option0 = id46out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id47in_option1 = id45out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id48out_output;

  { // Node ID: 48 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id48in_input = id47out_result[getCycle()%2];

    id48out_output = id48in_input;
  }
  { // Node ID: 50 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id50in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id50in_option0 = id49out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id50in_option1 = id48out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id50x_1;

    switch((id50in_sel.getValueAsLong())) {
      case 0l:
        id50x_1 = id50in_option0;
        break;
      case 1l:
        id50x_1 = id50in_option1;
        break;
      default:
        id50x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id50out_result[(getCycle()+1)%2] = (id50x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id51out_output;

  { // Node ID: 51 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id51in_input = id50out_result[getCycle()%2];

    id51out_output = id51in_input;
  }
  { // Node ID: 53 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id53in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id53in_option0 = id52out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id53in_option1 = id51out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id53x_1;

    switch((id53in_sel.getValueAsLong())) {
      case 0l:
        id53x_1 = id53in_option0;
        break;
      case 1l:
        id53x_1 = id53in_option1;
        break;
      default:
        id53x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id53out_result[(getCycle()+1)%2] = (id53x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id54out_output;

  { // Node ID: 54 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id54in_input = id53out_result[getCycle()%2];

    id54out_output = id54in_input;
  }
  { // Node ID: 56 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id56in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id56in_option0 = id55out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id56in_option1 = id54out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id56x_1;

    switch((id56in_sel.getValueAsLong())) {
      case 0l:
        id56x_1 = id56in_option0;
        break;
      case 1l:
        id56x_1 = id56in_option1;
        break;
      default:
        id56x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id56out_result[(getCycle()+1)%2] = (id56x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id57out_output;

  { // Node ID: 57 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id57in_input = id56out_result[getCycle()%2];

    id57out_output = id57in_input;
  }
  { // Node ID: 59 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id59in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id59in_option0 = id58out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id59in_option1 = id57out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id59x_1;

    switch((id59in_sel.getValueAsLong())) {
      case 0l:
        id59x_1 = id59in_option0;
        break;
      case 1l:
        id59x_1 = id59in_option1;
        break;
      default:
        id59x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id59out_result[(getCycle()+1)%2] = (id59x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id60out_output;

  { // Node ID: 60 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id60in_input = id59out_result[getCycle()%2];

    id60out_output = id60in_input;
  }
  { // Node ID: 62 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id62in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id62in_option0 = id61out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id62in_option1 = id60out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id62x_1;

    switch((id62in_sel.getValueAsLong())) {
      case 0l:
        id62x_1 = id62in_option0;
        break;
      case 1l:
        id62x_1 = id62in_option1;
        break;
      default:
        id62x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id62out_result[(getCycle()+1)%2] = (id62x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id63out_output;

  { // Node ID: 63 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id63in_input = id62out_result[getCycle()%2];

    id63out_output = id63in_input;
  }
  { // Node ID: 65 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id65in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id65in_option0 = id64out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id65in_option1 = id63out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id65x_1;

    switch((id65in_sel.getValueAsLong())) {
      case 0l:
        id65x_1 = id65in_option0;
        break;
      case 1l:
        id65x_1 = id65in_option1;
        break;
      default:
        id65x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id65out_result[(getCycle()+1)%2] = (id65x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id66out_output;

  { // Node ID: 66 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id66in_input = id65out_result[getCycle()%2];

    id66out_output = id66in_input;
  }
  { // Node ID: 68 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id68in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id68in_option0 = id67out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id68in_option1 = id66out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id68x_1;

    switch((id68in_sel.getValueAsLong())) {
      case 0l:
        id68x_1 = id68in_option0;
        break;
      case 1l:
        id68x_1 = id68in_option1;
        break;
      default:
        id68x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id68out_result[(getCycle()+1)%2] = (id68x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id69out_output;

  { // Node ID: 69 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id69in_input = id68out_result[getCycle()%2];

    id69out_output = id69in_input;
  }
  { // Node ID: 71 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id71in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id71in_option0 = id70out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id71in_option1 = id69out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id71x_1;

    switch((id71in_sel.getValueAsLong())) {
      case 0l:
        id71x_1 = id71in_option0;
        break;
      case 1l:
        id71x_1 = id71in_option1;
        break;
      default:
        id71x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id71out_result[(getCycle()+1)%2] = (id71x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id72out_output;

  { // Node ID: 72 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id72in_input = id71out_result[getCycle()%2];

    id72out_output = id72in_input;
  }
  { // Node ID: 74 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id74in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id74in_option0 = id73out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id74in_option1 = id72out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id74x_1;

    switch((id74in_sel.getValueAsLong())) {
      case 0l:
        id74x_1 = id74in_option0;
        break;
      case 1l:
        id74x_1 = id74in_option1;
        break;
      default:
        id74x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id74out_result[(getCycle()+1)%2] = (id74x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id75out_output;

  { // Node ID: 75 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id75in_input = id74out_result[getCycle()%2];

    id75out_output = id75in_input;
  }
  { // Node ID: 77 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id77in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id77in_option0 = id76out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id77in_option1 = id75out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id77x_1;

    switch((id77in_sel.getValueAsLong())) {
      case 0l:
        id77x_1 = id77in_option0;
        break;
      case 1l:
        id77x_1 = id77in_option1;
        break;
      default:
        id77x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id77out_result[(getCycle()+1)%2] = (id77x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id78out_output;

  { // Node ID: 78 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id78in_input = id77out_result[getCycle()%2];

    id78out_output = id78in_input;
  }
  { // Node ID: 80 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id80in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id80in_option0 = id79out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id80in_option1 = id78out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id81out_output;

  { // Node ID: 81 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id81in_input = id80out_result[getCycle()%2];

    id81out_output = id81in_input;
  }
  { // Node ID: 83 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id83in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id83in_option0 = id82out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id83in_option1 = id81out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id84out_output;

  { // Node ID: 84 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id84in_input = id83out_result[getCycle()%2];

    id84out_output = id84in_input;
  }
  { // Node ID: 86 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id86in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id86in_option0 = id85out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id86in_option1 = id84out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id86x_1;

    switch((id86in_sel.getValueAsLong())) {
      case 0l:
        id86x_1 = id86in_option0;
        break;
      case 1l:
        id86x_1 = id86in_option1;
        break;
      default:
        id86x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id86out_result[(getCycle()+1)%2] = (id86x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id87out_output;

  { // Node ID: 87 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id87in_input = id86out_result[getCycle()%2];

    id87out_output = id87in_input;
  }
  { // Node ID: 89 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id89in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id89in_option0 = id88out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id89in_option1 = id87out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id89x_1;

    switch((id89in_sel.getValueAsLong())) {
      case 0l:
        id89x_1 = id89in_option0;
        break;
      case 1l:
        id89x_1 = id89in_option1;
        break;
      default:
        id89x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id89out_result[(getCycle()+1)%2] = (id89x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id90out_output;

  { // Node ID: 90 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id90in_input = id89out_result[getCycle()%2];

    id90out_output = id90in_input;
  }
  { // Node ID: 92 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id92in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id92in_option0 = id91out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id92in_option1 = id90out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id92x_1;

    switch((id92in_sel.getValueAsLong())) {
      case 0l:
        id92x_1 = id92in_option0;
        break;
      case 1l:
        id92x_1 = id92in_option1;
        break;
      default:
        id92x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id92out_result[(getCycle()+1)%2] = (id92x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id93out_output;

  { // Node ID: 93 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id93in_input = id92out_result[getCycle()%2];

    id93out_output = id93in_input;
  }
  { // Node ID: 95 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id95in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id95in_option0 = id94out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id95in_option1 = id93out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id96out_output;

  { // Node ID: 96 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id96in_input = id95out_result[getCycle()%2];

    id96out_output = id96in_input;
  }
  { // Node ID: 98 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id98in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id98in_option0 = id97out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id98in_option1 = id96out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id98x_1;

    switch((id98in_sel.getValueAsLong())) {
      case 0l:
        id98x_1 = id98in_option0;
        break;
      case 1l:
        id98x_1 = id98in_option1;
        break;
      default:
        id98x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id98out_result[(getCycle()+1)%2] = (id98x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id99out_output;

  { // Node ID: 99 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id99in_input = id98out_result[getCycle()%2];

    id99out_output = id99in_input;
  }
  { // Node ID: 101 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id101in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id101in_option0 = id100out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id101in_option1 = id99out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id101x_1;

    switch((id101in_sel.getValueAsLong())) {
      case 0l:
        id101x_1 = id101in_option0;
        break;
      case 1l:
        id101x_1 = id101in_option1;
        break;
      default:
        id101x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id101out_result[(getCycle()+1)%2] = (id101x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id102out_output;

  { // Node ID: 102 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id102in_input = id101out_result[getCycle()%2];

    id102out_output = id102in_input;
  }
  { // Node ID: 104 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id104in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id104in_option0 = id103out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id104in_option1 = id102out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id104x_1;

    switch((id104in_sel.getValueAsLong())) {
      case 0l:
        id104x_1 = id104in_option0;
        break;
      case 1l:
        id104x_1 = id104in_option1;
        break;
      default:
        id104x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id104out_result[(getCycle()+1)%2] = (id104x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id105out_output;

  { // Node ID: 105 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id105in_input = id104out_result[getCycle()%2];

    id105out_output = id105in_input;
  }
  { // Node ID: 107 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id107in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id107in_option0 = id106out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id107in_option1 = id105out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id108out_output;

  { // Node ID: 108 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id108in_input = id107out_result[getCycle()%2];

    id108out_output = id108in_input;
  }
  { // Node ID: 110 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id110in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id110in_option0 = id109out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id110in_option1 = id108out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id110x_1;

    switch((id110in_sel.getValueAsLong())) {
      case 0l:
        id110x_1 = id110in_option0;
        break;
      case 1l:
        id110x_1 = id110in_option1;
        break;
      default:
        id110x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id110out_result[(getCycle()+1)%2] = (id110x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id111out_output;

  { // Node ID: 111 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id111in_input = id110out_result[getCycle()%2];

    id111out_output = id111in_input;
  }
  { // Node ID: 113 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id113in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id113in_option0 = id112out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id113in_option1 = id111out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id113x_1;

    switch((id113in_sel.getValueAsLong())) {
      case 0l:
        id113x_1 = id113in_option0;
        break;
      case 1l:
        id113x_1 = id113in_option1;
        break;
      default:
        id113x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id113out_result[(getCycle()+1)%2] = (id113x_1);
  }
  HWRawBits<32> id538out_output;

  { // Node ID: 538 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id538in_input = id113out_result[getCycle()%2];

    id538out_output = (cast_fixed2bits(id538in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id115out_output;

  { // Node ID: 115 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id115in_input = id116out_result[getCycle()%2];

    id115out_output = id115in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id114out_output;

  { // Node ID: 114 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id114in_input = id113out_result[getCycle()%2];

    id114out_output = id114in_input;
  }
  { // Node ID: 116 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id116in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id116in_option0 = id115out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id116in_option1 = id114out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id116x_1;

    switch((id116in_sel.getValueAsLong())) {
      case 0l:
        id116x_1 = id116in_option0;
        break;
      case 1l:
        id116x_1 = id116in_option1;
        break;
      default:
        id116x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id116out_result[(getCycle()+1)%2] = (id116x_1);
  }
  HWRawBits<32> id536out_output;

  { // Node ID: 536 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id536in_input = id116out_result[getCycle()%2];

    id536out_output = (cast_fixed2bits(id536in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id118out_output;

  { // Node ID: 118 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id118in_input = id119out_result[getCycle()%2];

    id118out_output = id118in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id117out_output;

  { // Node ID: 117 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id117in_input = id116out_result[getCycle()%2];

    id117out_output = id117in_input;
  }
  { // Node ID: 119 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id119in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id119in_option0 = id118out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id119in_option1 = id117out_output;

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
  HWRawBits<32> id534out_output;

  { // Node ID: 534 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id534in_input = id119out_result[getCycle()%2];

    id534out_output = (cast_fixed2bits(id534in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id121out_output;

  { // Node ID: 121 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id121in_input = id122out_result[getCycle()%2];

    id121out_output = id121in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id120out_output;

  { // Node ID: 120 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id120in_input = id119out_result[getCycle()%2];

    id120out_output = id120in_input;
  }
  { // Node ID: 122 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id122in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id122in_option0 = id121out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id122in_option1 = id120out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id122x_1;

    switch((id122in_sel.getValueAsLong())) {
      case 0l:
        id122x_1 = id122in_option0;
        break;
      case 1l:
        id122x_1 = id122in_option1;
        break;
      default:
        id122x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id122out_result[(getCycle()+1)%2] = (id122x_1);
  }
  HWRawBits<32> id532out_output;

  { // Node ID: 532 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id532in_input = id122out_result[getCycle()%2];

    id532out_output = (cast_fixed2bits(id532in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id124out_output;

  { // Node ID: 124 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id124in_input = id125out_result[getCycle()%2];

    id124out_output = id124in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id123out_output;

  { // Node ID: 123 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id123in_input = id122out_result[getCycle()%2];

    id123out_output = id123in_input;
  }
  { // Node ID: 125 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id125in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id125in_option0 = id124out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id125in_option1 = id123out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id125x_1;

    switch((id125in_sel.getValueAsLong())) {
      case 0l:
        id125x_1 = id125in_option0;
        break;
      case 1l:
        id125x_1 = id125in_option1;
        break;
      default:
        id125x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id125out_result[(getCycle()+1)%2] = (id125x_1);
  }
  HWRawBits<32> id530out_output;

  { // Node ID: 530 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id530in_input = id125out_result[getCycle()%2];

    id530out_output = (cast_fixed2bits(id530in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id196out_output;

  { // Node ID: 196 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id196in_input = id197out_result[getCycle()%2];

    id196out_output = id196in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id193out_output;

  { // Node ID: 193 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id193in_input = id194out_result[getCycle()%2];

    id193out_output = id193in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id190out_output;

  { // Node ID: 190 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id190in_input = id191out_result[getCycle()%2];

    id190out_output = id190in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id187out_output;

  { // Node ID: 187 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id187in_input = id188out_result[getCycle()%2];

    id187out_output = id187in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id184out_output;

  { // Node ID: 184 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id184in_input = id185out_result[getCycle()%2];

    id184out_output = id184in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id181out_output;

  { // Node ID: 181 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id181in_input = id182out_result[getCycle()%2];

    id181out_output = id181in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id178out_output;

  { // Node ID: 178 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id178in_input = id179out_result[getCycle()%2];

    id178out_output = id178in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id175out_output;

  { // Node ID: 175 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id175in_input = id176out_result[getCycle()%2];

    id175out_output = id175in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id172out_output;

  { // Node ID: 172 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id172in_input = id173out_result[getCycle()%2];

    id172out_output = id172in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id169out_output;

  { // Node ID: 169 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id169in_input = id170out_result[getCycle()%2];

    id169out_output = id169in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id166out_output;

  { // Node ID: 166 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id166in_input = id167out_result[getCycle()%2];

    id166out_output = id166in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id163out_output;

  { // Node ID: 163 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id163in_input = id164out_result[getCycle()%2];

    id163out_output = id163in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id160out_output;

  { // Node ID: 160 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id160in_input = id161out_result[getCycle()%2];

    id160out_output = id160in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id157out_output;

  { // Node ID: 157 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id157in_input = id158out_result[getCycle()%2];

    id157out_output = id157in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id154out_output;

  { // Node ID: 154 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id154in_input = id155out_result[getCycle()%2];

    id154out_output = id154in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id151out_output;

  { // Node ID: 151 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id151in_input = id152out_result[getCycle()%2];

    id151out_output = id151in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id148out_output;

  { // Node ID: 148 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id148in_input = id149out_result[getCycle()%2];

    id148out_output = id148in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id145out_output;

  { // Node ID: 145 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id145in_input = id146out_result[getCycle()%2];

    id145out_output = id145in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id142out_output;

  { // Node ID: 142 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id142in_input = id143out_result[getCycle()%2];

    id142out_output = id142in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id139out_output;

  { // Node ID: 139 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id139in_input = id140out_result[getCycle()%2];

    id139out_output = id139in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id136out_output;

  { // Node ID: 136 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id136in_input = id137out_result[getCycle()%2];

    id136out_output = id136in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id133out_output;

  { // Node ID: 133 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id133in_input = id134out_result[getCycle()%2];

    id133out_output = id133in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id130out_output;

  { // Node ID: 130 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id130in_input = id131out_result[getCycle()%2];

    id130out_output = id130in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id127out_output;

  { // Node ID: 127 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id127in_input = id128out_result[getCycle()%2];

    id127out_output = id127in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id126out_output;

  { // Node ID: 126 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id126in_input = id125out_result[getCycle()%2];

    id126out_output = id126in_input;
  }
  { // Node ID: 128 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id128in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id128in_option0 = id127out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id128in_option1 = id126out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id128x_1;

    switch((id128in_sel.getValueAsLong())) {
      case 0l:
        id128x_1 = id128in_option0;
        break;
      case 1l:
        id128x_1 = id128in_option1;
        break;
      default:
        id128x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id128out_result[(getCycle()+1)%2] = (id128x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id129out_output;

  { // Node ID: 129 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id129in_input = id128out_result[getCycle()%2];

    id129out_output = id129in_input;
  }
  { // Node ID: 131 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id131in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id131in_option0 = id130out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id131in_option1 = id129out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id132out_output;

  { // Node ID: 132 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id132in_input = id131out_result[getCycle()%2];

    id132out_output = id132in_input;
  }
  { // Node ID: 134 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id134in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id134in_option0 = id133out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id134in_option1 = id132out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id134x_1;

    switch((id134in_sel.getValueAsLong())) {
      case 0l:
        id134x_1 = id134in_option0;
        break;
      case 1l:
        id134x_1 = id134in_option1;
        break;
      default:
        id134x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id134out_result[(getCycle()+1)%2] = (id134x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id135out_output;

  { // Node ID: 135 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id135in_input = id134out_result[getCycle()%2];

    id135out_output = id135in_input;
  }
  { // Node ID: 137 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id137in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id137in_option0 = id136out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id137in_option1 = id135out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id137x_1;

    switch((id137in_sel.getValueAsLong())) {
      case 0l:
        id137x_1 = id137in_option0;
        break;
      case 1l:
        id137x_1 = id137in_option1;
        break;
      default:
        id137x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id137out_result[(getCycle()+1)%2] = (id137x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id138out_output;

  { // Node ID: 138 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id138in_input = id137out_result[getCycle()%2];

    id138out_output = id138in_input;
  }
  { // Node ID: 140 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id140in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id140in_option0 = id139out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id140in_option1 = id138out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id140x_1;

    switch((id140in_sel.getValueAsLong())) {
      case 0l:
        id140x_1 = id140in_option0;
        break;
      case 1l:
        id140x_1 = id140in_option1;
        break;
      default:
        id140x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id140out_result[(getCycle()+1)%2] = (id140x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id141out_output;

  { // Node ID: 141 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id141in_input = id140out_result[getCycle()%2];

    id141out_output = id141in_input;
  }
  { // Node ID: 143 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id143in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id143in_option0 = id142out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id143in_option1 = id141out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id144out_output;

  { // Node ID: 144 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id144in_input = id143out_result[getCycle()%2];

    id144out_output = id144in_input;
  }
  { // Node ID: 146 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id146in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id146in_option0 = id145out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id146in_option1 = id144out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id146x_1;

    switch((id146in_sel.getValueAsLong())) {
      case 0l:
        id146x_1 = id146in_option0;
        break;
      case 1l:
        id146x_1 = id146in_option1;
        break;
      default:
        id146x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id146out_result[(getCycle()+1)%2] = (id146x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id147out_output;

  { // Node ID: 147 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id147in_input = id146out_result[getCycle()%2];

    id147out_output = id147in_input;
  }
  { // Node ID: 149 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id149in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id149in_option0 = id148out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id149in_option1 = id147out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id149x_1;

    switch((id149in_sel.getValueAsLong())) {
      case 0l:
        id149x_1 = id149in_option0;
        break;
      case 1l:
        id149x_1 = id149in_option1;
        break;
      default:
        id149x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id149out_result[(getCycle()+1)%2] = (id149x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id150out_output;

  { // Node ID: 150 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id150in_input = id149out_result[getCycle()%2];

    id150out_output = id150in_input;
  }
  { // Node ID: 152 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id152in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id152in_option0 = id151out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id152in_option1 = id150out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id152x_1;

    switch((id152in_sel.getValueAsLong())) {
      case 0l:
        id152x_1 = id152in_option0;
        break;
      case 1l:
        id152x_1 = id152in_option1;
        break;
      default:
        id152x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id152out_result[(getCycle()+1)%2] = (id152x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id153out_output;

  { // Node ID: 153 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id153in_input = id152out_result[getCycle()%2];

    id153out_output = id153in_input;
  }
  { // Node ID: 155 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id155in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id155in_option0 = id154out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id155in_option1 = id153out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id156out_output;

  { // Node ID: 156 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id156in_input = id155out_result[getCycle()%2];

    id156out_output = id156in_input;
  }
  { // Node ID: 158 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id158in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id158in_option0 = id157out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id158in_option1 = id156out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id158x_1;

    switch((id158in_sel.getValueAsLong())) {
      case 0l:
        id158x_1 = id158in_option0;
        break;
      case 1l:
        id158x_1 = id158in_option1;
        break;
      default:
        id158x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id158out_result[(getCycle()+1)%2] = (id158x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id159out_output;

  { // Node ID: 159 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id159in_input = id158out_result[getCycle()%2];

    id159out_output = id159in_input;
  }
  { // Node ID: 161 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id161in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id161in_option0 = id160out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id161in_option1 = id159out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id161x_1;

    switch((id161in_sel.getValueAsLong())) {
      case 0l:
        id161x_1 = id161in_option0;
        break;
      case 1l:
        id161x_1 = id161in_option1;
        break;
      default:
        id161x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id161out_result[(getCycle()+1)%2] = (id161x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id162out_output;

  { // Node ID: 162 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id162in_input = id161out_result[getCycle()%2];

    id162out_output = id162in_input;
  }
  { // Node ID: 164 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id164in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id164in_option0 = id163out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id164in_option1 = id162out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id164x_1;

    switch((id164in_sel.getValueAsLong())) {
      case 0l:
        id164x_1 = id164in_option0;
        break;
      case 1l:
        id164x_1 = id164in_option1;
        break;
      default:
        id164x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id164out_result[(getCycle()+1)%2] = (id164x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id165out_output;

  { // Node ID: 165 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id165in_input = id164out_result[getCycle()%2];

    id165out_output = id165in_input;
  }
  { // Node ID: 167 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id167in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id167in_option0 = id166out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id167in_option1 = id165out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id167x_1;

    switch((id167in_sel.getValueAsLong())) {
      case 0l:
        id167x_1 = id167in_option0;
        break;
      case 1l:
        id167x_1 = id167in_option1;
        break;
      default:
        id167x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id167out_result[(getCycle()+1)%2] = (id167x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id168out_output;

  { // Node ID: 168 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id168in_input = id167out_result[getCycle()%2];

    id168out_output = id168in_input;
  }
  { // Node ID: 170 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id170in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id170in_option0 = id169out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id170in_option1 = id168out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id170x_1;

    switch((id170in_sel.getValueAsLong())) {
      case 0l:
        id170x_1 = id170in_option0;
        break;
      case 1l:
        id170x_1 = id170in_option1;
        break;
      default:
        id170x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id170out_result[(getCycle()+1)%2] = (id170x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id171out_output;

  { // Node ID: 171 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id171in_input = id170out_result[getCycle()%2];

    id171out_output = id171in_input;
  }
  { // Node ID: 173 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id173in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id173in_option0 = id172out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id173in_option1 = id171out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id173x_1;

    switch((id173in_sel.getValueAsLong())) {
      case 0l:
        id173x_1 = id173in_option0;
        break;
      case 1l:
        id173x_1 = id173in_option1;
        break;
      default:
        id173x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id173out_result[(getCycle()+1)%2] = (id173x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id174out_output;

  { // Node ID: 174 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id174in_input = id173out_result[getCycle()%2];

    id174out_output = id174in_input;
  }
  { // Node ID: 176 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id176in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id176in_option0 = id175out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id176in_option1 = id174out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id176x_1;

    switch((id176in_sel.getValueAsLong())) {
      case 0l:
        id176x_1 = id176in_option0;
        break;
      case 1l:
        id176x_1 = id176in_option1;
        break;
      default:
        id176x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id176out_result[(getCycle()+1)%2] = (id176x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id177out_output;

  { // Node ID: 177 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id177in_input = id176out_result[getCycle()%2];

    id177out_output = id177in_input;
  }
  { // Node ID: 179 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id179in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id179in_option0 = id178out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id179in_option1 = id177out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id179x_1;

    switch((id179in_sel.getValueAsLong())) {
      case 0l:
        id179x_1 = id179in_option0;
        break;
      case 1l:
        id179x_1 = id179in_option1;
        break;
      default:
        id179x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id179out_result[(getCycle()+1)%2] = (id179x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id180out_output;

  { // Node ID: 180 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id180in_input = id179out_result[getCycle()%2];

    id180out_output = id180in_input;
  }
  { // Node ID: 182 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id182in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id182in_option0 = id181out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id182in_option1 = id180out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id182x_1;

    switch((id182in_sel.getValueAsLong())) {
      case 0l:
        id182x_1 = id182in_option0;
        break;
      case 1l:
        id182x_1 = id182in_option1;
        break;
      default:
        id182x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id182out_result[(getCycle()+1)%2] = (id182x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id183out_output;

  { // Node ID: 183 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id183in_input = id182out_result[getCycle()%2];

    id183out_output = id183in_input;
  }
  { // Node ID: 185 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id185in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id185in_option0 = id184out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id185in_option1 = id183out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id185x_1;

    switch((id185in_sel.getValueAsLong())) {
      case 0l:
        id185x_1 = id185in_option0;
        break;
      case 1l:
        id185x_1 = id185in_option1;
        break;
      default:
        id185x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id185out_result[(getCycle()+1)%2] = (id185x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id186out_output;

  { // Node ID: 186 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id186in_input = id185out_result[getCycle()%2];

    id186out_output = id186in_input;
  }
  { // Node ID: 188 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id188in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id188in_option0 = id187out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id188in_option1 = id186out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id188x_1;

    switch((id188in_sel.getValueAsLong())) {
      case 0l:
        id188x_1 = id188in_option0;
        break;
      case 1l:
        id188x_1 = id188in_option1;
        break;
      default:
        id188x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id188out_result[(getCycle()+1)%2] = (id188x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id189out_output;

  { // Node ID: 189 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id189in_input = id188out_result[getCycle()%2];

    id189out_output = id189in_input;
  }
  { // Node ID: 191 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id191in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id191in_option0 = id190out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id191in_option1 = id189out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id191x_1;

    switch((id191in_sel.getValueAsLong())) {
      case 0l:
        id191x_1 = id191in_option0;
        break;
      case 1l:
        id191x_1 = id191in_option1;
        break;
      default:
        id191x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id191out_result[(getCycle()+1)%2] = (id191x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id192out_output;

  { // Node ID: 192 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id192in_input = id191out_result[getCycle()%2];

    id192out_output = id192in_input;
  }
  { // Node ID: 194 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id194in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id194in_option0 = id193out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id194in_option1 = id192out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id194x_1;

    switch((id194in_sel.getValueAsLong())) {
      case 0l:
        id194x_1 = id194in_option0;
        break;
      case 1l:
        id194x_1 = id194in_option1;
        break;
      default:
        id194x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id194out_result[(getCycle()+1)%2] = (id194x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id195out_output;

  { // Node ID: 195 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id195in_input = id194out_result[getCycle()%2];

    id195out_output = id195in_input;
  }
  { // Node ID: 197 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id197in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id197in_option0 = id196out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id197in_option1 = id195out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id197x_1;

    switch((id197in_sel.getValueAsLong())) {
      case 0l:
        id197x_1 = id197in_option0;
        break;
      case 1l:
        id197x_1 = id197in_option1;
        break;
      default:
        id197x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id197out_result[(getCycle()+1)%2] = (id197x_1);
  }
  HWRawBits<32> id528out_output;

  { // Node ID: 528 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id528in_input = id197out_result[getCycle()%2];

    id528out_output = (cast_fixed2bits(id528in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id199out_output;

  { // Node ID: 199 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id199in_input = id200out_result[getCycle()%2];

    id199out_output = id199in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id198out_output;

  { // Node ID: 198 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id198in_input = id197out_result[getCycle()%2];

    id198out_output = id198in_input;
  }
  { // Node ID: 200 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id200in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id200in_option0 = id199out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id200in_option1 = id198out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id200x_1;

    switch((id200in_sel.getValueAsLong())) {
      case 0l:
        id200x_1 = id200in_option0;
        break;
      case 1l:
        id200x_1 = id200in_option1;
        break;
      default:
        id200x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id200out_result[(getCycle()+1)%2] = (id200x_1);
  }
  HWRawBits<32> id526out_output;

  { // Node ID: 526 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id526in_input = id200out_result[getCycle()%2];

    id526out_output = (cast_fixed2bits(id526in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id202out_output;

  { // Node ID: 202 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id202in_input = id203out_result[getCycle()%2];

    id202out_output = id202in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id201out_output;

  { // Node ID: 201 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id201in_input = id200out_result[getCycle()%2];

    id201out_output = id201in_input;
  }
  { // Node ID: 203 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id203in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id203in_option0 = id202out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id203in_option1 = id201out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id203x_1;

    switch((id203in_sel.getValueAsLong())) {
      case 0l:
        id203x_1 = id203in_option0;
        break;
      case 1l:
        id203x_1 = id203in_option1;
        break;
      default:
        id203x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id203out_result[(getCycle()+1)%2] = (id203x_1);
  }
  HWRawBits<32> id524out_output;

  { // Node ID: 524 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id524in_input = id203out_result[getCycle()%2];

    id524out_output = (cast_fixed2bits(id524in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id205out_output;

  { // Node ID: 205 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id205in_input = id206out_result[getCycle()%2];

    id205out_output = id205in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id204out_output;

  { // Node ID: 204 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id204in_input = id203out_result[getCycle()%2];

    id204out_output = id204in_input;
  }
  { // Node ID: 206 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id206in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id206in_option0 = id205out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id206in_option1 = id204out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id206x_1;

    switch((id206in_sel.getValueAsLong())) {
      case 0l:
        id206x_1 = id206in_option0;
        break;
      case 1l:
        id206x_1 = id206in_option1;
        break;
      default:
        id206x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id206out_result[(getCycle()+1)%2] = (id206x_1);
  }
  HWRawBits<32> id522out_output;

  { // Node ID: 522 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id522in_input = id206out_result[getCycle()%2];

    id522out_output = (cast_fixed2bits(id522in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id208out_output;

  { // Node ID: 208 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id208in_input = id209out_result[getCycle()%2];

    id208out_output = id208in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id207out_output;

  { // Node ID: 207 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id207in_input = id206out_result[getCycle()%2];

    id207out_output = id207in_input;
  }
  { // Node ID: 209 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id209in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id209in_option0 = id208out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id209in_option1 = id207out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id209x_1;

    switch((id209in_sel.getValueAsLong())) {
      case 0l:
        id209x_1 = id209in_option0;
        break;
      case 1l:
        id209x_1 = id209in_option1;
        break;
      default:
        id209x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id209out_result[(getCycle()+1)%2] = (id209x_1);
  }
  HWRawBits<32> id520out_output;

  { // Node ID: 520 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id520in_input = id209out_result[getCycle()%2];

    id520out_output = (cast_fixed2bits(id520in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id280out_output;

  { // Node ID: 280 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id280in_input = id281out_result[getCycle()%2];

    id280out_output = id280in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id277out_output;

  { // Node ID: 277 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id277in_input = id278out_result[getCycle()%2];

    id277out_output = id277in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id274out_output;

  { // Node ID: 274 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id274in_input = id275out_result[getCycle()%2];

    id274out_output = id274in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id271out_output;

  { // Node ID: 271 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id271in_input = id272out_result[getCycle()%2];

    id271out_output = id271in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id268out_output;

  { // Node ID: 268 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id268in_input = id269out_result[getCycle()%2];

    id268out_output = id268in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id265out_output;

  { // Node ID: 265 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id265in_input = id266out_result[getCycle()%2];

    id265out_output = id265in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id262out_output;

  { // Node ID: 262 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id262in_input = id263out_result[getCycle()%2];

    id262out_output = id262in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id259out_output;

  { // Node ID: 259 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id259in_input = id260out_result[getCycle()%2];

    id259out_output = id259in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id256out_output;

  { // Node ID: 256 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id256in_input = id257out_result[getCycle()%2];

    id256out_output = id256in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id253out_output;

  { // Node ID: 253 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id253in_input = id254out_result[getCycle()%2];

    id253out_output = id253in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id250out_output;

  { // Node ID: 250 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id250in_input = id251out_result[getCycle()%2];

    id250out_output = id250in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id247out_output;

  { // Node ID: 247 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id247in_input = id248out_result[getCycle()%2];

    id247out_output = id247in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id244out_output;

  { // Node ID: 244 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id244in_input = id245out_result[getCycle()%2];

    id244out_output = id244in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id241out_output;

  { // Node ID: 241 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id241in_input = id242out_result[getCycle()%2];

    id241out_output = id241in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id238out_output;

  { // Node ID: 238 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id238in_input = id239out_result[getCycle()%2];

    id238out_output = id238in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id235out_output;

  { // Node ID: 235 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id235in_input = id236out_result[getCycle()%2];

    id235out_output = id235in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id232out_output;

  { // Node ID: 232 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id232in_input = id233out_result[getCycle()%2];

    id232out_output = id232in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id229out_output;

  { // Node ID: 229 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id229in_input = id230out_result[getCycle()%2];

    id229out_output = id229in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id226out_output;

  { // Node ID: 226 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id226in_input = id227out_result[getCycle()%2];

    id226out_output = id226in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id223out_output;

  { // Node ID: 223 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id223in_input = id224out_result[getCycle()%2];

    id223out_output = id223in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id220out_output;

  { // Node ID: 220 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id220in_input = id221out_result[getCycle()%2];

    id220out_output = id220in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id217out_output;

  { // Node ID: 217 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id217in_input = id218out_result[getCycle()%2];

    id217out_output = id217in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id214out_output;

  { // Node ID: 214 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id214in_input = id215out_result[getCycle()%2];

    id214out_output = id214in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id211out_output;

  { // Node ID: 211 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id211in_input = id212out_result[getCycle()%2];

    id211out_output = id211in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id210out_output;

  { // Node ID: 210 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id210in_input = id209out_result[getCycle()%2];

    id210out_output = id210in_input;
  }
  { // Node ID: 212 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id212in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id212in_option0 = id211out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id212in_option1 = id210out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id212x_1;

    switch((id212in_sel.getValueAsLong())) {
      case 0l:
        id212x_1 = id212in_option0;
        break;
      case 1l:
        id212x_1 = id212in_option1;
        break;
      default:
        id212x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id212out_result[(getCycle()+1)%2] = (id212x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id213out_output;

  { // Node ID: 213 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id213in_input = id212out_result[getCycle()%2];

    id213out_output = id213in_input;
  }
  { // Node ID: 215 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id215in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id215in_option0 = id214out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id215in_option1 = id213out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id215x_1;

    switch((id215in_sel.getValueAsLong())) {
      case 0l:
        id215x_1 = id215in_option0;
        break;
      case 1l:
        id215x_1 = id215in_option1;
        break;
      default:
        id215x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id215out_result[(getCycle()+1)%2] = (id215x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id216out_output;

  { // Node ID: 216 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id216in_input = id215out_result[getCycle()%2];

    id216out_output = id216in_input;
  }
  { // Node ID: 218 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id218in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id218in_option0 = id217out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id218in_option1 = id216out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id218x_1;

    switch((id218in_sel.getValueAsLong())) {
      case 0l:
        id218x_1 = id218in_option0;
        break;
      case 1l:
        id218x_1 = id218in_option1;
        break;
      default:
        id218x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id218out_result[(getCycle()+1)%2] = (id218x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id219out_output;

  { // Node ID: 219 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id219in_input = id218out_result[getCycle()%2];

    id219out_output = id219in_input;
  }
  { // Node ID: 221 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id221in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id221in_option0 = id220out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id221in_option1 = id219out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id221x_1;

    switch((id221in_sel.getValueAsLong())) {
      case 0l:
        id221x_1 = id221in_option0;
        break;
      case 1l:
        id221x_1 = id221in_option1;
        break;
      default:
        id221x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id221out_result[(getCycle()+1)%2] = (id221x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id222out_output;

  { // Node ID: 222 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id222in_input = id221out_result[getCycle()%2];

    id222out_output = id222in_input;
  }
  { // Node ID: 224 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id224in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id224in_option0 = id223out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id224in_option1 = id222out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id225out_output;

  { // Node ID: 225 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id225in_input = id224out_result[getCycle()%2];

    id225out_output = id225in_input;
  }
  { // Node ID: 227 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id227in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id227in_option0 = id226out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id227in_option1 = id225out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id227x_1;

    switch((id227in_sel.getValueAsLong())) {
      case 0l:
        id227x_1 = id227in_option0;
        break;
      case 1l:
        id227x_1 = id227in_option1;
        break;
      default:
        id227x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id227out_result[(getCycle()+1)%2] = (id227x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id228out_output;

  { // Node ID: 228 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id228in_input = id227out_result[getCycle()%2];

    id228out_output = id228in_input;
  }
  { // Node ID: 230 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id230in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id230in_option0 = id229out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id230in_option1 = id228out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id230x_1;

    switch((id230in_sel.getValueAsLong())) {
      case 0l:
        id230x_1 = id230in_option0;
        break;
      case 1l:
        id230x_1 = id230in_option1;
        break;
      default:
        id230x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id230out_result[(getCycle()+1)%2] = (id230x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id231out_output;

  { // Node ID: 231 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id231in_input = id230out_result[getCycle()%2];

    id231out_output = id231in_input;
  }
  { // Node ID: 233 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id233in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id233in_option0 = id232out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id233in_option1 = id231out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id233x_1;

    switch((id233in_sel.getValueAsLong())) {
      case 0l:
        id233x_1 = id233in_option0;
        break;
      case 1l:
        id233x_1 = id233in_option1;
        break;
      default:
        id233x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id233out_result[(getCycle()+1)%2] = (id233x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id234out_output;

  { // Node ID: 234 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id234in_input = id233out_result[getCycle()%2];

    id234out_output = id234in_input;
  }
  { // Node ID: 236 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id236in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id236in_option0 = id235out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id236in_option1 = id234out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id237out_output;

  { // Node ID: 237 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id237in_input = id236out_result[getCycle()%2];

    id237out_output = id237in_input;
  }
  { // Node ID: 239 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id239in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id239in_option0 = id238out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id239in_option1 = id237out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id239x_1;

    switch((id239in_sel.getValueAsLong())) {
      case 0l:
        id239x_1 = id239in_option0;
        break;
      case 1l:
        id239x_1 = id239in_option1;
        break;
      default:
        id239x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id239out_result[(getCycle()+1)%2] = (id239x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id240out_output;

  { // Node ID: 240 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id240in_input = id239out_result[getCycle()%2];

    id240out_output = id240in_input;
  }
  { // Node ID: 242 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id242in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id242in_option0 = id241out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id242in_option1 = id240out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id242x_1;

    switch((id242in_sel.getValueAsLong())) {
      case 0l:
        id242x_1 = id242in_option0;
        break;
      case 1l:
        id242x_1 = id242in_option1;
        break;
      default:
        id242x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id242out_result[(getCycle()+1)%2] = (id242x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id243out_output;

  { // Node ID: 243 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id243in_input = id242out_result[getCycle()%2];

    id243out_output = id243in_input;
  }
  { // Node ID: 245 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id245in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id245in_option0 = id244out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id245in_option1 = id243out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id245x_1;

    switch((id245in_sel.getValueAsLong())) {
      case 0l:
        id245x_1 = id245in_option0;
        break;
      case 1l:
        id245x_1 = id245in_option1;
        break;
      default:
        id245x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id245out_result[(getCycle()+1)%2] = (id245x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id246out_output;

  { // Node ID: 246 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id246in_input = id245out_result[getCycle()%2];

    id246out_output = id246in_input;
  }
  { // Node ID: 248 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id248in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id248in_option0 = id247out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id248in_option1 = id246out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id249out_output;

  { // Node ID: 249 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id249in_input = id248out_result[getCycle()%2];

    id249out_output = id249in_input;
  }
  { // Node ID: 251 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id251in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id251in_option0 = id250out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id251in_option1 = id249out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id251x_1;

    switch((id251in_sel.getValueAsLong())) {
      case 0l:
        id251x_1 = id251in_option0;
        break;
      case 1l:
        id251x_1 = id251in_option1;
        break;
      default:
        id251x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id251out_result[(getCycle()+1)%2] = (id251x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id252out_output;

  { // Node ID: 252 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id252in_input = id251out_result[getCycle()%2];

    id252out_output = id252in_input;
  }
  { // Node ID: 254 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id254in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id254in_option0 = id253out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id254in_option1 = id252out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id254x_1;

    switch((id254in_sel.getValueAsLong())) {
      case 0l:
        id254x_1 = id254in_option0;
        break;
      case 1l:
        id254x_1 = id254in_option1;
        break;
      default:
        id254x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id254out_result[(getCycle()+1)%2] = (id254x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id255out_output;

  { // Node ID: 255 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id255in_input = id254out_result[getCycle()%2];

    id255out_output = id255in_input;
  }
  { // Node ID: 257 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id257in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id257in_option0 = id256out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id257in_option1 = id255out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id257x_1;

    switch((id257in_sel.getValueAsLong())) {
      case 0l:
        id257x_1 = id257in_option0;
        break;
      case 1l:
        id257x_1 = id257in_option1;
        break;
      default:
        id257x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id257out_result[(getCycle()+1)%2] = (id257x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id258out_output;

  { // Node ID: 258 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id258in_input = id257out_result[getCycle()%2];

    id258out_output = id258in_input;
  }
  { // Node ID: 260 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id260in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id260in_option0 = id259out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id260in_option1 = id258out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id261out_output;

  { // Node ID: 261 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id261in_input = id260out_result[getCycle()%2];

    id261out_output = id261in_input;
  }
  { // Node ID: 263 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id263in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id263in_option0 = id262out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id263in_option1 = id261out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id263x_1;

    switch((id263in_sel.getValueAsLong())) {
      case 0l:
        id263x_1 = id263in_option0;
        break;
      case 1l:
        id263x_1 = id263in_option1;
        break;
      default:
        id263x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id263out_result[(getCycle()+1)%2] = (id263x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id264out_output;

  { // Node ID: 264 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id264in_input = id263out_result[getCycle()%2];

    id264out_output = id264in_input;
  }
  { // Node ID: 266 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id266in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id266in_option0 = id265out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id266in_option1 = id264out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id266x_1;

    switch((id266in_sel.getValueAsLong())) {
      case 0l:
        id266x_1 = id266in_option0;
        break;
      case 1l:
        id266x_1 = id266in_option1;
        break;
      default:
        id266x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id266out_result[(getCycle()+1)%2] = (id266x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id267out_output;

  { // Node ID: 267 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id267in_input = id266out_result[getCycle()%2];

    id267out_output = id267in_input;
  }
  { // Node ID: 269 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id269in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id269in_option0 = id268out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id269in_option1 = id267out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id269x_1;

    switch((id269in_sel.getValueAsLong())) {
      case 0l:
        id269x_1 = id269in_option0;
        break;
      case 1l:
        id269x_1 = id269in_option1;
        break;
      default:
        id269x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id269out_result[(getCycle()+1)%2] = (id269x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id270out_output;

  { // Node ID: 270 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id270in_input = id269out_result[getCycle()%2];

    id270out_output = id270in_input;
  }
  { // Node ID: 272 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id272in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id272in_option0 = id271out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id272in_option1 = id270out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id273out_output;

  { // Node ID: 273 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id273in_input = id272out_result[getCycle()%2];

    id273out_output = id273in_input;
  }
  { // Node ID: 275 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id275in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id275in_option0 = id274out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id275in_option1 = id273out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id275x_1;

    switch((id275in_sel.getValueAsLong())) {
      case 0l:
        id275x_1 = id275in_option0;
        break;
      case 1l:
        id275x_1 = id275in_option1;
        break;
      default:
        id275x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id275out_result[(getCycle()+1)%2] = (id275x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id276out_output;

  { // Node ID: 276 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id276in_input = id275out_result[getCycle()%2];

    id276out_output = id276in_input;
  }
  { // Node ID: 278 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id278in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id278in_option0 = id277out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id278in_option1 = id276out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id278x_1;

    switch((id278in_sel.getValueAsLong())) {
      case 0l:
        id278x_1 = id278in_option0;
        break;
      case 1l:
        id278x_1 = id278in_option1;
        break;
      default:
        id278x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id278out_result[(getCycle()+1)%2] = (id278x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id279out_output;

  { // Node ID: 279 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id279in_input = id278out_result[getCycle()%2];

    id279out_output = id279in_input;
  }
  { // Node ID: 281 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id281in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id281in_option0 = id280out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id281in_option1 = id279out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id281x_1;

    switch((id281in_sel.getValueAsLong())) {
      case 0l:
        id281x_1 = id281in_option0;
        break;
      case 1l:
        id281x_1 = id281in_option1;
        break;
      default:
        id281x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id281out_result[(getCycle()+1)%2] = (id281x_1);
  }
  HWRawBits<32> id518out_output;

  { // Node ID: 518 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id518in_input = id281out_result[getCycle()%2];

    id518out_output = (cast_fixed2bits(id518in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id283out_output;

  { // Node ID: 283 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id283in_input = id284out_result[getCycle()%2];

    id283out_output = id283in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id282out_output;

  { // Node ID: 282 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id282in_input = id281out_result[getCycle()%2];

    id282out_output = id282in_input;
  }
  { // Node ID: 284 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id284in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id284in_option0 = id283out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id284in_option1 = id282out_output;

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
  HWRawBits<32> id516out_output;

  { // Node ID: 516 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id516in_input = id284out_result[getCycle()%2];

    id516out_output = (cast_fixed2bits(id516in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id286out_output;

  { // Node ID: 286 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id286in_input = id287out_result[getCycle()%2];

    id286out_output = id286in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id285out_output;

  { // Node ID: 285 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id285in_input = id284out_result[getCycle()%2];

    id285out_output = id285in_input;
  }
  { // Node ID: 287 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id287in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id287in_option0 = id286out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id287in_option1 = id285out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id287x_1;

    switch((id287in_sel.getValueAsLong())) {
      case 0l:
        id287x_1 = id287in_option0;
        break;
      case 1l:
        id287x_1 = id287in_option1;
        break;
      default:
        id287x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id287out_result[(getCycle()+1)%2] = (id287x_1);
  }
  HWRawBits<32> id514out_output;

  { // Node ID: 514 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id514in_input = id287out_result[getCycle()%2];

    id514out_output = (cast_fixed2bits(id514in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id289out_output;

  { // Node ID: 289 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id289in_input = id290out_result[getCycle()%2];

    id289out_output = id289in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id288out_output;

  { // Node ID: 288 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id288in_input = id287out_result[getCycle()%2];

    id288out_output = id288in_input;
  }
  { // Node ID: 290 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id290in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id290in_option0 = id289out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id290in_option1 = id288out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id290x_1;

    switch((id290in_sel.getValueAsLong())) {
      case 0l:
        id290x_1 = id290in_option0;
        break;
      case 1l:
        id290x_1 = id290in_option1;
        break;
      default:
        id290x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id290out_result[(getCycle()+1)%2] = (id290x_1);
  }
  HWRawBits<32> id512out_output;

  { // Node ID: 512 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id512in_input = id290out_result[getCycle()%2];

    id512out_output = (cast_fixed2bits(id512in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id292out_output;

  { // Node ID: 292 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id292in_input = id293out_result[getCycle()%2];

    id292out_output = id292in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id291out_output;

  { // Node ID: 291 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id291in_input = id290out_result[getCycle()%2];

    id291out_output = id291in_input;
  }
  { // Node ID: 293 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id293in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id293in_option0 = id292out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id293in_option1 = id291out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id293x_1;

    switch((id293in_sel.getValueAsLong())) {
      case 0l:
        id293x_1 = id293in_option0;
        break;
      case 1l:
        id293x_1 = id293in_option1;
        break;
      default:
        id293x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id293out_result[(getCycle()+1)%2] = (id293x_1);
  }
  HWRawBits<32> id510out_output;

  { // Node ID: 510 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id510in_input = id293out_result[getCycle()%2];

    id510out_output = (cast_fixed2bits(id510in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id364out_output;

  { // Node ID: 364 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id364in_input = id365out_result[getCycle()%2];

    id364out_output = id364in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id361out_output;

  { // Node ID: 361 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id361in_input = id362out_result[getCycle()%2];

    id361out_output = id361in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id358out_output;

  { // Node ID: 358 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id358in_input = id359out_result[getCycle()%2];

    id358out_output = id358in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id355out_output;

  { // Node ID: 355 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id355in_input = id356out_result[getCycle()%2];

    id355out_output = id355in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id352out_output;

  { // Node ID: 352 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id352in_input = id353out_result[getCycle()%2];

    id352out_output = id352in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id349out_output;

  { // Node ID: 349 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id349in_input = id350out_result[getCycle()%2];

    id349out_output = id349in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id346out_output;

  { // Node ID: 346 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id346in_input = id347out_result[getCycle()%2];

    id346out_output = id346in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id343out_output;

  { // Node ID: 343 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id343in_input = id344out_result[getCycle()%2];

    id343out_output = id343in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id340out_output;

  { // Node ID: 340 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id340in_input = id341out_result[getCycle()%2];

    id340out_output = id340in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id337out_output;

  { // Node ID: 337 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id337in_input = id338out_result[getCycle()%2];

    id337out_output = id337in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id334out_output;

  { // Node ID: 334 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id334in_input = id335out_result[getCycle()%2];

    id334out_output = id334in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id331out_output;

  { // Node ID: 331 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id331in_input = id332out_result[getCycle()%2];

    id331out_output = id331in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id328out_output;

  { // Node ID: 328 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id328in_input = id329out_result[getCycle()%2];

    id328out_output = id328in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id325out_output;

  { // Node ID: 325 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id325in_input = id326out_result[getCycle()%2];

    id325out_output = id325in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id322out_output;

  { // Node ID: 322 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id322in_input = id323out_result[getCycle()%2];

    id322out_output = id322in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id319out_output;

  { // Node ID: 319 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id319in_input = id320out_result[getCycle()%2];

    id319out_output = id319in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id316out_output;

  { // Node ID: 316 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id316in_input = id317out_result[getCycle()%2];

    id316out_output = id316in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id313out_output;

  { // Node ID: 313 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id313in_input = id314out_result[getCycle()%2];

    id313out_output = id313in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id310out_output;

  { // Node ID: 310 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id310in_input = id311out_result[getCycle()%2];

    id310out_output = id310in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id307out_output;

  { // Node ID: 307 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id307in_input = id308out_result[getCycle()%2];

    id307out_output = id307in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id304out_output;

  { // Node ID: 304 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id304in_input = id305out_result[getCycle()%2];

    id304out_output = id304in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id301out_output;

  { // Node ID: 301 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id301in_input = id302out_result[getCycle()%2];

    id301out_output = id301in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id298out_output;

  { // Node ID: 298 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id298in_input = id299out_result[getCycle()%2];

    id298out_output = id298in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id295out_output;

  { // Node ID: 295 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id295in_input = id296out_result[getCycle()%2];

    id295out_output = id295in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id294out_output;

  { // Node ID: 294 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id294in_input = id293out_result[getCycle()%2];

    id294out_output = id294in_input;
  }
  { // Node ID: 296 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id296in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id296in_option0 = id295out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id296in_option1 = id294out_output;

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
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id297out_output;

  { // Node ID: 297 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id297in_input = id296out_result[getCycle()%2];

    id297out_output = id297in_input;
  }
  { // Node ID: 299 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id299in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id299in_option0 = id298out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id299in_option1 = id297out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id299x_1;

    switch((id299in_sel.getValueAsLong())) {
      case 0l:
        id299x_1 = id299in_option0;
        break;
      case 1l:
        id299x_1 = id299in_option1;
        break;
      default:
        id299x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id299out_result[(getCycle()+1)%2] = (id299x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id300out_output;

  { // Node ID: 300 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id300in_input = id299out_result[getCycle()%2];

    id300out_output = id300in_input;
  }
  { // Node ID: 302 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id302in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id302in_option0 = id301out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id302in_option1 = id300out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id302x_1;

    switch((id302in_sel.getValueAsLong())) {
      case 0l:
        id302x_1 = id302in_option0;
        break;
      case 1l:
        id302x_1 = id302in_option1;
        break;
      default:
        id302x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id302out_result[(getCycle()+1)%2] = (id302x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id303out_output;

  { // Node ID: 303 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id303in_input = id302out_result[getCycle()%2];

    id303out_output = id303in_input;
  }
  { // Node ID: 305 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id305in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id305in_option0 = id304out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id305in_option1 = id303out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id305x_1;

    switch((id305in_sel.getValueAsLong())) {
      case 0l:
        id305x_1 = id305in_option0;
        break;
      case 1l:
        id305x_1 = id305in_option1;
        break;
      default:
        id305x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id305out_result[(getCycle()+1)%2] = (id305x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id306out_output;

  { // Node ID: 306 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id306in_input = id305out_result[getCycle()%2];

    id306out_output = id306in_input;
  }
  { // Node ID: 308 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id308in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id308in_option0 = id307out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id308in_option1 = id306out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id308x_1;

    switch((id308in_sel.getValueAsLong())) {
      case 0l:
        id308x_1 = id308in_option0;
        break;
      case 1l:
        id308x_1 = id308in_option1;
        break;
      default:
        id308x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id308out_result[(getCycle()+1)%2] = (id308x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id309out_output;

  { // Node ID: 309 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id309in_input = id308out_result[getCycle()%2];

    id309out_output = id309in_input;
  }
  { // Node ID: 311 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id311in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id311in_option0 = id310out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id311in_option1 = id309out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id311x_1;

    switch((id311in_sel.getValueAsLong())) {
      case 0l:
        id311x_1 = id311in_option0;
        break;
      case 1l:
        id311x_1 = id311in_option1;
        break;
      default:
        id311x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id311out_result[(getCycle()+1)%2] = (id311x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id312out_output;

  { // Node ID: 312 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id312in_input = id311out_result[getCycle()%2];

    id312out_output = id312in_input;
  }
  { // Node ID: 314 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id314in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id314in_option0 = id313out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id314in_option1 = id312out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id314x_1;

    switch((id314in_sel.getValueAsLong())) {
      case 0l:
        id314x_1 = id314in_option0;
        break;
      case 1l:
        id314x_1 = id314in_option1;
        break;
      default:
        id314x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id314out_result[(getCycle()+1)%2] = (id314x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id315out_output;

  { // Node ID: 315 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id315in_input = id314out_result[getCycle()%2];

    id315out_output = id315in_input;
  }
  { // Node ID: 317 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id317in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id317in_option0 = id316out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id317in_option1 = id315out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id317x_1;

    switch((id317in_sel.getValueAsLong())) {
      case 0l:
        id317x_1 = id317in_option0;
        break;
      case 1l:
        id317x_1 = id317in_option1;
        break;
      default:
        id317x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id317out_result[(getCycle()+1)%2] = (id317x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id318out_output;

  { // Node ID: 318 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id318in_input = id317out_result[getCycle()%2];

    id318out_output = id318in_input;
  }
  { // Node ID: 320 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id320in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id320in_option0 = id319out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id320in_option1 = id318out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id320x_1;

    switch((id320in_sel.getValueAsLong())) {
      case 0l:
        id320x_1 = id320in_option0;
        break;
      case 1l:
        id320x_1 = id320in_option1;
        break;
      default:
        id320x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id320out_result[(getCycle()+1)%2] = (id320x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id321out_output;

  { // Node ID: 321 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id321in_input = id320out_result[getCycle()%2];

    id321out_output = id321in_input;
  }
  { // Node ID: 323 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id323in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id323in_option0 = id322out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id323in_option1 = id321out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id323x_1;

    switch((id323in_sel.getValueAsLong())) {
      case 0l:
        id323x_1 = id323in_option0;
        break;
      case 1l:
        id323x_1 = id323in_option1;
        break;
      default:
        id323x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id323out_result[(getCycle()+1)%2] = (id323x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id324out_output;

  { // Node ID: 324 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id324in_input = id323out_result[getCycle()%2];

    id324out_output = id324in_input;
  }
  { // Node ID: 326 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id326in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id326in_option0 = id325out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id326in_option1 = id324out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id326x_1;

    switch((id326in_sel.getValueAsLong())) {
      case 0l:
        id326x_1 = id326in_option0;
        break;
      case 1l:
        id326x_1 = id326in_option1;
        break;
      default:
        id326x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id326out_result[(getCycle()+1)%2] = (id326x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id327out_output;

  { // Node ID: 327 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id327in_input = id326out_result[getCycle()%2];

    id327out_output = id327in_input;
  }
  { // Node ID: 329 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id329in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id329in_option0 = id328out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id329in_option1 = id327out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id329x_1;

    switch((id329in_sel.getValueAsLong())) {
      case 0l:
        id329x_1 = id329in_option0;
        break;
      case 1l:
        id329x_1 = id329in_option1;
        break;
      default:
        id329x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id329out_result[(getCycle()+1)%2] = (id329x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id330out_output;

  { // Node ID: 330 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id330in_input = id329out_result[getCycle()%2];

    id330out_output = id330in_input;
  }
  { // Node ID: 332 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id332in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id332in_option0 = id331out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id332in_option1 = id330out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id332x_1;

    switch((id332in_sel.getValueAsLong())) {
      case 0l:
        id332x_1 = id332in_option0;
        break;
      case 1l:
        id332x_1 = id332in_option1;
        break;
      default:
        id332x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id332out_result[(getCycle()+1)%2] = (id332x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id333out_output;

  { // Node ID: 333 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id333in_input = id332out_result[getCycle()%2];

    id333out_output = id333in_input;
  }
  { // Node ID: 335 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id335in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id335in_option0 = id334out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id335in_option1 = id333out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id335x_1;

    switch((id335in_sel.getValueAsLong())) {
      case 0l:
        id335x_1 = id335in_option0;
        break;
      case 1l:
        id335x_1 = id335in_option1;
        break;
      default:
        id335x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id335out_result[(getCycle()+1)%2] = (id335x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id336out_output;

  { // Node ID: 336 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id336in_input = id335out_result[getCycle()%2];

    id336out_output = id336in_input;
  }
  { // Node ID: 338 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id338in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id338in_option0 = id337out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id338in_option1 = id336out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id338x_1;

    switch((id338in_sel.getValueAsLong())) {
      case 0l:
        id338x_1 = id338in_option0;
        break;
      case 1l:
        id338x_1 = id338in_option1;
        break;
      default:
        id338x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id338out_result[(getCycle()+1)%2] = (id338x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id339out_output;

  { // Node ID: 339 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id339in_input = id338out_result[getCycle()%2];

    id339out_output = id339in_input;
  }
  { // Node ID: 341 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id341in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id341in_option0 = id340out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id341in_option1 = id339out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id341x_1;

    switch((id341in_sel.getValueAsLong())) {
      case 0l:
        id341x_1 = id341in_option0;
        break;
      case 1l:
        id341x_1 = id341in_option1;
        break;
      default:
        id341x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id341out_result[(getCycle()+1)%2] = (id341x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id342out_output;

  { // Node ID: 342 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id342in_input = id341out_result[getCycle()%2];

    id342out_output = id342in_input;
  }
  { // Node ID: 344 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id344in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id344in_option0 = id343out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id344in_option1 = id342out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id344x_1;

    switch((id344in_sel.getValueAsLong())) {
      case 0l:
        id344x_1 = id344in_option0;
        break;
      case 1l:
        id344x_1 = id344in_option1;
        break;
      default:
        id344x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id344out_result[(getCycle()+1)%2] = (id344x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id345out_output;

  { // Node ID: 345 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id345in_input = id344out_result[getCycle()%2];

    id345out_output = id345in_input;
  }
  { // Node ID: 347 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id347in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id347in_option0 = id346out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id347in_option1 = id345out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id347x_1;

    switch((id347in_sel.getValueAsLong())) {
      case 0l:
        id347x_1 = id347in_option0;
        break;
      case 1l:
        id347x_1 = id347in_option1;
        break;
      default:
        id347x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id347out_result[(getCycle()+1)%2] = (id347x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id348out_output;

  { // Node ID: 348 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id348in_input = id347out_result[getCycle()%2];

    id348out_output = id348in_input;
  }
  { // Node ID: 350 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id350in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id350in_option0 = id349out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id350in_option1 = id348out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id350x_1;

    switch((id350in_sel.getValueAsLong())) {
      case 0l:
        id350x_1 = id350in_option0;
        break;
      case 1l:
        id350x_1 = id350in_option1;
        break;
      default:
        id350x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id350out_result[(getCycle()+1)%2] = (id350x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id351out_output;

  { // Node ID: 351 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id351in_input = id350out_result[getCycle()%2];

    id351out_output = id351in_input;
  }
  { // Node ID: 353 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id353in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id353in_option0 = id352out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id353in_option1 = id351out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id353x_1;

    switch((id353in_sel.getValueAsLong())) {
      case 0l:
        id353x_1 = id353in_option0;
        break;
      case 1l:
        id353x_1 = id353in_option1;
        break;
      default:
        id353x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id353out_result[(getCycle()+1)%2] = (id353x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id354out_output;

  { // Node ID: 354 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id354in_input = id353out_result[getCycle()%2];

    id354out_output = id354in_input;
  }
  { // Node ID: 356 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id356in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id356in_option0 = id355out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id356in_option1 = id354out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id356x_1;

    switch((id356in_sel.getValueAsLong())) {
      case 0l:
        id356x_1 = id356in_option0;
        break;
      case 1l:
        id356x_1 = id356in_option1;
        break;
      default:
        id356x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id356out_result[(getCycle()+1)%2] = (id356x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id357out_output;

  { // Node ID: 357 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id357in_input = id356out_result[getCycle()%2];

    id357out_output = id357in_input;
  }
  { // Node ID: 359 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id359in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id359in_option0 = id358out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id359in_option1 = id357out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id359x_1;

    switch((id359in_sel.getValueAsLong())) {
      case 0l:
        id359x_1 = id359in_option0;
        break;
      case 1l:
        id359x_1 = id359in_option1;
        break;
      default:
        id359x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id359out_result[(getCycle()+1)%2] = (id359x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id360out_output;

  { // Node ID: 360 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id360in_input = id359out_result[getCycle()%2];

    id360out_output = id360in_input;
  }
  { // Node ID: 362 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id362in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id362in_option0 = id361out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id362in_option1 = id360out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id362x_1;

    switch((id362in_sel.getValueAsLong())) {
      case 0l:
        id362x_1 = id362in_option0;
        break;
      case 1l:
        id362x_1 = id362in_option1;
        break;
      default:
        id362x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id362out_result[(getCycle()+1)%2] = (id362x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id363out_output;

  { // Node ID: 363 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id363in_input = id362out_result[getCycle()%2];

    id363out_output = id363in_input;
  }
  { // Node ID: 365 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id365in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id365in_option0 = id364out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id365in_option1 = id363out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id365x_1;

    switch((id365in_sel.getValueAsLong())) {
      case 0l:
        id365x_1 = id365in_option0;
        break;
      case 1l:
        id365x_1 = id365in_option1;
        break;
      default:
        id365x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id365out_result[(getCycle()+1)%2] = (id365x_1);
  }
  HWRawBits<32> id508out_output;

  { // Node ID: 508 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id508in_input = id365out_result[getCycle()%2];

    id508out_output = (cast_fixed2bits(id508in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id367out_output;

  { // Node ID: 367 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id367in_input = id368out_result[getCycle()%2];

    id367out_output = id367in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id366out_output;

  { // Node ID: 366 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id366in_input = id365out_result[getCycle()%2];

    id366out_output = id366in_input;
  }
  { // Node ID: 368 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id368in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id368in_option0 = id367out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id368in_option1 = id366out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id368x_1;

    switch((id368in_sel.getValueAsLong())) {
      case 0l:
        id368x_1 = id368in_option0;
        break;
      case 1l:
        id368x_1 = id368in_option1;
        break;
      default:
        id368x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id368out_result[(getCycle()+1)%2] = (id368x_1);
  }
  HWRawBits<32> id506out_output;

  { // Node ID: 506 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id506in_input = id368out_result[getCycle()%2];

    id506out_output = (cast_fixed2bits(id506in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id370out_output;

  { // Node ID: 370 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id370in_input = id371out_result[getCycle()%2];

    id370out_output = id370in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id369out_output;

  { // Node ID: 369 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id369in_input = id368out_result[getCycle()%2];

    id369out_output = id369in_input;
  }
  { // Node ID: 371 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id371in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id371in_option0 = id370out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id371in_option1 = id369out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id371x_1;

    switch((id371in_sel.getValueAsLong())) {
      case 0l:
        id371x_1 = id371in_option0;
        break;
      case 1l:
        id371x_1 = id371in_option1;
        break;
      default:
        id371x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id371out_result[(getCycle()+1)%2] = (id371x_1);
  }
  HWRawBits<32> id504out_output;

  { // Node ID: 504 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id504in_input = id371out_result[getCycle()%2];

    id504out_output = (cast_fixed2bits(id504in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id373out_output;

  { // Node ID: 373 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id373in_input = id374out_result[getCycle()%2];

    id373out_output = id373in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id372out_output;

  { // Node ID: 372 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id372in_input = id371out_result[getCycle()%2];

    id372out_output = id372in_input;
  }
  { // Node ID: 374 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id374in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id374in_option0 = id373out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id374in_option1 = id372out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id374x_1;

    switch((id374in_sel.getValueAsLong())) {
      case 0l:
        id374x_1 = id374in_option0;
        break;
      case 1l:
        id374x_1 = id374in_option1;
        break;
      default:
        id374x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id374out_result[(getCycle()+1)%2] = (id374x_1);
  }
  HWRawBits<32> id502out_output;

  { // Node ID: 502 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id502in_input = id374out_result[getCycle()%2];

    id502out_output = (cast_fixed2bits(id502in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id376out_output;

  { // Node ID: 376 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id376in_input = id377out_result[getCycle()%2];

    id376out_output = id376in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id375out_output;

  { // Node ID: 375 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id375in_input = id374out_result[getCycle()%2];

    id375out_output = id375in_input;
  }
  { // Node ID: 377 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id377in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id377in_option0 = id376out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id377in_option1 = id375out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id377x_1;

    switch((id377in_sel.getValueAsLong())) {
      case 0l:
        id377x_1 = id377in_option0;
        break;
      case 1l:
        id377x_1 = id377in_option1;
        break;
      default:
        id377x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id377out_result[(getCycle()+1)%2] = (id377x_1);
  }
  HWRawBits<32> id500out_output;

  { // Node ID: 500 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id500in_input = id377out_result[getCycle()%2];

    id500out_output = (cast_fixed2bits(id500in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id448out_output;

  { // Node ID: 448 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id448in_input = id449out_result[getCycle()%2];

    id448out_output = id448in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id445out_output;

  { // Node ID: 445 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id445in_input = id446out_result[getCycle()%2];

    id445out_output = id445in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id442out_output;

  { // Node ID: 442 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id442in_input = id443out_result[getCycle()%2];

    id442out_output = id442in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id439out_output;

  { // Node ID: 439 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id439in_input = id440out_result[getCycle()%2];

    id439out_output = id439in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id436out_output;

  { // Node ID: 436 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id436in_input = id437out_result[getCycle()%2];

    id436out_output = id436in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id433out_output;

  { // Node ID: 433 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id433in_input = id434out_result[getCycle()%2];

    id433out_output = id433in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id430out_output;

  { // Node ID: 430 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id430in_input = id431out_result[getCycle()%2];

    id430out_output = id430in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id427out_output;

  { // Node ID: 427 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id427in_input = id428out_result[getCycle()%2];

    id427out_output = id427in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id424out_output;

  { // Node ID: 424 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id424in_input = id425out_result[getCycle()%2];

    id424out_output = id424in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id421out_output;

  { // Node ID: 421 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id421in_input = id422out_result[getCycle()%2];

    id421out_output = id421in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id418out_output;

  { // Node ID: 418 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id418in_input = id419out_result[getCycle()%2];

    id418out_output = id418in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id415out_output;

  { // Node ID: 415 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id415in_input = id416out_result[getCycle()%2];

    id415out_output = id415in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id412out_output;

  { // Node ID: 412 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id412in_input = id413out_result[getCycle()%2];

    id412out_output = id412in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id409out_output;

  { // Node ID: 409 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id409in_input = id410out_result[getCycle()%2];

    id409out_output = id409in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id406out_output;

  { // Node ID: 406 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id406in_input = id407out_result[getCycle()%2];

    id406out_output = id406in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id403out_output;

  { // Node ID: 403 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id403in_input = id404out_result[getCycle()%2];

    id403out_output = id403in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id400out_output;

  { // Node ID: 400 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id400in_input = id401out_result[getCycle()%2];

    id400out_output = id400in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id397out_output;

  { // Node ID: 397 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id397in_input = id398out_result[getCycle()%2];

    id397out_output = id397in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id394out_output;

  { // Node ID: 394 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id394in_input = id395out_result[getCycle()%2];

    id394out_output = id394in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id391out_output;

  { // Node ID: 391 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id391in_input = id392out_result[getCycle()%2];

    id391out_output = id391in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id388out_output;

  { // Node ID: 388 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id388in_input = id389out_result[getCycle()%2];

    id388out_output = id388in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id385out_output;

  { // Node ID: 385 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id385in_input = id386out_result[getCycle()%2];

    id385out_output = id385in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id382out_output;

  { // Node ID: 382 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id382in_input = id383out_result[getCycle()%2];

    id382out_output = id382in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id379out_output;

  { // Node ID: 379 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id379in_input = id380out_result[getCycle()%2];

    id379out_output = id379in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id378out_output;

  { // Node ID: 378 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id378in_input = id377out_result[getCycle()%2];

    id378out_output = id378in_input;
  }
  { // Node ID: 380 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id380in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id380in_option0 = id379out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id380in_option1 = id378out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id380x_1;

    switch((id380in_sel.getValueAsLong())) {
      case 0l:
        id380x_1 = id380in_option0;
        break;
      case 1l:
        id380x_1 = id380in_option1;
        break;
      default:
        id380x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id380out_result[(getCycle()+1)%2] = (id380x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id381out_output;

  { // Node ID: 381 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id381in_input = id380out_result[getCycle()%2];

    id381out_output = id381in_input;
  }
  { // Node ID: 383 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id383in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id383in_option0 = id382out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id383in_option1 = id381out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id383x_1;

    switch((id383in_sel.getValueAsLong())) {
      case 0l:
        id383x_1 = id383in_option0;
        break;
      case 1l:
        id383x_1 = id383in_option1;
        break;
      default:
        id383x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id383out_result[(getCycle()+1)%2] = (id383x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id384out_output;

  { // Node ID: 384 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id384in_input = id383out_result[getCycle()%2];

    id384out_output = id384in_input;
  }
  { // Node ID: 386 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id386in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id386in_option0 = id385out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id386in_option1 = id384out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id386x_1;

    switch((id386in_sel.getValueAsLong())) {
      case 0l:
        id386x_1 = id386in_option0;
        break;
      case 1l:
        id386x_1 = id386in_option1;
        break;
      default:
        id386x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id386out_result[(getCycle()+1)%2] = (id386x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id387out_output;

  { // Node ID: 387 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id387in_input = id386out_result[getCycle()%2];

    id387out_output = id387in_input;
  }
  { // Node ID: 389 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id389in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id389in_option0 = id388out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id389in_option1 = id387out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id389x_1;

    switch((id389in_sel.getValueAsLong())) {
      case 0l:
        id389x_1 = id389in_option0;
        break;
      case 1l:
        id389x_1 = id389in_option1;
        break;
      default:
        id389x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id389out_result[(getCycle()+1)%2] = (id389x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id390out_output;

  { // Node ID: 390 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id390in_input = id389out_result[getCycle()%2];

    id390out_output = id390in_input;
  }
  { // Node ID: 392 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id392in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id392in_option0 = id391out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id392in_option1 = id390out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id392x_1;

    switch((id392in_sel.getValueAsLong())) {
      case 0l:
        id392x_1 = id392in_option0;
        break;
      case 1l:
        id392x_1 = id392in_option1;
        break;
      default:
        id392x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id392out_result[(getCycle()+1)%2] = (id392x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id393out_output;

  { // Node ID: 393 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id393in_input = id392out_result[getCycle()%2];

    id393out_output = id393in_input;
  }
  { // Node ID: 395 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id395in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id395in_option0 = id394out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id395in_option1 = id393out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id395x_1;

    switch((id395in_sel.getValueAsLong())) {
      case 0l:
        id395x_1 = id395in_option0;
        break;
      case 1l:
        id395x_1 = id395in_option1;
        break;
      default:
        id395x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id395out_result[(getCycle()+1)%2] = (id395x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id396out_output;

  { // Node ID: 396 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id396in_input = id395out_result[getCycle()%2];

    id396out_output = id396in_input;
  }
  { // Node ID: 398 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id398in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id398in_option0 = id397out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id398in_option1 = id396out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id398x_1;

    switch((id398in_sel.getValueAsLong())) {
      case 0l:
        id398x_1 = id398in_option0;
        break;
      case 1l:
        id398x_1 = id398in_option1;
        break;
      default:
        id398x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id398out_result[(getCycle()+1)%2] = (id398x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id399out_output;

  { // Node ID: 399 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id399in_input = id398out_result[getCycle()%2];

    id399out_output = id399in_input;
  }
  { // Node ID: 401 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id401in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id401in_option0 = id400out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id401in_option1 = id399out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id401x_1;

    switch((id401in_sel.getValueAsLong())) {
      case 0l:
        id401x_1 = id401in_option0;
        break;
      case 1l:
        id401x_1 = id401in_option1;
        break;
      default:
        id401x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id401out_result[(getCycle()+1)%2] = (id401x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id402out_output;

  { // Node ID: 402 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id402in_input = id401out_result[getCycle()%2];

    id402out_output = id402in_input;
  }
  { // Node ID: 404 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id404in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id404in_option0 = id403out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id404in_option1 = id402out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id404x_1;

    switch((id404in_sel.getValueAsLong())) {
      case 0l:
        id404x_1 = id404in_option0;
        break;
      case 1l:
        id404x_1 = id404in_option1;
        break;
      default:
        id404x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id404out_result[(getCycle()+1)%2] = (id404x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id405out_output;

  { // Node ID: 405 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id405in_input = id404out_result[getCycle()%2];

    id405out_output = id405in_input;
  }
  { // Node ID: 407 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id407in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id407in_option0 = id406out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id407in_option1 = id405out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id407x_1;

    switch((id407in_sel.getValueAsLong())) {
      case 0l:
        id407x_1 = id407in_option0;
        break;
      case 1l:
        id407x_1 = id407in_option1;
        break;
      default:
        id407x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id407out_result[(getCycle()+1)%2] = (id407x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id408out_output;

  { // Node ID: 408 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id408in_input = id407out_result[getCycle()%2];

    id408out_output = id408in_input;
  }
  { // Node ID: 410 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id410in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id410in_option0 = id409out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id410in_option1 = id408out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id410x_1;

    switch((id410in_sel.getValueAsLong())) {
      case 0l:
        id410x_1 = id410in_option0;
        break;
      case 1l:
        id410x_1 = id410in_option1;
        break;
      default:
        id410x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id410out_result[(getCycle()+1)%2] = (id410x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id411out_output;

  { // Node ID: 411 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id411in_input = id410out_result[getCycle()%2];

    id411out_output = id411in_input;
  }
  { // Node ID: 413 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id413in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id413in_option0 = id412out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id413in_option1 = id411out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id413x_1;

    switch((id413in_sel.getValueAsLong())) {
      case 0l:
        id413x_1 = id413in_option0;
        break;
      case 1l:
        id413x_1 = id413in_option1;
        break;
      default:
        id413x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id413out_result[(getCycle()+1)%2] = (id413x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id414out_output;

  { // Node ID: 414 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id414in_input = id413out_result[getCycle()%2];

    id414out_output = id414in_input;
  }
  { // Node ID: 416 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id416in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id416in_option0 = id415out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id416in_option1 = id414out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id416x_1;

    switch((id416in_sel.getValueAsLong())) {
      case 0l:
        id416x_1 = id416in_option0;
        break;
      case 1l:
        id416x_1 = id416in_option1;
        break;
      default:
        id416x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id416out_result[(getCycle()+1)%2] = (id416x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id417out_output;

  { // Node ID: 417 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id417in_input = id416out_result[getCycle()%2];

    id417out_output = id417in_input;
  }
  { // Node ID: 419 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id419in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id419in_option0 = id418out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id419in_option1 = id417out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id419x_1;

    switch((id419in_sel.getValueAsLong())) {
      case 0l:
        id419x_1 = id419in_option0;
        break;
      case 1l:
        id419x_1 = id419in_option1;
        break;
      default:
        id419x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id419out_result[(getCycle()+1)%2] = (id419x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id420out_output;

  { // Node ID: 420 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id420in_input = id419out_result[getCycle()%2];

    id420out_output = id420in_input;
  }
  { // Node ID: 422 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id422in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id422in_option0 = id421out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id422in_option1 = id420out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id422x_1;

    switch((id422in_sel.getValueAsLong())) {
      case 0l:
        id422x_1 = id422in_option0;
        break;
      case 1l:
        id422x_1 = id422in_option1;
        break;
      default:
        id422x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id422out_result[(getCycle()+1)%2] = (id422x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id423out_output;

  { // Node ID: 423 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id423in_input = id422out_result[getCycle()%2];

    id423out_output = id423in_input;
  }
  { // Node ID: 425 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id425in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id425in_option0 = id424out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id425in_option1 = id423out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id425x_1;

    switch((id425in_sel.getValueAsLong())) {
      case 0l:
        id425x_1 = id425in_option0;
        break;
      case 1l:
        id425x_1 = id425in_option1;
        break;
      default:
        id425x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id425out_result[(getCycle()+1)%2] = (id425x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id426out_output;

  { // Node ID: 426 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id426in_input = id425out_result[getCycle()%2];

    id426out_output = id426in_input;
  }
  { // Node ID: 428 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id428in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id428in_option0 = id427out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id428in_option1 = id426out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id428x_1;

    switch((id428in_sel.getValueAsLong())) {
      case 0l:
        id428x_1 = id428in_option0;
        break;
      case 1l:
        id428x_1 = id428in_option1;
        break;
      default:
        id428x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id428out_result[(getCycle()+1)%2] = (id428x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id429out_output;

  { // Node ID: 429 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id429in_input = id428out_result[getCycle()%2];

    id429out_output = id429in_input;
  }
  { // Node ID: 431 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id431in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id431in_option0 = id430out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id431in_option1 = id429out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id431x_1;

    switch((id431in_sel.getValueAsLong())) {
      case 0l:
        id431x_1 = id431in_option0;
        break;
      case 1l:
        id431x_1 = id431in_option1;
        break;
      default:
        id431x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id431out_result[(getCycle()+1)%2] = (id431x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id432out_output;

  { // Node ID: 432 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id432in_input = id431out_result[getCycle()%2];

    id432out_output = id432in_input;
  }
  { // Node ID: 434 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id434in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id434in_option0 = id433out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id434in_option1 = id432out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id434x_1;

    switch((id434in_sel.getValueAsLong())) {
      case 0l:
        id434x_1 = id434in_option0;
        break;
      case 1l:
        id434x_1 = id434in_option1;
        break;
      default:
        id434x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id434out_result[(getCycle()+1)%2] = (id434x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id435out_output;

  { // Node ID: 435 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id435in_input = id434out_result[getCycle()%2];

    id435out_output = id435in_input;
  }
  { // Node ID: 437 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id437in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id437in_option0 = id436out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id437in_option1 = id435out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id437x_1;

    switch((id437in_sel.getValueAsLong())) {
      case 0l:
        id437x_1 = id437in_option0;
        break;
      case 1l:
        id437x_1 = id437in_option1;
        break;
      default:
        id437x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id437out_result[(getCycle()+1)%2] = (id437x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id438out_output;

  { // Node ID: 438 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id438in_input = id437out_result[getCycle()%2];

    id438out_output = id438in_input;
  }
  { // Node ID: 440 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id440in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id440in_option0 = id439out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id440in_option1 = id438out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id440x_1;

    switch((id440in_sel.getValueAsLong())) {
      case 0l:
        id440x_1 = id440in_option0;
        break;
      case 1l:
        id440x_1 = id440in_option1;
        break;
      default:
        id440x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id440out_result[(getCycle()+1)%2] = (id440x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id441out_output;

  { // Node ID: 441 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id441in_input = id440out_result[getCycle()%2];

    id441out_output = id441in_input;
  }
  { // Node ID: 443 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id443in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id443in_option0 = id442out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id443in_option1 = id441out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id443x_1;

    switch((id443in_sel.getValueAsLong())) {
      case 0l:
        id443x_1 = id443in_option0;
        break;
      case 1l:
        id443x_1 = id443in_option1;
        break;
      default:
        id443x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id443out_result[(getCycle()+1)%2] = (id443x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id444out_output;

  { // Node ID: 444 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id444in_input = id443out_result[getCycle()%2];

    id444out_output = id444in_input;
  }
  { // Node ID: 446 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id446in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id446in_option0 = id445out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id446in_option1 = id444out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id446x_1;

    switch((id446in_sel.getValueAsLong())) {
      case 0l:
        id446x_1 = id446in_option0;
        break;
      case 1l:
        id446x_1 = id446in_option1;
        break;
      default:
        id446x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id446out_result[(getCycle()+1)%2] = (id446x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id447out_output;

  { // Node ID: 447 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id447in_input = id446out_result[getCycle()%2];

    id447out_output = id447in_input;
  }
  { // Node ID: 449 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id449in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id449in_option0 = id448out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id449in_option1 = id447out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id449x_1;

    switch((id449in_sel.getValueAsLong())) {
      case 0l:
        id449x_1 = id449in_option0;
        break;
      case 1l:
        id449x_1 = id449in_option1;
        break;
      default:
        id449x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id449out_result[(getCycle()+1)%2] = (id449x_1);
  }
  HWRawBits<32> id498out_output;

  { // Node ID: 498 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id498in_input = id449out_result[getCycle()%2];

    id498out_output = (cast_fixed2bits(id498in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id451out_output;

  { // Node ID: 451 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id451in_input = id452out_result[getCycle()%2];

    id451out_output = id451in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id450out_output;

  { // Node ID: 450 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id450in_input = id449out_result[getCycle()%2];

    id450out_output = id450in_input;
  }
  { // Node ID: 452 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id452in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id452in_option0 = id451out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id452in_option1 = id450out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id452x_1;

    switch((id452in_sel.getValueAsLong())) {
      case 0l:
        id452x_1 = id452in_option0;
        break;
      case 1l:
        id452x_1 = id452in_option1;
        break;
      default:
        id452x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id452out_result[(getCycle()+1)%2] = (id452x_1);
  }
  HWRawBits<32> id496out_output;

  { // Node ID: 496 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id496in_input = id452out_result[getCycle()%2];

    id496out_output = (cast_fixed2bits(id496in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id454out_output;

  { // Node ID: 454 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id454in_input = id455out_result[getCycle()%2];

    id454out_output = id454in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id453out_output;

  { // Node ID: 453 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id453in_input = id452out_result[getCycle()%2];

    id453out_output = id453in_input;
  }
  { // Node ID: 455 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id455in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id455in_option0 = id454out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id455in_option1 = id453out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id455x_1;

    switch((id455in_sel.getValueAsLong())) {
      case 0l:
        id455x_1 = id455in_option0;
        break;
      case 1l:
        id455x_1 = id455in_option1;
        break;
      default:
        id455x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id455out_result[(getCycle()+1)%2] = (id455x_1);
  }
  HWRawBits<32> id494out_output;

  { // Node ID: 494 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id494in_input = id455out_result[getCycle()%2];

    id494out_output = (cast_fixed2bits(id494in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id457out_output;

  { // Node ID: 457 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id457in_input = id458out_result[getCycle()%2];

    id457out_output = id457in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id456out_output;

  { // Node ID: 456 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id456in_input = id455out_result[getCycle()%2];

    id456out_output = id456in_input;
  }
  { // Node ID: 458 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id458in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id458in_option0 = id457out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id458in_option1 = id456out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id458x_1;

    switch((id458in_sel.getValueAsLong())) {
      case 0l:
        id458x_1 = id458in_option0;
        break;
      case 1l:
        id458x_1 = id458in_option1;
        break;
      default:
        id458x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id458out_result[(getCycle()+1)%2] = (id458x_1);
  }
  HWRawBits<32> id492out_output;

  { // Node ID: 492 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id492in_input = id458out_result[getCycle()%2];

    id492out_output = (cast_fixed2bits(id492in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id460out_output;

  { // Node ID: 460 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id460in_input = id461out_result[getCycle()%2];

    id460out_output = id460in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id459out_output;

  { // Node ID: 459 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id459in_input = id458out_result[getCycle()%2];

    id459out_output = id459in_input;
  }
  { // Node ID: 461 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id461in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id461in_option0 = id460out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id461in_option1 = id459out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id461x_1;

    switch((id461in_sel.getValueAsLong())) {
      case 0l:
        id461x_1 = id461in_option0;
        break;
      case 1l:
        id461x_1 = id461in_option1;
        break;
      default:
        id461x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id461out_result[(getCycle()+1)%2] = (id461x_1);
  }
  HWRawBits<32> id491out_output;

  { // Node ID: 491 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id491in_input = id461out_result[getCycle()%2];

    id491out_output = (cast_fixed2bits(id491in_input));
  }
  HWRawBits<64> id493out_result;

  { // Node ID: 493 (NodeCat)
    const HWRawBits<32> &id493in_in0 = id492out_output;
    const HWRawBits<32> &id493in_in1 = id491out_output;

    id493out_result = (cat(id493in_in0,id493in_in1));
  }
  HWRawBits<96> id495out_result;

  { // Node ID: 495 (NodeCat)
    const HWRawBits<32> &id495in_in0 = id494out_output;
    const HWRawBits<64> &id495in_in1 = id493out_result;

    id495out_result = (cat(id495in_in0,id495in_in1));
  }
  HWRawBits<128> id497out_result;

  { // Node ID: 497 (NodeCat)
    const HWRawBits<32> &id497in_in0 = id496out_output;
    const HWRawBits<96> &id497in_in1 = id495out_result;

    id497out_result = (cat(id497in_in0,id497in_in1));
  }

  sliding_window00Block1Vars out_vars;
  out_vars.id489out_result = id489out_result;
  out_vars.id538out_output = id538out_output;
  out_vars.id536out_output = id536out_output;
  out_vars.id534out_output = id534out_output;
  out_vars.id532out_output = id532out_output;
  out_vars.id530out_output = id530out_output;
  out_vars.id528out_output = id528out_output;
  out_vars.id526out_output = id526out_output;
  out_vars.id524out_output = id524out_output;
  out_vars.id522out_output = id522out_output;
  out_vars.id520out_output = id520out_output;
  out_vars.id518out_output = id518out_output;
  out_vars.id516out_output = id516out_output;
  out_vars.id514out_output = id514out_output;
  out_vars.id512out_output = id512out_output;
  out_vars.id510out_output = id510out_output;
  out_vars.id508out_output = id508out_output;
  out_vars.id506out_output = id506out_output;
  out_vars.id504out_output = id504out_output;
  out_vars.id502out_output = id502out_output;
  out_vars.id500out_output = id500out_output;
  out_vars.id498out_output = id498out_output;
  out_vars.id497out_result = id497out_result;
  return out_vars;
};

};
