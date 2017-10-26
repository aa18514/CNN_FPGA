#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window10_exec13.h"
//#include "sliding_window10_exec14.h"
//#include "sliding_window10.h"

namespace maxcompilersim {

sliding_window10Block14Vars sliding_window10::execute13(const sliding_window10Block13Vars &in_vars) {
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6180out_output;

  { // Node ID: 6180 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6180in_input = id6179out_result[getCycle()%2];

    id6180out_output = id6180in_input;
  }
  { // Node ID: 6182 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6182in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6182in_option0 = in_vars.id6181out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6182in_option1 = id6180out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6182x_1;

    switch((id6182in_sel.getValueAsLong())) {
      case 0l:
        id6182x_1 = id6182in_option0;
        break;
      case 1l:
        id6182x_1 = id6182in_option1;
        break;
      default:
        id6182x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6182out_result[(getCycle()+1)%2] = (id6182x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6183out_output;

  { // Node ID: 6183 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6183in_input = id6182out_result[getCycle()%2];

    id6183out_output = id6183in_input;
  }
  { // Node ID: 6185 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6185in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6185in_option0 = in_vars.id6184out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6185in_option1 = id6183out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6185x_1;

    switch((id6185in_sel.getValueAsLong())) {
      case 0l:
        id6185x_1 = id6185in_option0;
        break;
      case 1l:
        id6185x_1 = id6185in_option1;
        break;
      default:
        id6185x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6185out_result[(getCycle()+1)%2] = (id6185x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6186out_output;

  { // Node ID: 6186 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6186in_input = id6185out_result[getCycle()%2];

    id6186out_output = id6186in_input;
  }
  { // Node ID: 6188 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6188in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6188in_option0 = in_vars.id6187out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6188in_option1 = id6186out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6188x_1;

    switch((id6188in_sel.getValueAsLong())) {
      case 0l:
        id6188x_1 = id6188in_option0;
        break;
      case 1l:
        id6188x_1 = id6188in_option1;
        break;
      default:
        id6188x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6188out_result[(getCycle()+1)%2] = (id6188x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6189out_output;

  { // Node ID: 6189 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6189in_input = id6188out_result[getCycle()%2];

    id6189out_output = id6189in_input;
  }
  { // Node ID: 6191 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6191in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6191in_option0 = in_vars.id6190out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6191in_option1 = id6189out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6191x_1;

    switch((id6191in_sel.getValueAsLong())) {
      case 0l:
        id6191x_1 = id6191in_option0;
        break;
      case 1l:
        id6191x_1 = id6191in_option1;
        break;
      default:
        id6191x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6191out_result[(getCycle()+1)%2] = (id6191x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6192out_output;

  { // Node ID: 6192 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6192in_input = id6191out_result[getCycle()%2];

    id6192out_output = id6192in_input;
  }
  { // Node ID: 6194 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6194in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6194in_option0 = in_vars.id6193out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6194in_option1 = id6192out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6194x_1;

    switch((id6194in_sel.getValueAsLong())) {
      case 0l:
        id6194x_1 = id6194in_option0;
        break;
      case 1l:
        id6194x_1 = id6194in_option1;
        break;
      default:
        id6194x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6194out_result[(getCycle()+1)%2] = (id6194x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6195out_output;

  { // Node ID: 6195 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6195in_input = id6194out_result[getCycle()%2];

    id6195out_output = id6195in_input;
  }
  { // Node ID: 6197 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6197in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6197in_option0 = in_vars.id6196out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6197in_option1 = id6195out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6197x_1;

    switch((id6197in_sel.getValueAsLong())) {
      case 0l:
        id6197x_1 = id6197in_option0;
        break;
      case 1l:
        id6197x_1 = id6197in_option1;
        break;
      default:
        id6197x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6197out_result[(getCycle()+1)%2] = (id6197x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6198out_output;

  { // Node ID: 6198 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6198in_input = id6197out_result[getCycle()%2];

    id6198out_output = id6198in_input;
  }
  { // Node ID: 6200 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6200in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6200in_option0 = in_vars.id6199out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6200in_option1 = id6198out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6200x_1;

    switch((id6200in_sel.getValueAsLong())) {
      case 0l:
        id6200x_1 = id6200in_option0;
        break;
      case 1l:
        id6200x_1 = id6200in_option1;
        break;
      default:
        id6200x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6200out_result[(getCycle()+1)%2] = (id6200x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6201out_output;

  { // Node ID: 6201 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6201in_input = id6200out_result[getCycle()%2];

    id6201out_output = id6201in_input;
  }
  { // Node ID: 6203 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6203in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6203in_option0 = in_vars.id6202out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6203in_option1 = id6201out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6203x_1;

    switch((id6203in_sel.getValueAsLong())) {
      case 0l:
        id6203x_1 = id6203in_option0;
        break;
      case 1l:
        id6203x_1 = id6203in_option1;
        break;
      default:
        id6203x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6203out_result[(getCycle()+1)%2] = (id6203x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6204out_output;

  { // Node ID: 6204 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6204in_input = id6203out_result[getCycle()%2];

    id6204out_output = id6204in_input;
  }
  { // Node ID: 6206 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6206in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6206in_option0 = in_vars.id6205out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6206in_option1 = id6204out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6206x_1;

    switch((id6206in_sel.getValueAsLong())) {
      case 0l:
        id6206x_1 = id6206in_option0;
        break;
      case 1l:
        id6206x_1 = id6206in_option1;
        break;
      default:
        id6206x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6206out_result[(getCycle()+1)%2] = (id6206x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6207out_output;

  { // Node ID: 6207 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6207in_input = id6206out_result[getCycle()%2];

    id6207out_output = id6207in_input;
  }
  { // Node ID: 6209 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6209in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6209in_option0 = in_vars.id6208out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6209in_option1 = id6207out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6209x_1;

    switch((id6209in_sel.getValueAsLong())) {
      case 0l:
        id6209x_1 = id6209in_option0;
        break;
      case 1l:
        id6209x_1 = id6209in_option1;
        break;
      default:
        id6209x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6209out_result[(getCycle()+1)%2] = (id6209x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6210out_output;

  { // Node ID: 6210 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6210in_input = id6209out_result[getCycle()%2];

    id6210out_output = id6210in_input;
  }
  { // Node ID: 6212 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6212in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6212in_option0 = in_vars.id6211out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6212in_option1 = id6210out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6212x_1;

    switch((id6212in_sel.getValueAsLong())) {
      case 0l:
        id6212x_1 = id6212in_option0;
        break;
      case 1l:
        id6212x_1 = id6212in_option1;
        break;
      default:
        id6212x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6212out_result[(getCycle()+1)%2] = (id6212x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6213out_output;

  { // Node ID: 6213 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6213in_input = id6212out_result[getCycle()%2];

    id6213out_output = id6213in_input;
  }
  { // Node ID: 6215 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6215in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6215in_option0 = in_vars.id6214out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6215in_option1 = id6213out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6215x_1;

    switch((id6215in_sel.getValueAsLong())) {
      case 0l:
        id6215x_1 = id6215in_option0;
        break;
      case 1l:
        id6215x_1 = id6215in_option1;
        break;
      default:
        id6215x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6215out_result[(getCycle()+1)%2] = (id6215x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6216out_output;

  { // Node ID: 6216 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6216in_input = id6215out_result[getCycle()%2];

    id6216out_output = id6216in_input;
  }
  { // Node ID: 6218 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6218in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6218in_option0 = in_vars.id6217out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6218in_option1 = id6216out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6218x_1;

    switch((id6218in_sel.getValueAsLong())) {
      case 0l:
        id6218x_1 = id6218in_option0;
        break;
      case 1l:
        id6218x_1 = id6218in_option1;
        break;
      default:
        id6218x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6218out_result[(getCycle()+1)%2] = (id6218x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6219out_output;

  { // Node ID: 6219 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6219in_input = id6218out_result[getCycle()%2];

    id6219out_output = id6219in_input;
  }
  { // Node ID: 6221 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6221in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6221in_option0 = in_vars.id6220out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6221in_option1 = id6219out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6221x_1;

    switch((id6221in_sel.getValueAsLong())) {
      case 0l:
        id6221x_1 = id6221in_option0;
        break;
      case 1l:
        id6221x_1 = id6221in_option1;
        break;
      default:
        id6221x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6221out_result[(getCycle()+1)%2] = (id6221x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6222out_output;

  { // Node ID: 6222 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6222in_input = id6221out_result[getCycle()%2];

    id6222out_output = id6222in_input;
  }
  { // Node ID: 6224 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6224in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6224in_option0 = in_vars.id6223out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6224in_option1 = id6222out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6224x_1;

    switch((id6224in_sel.getValueAsLong())) {
      case 0l:
        id6224x_1 = id6224in_option0;
        break;
      case 1l:
        id6224x_1 = id6224in_option1;
        break;
      default:
        id6224x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6224out_result[(getCycle()+1)%2] = (id6224x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6225out_output;

  { // Node ID: 6225 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6225in_input = id6224out_result[getCycle()%2];

    id6225out_output = id6225in_input;
  }
  { // Node ID: 6227 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6227in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6227in_option0 = in_vars.id6226out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6227in_option1 = id6225out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6227x_1;

    switch((id6227in_sel.getValueAsLong())) {
      case 0l:
        id6227x_1 = id6227in_option0;
        break;
      case 1l:
        id6227x_1 = id6227in_option1;
        break;
      default:
        id6227x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6227out_result[(getCycle()+1)%2] = (id6227x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6228out_output;

  { // Node ID: 6228 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6228in_input = id6227out_result[getCycle()%2];

    id6228out_output = id6228in_input;
  }
  { // Node ID: 6230 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6230in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6230in_option0 = in_vars.id6229out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6230in_option1 = id6228out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6230x_1;

    switch((id6230in_sel.getValueAsLong())) {
      case 0l:
        id6230x_1 = id6230in_option0;
        break;
      case 1l:
        id6230x_1 = id6230in_option1;
        break;
      default:
        id6230x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6230out_result[(getCycle()+1)%2] = (id6230x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6231out_output;

  { // Node ID: 6231 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6231in_input = id6230out_result[getCycle()%2];

    id6231out_output = id6231in_input;
  }
  { // Node ID: 6233 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6233in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6233in_option0 = in_vars.id6232out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6233in_option1 = id6231out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6233x_1;

    switch((id6233in_sel.getValueAsLong())) {
      case 0l:
        id6233x_1 = id6233in_option0;
        break;
      case 1l:
        id6233x_1 = id6233in_option1;
        break;
      default:
        id6233x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6233out_result[(getCycle()+1)%2] = (id6233x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6234out_output;

  { // Node ID: 6234 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6234in_input = id6233out_result[getCycle()%2];

    id6234out_output = id6234in_input;
  }
  { // Node ID: 6236 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6236in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6236in_option0 = in_vars.id6235out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6236in_option1 = id6234out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6236x_1;

    switch((id6236in_sel.getValueAsLong())) {
      case 0l:
        id6236x_1 = id6236in_option0;
        break;
      case 1l:
        id6236x_1 = id6236in_option1;
        break;
      default:
        id6236x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6236out_result[(getCycle()+1)%2] = (id6236x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6237out_output;

  { // Node ID: 6237 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6237in_input = id6236out_result[getCycle()%2];

    id6237out_output = id6237in_input;
  }
  { // Node ID: 6239 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6239in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6239in_option0 = in_vars.id6238out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6239in_option1 = id6237out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6239x_1;

    switch((id6239in_sel.getValueAsLong())) {
      case 0l:
        id6239x_1 = id6239in_option0;
        break;
      case 1l:
        id6239x_1 = id6239in_option1;
        break;
      default:
        id6239x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6239out_result[(getCycle()+1)%2] = (id6239x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6240out_output;

  { // Node ID: 6240 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6240in_input = id6239out_result[getCycle()%2];

    id6240out_output = id6240in_input;
  }
  { // Node ID: 6242 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6242in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6242in_option0 = in_vars.id6241out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6242in_option1 = id6240out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6242x_1;

    switch((id6242in_sel.getValueAsLong())) {
      case 0l:
        id6242x_1 = id6242in_option0;
        break;
      case 1l:
        id6242x_1 = id6242in_option1;
        break;
      default:
        id6242x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6242out_result[(getCycle()+1)%2] = (id6242x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6243out_output;

  { // Node ID: 6243 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6243in_input = id6242out_result[getCycle()%2];

    id6243out_output = id6243in_input;
  }
  { // Node ID: 6245 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6245in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6245in_option0 = in_vars.id6244out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6245in_option1 = id6243out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6245x_1;

    switch((id6245in_sel.getValueAsLong())) {
      case 0l:
        id6245x_1 = id6245in_option0;
        break;
      case 1l:
        id6245x_1 = id6245in_option1;
        break;
      default:
        id6245x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6245out_result[(getCycle()+1)%2] = (id6245x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6246out_output;

  { // Node ID: 6246 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6246in_input = id6245out_result[getCycle()%2];

    id6246out_output = id6246in_input;
  }
  { // Node ID: 6248 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6248in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6248in_option0 = in_vars.id6247out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6248in_option1 = id6246out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6248x_1;

    switch((id6248in_sel.getValueAsLong())) {
      case 0l:
        id6248x_1 = id6248in_option0;
        break;
      case 1l:
        id6248x_1 = id6248in_option1;
        break;
      default:
        id6248x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6248out_result[(getCycle()+1)%2] = (id6248x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6249out_output;

  { // Node ID: 6249 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6249in_input = id6248out_result[getCycle()%2];

    id6249out_output = id6249in_input;
  }
  { // Node ID: 6251 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6251in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6251in_option0 = in_vars.id6250out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6251in_option1 = id6249out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6251x_1;

    switch((id6251in_sel.getValueAsLong())) {
      case 0l:
        id6251x_1 = id6251in_option0;
        break;
      case 1l:
        id6251x_1 = id6251in_option1;
        break;
      default:
        id6251x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6251out_result[(getCycle()+1)%2] = (id6251x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6252out_output;

  { // Node ID: 6252 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6252in_input = id6251out_result[getCycle()%2];

    id6252out_output = id6252in_input;
  }
  { // Node ID: 6254 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6254in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6254in_option0 = in_vars.id6253out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6254in_option1 = id6252out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6254x_1;

    switch((id6254in_sel.getValueAsLong())) {
      case 0l:
        id6254x_1 = id6254in_option0;
        break;
      case 1l:
        id6254x_1 = id6254in_option1;
        break;
      default:
        id6254x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6254out_result[(getCycle()+1)%2] = (id6254x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6255out_output;

  { // Node ID: 6255 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6255in_input = id6254out_result[getCycle()%2];

    id6255out_output = id6255in_input;
  }
  { // Node ID: 6257 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6257in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6257in_option0 = in_vars.id6256out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6257in_option1 = id6255out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6257x_1;

    switch((id6257in_sel.getValueAsLong())) {
      case 0l:
        id6257x_1 = id6257in_option0;
        break;
      case 1l:
        id6257x_1 = id6257in_option1;
        break;
      default:
        id6257x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6257out_result[(getCycle()+1)%2] = (id6257x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6258out_output;

  { // Node ID: 6258 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6258in_input = id6257out_result[getCycle()%2];

    id6258out_output = id6258in_input;
  }
  { // Node ID: 6260 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6260in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6260in_option0 = in_vars.id6259out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6260in_option1 = id6258out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6260x_1;

    switch((id6260in_sel.getValueAsLong())) {
      case 0l:
        id6260x_1 = id6260in_option0;
        break;
      case 1l:
        id6260x_1 = id6260in_option1;
        break;
      default:
        id6260x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6260out_result[(getCycle()+1)%2] = (id6260x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6261out_output;

  { // Node ID: 6261 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6261in_input = id6260out_result[getCycle()%2];

    id6261out_output = id6261in_input;
  }
  { // Node ID: 6263 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6263in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6263in_option0 = in_vars.id6262out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6263in_option1 = id6261out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6263x_1;

    switch((id6263in_sel.getValueAsLong())) {
      case 0l:
        id6263x_1 = id6263in_option0;
        break;
      case 1l:
        id6263x_1 = id6263in_option1;
        break;
      default:
        id6263x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6263out_result[(getCycle()+1)%2] = (id6263x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6264out_output;

  { // Node ID: 6264 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6264in_input = id6263out_result[getCycle()%2];

    id6264out_output = id6264in_input;
  }
  { // Node ID: 6266 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6266in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6266in_option0 = in_vars.id6265out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6266in_option1 = id6264out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6266x_1;

    switch((id6266in_sel.getValueAsLong())) {
      case 0l:
        id6266x_1 = id6266in_option0;
        break;
      case 1l:
        id6266x_1 = id6266in_option1;
        break;
      default:
        id6266x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6266out_result[(getCycle()+1)%2] = (id6266x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6267out_output;

  { // Node ID: 6267 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6267in_input = id6266out_result[getCycle()%2];

    id6267out_output = id6267in_input;
  }
  { // Node ID: 6269 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6269in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6269in_option0 = in_vars.id6268out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6269in_option1 = id6267out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6269x_1;

    switch((id6269in_sel.getValueAsLong())) {
      case 0l:
        id6269x_1 = id6269in_option0;
        break;
      case 1l:
        id6269x_1 = id6269in_option1;
        break;
      default:
        id6269x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6269out_result[(getCycle()+1)%2] = (id6269x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6270out_output;

  { // Node ID: 6270 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6270in_input = id6269out_result[getCycle()%2];

    id6270out_output = id6270in_input;
  }
  { // Node ID: 6272 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6272in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6272in_option0 = in_vars.id6271out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6272in_option1 = id6270out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6272x_1;

    switch((id6272in_sel.getValueAsLong())) {
      case 0l:
        id6272x_1 = id6272in_option0;
        break;
      case 1l:
        id6272x_1 = id6272in_option1;
        break;
      default:
        id6272x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6272out_result[(getCycle()+1)%2] = (id6272x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6273out_output;

  { // Node ID: 6273 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6273in_input = id6272out_result[getCycle()%2];

    id6273out_output = id6273in_input;
  }
  { // Node ID: 6275 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6275in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6275in_option0 = in_vars.id6274out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6275in_option1 = id6273out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6275x_1;

    switch((id6275in_sel.getValueAsLong())) {
      case 0l:
        id6275x_1 = id6275in_option0;
        break;
      case 1l:
        id6275x_1 = id6275in_option1;
        break;
      default:
        id6275x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6275out_result[(getCycle()+1)%2] = (id6275x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6276out_output;

  { // Node ID: 6276 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6276in_input = id6275out_result[getCycle()%2];

    id6276out_output = id6276in_input;
  }
  { // Node ID: 6278 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6278in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6278in_option0 = in_vars.id6277out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6278in_option1 = id6276out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6278x_1;

    switch((id6278in_sel.getValueAsLong())) {
      case 0l:
        id6278x_1 = id6278in_option0;
        break;
      case 1l:
        id6278x_1 = id6278in_option1;
        break;
      default:
        id6278x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6278out_result[(getCycle()+1)%2] = (id6278x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6279out_output;

  { // Node ID: 6279 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6279in_input = id6278out_result[getCycle()%2];

    id6279out_output = id6279in_input;
  }
  { // Node ID: 6281 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6281in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6281in_option0 = in_vars.id6280out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6281in_option1 = id6279out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6281x_1;

    switch((id6281in_sel.getValueAsLong())) {
      case 0l:
        id6281x_1 = id6281in_option0;
        break;
      case 1l:
        id6281x_1 = id6281in_option1;
        break;
      default:
        id6281x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6281out_result[(getCycle()+1)%2] = (id6281x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6282out_output;

  { // Node ID: 6282 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6282in_input = id6281out_result[getCycle()%2];

    id6282out_output = id6282in_input;
  }
  { // Node ID: 6284 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6284in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6284in_option0 = in_vars.id6283out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6284in_option1 = id6282out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6284x_1;

    switch((id6284in_sel.getValueAsLong())) {
      case 0l:
        id6284x_1 = id6284in_option0;
        break;
      case 1l:
        id6284x_1 = id6284in_option1;
        break;
      default:
        id6284x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6284out_result[(getCycle()+1)%2] = (id6284x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6285out_output;

  { // Node ID: 6285 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6285in_input = id6284out_result[getCycle()%2];

    id6285out_output = id6285in_input;
  }
  { // Node ID: 6287 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6287in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6287in_option0 = in_vars.id6286out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6287in_option1 = id6285out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6287x_1;

    switch((id6287in_sel.getValueAsLong())) {
      case 0l:
        id6287x_1 = id6287in_option0;
        break;
      case 1l:
        id6287x_1 = id6287in_option1;
        break;
      default:
        id6287x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6287out_result[(getCycle()+1)%2] = (id6287x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6288out_output;

  { // Node ID: 6288 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6288in_input = id6287out_result[getCycle()%2];

    id6288out_output = id6288in_input;
  }
  { // Node ID: 6290 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6290in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6290in_option0 = in_vars.id6289out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6290in_option1 = id6288out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6290x_1;

    switch((id6290in_sel.getValueAsLong())) {
      case 0l:
        id6290x_1 = id6290in_option0;
        break;
      case 1l:
        id6290x_1 = id6290in_option1;
        break;
      default:
        id6290x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6290out_result[(getCycle()+1)%2] = (id6290x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6291out_output;

  { // Node ID: 6291 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6291in_input = id6290out_result[getCycle()%2];

    id6291out_output = id6291in_input;
  }
  { // Node ID: 6293 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6293in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6293in_option0 = in_vars.id6292out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6293in_option1 = id6291out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6293x_1;

    switch((id6293in_sel.getValueAsLong())) {
      case 0l:
        id6293x_1 = id6293in_option0;
        break;
      case 1l:
        id6293x_1 = id6293in_option1;
        break;
      default:
        id6293x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6293out_result[(getCycle()+1)%2] = (id6293x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6294out_output;

  { // Node ID: 6294 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6294in_input = id6293out_result[getCycle()%2];

    id6294out_output = id6294in_input;
  }
  { // Node ID: 6296 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6296in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6296in_option0 = in_vars.id6295out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6296in_option1 = id6294out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6296x_1;

    switch((id6296in_sel.getValueAsLong())) {
      case 0l:
        id6296x_1 = id6296in_option0;
        break;
      case 1l:
        id6296x_1 = id6296in_option1;
        break;
      default:
        id6296x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6296out_result[(getCycle()+1)%2] = (id6296x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6297out_output;

  { // Node ID: 6297 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6297in_input = id6296out_result[getCycle()%2];

    id6297out_output = id6297in_input;
  }
  { // Node ID: 6299 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6299in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6299in_option0 = in_vars.id6298out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6299in_option1 = id6297out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6299x_1;

    switch((id6299in_sel.getValueAsLong())) {
      case 0l:
        id6299x_1 = id6299in_option0;
        break;
      case 1l:
        id6299x_1 = id6299in_option1;
        break;
      default:
        id6299x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6299out_result[(getCycle()+1)%2] = (id6299x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6300out_output;

  { // Node ID: 6300 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6300in_input = id6299out_result[getCycle()%2];

    id6300out_output = id6300in_input;
  }
  { // Node ID: 6302 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6302in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6302in_option0 = in_vars.id6301out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6302in_option1 = id6300out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6302x_1;

    switch((id6302in_sel.getValueAsLong())) {
      case 0l:
        id6302x_1 = id6302in_option0;
        break;
      case 1l:
        id6302x_1 = id6302in_option1;
        break;
      default:
        id6302x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6302out_result[(getCycle()+1)%2] = (id6302x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6303out_output;

  { // Node ID: 6303 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6303in_input = id6302out_result[getCycle()%2];

    id6303out_output = id6303in_input;
  }
  { // Node ID: 6305 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6305in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6305in_option0 = in_vars.id6304out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6305in_option1 = id6303out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6305x_1;

    switch((id6305in_sel.getValueAsLong())) {
      case 0l:
        id6305x_1 = id6305in_option0;
        break;
      case 1l:
        id6305x_1 = id6305in_option1;
        break;
      default:
        id6305x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6305out_result[(getCycle()+1)%2] = (id6305x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6306out_output;

  { // Node ID: 6306 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6306in_input = id6305out_result[getCycle()%2];

    id6306out_output = id6306in_input;
  }
  { // Node ID: 6308 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6308in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6308in_option0 = in_vars.id6307out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6308in_option1 = id6306out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6308x_1;

    switch((id6308in_sel.getValueAsLong())) {
      case 0l:
        id6308x_1 = id6308in_option0;
        break;
      case 1l:
        id6308x_1 = id6308in_option1;
        break;
      default:
        id6308x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6308out_result[(getCycle()+1)%2] = (id6308x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6309out_output;

  { // Node ID: 6309 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6309in_input = id6308out_result[getCycle()%2];

    id6309out_output = id6309in_input;
  }
  { // Node ID: 6311 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6311in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6311in_option0 = in_vars.id6310out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6311in_option1 = id6309out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6311x_1;

    switch((id6311in_sel.getValueAsLong())) {
      case 0l:
        id6311x_1 = id6311in_option0;
        break;
      case 1l:
        id6311x_1 = id6311in_option1;
        break;
      default:
        id6311x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6311out_result[(getCycle()+1)%2] = (id6311x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6312out_output;

  { // Node ID: 6312 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6312in_input = id6311out_result[getCycle()%2];

    id6312out_output = id6312in_input;
  }
  { // Node ID: 6314 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6314in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6314in_option0 = in_vars.id6313out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6314in_option1 = id6312out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6314x_1;

    switch((id6314in_sel.getValueAsLong())) {
      case 0l:
        id6314x_1 = id6314in_option0;
        break;
      case 1l:
        id6314x_1 = id6314in_option1;
        break;
      default:
        id6314x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6314out_result[(getCycle()+1)%2] = (id6314x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6315out_output;

  { // Node ID: 6315 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6315in_input = id6314out_result[getCycle()%2];

    id6315out_output = id6315in_input;
  }
  { // Node ID: 6317 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6317in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6317in_option0 = in_vars.id6316out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6317in_option1 = id6315out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6317x_1;

    switch((id6317in_sel.getValueAsLong())) {
      case 0l:
        id6317x_1 = id6317in_option0;
        break;
      case 1l:
        id6317x_1 = id6317in_option1;
        break;
      default:
        id6317x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6317out_result[(getCycle()+1)%2] = (id6317x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6318out_output;

  { // Node ID: 6318 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6318in_input = id6317out_result[getCycle()%2];

    id6318out_output = id6318in_input;
  }
  { // Node ID: 6320 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6320in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6320in_option0 = in_vars.id6319out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6320in_option1 = id6318out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6320x_1;

    switch((id6320in_sel.getValueAsLong())) {
      case 0l:
        id6320x_1 = id6320in_option0;
        break;
      case 1l:
        id6320x_1 = id6320in_option1;
        break;
      default:
        id6320x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6320out_result[(getCycle()+1)%2] = (id6320x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6321out_output;

  { // Node ID: 6321 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6321in_input = id6320out_result[getCycle()%2];

    id6321out_output = id6321in_input;
  }
  { // Node ID: 6323 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6323in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6323in_option0 = in_vars.id6322out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6323in_option1 = id6321out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6323x_1;

    switch((id6323in_sel.getValueAsLong())) {
      case 0l:
        id6323x_1 = id6323in_option0;
        break;
      case 1l:
        id6323x_1 = id6323in_option1;
        break;
      default:
        id6323x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6323out_result[(getCycle()+1)%2] = (id6323x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6324out_output;

  { // Node ID: 6324 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6324in_input = id6323out_result[getCycle()%2];

    id6324out_output = id6324in_input;
  }
  { // Node ID: 6326 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6326in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6326in_option0 = in_vars.id6325out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6326in_option1 = id6324out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6326x_1;

    switch((id6326in_sel.getValueAsLong())) {
      case 0l:
        id6326x_1 = id6326in_option0;
        break;
      case 1l:
        id6326x_1 = id6326in_option1;
        break;
      default:
        id6326x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6326out_result[(getCycle()+1)%2] = (id6326x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6327out_output;

  { // Node ID: 6327 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6327in_input = id6326out_result[getCycle()%2];

    id6327out_output = id6327in_input;
  }
  { // Node ID: 6329 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6329in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6329in_option0 = in_vars.id6328out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6329in_option1 = id6327out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6329x_1;

    switch((id6329in_sel.getValueAsLong())) {
      case 0l:
        id6329x_1 = id6329in_option0;
        break;
      case 1l:
        id6329x_1 = id6329in_option1;
        break;
      default:
        id6329x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6329out_result[(getCycle()+1)%2] = (id6329x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6330out_output;

  { // Node ID: 6330 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6330in_input = id6329out_result[getCycle()%2];

    id6330out_output = id6330in_input;
  }
  { // Node ID: 6332 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6332in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6332in_option0 = in_vars.id6331out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6332in_option1 = id6330out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6332x_1;

    switch((id6332in_sel.getValueAsLong())) {
      case 0l:
        id6332x_1 = id6332in_option0;
        break;
      case 1l:
        id6332x_1 = id6332in_option1;
        break;
      default:
        id6332x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6332out_result[(getCycle()+1)%2] = (id6332x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6333out_output;

  { // Node ID: 6333 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6333in_input = id6332out_result[getCycle()%2];

    id6333out_output = id6333in_input;
  }
  { // Node ID: 6335 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6335in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6335in_option0 = in_vars.id6334out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6335in_option1 = id6333out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6335x_1;

    switch((id6335in_sel.getValueAsLong())) {
      case 0l:
        id6335x_1 = id6335in_option0;
        break;
      case 1l:
        id6335x_1 = id6335in_option1;
        break;
      default:
        id6335x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6335out_result[(getCycle()+1)%2] = (id6335x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6336out_output;

  { // Node ID: 6336 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6336in_input = id6335out_result[getCycle()%2];

    id6336out_output = id6336in_input;
  }
  { // Node ID: 6338 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6338in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6338in_option0 = in_vars.id6337out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6338in_option1 = id6336out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6338x_1;

    switch((id6338in_sel.getValueAsLong())) {
      case 0l:
        id6338x_1 = id6338in_option0;
        break;
      case 1l:
        id6338x_1 = id6338in_option1;
        break;
      default:
        id6338x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6338out_result[(getCycle()+1)%2] = (id6338x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6339out_output;

  { // Node ID: 6339 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6339in_input = id6338out_result[getCycle()%2];

    id6339out_output = id6339in_input;
  }
  { // Node ID: 6341 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6341in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6341in_option0 = in_vars.id6340out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6341in_option1 = id6339out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6341x_1;

    switch((id6341in_sel.getValueAsLong())) {
      case 0l:
        id6341x_1 = id6341in_option0;
        break;
      case 1l:
        id6341x_1 = id6341in_option1;
        break;
      default:
        id6341x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6341out_result[(getCycle()+1)%2] = (id6341x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6342out_output;

  { // Node ID: 6342 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6342in_input = id6341out_result[getCycle()%2];

    id6342out_output = id6342in_input;
  }
  { // Node ID: 6344 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6344in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6344in_option0 = in_vars.id6343out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6344in_option1 = id6342out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6344x_1;

    switch((id6344in_sel.getValueAsLong())) {
      case 0l:
        id6344x_1 = id6344in_option0;
        break;
      case 1l:
        id6344x_1 = id6344in_option1;
        break;
      default:
        id6344x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6344out_result[(getCycle()+1)%2] = (id6344x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6345out_output;

  { // Node ID: 6345 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6345in_input = id6344out_result[getCycle()%2];

    id6345out_output = id6345in_input;
  }
  { // Node ID: 6347 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6347in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6347in_option0 = in_vars.id6346out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6347in_option1 = id6345out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6347x_1;

    switch((id6347in_sel.getValueAsLong())) {
      case 0l:
        id6347x_1 = id6347in_option0;
        break;
      case 1l:
        id6347x_1 = id6347in_option1;
        break;
      default:
        id6347x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6347out_result[(getCycle()+1)%2] = (id6347x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6348out_output;

  { // Node ID: 6348 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6348in_input = id6347out_result[getCycle()%2];

    id6348out_output = id6348in_input;
  }
  { // Node ID: 6350 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6350in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6350in_option0 = in_vars.id6349out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6350in_option1 = id6348out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6350x_1;

    switch((id6350in_sel.getValueAsLong())) {
      case 0l:
        id6350x_1 = id6350in_option0;
        break;
      case 1l:
        id6350x_1 = id6350in_option1;
        break;
      default:
        id6350x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6350out_result[(getCycle()+1)%2] = (id6350x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6351out_output;

  { // Node ID: 6351 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6351in_input = id6350out_result[getCycle()%2];

    id6351out_output = id6351in_input;
  }
  { // Node ID: 6353 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6353in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6353in_option0 = in_vars.id6352out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6353in_option1 = id6351out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6353x_1;

    switch((id6353in_sel.getValueAsLong())) {
      case 0l:
        id6353x_1 = id6353in_option0;
        break;
      case 1l:
        id6353x_1 = id6353in_option1;
        break;
      default:
        id6353x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6353out_result[(getCycle()+1)%2] = (id6353x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6354out_output;

  { // Node ID: 6354 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6354in_input = id6353out_result[getCycle()%2];

    id6354out_output = id6354in_input;
  }
  { // Node ID: 6356 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6356in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6356in_option0 = in_vars.id6355out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6356in_option1 = id6354out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6356x_1;

    switch((id6356in_sel.getValueAsLong())) {
      case 0l:
        id6356x_1 = id6356in_option0;
        break;
      case 1l:
        id6356x_1 = id6356in_option1;
        break;
      default:
        id6356x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6356out_result[(getCycle()+1)%2] = (id6356x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6357out_output;

  { // Node ID: 6357 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6357in_input = id6356out_result[getCycle()%2];

    id6357out_output = id6357in_input;
  }
  { // Node ID: 6359 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6359in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6359in_option0 = in_vars.id6358out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6359in_option1 = id6357out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6359x_1;

    switch((id6359in_sel.getValueAsLong())) {
      case 0l:
        id6359x_1 = id6359in_option0;
        break;
      case 1l:
        id6359x_1 = id6359in_option1;
        break;
      default:
        id6359x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6359out_result[(getCycle()+1)%2] = (id6359x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6360out_output;

  { // Node ID: 6360 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6360in_input = id6359out_result[getCycle()%2];

    id6360out_output = id6360in_input;
  }
  { // Node ID: 6362 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6362in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6362in_option0 = in_vars.id6361out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6362in_option1 = id6360out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6362x_1;

    switch((id6362in_sel.getValueAsLong())) {
      case 0l:
        id6362x_1 = id6362in_option0;
        break;
      case 1l:
        id6362x_1 = id6362in_option1;
        break;
      default:
        id6362x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6362out_result[(getCycle()+1)%2] = (id6362x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6363out_output;

  { // Node ID: 6363 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6363in_input = id6362out_result[getCycle()%2];

    id6363out_output = id6363in_input;
  }
  { // Node ID: 6365 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6365in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6365in_option0 = in_vars.id6364out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6365in_option1 = id6363out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6365x_1;

    switch((id6365in_sel.getValueAsLong())) {
      case 0l:
        id6365x_1 = id6365in_option0;
        break;
      case 1l:
        id6365x_1 = id6365in_option1;
        break;
      default:
        id6365x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6365out_result[(getCycle()+1)%2] = (id6365x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6366out_output;

  { // Node ID: 6366 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6366in_input = id6365out_result[getCycle()%2];

    id6366out_output = id6366in_input;
  }
  { // Node ID: 6368 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6368in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6368in_option0 = in_vars.id6367out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6368in_option1 = id6366out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6368x_1;

    switch((id6368in_sel.getValueAsLong())) {
      case 0l:
        id6368x_1 = id6368in_option0;
        break;
      case 1l:
        id6368x_1 = id6368in_option1;
        break;
      default:
        id6368x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6368out_result[(getCycle()+1)%2] = (id6368x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6369out_output;

  { // Node ID: 6369 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6369in_input = id6368out_result[getCycle()%2];

    id6369out_output = id6369in_input;
  }
  { // Node ID: 6371 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6371in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6371in_option0 = in_vars.id6370out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6371in_option1 = id6369out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6371x_1;

    switch((id6371in_sel.getValueAsLong())) {
      case 0l:
        id6371x_1 = id6371in_option0;
        break;
      case 1l:
        id6371x_1 = id6371in_option1;
        break;
      default:
        id6371x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6371out_result[(getCycle()+1)%2] = (id6371x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6372out_output;

  { // Node ID: 6372 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6372in_input = id6371out_result[getCycle()%2];

    id6372out_output = id6372in_input;
  }
  { // Node ID: 6374 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6374in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6374in_option0 = in_vars.id6373out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6374in_option1 = id6372out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6374x_1;

    switch((id6374in_sel.getValueAsLong())) {
      case 0l:
        id6374x_1 = id6374in_option0;
        break;
      case 1l:
        id6374x_1 = id6374in_option1;
        break;
      default:
        id6374x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6374out_result[(getCycle()+1)%2] = (id6374x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6375out_output;

  { // Node ID: 6375 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6375in_input = id6374out_result[getCycle()%2];

    id6375out_output = id6375in_input;
  }
  { // Node ID: 6377 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6377in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6377in_option0 = in_vars.id6376out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6377in_option1 = id6375out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6377x_1;

    switch((id6377in_sel.getValueAsLong())) {
      case 0l:
        id6377x_1 = id6377in_option0;
        break;
      case 1l:
        id6377x_1 = id6377in_option1;
        break;
      default:
        id6377x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6377out_result[(getCycle()+1)%2] = (id6377x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6378out_output;

  { // Node ID: 6378 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6378in_input = id6377out_result[getCycle()%2];

    id6378out_output = id6378in_input;
  }
  { // Node ID: 6380 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6380in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6380in_option0 = in_vars.id6379out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6380in_option1 = id6378out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6380x_1;

    switch((id6380in_sel.getValueAsLong())) {
      case 0l:
        id6380x_1 = id6380in_option0;
        break;
      case 1l:
        id6380x_1 = id6380in_option1;
        break;
      default:
        id6380x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6380out_result[(getCycle()+1)%2] = (id6380x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6381out_output;

  { // Node ID: 6381 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6381in_input = id6380out_result[getCycle()%2];

    id6381out_output = id6381in_input;
  }
  { // Node ID: 6383 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6383in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6383in_option0 = in_vars.id6382out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6383in_option1 = id6381out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6383x_1;

    switch((id6383in_sel.getValueAsLong())) {
      case 0l:
        id6383x_1 = id6383in_option0;
        break;
      case 1l:
        id6383x_1 = id6383in_option1;
        break;
      default:
        id6383x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6383out_result[(getCycle()+1)%2] = (id6383x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6384out_output;

  { // Node ID: 6384 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6384in_input = id6383out_result[getCycle()%2];

    id6384out_output = id6384in_input;
  }
  { // Node ID: 6386 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6386in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6386in_option0 = in_vars.id6385out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6386in_option1 = id6384out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6386x_1;

    switch((id6386in_sel.getValueAsLong())) {
      case 0l:
        id6386x_1 = id6386in_option0;
        break;
      case 1l:
        id6386x_1 = id6386in_option1;
        break;
      default:
        id6386x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6386out_result[(getCycle()+1)%2] = (id6386x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6387out_output;

  { // Node ID: 6387 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6387in_input = id6386out_result[getCycle()%2];

    id6387out_output = id6387in_input;
  }
  { // Node ID: 6389 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6389in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6389in_option0 = in_vars.id6388out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6389in_option1 = id6387out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6389x_1;

    switch((id6389in_sel.getValueAsLong())) {
      case 0l:
        id6389x_1 = id6389in_option0;
        break;
      case 1l:
        id6389x_1 = id6389in_option1;
        break;
      default:
        id6389x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6389out_result[(getCycle()+1)%2] = (id6389x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6390out_output;

  { // Node ID: 6390 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6390in_input = id6389out_result[getCycle()%2];

    id6390out_output = id6390in_input;
  }
  { // Node ID: 6392 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6392in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6392in_option0 = in_vars.id6391out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6392in_option1 = id6390out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6392x_1;

    switch((id6392in_sel.getValueAsLong())) {
      case 0l:
        id6392x_1 = id6392in_option0;
        break;
      case 1l:
        id6392x_1 = id6392in_option1;
        break;
      default:
        id6392x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6392out_result[(getCycle()+1)%2] = (id6392x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6393out_output;

  { // Node ID: 6393 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6393in_input = id6392out_result[getCycle()%2];

    id6393out_output = id6393in_input;
  }
  { // Node ID: 6395 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6395in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6395in_option0 = in_vars.id6394out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6395in_option1 = id6393out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6395x_1;

    switch((id6395in_sel.getValueAsLong())) {
      case 0l:
        id6395x_1 = id6395in_option0;
        break;
      case 1l:
        id6395x_1 = id6395in_option1;
        break;
      default:
        id6395x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6395out_result[(getCycle()+1)%2] = (id6395x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6396out_output;

  { // Node ID: 6396 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6396in_input = id6395out_result[getCycle()%2];

    id6396out_output = id6396in_input;
  }
  { // Node ID: 6398 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6398in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6398in_option0 = in_vars.id6397out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6398in_option1 = id6396out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6398x_1;

    switch((id6398in_sel.getValueAsLong())) {
      case 0l:
        id6398x_1 = id6398in_option0;
        break;
      case 1l:
        id6398x_1 = id6398in_option1;
        break;
      default:
        id6398x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6398out_result[(getCycle()+1)%2] = (id6398x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6399out_output;

  { // Node ID: 6399 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6399in_input = id6398out_result[getCycle()%2];

    id6399out_output = id6399in_input;
  }
  { // Node ID: 6401 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6401in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6401in_option0 = in_vars.id6400out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6401in_option1 = id6399out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6401x_1;

    switch((id6401in_sel.getValueAsLong())) {
      case 0l:
        id6401x_1 = id6401in_option0;
        break;
      case 1l:
        id6401x_1 = id6401in_option1;
        break;
      default:
        id6401x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6401out_result[(getCycle()+1)%2] = (id6401x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6402out_output;

  { // Node ID: 6402 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6402in_input = id6401out_result[getCycle()%2];

    id6402out_output = id6402in_input;
  }
  { // Node ID: 6404 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6404in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6404in_option0 = in_vars.id6403out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6404in_option1 = id6402out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6404x_1;

    switch((id6404in_sel.getValueAsLong())) {
      case 0l:
        id6404x_1 = id6404in_option0;
        break;
      case 1l:
        id6404x_1 = id6404in_option1;
        break;
      default:
        id6404x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6404out_result[(getCycle()+1)%2] = (id6404x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6405out_output;

  { // Node ID: 6405 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6405in_input = id6404out_result[getCycle()%2];

    id6405out_output = id6405in_input;
  }
  { // Node ID: 6407 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6407in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6407in_option0 = in_vars.id6406out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6407in_option1 = id6405out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6407x_1;

    switch((id6407in_sel.getValueAsLong())) {
      case 0l:
        id6407x_1 = id6407in_option0;
        break;
      case 1l:
        id6407x_1 = id6407in_option1;
        break;
      default:
        id6407x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6407out_result[(getCycle()+1)%2] = (id6407x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6408out_output;

  { // Node ID: 6408 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6408in_input = id6407out_result[getCycle()%2];

    id6408out_output = id6408in_input;
  }
  { // Node ID: 6410 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6410in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6410in_option0 = in_vars.id6409out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6410in_option1 = id6408out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6410x_1;

    switch((id6410in_sel.getValueAsLong())) {
      case 0l:
        id6410x_1 = id6410in_option0;
        break;
      case 1l:
        id6410x_1 = id6410in_option1;
        break;
      default:
        id6410x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6410out_result[(getCycle()+1)%2] = (id6410x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6411out_output;

  { // Node ID: 6411 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6411in_input = id6410out_result[getCycle()%2];

    id6411out_output = id6411in_input;
  }
  { // Node ID: 6413 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6413in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6413in_option0 = in_vars.id6412out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6413in_option1 = id6411out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6413x_1;

    switch((id6413in_sel.getValueAsLong())) {
      case 0l:
        id6413x_1 = id6413in_option0;
        break;
      case 1l:
        id6413x_1 = id6413in_option1;
        break;
      default:
        id6413x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6413out_result[(getCycle()+1)%2] = (id6413x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6414out_output;

  { // Node ID: 6414 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6414in_input = id6413out_result[getCycle()%2];

    id6414out_output = id6414in_input;
  }
  { // Node ID: 6416 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6416in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6416in_option0 = in_vars.id6415out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6416in_option1 = id6414out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6416x_1;

    switch((id6416in_sel.getValueAsLong())) {
      case 0l:
        id6416x_1 = id6416in_option0;
        break;
      case 1l:
        id6416x_1 = id6416in_option1;
        break;
      default:
        id6416x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6416out_result[(getCycle()+1)%2] = (id6416x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6417out_output;

  { // Node ID: 6417 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6417in_input = id6416out_result[getCycle()%2];

    id6417out_output = id6417in_input;
  }
  { // Node ID: 6419 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6419in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6419in_option0 = in_vars.id6418out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6419in_option1 = id6417out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6419x_1;

    switch((id6419in_sel.getValueAsLong())) {
      case 0l:
        id6419x_1 = id6419in_option0;
        break;
      case 1l:
        id6419x_1 = id6419in_option1;
        break;
      default:
        id6419x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6419out_result[(getCycle()+1)%2] = (id6419x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6420out_output;

  { // Node ID: 6420 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6420in_input = id6419out_result[getCycle()%2];

    id6420out_output = id6420in_input;
  }
  { // Node ID: 6422 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6422in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6422in_option0 = in_vars.id6421out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6422in_option1 = id6420out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6422x_1;

    switch((id6422in_sel.getValueAsLong())) {
      case 0l:
        id6422x_1 = id6422in_option0;
        break;
      case 1l:
        id6422x_1 = id6422in_option1;
        break;
      default:
        id6422x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6422out_result[(getCycle()+1)%2] = (id6422x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6423out_output;

  { // Node ID: 6423 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6423in_input = id6422out_result[getCycle()%2];

    id6423out_output = id6423in_input;
  }
  { // Node ID: 6425 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6425in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6425in_option0 = in_vars.id6424out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6425in_option1 = id6423out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6425x_1;

    switch((id6425in_sel.getValueAsLong())) {
      case 0l:
        id6425x_1 = id6425in_option0;
        break;
      case 1l:
        id6425x_1 = id6425in_option1;
        break;
      default:
        id6425x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6425out_result[(getCycle()+1)%2] = (id6425x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6426out_output;

  { // Node ID: 6426 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6426in_input = id6425out_result[getCycle()%2];

    id6426out_output = id6426in_input;
  }
  { // Node ID: 6428 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6428in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6428in_option0 = in_vars.id6427out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6428in_option1 = id6426out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6428x_1;

    switch((id6428in_sel.getValueAsLong())) {
      case 0l:
        id6428x_1 = id6428in_option0;
        break;
      case 1l:
        id6428x_1 = id6428in_option1;
        break;
      default:
        id6428x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6428out_result[(getCycle()+1)%2] = (id6428x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6429out_output;

  { // Node ID: 6429 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6429in_input = id6428out_result[getCycle()%2];

    id6429out_output = id6429in_input;
  }
  { // Node ID: 6431 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6431in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6431in_option0 = in_vars.id6430out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6431in_option1 = id6429out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6431x_1;

    switch((id6431in_sel.getValueAsLong())) {
      case 0l:
        id6431x_1 = id6431in_option0;
        break;
      case 1l:
        id6431x_1 = id6431in_option1;
        break;
      default:
        id6431x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6431out_result[(getCycle()+1)%2] = (id6431x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6432out_output;

  { // Node ID: 6432 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6432in_input = id6431out_result[getCycle()%2];

    id6432out_output = id6432in_input;
  }
  { // Node ID: 6434 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6434in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6434in_option0 = in_vars.id6433out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6434in_option1 = id6432out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6434x_1;

    switch((id6434in_sel.getValueAsLong())) {
      case 0l:
        id6434x_1 = id6434in_option0;
        break;
      case 1l:
        id6434x_1 = id6434in_option1;
        break;
      default:
        id6434x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6434out_result[(getCycle()+1)%2] = (id6434x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6435out_output;

  { // Node ID: 6435 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6435in_input = id6434out_result[getCycle()%2];

    id6435out_output = id6435in_input;
  }
  { // Node ID: 6437 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6437in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6437in_option0 = in_vars.id6436out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6437in_option1 = id6435out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6437x_1;

    switch((id6437in_sel.getValueAsLong())) {
      case 0l:
        id6437x_1 = id6437in_option0;
        break;
      case 1l:
        id6437x_1 = id6437in_option1;
        break;
      default:
        id6437x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6437out_result[(getCycle()+1)%2] = (id6437x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6438out_output;

  { // Node ID: 6438 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6438in_input = id6437out_result[getCycle()%2];

    id6438out_output = id6438in_input;
  }
  { // Node ID: 6440 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6440in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6440in_option0 = in_vars.id6439out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6440in_option1 = id6438out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6440x_1;

    switch((id6440in_sel.getValueAsLong())) {
      case 0l:
        id6440x_1 = id6440in_option0;
        break;
      case 1l:
        id6440x_1 = id6440in_option1;
        break;
      default:
        id6440x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6440out_result[(getCycle()+1)%2] = (id6440x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6441out_output;

  { // Node ID: 6441 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6441in_input = id6440out_result[getCycle()%2];

    id6441out_output = id6441in_input;
  }
  { // Node ID: 6443 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6443in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6443in_option0 = in_vars.id6442out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6443in_option1 = id6441out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6443x_1;

    switch((id6443in_sel.getValueAsLong())) {
      case 0l:
        id6443x_1 = id6443in_option0;
        break;
      case 1l:
        id6443x_1 = id6443in_option1;
        break;
      default:
        id6443x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6443out_result[(getCycle()+1)%2] = (id6443x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6444out_output;

  { // Node ID: 6444 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6444in_input = id6443out_result[getCycle()%2];

    id6444out_output = id6444in_input;
  }
  { // Node ID: 6446 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6446in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6446in_option0 = in_vars.id6445out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6446in_option1 = id6444out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6446x_1;

    switch((id6446in_sel.getValueAsLong())) {
      case 0l:
        id6446x_1 = id6446in_option0;
        break;
      case 1l:
        id6446x_1 = id6446in_option1;
        break;
      default:
        id6446x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6446out_result[(getCycle()+1)%2] = (id6446x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6447out_output;

  { // Node ID: 6447 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6447in_input = id6446out_result[getCycle()%2];

    id6447out_output = id6447in_input;
  }
  { // Node ID: 6449 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6449in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6449in_option0 = in_vars.id6448out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6449in_option1 = id6447out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6449x_1;

    switch((id6449in_sel.getValueAsLong())) {
      case 0l:
        id6449x_1 = id6449in_option0;
        break;
      case 1l:
        id6449x_1 = id6449in_option1;
        break;
      default:
        id6449x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6449out_result[(getCycle()+1)%2] = (id6449x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6450out_output;

  { // Node ID: 6450 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6450in_input = id6449out_result[getCycle()%2];

    id6450out_output = id6450in_input;
  }
  { // Node ID: 6452 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6452in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6452in_option0 = in_vars.id6451out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6452in_option1 = id6450out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6452x_1;

    switch((id6452in_sel.getValueAsLong())) {
      case 0l:
        id6452x_1 = id6452in_option0;
        break;
      case 1l:
        id6452x_1 = id6452in_option1;
        break;
      default:
        id6452x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6452out_result[(getCycle()+1)%2] = (id6452x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6453out_output;

  { // Node ID: 6453 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6453in_input = id6452out_result[getCycle()%2];

    id6453out_output = id6453in_input;
  }
  { // Node ID: 6455 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6455in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6455in_option0 = in_vars.id6454out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6455in_option1 = id6453out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6455x_1;

    switch((id6455in_sel.getValueAsLong())) {
      case 0l:
        id6455x_1 = id6455in_option0;
        break;
      case 1l:
        id6455x_1 = id6455in_option1;
        break;
      default:
        id6455x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6455out_result[(getCycle()+1)%2] = (id6455x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6456out_output;

  { // Node ID: 6456 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6456in_input = id6455out_result[getCycle()%2];

    id6456out_output = id6456in_input;
  }
  { // Node ID: 6458 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6458in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6458in_option0 = in_vars.id6457out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6458in_option1 = id6456out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6458x_1;

    switch((id6458in_sel.getValueAsLong())) {
      case 0l:
        id6458x_1 = id6458in_option0;
        break;
      case 1l:
        id6458x_1 = id6458in_option1;
        break;
      default:
        id6458x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6458out_result[(getCycle()+1)%2] = (id6458x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6459out_output;

  { // Node ID: 6459 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6459in_input = id6458out_result[getCycle()%2];

    id6459out_output = id6459in_input;
  }
  { // Node ID: 6461 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6461in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6461in_option0 = in_vars.id6460out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6461in_option1 = id6459out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6461x_1;

    switch((id6461in_sel.getValueAsLong())) {
      case 0l:
        id6461x_1 = id6461in_option0;
        break;
      case 1l:
        id6461x_1 = id6461in_option1;
        break;
      default:
        id6461x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6461out_result[(getCycle()+1)%2] = (id6461x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6462out_output;

  { // Node ID: 6462 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6462in_input = id6461out_result[getCycle()%2];

    id6462out_output = id6462in_input;
  }
  { // Node ID: 6464 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6464in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6464in_option0 = in_vars.id6463out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6464in_option1 = id6462out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6464x_1;

    switch((id6464in_sel.getValueAsLong())) {
      case 0l:
        id6464x_1 = id6464in_option0;
        break;
      case 1l:
        id6464x_1 = id6464in_option1;
        break;
      default:
        id6464x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6464out_result[(getCycle()+1)%2] = (id6464x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6465out_output;

  { // Node ID: 6465 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6465in_input = id6464out_result[getCycle()%2];

    id6465out_output = id6465in_input;
  }
  { // Node ID: 6467 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6467in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6467in_option0 = in_vars.id6466out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6467in_option1 = id6465out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6467x_1;

    switch((id6467in_sel.getValueAsLong())) {
      case 0l:
        id6467x_1 = id6467in_option0;
        break;
      case 1l:
        id6467x_1 = id6467in_option1;
        break;
      default:
        id6467x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6467out_result[(getCycle()+1)%2] = (id6467x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6468out_output;

  { // Node ID: 6468 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6468in_input = id6467out_result[getCycle()%2];

    id6468out_output = id6468in_input;
  }
  { // Node ID: 6470 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6470in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6470in_option0 = in_vars.id6469out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6470in_option1 = id6468out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6470x_1;

    switch((id6470in_sel.getValueAsLong())) {
      case 0l:
        id6470x_1 = id6470in_option0;
        break;
      case 1l:
        id6470x_1 = id6470in_option1;
        break;
      default:
        id6470x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6470out_result[(getCycle()+1)%2] = (id6470x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6471out_output;

  { // Node ID: 6471 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6471in_input = id6470out_result[getCycle()%2];

    id6471out_output = id6471in_input;
  }
  { // Node ID: 6473 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6473in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6473in_option0 = in_vars.id6472out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6473in_option1 = id6471out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6473x_1;

    switch((id6473in_sel.getValueAsLong())) {
      case 0l:
        id6473x_1 = id6473in_option0;
        break;
      case 1l:
        id6473x_1 = id6473in_option1;
        break;
      default:
        id6473x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6473out_result[(getCycle()+1)%2] = (id6473x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6474out_output;

  { // Node ID: 6474 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6474in_input = id6473out_result[getCycle()%2];

    id6474out_output = id6474in_input;
  }
  { // Node ID: 6476 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6476in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6476in_option0 = in_vars.id6475out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6476in_option1 = id6474out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6476x_1;

    switch((id6476in_sel.getValueAsLong())) {
      case 0l:
        id6476x_1 = id6476in_option0;
        break;
      case 1l:
        id6476x_1 = id6476in_option1;
        break;
      default:
        id6476x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6476out_result[(getCycle()+1)%2] = (id6476x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6477out_output;

  { // Node ID: 6477 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6477in_input = id6476out_result[getCycle()%2];

    id6477out_output = id6477in_input;
  }
  { // Node ID: 6479 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6479in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6479in_option0 = in_vars.id6478out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6479in_option1 = id6477out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6479x_1;

    switch((id6479in_sel.getValueAsLong())) {
      case 0l:
        id6479x_1 = id6479in_option0;
        break;
      case 1l:
        id6479x_1 = id6479in_option1;
        break;
      default:
        id6479x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6479out_result[(getCycle()+1)%2] = (id6479x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6480out_output;

  { // Node ID: 6480 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6480in_input = id6479out_result[getCycle()%2];

    id6480out_output = id6480in_input;
  }
  { // Node ID: 6482 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6482in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6482in_option0 = in_vars.id6481out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6482in_option1 = id6480out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6482x_1;

    switch((id6482in_sel.getValueAsLong())) {
      case 0l:
        id6482x_1 = id6482in_option0;
        break;
      case 1l:
        id6482x_1 = id6482in_option1;
        break;
      default:
        id6482x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6482out_result[(getCycle()+1)%2] = (id6482x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6483out_output;

  { // Node ID: 6483 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6483in_input = id6482out_result[getCycle()%2];

    id6483out_output = id6483in_input;
  }
  { // Node ID: 6485 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6485in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6485in_option0 = in_vars.id6484out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6485in_option1 = id6483out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6485x_1;

    switch((id6485in_sel.getValueAsLong())) {
      case 0l:
        id6485x_1 = id6485in_option0;
        break;
      case 1l:
        id6485x_1 = id6485in_option1;
        break;
      default:
        id6485x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6485out_result[(getCycle()+1)%2] = (id6485x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6486out_output;

  { // Node ID: 6486 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6486in_input = id6485out_result[getCycle()%2];

    id6486out_output = id6486in_input;
  }
  { // Node ID: 6488 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6488in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6488in_option0 = in_vars.id6487out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6488in_option1 = id6486out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6488x_1;

    switch((id6488in_sel.getValueAsLong())) {
      case 0l:
        id6488x_1 = id6488in_option0;
        break;
      case 1l:
        id6488x_1 = id6488in_option1;
        break;
      default:
        id6488x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6488out_result[(getCycle()+1)%2] = (id6488x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6489out_output;

  { // Node ID: 6489 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6489in_input = id6488out_result[getCycle()%2];

    id6489out_output = id6489in_input;
  }
  { // Node ID: 6491 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6491in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6491in_option0 = in_vars.id6490out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6491in_option1 = id6489out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6491x_1;

    switch((id6491in_sel.getValueAsLong())) {
      case 0l:
        id6491x_1 = id6491in_option0;
        break;
      case 1l:
        id6491x_1 = id6491in_option1;
        break;
      default:
        id6491x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6491out_result[(getCycle()+1)%2] = (id6491x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6492out_output;

  { // Node ID: 6492 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6492in_input = id6491out_result[getCycle()%2];

    id6492out_output = id6492in_input;
  }
  { // Node ID: 6494 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6494in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6494in_option0 = in_vars.id6493out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6494in_option1 = id6492out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6494x_1;

    switch((id6494in_sel.getValueAsLong())) {
      case 0l:
        id6494x_1 = id6494in_option0;
        break;
      case 1l:
        id6494x_1 = id6494in_option1;
        break;
      default:
        id6494x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6494out_result[(getCycle()+1)%2] = (id6494x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6495out_output;

  { // Node ID: 6495 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6495in_input = id6494out_result[getCycle()%2];

    id6495out_output = id6495in_input;
  }
  { // Node ID: 6497 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6497in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6497in_option0 = in_vars.id6496out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6497in_option1 = id6495out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6497x_1;

    switch((id6497in_sel.getValueAsLong())) {
      case 0l:
        id6497x_1 = id6497in_option0;
        break;
      case 1l:
        id6497x_1 = id6497in_option1;
        break;
      default:
        id6497x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6497out_result[(getCycle()+1)%2] = (id6497x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6498out_output;

  { // Node ID: 6498 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6498in_input = id6497out_result[getCycle()%2];

    id6498out_output = id6498in_input;
  }
  { // Node ID: 6500 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6500in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6500in_option0 = in_vars.id6499out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6500in_option1 = id6498out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6500x_1;

    switch((id6500in_sel.getValueAsLong())) {
      case 0l:
        id6500x_1 = id6500in_option0;
        break;
      case 1l:
        id6500x_1 = id6500in_option1;
        break;
      default:
        id6500x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6500out_result[(getCycle()+1)%2] = (id6500x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6501out_output;

  { // Node ID: 6501 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6501in_input = id6500out_result[getCycle()%2];

    id6501out_output = id6501in_input;
  }
  { // Node ID: 6503 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6503in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6503in_option0 = in_vars.id6502out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6503in_option1 = id6501out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6503x_1;

    switch((id6503in_sel.getValueAsLong())) {
      case 0l:
        id6503x_1 = id6503in_option0;
        break;
      case 1l:
        id6503x_1 = id6503in_option1;
        break;
      default:
        id6503x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6503out_result[(getCycle()+1)%2] = (id6503x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6504out_output;

  { // Node ID: 6504 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6504in_input = id6503out_result[getCycle()%2];

    id6504out_output = id6504in_input;
  }
  { // Node ID: 6506 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6506in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6506in_option0 = in_vars.id6505out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6506in_option1 = id6504out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6506x_1;

    switch((id6506in_sel.getValueAsLong())) {
      case 0l:
        id6506x_1 = id6506in_option0;
        break;
      case 1l:
        id6506x_1 = id6506in_option1;
        break;
      default:
        id6506x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6506out_result[(getCycle()+1)%2] = (id6506x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6507out_output;

  { // Node ID: 6507 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6507in_input = id6506out_result[getCycle()%2];

    id6507out_output = id6507in_input;
  }
  { // Node ID: 6509 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6509in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6509in_option0 = in_vars.id6508out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6509in_option1 = id6507out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6509x_1;

    switch((id6509in_sel.getValueAsLong())) {
      case 0l:
        id6509x_1 = id6509in_option0;
        break;
      case 1l:
        id6509x_1 = id6509in_option1;
        break;
      default:
        id6509x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6509out_result[(getCycle()+1)%2] = (id6509x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6510out_output;

  { // Node ID: 6510 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6510in_input = id6509out_result[getCycle()%2];

    id6510out_output = id6510in_input;
  }
  { // Node ID: 6512 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6512in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6512in_option0 = in_vars.id6511out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6512in_option1 = id6510out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6512x_1;

    switch((id6512in_sel.getValueAsLong())) {
      case 0l:
        id6512x_1 = id6512in_option0;
        break;
      case 1l:
        id6512x_1 = id6512in_option1;
        break;
      default:
        id6512x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6512out_result[(getCycle()+1)%2] = (id6512x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6513out_output;

  { // Node ID: 6513 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6513in_input = id6512out_result[getCycle()%2];

    id6513out_output = id6513in_input;
  }
  { // Node ID: 6515 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6515in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6515in_option0 = in_vars.id6514out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6515in_option1 = id6513out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6515x_1;

    switch((id6515in_sel.getValueAsLong())) {
      case 0l:
        id6515x_1 = id6515in_option0;
        break;
      case 1l:
        id6515x_1 = id6515in_option1;
        break;
      default:
        id6515x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6515out_result[(getCycle()+1)%2] = (id6515x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6516out_output;

  { // Node ID: 6516 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6516in_input = id6515out_result[getCycle()%2];

    id6516out_output = id6516in_input;
  }
  { // Node ID: 6518 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6518in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6518in_option0 = in_vars.id6517out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6518in_option1 = id6516out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6518x_1;

    switch((id6518in_sel.getValueAsLong())) {
      case 0l:
        id6518x_1 = id6518in_option0;
        break;
      case 1l:
        id6518x_1 = id6518in_option1;
        break;
      default:
        id6518x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6518out_result[(getCycle()+1)%2] = (id6518x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6519out_output;

  { // Node ID: 6519 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6519in_input = id6518out_result[getCycle()%2];

    id6519out_output = id6519in_input;
  }
  { // Node ID: 6521 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6521in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6521in_option0 = in_vars.id6520out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6521in_option1 = id6519out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6521x_1;

    switch((id6521in_sel.getValueAsLong())) {
      case 0l:
        id6521x_1 = id6521in_option0;
        break;
      case 1l:
        id6521x_1 = id6521in_option1;
        break;
      default:
        id6521x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6521out_result[(getCycle()+1)%2] = (id6521x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6522out_output;

  { // Node ID: 6522 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6522in_input = id6521out_result[getCycle()%2];

    id6522out_output = id6522in_input;
  }
  { // Node ID: 6524 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6524in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6524in_option0 = in_vars.id6523out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6524in_option1 = id6522out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6524x_1;

    switch((id6524in_sel.getValueAsLong())) {
      case 0l:
        id6524x_1 = id6524in_option0;
        break;
      case 1l:
        id6524x_1 = id6524in_option1;
        break;
      default:
        id6524x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6524out_result[(getCycle()+1)%2] = (id6524x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6525out_output;

  { // Node ID: 6525 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6525in_input = id6524out_result[getCycle()%2];

    id6525out_output = id6525in_input;
  }
  { // Node ID: 6527 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6527in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6527in_option0 = in_vars.id6526out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6527in_option1 = id6525out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6527x_1;

    switch((id6527in_sel.getValueAsLong())) {
      case 0l:
        id6527x_1 = id6527in_option0;
        break;
      case 1l:
        id6527x_1 = id6527in_option1;
        break;
      default:
        id6527x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6527out_result[(getCycle()+1)%2] = (id6527x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6528out_output;

  { // Node ID: 6528 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6528in_input = id6527out_result[getCycle()%2];

    id6528out_output = id6528in_input;
  }
  { // Node ID: 6530 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6530in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6530in_option0 = in_vars.id6529out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6530in_option1 = id6528out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6530x_1;

    switch((id6530in_sel.getValueAsLong())) {
      case 0l:
        id6530x_1 = id6530in_option0;
        break;
      case 1l:
        id6530x_1 = id6530in_option1;
        break;
      default:
        id6530x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6530out_result[(getCycle()+1)%2] = (id6530x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6531out_output;

  { // Node ID: 6531 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6531in_input = id6530out_result[getCycle()%2];

    id6531out_output = id6531in_input;
  }
  { // Node ID: 6533 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6533in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6533in_option0 = in_vars.id6532out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6533in_option1 = id6531out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6533x_1;

    switch((id6533in_sel.getValueAsLong())) {
      case 0l:
        id6533x_1 = id6533in_option0;
        break;
      case 1l:
        id6533x_1 = id6533in_option1;
        break;
      default:
        id6533x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6533out_result[(getCycle()+1)%2] = (id6533x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6534out_output;

  { // Node ID: 6534 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6534in_input = id6533out_result[getCycle()%2];

    id6534out_output = id6534in_input;
  }
  { // Node ID: 6536 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6536in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6536in_option0 = in_vars.id6535out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6536in_option1 = id6534out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6536x_1;

    switch((id6536in_sel.getValueAsLong())) {
      case 0l:
        id6536x_1 = id6536in_option0;
        break;
      case 1l:
        id6536x_1 = id6536in_option1;
        break;
      default:
        id6536x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6536out_result[(getCycle()+1)%2] = (id6536x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6537out_output;

  { // Node ID: 6537 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6537in_input = id6536out_result[getCycle()%2];

    id6537out_output = id6537in_input;
  }
  { // Node ID: 6539 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6539in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6539in_option0 = in_vars.id6538out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6539in_option1 = id6537out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6539x_1;

    switch((id6539in_sel.getValueAsLong())) {
      case 0l:
        id6539x_1 = id6539in_option0;
        break;
      case 1l:
        id6539x_1 = id6539in_option1;
        break;
      default:
        id6539x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6539out_result[(getCycle()+1)%2] = (id6539x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6540out_output;

  { // Node ID: 6540 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6540in_input = id6539out_result[getCycle()%2];

    id6540out_output = id6540in_input;
  }
  { // Node ID: 6542 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6542in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6542in_option0 = in_vars.id6541out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6542in_option1 = id6540out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6542x_1;

    switch((id6542in_sel.getValueAsLong())) {
      case 0l:
        id6542x_1 = id6542in_option0;
        break;
      case 1l:
        id6542x_1 = id6542in_option1;
        break;
      default:
        id6542x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6542out_result[(getCycle()+1)%2] = (id6542x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6543out_output;

  { // Node ID: 6543 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6543in_input = id6542out_result[getCycle()%2];

    id6543out_output = id6543in_input;
  }
  { // Node ID: 6545 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6545in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6545in_option0 = in_vars.id6544out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6545in_option1 = id6543out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6545x_1;

    switch((id6545in_sel.getValueAsLong())) {
      case 0l:
        id6545x_1 = id6545in_option0;
        break;
      case 1l:
        id6545x_1 = id6545in_option1;
        break;
      default:
        id6545x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6545out_result[(getCycle()+1)%2] = (id6545x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6546out_output;

  { // Node ID: 6546 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6546in_input = id6545out_result[getCycle()%2];

    id6546out_output = id6546in_input;
  }
  { // Node ID: 6548 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6548in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6548in_option0 = in_vars.id6547out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6548in_option1 = id6546out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6548x_1;

    switch((id6548in_sel.getValueAsLong())) {
      case 0l:
        id6548x_1 = id6548in_option0;
        break;
      case 1l:
        id6548x_1 = id6548in_option1;
        break;
      default:
        id6548x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6548out_result[(getCycle()+1)%2] = (id6548x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6549out_output;

  { // Node ID: 6549 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6549in_input = id6548out_result[getCycle()%2];

    id6549out_output = id6549in_input;
  }
  { // Node ID: 6551 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6551in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6551in_option0 = in_vars.id6550out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6551in_option1 = id6549out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6551x_1;

    switch((id6551in_sel.getValueAsLong())) {
      case 0l:
        id6551x_1 = id6551in_option0;
        break;
      case 1l:
        id6551x_1 = id6551in_option1;
        break;
      default:
        id6551x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6551out_result[(getCycle()+1)%2] = (id6551x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6552out_output;

  { // Node ID: 6552 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6552in_input = id6551out_result[getCycle()%2];

    id6552out_output = id6552in_input;
  }
  { // Node ID: 6554 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6554in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6554in_option0 = in_vars.id6553out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6554in_option1 = id6552out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6554x_1;

    switch((id6554in_sel.getValueAsLong())) {
      case 0l:
        id6554x_1 = id6554in_option0;
        break;
      case 1l:
        id6554x_1 = id6554in_option1;
        break;
      default:
        id6554x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6554out_result[(getCycle()+1)%2] = (id6554x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6555out_output;

  { // Node ID: 6555 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6555in_input = id6554out_result[getCycle()%2];

    id6555out_output = id6555in_input;
  }
  { // Node ID: 6557 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6557in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6557in_option0 = in_vars.id6556out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6557in_option1 = id6555out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6557x_1;

    switch((id6557in_sel.getValueAsLong())) {
      case 0l:
        id6557x_1 = id6557in_option0;
        break;
      case 1l:
        id6557x_1 = id6557in_option1;
        break;
      default:
        id6557x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6557out_result[(getCycle()+1)%2] = (id6557x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6558out_output;

  { // Node ID: 6558 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6558in_input = id6557out_result[getCycle()%2];

    id6558out_output = id6558in_input;
  }
  { // Node ID: 6560 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6560in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6560in_option0 = in_vars.id6559out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6560in_option1 = id6558out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6560x_1;

    switch((id6560in_sel.getValueAsLong())) {
      case 0l:
        id6560x_1 = id6560in_option0;
        break;
      case 1l:
        id6560x_1 = id6560in_option1;
        break;
      default:
        id6560x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6560out_result[(getCycle()+1)%2] = (id6560x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6561out_output;

  { // Node ID: 6561 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6561in_input = id6560out_result[getCycle()%2];

    id6561out_output = id6561in_input;
  }
  { // Node ID: 6563 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6563in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6563in_option0 = in_vars.id6562out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6563in_option1 = id6561out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6563x_1;

    switch((id6563in_sel.getValueAsLong())) {
      case 0l:
        id6563x_1 = id6563in_option0;
        break;
      case 1l:
        id6563x_1 = id6563in_option1;
        break;
      default:
        id6563x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6563out_result[(getCycle()+1)%2] = (id6563x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6564out_output;

  { // Node ID: 6564 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6564in_input = id6563out_result[getCycle()%2];

    id6564out_output = id6564in_input;
  }
  { // Node ID: 6566 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6566in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6566in_option0 = in_vars.id6565out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6566in_option1 = id6564out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6566x_1;

    switch((id6566in_sel.getValueAsLong())) {
      case 0l:
        id6566x_1 = id6566in_option0;
        break;
      case 1l:
        id6566x_1 = id6566in_option1;
        break;
      default:
        id6566x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6566out_result[(getCycle()+1)%2] = (id6566x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6567out_output;

  { // Node ID: 6567 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6567in_input = id6566out_result[getCycle()%2];

    id6567out_output = id6567in_input;
  }
  { // Node ID: 6569 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6569in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6569in_option0 = in_vars.id6568out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6569in_option1 = id6567out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6569x_1;

    switch((id6569in_sel.getValueAsLong())) {
      case 0l:
        id6569x_1 = id6569in_option0;
        break;
      case 1l:
        id6569x_1 = id6569in_option1;
        break;
      default:
        id6569x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6569out_result[(getCycle()+1)%2] = (id6569x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6570out_output;

  { // Node ID: 6570 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6570in_input = id6569out_result[getCycle()%2];

    id6570out_output = id6570in_input;
  }
  { // Node ID: 6572 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6572in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6572in_option0 = in_vars.id6571out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6572in_option1 = id6570out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6572x_1;

    switch((id6572in_sel.getValueAsLong())) {
      case 0l:
        id6572x_1 = id6572in_option0;
        break;
      case 1l:
        id6572x_1 = id6572in_option1;
        break;
      default:
        id6572x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6572out_result[(getCycle()+1)%2] = (id6572x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6573out_output;

  { // Node ID: 6573 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6573in_input = id6572out_result[getCycle()%2];

    id6573out_output = id6573in_input;
  }
  { // Node ID: 6575 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6575in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6575in_option0 = in_vars.id6574out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6575in_option1 = id6573out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6575x_1;

    switch((id6575in_sel.getValueAsLong())) {
      case 0l:
        id6575x_1 = id6575in_option0;
        break;
      case 1l:
        id6575x_1 = id6575in_option1;
        break;
      default:
        id6575x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6575out_result[(getCycle()+1)%2] = (id6575x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6576out_output;

  { // Node ID: 6576 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6576in_input = id6575out_result[getCycle()%2];

    id6576out_output = id6576in_input;
  }
  { // Node ID: 6578 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6578in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6578in_option0 = in_vars.id6577out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6578in_option1 = id6576out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6578x_1;

    switch((id6578in_sel.getValueAsLong())) {
      case 0l:
        id6578x_1 = id6578in_option0;
        break;
      case 1l:
        id6578x_1 = id6578in_option1;
        break;
      default:
        id6578x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6578out_result[(getCycle()+1)%2] = (id6578x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6579out_output;

  { // Node ID: 6579 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6579in_input = id6578out_result[getCycle()%2];

    id6579out_output = id6579in_input;
  }
  { // Node ID: 6581 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6581in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6581in_option0 = in_vars.id6580out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6581in_option1 = id6579out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6581x_1;

    switch((id6581in_sel.getValueAsLong())) {
      case 0l:
        id6581x_1 = id6581in_option0;
        break;
      case 1l:
        id6581x_1 = id6581in_option1;
        break;
      default:
        id6581x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6581out_result[(getCycle()+1)%2] = (id6581x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6582out_output;

  { // Node ID: 6582 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6582in_input = id6581out_result[getCycle()%2];

    id6582out_output = id6582in_input;
  }
  { // Node ID: 6584 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6584in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6584in_option0 = in_vars.id6583out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6584in_option1 = id6582out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6584x_1;

    switch((id6584in_sel.getValueAsLong())) {
      case 0l:
        id6584x_1 = id6584in_option0;
        break;
      case 1l:
        id6584x_1 = id6584in_option1;
        break;
      default:
        id6584x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6584out_result[(getCycle()+1)%2] = (id6584x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6585out_output;

  { // Node ID: 6585 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6585in_input = id6584out_result[getCycle()%2];

    id6585out_output = id6585in_input;
  }
  { // Node ID: 6587 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6587in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6587in_option0 = in_vars.id6586out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6587in_option1 = id6585out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6587x_1;

    switch((id6587in_sel.getValueAsLong())) {
      case 0l:
        id6587x_1 = id6587in_option0;
        break;
      case 1l:
        id6587x_1 = id6587in_option1;
        break;
      default:
        id6587x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6587out_result[(getCycle()+1)%2] = (id6587x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6588out_output;

  { // Node ID: 6588 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6588in_input = id6587out_result[getCycle()%2];

    id6588out_output = id6588in_input;
  }
  { // Node ID: 6590 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6590in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6590in_option0 = in_vars.id6589out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6590in_option1 = id6588out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6590x_1;

    switch((id6590in_sel.getValueAsLong())) {
      case 0l:
        id6590x_1 = id6590in_option0;
        break;
      case 1l:
        id6590x_1 = id6590in_option1;
        break;
      default:
        id6590x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6590out_result[(getCycle()+1)%2] = (id6590x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6591out_output;

  { // Node ID: 6591 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6591in_input = id6590out_result[getCycle()%2];

    id6591out_output = id6591in_input;
  }
  { // Node ID: 6593 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6593in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6593in_option0 = in_vars.id6592out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6593in_option1 = id6591out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6593x_1;

    switch((id6593in_sel.getValueAsLong())) {
      case 0l:
        id6593x_1 = id6593in_option0;
        break;
      case 1l:
        id6593x_1 = id6593in_option1;
        break;
      default:
        id6593x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6593out_result[(getCycle()+1)%2] = (id6593x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6594out_output;

  { // Node ID: 6594 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6594in_input = id6593out_result[getCycle()%2];

    id6594out_output = id6594in_input;
  }
  { // Node ID: 6596 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6596in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6596in_option0 = in_vars.id6595out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6596in_option1 = id6594out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6596x_1;

    switch((id6596in_sel.getValueAsLong())) {
      case 0l:
        id6596x_1 = id6596in_option0;
        break;
      case 1l:
        id6596x_1 = id6596in_option1;
        break;
      default:
        id6596x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6596out_result[(getCycle()+1)%2] = (id6596x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6597out_output;

  { // Node ID: 6597 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6597in_input = id6596out_result[getCycle()%2];

    id6597out_output = id6597in_input;
  }
  { // Node ID: 6599 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6599in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6599in_option0 = in_vars.id6598out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6599in_option1 = id6597out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6599x_1;

    switch((id6599in_sel.getValueAsLong())) {
      case 0l:
        id6599x_1 = id6599in_option0;
        break;
      case 1l:
        id6599x_1 = id6599in_option1;
        break;
      default:
        id6599x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6599out_result[(getCycle()+1)%2] = (id6599x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6600out_output;

  { // Node ID: 6600 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6600in_input = id6599out_result[getCycle()%2];

    id6600out_output = id6600in_input;
  }
  { // Node ID: 6602 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6602in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6602in_option0 = in_vars.id6601out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6602in_option1 = id6600out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6602x_1;

    switch((id6602in_sel.getValueAsLong())) {
      case 0l:
        id6602x_1 = id6602in_option0;
        break;
      case 1l:
        id6602x_1 = id6602in_option1;
        break;
      default:
        id6602x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6602out_result[(getCycle()+1)%2] = (id6602x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6603out_output;

  { // Node ID: 6603 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6603in_input = id6602out_result[getCycle()%2];

    id6603out_output = id6603in_input;
  }
  { // Node ID: 6605 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6605in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6605in_option0 = in_vars.id6604out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6605in_option1 = id6603out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6605x_1;

    switch((id6605in_sel.getValueAsLong())) {
      case 0l:
        id6605x_1 = id6605in_option0;
        break;
      case 1l:
        id6605x_1 = id6605in_option1;
        break;
      default:
        id6605x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6605out_result[(getCycle()+1)%2] = (id6605x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6606out_output;

  { // Node ID: 6606 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6606in_input = id6605out_result[getCycle()%2];

    id6606out_output = id6606in_input;
  }
  { // Node ID: 6608 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6608in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6608in_option0 = in_vars.id6607out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6608in_option1 = id6606out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6608x_1;

    switch((id6608in_sel.getValueAsLong())) {
      case 0l:
        id6608x_1 = id6608in_option0;
        break;
      case 1l:
        id6608x_1 = id6608in_option1;
        break;
      default:
        id6608x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6608out_result[(getCycle()+1)%2] = (id6608x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6609out_output;

  { // Node ID: 6609 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6609in_input = id6608out_result[getCycle()%2];

    id6609out_output = id6609in_input;
  }
  { // Node ID: 6611 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6611in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6611in_option0 = in_vars.id6610out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6611in_option1 = id6609out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6611x_1;

    switch((id6611in_sel.getValueAsLong())) {
      case 0l:
        id6611x_1 = id6611in_option0;
        break;
      case 1l:
        id6611x_1 = id6611in_option1;
        break;
      default:
        id6611x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6611out_result[(getCycle()+1)%2] = (id6611x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6612out_output;

  { // Node ID: 6612 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6612in_input = id6611out_result[getCycle()%2];

    id6612out_output = id6612in_input;
  }
  { // Node ID: 6614 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6614in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6614in_option0 = in_vars.id6613out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6614in_option1 = id6612out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6614x_1;

    switch((id6614in_sel.getValueAsLong())) {
      case 0l:
        id6614x_1 = id6614in_option0;
        break;
      case 1l:
        id6614x_1 = id6614in_option1;
        break;
      default:
        id6614x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6614out_result[(getCycle()+1)%2] = (id6614x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6615out_output;

  { // Node ID: 6615 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6615in_input = id6614out_result[getCycle()%2];

    id6615out_output = id6615in_input;
  }
  { // Node ID: 6617 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6617in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6617in_option0 = in_vars.id6616out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6617in_option1 = id6615out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6617x_1;

    switch((id6617in_sel.getValueAsLong())) {
      case 0l:
        id6617x_1 = id6617in_option0;
        break;
      case 1l:
        id6617x_1 = id6617in_option1;
        break;
      default:
        id6617x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6617out_result[(getCycle()+1)%2] = (id6617x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6618out_output;

  { // Node ID: 6618 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6618in_input = id6617out_result[getCycle()%2];

    id6618out_output = id6618in_input;
  }
  { // Node ID: 6620 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6620in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6620in_option0 = in_vars.id6619out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6620in_option1 = id6618out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6620x_1;

    switch((id6620in_sel.getValueAsLong())) {
      case 0l:
        id6620x_1 = id6620in_option0;
        break;
      case 1l:
        id6620x_1 = id6620in_option1;
        break;
      default:
        id6620x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6620out_result[(getCycle()+1)%2] = (id6620x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6621out_output;

  { // Node ID: 6621 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6621in_input = id6620out_result[getCycle()%2];

    id6621out_output = id6621in_input;
  }
  { // Node ID: 6623 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6623in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6623in_option0 = in_vars.id6622out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6623in_option1 = id6621out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6623x_1;

    switch((id6623in_sel.getValueAsLong())) {
      case 0l:
        id6623x_1 = id6623in_option0;
        break;
      case 1l:
        id6623x_1 = id6623in_option1;
        break;
      default:
        id6623x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6623out_result[(getCycle()+1)%2] = (id6623x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6624out_output;

  { // Node ID: 6624 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6624in_input = id6623out_result[getCycle()%2];

    id6624out_output = id6624in_input;
  }
  { // Node ID: 6626 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6626in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6626in_option0 = in_vars.id6625out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6626in_option1 = id6624out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6626x_1;

    switch((id6626in_sel.getValueAsLong())) {
      case 0l:
        id6626x_1 = id6626in_option0;
        break;
      case 1l:
        id6626x_1 = id6626in_option1;
        break;
      default:
        id6626x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6626out_result[(getCycle()+1)%2] = (id6626x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6627out_output;

  { // Node ID: 6627 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6627in_input = id6626out_result[getCycle()%2];

    id6627out_output = id6627in_input;
  }
  { // Node ID: 6629 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6629in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6629in_option0 = in_vars.id6628out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6629in_option1 = id6627out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6629x_1;

    switch((id6629in_sel.getValueAsLong())) {
      case 0l:
        id6629x_1 = id6629in_option0;
        break;
      case 1l:
        id6629x_1 = id6629in_option1;
        break;
      default:
        id6629x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6629out_result[(getCycle()+1)%2] = (id6629x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6630out_output;

  { // Node ID: 6630 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6630in_input = id6629out_result[getCycle()%2];

    id6630out_output = id6630in_input;
  }
  { // Node ID: 6632 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6632in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6632in_option0 = in_vars.id6631out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6632in_option1 = id6630out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6632x_1;

    switch((id6632in_sel.getValueAsLong())) {
      case 0l:
        id6632x_1 = id6632in_option0;
        break;
      case 1l:
        id6632x_1 = id6632in_option1;
        break;
      default:
        id6632x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6632out_result[(getCycle()+1)%2] = (id6632x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6633out_output;

  { // Node ID: 6633 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6633in_input = id6632out_result[getCycle()%2];

    id6633out_output = id6633in_input;
  }
  { // Node ID: 6635 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6635in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6635in_option0 = in_vars.id6634out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6635in_option1 = id6633out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6635x_1;

    switch((id6635in_sel.getValueAsLong())) {
      case 0l:
        id6635x_1 = id6635in_option0;
        break;
      case 1l:
        id6635x_1 = id6635in_option1;
        break;
      default:
        id6635x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6635out_result[(getCycle()+1)%2] = (id6635x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6636out_output;

  { // Node ID: 6636 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6636in_input = id6635out_result[getCycle()%2];

    id6636out_output = id6636in_input;
  }
  { // Node ID: 6638 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6638in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6638in_option0 = in_vars.id6637out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6638in_option1 = id6636out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6638x_1;

    switch((id6638in_sel.getValueAsLong())) {
      case 0l:
        id6638x_1 = id6638in_option0;
        break;
      case 1l:
        id6638x_1 = id6638in_option1;
        break;
      default:
        id6638x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6638out_result[(getCycle()+1)%2] = (id6638x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6639out_output;

  { // Node ID: 6639 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6639in_input = id6638out_result[getCycle()%2];

    id6639out_output = id6639in_input;
  }
  { // Node ID: 6641 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6641in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6641in_option0 = in_vars.id6640out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6641in_option1 = id6639out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6641x_1;

    switch((id6641in_sel.getValueAsLong())) {
      case 0l:
        id6641x_1 = id6641in_option0;
        break;
      case 1l:
        id6641x_1 = id6641in_option1;
        break;
      default:
        id6641x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6641out_result[(getCycle()+1)%2] = (id6641x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6642out_output;

  { // Node ID: 6642 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6642in_input = id6641out_result[getCycle()%2];

    id6642out_output = id6642in_input;
  }
  { // Node ID: 6644 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6644in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6644in_option0 = in_vars.id6643out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6644in_option1 = id6642out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6644x_1;

    switch((id6644in_sel.getValueAsLong())) {
      case 0l:
        id6644x_1 = id6644in_option0;
        break;
      case 1l:
        id6644x_1 = id6644in_option1;
        break;
      default:
        id6644x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6644out_result[(getCycle()+1)%2] = (id6644x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6645out_output;

  { // Node ID: 6645 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6645in_input = id6644out_result[getCycle()%2];

    id6645out_output = id6645in_input;
  }
  { // Node ID: 6647 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6647in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6647in_option0 = in_vars.id6646out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6647in_option1 = id6645out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6647x_1;

    switch((id6647in_sel.getValueAsLong())) {
      case 0l:
        id6647x_1 = id6647in_option0;
        break;
      case 1l:
        id6647x_1 = id6647in_option1;
        break;
      default:
        id6647x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6647out_result[(getCycle()+1)%2] = (id6647x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6648out_output;

  { // Node ID: 6648 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6648in_input = id6647out_result[getCycle()%2];

    id6648out_output = id6648in_input;
  }
  { // Node ID: 6650 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6650in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6650in_option0 = in_vars.id6649out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6650in_option1 = id6648out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6650x_1;

    switch((id6650in_sel.getValueAsLong())) {
      case 0l:
        id6650x_1 = id6650in_option0;
        break;
      case 1l:
        id6650x_1 = id6650in_option1;
        break;
      default:
        id6650x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6650out_result[(getCycle()+1)%2] = (id6650x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6651out_output;

  { // Node ID: 6651 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6651in_input = id6650out_result[getCycle()%2];

    id6651out_output = id6651in_input;
  }
  { // Node ID: 6653 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6653in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6653in_option0 = in_vars.id6652out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6653in_option1 = id6651out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6653x_1;

    switch((id6653in_sel.getValueAsLong())) {
      case 0l:
        id6653x_1 = id6653in_option0;
        break;
      case 1l:
        id6653x_1 = id6653in_option1;
        break;
      default:
        id6653x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6653out_result[(getCycle()+1)%2] = (id6653x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6654out_output;

  { // Node ID: 6654 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6654in_input = id6653out_result[getCycle()%2];

    id6654out_output = id6654in_input;
  }
  { // Node ID: 6656 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6656in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6656in_option0 = in_vars.id6655out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6656in_option1 = id6654out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6656x_1;

    switch((id6656in_sel.getValueAsLong())) {
      case 0l:
        id6656x_1 = id6656in_option0;
        break;
      case 1l:
        id6656x_1 = id6656in_option1;
        break;
      default:
        id6656x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6656out_result[(getCycle()+1)%2] = (id6656x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6657out_output;

  { // Node ID: 6657 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6657in_input = id6656out_result[getCycle()%2];

    id6657out_output = id6657in_input;
  }
  { // Node ID: 6659 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6659in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6659in_option0 = in_vars.id6658out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6659in_option1 = id6657out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6659x_1;

    switch((id6659in_sel.getValueAsLong())) {
      case 0l:
        id6659x_1 = id6659in_option0;
        break;
      case 1l:
        id6659x_1 = id6659in_option1;
        break;
      default:
        id6659x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6659out_result[(getCycle()+1)%2] = (id6659x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6660out_output;

  { // Node ID: 6660 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6660in_input = id6659out_result[getCycle()%2];

    id6660out_output = id6660in_input;
  }
  { // Node ID: 6662 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6662in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6662in_option0 = in_vars.id6661out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6662in_option1 = id6660out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6662x_1;

    switch((id6662in_sel.getValueAsLong())) {
      case 0l:
        id6662x_1 = id6662in_option0;
        break;
      case 1l:
        id6662x_1 = id6662in_option1;
        break;
      default:
        id6662x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6662out_result[(getCycle()+1)%2] = (id6662x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6663out_output;

  { // Node ID: 6663 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6663in_input = id6662out_result[getCycle()%2];

    id6663out_output = id6663in_input;
  }
  { // Node ID: 6665 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6665in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6665in_option0 = in_vars.id6664out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6665in_option1 = id6663out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6665x_1;

    switch((id6665in_sel.getValueAsLong())) {
      case 0l:
        id6665x_1 = id6665in_option0;
        break;
      case 1l:
        id6665x_1 = id6665in_option1;
        break;
      default:
        id6665x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6665out_result[(getCycle()+1)%2] = (id6665x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6666out_output;

  { // Node ID: 6666 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6666in_input = id6665out_result[getCycle()%2];

    id6666out_output = id6666in_input;
  }
  { // Node ID: 6668 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6668in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6668in_option0 = in_vars.id6667out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6668in_option1 = id6666out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6668x_1;

    switch((id6668in_sel.getValueAsLong())) {
      case 0l:
        id6668x_1 = id6668in_option0;
        break;
      case 1l:
        id6668x_1 = id6668in_option1;
        break;
      default:
        id6668x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6668out_result[(getCycle()+1)%2] = (id6668x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6669out_output;

  { // Node ID: 6669 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6669in_input = id6668out_result[getCycle()%2];

    id6669out_output = id6669in_input;
  }
  { // Node ID: 6671 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6671in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6671in_option0 = in_vars.id6670out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6671in_option1 = id6669out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6671x_1;

    switch((id6671in_sel.getValueAsLong())) {
      case 0l:
        id6671x_1 = id6671in_option0;
        break;
      case 1l:
        id6671x_1 = id6671in_option1;
        break;
      default:
        id6671x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6671out_result[(getCycle()+1)%2] = (id6671x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6672out_output;

  { // Node ID: 6672 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6672in_input = id6671out_result[getCycle()%2];

    id6672out_output = id6672in_input;
  }
  { // Node ID: 6674 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6674in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6674in_option0 = in_vars.id6673out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6674in_option1 = id6672out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6674x_1;

    switch((id6674in_sel.getValueAsLong())) {
      case 0l:
        id6674x_1 = id6674in_option0;
        break;
      case 1l:
        id6674x_1 = id6674in_option1;
        break;
      default:
        id6674x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6674out_result[(getCycle()+1)%2] = (id6674x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6675out_output;

  { // Node ID: 6675 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6675in_input = id6674out_result[getCycle()%2];

    id6675out_output = id6675in_input;
  }
  { // Node ID: 6677 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6677in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6677in_option0 = in_vars.id6676out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6677in_option1 = id6675out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6677x_1;

    switch((id6677in_sel.getValueAsLong())) {
      case 0l:
        id6677x_1 = id6677in_option0;
        break;
      case 1l:
        id6677x_1 = id6677in_option1;
        break;
      default:
        id6677x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6677out_result[(getCycle()+1)%2] = (id6677x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6678out_output;

  { // Node ID: 6678 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6678in_input = id6677out_result[getCycle()%2];

    id6678out_output = id6678in_input;
  }
  { // Node ID: 6680 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6680in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6680in_option0 = in_vars.id6679out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6680in_option1 = id6678out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6680x_1;

    switch((id6680in_sel.getValueAsLong())) {
      case 0l:
        id6680x_1 = id6680in_option0;
        break;
      case 1l:
        id6680x_1 = id6680in_option1;
        break;
      default:
        id6680x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6680out_result[(getCycle()+1)%2] = (id6680x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6681out_output;

  { // Node ID: 6681 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6681in_input = id6680out_result[getCycle()%2];

    id6681out_output = id6681in_input;
  }
  { // Node ID: 6683 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6683in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6683in_option0 = in_vars.id6682out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6683in_option1 = id6681out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6683x_1;

    switch((id6683in_sel.getValueAsLong())) {
      case 0l:
        id6683x_1 = id6683in_option0;
        break;
      case 1l:
        id6683x_1 = id6683in_option1;
        break;
      default:
        id6683x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6683out_result[(getCycle()+1)%2] = (id6683x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6684out_output;

  { // Node ID: 6684 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6684in_input = id6683out_result[getCycle()%2];

    id6684out_output = id6684in_input;
  }
  { // Node ID: 6686 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6686in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6686in_option0 = in_vars.id6685out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6686in_option1 = id6684out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6686x_1;

    switch((id6686in_sel.getValueAsLong())) {
      case 0l:
        id6686x_1 = id6686in_option0;
        break;
      case 1l:
        id6686x_1 = id6686in_option1;
        break;
      default:
        id6686x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6686out_result[(getCycle()+1)%2] = (id6686x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6687out_output;

  { // Node ID: 6687 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6687in_input = id6686out_result[getCycle()%2];

    id6687out_output = id6687in_input;
  }
  { // Node ID: 6689 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6689in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6689in_option0 = in_vars.id6688out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6689in_option1 = id6687out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6689x_1;

    switch((id6689in_sel.getValueAsLong())) {
      case 0l:
        id6689x_1 = id6689in_option0;
        break;
      case 1l:
        id6689x_1 = id6689in_option1;
        break;
      default:
        id6689x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6689out_result[(getCycle()+1)%2] = (id6689x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6690out_output;

  { // Node ID: 6690 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6690in_input = id6689out_result[getCycle()%2];

    id6690out_output = id6690in_input;
  }
  { // Node ID: 6692 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6692in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6692in_option0 = in_vars.id6691out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6692in_option1 = id6690out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6692x_1;

    switch((id6692in_sel.getValueAsLong())) {
      case 0l:
        id6692x_1 = id6692in_option0;
        break;
      case 1l:
        id6692x_1 = id6692in_option1;
        break;
      default:
        id6692x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6692out_result[(getCycle()+1)%2] = (id6692x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6693out_output;

  { // Node ID: 6693 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6693in_input = id6692out_result[getCycle()%2];

    id6693out_output = id6693in_input;
  }
  { // Node ID: 6695 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6695in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6695in_option0 = in_vars.id6694out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6695in_option1 = id6693out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6695x_1;

    switch((id6695in_sel.getValueAsLong())) {
      case 0l:
        id6695x_1 = id6695in_option0;
        break;
      case 1l:
        id6695x_1 = id6695in_option1;
        break;
      default:
        id6695x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6695out_result[(getCycle()+1)%2] = (id6695x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6696out_output;

  { // Node ID: 6696 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6696in_input = id6695out_result[getCycle()%2];

    id6696out_output = id6696in_input;
  }
  { // Node ID: 6698 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6698in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6698in_option0 = in_vars.id6697out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6698in_option1 = id6696out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6698x_1;

    switch((id6698in_sel.getValueAsLong())) {
      case 0l:
        id6698x_1 = id6698in_option0;
        break;
      case 1l:
        id6698x_1 = id6698in_option1;
        break;
      default:
        id6698x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6698out_result[(getCycle()+1)%2] = (id6698x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6699out_output;

  { // Node ID: 6699 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6699in_input = id6698out_result[getCycle()%2];

    id6699out_output = id6699in_input;
  }
  { // Node ID: 6701 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6701in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6701in_option0 = in_vars.id6700out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6701in_option1 = id6699out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6701x_1;

    switch((id6701in_sel.getValueAsLong())) {
      case 0l:
        id6701x_1 = id6701in_option0;
        break;
      case 1l:
        id6701x_1 = id6701in_option1;
        break;
      default:
        id6701x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6701out_result[(getCycle()+1)%2] = (id6701x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6702out_output;

  { // Node ID: 6702 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6702in_input = id6701out_result[getCycle()%2];

    id6702out_output = id6702in_input;
  }
  { // Node ID: 6704 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6704in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6704in_option0 = in_vars.id6703out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6704in_option1 = id6702out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6704x_1;

    switch((id6704in_sel.getValueAsLong())) {
      case 0l:
        id6704x_1 = id6704in_option0;
        break;
      case 1l:
        id6704x_1 = id6704in_option1;
        break;
      default:
        id6704x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6704out_result[(getCycle()+1)%2] = (id6704x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6705out_output;

  { // Node ID: 6705 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6705in_input = id6704out_result[getCycle()%2];

    id6705out_output = id6705in_input;
  }
  { // Node ID: 6707 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6707in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6707in_option0 = in_vars.id6706out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6707in_option1 = id6705out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6707x_1;

    switch((id6707in_sel.getValueAsLong())) {
      case 0l:
        id6707x_1 = id6707in_option0;
        break;
      case 1l:
        id6707x_1 = id6707in_option1;
        break;
      default:
        id6707x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6707out_result[(getCycle()+1)%2] = (id6707x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6708out_output;

  { // Node ID: 6708 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6708in_input = id6707out_result[getCycle()%2];

    id6708out_output = id6708in_input;
  }
  { // Node ID: 6710 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6710in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6710in_option0 = in_vars.id6709out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6710in_option1 = id6708out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6710x_1;

    switch((id6710in_sel.getValueAsLong())) {
      case 0l:
        id6710x_1 = id6710in_option0;
        break;
      case 1l:
        id6710x_1 = id6710in_option1;
        break;
      default:
        id6710x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6710out_result[(getCycle()+1)%2] = (id6710x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6711out_output;

  { // Node ID: 6711 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6711in_input = id6710out_result[getCycle()%2];

    id6711out_output = id6711in_input;
  }
  { // Node ID: 6713 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6713in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6713in_option0 = in_vars.id6712out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6713in_option1 = id6711out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6713x_1;

    switch((id6713in_sel.getValueAsLong())) {
      case 0l:
        id6713x_1 = id6713in_option0;
        break;
      case 1l:
        id6713x_1 = id6713in_option1;
        break;
      default:
        id6713x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6713out_result[(getCycle()+1)%2] = (id6713x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6714out_output;

  { // Node ID: 6714 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6714in_input = id6713out_result[getCycle()%2];

    id6714out_output = id6714in_input;
  }
  { // Node ID: 6716 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6716in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6716in_option0 = in_vars.id6715out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6716in_option1 = id6714out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6716x_1;

    switch((id6716in_sel.getValueAsLong())) {
      case 0l:
        id6716x_1 = id6716in_option0;
        break;
      case 1l:
        id6716x_1 = id6716in_option1;
        break;
      default:
        id6716x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6716out_result[(getCycle()+1)%2] = (id6716x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6717out_output;

  { // Node ID: 6717 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6717in_input = id6716out_result[getCycle()%2];

    id6717out_output = id6717in_input;
  }
  { // Node ID: 6719 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6719in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6719in_option0 = in_vars.id6718out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6719in_option1 = id6717out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6719x_1;

    switch((id6719in_sel.getValueAsLong())) {
      case 0l:
        id6719x_1 = id6719in_option0;
        break;
      case 1l:
        id6719x_1 = id6719in_option1;
        break;
      default:
        id6719x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6719out_result[(getCycle()+1)%2] = (id6719x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6720out_output;

  { // Node ID: 6720 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6720in_input = id6719out_result[getCycle()%2];

    id6720out_output = id6720in_input;
  }
  { // Node ID: 6722 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6722in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6722in_option0 = in_vars.id6721out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6722in_option1 = id6720out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6722x_1;

    switch((id6722in_sel.getValueAsLong())) {
      case 0l:
        id6722x_1 = id6722in_option0;
        break;
      case 1l:
        id6722x_1 = id6722in_option1;
        break;
      default:
        id6722x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6722out_result[(getCycle()+1)%2] = (id6722x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6723out_output;

  { // Node ID: 6723 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6723in_input = id6722out_result[getCycle()%2];

    id6723out_output = id6723in_input;
  }
  { // Node ID: 6725 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6725in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6725in_option0 = in_vars.id6724out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6725in_option1 = id6723out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6725x_1;

    switch((id6725in_sel.getValueAsLong())) {
      case 0l:
        id6725x_1 = id6725in_option0;
        break;
      case 1l:
        id6725x_1 = id6725in_option1;
        break;
      default:
        id6725x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6725out_result[(getCycle()+1)%2] = (id6725x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6726out_output;

  { // Node ID: 6726 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6726in_input = id6725out_result[getCycle()%2];

    id6726out_output = id6726in_input;
  }
  { // Node ID: 6728 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6728in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6728in_option0 = in_vars.id6727out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6728in_option1 = id6726out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6728x_1;

    switch((id6728in_sel.getValueAsLong())) {
      case 0l:
        id6728x_1 = id6728in_option0;
        break;
      case 1l:
        id6728x_1 = id6728in_option1;
        break;
      default:
        id6728x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6728out_result[(getCycle()+1)%2] = (id6728x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6729out_output;

  { // Node ID: 6729 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6729in_input = id6728out_result[getCycle()%2];

    id6729out_output = id6729in_input;
  }
  { // Node ID: 6731 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6731in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6731in_option0 = in_vars.id6730out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6731in_option1 = id6729out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6731x_1;

    switch((id6731in_sel.getValueAsLong())) {
      case 0l:
        id6731x_1 = id6731in_option0;
        break;
      case 1l:
        id6731x_1 = id6731in_option1;
        break;
      default:
        id6731x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6731out_result[(getCycle()+1)%2] = (id6731x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6732out_output;

  { // Node ID: 6732 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6732in_input = id6731out_result[getCycle()%2];

    id6732out_output = id6732in_input;
  }
  { // Node ID: 6734 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6734in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6734in_option0 = in_vars.id6733out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6734in_option1 = id6732out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6734x_1;

    switch((id6734in_sel.getValueAsLong())) {
      case 0l:
        id6734x_1 = id6734in_option0;
        break;
      case 1l:
        id6734x_1 = id6734in_option1;
        break;
      default:
        id6734x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6734out_result[(getCycle()+1)%2] = (id6734x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6735out_output;

  { // Node ID: 6735 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6735in_input = id6734out_result[getCycle()%2];

    id6735out_output = id6735in_input;
  }
  { // Node ID: 6737 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6737in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6737in_option0 = in_vars.id6736out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6737in_option1 = id6735out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6737x_1;

    switch((id6737in_sel.getValueAsLong())) {
      case 0l:
        id6737x_1 = id6737in_option0;
        break;
      case 1l:
        id6737x_1 = id6737in_option1;
        break;
      default:
        id6737x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6737out_result[(getCycle()+1)%2] = (id6737x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6738out_output;

  { // Node ID: 6738 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6738in_input = id6737out_result[getCycle()%2];

    id6738out_output = id6738in_input;
  }
  { // Node ID: 6740 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6740in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6740in_option0 = in_vars.id6739out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6740in_option1 = id6738out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6740x_1;

    switch((id6740in_sel.getValueAsLong())) {
      case 0l:
        id6740x_1 = id6740in_option0;
        break;
      case 1l:
        id6740x_1 = id6740in_option1;
        break;
      default:
        id6740x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6740out_result[(getCycle()+1)%2] = (id6740x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6741out_output;

  { // Node ID: 6741 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6741in_input = id6740out_result[getCycle()%2];

    id6741out_output = id6741in_input;
  }
  { // Node ID: 6743 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6743in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6743in_option0 = in_vars.id6742out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6743in_option1 = id6741out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6743x_1;

    switch((id6743in_sel.getValueAsLong())) {
      case 0l:
        id6743x_1 = id6743in_option0;
        break;
      case 1l:
        id6743x_1 = id6743in_option1;
        break;
      default:
        id6743x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6743out_result[(getCycle()+1)%2] = (id6743x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6744out_output;

  { // Node ID: 6744 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6744in_input = id6743out_result[getCycle()%2];

    id6744out_output = id6744in_input;
  }
  { // Node ID: 6746 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6746in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6746in_option0 = in_vars.id6745out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6746in_option1 = id6744out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6746x_1;

    switch((id6746in_sel.getValueAsLong())) {
      case 0l:
        id6746x_1 = id6746in_option0;
        break;
      case 1l:
        id6746x_1 = id6746in_option1;
        break;
      default:
        id6746x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6746out_result[(getCycle()+1)%2] = (id6746x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6747out_output;

  { // Node ID: 6747 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6747in_input = id6746out_result[getCycle()%2];

    id6747out_output = id6747in_input;
  }
  { // Node ID: 6749 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6749in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6749in_option0 = in_vars.id6748out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6749in_option1 = id6747out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6749x_1;

    switch((id6749in_sel.getValueAsLong())) {
      case 0l:
        id6749x_1 = id6749in_option0;
        break;
      case 1l:
        id6749x_1 = id6749in_option1;
        break;
      default:
        id6749x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6749out_result[(getCycle()+1)%2] = (id6749x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6750out_output;

  { // Node ID: 6750 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6750in_input = id6749out_result[getCycle()%2];

    id6750out_output = id6750in_input;
  }
  { // Node ID: 6752 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6752in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6752in_option0 = in_vars.id6751out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6752in_option1 = id6750out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6752x_1;

    switch((id6752in_sel.getValueAsLong())) {
      case 0l:
        id6752x_1 = id6752in_option0;
        break;
      case 1l:
        id6752x_1 = id6752in_option1;
        break;
      default:
        id6752x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6752out_result[(getCycle()+1)%2] = (id6752x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6753out_output;

  { // Node ID: 6753 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6753in_input = id6752out_result[getCycle()%2];

    id6753out_output = id6753in_input;
  }
  { // Node ID: 6755 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6755in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6755in_option0 = in_vars.id6754out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6755in_option1 = id6753out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6755x_1;

    switch((id6755in_sel.getValueAsLong())) {
      case 0l:
        id6755x_1 = id6755in_option0;
        break;
      case 1l:
        id6755x_1 = id6755in_option1;
        break;
      default:
        id6755x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6755out_result[(getCycle()+1)%2] = (id6755x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6756out_output;

  { // Node ID: 6756 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6756in_input = id6755out_result[getCycle()%2];

    id6756out_output = id6756in_input;
  }
  { // Node ID: 6758 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6758in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6758in_option0 = in_vars.id6757out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6758in_option1 = id6756out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6758x_1;

    switch((id6758in_sel.getValueAsLong())) {
      case 0l:
        id6758x_1 = id6758in_option0;
        break;
      case 1l:
        id6758x_1 = id6758in_option1;
        break;
      default:
        id6758x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6758out_result[(getCycle()+1)%2] = (id6758x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6759out_output;

  { // Node ID: 6759 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6759in_input = id6758out_result[getCycle()%2];

    id6759out_output = id6759in_input;
  }
  { // Node ID: 6761 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6761in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6761in_option0 = in_vars.id6760out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6761in_option1 = id6759out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6761x_1;

    switch((id6761in_sel.getValueAsLong())) {
      case 0l:
        id6761x_1 = id6761in_option0;
        break;
      case 1l:
        id6761x_1 = id6761in_option1;
        break;
      default:
        id6761x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6761out_result[(getCycle()+1)%2] = (id6761x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6762out_output;

  { // Node ID: 6762 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6762in_input = id6761out_result[getCycle()%2];

    id6762out_output = id6762in_input;
  }
  { // Node ID: 6764 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6764in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6764in_option0 = in_vars.id6763out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6764in_option1 = id6762out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6764x_1;

    switch((id6764in_sel.getValueAsLong())) {
      case 0l:
        id6764x_1 = id6764in_option0;
        break;
      case 1l:
        id6764x_1 = id6764in_option1;
        break;
      default:
        id6764x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6764out_result[(getCycle()+1)%2] = (id6764x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6765out_output;

  { // Node ID: 6765 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6765in_input = id6764out_result[getCycle()%2];

    id6765out_output = id6765in_input;
  }
  { // Node ID: 6767 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6767in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6767in_option0 = in_vars.id6766out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6767in_option1 = id6765out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6767x_1;

    switch((id6767in_sel.getValueAsLong())) {
      case 0l:
        id6767x_1 = id6767in_option0;
        break;
      case 1l:
        id6767x_1 = id6767in_option1;
        break;
      default:
        id6767x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6767out_result[(getCycle()+1)%2] = (id6767x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6768out_output;

  { // Node ID: 6768 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6768in_input = id6767out_result[getCycle()%2];

    id6768out_output = id6768in_input;
  }
  { // Node ID: 6770 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6770in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6770in_option0 = in_vars.id6769out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6770in_option1 = id6768out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6770x_1;

    switch((id6770in_sel.getValueAsLong())) {
      case 0l:
        id6770x_1 = id6770in_option0;
        break;
      case 1l:
        id6770x_1 = id6770in_option1;
        break;
      default:
        id6770x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6770out_result[(getCycle()+1)%2] = (id6770x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6771out_output;

  { // Node ID: 6771 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6771in_input = id6770out_result[getCycle()%2];

    id6771out_output = id6771in_input;
  }
  { // Node ID: 6773 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6773in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6773in_option0 = in_vars.id6772out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6773in_option1 = id6771out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6773x_1;

    switch((id6773in_sel.getValueAsLong())) {
      case 0l:
        id6773x_1 = id6773in_option0;
        break;
      case 1l:
        id6773x_1 = id6773in_option1;
        break;
      default:
        id6773x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6773out_result[(getCycle()+1)%2] = (id6773x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6774out_output;

  { // Node ID: 6774 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6774in_input = id6773out_result[getCycle()%2];

    id6774out_output = id6774in_input;
  }
  { // Node ID: 6776 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6776in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6776in_option0 = in_vars.id6775out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6776in_option1 = id6774out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6776x_1;

    switch((id6776in_sel.getValueAsLong())) {
      case 0l:
        id6776x_1 = id6776in_option0;
        break;
      case 1l:
        id6776x_1 = id6776in_option1;
        break;
      default:
        id6776x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6776out_result[(getCycle()+1)%2] = (id6776x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6777out_output;

  { // Node ID: 6777 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6777in_input = id6776out_result[getCycle()%2];

    id6777out_output = id6777in_input;
  }
  { // Node ID: 6779 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6779in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6779in_option0 = in_vars.id6778out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6779in_option1 = id6777out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6779x_1;

    switch((id6779in_sel.getValueAsLong())) {
      case 0l:
        id6779x_1 = id6779in_option0;
        break;
      case 1l:
        id6779x_1 = id6779in_option1;
        break;
      default:
        id6779x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6779out_result[(getCycle()+1)%2] = (id6779x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6780out_output;

  { // Node ID: 6780 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6780in_input = id6779out_result[getCycle()%2];

    id6780out_output = id6780in_input;
  }
  { // Node ID: 6782 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6782in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6782in_option0 = in_vars.id6781out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6782in_option1 = id6780out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6782x_1;

    switch((id6782in_sel.getValueAsLong())) {
      case 0l:
        id6782x_1 = id6782in_option0;
        break;
      case 1l:
        id6782x_1 = id6782in_option1;
        break;
      default:
        id6782x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6782out_result[(getCycle()+1)%2] = (id6782x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6783out_output;

  { // Node ID: 6783 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6783in_input = id6782out_result[getCycle()%2];

    id6783out_output = id6783in_input;
  }
  { // Node ID: 6785 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6785in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6785in_option0 = in_vars.id6784out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6785in_option1 = id6783out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6785x_1;

    switch((id6785in_sel.getValueAsLong())) {
      case 0l:
        id6785x_1 = id6785in_option0;
        break;
      case 1l:
        id6785x_1 = id6785in_option1;
        break;
      default:
        id6785x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6785out_result[(getCycle()+1)%2] = (id6785x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6786out_output;

  { // Node ID: 6786 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6786in_input = id6785out_result[getCycle()%2];

    id6786out_output = id6786in_input;
  }
  { // Node ID: 6788 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6788in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6788in_option0 = in_vars.id6787out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6788in_option1 = id6786out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6788x_1;

    switch((id6788in_sel.getValueAsLong())) {
      case 0l:
        id6788x_1 = id6788in_option0;
        break;
      case 1l:
        id6788x_1 = id6788in_option1;
        break;
      default:
        id6788x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6788out_result[(getCycle()+1)%2] = (id6788x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6789out_output;

  { // Node ID: 6789 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6789in_input = id6788out_result[getCycle()%2];

    id6789out_output = id6789in_input;
  }
  { // Node ID: 6791 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6791in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6791in_option0 = in_vars.id6790out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6791in_option1 = id6789out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6791x_1;

    switch((id6791in_sel.getValueAsLong())) {
      case 0l:
        id6791x_1 = id6791in_option0;
        break;
      case 1l:
        id6791x_1 = id6791in_option1;
        break;
      default:
        id6791x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6791out_result[(getCycle()+1)%2] = (id6791x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6792out_output;

  { // Node ID: 6792 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6792in_input = id6791out_result[getCycle()%2];

    id6792out_output = id6792in_input;
  }
  { // Node ID: 6794 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6794in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6794in_option0 = in_vars.id6793out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6794in_option1 = id6792out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6794x_1;

    switch((id6794in_sel.getValueAsLong())) {
      case 0l:
        id6794x_1 = id6794in_option0;
        break;
      case 1l:
        id6794x_1 = id6794in_option1;
        break;
      default:
        id6794x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6794out_result[(getCycle()+1)%2] = (id6794x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6795out_output;

  { // Node ID: 6795 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6795in_input = id6794out_result[getCycle()%2];

    id6795out_output = id6795in_input;
  }
  { // Node ID: 6797 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6797in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6797in_option0 = in_vars.id6796out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6797in_option1 = id6795out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6797x_1;

    switch((id6797in_sel.getValueAsLong())) {
      case 0l:
        id6797x_1 = id6797in_option0;
        break;
      case 1l:
        id6797x_1 = id6797in_option1;
        break;
      default:
        id6797x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6797out_result[(getCycle()+1)%2] = (id6797x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6798out_output;

  { // Node ID: 6798 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6798in_input = id6797out_result[getCycle()%2];

    id6798out_output = id6798in_input;
  }
  { // Node ID: 6800 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6800in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6800in_option0 = in_vars.id6799out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6800in_option1 = id6798out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6800x_1;

    switch((id6800in_sel.getValueAsLong())) {
      case 0l:
        id6800x_1 = id6800in_option0;
        break;
      case 1l:
        id6800x_1 = id6800in_option1;
        break;
      default:
        id6800x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6800out_result[(getCycle()+1)%2] = (id6800x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6801out_output;

  { // Node ID: 6801 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6801in_input = id6800out_result[getCycle()%2];

    id6801out_output = id6801in_input;
  }
  { // Node ID: 6803 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6803in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6803in_option0 = in_vars.id6802out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6803in_option1 = id6801out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6803x_1;

    switch((id6803in_sel.getValueAsLong())) {
      case 0l:
        id6803x_1 = id6803in_option0;
        break;
      case 1l:
        id6803x_1 = id6803in_option1;
        break;
      default:
        id6803x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6803out_result[(getCycle()+1)%2] = (id6803x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6804out_output;

  { // Node ID: 6804 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6804in_input = id6803out_result[getCycle()%2];

    id6804out_output = id6804in_input;
  }
  { // Node ID: 6806 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6806in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6806in_option0 = in_vars.id6805out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6806in_option1 = id6804out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6806x_1;

    switch((id6806in_sel.getValueAsLong())) {
      case 0l:
        id6806x_1 = id6806in_option0;
        break;
      case 1l:
        id6806x_1 = id6806in_option1;
        break;
      default:
        id6806x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6806out_result[(getCycle()+1)%2] = (id6806x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6807out_output;

  { // Node ID: 6807 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6807in_input = id6806out_result[getCycle()%2];

    id6807out_output = id6807in_input;
  }
  { // Node ID: 6809 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6809in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6809in_option0 = in_vars.id6808out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6809in_option1 = id6807out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6809x_1;

    switch((id6809in_sel.getValueAsLong())) {
      case 0l:
        id6809x_1 = id6809in_option0;
        break;
      case 1l:
        id6809x_1 = id6809in_option1;
        break;
      default:
        id6809x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6809out_result[(getCycle()+1)%2] = (id6809x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6810out_output;

  { // Node ID: 6810 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6810in_input = id6809out_result[getCycle()%2];

    id6810out_output = id6810in_input;
  }
  { // Node ID: 6812 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6812in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6812in_option0 = in_vars.id6811out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6812in_option1 = id6810out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6812x_1;

    switch((id6812in_sel.getValueAsLong())) {
      case 0l:
        id6812x_1 = id6812in_option0;
        break;
      case 1l:
        id6812x_1 = id6812in_option1;
        break;
      default:
        id6812x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6812out_result[(getCycle()+1)%2] = (id6812x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6813out_output;

  { // Node ID: 6813 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6813in_input = id6812out_result[getCycle()%2];

    id6813out_output = id6813in_input;
  }
  { // Node ID: 6815 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6815in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6815in_option0 = in_vars.id6814out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6815in_option1 = id6813out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6815x_1;

    switch((id6815in_sel.getValueAsLong())) {
      case 0l:
        id6815x_1 = id6815in_option0;
        break;
      case 1l:
        id6815x_1 = id6815in_option1;
        break;
      default:
        id6815x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6815out_result[(getCycle()+1)%2] = (id6815x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6816out_output;

  { // Node ID: 6816 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6816in_input = id6815out_result[getCycle()%2];

    id6816out_output = id6816in_input;
  }
  { // Node ID: 6818 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6818in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6818in_option0 = in_vars.id6817out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6818in_option1 = id6816out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6818x_1;

    switch((id6818in_sel.getValueAsLong())) {
      case 0l:
        id6818x_1 = id6818in_option0;
        break;
      case 1l:
        id6818x_1 = id6818in_option1;
        break;
      default:
        id6818x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6818out_result[(getCycle()+1)%2] = (id6818x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6819out_output;

  { // Node ID: 6819 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6819in_input = id6818out_result[getCycle()%2];

    id6819out_output = id6819in_input;
  }
  { // Node ID: 6821 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6821in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6821in_option0 = in_vars.id6820out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6821in_option1 = id6819out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6821x_1;

    switch((id6821in_sel.getValueAsLong())) {
      case 0l:
        id6821x_1 = id6821in_option0;
        break;
      case 1l:
        id6821x_1 = id6821in_option1;
        break;
      default:
        id6821x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6821out_result[(getCycle()+1)%2] = (id6821x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6822out_output;

  { // Node ID: 6822 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6822in_input = id6821out_result[getCycle()%2];

    id6822out_output = id6822in_input;
  }
  { // Node ID: 6824 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6824in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6824in_option0 = in_vars.id6823out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6824in_option1 = id6822out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6824x_1;

    switch((id6824in_sel.getValueAsLong())) {
      case 0l:
        id6824x_1 = id6824in_option0;
        break;
      case 1l:
        id6824x_1 = id6824in_option1;
        break;
      default:
        id6824x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6824out_result[(getCycle()+1)%2] = (id6824x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6825out_output;

  { // Node ID: 6825 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6825in_input = id6824out_result[getCycle()%2];

    id6825out_output = id6825in_input;
  }
  { // Node ID: 6827 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6827in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6827in_option0 = in_vars.id6826out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6827in_option1 = id6825out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6827x_1;

    switch((id6827in_sel.getValueAsLong())) {
      case 0l:
        id6827x_1 = id6827in_option0;
        break;
      case 1l:
        id6827x_1 = id6827in_option1;
        break;
      default:
        id6827x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6827out_result[(getCycle()+1)%2] = (id6827x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6828out_output;

  { // Node ID: 6828 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6828in_input = id6827out_result[getCycle()%2];

    id6828out_output = id6828in_input;
  }
  { // Node ID: 6830 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6830in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6830in_option0 = in_vars.id6829out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6830in_option1 = id6828out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6830x_1;

    switch((id6830in_sel.getValueAsLong())) {
      case 0l:
        id6830x_1 = id6830in_option0;
        break;
      case 1l:
        id6830x_1 = id6830in_option1;
        break;
      default:
        id6830x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6830out_result[(getCycle()+1)%2] = (id6830x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6831out_output;

  { // Node ID: 6831 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6831in_input = id6830out_result[getCycle()%2];

    id6831out_output = id6831in_input;
  }
  { // Node ID: 6833 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6833in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6833in_option0 = in_vars.id6832out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6833in_option1 = id6831out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6833x_1;

    switch((id6833in_sel.getValueAsLong())) {
      case 0l:
        id6833x_1 = id6833in_option0;
        break;
      case 1l:
        id6833x_1 = id6833in_option1;
        break;
      default:
        id6833x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6833out_result[(getCycle()+1)%2] = (id6833x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6834out_output;

  { // Node ID: 6834 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6834in_input = id6833out_result[getCycle()%2];

    id6834out_output = id6834in_input;
  }
  { // Node ID: 6836 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6836in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6836in_option0 = in_vars.id6835out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6836in_option1 = id6834out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6836x_1;

    switch((id6836in_sel.getValueAsLong())) {
      case 0l:
        id6836x_1 = id6836in_option0;
        break;
      case 1l:
        id6836x_1 = id6836in_option1;
        break;
      default:
        id6836x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6836out_result[(getCycle()+1)%2] = (id6836x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6837out_output;

  { // Node ID: 6837 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6837in_input = id6836out_result[getCycle()%2];

    id6837out_output = id6837in_input;
  }
  { // Node ID: 6839 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6839in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6839in_option0 = in_vars.id6838out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6839in_option1 = id6837out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6839x_1;

    switch((id6839in_sel.getValueAsLong())) {
      case 0l:
        id6839x_1 = id6839in_option0;
        break;
      case 1l:
        id6839x_1 = id6839in_option1;
        break;
      default:
        id6839x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6839out_result[(getCycle()+1)%2] = (id6839x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6840out_output;

  { // Node ID: 6840 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6840in_input = id6839out_result[getCycle()%2];

    id6840out_output = id6840in_input;
  }
  { // Node ID: 6842 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6842in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6842in_option0 = in_vars.id6841out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6842in_option1 = id6840out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6842x_1;

    switch((id6842in_sel.getValueAsLong())) {
      case 0l:
        id6842x_1 = id6842in_option0;
        break;
      case 1l:
        id6842x_1 = id6842in_option1;
        break;
      default:
        id6842x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6842out_result[(getCycle()+1)%2] = (id6842x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6843out_output;

  { // Node ID: 6843 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6843in_input = id6842out_result[getCycle()%2];

    id6843out_output = id6843in_input;
  }
  { // Node ID: 6845 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6845in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6845in_option0 = in_vars.id6844out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6845in_option1 = id6843out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6845x_1;

    switch((id6845in_sel.getValueAsLong())) {
      case 0l:
        id6845x_1 = id6845in_option0;
        break;
      case 1l:
        id6845x_1 = id6845in_option1;
        break;
      default:
        id6845x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6845out_result[(getCycle()+1)%2] = (id6845x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6846out_output;

  { // Node ID: 6846 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6846in_input = id6845out_result[getCycle()%2];

    id6846out_output = id6846in_input;
  }
  { // Node ID: 6848 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6848in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6848in_option0 = in_vars.id6847out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6848in_option1 = id6846out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6848x_1;

    switch((id6848in_sel.getValueAsLong())) {
      case 0l:
        id6848x_1 = id6848in_option0;
        break;
      case 1l:
        id6848x_1 = id6848in_option1;
        break;
      default:
        id6848x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6848out_result[(getCycle()+1)%2] = (id6848x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6849out_output;

  { // Node ID: 6849 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6849in_input = id6848out_result[getCycle()%2];

    id6849out_output = id6849in_input;
  }
  { // Node ID: 6851 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6851in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6851in_option0 = in_vars.id6850out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6851in_option1 = id6849out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6851x_1;

    switch((id6851in_sel.getValueAsLong())) {
      case 0l:
        id6851x_1 = id6851in_option0;
        break;
      case 1l:
        id6851x_1 = id6851in_option1;
        break;
      default:
        id6851x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6851out_result[(getCycle()+1)%2] = (id6851x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6852out_output;

  { // Node ID: 6852 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6852in_input = id6851out_result[getCycle()%2];

    id6852out_output = id6852in_input;
  }
  { // Node ID: 6854 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6854in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6854in_option0 = in_vars.id6853out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6854in_option1 = id6852out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6854x_1;

    switch((id6854in_sel.getValueAsLong())) {
      case 0l:
        id6854x_1 = id6854in_option0;
        break;
      case 1l:
        id6854x_1 = id6854in_option1;
        break;
      default:
        id6854x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6854out_result[(getCycle()+1)%2] = (id6854x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6855out_output;

  { // Node ID: 6855 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6855in_input = id6854out_result[getCycle()%2];

    id6855out_output = id6855in_input;
  }
  { // Node ID: 6857 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6857in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6857in_option0 = in_vars.id6856out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6857in_option1 = id6855out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6857x_1;

    switch((id6857in_sel.getValueAsLong())) {
      case 0l:
        id6857x_1 = id6857in_option0;
        break;
      case 1l:
        id6857x_1 = id6857in_option1;
        break;
      default:
        id6857x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6857out_result[(getCycle()+1)%2] = (id6857x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6858out_output;

  { // Node ID: 6858 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6858in_input = id6857out_result[getCycle()%2];

    id6858out_output = id6858in_input;
  }
  { // Node ID: 6860 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6860in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6860in_option0 = in_vars.id6859out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6860in_option1 = id6858out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6860x_1;

    switch((id6860in_sel.getValueAsLong())) {
      case 0l:
        id6860x_1 = id6860in_option0;
        break;
      case 1l:
        id6860x_1 = id6860in_option1;
        break;
      default:
        id6860x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6860out_result[(getCycle()+1)%2] = (id6860x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6861out_output;

  { // Node ID: 6861 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6861in_input = id6860out_result[getCycle()%2];

    id6861out_output = id6861in_input;
  }
  { // Node ID: 6863 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6863in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6863in_option0 = in_vars.id6862out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6863in_option1 = id6861out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6863x_1;

    switch((id6863in_sel.getValueAsLong())) {
      case 0l:
        id6863x_1 = id6863in_option0;
        break;
      case 1l:
        id6863x_1 = id6863in_option1;
        break;
      default:
        id6863x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6863out_result[(getCycle()+1)%2] = (id6863x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6864out_output;

  { // Node ID: 6864 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6864in_input = id6863out_result[getCycle()%2];

    id6864out_output = id6864in_input;
  }
  { // Node ID: 6866 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6866in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6866in_option0 = in_vars.id6865out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6866in_option1 = id6864out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6866x_1;

    switch((id6866in_sel.getValueAsLong())) {
      case 0l:
        id6866x_1 = id6866in_option0;
        break;
      case 1l:
        id6866x_1 = id6866in_option1;
        break;
      default:
        id6866x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6866out_result[(getCycle()+1)%2] = (id6866x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6867out_output;

  { // Node ID: 6867 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6867in_input = id6866out_result[getCycle()%2];

    id6867out_output = id6867in_input;
  }
  { // Node ID: 6869 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6869in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6869in_option0 = in_vars.id6868out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6869in_option1 = id6867out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6869x_1;

    switch((id6869in_sel.getValueAsLong())) {
      case 0l:
        id6869x_1 = id6869in_option0;
        break;
      case 1l:
        id6869x_1 = id6869in_option1;
        break;
      default:
        id6869x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6869out_result[(getCycle()+1)%2] = (id6869x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6870out_output;

  { // Node ID: 6870 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6870in_input = id6869out_result[getCycle()%2];

    id6870out_output = id6870in_input;
  }
  { // Node ID: 6872 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6872in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6872in_option0 = in_vars.id6871out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6872in_option1 = id6870out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6872x_1;

    switch((id6872in_sel.getValueAsLong())) {
      case 0l:
        id6872x_1 = id6872in_option0;
        break;
      case 1l:
        id6872x_1 = id6872in_option1;
        break;
      default:
        id6872x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6872out_result[(getCycle()+1)%2] = (id6872x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6873out_output;

  { // Node ID: 6873 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6873in_input = id6872out_result[getCycle()%2];

    id6873out_output = id6873in_input;
  }
  { // Node ID: 6875 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6875in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6875in_option0 = in_vars.id6874out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6875in_option1 = id6873out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6875x_1;

    switch((id6875in_sel.getValueAsLong())) {
      case 0l:
        id6875x_1 = id6875in_option0;
        break;
      case 1l:
        id6875x_1 = id6875in_option1;
        break;
      default:
        id6875x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6875out_result[(getCycle()+1)%2] = (id6875x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6876out_output;

  { // Node ID: 6876 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6876in_input = id6875out_result[getCycle()%2];

    id6876out_output = id6876in_input;
  }
  { // Node ID: 6878 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6878in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6878in_option0 = in_vars.id6877out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6878in_option1 = id6876out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6878x_1;

    switch((id6878in_sel.getValueAsLong())) {
      case 0l:
        id6878x_1 = id6878in_option0;
        break;
      case 1l:
        id6878x_1 = id6878in_option1;
        break;
      default:
        id6878x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6878out_result[(getCycle()+1)%2] = (id6878x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6879out_output;

  { // Node ID: 6879 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6879in_input = id6878out_result[getCycle()%2];

    id6879out_output = id6879in_input;
  }
  { // Node ID: 6881 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6881in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6881in_option0 = in_vars.id6880out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6881in_option1 = id6879out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6881x_1;

    switch((id6881in_sel.getValueAsLong())) {
      case 0l:
        id6881x_1 = id6881in_option0;
        break;
      case 1l:
        id6881x_1 = id6881in_option1;
        break;
      default:
        id6881x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6881out_result[(getCycle()+1)%2] = (id6881x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6882out_output;

  { // Node ID: 6882 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6882in_input = id6881out_result[getCycle()%2];

    id6882out_output = id6882in_input;
  }
  { // Node ID: 6884 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6884in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6884in_option0 = in_vars.id6883out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6884in_option1 = id6882out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6884x_1;

    switch((id6884in_sel.getValueAsLong())) {
      case 0l:
        id6884x_1 = id6884in_option0;
        break;
      case 1l:
        id6884x_1 = id6884in_option1;
        break;
      default:
        id6884x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6884out_result[(getCycle()+1)%2] = (id6884x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6885out_output;

  { // Node ID: 6885 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6885in_input = id6884out_result[getCycle()%2];

    id6885out_output = id6885in_input;
  }
  { // Node ID: 6887 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6887in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6887in_option0 = in_vars.id6886out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6887in_option1 = id6885out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6887x_1;

    switch((id6887in_sel.getValueAsLong())) {
      case 0l:
        id6887x_1 = id6887in_option0;
        break;
      case 1l:
        id6887x_1 = id6887in_option1;
        break;
      default:
        id6887x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6887out_result[(getCycle()+1)%2] = (id6887x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6888out_output;

  { // Node ID: 6888 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6888in_input = id6887out_result[getCycle()%2];

    id6888out_output = id6888in_input;
  }
  { // Node ID: 6890 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6890in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6890in_option0 = in_vars.id6889out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6890in_option1 = id6888out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6890x_1;

    switch((id6890in_sel.getValueAsLong())) {
      case 0l:
        id6890x_1 = id6890in_option0;
        break;
      case 1l:
        id6890x_1 = id6890in_option1;
        break;
      default:
        id6890x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6890out_result[(getCycle()+1)%2] = (id6890x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6891out_output;

  { // Node ID: 6891 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6891in_input = id6890out_result[getCycle()%2];

    id6891out_output = id6891in_input;
  }
  { // Node ID: 6893 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6893in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6893in_option0 = in_vars.id6892out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6893in_option1 = id6891out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6893x_1;

    switch((id6893in_sel.getValueAsLong())) {
      case 0l:
        id6893x_1 = id6893in_option0;
        break;
      case 1l:
        id6893x_1 = id6893in_option1;
        break;
      default:
        id6893x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6893out_result[(getCycle()+1)%2] = (id6893x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6894out_output;

  { // Node ID: 6894 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6894in_input = id6893out_result[getCycle()%2];

    id6894out_output = id6894in_input;
  }
  { // Node ID: 6896 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6896in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6896in_option0 = in_vars.id6895out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6896in_option1 = id6894out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6896x_1;

    switch((id6896in_sel.getValueAsLong())) {
      case 0l:
        id6896x_1 = id6896in_option0;
        break;
      case 1l:
        id6896x_1 = id6896in_option1;
        break;
      default:
        id6896x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6896out_result[(getCycle()+1)%2] = (id6896x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6897out_output;

  { // Node ID: 6897 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6897in_input = id6896out_result[getCycle()%2];

    id6897out_output = id6897in_input;
  }
  { // Node ID: 6899 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6899in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6899in_option0 = in_vars.id6898out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6899in_option1 = id6897out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6899x_1;

    switch((id6899in_sel.getValueAsLong())) {
      case 0l:
        id6899x_1 = id6899in_option0;
        break;
      case 1l:
        id6899x_1 = id6899in_option1;
        break;
      default:
        id6899x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6899out_result[(getCycle()+1)%2] = (id6899x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6900out_output;

  { // Node ID: 6900 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6900in_input = id6899out_result[getCycle()%2];

    id6900out_output = id6900in_input;
  }
  { // Node ID: 6902 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6902in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6902in_option0 = in_vars.id6901out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6902in_option1 = id6900out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6902x_1;

    switch((id6902in_sel.getValueAsLong())) {
      case 0l:
        id6902x_1 = id6902in_option0;
        break;
      case 1l:
        id6902x_1 = id6902in_option1;
        break;
      default:
        id6902x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6902out_result[(getCycle()+1)%2] = (id6902x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6903out_output;

  { // Node ID: 6903 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6903in_input = id6902out_result[getCycle()%2];

    id6903out_output = id6903in_input;
  }
  { // Node ID: 6905 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6905in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6905in_option0 = in_vars.id6904out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6905in_option1 = id6903out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6905x_1;

    switch((id6905in_sel.getValueAsLong())) {
      case 0l:
        id6905x_1 = id6905in_option0;
        break;
      case 1l:
        id6905x_1 = id6905in_option1;
        break;
      default:
        id6905x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6905out_result[(getCycle()+1)%2] = (id6905x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6906out_output;

  { // Node ID: 6906 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6906in_input = id6905out_result[getCycle()%2];

    id6906out_output = id6906in_input;
  }
  { // Node ID: 6908 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6908in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6908in_option0 = in_vars.id6907out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6908in_option1 = id6906out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6908x_1;

    switch((id6908in_sel.getValueAsLong())) {
      case 0l:
        id6908x_1 = id6908in_option0;
        break;
      case 1l:
        id6908x_1 = id6908in_option1;
        break;
      default:
        id6908x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6908out_result[(getCycle()+1)%2] = (id6908x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6909out_output;

  { // Node ID: 6909 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6909in_input = id6908out_result[getCycle()%2];

    id6909out_output = id6909in_input;
  }
  { // Node ID: 6911 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6911in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6911in_option0 = in_vars.id6910out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6911in_option1 = id6909out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6911x_1;

    switch((id6911in_sel.getValueAsLong())) {
      case 0l:
        id6911x_1 = id6911in_option0;
        break;
      case 1l:
        id6911x_1 = id6911in_option1;
        break;
      default:
        id6911x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6911out_result[(getCycle()+1)%2] = (id6911x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6912out_output;

  { // Node ID: 6912 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6912in_input = id6911out_result[getCycle()%2];

    id6912out_output = id6912in_input;
  }
  { // Node ID: 6914 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6914in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6914in_option0 = in_vars.id6913out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6914in_option1 = id6912out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6914x_1;

    switch((id6914in_sel.getValueAsLong())) {
      case 0l:
        id6914x_1 = id6914in_option0;
        break;
      case 1l:
        id6914x_1 = id6914in_option1;
        break;
      default:
        id6914x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6914out_result[(getCycle()+1)%2] = (id6914x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6915out_output;

  { // Node ID: 6915 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6915in_input = id6914out_result[getCycle()%2];

    id6915out_output = id6915in_input;
  }
  { // Node ID: 6917 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6917in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6917in_option0 = in_vars.id6916out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6917in_option1 = id6915out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6917x_1;

    switch((id6917in_sel.getValueAsLong())) {
      case 0l:
        id6917x_1 = id6917in_option0;
        break;
      case 1l:
        id6917x_1 = id6917in_option1;
        break;
      default:
        id6917x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6917out_result[(getCycle()+1)%2] = (id6917x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6918out_output;

  { // Node ID: 6918 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6918in_input = id6917out_result[getCycle()%2];

    id6918out_output = id6918in_input;
  }
  { // Node ID: 6920 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6920in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6920in_option0 = in_vars.id6919out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6920in_option1 = id6918out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6920x_1;

    switch((id6920in_sel.getValueAsLong())) {
      case 0l:
        id6920x_1 = id6920in_option0;
        break;
      case 1l:
        id6920x_1 = id6920in_option1;
        break;
      default:
        id6920x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6920out_result[(getCycle()+1)%2] = (id6920x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6921out_output;

  { // Node ID: 6921 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6921in_input = id6920out_result[getCycle()%2];

    id6921out_output = id6921in_input;
  }
  { // Node ID: 6923 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6923in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6923in_option0 = in_vars.id6922out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6923in_option1 = id6921out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6923x_1;

    switch((id6923in_sel.getValueAsLong())) {
      case 0l:
        id6923x_1 = id6923in_option0;
        break;
      case 1l:
        id6923x_1 = id6923in_option1;
        break;
      default:
        id6923x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6923out_result[(getCycle()+1)%2] = (id6923x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6924out_output;

  { // Node ID: 6924 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6924in_input = id6923out_result[getCycle()%2];

    id6924out_output = id6924in_input;
  }
  { // Node ID: 6926 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6926in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6926in_option0 = in_vars.id6925out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6926in_option1 = id6924out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6926x_1;

    switch((id6926in_sel.getValueAsLong())) {
      case 0l:
        id6926x_1 = id6926in_option0;
        break;
      case 1l:
        id6926x_1 = id6926in_option1;
        break;
      default:
        id6926x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6926out_result[(getCycle()+1)%2] = (id6926x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6927out_output;

  { // Node ID: 6927 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6927in_input = id6926out_result[getCycle()%2];

    id6927out_output = id6927in_input;
  }
  { // Node ID: 6929 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6929in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6929in_option0 = in_vars.id6928out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6929in_option1 = id6927out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6929x_1;

    switch((id6929in_sel.getValueAsLong())) {
      case 0l:
        id6929x_1 = id6929in_option0;
        break;
      case 1l:
        id6929x_1 = id6929in_option1;
        break;
      default:
        id6929x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6929out_result[(getCycle()+1)%2] = (id6929x_1);
  }

  sliding_window10Block14Vars out_vars;
  out_vars.id7443out_result = in_vars.id7443out_result;
  out_vars.id7567out_value = in_vars.id7567out_value;
  out_vars.id7569out_value = in_vars.id7569out_value;
  out_vars.id7571out_value = in_vars.id7571out_value;
  out_vars.id7573out_value = in_vars.id7573out_value;
  out_vars.id7575out_value = in_vars.id7575out_value;
  out_vars.id7577out_value = in_vars.id7577out_value;
  out_vars.id7579out_value = in_vars.id7579out_value;
  out_vars.id7581out_value = in_vars.id7581out_value;
  out_vars.id7583out_value = in_vars.id7583out_value;
  out_vars.id7585out_value = in_vars.id7585out_value;
  out_vars.id7587out_value = in_vars.id7587out_value;
  out_vars.id7589out_value = in_vars.id7589out_value;
  out_vars.id7591out_value = in_vars.id7591out_value;
  out_vars.id7593out_value = in_vars.id7593out_value;
  out_vars.id7595out_value = in_vars.id7595out_value;
  out_vars.id7228out_output = in_vars.id7228out_output;
  out_vars.id7225out_output = in_vars.id7225out_output;
  out_vars.id7222out_output = in_vars.id7222out_output;
  out_vars.id7219out_output = in_vars.id7219out_output;
  out_vars.id7216out_output = in_vars.id7216out_output;
  out_vars.id7213out_output = in_vars.id7213out_output;
  out_vars.id7210out_output = in_vars.id7210out_output;
  out_vars.id7207out_output = in_vars.id7207out_output;
  out_vars.id7204out_output = in_vars.id7204out_output;
  out_vars.id7201out_output = in_vars.id7201out_output;
  out_vars.id7198out_output = in_vars.id7198out_output;
  out_vars.id7195out_output = in_vars.id7195out_output;
  out_vars.id7192out_output = in_vars.id7192out_output;
  out_vars.id7189out_output = in_vars.id7189out_output;
  out_vars.id7186out_output = in_vars.id7186out_output;
  out_vars.id7183out_output = in_vars.id7183out_output;
  out_vars.id7180out_output = in_vars.id7180out_output;
  out_vars.id7177out_output = in_vars.id7177out_output;
  out_vars.id7174out_output = in_vars.id7174out_output;
  out_vars.id7171out_output = in_vars.id7171out_output;
  out_vars.id7168out_output = in_vars.id7168out_output;
  out_vars.id7165out_output = in_vars.id7165out_output;
  out_vars.id7162out_output = in_vars.id7162out_output;
  out_vars.id7159out_output = in_vars.id7159out_output;
  out_vars.id7156out_output = in_vars.id7156out_output;
  out_vars.id7153out_output = in_vars.id7153out_output;
  out_vars.id7150out_output = in_vars.id7150out_output;
  out_vars.id7147out_output = in_vars.id7147out_output;
  out_vars.id7144out_output = in_vars.id7144out_output;
  out_vars.id7141out_output = in_vars.id7141out_output;
  out_vars.id7138out_output = in_vars.id7138out_output;
  out_vars.id7135out_output = in_vars.id7135out_output;
  out_vars.id7132out_output = in_vars.id7132out_output;
  out_vars.id7129out_output = in_vars.id7129out_output;
  out_vars.id7126out_output = in_vars.id7126out_output;
  out_vars.id7123out_output = in_vars.id7123out_output;
  out_vars.id7120out_output = in_vars.id7120out_output;
  out_vars.id7117out_output = in_vars.id7117out_output;
  out_vars.id7114out_output = in_vars.id7114out_output;
  out_vars.id7111out_output = in_vars.id7111out_output;
  out_vars.id7108out_output = in_vars.id7108out_output;
  out_vars.id7105out_output = in_vars.id7105out_output;
  out_vars.id7102out_output = in_vars.id7102out_output;
  out_vars.id7099out_output = in_vars.id7099out_output;
  out_vars.id7096out_output = in_vars.id7096out_output;
  out_vars.id7093out_output = in_vars.id7093out_output;
  out_vars.id7090out_output = in_vars.id7090out_output;
  out_vars.id7087out_output = in_vars.id7087out_output;
  out_vars.id7084out_output = in_vars.id7084out_output;
  out_vars.id7081out_output = in_vars.id7081out_output;
  out_vars.id7078out_output = in_vars.id7078out_output;
  out_vars.id7075out_output = in_vars.id7075out_output;
  out_vars.id7072out_output = in_vars.id7072out_output;
  out_vars.id7069out_output = in_vars.id7069out_output;
  out_vars.id7066out_output = in_vars.id7066out_output;
  out_vars.id7063out_output = in_vars.id7063out_output;
  out_vars.id7060out_output = in_vars.id7060out_output;
  out_vars.id7057out_output = in_vars.id7057out_output;
  out_vars.id7054out_output = in_vars.id7054out_output;
  out_vars.id7051out_output = in_vars.id7051out_output;
  out_vars.id7048out_output = in_vars.id7048out_output;
  out_vars.id7045out_output = in_vars.id7045out_output;
  out_vars.id7042out_output = in_vars.id7042out_output;
  out_vars.id7039out_output = in_vars.id7039out_output;
  out_vars.id7036out_output = in_vars.id7036out_output;
  out_vars.id7033out_output = in_vars.id7033out_output;
  out_vars.id7030out_output = in_vars.id7030out_output;
  out_vars.id7027out_output = in_vars.id7027out_output;
  out_vars.id7024out_output = in_vars.id7024out_output;
  out_vars.id7021out_output = in_vars.id7021out_output;
  out_vars.id7018out_output = in_vars.id7018out_output;
  out_vars.id7015out_output = in_vars.id7015out_output;
  out_vars.id7012out_output = in_vars.id7012out_output;
  out_vars.id7009out_output = in_vars.id7009out_output;
  out_vars.id7006out_output = in_vars.id7006out_output;
  out_vars.id7003out_output = in_vars.id7003out_output;
  out_vars.id7000out_output = in_vars.id7000out_output;
  out_vars.id6997out_output = in_vars.id6997out_output;
  out_vars.id6994out_output = in_vars.id6994out_output;
  out_vars.id6991out_output = in_vars.id6991out_output;
  out_vars.id6988out_output = in_vars.id6988out_output;
  out_vars.id6985out_output = in_vars.id6985out_output;
  out_vars.id6982out_output = in_vars.id6982out_output;
  out_vars.id6979out_output = in_vars.id6979out_output;
  out_vars.id6976out_output = in_vars.id6976out_output;
  out_vars.id6973out_output = in_vars.id6973out_output;
  out_vars.id6970out_output = in_vars.id6970out_output;
  out_vars.id6967out_output = in_vars.id6967out_output;
  out_vars.id6964out_output = in_vars.id6964out_output;
  out_vars.id6961out_output = in_vars.id6961out_output;
  out_vars.id6958out_output = in_vars.id6958out_output;
  out_vars.id6955out_output = in_vars.id6955out_output;
  out_vars.id6952out_output = in_vars.id6952out_output;
  out_vars.id6949out_output = in_vars.id6949out_output;
  out_vars.id6946out_output = in_vars.id6946out_output;
  out_vars.id6943out_output = in_vars.id6943out_output;
  out_vars.id6940out_output = in_vars.id6940out_output;
  out_vars.id6937out_output = in_vars.id6937out_output;
  out_vars.id6934out_output = in_vars.id6934out_output;
  out_vars.id6931out_output = in_vars.id6931out_output;
  return out_vars;
};

};
