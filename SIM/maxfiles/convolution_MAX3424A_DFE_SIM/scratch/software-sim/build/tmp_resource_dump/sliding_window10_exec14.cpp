#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window10_exec14.h"
//#include "sliding_window10.h"

namespace maxcompilersim {

void sliding_window10::execute14(const sliding_window10Block14Vars &in_vars) {
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6930out_output;

  { // Node ID: 6930 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6930in_input = id6929out_result[getCycle()%2];

    id6930out_output = id6930in_input;
  }
  { // Node ID: 6932 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6932in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6932in_option0 = in_vars.id6931out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6932in_option1 = id6930out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6932x_1;

    switch((id6932in_sel.getValueAsLong())) {
      case 0l:
        id6932x_1 = id6932in_option0;
        break;
      case 1l:
        id6932x_1 = id6932in_option1;
        break;
      default:
        id6932x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6932out_result[(getCycle()+1)%2] = (id6932x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6933out_output;

  { // Node ID: 6933 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6933in_input = id6932out_result[getCycle()%2];

    id6933out_output = id6933in_input;
  }
  { // Node ID: 6935 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6935in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6935in_option0 = in_vars.id6934out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6935in_option1 = id6933out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6935x_1;

    switch((id6935in_sel.getValueAsLong())) {
      case 0l:
        id6935x_1 = id6935in_option0;
        break;
      case 1l:
        id6935x_1 = id6935in_option1;
        break;
      default:
        id6935x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6935out_result[(getCycle()+1)%2] = (id6935x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6936out_output;

  { // Node ID: 6936 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6936in_input = id6935out_result[getCycle()%2];

    id6936out_output = id6936in_input;
  }
  { // Node ID: 6938 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6938in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6938in_option0 = in_vars.id6937out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6938in_option1 = id6936out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6938x_1;

    switch((id6938in_sel.getValueAsLong())) {
      case 0l:
        id6938x_1 = id6938in_option0;
        break;
      case 1l:
        id6938x_1 = id6938in_option1;
        break;
      default:
        id6938x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6938out_result[(getCycle()+1)%2] = (id6938x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6939out_output;

  { // Node ID: 6939 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6939in_input = id6938out_result[getCycle()%2];

    id6939out_output = id6939in_input;
  }
  { // Node ID: 6941 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6941in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6941in_option0 = in_vars.id6940out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6941in_option1 = id6939out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6941x_1;

    switch((id6941in_sel.getValueAsLong())) {
      case 0l:
        id6941x_1 = id6941in_option0;
        break;
      case 1l:
        id6941x_1 = id6941in_option1;
        break;
      default:
        id6941x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6941out_result[(getCycle()+1)%2] = (id6941x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6942out_output;

  { // Node ID: 6942 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6942in_input = id6941out_result[getCycle()%2];

    id6942out_output = id6942in_input;
  }
  { // Node ID: 6944 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6944in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6944in_option0 = in_vars.id6943out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6944in_option1 = id6942out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6944x_1;

    switch((id6944in_sel.getValueAsLong())) {
      case 0l:
        id6944x_1 = id6944in_option0;
        break;
      case 1l:
        id6944x_1 = id6944in_option1;
        break;
      default:
        id6944x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6944out_result[(getCycle()+1)%2] = (id6944x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6945out_output;

  { // Node ID: 6945 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6945in_input = id6944out_result[getCycle()%2];

    id6945out_output = id6945in_input;
  }
  { // Node ID: 6947 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6947in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6947in_option0 = in_vars.id6946out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6947in_option1 = id6945out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6947x_1;

    switch((id6947in_sel.getValueAsLong())) {
      case 0l:
        id6947x_1 = id6947in_option0;
        break;
      case 1l:
        id6947x_1 = id6947in_option1;
        break;
      default:
        id6947x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6947out_result[(getCycle()+1)%2] = (id6947x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6948out_output;

  { // Node ID: 6948 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6948in_input = id6947out_result[getCycle()%2];

    id6948out_output = id6948in_input;
  }
  { // Node ID: 6950 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6950in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6950in_option0 = in_vars.id6949out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6950in_option1 = id6948out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6950x_1;

    switch((id6950in_sel.getValueAsLong())) {
      case 0l:
        id6950x_1 = id6950in_option0;
        break;
      case 1l:
        id6950x_1 = id6950in_option1;
        break;
      default:
        id6950x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6950out_result[(getCycle()+1)%2] = (id6950x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6951out_output;

  { // Node ID: 6951 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6951in_input = id6950out_result[getCycle()%2];

    id6951out_output = id6951in_input;
  }
  { // Node ID: 6953 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6953in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6953in_option0 = in_vars.id6952out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6953in_option1 = id6951out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6953x_1;

    switch((id6953in_sel.getValueAsLong())) {
      case 0l:
        id6953x_1 = id6953in_option0;
        break;
      case 1l:
        id6953x_1 = id6953in_option1;
        break;
      default:
        id6953x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6953out_result[(getCycle()+1)%2] = (id6953x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6954out_output;

  { // Node ID: 6954 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6954in_input = id6953out_result[getCycle()%2];

    id6954out_output = id6954in_input;
  }
  { // Node ID: 6956 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6956in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6956in_option0 = in_vars.id6955out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6956in_option1 = id6954out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6956x_1;

    switch((id6956in_sel.getValueAsLong())) {
      case 0l:
        id6956x_1 = id6956in_option0;
        break;
      case 1l:
        id6956x_1 = id6956in_option1;
        break;
      default:
        id6956x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6956out_result[(getCycle()+1)%2] = (id6956x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6957out_output;

  { // Node ID: 6957 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6957in_input = id6956out_result[getCycle()%2];

    id6957out_output = id6957in_input;
  }
  { // Node ID: 6959 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6959in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6959in_option0 = in_vars.id6958out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6959in_option1 = id6957out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6959x_1;

    switch((id6959in_sel.getValueAsLong())) {
      case 0l:
        id6959x_1 = id6959in_option0;
        break;
      case 1l:
        id6959x_1 = id6959in_option1;
        break;
      default:
        id6959x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6959out_result[(getCycle()+1)%2] = (id6959x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6960out_output;

  { // Node ID: 6960 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6960in_input = id6959out_result[getCycle()%2];

    id6960out_output = id6960in_input;
  }
  { // Node ID: 6962 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6962in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6962in_option0 = in_vars.id6961out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6962in_option1 = id6960out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6962x_1;

    switch((id6962in_sel.getValueAsLong())) {
      case 0l:
        id6962x_1 = id6962in_option0;
        break;
      case 1l:
        id6962x_1 = id6962in_option1;
        break;
      default:
        id6962x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6962out_result[(getCycle()+1)%2] = (id6962x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6963out_output;

  { // Node ID: 6963 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6963in_input = id6962out_result[getCycle()%2];

    id6963out_output = id6963in_input;
  }
  { // Node ID: 6965 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6965in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6965in_option0 = in_vars.id6964out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6965in_option1 = id6963out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6965x_1;

    switch((id6965in_sel.getValueAsLong())) {
      case 0l:
        id6965x_1 = id6965in_option0;
        break;
      case 1l:
        id6965x_1 = id6965in_option1;
        break;
      default:
        id6965x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6965out_result[(getCycle()+1)%2] = (id6965x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6966out_output;

  { // Node ID: 6966 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6966in_input = id6965out_result[getCycle()%2];

    id6966out_output = id6966in_input;
  }
  { // Node ID: 6968 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6968in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6968in_option0 = in_vars.id6967out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6968in_option1 = id6966out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6968x_1;

    switch((id6968in_sel.getValueAsLong())) {
      case 0l:
        id6968x_1 = id6968in_option0;
        break;
      case 1l:
        id6968x_1 = id6968in_option1;
        break;
      default:
        id6968x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6968out_result[(getCycle()+1)%2] = (id6968x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6969out_output;

  { // Node ID: 6969 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6969in_input = id6968out_result[getCycle()%2];

    id6969out_output = id6969in_input;
  }
  { // Node ID: 6971 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6971in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6971in_option0 = in_vars.id6970out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6971in_option1 = id6969out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6971x_1;

    switch((id6971in_sel.getValueAsLong())) {
      case 0l:
        id6971x_1 = id6971in_option0;
        break;
      case 1l:
        id6971x_1 = id6971in_option1;
        break;
      default:
        id6971x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6971out_result[(getCycle()+1)%2] = (id6971x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6972out_output;

  { // Node ID: 6972 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6972in_input = id6971out_result[getCycle()%2];

    id6972out_output = id6972in_input;
  }
  { // Node ID: 6974 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6974in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6974in_option0 = in_vars.id6973out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6974in_option1 = id6972out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6974x_1;

    switch((id6974in_sel.getValueAsLong())) {
      case 0l:
        id6974x_1 = id6974in_option0;
        break;
      case 1l:
        id6974x_1 = id6974in_option1;
        break;
      default:
        id6974x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6974out_result[(getCycle()+1)%2] = (id6974x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6975out_output;

  { // Node ID: 6975 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6975in_input = id6974out_result[getCycle()%2];

    id6975out_output = id6975in_input;
  }
  { // Node ID: 6977 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6977in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6977in_option0 = in_vars.id6976out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6977in_option1 = id6975out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6977x_1;

    switch((id6977in_sel.getValueAsLong())) {
      case 0l:
        id6977x_1 = id6977in_option0;
        break;
      case 1l:
        id6977x_1 = id6977in_option1;
        break;
      default:
        id6977x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6977out_result[(getCycle()+1)%2] = (id6977x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6978out_output;

  { // Node ID: 6978 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6978in_input = id6977out_result[getCycle()%2];

    id6978out_output = id6978in_input;
  }
  { // Node ID: 6980 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6980in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6980in_option0 = in_vars.id6979out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6980in_option1 = id6978out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6980x_1;

    switch((id6980in_sel.getValueAsLong())) {
      case 0l:
        id6980x_1 = id6980in_option0;
        break;
      case 1l:
        id6980x_1 = id6980in_option1;
        break;
      default:
        id6980x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6980out_result[(getCycle()+1)%2] = (id6980x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6981out_output;

  { // Node ID: 6981 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6981in_input = id6980out_result[getCycle()%2];

    id6981out_output = id6981in_input;
  }
  { // Node ID: 6983 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6983in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6983in_option0 = in_vars.id6982out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6983in_option1 = id6981out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6983x_1;

    switch((id6983in_sel.getValueAsLong())) {
      case 0l:
        id6983x_1 = id6983in_option0;
        break;
      case 1l:
        id6983x_1 = id6983in_option1;
        break;
      default:
        id6983x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6983out_result[(getCycle()+1)%2] = (id6983x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6984out_output;

  { // Node ID: 6984 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6984in_input = id6983out_result[getCycle()%2];

    id6984out_output = id6984in_input;
  }
  { // Node ID: 6986 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6986in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6986in_option0 = in_vars.id6985out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6986in_option1 = id6984out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6986x_1;

    switch((id6986in_sel.getValueAsLong())) {
      case 0l:
        id6986x_1 = id6986in_option0;
        break;
      case 1l:
        id6986x_1 = id6986in_option1;
        break;
      default:
        id6986x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6986out_result[(getCycle()+1)%2] = (id6986x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6987out_output;

  { // Node ID: 6987 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6987in_input = id6986out_result[getCycle()%2];

    id6987out_output = id6987in_input;
  }
  { // Node ID: 6989 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6989in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6989in_option0 = in_vars.id6988out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6989in_option1 = id6987out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6989x_1;

    switch((id6989in_sel.getValueAsLong())) {
      case 0l:
        id6989x_1 = id6989in_option0;
        break;
      case 1l:
        id6989x_1 = id6989in_option1;
        break;
      default:
        id6989x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6989out_result[(getCycle()+1)%2] = (id6989x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6990out_output;

  { // Node ID: 6990 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6990in_input = id6989out_result[getCycle()%2];

    id6990out_output = id6990in_input;
  }
  { // Node ID: 6992 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6992in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6992in_option0 = in_vars.id6991out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6992in_option1 = id6990out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6992x_1;

    switch((id6992in_sel.getValueAsLong())) {
      case 0l:
        id6992x_1 = id6992in_option0;
        break;
      case 1l:
        id6992x_1 = id6992in_option1;
        break;
      default:
        id6992x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6992out_result[(getCycle()+1)%2] = (id6992x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6993out_output;

  { // Node ID: 6993 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6993in_input = id6992out_result[getCycle()%2];

    id6993out_output = id6993in_input;
  }
  { // Node ID: 6995 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6995in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6995in_option0 = in_vars.id6994out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6995in_option1 = id6993out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6995x_1;

    switch((id6995in_sel.getValueAsLong())) {
      case 0l:
        id6995x_1 = id6995in_option0;
        break;
      case 1l:
        id6995x_1 = id6995in_option1;
        break;
      default:
        id6995x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6995out_result[(getCycle()+1)%2] = (id6995x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6996out_output;

  { // Node ID: 6996 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6996in_input = id6995out_result[getCycle()%2];

    id6996out_output = id6996in_input;
  }
  { // Node ID: 6998 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6998in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6998in_option0 = in_vars.id6997out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6998in_option1 = id6996out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6998x_1;

    switch((id6998in_sel.getValueAsLong())) {
      case 0l:
        id6998x_1 = id6998in_option0;
        break;
      case 1l:
        id6998x_1 = id6998in_option1;
        break;
      default:
        id6998x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6998out_result[(getCycle()+1)%2] = (id6998x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6999out_output;

  { // Node ID: 6999 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6999in_input = id6998out_result[getCycle()%2];

    id6999out_output = id6999in_input;
  }
  { // Node ID: 7001 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7001in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7001in_option0 = in_vars.id7000out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7001in_option1 = id6999out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7001x_1;

    switch((id7001in_sel.getValueAsLong())) {
      case 0l:
        id7001x_1 = id7001in_option0;
        break;
      case 1l:
        id7001x_1 = id7001in_option1;
        break;
      default:
        id7001x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7001out_result[(getCycle()+1)%2] = (id7001x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7002out_output;

  { // Node ID: 7002 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7002in_input = id7001out_result[getCycle()%2];

    id7002out_output = id7002in_input;
  }
  { // Node ID: 7004 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7004in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7004in_option0 = in_vars.id7003out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7004in_option1 = id7002out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7004x_1;

    switch((id7004in_sel.getValueAsLong())) {
      case 0l:
        id7004x_1 = id7004in_option0;
        break;
      case 1l:
        id7004x_1 = id7004in_option1;
        break;
      default:
        id7004x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7004out_result[(getCycle()+1)%2] = (id7004x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7005out_output;

  { // Node ID: 7005 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7005in_input = id7004out_result[getCycle()%2];

    id7005out_output = id7005in_input;
  }
  { // Node ID: 7007 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7007in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7007in_option0 = in_vars.id7006out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7007in_option1 = id7005out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7007x_1;

    switch((id7007in_sel.getValueAsLong())) {
      case 0l:
        id7007x_1 = id7007in_option0;
        break;
      case 1l:
        id7007x_1 = id7007in_option1;
        break;
      default:
        id7007x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7007out_result[(getCycle()+1)%2] = (id7007x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7008out_output;

  { // Node ID: 7008 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7008in_input = id7007out_result[getCycle()%2];

    id7008out_output = id7008in_input;
  }
  { // Node ID: 7010 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7010in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7010in_option0 = in_vars.id7009out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7010in_option1 = id7008out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7010x_1;

    switch((id7010in_sel.getValueAsLong())) {
      case 0l:
        id7010x_1 = id7010in_option0;
        break;
      case 1l:
        id7010x_1 = id7010in_option1;
        break;
      default:
        id7010x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7010out_result[(getCycle()+1)%2] = (id7010x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7011out_output;

  { // Node ID: 7011 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7011in_input = id7010out_result[getCycle()%2];

    id7011out_output = id7011in_input;
  }
  { // Node ID: 7013 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7013in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7013in_option0 = in_vars.id7012out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7013in_option1 = id7011out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7013x_1;

    switch((id7013in_sel.getValueAsLong())) {
      case 0l:
        id7013x_1 = id7013in_option0;
        break;
      case 1l:
        id7013x_1 = id7013in_option1;
        break;
      default:
        id7013x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7013out_result[(getCycle()+1)%2] = (id7013x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7014out_output;

  { // Node ID: 7014 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7014in_input = id7013out_result[getCycle()%2];

    id7014out_output = id7014in_input;
  }
  { // Node ID: 7016 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7016in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7016in_option0 = in_vars.id7015out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7016in_option1 = id7014out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7016x_1;

    switch((id7016in_sel.getValueAsLong())) {
      case 0l:
        id7016x_1 = id7016in_option0;
        break;
      case 1l:
        id7016x_1 = id7016in_option1;
        break;
      default:
        id7016x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7016out_result[(getCycle()+1)%2] = (id7016x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7017out_output;

  { // Node ID: 7017 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7017in_input = id7016out_result[getCycle()%2];

    id7017out_output = id7017in_input;
  }
  { // Node ID: 7019 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7019in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7019in_option0 = in_vars.id7018out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7019in_option1 = id7017out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7019x_1;

    switch((id7019in_sel.getValueAsLong())) {
      case 0l:
        id7019x_1 = id7019in_option0;
        break;
      case 1l:
        id7019x_1 = id7019in_option1;
        break;
      default:
        id7019x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7019out_result[(getCycle()+1)%2] = (id7019x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7020out_output;

  { // Node ID: 7020 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7020in_input = id7019out_result[getCycle()%2];

    id7020out_output = id7020in_input;
  }
  { // Node ID: 7022 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7022in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7022in_option0 = in_vars.id7021out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7022in_option1 = id7020out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7022x_1;

    switch((id7022in_sel.getValueAsLong())) {
      case 0l:
        id7022x_1 = id7022in_option0;
        break;
      case 1l:
        id7022x_1 = id7022in_option1;
        break;
      default:
        id7022x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7022out_result[(getCycle()+1)%2] = (id7022x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7023out_output;

  { // Node ID: 7023 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7023in_input = id7022out_result[getCycle()%2];

    id7023out_output = id7023in_input;
  }
  { // Node ID: 7025 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7025in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7025in_option0 = in_vars.id7024out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7025in_option1 = id7023out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7025x_1;

    switch((id7025in_sel.getValueAsLong())) {
      case 0l:
        id7025x_1 = id7025in_option0;
        break;
      case 1l:
        id7025x_1 = id7025in_option1;
        break;
      default:
        id7025x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7025out_result[(getCycle()+1)%2] = (id7025x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7026out_output;

  { // Node ID: 7026 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7026in_input = id7025out_result[getCycle()%2];

    id7026out_output = id7026in_input;
  }
  { // Node ID: 7028 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7028in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7028in_option0 = in_vars.id7027out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7028in_option1 = id7026out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7028x_1;

    switch((id7028in_sel.getValueAsLong())) {
      case 0l:
        id7028x_1 = id7028in_option0;
        break;
      case 1l:
        id7028x_1 = id7028in_option1;
        break;
      default:
        id7028x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7028out_result[(getCycle()+1)%2] = (id7028x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7029out_output;

  { // Node ID: 7029 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7029in_input = id7028out_result[getCycle()%2];

    id7029out_output = id7029in_input;
  }
  { // Node ID: 7031 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7031in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7031in_option0 = in_vars.id7030out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7031in_option1 = id7029out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7031x_1;

    switch((id7031in_sel.getValueAsLong())) {
      case 0l:
        id7031x_1 = id7031in_option0;
        break;
      case 1l:
        id7031x_1 = id7031in_option1;
        break;
      default:
        id7031x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7031out_result[(getCycle()+1)%2] = (id7031x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7032out_output;

  { // Node ID: 7032 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7032in_input = id7031out_result[getCycle()%2];

    id7032out_output = id7032in_input;
  }
  { // Node ID: 7034 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7034in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7034in_option0 = in_vars.id7033out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7034in_option1 = id7032out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7034x_1;

    switch((id7034in_sel.getValueAsLong())) {
      case 0l:
        id7034x_1 = id7034in_option0;
        break;
      case 1l:
        id7034x_1 = id7034in_option1;
        break;
      default:
        id7034x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7034out_result[(getCycle()+1)%2] = (id7034x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7035out_output;

  { // Node ID: 7035 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7035in_input = id7034out_result[getCycle()%2];

    id7035out_output = id7035in_input;
  }
  { // Node ID: 7037 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7037in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7037in_option0 = in_vars.id7036out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7037in_option1 = id7035out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7037x_1;

    switch((id7037in_sel.getValueAsLong())) {
      case 0l:
        id7037x_1 = id7037in_option0;
        break;
      case 1l:
        id7037x_1 = id7037in_option1;
        break;
      default:
        id7037x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7037out_result[(getCycle()+1)%2] = (id7037x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7038out_output;

  { // Node ID: 7038 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7038in_input = id7037out_result[getCycle()%2];

    id7038out_output = id7038in_input;
  }
  { // Node ID: 7040 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7040in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7040in_option0 = in_vars.id7039out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7040in_option1 = id7038out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7040x_1;

    switch((id7040in_sel.getValueAsLong())) {
      case 0l:
        id7040x_1 = id7040in_option0;
        break;
      case 1l:
        id7040x_1 = id7040in_option1;
        break;
      default:
        id7040x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7040out_result[(getCycle()+1)%2] = (id7040x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7041out_output;

  { // Node ID: 7041 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7041in_input = id7040out_result[getCycle()%2];

    id7041out_output = id7041in_input;
  }
  { // Node ID: 7043 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7043in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7043in_option0 = in_vars.id7042out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7043in_option1 = id7041out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7043x_1;

    switch((id7043in_sel.getValueAsLong())) {
      case 0l:
        id7043x_1 = id7043in_option0;
        break;
      case 1l:
        id7043x_1 = id7043in_option1;
        break;
      default:
        id7043x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7043out_result[(getCycle()+1)%2] = (id7043x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7044out_output;

  { // Node ID: 7044 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7044in_input = id7043out_result[getCycle()%2];

    id7044out_output = id7044in_input;
  }
  { // Node ID: 7046 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7046in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7046in_option0 = in_vars.id7045out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7046in_option1 = id7044out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7046x_1;

    switch((id7046in_sel.getValueAsLong())) {
      case 0l:
        id7046x_1 = id7046in_option0;
        break;
      case 1l:
        id7046x_1 = id7046in_option1;
        break;
      default:
        id7046x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7046out_result[(getCycle()+1)%2] = (id7046x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7047out_output;

  { // Node ID: 7047 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7047in_input = id7046out_result[getCycle()%2];

    id7047out_output = id7047in_input;
  }
  { // Node ID: 7049 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7049in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7049in_option0 = in_vars.id7048out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7049in_option1 = id7047out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7049x_1;

    switch((id7049in_sel.getValueAsLong())) {
      case 0l:
        id7049x_1 = id7049in_option0;
        break;
      case 1l:
        id7049x_1 = id7049in_option1;
        break;
      default:
        id7049x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7049out_result[(getCycle()+1)%2] = (id7049x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7050out_output;

  { // Node ID: 7050 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7050in_input = id7049out_result[getCycle()%2];

    id7050out_output = id7050in_input;
  }
  { // Node ID: 7052 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7052in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7052in_option0 = in_vars.id7051out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7052in_option1 = id7050out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7052x_1;

    switch((id7052in_sel.getValueAsLong())) {
      case 0l:
        id7052x_1 = id7052in_option0;
        break;
      case 1l:
        id7052x_1 = id7052in_option1;
        break;
      default:
        id7052x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7052out_result[(getCycle()+1)%2] = (id7052x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7053out_output;

  { // Node ID: 7053 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7053in_input = id7052out_result[getCycle()%2];

    id7053out_output = id7053in_input;
  }
  { // Node ID: 7055 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7055in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7055in_option0 = in_vars.id7054out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7055in_option1 = id7053out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7055x_1;

    switch((id7055in_sel.getValueAsLong())) {
      case 0l:
        id7055x_1 = id7055in_option0;
        break;
      case 1l:
        id7055x_1 = id7055in_option1;
        break;
      default:
        id7055x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7055out_result[(getCycle()+1)%2] = (id7055x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7056out_output;

  { // Node ID: 7056 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7056in_input = id7055out_result[getCycle()%2];

    id7056out_output = id7056in_input;
  }
  { // Node ID: 7058 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7058in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7058in_option0 = in_vars.id7057out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7058in_option1 = id7056out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7058x_1;

    switch((id7058in_sel.getValueAsLong())) {
      case 0l:
        id7058x_1 = id7058in_option0;
        break;
      case 1l:
        id7058x_1 = id7058in_option1;
        break;
      default:
        id7058x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7058out_result[(getCycle()+1)%2] = (id7058x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7059out_output;

  { // Node ID: 7059 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7059in_input = id7058out_result[getCycle()%2];

    id7059out_output = id7059in_input;
  }
  { // Node ID: 7061 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7061in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7061in_option0 = in_vars.id7060out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7061in_option1 = id7059out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7061x_1;

    switch((id7061in_sel.getValueAsLong())) {
      case 0l:
        id7061x_1 = id7061in_option0;
        break;
      case 1l:
        id7061x_1 = id7061in_option1;
        break;
      default:
        id7061x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7061out_result[(getCycle()+1)%2] = (id7061x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7062out_output;

  { // Node ID: 7062 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7062in_input = id7061out_result[getCycle()%2];

    id7062out_output = id7062in_input;
  }
  { // Node ID: 7064 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7064in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7064in_option0 = in_vars.id7063out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7064in_option1 = id7062out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7064x_1;

    switch((id7064in_sel.getValueAsLong())) {
      case 0l:
        id7064x_1 = id7064in_option0;
        break;
      case 1l:
        id7064x_1 = id7064in_option1;
        break;
      default:
        id7064x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7064out_result[(getCycle()+1)%2] = (id7064x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7065out_output;

  { // Node ID: 7065 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7065in_input = id7064out_result[getCycle()%2];

    id7065out_output = id7065in_input;
  }
  { // Node ID: 7067 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7067in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7067in_option0 = in_vars.id7066out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7067in_option1 = id7065out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7067x_1;

    switch((id7067in_sel.getValueAsLong())) {
      case 0l:
        id7067x_1 = id7067in_option0;
        break;
      case 1l:
        id7067x_1 = id7067in_option1;
        break;
      default:
        id7067x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7067out_result[(getCycle()+1)%2] = (id7067x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7068out_output;

  { // Node ID: 7068 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7068in_input = id7067out_result[getCycle()%2];

    id7068out_output = id7068in_input;
  }
  { // Node ID: 7070 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7070in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7070in_option0 = in_vars.id7069out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7070in_option1 = id7068out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7070x_1;

    switch((id7070in_sel.getValueAsLong())) {
      case 0l:
        id7070x_1 = id7070in_option0;
        break;
      case 1l:
        id7070x_1 = id7070in_option1;
        break;
      default:
        id7070x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7070out_result[(getCycle()+1)%2] = (id7070x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7071out_output;

  { // Node ID: 7071 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7071in_input = id7070out_result[getCycle()%2];

    id7071out_output = id7071in_input;
  }
  { // Node ID: 7073 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7073in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7073in_option0 = in_vars.id7072out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7073in_option1 = id7071out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7073x_1;

    switch((id7073in_sel.getValueAsLong())) {
      case 0l:
        id7073x_1 = id7073in_option0;
        break;
      case 1l:
        id7073x_1 = id7073in_option1;
        break;
      default:
        id7073x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7073out_result[(getCycle()+1)%2] = (id7073x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7074out_output;

  { // Node ID: 7074 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7074in_input = id7073out_result[getCycle()%2];

    id7074out_output = id7074in_input;
  }
  { // Node ID: 7076 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7076in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7076in_option0 = in_vars.id7075out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7076in_option1 = id7074out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7076x_1;

    switch((id7076in_sel.getValueAsLong())) {
      case 0l:
        id7076x_1 = id7076in_option0;
        break;
      case 1l:
        id7076x_1 = id7076in_option1;
        break;
      default:
        id7076x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7076out_result[(getCycle()+1)%2] = (id7076x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7077out_output;

  { // Node ID: 7077 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7077in_input = id7076out_result[getCycle()%2];

    id7077out_output = id7077in_input;
  }
  { // Node ID: 7079 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7079in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7079in_option0 = in_vars.id7078out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7079in_option1 = id7077out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7079x_1;

    switch((id7079in_sel.getValueAsLong())) {
      case 0l:
        id7079x_1 = id7079in_option0;
        break;
      case 1l:
        id7079x_1 = id7079in_option1;
        break;
      default:
        id7079x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7079out_result[(getCycle()+1)%2] = (id7079x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7080out_output;

  { // Node ID: 7080 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7080in_input = id7079out_result[getCycle()%2];

    id7080out_output = id7080in_input;
  }
  { // Node ID: 7082 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7082in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7082in_option0 = in_vars.id7081out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7082in_option1 = id7080out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7082x_1;

    switch((id7082in_sel.getValueAsLong())) {
      case 0l:
        id7082x_1 = id7082in_option0;
        break;
      case 1l:
        id7082x_1 = id7082in_option1;
        break;
      default:
        id7082x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7082out_result[(getCycle()+1)%2] = (id7082x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7083out_output;

  { // Node ID: 7083 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7083in_input = id7082out_result[getCycle()%2];

    id7083out_output = id7083in_input;
  }
  { // Node ID: 7085 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7085in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7085in_option0 = in_vars.id7084out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7085in_option1 = id7083out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7085x_1;

    switch((id7085in_sel.getValueAsLong())) {
      case 0l:
        id7085x_1 = id7085in_option0;
        break;
      case 1l:
        id7085x_1 = id7085in_option1;
        break;
      default:
        id7085x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7085out_result[(getCycle()+1)%2] = (id7085x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7086out_output;

  { // Node ID: 7086 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7086in_input = id7085out_result[getCycle()%2];

    id7086out_output = id7086in_input;
  }
  { // Node ID: 7088 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7088in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7088in_option0 = in_vars.id7087out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7088in_option1 = id7086out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7088x_1;

    switch((id7088in_sel.getValueAsLong())) {
      case 0l:
        id7088x_1 = id7088in_option0;
        break;
      case 1l:
        id7088x_1 = id7088in_option1;
        break;
      default:
        id7088x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7088out_result[(getCycle()+1)%2] = (id7088x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7089out_output;

  { // Node ID: 7089 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7089in_input = id7088out_result[getCycle()%2];

    id7089out_output = id7089in_input;
  }
  { // Node ID: 7091 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7091in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7091in_option0 = in_vars.id7090out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7091in_option1 = id7089out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7091x_1;

    switch((id7091in_sel.getValueAsLong())) {
      case 0l:
        id7091x_1 = id7091in_option0;
        break;
      case 1l:
        id7091x_1 = id7091in_option1;
        break;
      default:
        id7091x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7091out_result[(getCycle()+1)%2] = (id7091x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7092out_output;

  { // Node ID: 7092 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7092in_input = id7091out_result[getCycle()%2];

    id7092out_output = id7092in_input;
  }
  { // Node ID: 7094 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7094in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7094in_option0 = in_vars.id7093out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7094in_option1 = id7092out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7094x_1;

    switch((id7094in_sel.getValueAsLong())) {
      case 0l:
        id7094x_1 = id7094in_option0;
        break;
      case 1l:
        id7094x_1 = id7094in_option1;
        break;
      default:
        id7094x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7094out_result[(getCycle()+1)%2] = (id7094x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7095out_output;

  { // Node ID: 7095 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7095in_input = id7094out_result[getCycle()%2];

    id7095out_output = id7095in_input;
  }
  { // Node ID: 7097 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7097in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7097in_option0 = in_vars.id7096out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7097in_option1 = id7095out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7097x_1;

    switch((id7097in_sel.getValueAsLong())) {
      case 0l:
        id7097x_1 = id7097in_option0;
        break;
      case 1l:
        id7097x_1 = id7097in_option1;
        break;
      default:
        id7097x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7097out_result[(getCycle()+1)%2] = (id7097x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7098out_output;

  { // Node ID: 7098 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7098in_input = id7097out_result[getCycle()%2];

    id7098out_output = id7098in_input;
  }
  { // Node ID: 7100 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7100in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7100in_option0 = in_vars.id7099out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7100in_option1 = id7098out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7100x_1;

    switch((id7100in_sel.getValueAsLong())) {
      case 0l:
        id7100x_1 = id7100in_option0;
        break;
      case 1l:
        id7100x_1 = id7100in_option1;
        break;
      default:
        id7100x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7100out_result[(getCycle()+1)%2] = (id7100x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7101out_output;

  { // Node ID: 7101 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7101in_input = id7100out_result[getCycle()%2];

    id7101out_output = id7101in_input;
  }
  { // Node ID: 7103 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7103in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7103in_option0 = in_vars.id7102out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7103in_option1 = id7101out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7103x_1;

    switch((id7103in_sel.getValueAsLong())) {
      case 0l:
        id7103x_1 = id7103in_option0;
        break;
      case 1l:
        id7103x_1 = id7103in_option1;
        break;
      default:
        id7103x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7103out_result[(getCycle()+1)%2] = (id7103x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7104out_output;

  { // Node ID: 7104 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7104in_input = id7103out_result[getCycle()%2];

    id7104out_output = id7104in_input;
  }
  { // Node ID: 7106 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7106in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7106in_option0 = in_vars.id7105out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7106in_option1 = id7104out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7106x_1;

    switch((id7106in_sel.getValueAsLong())) {
      case 0l:
        id7106x_1 = id7106in_option0;
        break;
      case 1l:
        id7106x_1 = id7106in_option1;
        break;
      default:
        id7106x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7106out_result[(getCycle()+1)%2] = (id7106x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7107out_output;

  { // Node ID: 7107 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7107in_input = id7106out_result[getCycle()%2];

    id7107out_output = id7107in_input;
  }
  { // Node ID: 7109 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7109in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7109in_option0 = in_vars.id7108out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7109in_option1 = id7107out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7109x_1;

    switch((id7109in_sel.getValueAsLong())) {
      case 0l:
        id7109x_1 = id7109in_option0;
        break;
      case 1l:
        id7109x_1 = id7109in_option1;
        break;
      default:
        id7109x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7109out_result[(getCycle()+1)%2] = (id7109x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7110out_output;

  { // Node ID: 7110 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7110in_input = id7109out_result[getCycle()%2];

    id7110out_output = id7110in_input;
  }
  { // Node ID: 7112 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7112in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7112in_option0 = in_vars.id7111out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7112in_option1 = id7110out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7112x_1;

    switch((id7112in_sel.getValueAsLong())) {
      case 0l:
        id7112x_1 = id7112in_option0;
        break;
      case 1l:
        id7112x_1 = id7112in_option1;
        break;
      default:
        id7112x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7112out_result[(getCycle()+1)%2] = (id7112x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7113out_output;

  { // Node ID: 7113 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7113in_input = id7112out_result[getCycle()%2];

    id7113out_output = id7113in_input;
  }
  { // Node ID: 7115 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7115in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7115in_option0 = in_vars.id7114out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7115in_option1 = id7113out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7115x_1;

    switch((id7115in_sel.getValueAsLong())) {
      case 0l:
        id7115x_1 = id7115in_option0;
        break;
      case 1l:
        id7115x_1 = id7115in_option1;
        break;
      default:
        id7115x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7115out_result[(getCycle()+1)%2] = (id7115x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7116out_output;

  { // Node ID: 7116 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7116in_input = id7115out_result[getCycle()%2];

    id7116out_output = id7116in_input;
  }
  { // Node ID: 7118 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7118in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7118in_option0 = in_vars.id7117out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7118in_option1 = id7116out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7118x_1;

    switch((id7118in_sel.getValueAsLong())) {
      case 0l:
        id7118x_1 = id7118in_option0;
        break;
      case 1l:
        id7118x_1 = id7118in_option1;
        break;
      default:
        id7118x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7118out_result[(getCycle()+1)%2] = (id7118x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7119out_output;

  { // Node ID: 7119 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7119in_input = id7118out_result[getCycle()%2];

    id7119out_output = id7119in_input;
  }
  { // Node ID: 7121 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7121in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7121in_option0 = in_vars.id7120out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7121in_option1 = id7119out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7121x_1;

    switch((id7121in_sel.getValueAsLong())) {
      case 0l:
        id7121x_1 = id7121in_option0;
        break;
      case 1l:
        id7121x_1 = id7121in_option1;
        break;
      default:
        id7121x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7121out_result[(getCycle()+1)%2] = (id7121x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7122out_output;

  { // Node ID: 7122 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7122in_input = id7121out_result[getCycle()%2];

    id7122out_output = id7122in_input;
  }
  { // Node ID: 7124 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7124in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7124in_option0 = in_vars.id7123out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7124in_option1 = id7122out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7124x_1;

    switch((id7124in_sel.getValueAsLong())) {
      case 0l:
        id7124x_1 = id7124in_option0;
        break;
      case 1l:
        id7124x_1 = id7124in_option1;
        break;
      default:
        id7124x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7124out_result[(getCycle()+1)%2] = (id7124x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7125out_output;

  { // Node ID: 7125 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7125in_input = id7124out_result[getCycle()%2];

    id7125out_output = id7125in_input;
  }
  { // Node ID: 7127 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7127in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7127in_option0 = in_vars.id7126out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7127in_option1 = id7125out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7127x_1;

    switch((id7127in_sel.getValueAsLong())) {
      case 0l:
        id7127x_1 = id7127in_option0;
        break;
      case 1l:
        id7127x_1 = id7127in_option1;
        break;
      default:
        id7127x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7127out_result[(getCycle()+1)%2] = (id7127x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7128out_output;

  { // Node ID: 7128 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7128in_input = id7127out_result[getCycle()%2];

    id7128out_output = id7128in_input;
  }
  { // Node ID: 7130 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7130in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7130in_option0 = in_vars.id7129out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7130in_option1 = id7128out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7130x_1;

    switch((id7130in_sel.getValueAsLong())) {
      case 0l:
        id7130x_1 = id7130in_option0;
        break;
      case 1l:
        id7130x_1 = id7130in_option1;
        break;
      default:
        id7130x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7130out_result[(getCycle()+1)%2] = (id7130x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7131out_output;

  { // Node ID: 7131 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7131in_input = id7130out_result[getCycle()%2];

    id7131out_output = id7131in_input;
  }
  { // Node ID: 7133 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7133in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7133in_option0 = in_vars.id7132out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7133in_option1 = id7131out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7133x_1;

    switch((id7133in_sel.getValueAsLong())) {
      case 0l:
        id7133x_1 = id7133in_option0;
        break;
      case 1l:
        id7133x_1 = id7133in_option1;
        break;
      default:
        id7133x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7133out_result[(getCycle()+1)%2] = (id7133x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7134out_output;

  { // Node ID: 7134 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7134in_input = id7133out_result[getCycle()%2];

    id7134out_output = id7134in_input;
  }
  { // Node ID: 7136 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7136in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7136in_option0 = in_vars.id7135out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7136in_option1 = id7134out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7136x_1;

    switch((id7136in_sel.getValueAsLong())) {
      case 0l:
        id7136x_1 = id7136in_option0;
        break;
      case 1l:
        id7136x_1 = id7136in_option1;
        break;
      default:
        id7136x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7136out_result[(getCycle()+1)%2] = (id7136x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7137out_output;

  { // Node ID: 7137 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7137in_input = id7136out_result[getCycle()%2];

    id7137out_output = id7137in_input;
  }
  { // Node ID: 7139 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7139in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7139in_option0 = in_vars.id7138out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7139in_option1 = id7137out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7139x_1;

    switch((id7139in_sel.getValueAsLong())) {
      case 0l:
        id7139x_1 = id7139in_option0;
        break;
      case 1l:
        id7139x_1 = id7139in_option1;
        break;
      default:
        id7139x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7139out_result[(getCycle()+1)%2] = (id7139x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7140out_output;

  { // Node ID: 7140 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7140in_input = id7139out_result[getCycle()%2];

    id7140out_output = id7140in_input;
  }
  { // Node ID: 7142 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7142in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7142in_option0 = in_vars.id7141out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7142in_option1 = id7140out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7142x_1;

    switch((id7142in_sel.getValueAsLong())) {
      case 0l:
        id7142x_1 = id7142in_option0;
        break;
      case 1l:
        id7142x_1 = id7142in_option1;
        break;
      default:
        id7142x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7142out_result[(getCycle()+1)%2] = (id7142x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7143out_output;

  { // Node ID: 7143 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7143in_input = id7142out_result[getCycle()%2];

    id7143out_output = id7143in_input;
  }
  { // Node ID: 7145 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7145in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7145in_option0 = in_vars.id7144out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7145in_option1 = id7143out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7145x_1;

    switch((id7145in_sel.getValueAsLong())) {
      case 0l:
        id7145x_1 = id7145in_option0;
        break;
      case 1l:
        id7145x_1 = id7145in_option1;
        break;
      default:
        id7145x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7145out_result[(getCycle()+1)%2] = (id7145x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7146out_output;

  { // Node ID: 7146 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7146in_input = id7145out_result[getCycle()%2];

    id7146out_output = id7146in_input;
  }
  { // Node ID: 7148 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7148in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7148in_option0 = in_vars.id7147out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7148in_option1 = id7146out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7148x_1;

    switch((id7148in_sel.getValueAsLong())) {
      case 0l:
        id7148x_1 = id7148in_option0;
        break;
      case 1l:
        id7148x_1 = id7148in_option1;
        break;
      default:
        id7148x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7148out_result[(getCycle()+1)%2] = (id7148x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7149out_output;

  { // Node ID: 7149 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7149in_input = id7148out_result[getCycle()%2];

    id7149out_output = id7149in_input;
  }
  { // Node ID: 7151 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7151in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7151in_option0 = in_vars.id7150out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7151in_option1 = id7149out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7151x_1;

    switch((id7151in_sel.getValueAsLong())) {
      case 0l:
        id7151x_1 = id7151in_option0;
        break;
      case 1l:
        id7151x_1 = id7151in_option1;
        break;
      default:
        id7151x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7151out_result[(getCycle()+1)%2] = (id7151x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7152out_output;

  { // Node ID: 7152 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7152in_input = id7151out_result[getCycle()%2];

    id7152out_output = id7152in_input;
  }
  { // Node ID: 7154 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7154in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7154in_option0 = in_vars.id7153out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7154in_option1 = id7152out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7154x_1;

    switch((id7154in_sel.getValueAsLong())) {
      case 0l:
        id7154x_1 = id7154in_option0;
        break;
      case 1l:
        id7154x_1 = id7154in_option1;
        break;
      default:
        id7154x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7154out_result[(getCycle()+1)%2] = (id7154x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7155out_output;

  { // Node ID: 7155 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7155in_input = id7154out_result[getCycle()%2];

    id7155out_output = id7155in_input;
  }
  { // Node ID: 7157 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7157in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7157in_option0 = in_vars.id7156out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7157in_option1 = id7155out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7157x_1;

    switch((id7157in_sel.getValueAsLong())) {
      case 0l:
        id7157x_1 = id7157in_option0;
        break;
      case 1l:
        id7157x_1 = id7157in_option1;
        break;
      default:
        id7157x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7157out_result[(getCycle()+1)%2] = (id7157x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7158out_output;

  { // Node ID: 7158 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7158in_input = id7157out_result[getCycle()%2];

    id7158out_output = id7158in_input;
  }
  { // Node ID: 7160 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7160in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7160in_option0 = in_vars.id7159out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7160in_option1 = id7158out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7160x_1;

    switch((id7160in_sel.getValueAsLong())) {
      case 0l:
        id7160x_1 = id7160in_option0;
        break;
      case 1l:
        id7160x_1 = id7160in_option1;
        break;
      default:
        id7160x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7160out_result[(getCycle()+1)%2] = (id7160x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7161out_output;

  { // Node ID: 7161 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7161in_input = id7160out_result[getCycle()%2];

    id7161out_output = id7161in_input;
  }
  { // Node ID: 7163 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7163in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7163in_option0 = in_vars.id7162out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7163in_option1 = id7161out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7163x_1;

    switch((id7163in_sel.getValueAsLong())) {
      case 0l:
        id7163x_1 = id7163in_option0;
        break;
      case 1l:
        id7163x_1 = id7163in_option1;
        break;
      default:
        id7163x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7163out_result[(getCycle()+1)%2] = (id7163x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7164out_output;

  { // Node ID: 7164 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7164in_input = id7163out_result[getCycle()%2];

    id7164out_output = id7164in_input;
  }
  { // Node ID: 7166 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7166in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7166in_option0 = in_vars.id7165out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7166in_option1 = id7164out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7166x_1;

    switch((id7166in_sel.getValueAsLong())) {
      case 0l:
        id7166x_1 = id7166in_option0;
        break;
      case 1l:
        id7166x_1 = id7166in_option1;
        break;
      default:
        id7166x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7166out_result[(getCycle()+1)%2] = (id7166x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7167out_output;

  { // Node ID: 7167 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7167in_input = id7166out_result[getCycle()%2];

    id7167out_output = id7167in_input;
  }
  { // Node ID: 7169 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7169in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7169in_option0 = in_vars.id7168out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7169in_option1 = id7167out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7169x_1;

    switch((id7169in_sel.getValueAsLong())) {
      case 0l:
        id7169x_1 = id7169in_option0;
        break;
      case 1l:
        id7169x_1 = id7169in_option1;
        break;
      default:
        id7169x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7169out_result[(getCycle()+1)%2] = (id7169x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7170out_output;

  { // Node ID: 7170 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7170in_input = id7169out_result[getCycle()%2];

    id7170out_output = id7170in_input;
  }
  { // Node ID: 7172 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7172in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7172in_option0 = in_vars.id7171out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7172in_option1 = id7170out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7172x_1;

    switch((id7172in_sel.getValueAsLong())) {
      case 0l:
        id7172x_1 = id7172in_option0;
        break;
      case 1l:
        id7172x_1 = id7172in_option1;
        break;
      default:
        id7172x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7172out_result[(getCycle()+1)%2] = (id7172x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7173out_output;

  { // Node ID: 7173 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7173in_input = id7172out_result[getCycle()%2];

    id7173out_output = id7173in_input;
  }
  { // Node ID: 7175 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7175in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7175in_option0 = in_vars.id7174out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7175in_option1 = id7173out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7175x_1;

    switch((id7175in_sel.getValueAsLong())) {
      case 0l:
        id7175x_1 = id7175in_option0;
        break;
      case 1l:
        id7175x_1 = id7175in_option1;
        break;
      default:
        id7175x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7175out_result[(getCycle()+1)%2] = (id7175x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7176out_output;

  { // Node ID: 7176 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7176in_input = id7175out_result[getCycle()%2];

    id7176out_output = id7176in_input;
  }
  { // Node ID: 7178 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7178in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7178in_option0 = in_vars.id7177out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7178in_option1 = id7176out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7178x_1;

    switch((id7178in_sel.getValueAsLong())) {
      case 0l:
        id7178x_1 = id7178in_option0;
        break;
      case 1l:
        id7178x_1 = id7178in_option1;
        break;
      default:
        id7178x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7178out_result[(getCycle()+1)%2] = (id7178x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7179out_output;

  { // Node ID: 7179 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7179in_input = id7178out_result[getCycle()%2];

    id7179out_output = id7179in_input;
  }
  { // Node ID: 7181 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7181in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7181in_option0 = in_vars.id7180out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7181in_option1 = id7179out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7181x_1;

    switch((id7181in_sel.getValueAsLong())) {
      case 0l:
        id7181x_1 = id7181in_option0;
        break;
      case 1l:
        id7181x_1 = id7181in_option1;
        break;
      default:
        id7181x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7181out_result[(getCycle()+1)%2] = (id7181x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7182out_output;

  { // Node ID: 7182 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7182in_input = id7181out_result[getCycle()%2];

    id7182out_output = id7182in_input;
  }
  { // Node ID: 7184 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7184in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7184in_option0 = in_vars.id7183out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7184in_option1 = id7182out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7184x_1;

    switch((id7184in_sel.getValueAsLong())) {
      case 0l:
        id7184x_1 = id7184in_option0;
        break;
      case 1l:
        id7184x_1 = id7184in_option1;
        break;
      default:
        id7184x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7184out_result[(getCycle()+1)%2] = (id7184x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7185out_output;

  { // Node ID: 7185 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7185in_input = id7184out_result[getCycle()%2];

    id7185out_output = id7185in_input;
  }
  { // Node ID: 7187 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7187in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7187in_option0 = in_vars.id7186out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7187in_option1 = id7185out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7187x_1;

    switch((id7187in_sel.getValueAsLong())) {
      case 0l:
        id7187x_1 = id7187in_option0;
        break;
      case 1l:
        id7187x_1 = id7187in_option1;
        break;
      default:
        id7187x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7187out_result[(getCycle()+1)%2] = (id7187x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7188out_output;

  { // Node ID: 7188 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7188in_input = id7187out_result[getCycle()%2];

    id7188out_output = id7188in_input;
  }
  { // Node ID: 7190 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7190in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7190in_option0 = in_vars.id7189out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7190in_option1 = id7188out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7190x_1;

    switch((id7190in_sel.getValueAsLong())) {
      case 0l:
        id7190x_1 = id7190in_option0;
        break;
      case 1l:
        id7190x_1 = id7190in_option1;
        break;
      default:
        id7190x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7190out_result[(getCycle()+1)%2] = (id7190x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7191out_output;

  { // Node ID: 7191 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7191in_input = id7190out_result[getCycle()%2];

    id7191out_output = id7191in_input;
  }
  { // Node ID: 7193 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7193in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7193in_option0 = in_vars.id7192out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7193in_option1 = id7191out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7193x_1;

    switch((id7193in_sel.getValueAsLong())) {
      case 0l:
        id7193x_1 = id7193in_option0;
        break;
      case 1l:
        id7193x_1 = id7193in_option1;
        break;
      default:
        id7193x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7193out_result[(getCycle()+1)%2] = (id7193x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7194out_output;

  { // Node ID: 7194 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7194in_input = id7193out_result[getCycle()%2];

    id7194out_output = id7194in_input;
  }
  { // Node ID: 7196 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7196in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7196in_option0 = in_vars.id7195out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7196in_option1 = id7194out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7196x_1;

    switch((id7196in_sel.getValueAsLong())) {
      case 0l:
        id7196x_1 = id7196in_option0;
        break;
      case 1l:
        id7196x_1 = id7196in_option1;
        break;
      default:
        id7196x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7196out_result[(getCycle()+1)%2] = (id7196x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7197out_output;

  { // Node ID: 7197 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7197in_input = id7196out_result[getCycle()%2];

    id7197out_output = id7197in_input;
  }
  { // Node ID: 7199 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7199in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7199in_option0 = in_vars.id7198out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7199in_option1 = id7197out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7199x_1;

    switch((id7199in_sel.getValueAsLong())) {
      case 0l:
        id7199x_1 = id7199in_option0;
        break;
      case 1l:
        id7199x_1 = id7199in_option1;
        break;
      default:
        id7199x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7199out_result[(getCycle()+1)%2] = (id7199x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7200out_output;

  { // Node ID: 7200 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7200in_input = id7199out_result[getCycle()%2];

    id7200out_output = id7200in_input;
  }
  { // Node ID: 7202 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7202in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7202in_option0 = in_vars.id7201out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7202in_option1 = id7200out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7202x_1;

    switch((id7202in_sel.getValueAsLong())) {
      case 0l:
        id7202x_1 = id7202in_option0;
        break;
      case 1l:
        id7202x_1 = id7202in_option1;
        break;
      default:
        id7202x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7202out_result[(getCycle()+1)%2] = (id7202x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7203out_output;

  { // Node ID: 7203 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7203in_input = id7202out_result[getCycle()%2];

    id7203out_output = id7203in_input;
  }
  { // Node ID: 7205 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7205in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7205in_option0 = in_vars.id7204out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7205in_option1 = id7203out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7205x_1;

    switch((id7205in_sel.getValueAsLong())) {
      case 0l:
        id7205x_1 = id7205in_option0;
        break;
      case 1l:
        id7205x_1 = id7205in_option1;
        break;
      default:
        id7205x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7205out_result[(getCycle()+1)%2] = (id7205x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7206out_output;

  { // Node ID: 7206 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7206in_input = id7205out_result[getCycle()%2];

    id7206out_output = id7206in_input;
  }
  { // Node ID: 7208 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7208in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7208in_option0 = in_vars.id7207out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7208in_option1 = id7206out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7208x_1;

    switch((id7208in_sel.getValueAsLong())) {
      case 0l:
        id7208x_1 = id7208in_option0;
        break;
      case 1l:
        id7208x_1 = id7208in_option1;
        break;
      default:
        id7208x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7208out_result[(getCycle()+1)%2] = (id7208x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7209out_output;

  { // Node ID: 7209 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7209in_input = id7208out_result[getCycle()%2];

    id7209out_output = id7209in_input;
  }
  { // Node ID: 7211 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7211in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7211in_option0 = in_vars.id7210out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7211in_option1 = id7209out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7211x_1;

    switch((id7211in_sel.getValueAsLong())) {
      case 0l:
        id7211x_1 = id7211in_option0;
        break;
      case 1l:
        id7211x_1 = id7211in_option1;
        break;
      default:
        id7211x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7211out_result[(getCycle()+1)%2] = (id7211x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7212out_output;

  { // Node ID: 7212 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7212in_input = id7211out_result[getCycle()%2];

    id7212out_output = id7212in_input;
  }
  { // Node ID: 7214 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7214in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7214in_option0 = in_vars.id7213out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7214in_option1 = id7212out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7214x_1;

    switch((id7214in_sel.getValueAsLong())) {
      case 0l:
        id7214x_1 = id7214in_option0;
        break;
      case 1l:
        id7214x_1 = id7214in_option1;
        break;
      default:
        id7214x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7214out_result[(getCycle()+1)%2] = (id7214x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7215out_output;

  { // Node ID: 7215 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7215in_input = id7214out_result[getCycle()%2];

    id7215out_output = id7215in_input;
  }
  { // Node ID: 7217 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7217in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7217in_option0 = in_vars.id7216out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7217in_option1 = id7215out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7217x_1;

    switch((id7217in_sel.getValueAsLong())) {
      case 0l:
        id7217x_1 = id7217in_option0;
        break;
      case 1l:
        id7217x_1 = id7217in_option1;
        break;
      default:
        id7217x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7217out_result[(getCycle()+1)%2] = (id7217x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7218out_output;

  { // Node ID: 7218 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7218in_input = id7217out_result[getCycle()%2];

    id7218out_output = id7218in_input;
  }
  { // Node ID: 7220 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7220in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7220in_option0 = in_vars.id7219out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7220in_option1 = id7218out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7220x_1;

    switch((id7220in_sel.getValueAsLong())) {
      case 0l:
        id7220x_1 = id7220in_option0;
        break;
      case 1l:
        id7220x_1 = id7220in_option1;
        break;
      default:
        id7220x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7220out_result[(getCycle()+1)%2] = (id7220x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7221out_output;

  { // Node ID: 7221 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7221in_input = id7220out_result[getCycle()%2];

    id7221out_output = id7221in_input;
  }
  { // Node ID: 7223 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7223in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7223in_option0 = in_vars.id7222out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7223in_option1 = id7221out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7223x_1;

    switch((id7223in_sel.getValueAsLong())) {
      case 0l:
        id7223x_1 = id7223in_option0;
        break;
      case 1l:
        id7223x_1 = id7223in_option1;
        break;
      default:
        id7223x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7223out_result[(getCycle()+1)%2] = (id7223x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7224out_output;

  { // Node ID: 7224 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7224in_input = id7223out_result[getCycle()%2];

    id7224out_output = id7224in_input;
  }
  { // Node ID: 7226 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7226in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7226in_option0 = in_vars.id7225out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7226in_option1 = id7224out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7226x_1;

    switch((id7226in_sel.getValueAsLong())) {
      case 0l:
        id7226x_1 = id7226in_option0;
        break;
      case 1l:
        id7226x_1 = id7226in_option1;
        break;
      default:
        id7226x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7226out_result[(getCycle()+1)%2] = (id7226x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7227out_output;

  { // Node ID: 7227 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7227in_input = id7226out_result[getCycle()%2];

    id7227out_output = id7227in_input;
  }
  { // Node ID: 7229 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7229in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7229in_option0 = in_vars.id7228out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7229in_option1 = id7227out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7229x_1;

    switch((id7229in_sel.getValueAsLong())) {
      case 0l:
        id7229x_1 = id7229in_option0;
        break;
      case 1l:
        id7229x_1 = id7229in_option1;
        break;
      default:
        id7229x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7229out_result[(getCycle()+1)%2] = (id7229x_1);
  }
  HWRawBits<32> id7492out_output;

  { // Node ID: 7492 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7492in_input = id7229out_result[getCycle()%2];

    id7492out_output = (cast_fixed2bits(id7492in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7231out_output;

  { // Node ID: 7231 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7231in_input = id7232out_result[getCycle()%2];

    id7231out_output = id7231in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7230out_output;

  { // Node ID: 7230 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7230in_input = id7229out_result[getCycle()%2];

    id7230out_output = id7230in_input;
  }
  { // Node ID: 7232 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7232in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7232in_option0 = id7231out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7232in_option1 = id7230out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7232x_1;

    switch((id7232in_sel.getValueAsLong())) {
      case 0l:
        id7232x_1 = id7232in_option0;
        break;
      case 1l:
        id7232x_1 = id7232in_option1;
        break;
      default:
        id7232x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7232out_result[(getCycle()+1)%2] = (id7232x_1);
  }
  HWRawBits<32> id7490out_output;

  { // Node ID: 7490 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7490in_input = id7232out_result[getCycle()%2];

    id7490out_output = (cast_fixed2bits(id7490in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7234out_output;

  { // Node ID: 7234 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7234in_input = id7235out_result[getCycle()%2];

    id7234out_output = id7234in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7233out_output;

  { // Node ID: 7233 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7233in_input = id7232out_result[getCycle()%2];

    id7233out_output = id7233in_input;
  }
  { // Node ID: 7235 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7235in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7235in_option0 = id7234out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7235in_option1 = id7233out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7235x_1;

    switch((id7235in_sel.getValueAsLong())) {
      case 0l:
        id7235x_1 = id7235in_option0;
        break;
      case 1l:
        id7235x_1 = id7235in_option1;
        break;
      default:
        id7235x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7235out_result[(getCycle()+1)%2] = (id7235x_1);
  }
  HWRawBits<32> id7488out_output;

  { // Node ID: 7488 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7488in_input = id7235out_result[getCycle()%2];

    id7488out_output = (cast_fixed2bits(id7488in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7237out_output;

  { // Node ID: 7237 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7237in_input = id7238out_result[getCycle()%2];

    id7237out_output = id7237in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7236out_output;

  { // Node ID: 7236 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7236in_input = id7235out_result[getCycle()%2];

    id7236out_output = id7236in_input;
  }
  { // Node ID: 7238 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7238in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7238in_option0 = id7237out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7238in_option1 = id7236out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7238x_1;

    switch((id7238in_sel.getValueAsLong())) {
      case 0l:
        id7238x_1 = id7238in_option0;
        break;
      case 1l:
        id7238x_1 = id7238in_option1;
        break;
      default:
        id7238x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7238out_result[(getCycle()+1)%2] = (id7238x_1);
  }
  HWRawBits<32> id7486out_output;

  { // Node ID: 7486 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7486in_input = id7238out_result[getCycle()%2];

    id7486out_output = (cast_fixed2bits(id7486in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7240out_output;

  { // Node ID: 7240 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7240in_input = id7241out_result[getCycle()%2];

    id7240out_output = id7240in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7239out_output;

  { // Node ID: 7239 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7239in_input = id7238out_result[getCycle()%2];

    id7239out_output = id7239in_input;
  }
  { // Node ID: 7241 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7241in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7241in_option0 = id7240out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7241in_option1 = id7239out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7241x_1;

    switch((id7241in_sel.getValueAsLong())) {
      case 0l:
        id7241x_1 = id7241in_option0;
        break;
      case 1l:
        id7241x_1 = id7241in_option1;
        break;
      default:
        id7241x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7241out_result[(getCycle()+1)%2] = (id7241x_1);
  }
  HWRawBits<32> id7484out_output;

  { // Node ID: 7484 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7484in_input = id7241out_result[getCycle()%2];

    id7484out_output = (cast_fixed2bits(id7484in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7264out_output;

  { // Node ID: 7264 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7264in_input = id7265out_result[getCycle()%2];

    id7264out_output = id7264in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7261out_output;

  { // Node ID: 7261 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7261in_input = id7262out_result[getCycle()%2];

    id7261out_output = id7261in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7258out_output;

  { // Node ID: 7258 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7258in_input = id7259out_result[getCycle()%2];

    id7258out_output = id7258in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7255out_output;

  { // Node ID: 7255 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7255in_input = id7256out_result[getCycle()%2];

    id7255out_output = id7255in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7252out_output;

  { // Node ID: 7252 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7252in_input = id7253out_result[getCycle()%2];

    id7252out_output = id7252in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7249out_output;

  { // Node ID: 7249 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7249in_input = id7250out_result[getCycle()%2];

    id7249out_output = id7249in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7246out_output;

  { // Node ID: 7246 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7246in_input = id7247out_result[getCycle()%2];

    id7246out_output = id7246in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7243out_output;

  { // Node ID: 7243 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7243in_input = id7244out_result[getCycle()%2];

    id7243out_output = id7243in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7242out_output;

  { // Node ID: 7242 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7242in_input = id7241out_result[getCycle()%2];

    id7242out_output = id7242in_input;
  }
  { // Node ID: 7244 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7244in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7244in_option0 = id7243out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7244in_option1 = id7242out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7244x_1;

    switch((id7244in_sel.getValueAsLong())) {
      case 0l:
        id7244x_1 = id7244in_option0;
        break;
      case 1l:
        id7244x_1 = id7244in_option1;
        break;
      default:
        id7244x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7244out_result[(getCycle()+1)%2] = (id7244x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7245out_output;

  { // Node ID: 7245 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7245in_input = id7244out_result[getCycle()%2];

    id7245out_output = id7245in_input;
  }
  { // Node ID: 7247 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7247in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7247in_option0 = id7246out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7247in_option1 = id7245out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7247x_1;

    switch((id7247in_sel.getValueAsLong())) {
      case 0l:
        id7247x_1 = id7247in_option0;
        break;
      case 1l:
        id7247x_1 = id7247in_option1;
        break;
      default:
        id7247x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7247out_result[(getCycle()+1)%2] = (id7247x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7248out_output;

  { // Node ID: 7248 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7248in_input = id7247out_result[getCycle()%2];

    id7248out_output = id7248in_input;
  }
  { // Node ID: 7250 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7250in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7250in_option0 = id7249out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7250in_option1 = id7248out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7250x_1;

    switch((id7250in_sel.getValueAsLong())) {
      case 0l:
        id7250x_1 = id7250in_option0;
        break;
      case 1l:
        id7250x_1 = id7250in_option1;
        break;
      default:
        id7250x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7250out_result[(getCycle()+1)%2] = (id7250x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7251out_output;

  { // Node ID: 7251 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7251in_input = id7250out_result[getCycle()%2];

    id7251out_output = id7251in_input;
  }
  { // Node ID: 7253 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7253in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7253in_option0 = id7252out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7253in_option1 = id7251out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7253x_1;

    switch((id7253in_sel.getValueAsLong())) {
      case 0l:
        id7253x_1 = id7253in_option0;
        break;
      case 1l:
        id7253x_1 = id7253in_option1;
        break;
      default:
        id7253x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7253out_result[(getCycle()+1)%2] = (id7253x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7254out_output;

  { // Node ID: 7254 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7254in_input = id7253out_result[getCycle()%2];

    id7254out_output = id7254in_input;
  }
  { // Node ID: 7256 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7256in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7256in_option0 = id7255out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7256in_option1 = id7254out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7256x_1;

    switch((id7256in_sel.getValueAsLong())) {
      case 0l:
        id7256x_1 = id7256in_option0;
        break;
      case 1l:
        id7256x_1 = id7256in_option1;
        break;
      default:
        id7256x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7256out_result[(getCycle()+1)%2] = (id7256x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7257out_output;

  { // Node ID: 7257 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7257in_input = id7256out_result[getCycle()%2];

    id7257out_output = id7257in_input;
  }
  { // Node ID: 7259 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7259in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7259in_option0 = id7258out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7259in_option1 = id7257out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7259x_1;

    switch((id7259in_sel.getValueAsLong())) {
      case 0l:
        id7259x_1 = id7259in_option0;
        break;
      case 1l:
        id7259x_1 = id7259in_option1;
        break;
      default:
        id7259x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7259out_result[(getCycle()+1)%2] = (id7259x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7260out_output;

  { // Node ID: 7260 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7260in_input = id7259out_result[getCycle()%2];

    id7260out_output = id7260in_input;
  }
  { // Node ID: 7262 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7262in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7262in_option0 = id7261out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7262in_option1 = id7260out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7262x_1;

    switch((id7262in_sel.getValueAsLong())) {
      case 0l:
        id7262x_1 = id7262in_option0;
        break;
      case 1l:
        id7262x_1 = id7262in_option1;
        break;
      default:
        id7262x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7262out_result[(getCycle()+1)%2] = (id7262x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7263out_output;

  { // Node ID: 7263 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7263in_input = id7262out_result[getCycle()%2];

    id7263out_output = id7263in_input;
  }
  { // Node ID: 7265 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7265in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7265in_option0 = id7264out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7265in_option1 = id7263out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7265x_1;

    switch((id7265in_sel.getValueAsLong())) {
      case 0l:
        id7265x_1 = id7265in_option0;
        break;
      case 1l:
        id7265x_1 = id7265in_option1;
        break;
      default:
        id7265x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7265out_result[(getCycle()+1)%2] = (id7265x_1);
  }
  HWRawBits<32> id7482out_output;

  { // Node ID: 7482 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7482in_input = id7265out_result[getCycle()%2];

    id7482out_output = (cast_fixed2bits(id7482in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7267out_output;

  { // Node ID: 7267 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7267in_input = id7268out_result[getCycle()%2];

    id7267out_output = id7267in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7266out_output;

  { // Node ID: 7266 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7266in_input = id7265out_result[getCycle()%2];

    id7266out_output = id7266in_input;
  }
  { // Node ID: 7268 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7268in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7268in_option0 = id7267out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7268in_option1 = id7266out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7268x_1;

    switch((id7268in_sel.getValueAsLong())) {
      case 0l:
        id7268x_1 = id7268in_option0;
        break;
      case 1l:
        id7268x_1 = id7268in_option1;
        break;
      default:
        id7268x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7268out_result[(getCycle()+1)%2] = (id7268x_1);
  }
  HWRawBits<32> id7480out_output;

  { // Node ID: 7480 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7480in_input = id7268out_result[getCycle()%2];

    id7480out_output = (cast_fixed2bits(id7480in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7270out_output;

  { // Node ID: 7270 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7270in_input = id7271out_result[getCycle()%2];

    id7270out_output = id7270in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7269out_output;

  { // Node ID: 7269 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7269in_input = id7268out_result[getCycle()%2];

    id7269out_output = id7269in_input;
  }
  { // Node ID: 7271 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7271in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7271in_option0 = id7270out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7271in_option1 = id7269out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7271x_1;

    switch((id7271in_sel.getValueAsLong())) {
      case 0l:
        id7271x_1 = id7271in_option0;
        break;
      case 1l:
        id7271x_1 = id7271in_option1;
        break;
      default:
        id7271x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7271out_result[(getCycle()+1)%2] = (id7271x_1);
  }
  HWRawBits<32> id7478out_output;

  { // Node ID: 7478 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7478in_input = id7271out_result[getCycle()%2];

    id7478out_output = (cast_fixed2bits(id7478in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7273out_output;

  { // Node ID: 7273 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7273in_input = id7274out_result[getCycle()%2];

    id7273out_output = id7273in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7272out_output;

  { // Node ID: 7272 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7272in_input = id7271out_result[getCycle()%2];

    id7272out_output = id7272in_input;
  }
  { // Node ID: 7274 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7274in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7274in_option0 = id7273out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7274in_option1 = id7272out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7274x_1;

    switch((id7274in_sel.getValueAsLong())) {
      case 0l:
        id7274x_1 = id7274in_option0;
        break;
      case 1l:
        id7274x_1 = id7274in_option1;
        break;
      default:
        id7274x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7274out_result[(getCycle()+1)%2] = (id7274x_1);
  }
  HWRawBits<32> id7476out_output;

  { // Node ID: 7476 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7476in_input = id7274out_result[getCycle()%2];

    id7476out_output = (cast_fixed2bits(id7476in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7276out_output;

  { // Node ID: 7276 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7276in_input = id7277out_result[getCycle()%2];

    id7276out_output = id7276in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7275out_output;

  { // Node ID: 7275 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7275in_input = id7274out_result[getCycle()%2];

    id7275out_output = id7275in_input;
  }
  { // Node ID: 7277 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7277in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7277in_option0 = id7276out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7277in_option1 = id7275out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7277x_1;

    switch((id7277in_sel.getValueAsLong())) {
      case 0l:
        id7277x_1 = id7277in_option0;
        break;
      case 1l:
        id7277x_1 = id7277in_option1;
        break;
      default:
        id7277x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7277out_result[(getCycle()+1)%2] = (id7277x_1);
  }
  HWRawBits<32> id7474out_output;

  { // Node ID: 7474 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7474in_input = id7277out_result[getCycle()%2];

    id7474out_output = (cast_fixed2bits(id7474in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7300out_output;

  { // Node ID: 7300 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7300in_input = id7301out_result[getCycle()%2];

    id7300out_output = id7300in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7297out_output;

  { // Node ID: 7297 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7297in_input = id7298out_result[getCycle()%2];

    id7297out_output = id7297in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7294out_output;

  { // Node ID: 7294 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7294in_input = id7295out_result[getCycle()%2];

    id7294out_output = id7294in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7291out_output;

  { // Node ID: 7291 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7291in_input = id7292out_result[getCycle()%2];

    id7291out_output = id7291in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7288out_output;

  { // Node ID: 7288 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7288in_input = id7289out_result[getCycle()%2];

    id7288out_output = id7288in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7285out_output;

  { // Node ID: 7285 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7285in_input = id7286out_result[getCycle()%2];

    id7285out_output = id7285in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7282out_output;

  { // Node ID: 7282 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7282in_input = id7283out_result[getCycle()%2];

    id7282out_output = id7282in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7279out_output;

  { // Node ID: 7279 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7279in_input = id7280out_result[getCycle()%2];

    id7279out_output = id7279in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7278out_output;

  { // Node ID: 7278 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7278in_input = id7277out_result[getCycle()%2];

    id7278out_output = id7278in_input;
  }
  { // Node ID: 7280 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7280in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7280in_option0 = id7279out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7280in_option1 = id7278out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7280x_1;

    switch((id7280in_sel.getValueAsLong())) {
      case 0l:
        id7280x_1 = id7280in_option0;
        break;
      case 1l:
        id7280x_1 = id7280in_option1;
        break;
      default:
        id7280x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7280out_result[(getCycle()+1)%2] = (id7280x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7281out_output;

  { // Node ID: 7281 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7281in_input = id7280out_result[getCycle()%2];

    id7281out_output = id7281in_input;
  }
  { // Node ID: 7283 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7283in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7283in_option0 = id7282out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7283in_option1 = id7281out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7283x_1;

    switch((id7283in_sel.getValueAsLong())) {
      case 0l:
        id7283x_1 = id7283in_option0;
        break;
      case 1l:
        id7283x_1 = id7283in_option1;
        break;
      default:
        id7283x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7283out_result[(getCycle()+1)%2] = (id7283x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7284out_output;

  { // Node ID: 7284 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7284in_input = id7283out_result[getCycle()%2];

    id7284out_output = id7284in_input;
  }
  { // Node ID: 7286 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7286in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7286in_option0 = id7285out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7286in_option1 = id7284out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7286x_1;

    switch((id7286in_sel.getValueAsLong())) {
      case 0l:
        id7286x_1 = id7286in_option0;
        break;
      case 1l:
        id7286x_1 = id7286in_option1;
        break;
      default:
        id7286x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7286out_result[(getCycle()+1)%2] = (id7286x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7287out_output;

  { // Node ID: 7287 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7287in_input = id7286out_result[getCycle()%2];

    id7287out_output = id7287in_input;
  }
  { // Node ID: 7289 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7289in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7289in_option0 = id7288out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7289in_option1 = id7287out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7289x_1;

    switch((id7289in_sel.getValueAsLong())) {
      case 0l:
        id7289x_1 = id7289in_option0;
        break;
      case 1l:
        id7289x_1 = id7289in_option1;
        break;
      default:
        id7289x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7289out_result[(getCycle()+1)%2] = (id7289x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7290out_output;

  { // Node ID: 7290 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7290in_input = id7289out_result[getCycle()%2];

    id7290out_output = id7290in_input;
  }
  { // Node ID: 7292 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7292in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7292in_option0 = id7291out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7292in_option1 = id7290out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7292x_1;

    switch((id7292in_sel.getValueAsLong())) {
      case 0l:
        id7292x_1 = id7292in_option0;
        break;
      case 1l:
        id7292x_1 = id7292in_option1;
        break;
      default:
        id7292x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7292out_result[(getCycle()+1)%2] = (id7292x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7293out_output;

  { // Node ID: 7293 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7293in_input = id7292out_result[getCycle()%2];

    id7293out_output = id7293in_input;
  }
  { // Node ID: 7295 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7295in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7295in_option0 = id7294out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7295in_option1 = id7293out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7295x_1;

    switch((id7295in_sel.getValueAsLong())) {
      case 0l:
        id7295x_1 = id7295in_option0;
        break;
      case 1l:
        id7295x_1 = id7295in_option1;
        break;
      default:
        id7295x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7295out_result[(getCycle()+1)%2] = (id7295x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7296out_output;

  { // Node ID: 7296 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7296in_input = id7295out_result[getCycle()%2];

    id7296out_output = id7296in_input;
  }
  { // Node ID: 7298 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7298in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7298in_option0 = id7297out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7298in_option1 = id7296out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7298x_1;

    switch((id7298in_sel.getValueAsLong())) {
      case 0l:
        id7298x_1 = id7298in_option0;
        break;
      case 1l:
        id7298x_1 = id7298in_option1;
        break;
      default:
        id7298x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7298out_result[(getCycle()+1)%2] = (id7298x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7299out_output;

  { // Node ID: 7299 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7299in_input = id7298out_result[getCycle()%2];

    id7299out_output = id7299in_input;
  }
  { // Node ID: 7301 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7301in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7301in_option0 = id7300out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7301in_option1 = id7299out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7301x_1;

    switch((id7301in_sel.getValueAsLong())) {
      case 0l:
        id7301x_1 = id7301in_option0;
        break;
      case 1l:
        id7301x_1 = id7301in_option1;
        break;
      default:
        id7301x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7301out_result[(getCycle()+1)%2] = (id7301x_1);
  }
  HWRawBits<32> id7472out_output;

  { // Node ID: 7472 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7472in_input = id7301out_result[getCycle()%2];

    id7472out_output = (cast_fixed2bits(id7472in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7303out_output;

  { // Node ID: 7303 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7303in_input = id7304out_result[getCycle()%2];

    id7303out_output = id7303in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7302out_output;

  { // Node ID: 7302 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7302in_input = id7301out_result[getCycle()%2];

    id7302out_output = id7302in_input;
  }
  { // Node ID: 7304 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7304in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7304in_option0 = id7303out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7304in_option1 = id7302out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7304x_1;

    switch((id7304in_sel.getValueAsLong())) {
      case 0l:
        id7304x_1 = id7304in_option0;
        break;
      case 1l:
        id7304x_1 = id7304in_option1;
        break;
      default:
        id7304x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7304out_result[(getCycle()+1)%2] = (id7304x_1);
  }
  HWRawBits<32> id7470out_output;

  { // Node ID: 7470 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7470in_input = id7304out_result[getCycle()%2];

    id7470out_output = (cast_fixed2bits(id7470in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7306out_output;

  { // Node ID: 7306 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7306in_input = id7307out_result[getCycle()%2];

    id7306out_output = id7306in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7305out_output;

  { // Node ID: 7305 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7305in_input = id7304out_result[getCycle()%2];

    id7305out_output = id7305in_input;
  }
  { // Node ID: 7307 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7307in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7307in_option0 = id7306out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7307in_option1 = id7305out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7307x_1;

    switch((id7307in_sel.getValueAsLong())) {
      case 0l:
        id7307x_1 = id7307in_option0;
        break;
      case 1l:
        id7307x_1 = id7307in_option1;
        break;
      default:
        id7307x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7307out_result[(getCycle()+1)%2] = (id7307x_1);
  }
  HWRawBits<32> id7468out_output;

  { // Node ID: 7468 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7468in_input = id7307out_result[getCycle()%2];

    id7468out_output = (cast_fixed2bits(id7468in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7309out_output;

  { // Node ID: 7309 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7309in_input = id7310out_result[getCycle()%2];

    id7309out_output = id7309in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7308out_output;

  { // Node ID: 7308 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7308in_input = id7307out_result[getCycle()%2];

    id7308out_output = id7308in_input;
  }
  { // Node ID: 7310 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7310in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7310in_option0 = id7309out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7310in_option1 = id7308out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7310x_1;

    switch((id7310in_sel.getValueAsLong())) {
      case 0l:
        id7310x_1 = id7310in_option0;
        break;
      case 1l:
        id7310x_1 = id7310in_option1;
        break;
      default:
        id7310x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7310out_result[(getCycle()+1)%2] = (id7310x_1);
  }
  HWRawBits<32> id7466out_output;

  { // Node ID: 7466 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7466in_input = id7310out_result[getCycle()%2];

    id7466out_output = (cast_fixed2bits(id7466in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7312out_output;

  { // Node ID: 7312 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7312in_input = id7313out_result[getCycle()%2];

    id7312out_output = id7312in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7311out_output;

  { // Node ID: 7311 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7311in_input = id7310out_result[getCycle()%2];

    id7311out_output = id7311in_input;
  }
  { // Node ID: 7313 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7313in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7313in_option0 = id7312out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7313in_option1 = id7311out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7313x_1;

    switch((id7313in_sel.getValueAsLong())) {
      case 0l:
        id7313x_1 = id7313in_option0;
        break;
      case 1l:
        id7313x_1 = id7313in_option1;
        break;
      default:
        id7313x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7313out_result[(getCycle()+1)%2] = (id7313x_1);
  }
  HWRawBits<32> id7464out_output;

  { // Node ID: 7464 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7464in_input = id7313out_result[getCycle()%2];

    id7464out_output = (cast_fixed2bits(id7464in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7336out_output;

  { // Node ID: 7336 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7336in_input = id7337out_result[getCycle()%2];

    id7336out_output = id7336in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7333out_output;

  { // Node ID: 7333 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7333in_input = id7334out_result[getCycle()%2];

    id7333out_output = id7333in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7330out_output;

  { // Node ID: 7330 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7330in_input = id7331out_result[getCycle()%2];

    id7330out_output = id7330in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7327out_output;

  { // Node ID: 7327 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7327in_input = id7328out_result[getCycle()%2];

    id7327out_output = id7327in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7324out_output;

  { // Node ID: 7324 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7324in_input = id7325out_result[getCycle()%2];

    id7324out_output = id7324in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7321out_output;

  { // Node ID: 7321 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7321in_input = id7322out_result[getCycle()%2];

    id7321out_output = id7321in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7318out_output;

  { // Node ID: 7318 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7318in_input = id7319out_result[getCycle()%2];

    id7318out_output = id7318in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7315out_output;

  { // Node ID: 7315 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7315in_input = id7316out_result[getCycle()%2];

    id7315out_output = id7315in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7314out_output;

  { // Node ID: 7314 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7314in_input = id7313out_result[getCycle()%2];

    id7314out_output = id7314in_input;
  }
  { // Node ID: 7316 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7316in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7316in_option0 = id7315out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7316in_option1 = id7314out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7316x_1;

    switch((id7316in_sel.getValueAsLong())) {
      case 0l:
        id7316x_1 = id7316in_option0;
        break;
      case 1l:
        id7316x_1 = id7316in_option1;
        break;
      default:
        id7316x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7316out_result[(getCycle()+1)%2] = (id7316x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7317out_output;

  { // Node ID: 7317 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7317in_input = id7316out_result[getCycle()%2];

    id7317out_output = id7317in_input;
  }
  { // Node ID: 7319 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7319in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7319in_option0 = id7318out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7319in_option1 = id7317out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7319x_1;

    switch((id7319in_sel.getValueAsLong())) {
      case 0l:
        id7319x_1 = id7319in_option0;
        break;
      case 1l:
        id7319x_1 = id7319in_option1;
        break;
      default:
        id7319x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7319out_result[(getCycle()+1)%2] = (id7319x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7320out_output;

  { // Node ID: 7320 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7320in_input = id7319out_result[getCycle()%2];

    id7320out_output = id7320in_input;
  }
  { // Node ID: 7322 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7322in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7322in_option0 = id7321out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7322in_option1 = id7320out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7322x_1;

    switch((id7322in_sel.getValueAsLong())) {
      case 0l:
        id7322x_1 = id7322in_option0;
        break;
      case 1l:
        id7322x_1 = id7322in_option1;
        break;
      default:
        id7322x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7322out_result[(getCycle()+1)%2] = (id7322x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7323out_output;

  { // Node ID: 7323 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7323in_input = id7322out_result[getCycle()%2];

    id7323out_output = id7323in_input;
  }
  { // Node ID: 7325 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7325in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7325in_option0 = id7324out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7325in_option1 = id7323out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7325x_1;

    switch((id7325in_sel.getValueAsLong())) {
      case 0l:
        id7325x_1 = id7325in_option0;
        break;
      case 1l:
        id7325x_1 = id7325in_option1;
        break;
      default:
        id7325x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7325out_result[(getCycle()+1)%2] = (id7325x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7326out_output;

  { // Node ID: 7326 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7326in_input = id7325out_result[getCycle()%2];

    id7326out_output = id7326in_input;
  }
  { // Node ID: 7328 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7328in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7328in_option0 = id7327out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7328in_option1 = id7326out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7328x_1;

    switch((id7328in_sel.getValueAsLong())) {
      case 0l:
        id7328x_1 = id7328in_option0;
        break;
      case 1l:
        id7328x_1 = id7328in_option1;
        break;
      default:
        id7328x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7328out_result[(getCycle()+1)%2] = (id7328x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7329out_output;

  { // Node ID: 7329 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7329in_input = id7328out_result[getCycle()%2];

    id7329out_output = id7329in_input;
  }
  { // Node ID: 7331 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7331in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7331in_option0 = id7330out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7331in_option1 = id7329out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7331x_1;

    switch((id7331in_sel.getValueAsLong())) {
      case 0l:
        id7331x_1 = id7331in_option0;
        break;
      case 1l:
        id7331x_1 = id7331in_option1;
        break;
      default:
        id7331x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7331out_result[(getCycle()+1)%2] = (id7331x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7332out_output;

  { // Node ID: 7332 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7332in_input = id7331out_result[getCycle()%2];

    id7332out_output = id7332in_input;
  }
  { // Node ID: 7334 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7334in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7334in_option0 = id7333out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7334in_option1 = id7332out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7334x_1;

    switch((id7334in_sel.getValueAsLong())) {
      case 0l:
        id7334x_1 = id7334in_option0;
        break;
      case 1l:
        id7334x_1 = id7334in_option1;
        break;
      default:
        id7334x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7334out_result[(getCycle()+1)%2] = (id7334x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7335out_output;

  { // Node ID: 7335 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7335in_input = id7334out_result[getCycle()%2];

    id7335out_output = id7335in_input;
  }
  { // Node ID: 7337 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7337in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7337in_option0 = id7336out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7337in_option1 = id7335out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7337x_1;

    switch((id7337in_sel.getValueAsLong())) {
      case 0l:
        id7337x_1 = id7337in_option0;
        break;
      case 1l:
        id7337x_1 = id7337in_option1;
        break;
      default:
        id7337x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7337out_result[(getCycle()+1)%2] = (id7337x_1);
  }
  HWRawBits<32> id7462out_output;

  { // Node ID: 7462 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7462in_input = id7337out_result[getCycle()%2];

    id7462out_output = (cast_fixed2bits(id7462in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7339out_output;

  { // Node ID: 7339 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7339in_input = id7340out_result[getCycle()%2];

    id7339out_output = id7339in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7338out_output;

  { // Node ID: 7338 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7338in_input = id7337out_result[getCycle()%2];

    id7338out_output = id7338in_input;
  }
  { // Node ID: 7340 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7340in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7340in_option0 = id7339out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7340in_option1 = id7338out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7340x_1;

    switch((id7340in_sel.getValueAsLong())) {
      case 0l:
        id7340x_1 = id7340in_option0;
        break;
      case 1l:
        id7340x_1 = id7340in_option1;
        break;
      default:
        id7340x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7340out_result[(getCycle()+1)%2] = (id7340x_1);
  }
  HWRawBits<32> id7460out_output;

  { // Node ID: 7460 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7460in_input = id7340out_result[getCycle()%2];

    id7460out_output = (cast_fixed2bits(id7460in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7342out_output;

  { // Node ID: 7342 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7342in_input = id7343out_result[getCycle()%2];

    id7342out_output = id7342in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7341out_output;

  { // Node ID: 7341 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7341in_input = id7340out_result[getCycle()%2];

    id7341out_output = id7341in_input;
  }
  { // Node ID: 7343 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7343in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7343in_option0 = id7342out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7343in_option1 = id7341out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7343x_1;

    switch((id7343in_sel.getValueAsLong())) {
      case 0l:
        id7343x_1 = id7343in_option0;
        break;
      case 1l:
        id7343x_1 = id7343in_option1;
        break;
      default:
        id7343x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7343out_result[(getCycle()+1)%2] = (id7343x_1);
  }
  HWRawBits<32> id7458out_output;

  { // Node ID: 7458 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7458in_input = id7343out_result[getCycle()%2];

    id7458out_output = (cast_fixed2bits(id7458in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7345out_output;

  { // Node ID: 7345 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7345in_input = id7346out_result[getCycle()%2];

    id7345out_output = id7345in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7344out_output;

  { // Node ID: 7344 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7344in_input = id7343out_result[getCycle()%2];

    id7344out_output = id7344in_input;
  }
  { // Node ID: 7346 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7346in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7346in_option0 = id7345out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7346in_option1 = id7344out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7346x_1;

    switch((id7346in_sel.getValueAsLong())) {
      case 0l:
        id7346x_1 = id7346in_option0;
        break;
      case 1l:
        id7346x_1 = id7346in_option1;
        break;
      default:
        id7346x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7346out_result[(getCycle()+1)%2] = (id7346x_1);
  }
  HWRawBits<32> id7456out_output;

  { // Node ID: 7456 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7456in_input = id7346out_result[getCycle()%2];

    id7456out_output = (cast_fixed2bits(id7456in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7348out_output;

  { // Node ID: 7348 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7348in_input = id7349out_result[getCycle()%2];

    id7348out_output = id7348in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7347out_output;

  { // Node ID: 7347 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7347in_input = id7346out_result[getCycle()%2];

    id7347out_output = id7347in_input;
  }
  { // Node ID: 7349 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7349in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7349in_option0 = id7348out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7349in_option1 = id7347out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7349x_1;

    switch((id7349in_sel.getValueAsLong())) {
      case 0l:
        id7349x_1 = id7349in_option0;
        break;
      case 1l:
        id7349x_1 = id7349in_option1;
        break;
      default:
        id7349x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7349out_result[(getCycle()+1)%2] = (id7349x_1);
  }
  HWRawBits<32> id7454out_output;

  { // Node ID: 7454 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7454in_input = id7349out_result[getCycle()%2];

    id7454out_output = (cast_fixed2bits(id7454in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7372out_output;

  { // Node ID: 7372 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7372in_input = id7373out_result[getCycle()%2];

    id7372out_output = id7372in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7369out_output;

  { // Node ID: 7369 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7369in_input = id7370out_result[getCycle()%2];

    id7369out_output = id7369in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7366out_output;

  { // Node ID: 7366 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7366in_input = id7367out_result[getCycle()%2];

    id7366out_output = id7366in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7363out_output;

  { // Node ID: 7363 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7363in_input = id7364out_result[getCycle()%2];

    id7363out_output = id7363in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7360out_output;

  { // Node ID: 7360 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7360in_input = id7361out_result[getCycle()%2];

    id7360out_output = id7360in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7357out_output;

  { // Node ID: 7357 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7357in_input = id7358out_result[getCycle()%2];

    id7357out_output = id7357in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7354out_output;

  { // Node ID: 7354 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7354in_input = id7355out_result[getCycle()%2];

    id7354out_output = id7354in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7351out_output;

  { // Node ID: 7351 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7351in_input = id7352out_result[getCycle()%2];

    id7351out_output = id7351in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7350out_output;

  { // Node ID: 7350 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7350in_input = id7349out_result[getCycle()%2];

    id7350out_output = id7350in_input;
  }
  { // Node ID: 7352 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7352in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7352in_option0 = id7351out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7352in_option1 = id7350out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7352x_1;

    switch((id7352in_sel.getValueAsLong())) {
      case 0l:
        id7352x_1 = id7352in_option0;
        break;
      case 1l:
        id7352x_1 = id7352in_option1;
        break;
      default:
        id7352x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7352out_result[(getCycle()+1)%2] = (id7352x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7353out_output;

  { // Node ID: 7353 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7353in_input = id7352out_result[getCycle()%2];

    id7353out_output = id7353in_input;
  }
  { // Node ID: 7355 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7355in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7355in_option0 = id7354out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7355in_option1 = id7353out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7355x_1;

    switch((id7355in_sel.getValueAsLong())) {
      case 0l:
        id7355x_1 = id7355in_option0;
        break;
      case 1l:
        id7355x_1 = id7355in_option1;
        break;
      default:
        id7355x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7355out_result[(getCycle()+1)%2] = (id7355x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7356out_output;

  { // Node ID: 7356 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7356in_input = id7355out_result[getCycle()%2];

    id7356out_output = id7356in_input;
  }
  { // Node ID: 7358 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7358in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7358in_option0 = id7357out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7358in_option1 = id7356out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7358x_1;

    switch((id7358in_sel.getValueAsLong())) {
      case 0l:
        id7358x_1 = id7358in_option0;
        break;
      case 1l:
        id7358x_1 = id7358in_option1;
        break;
      default:
        id7358x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7358out_result[(getCycle()+1)%2] = (id7358x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7359out_output;

  { // Node ID: 7359 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7359in_input = id7358out_result[getCycle()%2];

    id7359out_output = id7359in_input;
  }
  { // Node ID: 7361 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7361in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7361in_option0 = id7360out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7361in_option1 = id7359out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7361x_1;

    switch((id7361in_sel.getValueAsLong())) {
      case 0l:
        id7361x_1 = id7361in_option0;
        break;
      case 1l:
        id7361x_1 = id7361in_option1;
        break;
      default:
        id7361x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7361out_result[(getCycle()+1)%2] = (id7361x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7362out_output;

  { // Node ID: 7362 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7362in_input = id7361out_result[getCycle()%2];

    id7362out_output = id7362in_input;
  }
  { // Node ID: 7364 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7364in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7364in_option0 = id7363out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7364in_option1 = id7362out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7364x_1;

    switch((id7364in_sel.getValueAsLong())) {
      case 0l:
        id7364x_1 = id7364in_option0;
        break;
      case 1l:
        id7364x_1 = id7364in_option1;
        break;
      default:
        id7364x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7364out_result[(getCycle()+1)%2] = (id7364x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7365out_output;

  { // Node ID: 7365 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7365in_input = id7364out_result[getCycle()%2];

    id7365out_output = id7365in_input;
  }
  { // Node ID: 7367 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7367in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7367in_option0 = id7366out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7367in_option1 = id7365out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7367x_1;

    switch((id7367in_sel.getValueAsLong())) {
      case 0l:
        id7367x_1 = id7367in_option0;
        break;
      case 1l:
        id7367x_1 = id7367in_option1;
        break;
      default:
        id7367x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7367out_result[(getCycle()+1)%2] = (id7367x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7368out_output;

  { // Node ID: 7368 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7368in_input = id7367out_result[getCycle()%2];

    id7368out_output = id7368in_input;
  }
  { // Node ID: 7370 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7370in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7370in_option0 = id7369out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7370in_option1 = id7368out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7370x_1;

    switch((id7370in_sel.getValueAsLong())) {
      case 0l:
        id7370x_1 = id7370in_option0;
        break;
      case 1l:
        id7370x_1 = id7370in_option1;
        break;
      default:
        id7370x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7370out_result[(getCycle()+1)%2] = (id7370x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7371out_output;

  { // Node ID: 7371 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7371in_input = id7370out_result[getCycle()%2];

    id7371out_output = id7371in_input;
  }
  { // Node ID: 7373 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7373in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7373in_option0 = id7372out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7373in_option1 = id7371out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7373x_1;

    switch((id7373in_sel.getValueAsLong())) {
      case 0l:
        id7373x_1 = id7373in_option0;
        break;
      case 1l:
        id7373x_1 = id7373in_option1;
        break;
      default:
        id7373x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7373out_result[(getCycle()+1)%2] = (id7373x_1);
  }
  HWRawBits<32> id7452out_output;

  { // Node ID: 7452 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7452in_input = id7373out_result[getCycle()%2];

    id7452out_output = (cast_fixed2bits(id7452in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7375out_output;

  { // Node ID: 7375 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7375in_input = id7376out_result[getCycle()%2];

    id7375out_output = id7375in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7374out_output;

  { // Node ID: 7374 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7374in_input = id7373out_result[getCycle()%2];

    id7374out_output = id7374in_input;
  }
  { // Node ID: 7376 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7376in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7376in_option0 = id7375out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7376in_option1 = id7374out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7376x_1;

    switch((id7376in_sel.getValueAsLong())) {
      case 0l:
        id7376x_1 = id7376in_option0;
        break;
      case 1l:
        id7376x_1 = id7376in_option1;
        break;
      default:
        id7376x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7376out_result[(getCycle()+1)%2] = (id7376x_1);
  }
  HWRawBits<32> id7450out_output;

  { // Node ID: 7450 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7450in_input = id7376out_result[getCycle()%2];

    id7450out_output = (cast_fixed2bits(id7450in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7378out_output;

  { // Node ID: 7378 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7378in_input = id7379out_result[getCycle()%2];

    id7378out_output = id7378in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7377out_output;

  { // Node ID: 7377 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7377in_input = id7376out_result[getCycle()%2];

    id7377out_output = id7377in_input;
  }
  { // Node ID: 7379 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7379in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7379in_option0 = id7378out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7379in_option1 = id7377out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7379x_1;

    switch((id7379in_sel.getValueAsLong())) {
      case 0l:
        id7379x_1 = id7379in_option0;
        break;
      case 1l:
        id7379x_1 = id7379in_option1;
        break;
      default:
        id7379x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7379out_result[(getCycle()+1)%2] = (id7379x_1);
  }
  HWRawBits<32> id7448out_output;

  { // Node ID: 7448 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7448in_input = id7379out_result[getCycle()%2];

    id7448out_output = (cast_fixed2bits(id7448in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7381out_output;

  { // Node ID: 7381 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7381in_input = id7382out_result[getCycle()%2];

    id7381out_output = id7381in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7380out_output;

  { // Node ID: 7380 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7380in_input = id7379out_result[getCycle()%2];

    id7380out_output = id7380in_input;
  }
  { // Node ID: 7382 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7382in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7382in_option0 = id7381out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7382in_option1 = id7380out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7382x_1;

    switch((id7382in_sel.getValueAsLong())) {
      case 0l:
        id7382x_1 = id7382in_option0;
        break;
      case 1l:
        id7382x_1 = id7382in_option1;
        break;
      default:
        id7382x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7382out_result[(getCycle()+1)%2] = (id7382x_1);
  }
  HWRawBits<32> id7446out_output;

  { // Node ID: 7446 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7446in_input = id7382out_result[getCycle()%2];

    id7446out_output = (cast_fixed2bits(id7446in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7384out_output;

  { // Node ID: 7384 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7384in_input = id7385out_result[getCycle()%2];

    id7384out_output = id7384in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7383out_output;

  { // Node ID: 7383 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7383in_input = id7382out_result[getCycle()%2];

    id7383out_output = id7383in_input;
  }
  { // Node ID: 7385 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id7385in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7385in_option0 = id7384out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7385in_option1 = id7383out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7385x_1;

    switch((id7385in_sel.getValueAsLong())) {
      case 0l:
        id7385x_1 = id7385in_option0;
        break;
      case 1l:
        id7385x_1 = id7385in_option1;
        break;
      default:
        id7385x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id7385out_result[(getCycle()+1)%2] = (id7385x_1);
  }
  HWRawBits<32> id7445out_output;

  { // Node ID: 7445 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7445in_input = id7385out_result[getCycle()%2];

    id7445out_output = (cast_fixed2bits(id7445in_input));
  }
  HWRawBits<64> id7447out_result;

  { // Node ID: 7447 (NodeCat)
    const HWRawBits<32> &id7447in_in0 = id7446out_output;
    const HWRawBits<32> &id7447in_in1 = id7445out_output;

    id7447out_result = (cat(id7447in_in0,id7447in_in1));
  }
  HWRawBits<96> id7449out_result;

  { // Node ID: 7449 (NodeCat)
    const HWRawBits<32> &id7449in_in0 = id7448out_output;
    const HWRawBits<64> &id7449in_in1 = id7447out_result;

    id7449out_result = (cat(id7449in_in0,id7449in_in1));
  }
  HWRawBits<128> id7451out_result;

  { // Node ID: 7451 (NodeCat)
    const HWRawBits<32> &id7451in_in0 = id7450out_output;
    const HWRawBits<96> &id7451in_in1 = id7449out_result;

    id7451out_result = (cat(id7451in_in0,id7451in_in1));
  }
  HWRawBits<160> id7453out_result;

  { // Node ID: 7453 (NodeCat)
    const HWRawBits<32> &id7453in_in0 = id7452out_output;
    const HWRawBits<128> &id7453in_in1 = id7451out_result;

    id7453out_result = (cat(id7453in_in0,id7453in_in1));
  }
  HWRawBits<192> id7455out_result;

  { // Node ID: 7455 (NodeCat)
    const HWRawBits<32> &id7455in_in0 = id7454out_output;
    const HWRawBits<160> &id7455in_in1 = id7453out_result;

    id7455out_result = (cat(id7455in_in0,id7455in_in1));
  }
  HWRawBits<224> id7457out_result;

  { // Node ID: 7457 (NodeCat)
    const HWRawBits<32> &id7457in_in0 = id7456out_output;
    const HWRawBits<192> &id7457in_in1 = id7455out_result;

    id7457out_result = (cat(id7457in_in0,id7457in_in1));
  }
  HWRawBits<256> id7459out_result;

  { // Node ID: 7459 (NodeCat)
    const HWRawBits<32> &id7459in_in0 = id7458out_output;
    const HWRawBits<224> &id7459in_in1 = id7457out_result;

    id7459out_result = (cat(id7459in_in0,id7459in_in1));
  }
  HWRawBits<288> id7461out_result;

  { // Node ID: 7461 (NodeCat)
    const HWRawBits<32> &id7461in_in0 = id7460out_output;
    const HWRawBits<256> &id7461in_in1 = id7459out_result;

    id7461out_result = (cat(id7461in_in0,id7461in_in1));
  }
  HWRawBits<320> id7463out_result;

  { // Node ID: 7463 (NodeCat)
    const HWRawBits<32> &id7463in_in0 = id7462out_output;
    const HWRawBits<288> &id7463in_in1 = id7461out_result;

    id7463out_result = (cat(id7463in_in0,id7463in_in1));
  }
  HWRawBits<352> id7465out_result;

  { // Node ID: 7465 (NodeCat)
    const HWRawBits<32> &id7465in_in0 = id7464out_output;
    const HWRawBits<320> &id7465in_in1 = id7463out_result;

    id7465out_result = (cat(id7465in_in0,id7465in_in1));
  }
  HWRawBits<384> id7467out_result;

  { // Node ID: 7467 (NodeCat)
    const HWRawBits<32> &id7467in_in0 = id7466out_output;
    const HWRawBits<352> &id7467in_in1 = id7465out_result;

    id7467out_result = (cat(id7467in_in0,id7467in_in1));
  }
  HWRawBits<416> id7469out_result;

  { // Node ID: 7469 (NodeCat)
    const HWRawBits<32> &id7469in_in0 = id7468out_output;
    const HWRawBits<384> &id7469in_in1 = id7467out_result;

    id7469out_result = (cat(id7469in_in0,id7469in_in1));
  }
  HWRawBits<448> id7471out_result;

  { // Node ID: 7471 (NodeCat)
    const HWRawBits<32> &id7471in_in0 = id7470out_output;
    const HWRawBits<416> &id7471in_in1 = id7469out_result;

    id7471out_result = (cat(id7471in_in0,id7471in_in1));
  }
  HWRawBits<480> id7473out_result;

  { // Node ID: 7473 (NodeCat)
    const HWRawBits<32> &id7473in_in0 = id7472out_output;
    const HWRawBits<448> &id7473in_in1 = id7471out_result;

    id7473out_result = (cat(id7473in_in0,id7473in_in1));
  }
  HWRawBits<512> id7475out_result;

  { // Node ID: 7475 (NodeCat)
    const HWRawBits<32> &id7475in_in0 = id7474out_output;
    const HWRawBits<480> &id7475in_in1 = id7473out_result;

    id7475out_result = (cat(id7475in_in0,id7475in_in1));
  }
  HWRawBits<544> id7477out_result;

  { // Node ID: 7477 (NodeCat)
    const HWRawBits<32> &id7477in_in0 = id7476out_output;
    const HWRawBits<512> &id7477in_in1 = id7475out_result;

    id7477out_result = (cat(id7477in_in0,id7477in_in1));
  }
  HWRawBits<576> id7479out_result;

  { // Node ID: 7479 (NodeCat)
    const HWRawBits<32> &id7479in_in0 = id7478out_output;
    const HWRawBits<544> &id7479in_in1 = id7477out_result;

    id7479out_result = (cat(id7479in_in0,id7479in_in1));
  }
  HWRawBits<608> id7481out_result;

  { // Node ID: 7481 (NodeCat)
    const HWRawBits<32> &id7481in_in0 = id7480out_output;
    const HWRawBits<576> &id7481in_in1 = id7479out_result;

    id7481out_result = (cat(id7481in_in0,id7481in_in1));
  }
  HWRawBits<640> id7483out_result;

  { // Node ID: 7483 (NodeCat)
    const HWRawBits<32> &id7483in_in0 = id7482out_output;
    const HWRawBits<608> &id7483in_in1 = id7481out_result;

    id7483out_result = (cat(id7483in_in0,id7483in_in1));
  }
  HWRawBits<672> id7485out_result;

  { // Node ID: 7485 (NodeCat)
    const HWRawBits<32> &id7485in_in0 = id7484out_output;
    const HWRawBits<640> &id7485in_in1 = id7483out_result;

    id7485out_result = (cat(id7485in_in0,id7485in_in1));
  }
  HWRawBits<704> id7487out_result;

  { // Node ID: 7487 (NodeCat)
    const HWRawBits<32> &id7487in_in0 = id7486out_output;
    const HWRawBits<672> &id7487in_in1 = id7485out_result;

    id7487out_result = (cat(id7487in_in0,id7487in_in1));
  }
  HWRawBits<736> id7489out_result;

  { // Node ID: 7489 (NodeCat)
    const HWRawBits<32> &id7489in_in0 = id7488out_output;
    const HWRawBits<704> &id7489in_in1 = id7487out_result;

    id7489out_result = (cat(id7489in_in0,id7489in_in1));
  }
  HWRawBits<768> id7491out_result;

  { // Node ID: 7491 (NodeCat)
    const HWRawBits<32> &id7491in_in0 = id7490out_output;
    const HWRawBits<736> &id7491in_in1 = id7489out_result;

    id7491out_result = (cat(id7491in_in0,id7491in_in1));
  }
  HWRawBits<800> id7493out_result;

  { // Node ID: 7493 (NodeCat)
    const HWRawBits<32> &id7493in_in0 = id7492out_output;
    const HWRawBits<768> &id7493in_in1 = id7491out_result;

    id7493out_result = (cat(id7493in_in0,id7493in_in1));
  }
  HWRawBits<832> id7495out_result;

  { // Node ID: 7495 (NodeCat)
    const HWRawBits<32> &id7495in_in0 = in_vars.id7595out_value;
    const HWRawBits<800> &id7495in_in1 = id7493out_result;

    id7495out_result = (cat(id7495in_in0,id7495in_in1));
  }
  HWRawBits<864> id7497out_result;

  { // Node ID: 7497 (NodeCat)
    const HWRawBits<32> &id7497in_in0 = in_vars.id7593out_value;
    const HWRawBits<832> &id7497in_in1 = id7495out_result;

    id7497out_result = (cat(id7497in_in0,id7497in_in1));
  }
  HWRawBits<896> id7499out_result;

  { // Node ID: 7499 (NodeCat)
    const HWRawBits<32> &id7499in_in0 = in_vars.id7591out_value;
    const HWRawBits<864> &id7499in_in1 = id7497out_result;

    id7499out_result = (cat(id7499in_in0,id7499in_in1));
  }
  HWRawBits<928> id7501out_result;

  { // Node ID: 7501 (NodeCat)
    const HWRawBits<32> &id7501in_in0 = in_vars.id7589out_value;
    const HWRawBits<896> &id7501in_in1 = id7499out_result;

    id7501out_result = (cat(id7501in_in0,id7501in_in1));
  }
  HWRawBits<960> id7503out_result;

  { // Node ID: 7503 (NodeCat)
    const HWRawBits<32> &id7503in_in0 = in_vars.id7587out_value;
    const HWRawBits<928> &id7503in_in1 = id7501out_result;

    id7503out_result = (cat(id7503in_in0,id7503in_in1));
  }
  HWRawBits<992> id7505out_result;

  { // Node ID: 7505 (NodeCat)
    const HWRawBits<32> &id7505in_in0 = in_vars.id7585out_value;
    const HWRawBits<960> &id7505in_in1 = id7503out_result;

    id7505out_result = (cat(id7505in_in0,id7505in_in1));
  }
  HWRawBits<1024> id7507out_result;

  { // Node ID: 7507 (NodeCat)
    const HWRawBits<32> &id7507in_in0 = in_vars.id7583out_value;
    const HWRawBits<992> &id7507in_in1 = id7505out_result;

    id7507out_result = (cat(id7507in_in0,id7507in_in1));
  }
  HWRawBits<1056> id7509out_result;

  { // Node ID: 7509 (NodeCat)
    const HWRawBits<32> &id7509in_in0 = in_vars.id7581out_value;
    const HWRawBits<1024> &id7509in_in1 = id7507out_result;

    id7509out_result = (cat(id7509in_in0,id7509in_in1));
  }
  HWRawBits<1088> id7511out_result;

  { // Node ID: 7511 (NodeCat)
    const HWRawBits<32> &id7511in_in0 = in_vars.id7579out_value;
    const HWRawBits<1056> &id7511in_in1 = id7509out_result;

    id7511out_result = (cat(id7511in_in0,id7511in_in1));
  }
  HWRawBits<1120> id7513out_result;

  { // Node ID: 7513 (NodeCat)
    const HWRawBits<32> &id7513in_in0 = in_vars.id7577out_value;
    const HWRawBits<1088> &id7513in_in1 = id7511out_result;

    id7513out_result = (cat(id7513in_in0,id7513in_in1));
  }
  HWRawBits<1152> id7515out_result;

  { // Node ID: 7515 (NodeCat)
    const HWRawBits<32> &id7515in_in0 = in_vars.id7575out_value;
    const HWRawBits<1120> &id7515in_in1 = id7513out_result;

    id7515out_result = (cat(id7515in_in0,id7515in_in1));
  }
  HWRawBits<1184> id7517out_result;

  { // Node ID: 7517 (NodeCat)
    const HWRawBits<32> &id7517in_in0 = in_vars.id7573out_value;
    const HWRawBits<1152> &id7517in_in1 = id7515out_result;

    id7517out_result = (cat(id7517in_in0,id7517in_in1));
  }
  HWRawBits<1216> id7519out_result;

  { // Node ID: 7519 (NodeCat)
    const HWRawBits<32> &id7519in_in0 = in_vars.id7571out_value;
    const HWRawBits<1184> &id7519in_in1 = id7517out_result;

    id7519out_result = (cat(id7519in_in0,id7519in_in1));
  }
  HWRawBits<1248> id7521out_result;

  { // Node ID: 7521 (NodeCat)
    const HWRawBits<32> &id7521in_in0 = in_vars.id7569out_value;
    const HWRawBits<1216> &id7521in_in1 = id7519out_result;

    id7521out_result = (cat(id7521in_in0,id7521in_in1));
  }
  HWRawBits<1280> id7523out_result;

  { // Node ID: 7523 (NodeCat)
    const HWRawBits<32> &id7523in_in0 = in_vars.id7567out_value;
    const HWRawBits<1248> &id7523in_in1 = id7521out_result;

    id7523out_result = (cat(id7523in_in0,id7523in_in1));
  }
  if ( (getFillLevel() >= (18l)) && (getFlushLevel() < (18l)|| !isFlushingActive() ))
  { // Node ID: 7444 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id7444in_output_control = in_vars.id7443out_result;
    const HWRawBits<1280> &id7444in_data = id7523out_result;

    bool id7444x_1;

    (id7444x_1) = ((id7444in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(18l))&(isFlushingActive()))));
    if((id7444x_1)) {
      writeOutput(m_y11, id7444in_data);
    }
  }
  { // Node ID: 7528 (NodeConstantRawBits)
  }
  { // Node ID: 10006 (NodeConstantRawBits)
  }
  { // Node ID: 7525 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 7526 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id7526in_enable = id10006out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id7526in_max = id7525out_value;

    HWOffsetFix<49,0,UNSIGNED> id7526x_1;
    HWOffsetFix<1,0,UNSIGNED> id7526x_2;
    HWOffsetFix<1,0,UNSIGNED> id7526x_3;
    HWOffsetFix<49,0,UNSIGNED> id7526x_4t_1e_1;

    id7526out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id7526st_count)));
    (id7526x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id7526st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id7526x_2) = (gte_fixed((id7526x_1),id7526in_max));
    (id7526x_3) = (and_fixed((id7526x_2),id7526in_enable));
    id7526out_wrap = (id7526x_3);
    if((id7526in_enable.getValueAsBool())) {
      if(((id7526x_3).getValueAsBool())) {
        (id7526st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id7526x_4t_1e_1) = (id7526x_1);
        (id7526st_count) = (id7526x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id7527out_output;

  { // Node ID: 7527 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id7527in_input = id7526out_count;

    id7527out_output = id7527in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 7529 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id7529in_load = id7528out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id7529in_data = id7527out_output;

    bool id7529x_1;

    (id7529x_1) = ((id7529in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id7529x_1)) {
      setMappedRegValue("current_run_cycle_count", id7529in_data);
    }
  }
  { // Node ID: 10005 (NodeConstantRawBits)
  }
  { // Node ID: 7531 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 7532 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id7532in_enable = id10005out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id7532in_max = id7531out_value;

    HWOffsetFix<49,0,UNSIGNED> id7532x_1;
    HWOffsetFix<1,0,UNSIGNED> id7532x_2;
    HWOffsetFix<1,0,UNSIGNED> id7532x_3;
    HWOffsetFix<49,0,UNSIGNED> id7532x_4t_1e_1;

    id7532out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id7532st_count)));
    (id7532x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id7532st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id7532x_2) = (gte_fixed((id7532x_1),id7532in_max));
    (id7532x_3) = (and_fixed((id7532x_2),id7532in_enable));
    id7532out_wrap = (id7532x_3);
    if((id7532in_enable.getValueAsBool())) {
      if(((id7532x_3).getValueAsBool())) {
        (id7532st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id7532x_4t_1e_1) = (id7532x_1);
        (id7532st_count) = (id7532x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 7534 (NodeInputMappedReg)
  }
  { // Node ID: 7535 (NodeEq)
    const HWOffsetFix<48,0,UNSIGNED> &id7535in_a = id7532out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id7535in_b = id7534out_run_cycle_count;

    id7535out_result[(getCycle()+1)%2] = (eq_fixed(id7535in_a,id7535in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 7533 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id7533in_start = id7535out_result[getCycle()%2];

    if((id7533in_start.getValueAsBool())) {
      startFlushing();
    }
  }
};

};
