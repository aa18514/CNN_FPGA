#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "fully_connected01.h"

namespace maxcompilersim {

void fully_connected01::execute0() {
  { // Node ID: 287 (NodeConstantRawBits)
  }
  { // Node ID: 286 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 2 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id2in_enable = id287out_value;
    const HWOffsetFix<17,0,UNSIGNED> &id2in_max = id286out_value;

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
  { // Node ID: 239 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id239in_input = id2out_wrap;

    id239out_output[(getCycle()+3)%4] = id239in_input;
  }
  { // Node ID: 285 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (6l)))
  { // Node ID: 4 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id4in_enable = id239out_output[getCycle()%4];
    const HWOffsetFix<17,0,UNSIGNED> &id4in_max = id285out_value;

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
  { // Node ID: 284 (NodeConstantRawBits)
  }
  { // Node ID: 96 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id96in_a = id4out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id96in_b = id284out_value;

    id96out_result[(getCycle()+1)%2] = (eq_fixed(id96in_a,id96in_b));
  }
  { // Node ID: 240 (NodeFIFO)
    const HWOffsetFix<1,0,UNSIGNED> &id240in_input = id96out_result[getCycle()%2];

    id240out_output[(getCycle()+17)%18] = id240in_input;
  }
  { // Node ID: 134 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id135out_result;

  { // Node ID: 135 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id135in_a = id134out_io_y01_force_disabled;

    id135out_result = (not_fixed(id135in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id136out_result;

  { // Node ID: 136 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id136in_a = id240out_output[getCycle()%18];
    const HWOffsetFix<1,0,UNSIGNED> &id136in_b = id135out_result;

    HWOffsetFix<1,0,UNSIGNED> id136x_1;

    (id136x_1) = (and_fixed(id136in_a,id136in_b));
    id136out_result = (id136x_1);
  }
  { // Node ID: 243 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id243in_input = id2out_count;

    id243out_output[(getCycle()+2)%3] = id243in_input;
  }
  { // Node ID: 273 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id273in_input = id243out_output[getCycle()%3];

    id273out_output[(getCycle()+1)%2] = id273in_input;
  }
  { // Node ID: 283 (NodeConstantRawBits)
  }
  { // Node ID: 98 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id98in_a = id273out_output[getCycle()%2];
    const HWOffsetFix<16,0,UNSIGNED> &id98in_b = id283out_value;

    id98out_result[(getCycle()+1)%2] = (eq_fixed(id98in_a,id98in_b));
  }
  { // Node ID: 282 (NodeConstantRawBits)
  }
  { // Node ID: 100 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id100in_a = id4out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id100in_b = id282out_value;

    id100out_result[(getCycle()+1)%2] = (eq_fixed(id100in_a,id100in_b));
  }
  { // Node ID: 101 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id101in_a = id98out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id101in_b = id100out_result[getCycle()%2];

    HWOffsetFix<1,0,UNSIGNED> id101x_1;

    (id101x_1) = (and_fixed(id101in_a,id101in_b));
    id101out_result[(getCycle()+1)%2] = (id101x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id125out_output;

  { // Node ID: 125 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id125in_input = id124out_result[getCycle()%2];

    id125out_output = id125in_input;
  }
  { // Node ID: 242 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id242in_input = id125out_output;

    id242out_output[(getCycle()+487)%488] = id242in_input;
  }
  { // Node ID: 197 (NodeConstantRawBits)
  }
  { // Node ID: 104 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id104in_sel = id101out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id104in_option0 = id242out_output[getCycle()%488];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id104in_option1 = id197out_value;

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
  { // Node ID: 264 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id264in_input = id104out_result[getCycle()%2];

    id264out_output[(getCycle()+11)%12] = id264in_input;
  }
  HWOffsetFix<16,4,UNSIGNED> id199out_output;

  { // Node ID: 199 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id199in_input = id243out_output[getCycle()%3];

    id199out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id199in_input))));
  }
  HWOffsetFix<16,6,UNSIGNED> id200out_output;

  { // Node ID: 200 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id200in_input = id243out_output[getCycle()%3];

    id200out_output = (cast_bits2fixed<16,6,UNSIGNED>((cast_fixed2bits(id200in_input))));
  }
  { // Node ID: 201 (NodeAdd)
    const HWOffsetFix<16,4,UNSIGNED> &id201in_a = id199out_output;
    const HWOffsetFix<16,6,UNSIGNED> &id201in_b = id200out_output;

    id201out_result[(getCycle()+1)%2] = (add_fixed<19,4,UNSIGNED,TONEAREVEN>(id201in_a,id201in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id202out_o;

  { // Node ID: 202 (NodeCast)
    const HWOffsetFix<19,4,UNSIGNED> &id202in_i = id201out_result[getCycle()%2];

    id202out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id202in_i));
  }
  { // Node ID: 89 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id89in_a = id202out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id89in_b = id4out_count;

    id89out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id89in_a,id89in_b));
  }
  { // Node ID: 183 (NodeMappedRom)
    const HWOffsetFix<16,0,UNSIGNED> &id183in_addra = id89out_result[getCycle()%2];

    long id183x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id183x_2;

    (id183x_1) = (id183in_addra.getValueAsLong());
    switch(((long)((id183x_1)<(40000l)))) {
      case 0l:
        id183x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id183x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom8", id183x_1) );
        break;
      default:
        id183x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id183out_dataa[(getCycle()+2)%3] = (id183x_2);
  }
  { // Node ID: 281 (NodeConstantRawBits)
  }
  { // Node ID: 6 (NodeEq)
    const HWOffsetFix<16,0,UNSIGNED> &id6in_a = id2out_count;
    const HWOffsetFix<16,0,UNSIGNED> &id6in_b = id281out_value;

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
  { // Node ID: 113 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id113in_a = id183out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id113in_b = id28out_output;

    id113out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id113in_a,id113in_b));
  }
  HWOffsetFix<16,4,UNSIGNED> id203out_output;

  { // Node ID: 203 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id203in_input = id243out_output[getCycle()%3];

    id203out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id203in_input))));
  }
  HWOffsetFix<16,6,UNSIGNED> id204out_output;

  { // Node ID: 204 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id204in_input = id243out_output[getCycle()%3];

    id204out_output = (cast_bits2fixed<16,6,UNSIGNED>((cast_fixed2bits(id204in_input))));
  }
  { // Node ID: 205 (NodeAdd)
    const HWOffsetFix<16,4,UNSIGNED> &id205in_a = id203out_output;
    const HWOffsetFix<16,6,UNSIGNED> &id205in_b = id204out_output;

    id205out_result[(getCycle()+1)%2] = (add_fixed<19,4,UNSIGNED,TONEAREVEN>(id205in_a,id205in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id206out_o;

  { // Node ID: 206 (NodeCast)
    const HWOffsetFix<19,4,UNSIGNED> &id206in_i = id205out_result[getCycle()%2];

    id206out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id206in_i));
  }
  { // Node ID: 93 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id93in_a = id206out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id93in_b = id4out_count;

    id93out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id93in_a,id93in_b));
  }
  { // Node ID: 184 (NodeMappedRom)
    const HWOffsetFix<16,0,UNSIGNED> &id184in_addra = id93out_result[getCycle()%2];

    long id184x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id184x_2;

    (id184x_1) = (id184in_addra.getValueAsLong());
    switch(((long)((id184x_1)<(40000l)))) {
      case 0l:
        id184x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id184x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom9", id184x_1) );
        break;
      default:
        id184x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id184out_dataa[(getCycle()+2)%3] = (id184x_2);
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
  { // Node ID: 114 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id114in_a = id184out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id114in_b = id30out_output;

    id114out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id114in_a,id114in_b));
  }
  { // Node ID: 119 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id119in_a = id113out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id119in_b = id114out_result[getCycle()%8];

    id119out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id119in_a,id119in_b));
  }
  { // Node ID: 263 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id263in_input = id119out_result[getCycle()%2];

    id263out_output[(getCycle()+2)%3] = id263in_input;
  }
  HWOffsetFix<16,4,UNSIGNED> id207out_output;

  { // Node ID: 207 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id207in_input = id243out_output[getCycle()%3];

    id207out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id207in_input))));
  }
  HWOffsetFix<16,6,UNSIGNED> id208out_output;

  { // Node ID: 208 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id208in_input = id243out_output[getCycle()%3];

    id208out_output = (cast_bits2fixed<16,6,UNSIGNED>((cast_fixed2bits(id208in_input))));
  }
  { // Node ID: 209 (NodeAdd)
    const HWOffsetFix<16,4,UNSIGNED> &id209in_a = id207out_output;
    const HWOffsetFix<16,6,UNSIGNED> &id209in_b = id208out_output;

    id209out_result[(getCycle()+1)%2] = (add_fixed<19,4,UNSIGNED,TONEAREVEN>(id209in_a,id209in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id210out_o;

  { // Node ID: 210 (NodeCast)
    const HWOffsetFix<19,4,UNSIGNED> &id210in_i = id209out_result[getCycle()%2];

    id210out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id210in_i));
  }
  { // Node ID: 57 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id57in_a = id210out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id57in_b = id4out_count;

    id57out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id57in_a,id57in_b));
  }
  { // Node ID: 175 (NodeMappedRom)
    const HWOffsetFix<16,0,UNSIGNED> &id175in_addra = id57out_result[getCycle()%2];

    long id175x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id175x_2;

    (id175x_1) = (id175in_addra.getValueAsLong());
    switch(((long)((id175x_1)<(40000l)))) {
      case 0l:
        id175x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id175x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom0", id175x_1) );
        break;
      default:
        id175x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id175out_dataa[(getCycle()+2)%3] = (id175x_2);
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
  { // Node ID: 105 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id105in_a = id175out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id105in_b = id12out_output;

    id105out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id105in_a,id105in_b));
  }
  HWOffsetFix<16,4,UNSIGNED> id211out_output;

  { // Node ID: 211 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id211in_input = id243out_output[getCycle()%3];

    id211out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id211in_input))));
  }
  HWOffsetFix<16,6,UNSIGNED> id212out_output;

  { // Node ID: 212 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id212in_input = id243out_output[getCycle()%3];

    id212out_output = (cast_bits2fixed<16,6,UNSIGNED>((cast_fixed2bits(id212in_input))));
  }
  { // Node ID: 213 (NodeAdd)
    const HWOffsetFix<16,4,UNSIGNED> &id213in_a = id211out_output;
    const HWOffsetFix<16,6,UNSIGNED> &id213in_b = id212out_output;

    id213out_result[(getCycle()+1)%2] = (add_fixed<19,4,UNSIGNED,TONEAREVEN>(id213in_a,id213in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id214out_o;

  { // Node ID: 214 (NodeCast)
    const HWOffsetFix<19,4,UNSIGNED> &id214in_i = id213out_result[getCycle()%2];

    id214out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id214in_i));
  }
  { // Node ID: 61 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id61in_a = id214out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id61in_b = id4out_count;

    id61out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id61in_a,id61in_b));
  }
  { // Node ID: 176 (NodeMappedRom)
    const HWOffsetFix<16,0,UNSIGNED> &id176in_addra = id61out_result[getCycle()%2];

    long id176x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id176x_2;

    (id176x_1) = (id176in_addra.getValueAsLong());
    switch(((long)((id176x_1)<(40000l)))) {
      case 0l:
        id176x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id176x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom1", id176x_1) );
        break;
      default:
        id176x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id176out_dataa[(getCycle()+2)%3] = (id176x_2);
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
  { // Node ID: 106 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id106in_a = id176out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id106in_b = id14out_output;

    id106out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id106in_a,id106in_b));
  }
  { // Node ID: 115 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id115in_a = id105out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id115in_b = id106out_result[getCycle()%8];

    id115out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id115in_a,id115in_b));
  }
  HWOffsetFix<16,4,UNSIGNED> id215out_output;

  { // Node ID: 215 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id215in_input = id243out_output[getCycle()%3];

    id215out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id215in_input))));
  }
  HWOffsetFix<16,6,UNSIGNED> id216out_output;

  { // Node ID: 216 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id216in_input = id243out_output[getCycle()%3];

    id216out_output = (cast_bits2fixed<16,6,UNSIGNED>((cast_fixed2bits(id216in_input))));
  }
  { // Node ID: 217 (NodeAdd)
    const HWOffsetFix<16,4,UNSIGNED> &id217in_a = id215out_output;
    const HWOffsetFix<16,6,UNSIGNED> &id217in_b = id216out_output;

    id217out_result[(getCycle()+1)%2] = (add_fixed<19,4,UNSIGNED,TONEAREVEN>(id217in_a,id217in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id218out_o;

  { // Node ID: 218 (NodeCast)
    const HWOffsetFix<19,4,UNSIGNED> &id218in_i = id217out_result[getCycle()%2];

    id218out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id218in_i));
  }
  { // Node ID: 65 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id65in_a = id218out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id65in_b = id4out_count;

    id65out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id65in_a,id65in_b));
  }
  { // Node ID: 177 (NodeMappedRom)
    const HWOffsetFix<16,0,UNSIGNED> &id177in_addra = id65out_result[getCycle()%2];

    long id177x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id177x_2;

    (id177x_1) = (id177in_addra.getValueAsLong());
    switch(((long)((id177x_1)<(40000l)))) {
      case 0l:
        id177x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id177x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom2", id177x_1) );
        break;
      default:
        id177x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id177out_dataa[(getCycle()+2)%3] = (id177x_2);
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
  { // Node ID: 107 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id107in_a = id177out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id107in_b = id16out_output;

    id107out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id107in_a,id107in_b));
  }
  HWOffsetFix<16,4,UNSIGNED> id219out_output;

  { // Node ID: 219 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id219in_input = id243out_output[getCycle()%3];

    id219out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id219in_input))));
  }
  HWOffsetFix<16,6,UNSIGNED> id220out_output;

  { // Node ID: 220 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id220in_input = id243out_output[getCycle()%3];

    id220out_output = (cast_bits2fixed<16,6,UNSIGNED>((cast_fixed2bits(id220in_input))));
  }
  { // Node ID: 221 (NodeAdd)
    const HWOffsetFix<16,4,UNSIGNED> &id221in_a = id219out_output;
    const HWOffsetFix<16,6,UNSIGNED> &id221in_b = id220out_output;

    id221out_result[(getCycle()+1)%2] = (add_fixed<19,4,UNSIGNED,TONEAREVEN>(id221in_a,id221in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id222out_o;

  { // Node ID: 222 (NodeCast)
    const HWOffsetFix<19,4,UNSIGNED> &id222in_i = id221out_result[getCycle()%2];

    id222out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id222in_i));
  }
  { // Node ID: 69 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id69in_a = id222out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id69in_b = id4out_count;

    id69out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id69in_a,id69in_b));
  }
  { // Node ID: 178 (NodeMappedRom)
    const HWOffsetFix<16,0,UNSIGNED> &id178in_addra = id69out_result[getCycle()%2];

    long id178x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id178x_2;

    (id178x_1) = (id178in_addra.getValueAsLong());
    switch(((long)((id178x_1)<(40000l)))) {
      case 0l:
        id178x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id178x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom3", id178x_1) );
        break;
      default:
        id178x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id178out_dataa[(getCycle()+2)%3] = (id178x_2);
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
  { // Node ID: 108 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id108in_a = id178out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id108in_b = id18out_output;

    id108out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id108in_a,id108in_b));
  }
  { // Node ID: 116 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id116in_a = id107out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id116in_b = id108out_result[getCycle()%8];

    id116out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id116in_a,id116in_b));
  }
  { // Node ID: 120 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id120in_a = id115out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id120in_b = id116out_result[getCycle()%2];

    id120out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id120in_a,id120in_b));
  }
  HWOffsetFix<16,4,UNSIGNED> id223out_output;

  { // Node ID: 223 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id223in_input = id243out_output[getCycle()%3];

    id223out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id223in_input))));
  }
  HWOffsetFix<16,6,UNSIGNED> id224out_output;

  { // Node ID: 224 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id224in_input = id243out_output[getCycle()%3];

    id224out_output = (cast_bits2fixed<16,6,UNSIGNED>((cast_fixed2bits(id224in_input))));
  }
  { // Node ID: 225 (NodeAdd)
    const HWOffsetFix<16,4,UNSIGNED> &id225in_a = id223out_output;
    const HWOffsetFix<16,6,UNSIGNED> &id225in_b = id224out_output;

    id225out_result[(getCycle()+1)%2] = (add_fixed<19,4,UNSIGNED,TONEAREVEN>(id225in_a,id225in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id226out_o;

  { // Node ID: 226 (NodeCast)
    const HWOffsetFix<19,4,UNSIGNED> &id226in_i = id225out_result[getCycle()%2];

    id226out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id226in_i));
  }
  { // Node ID: 73 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id73in_a = id226out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id73in_b = id4out_count;

    id73out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id73in_a,id73in_b));
  }
  { // Node ID: 179 (NodeMappedRom)
    const HWOffsetFix<16,0,UNSIGNED> &id179in_addra = id73out_result[getCycle()%2];

    long id179x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id179x_2;

    (id179x_1) = (id179in_addra.getValueAsLong());
    switch(((long)((id179x_1)<(40000l)))) {
      case 0l:
        id179x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id179x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom4", id179x_1) );
        break;
      default:
        id179x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id179out_dataa[(getCycle()+2)%3] = (id179x_2);
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
  { // Node ID: 109 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id109in_a = id179out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id109in_b = id20out_output;

    id109out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id109in_a,id109in_b));
  }
  HWOffsetFix<16,4,UNSIGNED> id227out_output;

  { // Node ID: 227 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id227in_input = id243out_output[getCycle()%3];

    id227out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id227in_input))));
  }
  HWOffsetFix<16,6,UNSIGNED> id228out_output;

  { // Node ID: 228 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id228in_input = id243out_output[getCycle()%3];

    id228out_output = (cast_bits2fixed<16,6,UNSIGNED>((cast_fixed2bits(id228in_input))));
  }
  { // Node ID: 229 (NodeAdd)
    const HWOffsetFix<16,4,UNSIGNED> &id229in_a = id227out_output;
    const HWOffsetFix<16,6,UNSIGNED> &id229in_b = id228out_output;

    id229out_result[(getCycle()+1)%2] = (add_fixed<19,4,UNSIGNED,TONEAREVEN>(id229in_a,id229in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id230out_o;

  { // Node ID: 230 (NodeCast)
    const HWOffsetFix<19,4,UNSIGNED> &id230in_i = id229out_result[getCycle()%2];

    id230out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id230in_i));
  }
  { // Node ID: 77 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id77in_a = id230out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id77in_b = id4out_count;

    id77out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id77in_a,id77in_b));
  }
  { // Node ID: 180 (NodeMappedRom)
    const HWOffsetFix<16,0,UNSIGNED> &id180in_addra = id77out_result[getCycle()%2];

    long id180x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id180x_2;

    (id180x_1) = (id180in_addra.getValueAsLong());
    switch(((long)((id180x_1)<(40000l)))) {
      case 0l:
        id180x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id180x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom5", id180x_1) );
        break;
      default:
        id180x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id180out_dataa[(getCycle()+2)%3] = (id180x_2);
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
  { // Node ID: 110 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id110in_a = id180out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id110in_b = id22out_output;

    id110out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id110in_a,id110in_b));
  }
  { // Node ID: 117 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id117in_a = id109out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id117in_b = id110out_result[getCycle()%8];

    id117out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id117in_a,id117in_b));
  }
  HWOffsetFix<16,4,UNSIGNED> id231out_output;

  { // Node ID: 231 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id231in_input = id243out_output[getCycle()%3];

    id231out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id231in_input))));
  }
  HWOffsetFix<16,6,UNSIGNED> id232out_output;

  { // Node ID: 232 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id232in_input = id243out_output[getCycle()%3];

    id232out_output = (cast_bits2fixed<16,6,UNSIGNED>((cast_fixed2bits(id232in_input))));
  }
  { // Node ID: 233 (NodeAdd)
    const HWOffsetFix<16,4,UNSIGNED> &id233in_a = id231out_output;
    const HWOffsetFix<16,6,UNSIGNED> &id233in_b = id232out_output;

    id233out_result[(getCycle()+1)%2] = (add_fixed<19,4,UNSIGNED,TONEAREVEN>(id233in_a,id233in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id234out_o;

  { // Node ID: 234 (NodeCast)
    const HWOffsetFix<19,4,UNSIGNED> &id234in_i = id233out_result[getCycle()%2];

    id234out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id234in_i));
  }
  { // Node ID: 81 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id81in_a = id234out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id81in_b = id4out_count;

    id81out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id81in_a,id81in_b));
  }
  { // Node ID: 181 (NodeMappedRom)
    const HWOffsetFix<16,0,UNSIGNED> &id181in_addra = id81out_result[getCycle()%2];

    long id181x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id181x_2;

    (id181x_1) = (id181in_addra.getValueAsLong());
    switch(((long)((id181x_1)<(40000l)))) {
      case 0l:
        id181x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id181x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom6", id181x_1) );
        break;
      default:
        id181x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id181out_dataa[(getCycle()+2)%3] = (id181x_2);
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
  { // Node ID: 111 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id111in_a = id181out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id111in_b = id24out_output;

    id111out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id111in_a,id111in_b));
  }
  HWOffsetFix<16,4,UNSIGNED> id235out_output;

  { // Node ID: 235 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id235in_input = id243out_output[getCycle()%3];

    id235out_output = (cast_bits2fixed<16,4,UNSIGNED>((cast_fixed2bits(id235in_input))));
  }
  HWOffsetFix<16,6,UNSIGNED> id236out_output;

  { // Node ID: 236 (NodeReinterpret)
    const HWOffsetFix<16,0,UNSIGNED> &id236in_input = id243out_output[getCycle()%3];

    id236out_output = (cast_bits2fixed<16,6,UNSIGNED>((cast_fixed2bits(id236in_input))));
  }
  { // Node ID: 237 (NodeAdd)
    const HWOffsetFix<16,4,UNSIGNED> &id237in_a = id235out_output;
    const HWOffsetFix<16,6,UNSIGNED> &id237in_b = id236out_output;

    id237out_result[(getCycle()+1)%2] = (add_fixed<19,4,UNSIGNED,TONEAREVEN>(id237in_a,id237in_b));
  }
  HWOffsetFix<16,0,UNSIGNED> id238out_o;

  { // Node ID: 238 (NodeCast)
    const HWOffsetFix<19,4,UNSIGNED> &id238in_i = id237out_result[getCycle()%2];

    id238out_o = (cast_fixed2fixed<16,0,UNSIGNED,TONEAREVEN>(id238in_i));
  }
  { // Node ID: 85 (NodeAdd)
    const HWOffsetFix<16,0,UNSIGNED> &id85in_a = id238out_o;
    const HWOffsetFix<16,0,UNSIGNED> &id85in_b = id4out_count;

    id85out_result[(getCycle()+1)%2] = (add_fixed<16,0,UNSIGNED,TONEAREVEN>(id85in_a,id85in_b));
  }
  { // Node ID: 182 (NodeMappedRom)
    const HWOffsetFix<16,0,UNSIGNED> &id182in_addra = id85out_result[getCycle()%2];

    long id182x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id182x_2;

    (id182x_1) = (id182in_addra.getValueAsLong());
    switch(((long)((id182x_1)<(40000l)))) {
      case 0l:
        id182x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id182x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("mappedRom7", id182x_1) );
        break;
      default:
        id182x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id182out_dataa[(getCycle()+2)%3] = (id182x_2);
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
  { // Node ID: 112 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id112in_a = id182out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id112in_b = id26out_output;

    id112out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id112in_a,id112in_b));
  }
  { // Node ID: 118 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id118in_a = id111out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id118in_b = id112out_result[getCycle()%8];

    id118out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id118in_a,id118in_b));
  }
  { // Node ID: 121 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id121in_a = id117out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id121in_b = id118out_result[getCycle()%2];

    id121out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id121in_a,id121in_b));
  }
  { // Node ID: 122 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id122in_a = id120out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id122in_b = id121out_result[getCycle()%2];

    id122out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id122in_a,id122in_b));
  }
  { // Node ID: 123 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id123in_a = id263out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id123in_b = id122out_result[getCycle()%2];

    id123out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id123in_a,id123in_b));
  }
  { // Node ID: 124 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id124in_a = id264out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id124in_b = id123out_result[getCycle()%2];

    id124out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id124in_a,id124in_b));
  }
  { // Node ID: 274 (NodeFIFO)
    const HWOffsetFix<16,0,UNSIGNED> &id274in_input = id273out_output[getCycle()%2];

    id274out_output[(getCycle()+13)%14] = id274in_input;
  }
  HWOffsetFix<9,0,UNSIGNED> id126out_o;

  { // Node ID: 126 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id126in_i = id274out_output[getCycle()%14];

    id126out_o = (cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(id126in_i));
  }
  HWOffsetFix<9,0,UNSIGNED> id162out_o;

  { // Node ID: 162 (NodeCast)
    const HWOffsetFix<16,0,UNSIGNED> &id162in_i = id274out_output[getCycle()%14];

    id162out_o = (cast_fixed2fixed<9,0,UNSIGNED,TONEAREVEN>(id162in_i));
  }
  { // Node ID: 174 (NodeMappedRom)
    const HWOffsetFix<9,0,UNSIGNED> &id174in_addra = id126out_o;
    const HWOffsetFix<9,0,UNSIGNED> &id174in_addrb = id162out_o;

    long id174x_1;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id174x_2;
    long id174x_3;
    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id174x_4;

    (id174x_1) = (id174in_addra.getValueAsLong());
    switch(((long)((id174x_1)<(500l)))) {
      case 0l:
        id174x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id174x_2 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("fully_connected_bias", id174x_1) );
        break;
      default:
        id174x_2 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id174out_dataa[(getCycle()+2)%3] = (id174x_2);
    (id174x_3) = (id174in_addrb.getValueAsLong());
    switch(((long)((id174x_3)<(500l)))) {
      case 0l:
        id174x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
      case 1l:
        id174x_4 = (getMappedMemValue< HWOffsetFix<32,-24,TWOSCOMPLEMENT> > ("fully_connected_bias", id174x_3) );
        break;
      default:
        id174x_4 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id174out_datab[(getCycle()+2)%3] = (id174x_4);
  }
  { // Node ID: 127 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id127in_a = id124out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id127in_b = id174out_dataa[getCycle()%3];

    id127out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id127in_a,id127in_b));
  }
  { // Node ID: 280 (NodeConstantRawBits)
  }
  { // Node ID: 130 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id130in_a = id127out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id130in_b = id280out_value;

    id130out_result[(getCycle()+1)%2] = (lt_fixed(id130in_a,id130in_b));
  }
  { // Node ID: 267 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id267in_input = id127out_result[getCycle()%2];

    id267out_output[(getCycle()+1)%2] = id267in_input;
  }
  { // Node ID: 279 (NodeConstantRawBits)
  }
  { // Node ID: 132 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id132in_sel = id130out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id132in_option0 = id267out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id132in_option1 = id279out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id132x_1;

    switch((id132in_sel.getValueAsLong())) {
      case 0l:
        id132x_1 = id132in_option0;
        break;
      case 1l:
        id132x_1 = id132in_option1;
        break;
      default:
        id132x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id132out_result[(getCycle()+1)%2] = (id132x_1);
  }
  if ( (getFillLevel() >= (24l)) && (getFlushLevel() < (24l)|| !isFlushingActive() ))
  { // Node ID: 137 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id137in_output_control = id136out_result;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id137in_data = id132out_result[getCycle()%2];

    bool id137x_1;

    (id137x_1) = ((id137in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(24l))&(isFlushingActive()))));
    if((id137x_1)) {
      writeOutput(m_y01, id137in_data);
    }
  }
  { // Node ID: 170 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id171out_result;

  { // Node ID: 171 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id171in_a = id170out_io_y11_force_disabled;

    id171out_result = (not_fixed(id171in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id172out_result;

  { // Node ID: 172 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id172in_a = id240out_output[getCycle()%18];
    const HWOffsetFix<1,0,UNSIGNED> &id172in_b = id171out_result;

    HWOffsetFix<1,0,UNSIGNED> id172x_1;

    (id172x_1) = (and_fixed(id172in_a,id172in_b));
    id172out_result = (id172x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id161out_output;

  { // Node ID: 161 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id161in_input = id160out_result[getCycle()%2];

    id161out_output = id161in_input;
  }
  { // Node ID: 269 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id269in_input = id161out_output;

    id269out_output[(getCycle()+487)%488] = id269in_input;
  }
  { // Node ID: 198 (NodeConstantRawBits)
  }
  { // Node ID: 140 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id140in_sel = id101out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id140in_option0 = id269out_output[getCycle()%488];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id140in_option1 = id198out_value;

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
  { // Node ID: 271 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id271in_input = id140out_result[getCycle()%2];

    id271out_output[(getCycle()+11)%12] = id271in_input;
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
  { // Node ID: 149 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id149in_a = id183out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id149in_b = id52out_output;

    id149out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id149in_a,id149in_b));
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
  { // Node ID: 150 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id150in_a = id184out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id150in_b = id54out_output;

    id150out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id150in_a,id150in_b));
  }
  { // Node ID: 155 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id155in_a = id149out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id155in_b = id150out_result[getCycle()%8];

    id155out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id155in_a,id155in_b));
  }
  { // Node ID: 270 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id270in_input = id155out_result[getCycle()%2];

    id270out_output[(getCycle()+2)%3] = id270in_input;
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
  { // Node ID: 141 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id141in_a = id175out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id141in_b = id36out_output;

    id141out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id141in_a,id141in_b));
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
  { // Node ID: 142 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id142in_a = id176out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id142in_b = id38out_output;

    id142out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id142in_a,id142in_b));
  }
  { // Node ID: 151 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id151in_a = id141out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id151in_b = id142out_result[getCycle()%8];

    id151out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id151in_a,id151in_b));
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
  { // Node ID: 143 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id143in_a = id177out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id143in_b = id40out_output;

    id143out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id143in_a,id143in_b));
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
  { // Node ID: 144 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id144in_a = id178out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id144in_b = id42out_output;

    id144out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id144in_a,id144in_b));
  }
  { // Node ID: 152 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id152in_a = id143out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id152in_b = id144out_result[getCycle()%8];

    id152out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id152in_a,id152in_b));
  }
  { // Node ID: 156 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id156in_a = id151out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id156in_b = id152out_result[getCycle()%2];

    id156out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id156in_a,id156in_b));
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
  { // Node ID: 145 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id145in_a = id179out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id145in_b = id44out_output;

    id145out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id145in_a,id145in_b));
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
  { // Node ID: 146 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id146in_a = id180out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id146in_b = id46out_output;

    id146out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id146in_a,id146in_b));
  }
  { // Node ID: 153 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id153in_a = id145out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id153in_b = id146out_result[getCycle()%8];

    id153out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id153in_a,id153in_b));
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
  { // Node ID: 147 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id147in_a = id181out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id147in_b = id48out_output;

    id147out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id147in_a,id147in_b));
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
  { // Node ID: 148 (NodeMul)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id148in_a = id182out_dataa[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id148in_b = id50out_output;

    id148out_result[(getCycle()+7)%8] = (mul_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id148in_a,id148in_b));
  }
  { // Node ID: 154 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id154in_a = id147out_result[getCycle()%8];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id154in_b = id148out_result[getCycle()%8];

    id154out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id154in_a,id154in_b));
  }
  { // Node ID: 157 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id157in_a = id153out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id157in_b = id154out_result[getCycle()%2];

    id157out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id157in_a,id157in_b));
  }
  { // Node ID: 158 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id158in_a = id156out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id158in_b = id157out_result[getCycle()%2];

    id158out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id158in_a,id158in_b));
  }
  { // Node ID: 159 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id159in_a = id270out_output[getCycle()%3];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id159in_b = id158out_result[getCycle()%2];

    id159out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id159in_a,id159in_b));
  }
  { // Node ID: 160 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id160in_a = id271out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id160in_b = id159out_result[getCycle()%2];

    id160out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id160in_a,id160in_b));
  }
  { // Node ID: 163 (NodeAdd)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id163in_a = id160out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id163in_b = id174out_datab[getCycle()%3];

    id163out_result[(getCycle()+1)%2] = (add_fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id163in_a,id163in_b));
  }
  { // Node ID: 278 (NodeConstantRawBits)
  }
  { // Node ID: 166 (NodeLt)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id166in_a = id163out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id166in_b = id278out_value;

    id166out_result[(getCycle()+1)%2] = (lt_fixed(id166in_a,id166in_b));
  }
  { // Node ID: 272 (NodeFIFO)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id272in_input = id163out_result[getCycle()%2];

    id272out_output[(getCycle()+1)%2] = id272in_input;
  }
  { // Node ID: 277 (NodeConstantRawBits)
  }
  { // Node ID: 168 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id168in_sel = id166out_result[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id168in_option0 = id272out_output[getCycle()%2];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id168in_option1 = id277out_value;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id168x_1;

    switch((id168in_sel.getValueAsLong())) {
      case 0l:
        id168x_1 = id168in_option0;
        break;
      case 1l:
        id168x_1 = id168in_option1;
        break;
      default:
        id168x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id168out_result[(getCycle()+1)%2] = (id168x_1);
  }
  if ( (getFillLevel() >= (24l)) && (getFlushLevel() < (24l)|| !isFlushingActive() ))
  { // Node ID: 173 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id173in_output_control = id172out_result;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id173in_data = id168out_result[getCycle()%2];

    bool id173x_1;

    (id173x_1) = ((id173in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(24l))&(isFlushingActive()))));
    if((id173x_1)) {
      writeOutput(m_y11, id173in_data);
    }
  }
  { // Node ID: 189 (NodeConstantRawBits)
  }
  { // Node ID: 276 (NodeConstantRawBits)
  }
  { // Node ID: 186 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 187 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id187in_enable = id276out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id187in_max = id186out_value;

    HWOffsetFix<49,0,UNSIGNED> id187x_1;
    HWOffsetFix<1,0,UNSIGNED> id187x_2;
    HWOffsetFix<1,0,UNSIGNED> id187x_3;
    HWOffsetFix<49,0,UNSIGNED> id187x_4t_1e_1;

    id187out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id187st_count)));
    (id187x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id187st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id187x_2) = (gte_fixed((id187x_1),id187in_max));
    (id187x_3) = (and_fixed((id187x_2),id187in_enable));
    id187out_wrap = (id187x_3);
    if((id187in_enable.getValueAsBool())) {
      if(((id187x_3).getValueAsBool())) {
        (id187st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id187x_4t_1e_1) = (id187x_1);
        (id187st_count) = (id187x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id188out_output;

  { // Node ID: 188 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id188in_input = id187out_count;

    id188out_output = id188in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 190 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id190in_load = id189out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id190in_data = id188out_output;

    bool id190x_1;

    (id190x_1) = ((id190in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id190x_1)) {
      setMappedRegValue("current_run_cycle_count", id190in_data);
    }
  }
  { // Node ID: 275 (NodeConstantRawBits)
  }
  { // Node ID: 192 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 193 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id193in_enable = id275out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id193in_max = id192out_value;

    HWOffsetFix<49,0,UNSIGNED> id193x_1;
    HWOffsetFix<1,0,UNSIGNED> id193x_2;
    HWOffsetFix<1,0,UNSIGNED> id193x_3;
    HWOffsetFix<49,0,UNSIGNED> id193x_4t_1e_1;

    id193out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id193st_count)));
    (id193x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id193st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id193x_2) = (gte_fixed((id193x_1),id193in_max));
    (id193x_3) = (and_fixed((id193x_2),id193in_enable));
    id193out_wrap = (id193x_3);
    if((id193in_enable.getValueAsBool())) {
      if(((id193x_3).getValueAsBool())) {
        (id193st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id193x_4t_1e_1) = (id193x_1);
        (id193st_count) = (id193x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 195 (NodeInputMappedReg)
  }
  { // Node ID: 196 (NodeEq)
    const HWOffsetFix<48,0,UNSIGNED> &id196in_a = id193out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id196in_b = id195out_run_cycle_count;

    id196out_result[(getCycle()+1)%2] = (eq_fixed(id196in_a,id196in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 194 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id194in_start = id196out_result[getCycle()%2];

    if((id194in_start.getValueAsBool())) {
      startFlushing();
    }
  }
};

};
