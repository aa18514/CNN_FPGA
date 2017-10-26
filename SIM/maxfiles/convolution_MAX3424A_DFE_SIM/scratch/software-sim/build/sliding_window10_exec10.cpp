#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window10_exec10.h"
//#include "sliding_window10_exec11.h"
//#include "sliding_window10.h"

namespace maxcompilersim {

sliding_window10Block11Vars sliding_window10::execute10(const sliding_window10Block10Vars &in_vars) {
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3930out_output;

  { // Node ID: 3930 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3930in_input = id3929out_result[getCycle()%2];

    id3930out_output = id3930in_input;
  }
  { // Node ID: 3932 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3932in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3932in_option0 = in_vars.id3931out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3932in_option1 = id3930out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3932x_1;

    switch((id3932in_sel.getValueAsLong())) {
      case 0l:
        id3932x_1 = id3932in_option0;
        break;
      case 1l:
        id3932x_1 = id3932in_option1;
        break;
      default:
        id3932x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3932out_result[(getCycle()+1)%2] = (id3932x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3933out_output;

  { // Node ID: 3933 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3933in_input = id3932out_result[getCycle()%2];

    id3933out_output = id3933in_input;
  }
  { // Node ID: 3935 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3935in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3935in_option0 = in_vars.id3934out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3935in_option1 = id3933out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3935x_1;

    switch((id3935in_sel.getValueAsLong())) {
      case 0l:
        id3935x_1 = id3935in_option0;
        break;
      case 1l:
        id3935x_1 = id3935in_option1;
        break;
      default:
        id3935x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3935out_result[(getCycle()+1)%2] = (id3935x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3936out_output;

  { // Node ID: 3936 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3936in_input = id3935out_result[getCycle()%2];

    id3936out_output = id3936in_input;
  }
  { // Node ID: 3938 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3938in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3938in_option0 = in_vars.id3937out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3938in_option1 = id3936out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3938x_1;

    switch((id3938in_sel.getValueAsLong())) {
      case 0l:
        id3938x_1 = id3938in_option0;
        break;
      case 1l:
        id3938x_1 = id3938in_option1;
        break;
      default:
        id3938x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3938out_result[(getCycle()+1)%2] = (id3938x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3939out_output;

  { // Node ID: 3939 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3939in_input = id3938out_result[getCycle()%2];

    id3939out_output = id3939in_input;
  }
  { // Node ID: 3941 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3941in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3941in_option0 = in_vars.id3940out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3941in_option1 = id3939out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3941x_1;

    switch((id3941in_sel.getValueAsLong())) {
      case 0l:
        id3941x_1 = id3941in_option0;
        break;
      case 1l:
        id3941x_1 = id3941in_option1;
        break;
      default:
        id3941x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3941out_result[(getCycle()+1)%2] = (id3941x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3942out_output;

  { // Node ID: 3942 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3942in_input = id3941out_result[getCycle()%2];

    id3942out_output = id3942in_input;
  }
  { // Node ID: 3944 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3944in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3944in_option0 = in_vars.id3943out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3944in_option1 = id3942out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3944x_1;

    switch((id3944in_sel.getValueAsLong())) {
      case 0l:
        id3944x_1 = id3944in_option0;
        break;
      case 1l:
        id3944x_1 = id3944in_option1;
        break;
      default:
        id3944x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3944out_result[(getCycle()+1)%2] = (id3944x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3945out_output;

  { // Node ID: 3945 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3945in_input = id3944out_result[getCycle()%2];

    id3945out_output = id3945in_input;
  }
  { // Node ID: 3947 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3947in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3947in_option0 = in_vars.id3946out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3947in_option1 = id3945out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3947x_1;

    switch((id3947in_sel.getValueAsLong())) {
      case 0l:
        id3947x_1 = id3947in_option0;
        break;
      case 1l:
        id3947x_1 = id3947in_option1;
        break;
      default:
        id3947x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3947out_result[(getCycle()+1)%2] = (id3947x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3948out_output;

  { // Node ID: 3948 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3948in_input = id3947out_result[getCycle()%2];

    id3948out_output = id3948in_input;
  }
  { // Node ID: 3950 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3950in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3950in_option0 = in_vars.id3949out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3950in_option1 = id3948out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3950x_1;

    switch((id3950in_sel.getValueAsLong())) {
      case 0l:
        id3950x_1 = id3950in_option0;
        break;
      case 1l:
        id3950x_1 = id3950in_option1;
        break;
      default:
        id3950x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3950out_result[(getCycle()+1)%2] = (id3950x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3951out_output;

  { // Node ID: 3951 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3951in_input = id3950out_result[getCycle()%2];

    id3951out_output = id3951in_input;
  }
  { // Node ID: 3953 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3953in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3953in_option0 = in_vars.id3952out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3953in_option1 = id3951out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3953x_1;

    switch((id3953in_sel.getValueAsLong())) {
      case 0l:
        id3953x_1 = id3953in_option0;
        break;
      case 1l:
        id3953x_1 = id3953in_option1;
        break;
      default:
        id3953x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3953out_result[(getCycle()+1)%2] = (id3953x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3954out_output;

  { // Node ID: 3954 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3954in_input = id3953out_result[getCycle()%2];

    id3954out_output = id3954in_input;
  }
  { // Node ID: 3956 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3956in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3956in_option0 = in_vars.id3955out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3956in_option1 = id3954out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3956x_1;

    switch((id3956in_sel.getValueAsLong())) {
      case 0l:
        id3956x_1 = id3956in_option0;
        break;
      case 1l:
        id3956x_1 = id3956in_option1;
        break;
      default:
        id3956x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3956out_result[(getCycle()+1)%2] = (id3956x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3957out_output;

  { // Node ID: 3957 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3957in_input = id3956out_result[getCycle()%2];

    id3957out_output = id3957in_input;
  }
  { // Node ID: 3959 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3959in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3959in_option0 = in_vars.id3958out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3959in_option1 = id3957out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3959x_1;

    switch((id3959in_sel.getValueAsLong())) {
      case 0l:
        id3959x_1 = id3959in_option0;
        break;
      case 1l:
        id3959x_1 = id3959in_option1;
        break;
      default:
        id3959x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3959out_result[(getCycle()+1)%2] = (id3959x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3960out_output;

  { // Node ID: 3960 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3960in_input = id3959out_result[getCycle()%2];

    id3960out_output = id3960in_input;
  }
  { // Node ID: 3962 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3962in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3962in_option0 = in_vars.id3961out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3962in_option1 = id3960out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3962x_1;

    switch((id3962in_sel.getValueAsLong())) {
      case 0l:
        id3962x_1 = id3962in_option0;
        break;
      case 1l:
        id3962x_1 = id3962in_option1;
        break;
      default:
        id3962x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3962out_result[(getCycle()+1)%2] = (id3962x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3963out_output;

  { // Node ID: 3963 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3963in_input = id3962out_result[getCycle()%2];

    id3963out_output = id3963in_input;
  }
  { // Node ID: 3965 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3965in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3965in_option0 = in_vars.id3964out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3965in_option1 = id3963out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3965x_1;

    switch((id3965in_sel.getValueAsLong())) {
      case 0l:
        id3965x_1 = id3965in_option0;
        break;
      case 1l:
        id3965x_1 = id3965in_option1;
        break;
      default:
        id3965x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3965out_result[(getCycle()+1)%2] = (id3965x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3966out_output;

  { // Node ID: 3966 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3966in_input = id3965out_result[getCycle()%2];

    id3966out_output = id3966in_input;
  }
  { // Node ID: 3968 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3968in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3968in_option0 = in_vars.id3967out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3968in_option1 = id3966out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3968x_1;

    switch((id3968in_sel.getValueAsLong())) {
      case 0l:
        id3968x_1 = id3968in_option0;
        break;
      case 1l:
        id3968x_1 = id3968in_option1;
        break;
      default:
        id3968x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3968out_result[(getCycle()+1)%2] = (id3968x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3969out_output;

  { // Node ID: 3969 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3969in_input = id3968out_result[getCycle()%2];

    id3969out_output = id3969in_input;
  }
  { // Node ID: 3971 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3971in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3971in_option0 = in_vars.id3970out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3971in_option1 = id3969out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3971x_1;

    switch((id3971in_sel.getValueAsLong())) {
      case 0l:
        id3971x_1 = id3971in_option0;
        break;
      case 1l:
        id3971x_1 = id3971in_option1;
        break;
      default:
        id3971x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3971out_result[(getCycle()+1)%2] = (id3971x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3972out_output;

  { // Node ID: 3972 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3972in_input = id3971out_result[getCycle()%2];

    id3972out_output = id3972in_input;
  }
  { // Node ID: 3974 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3974in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3974in_option0 = in_vars.id3973out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3974in_option1 = id3972out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3974x_1;

    switch((id3974in_sel.getValueAsLong())) {
      case 0l:
        id3974x_1 = id3974in_option0;
        break;
      case 1l:
        id3974x_1 = id3974in_option1;
        break;
      default:
        id3974x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3974out_result[(getCycle()+1)%2] = (id3974x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3975out_output;

  { // Node ID: 3975 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3975in_input = id3974out_result[getCycle()%2];

    id3975out_output = id3975in_input;
  }
  { // Node ID: 3977 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3977in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3977in_option0 = in_vars.id3976out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3977in_option1 = id3975out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3977x_1;

    switch((id3977in_sel.getValueAsLong())) {
      case 0l:
        id3977x_1 = id3977in_option0;
        break;
      case 1l:
        id3977x_1 = id3977in_option1;
        break;
      default:
        id3977x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3977out_result[(getCycle()+1)%2] = (id3977x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3978out_output;

  { // Node ID: 3978 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3978in_input = id3977out_result[getCycle()%2];

    id3978out_output = id3978in_input;
  }
  { // Node ID: 3980 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3980in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3980in_option0 = in_vars.id3979out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3980in_option1 = id3978out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3980x_1;

    switch((id3980in_sel.getValueAsLong())) {
      case 0l:
        id3980x_1 = id3980in_option0;
        break;
      case 1l:
        id3980x_1 = id3980in_option1;
        break;
      default:
        id3980x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3980out_result[(getCycle()+1)%2] = (id3980x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3981out_output;

  { // Node ID: 3981 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3981in_input = id3980out_result[getCycle()%2];

    id3981out_output = id3981in_input;
  }
  { // Node ID: 3983 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3983in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3983in_option0 = in_vars.id3982out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3983in_option1 = id3981out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3983x_1;

    switch((id3983in_sel.getValueAsLong())) {
      case 0l:
        id3983x_1 = id3983in_option0;
        break;
      case 1l:
        id3983x_1 = id3983in_option1;
        break;
      default:
        id3983x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3983out_result[(getCycle()+1)%2] = (id3983x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3984out_output;

  { // Node ID: 3984 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3984in_input = id3983out_result[getCycle()%2];

    id3984out_output = id3984in_input;
  }
  { // Node ID: 3986 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3986in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3986in_option0 = in_vars.id3985out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3986in_option1 = id3984out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3986x_1;

    switch((id3986in_sel.getValueAsLong())) {
      case 0l:
        id3986x_1 = id3986in_option0;
        break;
      case 1l:
        id3986x_1 = id3986in_option1;
        break;
      default:
        id3986x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3986out_result[(getCycle()+1)%2] = (id3986x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3987out_output;

  { // Node ID: 3987 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3987in_input = id3986out_result[getCycle()%2];

    id3987out_output = id3987in_input;
  }
  { // Node ID: 3989 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3989in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3989in_option0 = in_vars.id3988out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3989in_option1 = id3987out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3989x_1;

    switch((id3989in_sel.getValueAsLong())) {
      case 0l:
        id3989x_1 = id3989in_option0;
        break;
      case 1l:
        id3989x_1 = id3989in_option1;
        break;
      default:
        id3989x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3989out_result[(getCycle()+1)%2] = (id3989x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3990out_output;

  { // Node ID: 3990 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3990in_input = id3989out_result[getCycle()%2];

    id3990out_output = id3990in_input;
  }
  { // Node ID: 3992 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3992in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3992in_option0 = in_vars.id3991out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3992in_option1 = id3990out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3992x_1;

    switch((id3992in_sel.getValueAsLong())) {
      case 0l:
        id3992x_1 = id3992in_option0;
        break;
      case 1l:
        id3992x_1 = id3992in_option1;
        break;
      default:
        id3992x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3992out_result[(getCycle()+1)%2] = (id3992x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3993out_output;

  { // Node ID: 3993 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3993in_input = id3992out_result[getCycle()%2];

    id3993out_output = id3993in_input;
  }
  { // Node ID: 3995 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3995in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3995in_option0 = in_vars.id3994out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3995in_option1 = id3993out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3995x_1;

    switch((id3995in_sel.getValueAsLong())) {
      case 0l:
        id3995x_1 = id3995in_option0;
        break;
      case 1l:
        id3995x_1 = id3995in_option1;
        break;
      default:
        id3995x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3995out_result[(getCycle()+1)%2] = (id3995x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3996out_output;

  { // Node ID: 3996 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3996in_input = id3995out_result[getCycle()%2];

    id3996out_output = id3996in_input;
  }
  { // Node ID: 3998 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3998in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3998in_option0 = in_vars.id3997out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3998in_option1 = id3996out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3998x_1;

    switch((id3998in_sel.getValueAsLong())) {
      case 0l:
        id3998x_1 = id3998in_option0;
        break;
      case 1l:
        id3998x_1 = id3998in_option1;
        break;
      default:
        id3998x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3998out_result[(getCycle()+1)%2] = (id3998x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3999out_output;

  { // Node ID: 3999 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3999in_input = id3998out_result[getCycle()%2];

    id3999out_output = id3999in_input;
  }
  { // Node ID: 4001 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4001in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4001in_option0 = in_vars.id4000out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4001in_option1 = id3999out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4001x_1;

    switch((id4001in_sel.getValueAsLong())) {
      case 0l:
        id4001x_1 = id4001in_option0;
        break;
      case 1l:
        id4001x_1 = id4001in_option1;
        break;
      default:
        id4001x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4001out_result[(getCycle()+1)%2] = (id4001x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4002out_output;

  { // Node ID: 4002 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4002in_input = id4001out_result[getCycle()%2];

    id4002out_output = id4002in_input;
  }
  { // Node ID: 4004 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4004in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4004in_option0 = in_vars.id4003out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4004in_option1 = id4002out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4004x_1;

    switch((id4004in_sel.getValueAsLong())) {
      case 0l:
        id4004x_1 = id4004in_option0;
        break;
      case 1l:
        id4004x_1 = id4004in_option1;
        break;
      default:
        id4004x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4004out_result[(getCycle()+1)%2] = (id4004x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4005out_output;

  { // Node ID: 4005 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4005in_input = id4004out_result[getCycle()%2];

    id4005out_output = id4005in_input;
  }
  { // Node ID: 4007 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4007in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4007in_option0 = in_vars.id4006out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4007in_option1 = id4005out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4007x_1;

    switch((id4007in_sel.getValueAsLong())) {
      case 0l:
        id4007x_1 = id4007in_option0;
        break;
      case 1l:
        id4007x_1 = id4007in_option1;
        break;
      default:
        id4007x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4007out_result[(getCycle()+1)%2] = (id4007x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4008out_output;

  { // Node ID: 4008 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4008in_input = id4007out_result[getCycle()%2];

    id4008out_output = id4008in_input;
  }
  { // Node ID: 4010 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4010in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4010in_option0 = in_vars.id4009out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4010in_option1 = id4008out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4010x_1;

    switch((id4010in_sel.getValueAsLong())) {
      case 0l:
        id4010x_1 = id4010in_option0;
        break;
      case 1l:
        id4010x_1 = id4010in_option1;
        break;
      default:
        id4010x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4010out_result[(getCycle()+1)%2] = (id4010x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4011out_output;

  { // Node ID: 4011 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4011in_input = id4010out_result[getCycle()%2];

    id4011out_output = id4011in_input;
  }
  { // Node ID: 4013 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4013in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4013in_option0 = in_vars.id4012out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4013in_option1 = id4011out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4013x_1;

    switch((id4013in_sel.getValueAsLong())) {
      case 0l:
        id4013x_1 = id4013in_option0;
        break;
      case 1l:
        id4013x_1 = id4013in_option1;
        break;
      default:
        id4013x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4013out_result[(getCycle()+1)%2] = (id4013x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4014out_output;

  { // Node ID: 4014 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4014in_input = id4013out_result[getCycle()%2];

    id4014out_output = id4014in_input;
  }
  { // Node ID: 4016 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4016in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4016in_option0 = in_vars.id4015out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4016in_option1 = id4014out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4016x_1;

    switch((id4016in_sel.getValueAsLong())) {
      case 0l:
        id4016x_1 = id4016in_option0;
        break;
      case 1l:
        id4016x_1 = id4016in_option1;
        break;
      default:
        id4016x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4016out_result[(getCycle()+1)%2] = (id4016x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4017out_output;

  { // Node ID: 4017 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4017in_input = id4016out_result[getCycle()%2];

    id4017out_output = id4017in_input;
  }
  { // Node ID: 4019 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4019in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4019in_option0 = in_vars.id4018out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4019in_option1 = id4017out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4019x_1;

    switch((id4019in_sel.getValueAsLong())) {
      case 0l:
        id4019x_1 = id4019in_option0;
        break;
      case 1l:
        id4019x_1 = id4019in_option1;
        break;
      default:
        id4019x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4019out_result[(getCycle()+1)%2] = (id4019x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4020out_output;

  { // Node ID: 4020 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4020in_input = id4019out_result[getCycle()%2];

    id4020out_output = id4020in_input;
  }
  { // Node ID: 4022 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4022in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4022in_option0 = in_vars.id4021out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4022in_option1 = id4020out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4022x_1;

    switch((id4022in_sel.getValueAsLong())) {
      case 0l:
        id4022x_1 = id4022in_option0;
        break;
      case 1l:
        id4022x_1 = id4022in_option1;
        break;
      default:
        id4022x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4022out_result[(getCycle()+1)%2] = (id4022x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4023out_output;

  { // Node ID: 4023 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4023in_input = id4022out_result[getCycle()%2];

    id4023out_output = id4023in_input;
  }
  { // Node ID: 4025 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4025in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4025in_option0 = in_vars.id4024out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4025in_option1 = id4023out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4025x_1;

    switch((id4025in_sel.getValueAsLong())) {
      case 0l:
        id4025x_1 = id4025in_option0;
        break;
      case 1l:
        id4025x_1 = id4025in_option1;
        break;
      default:
        id4025x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4025out_result[(getCycle()+1)%2] = (id4025x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4026out_output;

  { // Node ID: 4026 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4026in_input = id4025out_result[getCycle()%2];

    id4026out_output = id4026in_input;
  }
  { // Node ID: 4028 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4028in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4028in_option0 = in_vars.id4027out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4028in_option1 = id4026out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4028x_1;

    switch((id4028in_sel.getValueAsLong())) {
      case 0l:
        id4028x_1 = id4028in_option0;
        break;
      case 1l:
        id4028x_1 = id4028in_option1;
        break;
      default:
        id4028x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4028out_result[(getCycle()+1)%2] = (id4028x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4029out_output;

  { // Node ID: 4029 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4029in_input = id4028out_result[getCycle()%2];

    id4029out_output = id4029in_input;
  }
  { // Node ID: 4031 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4031in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4031in_option0 = in_vars.id4030out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4031in_option1 = id4029out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4031x_1;

    switch((id4031in_sel.getValueAsLong())) {
      case 0l:
        id4031x_1 = id4031in_option0;
        break;
      case 1l:
        id4031x_1 = id4031in_option1;
        break;
      default:
        id4031x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4031out_result[(getCycle()+1)%2] = (id4031x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4032out_output;

  { // Node ID: 4032 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4032in_input = id4031out_result[getCycle()%2];

    id4032out_output = id4032in_input;
  }
  { // Node ID: 4034 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4034in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4034in_option0 = in_vars.id4033out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4034in_option1 = id4032out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4034x_1;

    switch((id4034in_sel.getValueAsLong())) {
      case 0l:
        id4034x_1 = id4034in_option0;
        break;
      case 1l:
        id4034x_1 = id4034in_option1;
        break;
      default:
        id4034x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4034out_result[(getCycle()+1)%2] = (id4034x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4035out_output;

  { // Node ID: 4035 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4035in_input = id4034out_result[getCycle()%2];

    id4035out_output = id4035in_input;
  }
  { // Node ID: 4037 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4037in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4037in_option0 = in_vars.id4036out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4037in_option1 = id4035out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4037x_1;

    switch((id4037in_sel.getValueAsLong())) {
      case 0l:
        id4037x_1 = id4037in_option0;
        break;
      case 1l:
        id4037x_1 = id4037in_option1;
        break;
      default:
        id4037x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4037out_result[(getCycle()+1)%2] = (id4037x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4038out_output;

  { // Node ID: 4038 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4038in_input = id4037out_result[getCycle()%2];

    id4038out_output = id4038in_input;
  }
  { // Node ID: 4040 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4040in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4040in_option0 = in_vars.id4039out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4040in_option1 = id4038out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4040x_1;

    switch((id4040in_sel.getValueAsLong())) {
      case 0l:
        id4040x_1 = id4040in_option0;
        break;
      case 1l:
        id4040x_1 = id4040in_option1;
        break;
      default:
        id4040x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4040out_result[(getCycle()+1)%2] = (id4040x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4041out_output;

  { // Node ID: 4041 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4041in_input = id4040out_result[getCycle()%2];

    id4041out_output = id4041in_input;
  }
  { // Node ID: 4043 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4043in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4043in_option0 = in_vars.id4042out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4043in_option1 = id4041out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4043x_1;

    switch((id4043in_sel.getValueAsLong())) {
      case 0l:
        id4043x_1 = id4043in_option0;
        break;
      case 1l:
        id4043x_1 = id4043in_option1;
        break;
      default:
        id4043x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4043out_result[(getCycle()+1)%2] = (id4043x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4044out_output;

  { // Node ID: 4044 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4044in_input = id4043out_result[getCycle()%2];

    id4044out_output = id4044in_input;
  }
  { // Node ID: 4046 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4046in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4046in_option0 = in_vars.id4045out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4046in_option1 = id4044out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4046x_1;

    switch((id4046in_sel.getValueAsLong())) {
      case 0l:
        id4046x_1 = id4046in_option0;
        break;
      case 1l:
        id4046x_1 = id4046in_option1;
        break;
      default:
        id4046x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4046out_result[(getCycle()+1)%2] = (id4046x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4047out_output;

  { // Node ID: 4047 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4047in_input = id4046out_result[getCycle()%2];

    id4047out_output = id4047in_input;
  }
  { // Node ID: 4049 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4049in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4049in_option0 = in_vars.id4048out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4049in_option1 = id4047out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4049x_1;

    switch((id4049in_sel.getValueAsLong())) {
      case 0l:
        id4049x_1 = id4049in_option0;
        break;
      case 1l:
        id4049x_1 = id4049in_option1;
        break;
      default:
        id4049x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4049out_result[(getCycle()+1)%2] = (id4049x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4050out_output;

  { // Node ID: 4050 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4050in_input = id4049out_result[getCycle()%2];

    id4050out_output = id4050in_input;
  }
  { // Node ID: 4052 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4052in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4052in_option0 = in_vars.id4051out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4052in_option1 = id4050out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4052x_1;

    switch((id4052in_sel.getValueAsLong())) {
      case 0l:
        id4052x_1 = id4052in_option0;
        break;
      case 1l:
        id4052x_1 = id4052in_option1;
        break;
      default:
        id4052x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4052out_result[(getCycle()+1)%2] = (id4052x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4053out_output;

  { // Node ID: 4053 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4053in_input = id4052out_result[getCycle()%2];

    id4053out_output = id4053in_input;
  }
  { // Node ID: 4055 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4055in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4055in_option0 = in_vars.id4054out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4055in_option1 = id4053out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4055x_1;

    switch((id4055in_sel.getValueAsLong())) {
      case 0l:
        id4055x_1 = id4055in_option0;
        break;
      case 1l:
        id4055x_1 = id4055in_option1;
        break;
      default:
        id4055x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4055out_result[(getCycle()+1)%2] = (id4055x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4056out_output;

  { // Node ID: 4056 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4056in_input = id4055out_result[getCycle()%2];

    id4056out_output = id4056in_input;
  }
  { // Node ID: 4058 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4058in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4058in_option0 = in_vars.id4057out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4058in_option1 = id4056out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4058x_1;

    switch((id4058in_sel.getValueAsLong())) {
      case 0l:
        id4058x_1 = id4058in_option0;
        break;
      case 1l:
        id4058x_1 = id4058in_option1;
        break;
      default:
        id4058x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4058out_result[(getCycle()+1)%2] = (id4058x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4059out_output;

  { // Node ID: 4059 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4059in_input = id4058out_result[getCycle()%2];

    id4059out_output = id4059in_input;
  }
  { // Node ID: 4061 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4061in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4061in_option0 = in_vars.id4060out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4061in_option1 = id4059out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4061x_1;

    switch((id4061in_sel.getValueAsLong())) {
      case 0l:
        id4061x_1 = id4061in_option0;
        break;
      case 1l:
        id4061x_1 = id4061in_option1;
        break;
      default:
        id4061x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4061out_result[(getCycle()+1)%2] = (id4061x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4062out_output;

  { // Node ID: 4062 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4062in_input = id4061out_result[getCycle()%2];

    id4062out_output = id4062in_input;
  }
  { // Node ID: 4064 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4064in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4064in_option0 = in_vars.id4063out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4064in_option1 = id4062out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4064x_1;

    switch((id4064in_sel.getValueAsLong())) {
      case 0l:
        id4064x_1 = id4064in_option0;
        break;
      case 1l:
        id4064x_1 = id4064in_option1;
        break;
      default:
        id4064x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4064out_result[(getCycle()+1)%2] = (id4064x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4065out_output;

  { // Node ID: 4065 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4065in_input = id4064out_result[getCycle()%2];

    id4065out_output = id4065in_input;
  }
  { // Node ID: 4067 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4067in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4067in_option0 = in_vars.id4066out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4067in_option1 = id4065out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4067x_1;

    switch((id4067in_sel.getValueAsLong())) {
      case 0l:
        id4067x_1 = id4067in_option0;
        break;
      case 1l:
        id4067x_1 = id4067in_option1;
        break;
      default:
        id4067x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4067out_result[(getCycle()+1)%2] = (id4067x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4068out_output;

  { // Node ID: 4068 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4068in_input = id4067out_result[getCycle()%2];

    id4068out_output = id4068in_input;
  }
  { // Node ID: 4070 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4070in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4070in_option0 = in_vars.id4069out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4070in_option1 = id4068out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4070x_1;

    switch((id4070in_sel.getValueAsLong())) {
      case 0l:
        id4070x_1 = id4070in_option0;
        break;
      case 1l:
        id4070x_1 = id4070in_option1;
        break;
      default:
        id4070x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4070out_result[(getCycle()+1)%2] = (id4070x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4071out_output;

  { // Node ID: 4071 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4071in_input = id4070out_result[getCycle()%2];

    id4071out_output = id4071in_input;
  }
  { // Node ID: 4073 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4073in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4073in_option0 = in_vars.id4072out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4073in_option1 = id4071out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4073x_1;

    switch((id4073in_sel.getValueAsLong())) {
      case 0l:
        id4073x_1 = id4073in_option0;
        break;
      case 1l:
        id4073x_1 = id4073in_option1;
        break;
      default:
        id4073x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4073out_result[(getCycle()+1)%2] = (id4073x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4074out_output;

  { // Node ID: 4074 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4074in_input = id4073out_result[getCycle()%2];

    id4074out_output = id4074in_input;
  }
  { // Node ID: 4076 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4076in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4076in_option0 = in_vars.id4075out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4076in_option1 = id4074out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4076x_1;

    switch((id4076in_sel.getValueAsLong())) {
      case 0l:
        id4076x_1 = id4076in_option0;
        break;
      case 1l:
        id4076x_1 = id4076in_option1;
        break;
      default:
        id4076x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4076out_result[(getCycle()+1)%2] = (id4076x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4077out_output;

  { // Node ID: 4077 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4077in_input = id4076out_result[getCycle()%2];

    id4077out_output = id4077in_input;
  }
  { // Node ID: 4079 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4079in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4079in_option0 = in_vars.id4078out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4079in_option1 = id4077out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4079x_1;

    switch((id4079in_sel.getValueAsLong())) {
      case 0l:
        id4079x_1 = id4079in_option0;
        break;
      case 1l:
        id4079x_1 = id4079in_option1;
        break;
      default:
        id4079x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4079out_result[(getCycle()+1)%2] = (id4079x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4080out_output;

  { // Node ID: 4080 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4080in_input = id4079out_result[getCycle()%2];

    id4080out_output = id4080in_input;
  }
  { // Node ID: 4082 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4082in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4082in_option0 = in_vars.id4081out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4082in_option1 = id4080out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4082x_1;

    switch((id4082in_sel.getValueAsLong())) {
      case 0l:
        id4082x_1 = id4082in_option0;
        break;
      case 1l:
        id4082x_1 = id4082in_option1;
        break;
      default:
        id4082x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4082out_result[(getCycle()+1)%2] = (id4082x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4083out_output;

  { // Node ID: 4083 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4083in_input = id4082out_result[getCycle()%2];

    id4083out_output = id4083in_input;
  }
  { // Node ID: 4085 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4085in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4085in_option0 = in_vars.id4084out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4085in_option1 = id4083out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4085x_1;

    switch((id4085in_sel.getValueAsLong())) {
      case 0l:
        id4085x_1 = id4085in_option0;
        break;
      case 1l:
        id4085x_1 = id4085in_option1;
        break;
      default:
        id4085x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4085out_result[(getCycle()+1)%2] = (id4085x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4086out_output;

  { // Node ID: 4086 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4086in_input = id4085out_result[getCycle()%2];

    id4086out_output = id4086in_input;
  }
  { // Node ID: 4088 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4088in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4088in_option0 = in_vars.id4087out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4088in_option1 = id4086out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4088x_1;

    switch((id4088in_sel.getValueAsLong())) {
      case 0l:
        id4088x_1 = id4088in_option0;
        break;
      case 1l:
        id4088x_1 = id4088in_option1;
        break;
      default:
        id4088x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4088out_result[(getCycle()+1)%2] = (id4088x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4089out_output;

  { // Node ID: 4089 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4089in_input = id4088out_result[getCycle()%2];

    id4089out_output = id4089in_input;
  }
  { // Node ID: 4091 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4091in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4091in_option0 = in_vars.id4090out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4091in_option1 = id4089out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4091x_1;

    switch((id4091in_sel.getValueAsLong())) {
      case 0l:
        id4091x_1 = id4091in_option0;
        break;
      case 1l:
        id4091x_1 = id4091in_option1;
        break;
      default:
        id4091x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4091out_result[(getCycle()+1)%2] = (id4091x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4092out_output;

  { // Node ID: 4092 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4092in_input = id4091out_result[getCycle()%2];

    id4092out_output = id4092in_input;
  }
  { // Node ID: 4094 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4094in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4094in_option0 = in_vars.id4093out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4094in_option1 = id4092out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4094x_1;

    switch((id4094in_sel.getValueAsLong())) {
      case 0l:
        id4094x_1 = id4094in_option0;
        break;
      case 1l:
        id4094x_1 = id4094in_option1;
        break;
      default:
        id4094x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4094out_result[(getCycle()+1)%2] = (id4094x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4095out_output;

  { // Node ID: 4095 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4095in_input = id4094out_result[getCycle()%2];

    id4095out_output = id4095in_input;
  }
  { // Node ID: 4097 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4097in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4097in_option0 = in_vars.id4096out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4097in_option1 = id4095out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4097x_1;

    switch((id4097in_sel.getValueAsLong())) {
      case 0l:
        id4097x_1 = id4097in_option0;
        break;
      case 1l:
        id4097x_1 = id4097in_option1;
        break;
      default:
        id4097x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4097out_result[(getCycle()+1)%2] = (id4097x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4098out_output;

  { // Node ID: 4098 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4098in_input = id4097out_result[getCycle()%2];

    id4098out_output = id4098in_input;
  }
  { // Node ID: 4100 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4100in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4100in_option0 = in_vars.id4099out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4100in_option1 = id4098out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4100x_1;

    switch((id4100in_sel.getValueAsLong())) {
      case 0l:
        id4100x_1 = id4100in_option0;
        break;
      case 1l:
        id4100x_1 = id4100in_option1;
        break;
      default:
        id4100x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4100out_result[(getCycle()+1)%2] = (id4100x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4101out_output;

  { // Node ID: 4101 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4101in_input = id4100out_result[getCycle()%2];

    id4101out_output = id4101in_input;
  }
  { // Node ID: 4103 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4103in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4103in_option0 = in_vars.id4102out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4103in_option1 = id4101out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4103x_1;

    switch((id4103in_sel.getValueAsLong())) {
      case 0l:
        id4103x_1 = id4103in_option0;
        break;
      case 1l:
        id4103x_1 = id4103in_option1;
        break;
      default:
        id4103x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4103out_result[(getCycle()+1)%2] = (id4103x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4104out_output;

  { // Node ID: 4104 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4104in_input = id4103out_result[getCycle()%2];

    id4104out_output = id4104in_input;
  }
  { // Node ID: 4106 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4106in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4106in_option0 = in_vars.id4105out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4106in_option1 = id4104out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4106x_1;

    switch((id4106in_sel.getValueAsLong())) {
      case 0l:
        id4106x_1 = id4106in_option0;
        break;
      case 1l:
        id4106x_1 = id4106in_option1;
        break;
      default:
        id4106x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4106out_result[(getCycle()+1)%2] = (id4106x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4107out_output;

  { // Node ID: 4107 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4107in_input = id4106out_result[getCycle()%2];

    id4107out_output = id4107in_input;
  }
  { // Node ID: 4109 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4109in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4109in_option0 = in_vars.id4108out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4109in_option1 = id4107out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4109x_1;

    switch((id4109in_sel.getValueAsLong())) {
      case 0l:
        id4109x_1 = id4109in_option0;
        break;
      case 1l:
        id4109x_1 = id4109in_option1;
        break;
      default:
        id4109x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4109out_result[(getCycle()+1)%2] = (id4109x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4110out_output;

  { // Node ID: 4110 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4110in_input = id4109out_result[getCycle()%2];

    id4110out_output = id4110in_input;
  }
  { // Node ID: 4112 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4112in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4112in_option0 = in_vars.id4111out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4112in_option1 = id4110out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4112x_1;

    switch((id4112in_sel.getValueAsLong())) {
      case 0l:
        id4112x_1 = id4112in_option0;
        break;
      case 1l:
        id4112x_1 = id4112in_option1;
        break;
      default:
        id4112x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4112out_result[(getCycle()+1)%2] = (id4112x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4113out_output;

  { // Node ID: 4113 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4113in_input = id4112out_result[getCycle()%2];

    id4113out_output = id4113in_input;
  }
  { // Node ID: 4115 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4115in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4115in_option0 = in_vars.id4114out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4115in_option1 = id4113out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4115x_1;

    switch((id4115in_sel.getValueAsLong())) {
      case 0l:
        id4115x_1 = id4115in_option0;
        break;
      case 1l:
        id4115x_1 = id4115in_option1;
        break;
      default:
        id4115x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4115out_result[(getCycle()+1)%2] = (id4115x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4116out_output;

  { // Node ID: 4116 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4116in_input = id4115out_result[getCycle()%2];

    id4116out_output = id4116in_input;
  }
  { // Node ID: 4118 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4118in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4118in_option0 = in_vars.id4117out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4118in_option1 = id4116out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4118x_1;

    switch((id4118in_sel.getValueAsLong())) {
      case 0l:
        id4118x_1 = id4118in_option0;
        break;
      case 1l:
        id4118x_1 = id4118in_option1;
        break;
      default:
        id4118x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4118out_result[(getCycle()+1)%2] = (id4118x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4119out_output;

  { // Node ID: 4119 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4119in_input = id4118out_result[getCycle()%2];

    id4119out_output = id4119in_input;
  }
  { // Node ID: 4121 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4121in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4121in_option0 = in_vars.id4120out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4121in_option1 = id4119out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4121x_1;

    switch((id4121in_sel.getValueAsLong())) {
      case 0l:
        id4121x_1 = id4121in_option0;
        break;
      case 1l:
        id4121x_1 = id4121in_option1;
        break;
      default:
        id4121x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4121out_result[(getCycle()+1)%2] = (id4121x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4122out_output;

  { // Node ID: 4122 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4122in_input = id4121out_result[getCycle()%2];

    id4122out_output = id4122in_input;
  }
  { // Node ID: 4124 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4124in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4124in_option0 = in_vars.id4123out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4124in_option1 = id4122out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4124x_1;

    switch((id4124in_sel.getValueAsLong())) {
      case 0l:
        id4124x_1 = id4124in_option0;
        break;
      case 1l:
        id4124x_1 = id4124in_option1;
        break;
      default:
        id4124x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4124out_result[(getCycle()+1)%2] = (id4124x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4125out_output;

  { // Node ID: 4125 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4125in_input = id4124out_result[getCycle()%2];

    id4125out_output = id4125in_input;
  }
  { // Node ID: 4127 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4127in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4127in_option0 = in_vars.id4126out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4127in_option1 = id4125out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4127x_1;

    switch((id4127in_sel.getValueAsLong())) {
      case 0l:
        id4127x_1 = id4127in_option0;
        break;
      case 1l:
        id4127x_1 = id4127in_option1;
        break;
      default:
        id4127x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4127out_result[(getCycle()+1)%2] = (id4127x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4128out_output;

  { // Node ID: 4128 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4128in_input = id4127out_result[getCycle()%2];

    id4128out_output = id4128in_input;
  }
  { // Node ID: 4130 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4130in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4130in_option0 = in_vars.id4129out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4130in_option1 = id4128out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4130x_1;

    switch((id4130in_sel.getValueAsLong())) {
      case 0l:
        id4130x_1 = id4130in_option0;
        break;
      case 1l:
        id4130x_1 = id4130in_option1;
        break;
      default:
        id4130x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4130out_result[(getCycle()+1)%2] = (id4130x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4131out_output;

  { // Node ID: 4131 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4131in_input = id4130out_result[getCycle()%2];

    id4131out_output = id4131in_input;
  }
  { // Node ID: 4133 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4133in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4133in_option0 = in_vars.id4132out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4133in_option1 = id4131out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4133x_1;

    switch((id4133in_sel.getValueAsLong())) {
      case 0l:
        id4133x_1 = id4133in_option0;
        break;
      case 1l:
        id4133x_1 = id4133in_option1;
        break;
      default:
        id4133x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4133out_result[(getCycle()+1)%2] = (id4133x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4134out_output;

  { // Node ID: 4134 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4134in_input = id4133out_result[getCycle()%2];

    id4134out_output = id4134in_input;
  }
  { // Node ID: 4136 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4136in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4136in_option0 = in_vars.id4135out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4136in_option1 = id4134out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4136x_1;

    switch((id4136in_sel.getValueAsLong())) {
      case 0l:
        id4136x_1 = id4136in_option0;
        break;
      case 1l:
        id4136x_1 = id4136in_option1;
        break;
      default:
        id4136x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4136out_result[(getCycle()+1)%2] = (id4136x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4137out_output;

  { // Node ID: 4137 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4137in_input = id4136out_result[getCycle()%2];

    id4137out_output = id4137in_input;
  }
  { // Node ID: 4139 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4139in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4139in_option0 = in_vars.id4138out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4139in_option1 = id4137out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4139x_1;

    switch((id4139in_sel.getValueAsLong())) {
      case 0l:
        id4139x_1 = id4139in_option0;
        break;
      case 1l:
        id4139x_1 = id4139in_option1;
        break;
      default:
        id4139x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4139out_result[(getCycle()+1)%2] = (id4139x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4140out_output;

  { // Node ID: 4140 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4140in_input = id4139out_result[getCycle()%2];

    id4140out_output = id4140in_input;
  }
  { // Node ID: 4142 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4142in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4142in_option0 = in_vars.id4141out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4142in_option1 = id4140out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4142x_1;

    switch((id4142in_sel.getValueAsLong())) {
      case 0l:
        id4142x_1 = id4142in_option0;
        break;
      case 1l:
        id4142x_1 = id4142in_option1;
        break;
      default:
        id4142x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4142out_result[(getCycle()+1)%2] = (id4142x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4143out_output;

  { // Node ID: 4143 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4143in_input = id4142out_result[getCycle()%2];

    id4143out_output = id4143in_input;
  }
  { // Node ID: 4145 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4145in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4145in_option0 = in_vars.id4144out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4145in_option1 = id4143out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4145x_1;

    switch((id4145in_sel.getValueAsLong())) {
      case 0l:
        id4145x_1 = id4145in_option0;
        break;
      case 1l:
        id4145x_1 = id4145in_option1;
        break;
      default:
        id4145x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4145out_result[(getCycle()+1)%2] = (id4145x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4146out_output;

  { // Node ID: 4146 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4146in_input = id4145out_result[getCycle()%2];

    id4146out_output = id4146in_input;
  }
  { // Node ID: 4148 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4148in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4148in_option0 = in_vars.id4147out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4148in_option1 = id4146out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4148x_1;

    switch((id4148in_sel.getValueAsLong())) {
      case 0l:
        id4148x_1 = id4148in_option0;
        break;
      case 1l:
        id4148x_1 = id4148in_option1;
        break;
      default:
        id4148x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4148out_result[(getCycle()+1)%2] = (id4148x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4149out_output;

  { // Node ID: 4149 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4149in_input = id4148out_result[getCycle()%2];

    id4149out_output = id4149in_input;
  }
  { // Node ID: 4151 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4151in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4151in_option0 = in_vars.id4150out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4151in_option1 = id4149out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4151x_1;

    switch((id4151in_sel.getValueAsLong())) {
      case 0l:
        id4151x_1 = id4151in_option0;
        break;
      case 1l:
        id4151x_1 = id4151in_option1;
        break;
      default:
        id4151x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4151out_result[(getCycle()+1)%2] = (id4151x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4152out_output;

  { // Node ID: 4152 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4152in_input = id4151out_result[getCycle()%2];

    id4152out_output = id4152in_input;
  }
  { // Node ID: 4154 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4154in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4154in_option0 = in_vars.id4153out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4154in_option1 = id4152out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4154x_1;

    switch((id4154in_sel.getValueAsLong())) {
      case 0l:
        id4154x_1 = id4154in_option0;
        break;
      case 1l:
        id4154x_1 = id4154in_option1;
        break;
      default:
        id4154x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4154out_result[(getCycle()+1)%2] = (id4154x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4155out_output;

  { // Node ID: 4155 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4155in_input = id4154out_result[getCycle()%2];

    id4155out_output = id4155in_input;
  }
  { // Node ID: 4157 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4157in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4157in_option0 = in_vars.id4156out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4157in_option1 = id4155out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4157x_1;

    switch((id4157in_sel.getValueAsLong())) {
      case 0l:
        id4157x_1 = id4157in_option0;
        break;
      case 1l:
        id4157x_1 = id4157in_option1;
        break;
      default:
        id4157x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4157out_result[(getCycle()+1)%2] = (id4157x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4158out_output;

  { // Node ID: 4158 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4158in_input = id4157out_result[getCycle()%2];

    id4158out_output = id4158in_input;
  }
  { // Node ID: 4160 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4160in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4160in_option0 = in_vars.id4159out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4160in_option1 = id4158out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4160x_1;

    switch((id4160in_sel.getValueAsLong())) {
      case 0l:
        id4160x_1 = id4160in_option0;
        break;
      case 1l:
        id4160x_1 = id4160in_option1;
        break;
      default:
        id4160x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4160out_result[(getCycle()+1)%2] = (id4160x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4161out_output;

  { // Node ID: 4161 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4161in_input = id4160out_result[getCycle()%2];

    id4161out_output = id4161in_input;
  }
  { // Node ID: 4163 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4163in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4163in_option0 = in_vars.id4162out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4163in_option1 = id4161out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4163x_1;

    switch((id4163in_sel.getValueAsLong())) {
      case 0l:
        id4163x_1 = id4163in_option0;
        break;
      case 1l:
        id4163x_1 = id4163in_option1;
        break;
      default:
        id4163x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4163out_result[(getCycle()+1)%2] = (id4163x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4164out_output;

  { // Node ID: 4164 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4164in_input = id4163out_result[getCycle()%2];

    id4164out_output = id4164in_input;
  }
  { // Node ID: 4166 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4166in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4166in_option0 = in_vars.id4165out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4166in_option1 = id4164out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4166x_1;

    switch((id4166in_sel.getValueAsLong())) {
      case 0l:
        id4166x_1 = id4166in_option0;
        break;
      case 1l:
        id4166x_1 = id4166in_option1;
        break;
      default:
        id4166x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4166out_result[(getCycle()+1)%2] = (id4166x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4167out_output;

  { // Node ID: 4167 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4167in_input = id4166out_result[getCycle()%2];

    id4167out_output = id4167in_input;
  }
  { // Node ID: 4169 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4169in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4169in_option0 = in_vars.id4168out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4169in_option1 = id4167out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4169x_1;

    switch((id4169in_sel.getValueAsLong())) {
      case 0l:
        id4169x_1 = id4169in_option0;
        break;
      case 1l:
        id4169x_1 = id4169in_option1;
        break;
      default:
        id4169x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4169out_result[(getCycle()+1)%2] = (id4169x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4170out_output;

  { // Node ID: 4170 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4170in_input = id4169out_result[getCycle()%2];

    id4170out_output = id4170in_input;
  }
  { // Node ID: 4172 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4172in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4172in_option0 = in_vars.id4171out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4172in_option1 = id4170out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4172x_1;

    switch((id4172in_sel.getValueAsLong())) {
      case 0l:
        id4172x_1 = id4172in_option0;
        break;
      case 1l:
        id4172x_1 = id4172in_option1;
        break;
      default:
        id4172x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4172out_result[(getCycle()+1)%2] = (id4172x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4173out_output;

  { // Node ID: 4173 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4173in_input = id4172out_result[getCycle()%2];

    id4173out_output = id4173in_input;
  }
  { // Node ID: 4175 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4175in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4175in_option0 = in_vars.id4174out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4175in_option1 = id4173out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4175x_1;

    switch((id4175in_sel.getValueAsLong())) {
      case 0l:
        id4175x_1 = id4175in_option0;
        break;
      case 1l:
        id4175x_1 = id4175in_option1;
        break;
      default:
        id4175x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4175out_result[(getCycle()+1)%2] = (id4175x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4176out_output;

  { // Node ID: 4176 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4176in_input = id4175out_result[getCycle()%2];

    id4176out_output = id4176in_input;
  }
  { // Node ID: 4178 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4178in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4178in_option0 = in_vars.id4177out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4178in_option1 = id4176out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4178x_1;

    switch((id4178in_sel.getValueAsLong())) {
      case 0l:
        id4178x_1 = id4178in_option0;
        break;
      case 1l:
        id4178x_1 = id4178in_option1;
        break;
      default:
        id4178x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4178out_result[(getCycle()+1)%2] = (id4178x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4179out_output;

  { // Node ID: 4179 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4179in_input = id4178out_result[getCycle()%2];

    id4179out_output = id4179in_input;
  }
  { // Node ID: 4181 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4181in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4181in_option0 = in_vars.id4180out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4181in_option1 = id4179out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4181x_1;

    switch((id4181in_sel.getValueAsLong())) {
      case 0l:
        id4181x_1 = id4181in_option0;
        break;
      case 1l:
        id4181x_1 = id4181in_option1;
        break;
      default:
        id4181x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4181out_result[(getCycle()+1)%2] = (id4181x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4182out_output;

  { // Node ID: 4182 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4182in_input = id4181out_result[getCycle()%2];

    id4182out_output = id4182in_input;
  }
  { // Node ID: 4184 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4184in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4184in_option0 = in_vars.id4183out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4184in_option1 = id4182out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4184x_1;

    switch((id4184in_sel.getValueAsLong())) {
      case 0l:
        id4184x_1 = id4184in_option0;
        break;
      case 1l:
        id4184x_1 = id4184in_option1;
        break;
      default:
        id4184x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4184out_result[(getCycle()+1)%2] = (id4184x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4185out_output;

  { // Node ID: 4185 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4185in_input = id4184out_result[getCycle()%2];

    id4185out_output = id4185in_input;
  }
  { // Node ID: 4187 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4187in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4187in_option0 = in_vars.id4186out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4187in_option1 = id4185out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4187x_1;

    switch((id4187in_sel.getValueAsLong())) {
      case 0l:
        id4187x_1 = id4187in_option0;
        break;
      case 1l:
        id4187x_1 = id4187in_option1;
        break;
      default:
        id4187x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4187out_result[(getCycle()+1)%2] = (id4187x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4188out_output;

  { // Node ID: 4188 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4188in_input = id4187out_result[getCycle()%2];

    id4188out_output = id4188in_input;
  }
  { // Node ID: 4190 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4190in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4190in_option0 = in_vars.id4189out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4190in_option1 = id4188out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4190x_1;

    switch((id4190in_sel.getValueAsLong())) {
      case 0l:
        id4190x_1 = id4190in_option0;
        break;
      case 1l:
        id4190x_1 = id4190in_option1;
        break;
      default:
        id4190x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4190out_result[(getCycle()+1)%2] = (id4190x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4191out_output;

  { // Node ID: 4191 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4191in_input = id4190out_result[getCycle()%2];

    id4191out_output = id4191in_input;
  }
  { // Node ID: 4193 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4193in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4193in_option0 = in_vars.id4192out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4193in_option1 = id4191out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4193x_1;

    switch((id4193in_sel.getValueAsLong())) {
      case 0l:
        id4193x_1 = id4193in_option0;
        break;
      case 1l:
        id4193x_1 = id4193in_option1;
        break;
      default:
        id4193x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4193out_result[(getCycle()+1)%2] = (id4193x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4194out_output;

  { // Node ID: 4194 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4194in_input = id4193out_result[getCycle()%2];

    id4194out_output = id4194in_input;
  }
  { // Node ID: 4196 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4196in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4196in_option0 = in_vars.id4195out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4196in_option1 = id4194out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4196x_1;

    switch((id4196in_sel.getValueAsLong())) {
      case 0l:
        id4196x_1 = id4196in_option0;
        break;
      case 1l:
        id4196x_1 = id4196in_option1;
        break;
      default:
        id4196x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4196out_result[(getCycle()+1)%2] = (id4196x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4197out_output;

  { // Node ID: 4197 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4197in_input = id4196out_result[getCycle()%2];

    id4197out_output = id4197in_input;
  }
  { // Node ID: 4199 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4199in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4199in_option0 = in_vars.id4198out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4199in_option1 = id4197out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4199x_1;

    switch((id4199in_sel.getValueAsLong())) {
      case 0l:
        id4199x_1 = id4199in_option0;
        break;
      case 1l:
        id4199x_1 = id4199in_option1;
        break;
      default:
        id4199x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4199out_result[(getCycle()+1)%2] = (id4199x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4200out_output;

  { // Node ID: 4200 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4200in_input = id4199out_result[getCycle()%2];

    id4200out_output = id4200in_input;
  }
  { // Node ID: 4202 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4202in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4202in_option0 = in_vars.id4201out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4202in_option1 = id4200out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4202x_1;

    switch((id4202in_sel.getValueAsLong())) {
      case 0l:
        id4202x_1 = id4202in_option0;
        break;
      case 1l:
        id4202x_1 = id4202in_option1;
        break;
      default:
        id4202x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4202out_result[(getCycle()+1)%2] = (id4202x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4203out_output;

  { // Node ID: 4203 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4203in_input = id4202out_result[getCycle()%2];

    id4203out_output = id4203in_input;
  }
  { // Node ID: 4205 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4205in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4205in_option0 = in_vars.id4204out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4205in_option1 = id4203out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4205x_1;

    switch((id4205in_sel.getValueAsLong())) {
      case 0l:
        id4205x_1 = id4205in_option0;
        break;
      case 1l:
        id4205x_1 = id4205in_option1;
        break;
      default:
        id4205x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4205out_result[(getCycle()+1)%2] = (id4205x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4206out_output;

  { // Node ID: 4206 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4206in_input = id4205out_result[getCycle()%2];

    id4206out_output = id4206in_input;
  }
  { // Node ID: 4208 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4208in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4208in_option0 = in_vars.id4207out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4208in_option1 = id4206out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4208x_1;

    switch((id4208in_sel.getValueAsLong())) {
      case 0l:
        id4208x_1 = id4208in_option0;
        break;
      case 1l:
        id4208x_1 = id4208in_option1;
        break;
      default:
        id4208x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4208out_result[(getCycle()+1)%2] = (id4208x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4209out_output;

  { // Node ID: 4209 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4209in_input = id4208out_result[getCycle()%2];

    id4209out_output = id4209in_input;
  }
  { // Node ID: 4211 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4211in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4211in_option0 = in_vars.id4210out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4211in_option1 = id4209out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4211x_1;

    switch((id4211in_sel.getValueAsLong())) {
      case 0l:
        id4211x_1 = id4211in_option0;
        break;
      case 1l:
        id4211x_1 = id4211in_option1;
        break;
      default:
        id4211x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4211out_result[(getCycle()+1)%2] = (id4211x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4212out_output;

  { // Node ID: 4212 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4212in_input = id4211out_result[getCycle()%2];

    id4212out_output = id4212in_input;
  }
  { // Node ID: 4214 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4214in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4214in_option0 = in_vars.id4213out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4214in_option1 = id4212out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4214x_1;

    switch((id4214in_sel.getValueAsLong())) {
      case 0l:
        id4214x_1 = id4214in_option0;
        break;
      case 1l:
        id4214x_1 = id4214in_option1;
        break;
      default:
        id4214x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4214out_result[(getCycle()+1)%2] = (id4214x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4215out_output;

  { // Node ID: 4215 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4215in_input = id4214out_result[getCycle()%2];

    id4215out_output = id4215in_input;
  }
  { // Node ID: 4217 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4217in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4217in_option0 = in_vars.id4216out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4217in_option1 = id4215out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4217x_1;

    switch((id4217in_sel.getValueAsLong())) {
      case 0l:
        id4217x_1 = id4217in_option0;
        break;
      case 1l:
        id4217x_1 = id4217in_option1;
        break;
      default:
        id4217x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4217out_result[(getCycle()+1)%2] = (id4217x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4218out_output;

  { // Node ID: 4218 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4218in_input = id4217out_result[getCycle()%2];

    id4218out_output = id4218in_input;
  }
  { // Node ID: 4220 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4220in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4220in_option0 = in_vars.id4219out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4220in_option1 = id4218out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4220x_1;

    switch((id4220in_sel.getValueAsLong())) {
      case 0l:
        id4220x_1 = id4220in_option0;
        break;
      case 1l:
        id4220x_1 = id4220in_option1;
        break;
      default:
        id4220x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4220out_result[(getCycle()+1)%2] = (id4220x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4221out_output;

  { // Node ID: 4221 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4221in_input = id4220out_result[getCycle()%2];

    id4221out_output = id4221in_input;
  }
  { // Node ID: 4223 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4223in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4223in_option0 = in_vars.id4222out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4223in_option1 = id4221out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4223x_1;

    switch((id4223in_sel.getValueAsLong())) {
      case 0l:
        id4223x_1 = id4223in_option0;
        break;
      case 1l:
        id4223x_1 = id4223in_option1;
        break;
      default:
        id4223x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4223out_result[(getCycle()+1)%2] = (id4223x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4224out_output;

  { // Node ID: 4224 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4224in_input = id4223out_result[getCycle()%2];

    id4224out_output = id4224in_input;
  }
  { // Node ID: 4226 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4226in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4226in_option0 = in_vars.id4225out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4226in_option1 = id4224out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4226x_1;

    switch((id4226in_sel.getValueAsLong())) {
      case 0l:
        id4226x_1 = id4226in_option0;
        break;
      case 1l:
        id4226x_1 = id4226in_option1;
        break;
      default:
        id4226x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4226out_result[(getCycle()+1)%2] = (id4226x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4227out_output;

  { // Node ID: 4227 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4227in_input = id4226out_result[getCycle()%2];

    id4227out_output = id4227in_input;
  }
  { // Node ID: 4229 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4229in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4229in_option0 = in_vars.id4228out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4229in_option1 = id4227out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4229x_1;

    switch((id4229in_sel.getValueAsLong())) {
      case 0l:
        id4229x_1 = id4229in_option0;
        break;
      case 1l:
        id4229x_1 = id4229in_option1;
        break;
      default:
        id4229x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4229out_result[(getCycle()+1)%2] = (id4229x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4230out_output;

  { // Node ID: 4230 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4230in_input = id4229out_result[getCycle()%2];

    id4230out_output = id4230in_input;
  }
  { // Node ID: 4232 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4232in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4232in_option0 = in_vars.id4231out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4232in_option1 = id4230out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4232x_1;

    switch((id4232in_sel.getValueAsLong())) {
      case 0l:
        id4232x_1 = id4232in_option0;
        break;
      case 1l:
        id4232x_1 = id4232in_option1;
        break;
      default:
        id4232x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4232out_result[(getCycle()+1)%2] = (id4232x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4233out_output;

  { // Node ID: 4233 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4233in_input = id4232out_result[getCycle()%2];

    id4233out_output = id4233in_input;
  }
  { // Node ID: 4235 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4235in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4235in_option0 = in_vars.id4234out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4235in_option1 = id4233out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4235x_1;

    switch((id4235in_sel.getValueAsLong())) {
      case 0l:
        id4235x_1 = id4235in_option0;
        break;
      case 1l:
        id4235x_1 = id4235in_option1;
        break;
      default:
        id4235x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4235out_result[(getCycle()+1)%2] = (id4235x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4236out_output;

  { // Node ID: 4236 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4236in_input = id4235out_result[getCycle()%2];

    id4236out_output = id4236in_input;
  }
  { // Node ID: 4238 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4238in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4238in_option0 = in_vars.id4237out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4238in_option1 = id4236out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4238x_1;

    switch((id4238in_sel.getValueAsLong())) {
      case 0l:
        id4238x_1 = id4238in_option0;
        break;
      case 1l:
        id4238x_1 = id4238in_option1;
        break;
      default:
        id4238x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4238out_result[(getCycle()+1)%2] = (id4238x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4239out_output;

  { // Node ID: 4239 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4239in_input = id4238out_result[getCycle()%2];

    id4239out_output = id4239in_input;
  }
  { // Node ID: 4241 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4241in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4241in_option0 = in_vars.id4240out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4241in_option1 = id4239out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4241x_1;

    switch((id4241in_sel.getValueAsLong())) {
      case 0l:
        id4241x_1 = id4241in_option0;
        break;
      case 1l:
        id4241x_1 = id4241in_option1;
        break;
      default:
        id4241x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4241out_result[(getCycle()+1)%2] = (id4241x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4242out_output;

  { // Node ID: 4242 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4242in_input = id4241out_result[getCycle()%2];

    id4242out_output = id4242in_input;
  }
  { // Node ID: 4244 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4244in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4244in_option0 = in_vars.id4243out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4244in_option1 = id4242out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4244x_1;

    switch((id4244in_sel.getValueAsLong())) {
      case 0l:
        id4244x_1 = id4244in_option0;
        break;
      case 1l:
        id4244x_1 = id4244in_option1;
        break;
      default:
        id4244x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4244out_result[(getCycle()+1)%2] = (id4244x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4245out_output;

  { // Node ID: 4245 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4245in_input = id4244out_result[getCycle()%2];

    id4245out_output = id4245in_input;
  }
  { // Node ID: 4247 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4247in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4247in_option0 = in_vars.id4246out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4247in_option1 = id4245out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4247x_1;

    switch((id4247in_sel.getValueAsLong())) {
      case 0l:
        id4247x_1 = id4247in_option0;
        break;
      case 1l:
        id4247x_1 = id4247in_option1;
        break;
      default:
        id4247x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4247out_result[(getCycle()+1)%2] = (id4247x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4248out_output;

  { // Node ID: 4248 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4248in_input = id4247out_result[getCycle()%2];

    id4248out_output = id4248in_input;
  }
  { // Node ID: 4250 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4250in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4250in_option0 = in_vars.id4249out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4250in_option1 = id4248out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4250x_1;

    switch((id4250in_sel.getValueAsLong())) {
      case 0l:
        id4250x_1 = id4250in_option0;
        break;
      case 1l:
        id4250x_1 = id4250in_option1;
        break;
      default:
        id4250x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4250out_result[(getCycle()+1)%2] = (id4250x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4251out_output;

  { // Node ID: 4251 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4251in_input = id4250out_result[getCycle()%2];

    id4251out_output = id4251in_input;
  }
  { // Node ID: 4253 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4253in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4253in_option0 = in_vars.id4252out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4253in_option1 = id4251out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4253x_1;

    switch((id4253in_sel.getValueAsLong())) {
      case 0l:
        id4253x_1 = id4253in_option0;
        break;
      case 1l:
        id4253x_1 = id4253in_option1;
        break;
      default:
        id4253x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4253out_result[(getCycle()+1)%2] = (id4253x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4254out_output;

  { // Node ID: 4254 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4254in_input = id4253out_result[getCycle()%2];

    id4254out_output = id4254in_input;
  }
  { // Node ID: 4256 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4256in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4256in_option0 = in_vars.id4255out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4256in_option1 = id4254out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4256x_1;

    switch((id4256in_sel.getValueAsLong())) {
      case 0l:
        id4256x_1 = id4256in_option0;
        break;
      case 1l:
        id4256x_1 = id4256in_option1;
        break;
      default:
        id4256x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4256out_result[(getCycle()+1)%2] = (id4256x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4257out_output;

  { // Node ID: 4257 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4257in_input = id4256out_result[getCycle()%2];

    id4257out_output = id4257in_input;
  }
  { // Node ID: 4259 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4259in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4259in_option0 = in_vars.id4258out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4259in_option1 = id4257out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4259x_1;

    switch((id4259in_sel.getValueAsLong())) {
      case 0l:
        id4259x_1 = id4259in_option0;
        break;
      case 1l:
        id4259x_1 = id4259in_option1;
        break;
      default:
        id4259x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4259out_result[(getCycle()+1)%2] = (id4259x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4260out_output;

  { // Node ID: 4260 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4260in_input = id4259out_result[getCycle()%2];

    id4260out_output = id4260in_input;
  }
  { // Node ID: 4262 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4262in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4262in_option0 = in_vars.id4261out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4262in_option1 = id4260out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4262x_1;

    switch((id4262in_sel.getValueAsLong())) {
      case 0l:
        id4262x_1 = id4262in_option0;
        break;
      case 1l:
        id4262x_1 = id4262in_option1;
        break;
      default:
        id4262x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4262out_result[(getCycle()+1)%2] = (id4262x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4263out_output;

  { // Node ID: 4263 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4263in_input = id4262out_result[getCycle()%2];

    id4263out_output = id4263in_input;
  }
  { // Node ID: 4265 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4265in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4265in_option0 = in_vars.id4264out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4265in_option1 = id4263out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4265x_1;

    switch((id4265in_sel.getValueAsLong())) {
      case 0l:
        id4265x_1 = id4265in_option0;
        break;
      case 1l:
        id4265x_1 = id4265in_option1;
        break;
      default:
        id4265x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4265out_result[(getCycle()+1)%2] = (id4265x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4266out_output;

  { // Node ID: 4266 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4266in_input = id4265out_result[getCycle()%2];

    id4266out_output = id4266in_input;
  }
  { // Node ID: 4268 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4268in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4268in_option0 = in_vars.id4267out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4268in_option1 = id4266out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4268x_1;

    switch((id4268in_sel.getValueAsLong())) {
      case 0l:
        id4268x_1 = id4268in_option0;
        break;
      case 1l:
        id4268x_1 = id4268in_option1;
        break;
      default:
        id4268x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4268out_result[(getCycle()+1)%2] = (id4268x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4269out_output;

  { // Node ID: 4269 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4269in_input = id4268out_result[getCycle()%2];

    id4269out_output = id4269in_input;
  }
  { // Node ID: 4271 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4271in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4271in_option0 = in_vars.id4270out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4271in_option1 = id4269out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4271x_1;

    switch((id4271in_sel.getValueAsLong())) {
      case 0l:
        id4271x_1 = id4271in_option0;
        break;
      case 1l:
        id4271x_1 = id4271in_option1;
        break;
      default:
        id4271x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4271out_result[(getCycle()+1)%2] = (id4271x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4272out_output;

  { // Node ID: 4272 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4272in_input = id4271out_result[getCycle()%2];

    id4272out_output = id4272in_input;
  }
  { // Node ID: 4274 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4274in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4274in_option0 = in_vars.id4273out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4274in_option1 = id4272out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4274x_1;

    switch((id4274in_sel.getValueAsLong())) {
      case 0l:
        id4274x_1 = id4274in_option0;
        break;
      case 1l:
        id4274x_1 = id4274in_option1;
        break;
      default:
        id4274x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4274out_result[(getCycle()+1)%2] = (id4274x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4275out_output;

  { // Node ID: 4275 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4275in_input = id4274out_result[getCycle()%2];

    id4275out_output = id4275in_input;
  }
  { // Node ID: 4277 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4277in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4277in_option0 = in_vars.id4276out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4277in_option1 = id4275out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4277x_1;

    switch((id4277in_sel.getValueAsLong())) {
      case 0l:
        id4277x_1 = id4277in_option0;
        break;
      case 1l:
        id4277x_1 = id4277in_option1;
        break;
      default:
        id4277x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4277out_result[(getCycle()+1)%2] = (id4277x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4278out_output;

  { // Node ID: 4278 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4278in_input = id4277out_result[getCycle()%2];

    id4278out_output = id4278in_input;
  }
  { // Node ID: 4280 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4280in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4280in_option0 = in_vars.id4279out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4280in_option1 = id4278out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4280x_1;

    switch((id4280in_sel.getValueAsLong())) {
      case 0l:
        id4280x_1 = id4280in_option0;
        break;
      case 1l:
        id4280x_1 = id4280in_option1;
        break;
      default:
        id4280x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4280out_result[(getCycle()+1)%2] = (id4280x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4281out_output;

  { // Node ID: 4281 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4281in_input = id4280out_result[getCycle()%2];

    id4281out_output = id4281in_input;
  }
  { // Node ID: 4283 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4283in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4283in_option0 = in_vars.id4282out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4283in_option1 = id4281out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4283x_1;

    switch((id4283in_sel.getValueAsLong())) {
      case 0l:
        id4283x_1 = id4283in_option0;
        break;
      case 1l:
        id4283x_1 = id4283in_option1;
        break;
      default:
        id4283x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4283out_result[(getCycle()+1)%2] = (id4283x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4284out_output;

  { // Node ID: 4284 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4284in_input = id4283out_result[getCycle()%2];

    id4284out_output = id4284in_input;
  }
  { // Node ID: 4286 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4286in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4286in_option0 = in_vars.id4285out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4286in_option1 = id4284out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4286x_1;

    switch((id4286in_sel.getValueAsLong())) {
      case 0l:
        id4286x_1 = id4286in_option0;
        break;
      case 1l:
        id4286x_1 = id4286in_option1;
        break;
      default:
        id4286x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4286out_result[(getCycle()+1)%2] = (id4286x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4287out_output;

  { // Node ID: 4287 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4287in_input = id4286out_result[getCycle()%2];

    id4287out_output = id4287in_input;
  }
  { // Node ID: 4289 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4289in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4289in_option0 = in_vars.id4288out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4289in_option1 = id4287out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4289x_1;

    switch((id4289in_sel.getValueAsLong())) {
      case 0l:
        id4289x_1 = id4289in_option0;
        break;
      case 1l:
        id4289x_1 = id4289in_option1;
        break;
      default:
        id4289x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4289out_result[(getCycle()+1)%2] = (id4289x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4290out_output;

  { // Node ID: 4290 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4290in_input = id4289out_result[getCycle()%2];

    id4290out_output = id4290in_input;
  }
  { // Node ID: 4292 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4292in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4292in_option0 = in_vars.id4291out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4292in_option1 = id4290out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4292x_1;

    switch((id4292in_sel.getValueAsLong())) {
      case 0l:
        id4292x_1 = id4292in_option0;
        break;
      case 1l:
        id4292x_1 = id4292in_option1;
        break;
      default:
        id4292x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4292out_result[(getCycle()+1)%2] = (id4292x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4293out_output;

  { // Node ID: 4293 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4293in_input = id4292out_result[getCycle()%2];

    id4293out_output = id4293in_input;
  }
  { // Node ID: 4295 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4295in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4295in_option0 = in_vars.id4294out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4295in_option1 = id4293out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4295x_1;

    switch((id4295in_sel.getValueAsLong())) {
      case 0l:
        id4295x_1 = id4295in_option0;
        break;
      case 1l:
        id4295x_1 = id4295in_option1;
        break;
      default:
        id4295x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4295out_result[(getCycle()+1)%2] = (id4295x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4296out_output;

  { // Node ID: 4296 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4296in_input = id4295out_result[getCycle()%2];

    id4296out_output = id4296in_input;
  }
  { // Node ID: 4298 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4298in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4298in_option0 = in_vars.id4297out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4298in_option1 = id4296out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4298x_1;

    switch((id4298in_sel.getValueAsLong())) {
      case 0l:
        id4298x_1 = id4298in_option0;
        break;
      case 1l:
        id4298x_1 = id4298in_option1;
        break;
      default:
        id4298x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4298out_result[(getCycle()+1)%2] = (id4298x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4299out_output;

  { // Node ID: 4299 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4299in_input = id4298out_result[getCycle()%2];

    id4299out_output = id4299in_input;
  }
  { // Node ID: 4301 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4301in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4301in_option0 = in_vars.id4300out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4301in_option1 = id4299out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4301x_1;

    switch((id4301in_sel.getValueAsLong())) {
      case 0l:
        id4301x_1 = id4301in_option0;
        break;
      case 1l:
        id4301x_1 = id4301in_option1;
        break;
      default:
        id4301x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4301out_result[(getCycle()+1)%2] = (id4301x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4302out_output;

  { // Node ID: 4302 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4302in_input = id4301out_result[getCycle()%2];

    id4302out_output = id4302in_input;
  }
  { // Node ID: 4304 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4304in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4304in_option0 = in_vars.id4303out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4304in_option1 = id4302out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4304x_1;

    switch((id4304in_sel.getValueAsLong())) {
      case 0l:
        id4304x_1 = id4304in_option0;
        break;
      case 1l:
        id4304x_1 = id4304in_option1;
        break;
      default:
        id4304x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4304out_result[(getCycle()+1)%2] = (id4304x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4305out_output;

  { // Node ID: 4305 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4305in_input = id4304out_result[getCycle()%2];

    id4305out_output = id4305in_input;
  }
  { // Node ID: 4307 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4307in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4307in_option0 = in_vars.id4306out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4307in_option1 = id4305out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4307x_1;

    switch((id4307in_sel.getValueAsLong())) {
      case 0l:
        id4307x_1 = id4307in_option0;
        break;
      case 1l:
        id4307x_1 = id4307in_option1;
        break;
      default:
        id4307x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4307out_result[(getCycle()+1)%2] = (id4307x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4308out_output;

  { // Node ID: 4308 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4308in_input = id4307out_result[getCycle()%2];

    id4308out_output = id4308in_input;
  }
  { // Node ID: 4310 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4310in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4310in_option0 = in_vars.id4309out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4310in_option1 = id4308out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4310x_1;

    switch((id4310in_sel.getValueAsLong())) {
      case 0l:
        id4310x_1 = id4310in_option0;
        break;
      case 1l:
        id4310x_1 = id4310in_option1;
        break;
      default:
        id4310x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4310out_result[(getCycle()+1)%2] = (id4310x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4311out_output;

  { // Node ID: 4311 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4311in_input = id4310out_result[getCycle()%2];

    id4311out_output = id4311in_input;
  }
  { // Node ID: 4313 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4313in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4313in_option0 = in_vars.id4312out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4313in_option1 = id4311out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4313x_1;

    switch((id4313in_sel.getValueAsLong())) {
      case 0l:
        id4313x_1 = id4313in_option0;
        break;
      case 1l:
        id4313x_1 = id4313in_option1;
        break;
      default:
        id4313x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4313out_result[(getCycle()+1)%2] = (id4313x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4314out_output;

  { // Node ID: 4314 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4314in_input = id4313out_result[getCycle()%2];

    id4314out_output = id4314in_input;
  }
  { // Node ID: 4316 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4316in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4316in_option0 = in_vars.id4315out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4316in_option1 = id4314out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4316x_1;

    switch((id4316in_sel.getValueAsLong())) {
      case 0l:
        id4316x_1 = id4316in_option0;
        break;
      case 1l:
        id4316x_1 = id4316in_option1;
        break;
      default:
        id4316x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4316out_result[(getCycle()+1)%2] = (id4316x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4317out_output;

  { // Node ID: 4317 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4317in_input = id4316out_result[getCycle()%2];

    id4317out_output = id4317in_input;
  }
  { // Node ID: 4319 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4319in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4319in_option0 = in_vars.id4318out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4319in_option1 = id4317out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4319x_1;

    switch((id4319in_sel.getValueAsLong())) {
      case 0l:
        id4319x_1 = id4319in_option0;
        break;
      case 1l:
        id4319x_1 = id4319in_option1;
        break;
      default:
        id4319x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4319out_result[(getCycle()+1)%2] = (id4319x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4320out_output;

  { // Node ID: 4320 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4320in_input = id4319out_result[getCycle()%2];

    id4320out_output = id4320in_input;
  }
  { // Node ID: 4322 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4322in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4322in_option0 = in_vars.id4321out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4322in_option1 = id4320out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4322x_1;

    switch((id4322in_sel.getValueAsLong())) {
      case 0l:
        id4322x_1 = id4322in_option0;
        break;
      case 1l:
        id4322x_1 = id4322in_option1;
        break;
      default:
        id4322x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4322out_result[(getCycle()+1)%2] = (id4322x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4323out_output;

  { // Node ID: 4323 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4323in_input = id4322out_result[getCycle()%2];

    id4323out_output = id4323in_input;
  }
  { // Node ID: 4325 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4325in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4325in_option0 = in_vars.id4324out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4325in_option1 = id4323out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4325x_1;

    switch((id4325in_sel.getValueAsLong())) {
      case 0l:
        id4325x_1 = id4325in_option0;
        break;
      case 1l:
        id4325x_1 = id4325in_option1;
        break;
      default:
        id4325x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4325out_result[(getCycle()+1)%2] = (id4325x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4326out_output;

  { // Node ID: 4326 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4326in_input = id4325out_result[getCycle()%2];

    id4326out_output = id4326in_input;
  }
  { // Node ID: 4328 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4328in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4328in_option0 = in_vars.id4327out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4328in_option1 = id4326out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4328x_1;

    switch((id4328in_sel.getValueAsLong())) {
      case 0l:
        id4328x_1 = id4328in_option0;
        break;
      case 1l:
        id4328x_1 = id4328in_option1;
        break;
      default:
        id4328x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4328out_result[(getCycle()+1)%2] = (id4328x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4329out_output;

  { // Node ID: 4329 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4329in_input = id4328out_result[getCycle()%2];

    id4329out_output = id4329in_input;
  }
  { // Node ID: 4331 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4331in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4331in_option0 = in_vars.id4330out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4331in_option1 = id4329out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4331x_1;

    switch((id4331in_sel.getValueAsLong())) {
      case 0l:
        id4331x_1 = id4331in_option0;
        break;
      case 1l:
        id4331x_1 = id4331in_option1;
        break;
      default:
        id4331x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4331out_result[(getCycle()+1)%2] = (id4331x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4332out_output;

  { // Node ID: 4332 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4332in_input = id4331out_result[getCycle()%2];

    id4332out_output = id4332in_input;
  }
  { // Node ID: 4334 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4334in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4334in_option0 = in_vars.id4333out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4334in_option1 = id4332out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4334x_1;

    switch((id4334in_sel.getValueAsLong())) {
      case 0l:
        id4334x_1 = id4334in_option0;
        break;
      case 1l:
        id4334x_1 = id4334in_option1;
        break;
      default:
        id4334x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4334out_result[(getCycle()+1)%2] = (id4334x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4335out_output;

  { // Node ID: 4335 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4335in_input = id4334out_result[getCycle()%2];

    id4335out_output = id4335in_input;
  }
  { // Node ID: 4337 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4337in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4337in_option0 = in_vars.id4336out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4337in_option1 = id4335out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4337x_1;

    switch((id4337in_sel.getValueAsLong())) {
      case 0l:
        id4337x_1 = id4337in_option0;
        break;
      case 1l:
        id4337x_1 = id4337in_option1;
        break;
      default:
        id4337x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4337out_result[(getCycle()+1)%2] = (id4337x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4338out_output;

  { // Node ID: 4338 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4338in_input = id4337out_result[getCycle()%2];

    id4338out_output = id4338in_input;
  }
  { // Node ID: 4340 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4340in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4340in_option0 = in_vars.id4339out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4340in_option1 = id4338out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4340x_1;

    switch((id4340in_sel.getValueAsLong())) {
      case 0l:
        id4340x_1 = id4340in_option0;
        break;
      case 1l:
        id4340x_1 = id4340in_option1;
        break;
      default:
        id4340x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4340out_result[(getCycle()+1)%2] = (id4340x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4341out_output;

  { // Node ID: 4341 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4341in_input = id4340out_result[getCycle()%2];

    id4341out_output = id4341in_input;
  }
  { // Node ID: 4343 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4343in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4343in_option0 = in_vars.id4342out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4343in_option1 = id4341out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4343x_1;

    switch((id4343in_sel.getValueAsLong())) {
      case 0l:
        id4343x_1 = id4343in_option0;
        break;
      case 1l:
        id4343x_1 = id4343in_option1;
        break;
      default:
        id4343x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4343out_result[(getCycle()+1)%2] = (id4343x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4344out_output;

  { // Node ID: 4344 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4344in_input = id4343out_result[getCycle()%2];

    id4344out_output = id4344in_input;
  }
  { // Node ID: 4346 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4346in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4346in_option0 = in_vars.id4345out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4346in_option1 = id4344out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4346x_1;

    switch((id4346in_sel.getValueAsLong())) {
      case 0l:
        id4346x_1 = id4346in_option0;
        break;
      case 1l:
        id4346x_1 = id4346in_option1;
        break;
      default:
        id4346x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4346out_result[(getCycle()+1)%2] = (id4346x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4347out_output;

  { // Node ID: 4347 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4347in_input = id4346out_result[getCycle()%2];

    id4347out_output = id4347in_input;
  }
  { // Node ID: 4349 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4349in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4349in_option0 = in_vars.id4348out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4349in_option1 = id4347out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4349x_1;

    switch((id4349in_sel.getValueAsLong())) {
      case 0l:
        id4349x_1 = id4349in_option0;
        break;
      case 1l:
        id4349x_1 = id4349in_option1;
        break;
      default:
        id4349x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4349out_result[(getCycle()+1)%2] = (id4349x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4350out_output;

  { // Node ID: 4350 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4350in_input = id4349out_result[getCycle()%2];

    id4350out_output = id4350in_input;
  }
  { // Node ID: 4352 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4352in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4352in_option0 = in_vars.id4351out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4352in_option1 = id4350out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4352x_1;

    switch((id4352in_sel.getValueAsLong())) {
      case 0l:
        id4352x_1 = id4352in_option0;
        break;
      case 1l:
        id4352x_1 = id4352in_option1;
        break;
      default:
        id4352x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4352out_result[(getCycle()+1)%2] = (id4352x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4353out_output;

  { // Node ID: 4353 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4353in_input = id4352out_result[getCycle()%2];

    id4353out_output = id4353in_input;
  }
  { // Node ID: 4355 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4355in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4355in_option0 = in_vars.id4354out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4355in_option1 = id4353out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4355x_1;

    switch((id4355in_sel.getValueAsLong())) {
      case 0l:
        id4355x_1 = id4355in_option0;
        break;
      case 1l:
        id4355x_1 = id4355in_option1;
        break;
      default:
        id4355x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4355out_result[(getCycle()+1)%2] = (id4355x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4356out_output;

  { // Node ID: 4356 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4356in_input = id4355out_result[getCycle()%2];

    id4356out_output = id4356in_input;
  }
  { // Node ID: 4358 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4358in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4358in_option0 = in_vars.id4357out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4358in_option1 = id4356out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4358x_1;

    switch((id4358in_sel.getValueAsLong())) {
      case 0l:
        id4358x_1 = id4358in_option0;
        break;
      case 1l:
        id4358x_1 = id4358in_option1;
        break;
      default:
        id4358x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4358out_result[(getCycle()+1)%2] = (id4358x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4359out_output;

  { // Node ID: 4359 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4359in_input = id4358out_result[getCycle()%2];

    id4359out_output = id4359in_input;
  }
  { // Node ID: 4361 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4361in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4361in_option0 = in_vars.id4360out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4361in_option1 = id4359out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4361x_1;

    switch((id4361in_sel.getValueAsLong())) {
      case 0l:
        id4361x_1 = id4361in_option0;
        break;
      case 1l:
        id4361x_1 = id4361in_option1;
        break;
      default:
        id4361x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4361out_result[(getCycle()+1)%2] = (id4361x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4362out_output;

  { // Node ID: 4362 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4362in_input = id4361out_result[getCycle()%2];

    id4362out_output = id4362in_input;
  }
  { // Node ID: 4364 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4364in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4364in_option0 = in_vars.id4363out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4364in_option1 = id4362out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4364x_1;

    switch((id4364in_sel.getValueAsLong())) {
      case 0l:
        id4364x_1 = id4364in_option0;
        break;
      case 1l:
        id4364x_1 = id4364in_option1;
        break;
      default:
        id4364x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4364out_result[(getCycle()+1)%2] = (id4364x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4365out_output;

  { // Node ID: 4365 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4365in_input = id4364out_result[getCycle()%2];

    id4365out_output = id4365in_input;
  }
  { // Node ID: 4367 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4367in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4367in_option0 = in_vars.id4366out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4367in_option1 = id4365out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4367x_1;

    switch((id4367in_sel.getValueAsLong())) {
      case 0l:
        id4367x_1 = id4367in_option0;
        break;
      case 1l:
        id4367x_1 = id4367in_option1;
        break;
      default:
        id4367x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4367out_result[(getCycle()+1)%2] = (id4367x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4368out_output;

  { // Node ID: 4368 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4368in_input = id4367out_result[getCycle()%2];

    id4368out_output = id4368in_input;
  }
  { // Node ID: 4370 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4370in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4370in_option0 = in_vars.id4369out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4370in_option1 = id4368out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4370x_1;

    switch((id4370in_sel.getValueAsLong())) {
      case 0l:
        id4370x_1 = id4370in_option0;
        break;
      case 1l:
        id4370x_1 = id4370in_option1;
        break;
      default:
        id4370x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4370out_result[(getCycle()+1)%2] = (id4370x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4371out_output;

  { // Node ID: 4371 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4371in_input = id4370out_result[getCycle()%2];

    id4371out_output = id4371in_input;
  }
  { // Node ID: 4373 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4373in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4373in_option0 = in_vars.id4372out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4373in_option1 = id4371out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4373x_1;

    switch((id4373in_sel.getValueAsLong())) {
      case 0l:
        id4373x_1 = id4373in_option0;
        break;
      case 1l:
        id4373x_1 = id4373in_option1;
        break;
      default:
        id4373x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4373out_result[(getCycle()+1)%2] = (id4373x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4374out_output;

  { // Node ID: 4374 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4374in_input = id4373out_result[getCycle()%2];

    id4374out_output = id4374in_input;
  }
  { // Node ID: 4376 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4376in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4376in_option0 = in_vars.id4375out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4376in_option1 = id4374out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4376x_1;

    switch((id4376in_sel.getValueAsLong())) {
      case 0l:
        id4376x_1 = id4376in_option0;
        break;
      case 1l:
        id4376x_1 = id4376in_option1;
        break;
      default:
        id4376x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4376out_result[(getCycle()+1)%2] = (id4376x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4377out_output;

  { // Node ID: 4377 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4377in_input = id4376out_result[getCycle()%2];

    id4377out_output = id4377in_input;
  }
  { // Node ID: 4379 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4379in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4379in_option0 = in_vars.id4378out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4379in_option1 = id4377out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4379x_1;

    switch((id4379in_sel.getValueAsLong())) {
      case 0l:
        id4379x_1 = id4379in_option0;
        break;
      case 1l:
        id4379x_1 = id4379in_option1;
        break;
      default:
        id4379x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4379out_result[(getCycle()+1)%2] = (id4379x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4380out_output;

  { // Node ID: 4380 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4380in_input = id4379out_result[getCycle()%2];

    id4380out_output = id4380in_input;
  }
  { // Node ID: 4382 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4382in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4382in_option0 = in_vars.id4381out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4382in_option1 = id4380out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4382x_1;

    switch((id4382in_sel.getValueAsLong())) {
      case 0l:
        id4382x_1 = id4382in_option0;
        break;
      case 1l:
        id4382x_1 = id4382in_option1;
        break;
      default:
        id4382x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4382out_result[(getCycle()+1)%2] = (id4382x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4383out_output;

  { // Node ID: 4383 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4383in_input = id4382out_result[getCycle()%2];

    id4383out_output = id4383in_input;
  }
  { // Node ID: 4385 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4385in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4385in_option0 = in_vars.id4384out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4385in_option1 = id4383out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4385x_1;

    switch((id4385in_sel.getValueAsLong())) {
      case 0l:
        id4385x_1 = id4385in_option0;
        break;
      case 1l:
        id4385x_1 = id4385in_option1;
        break;
      default:
        id4385x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4385out_result[(getCycle()+1)%2] = (id4385x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4386out_output;

  { // Node ID: 4386 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4386in_input = id4385out_result[getCycle()%2];

    id4386out_output = id4386in_input;
  }
  { // Node ID: 4388 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4388in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4388in_option0 = in_vars.id4387out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4388in_option1 = id4386out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4388x_1;

    switch((id4388in_sel.getValueAsLong())) {
      case 0l:
        id4388x_1 = id4388in_option0;
        break;
      case 1l:
        id4388x_1 = id4388in_option1;
        break;
      default:
        id4388x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4388out_result[(getCycle()+1)%2] = (id4388x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4389out_output;

  { // Node ID: 4389 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4389in_input = id4388out_result[getCycle()%2];

    id4389out_output = id4389in_input;
  }
  { // Node ID: 4391 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4391in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4391in_option0 = in_vars.id4390out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4391in_option1 = id4389out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4391x_1;

    switch((id4391in_sel.getValueAsLong())) {
      case 0l:
        id4391x_1 = id4391in_option0;
        break;
      case 1l:
        id4391x_1 = id4391in_option1;
        break;
      default:
        id4391x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4391out_result[(getCycle()+1)%2] = (id4391x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4392out_output;

  { // Node ID: 4392 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4392in_input = id4391out_result[getCycle()%2];

    id4392out_output = id4392in_input;
  }
  { // Node ID: 4394 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4394in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4394in_option0 = in_vars.id4393out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4394in_option1 = id4392out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4394x_1;

    switch((id4394in_sel.getValueAsLong())) {
      case 0l:
        id4394x_1 = id4394in_option0;
        break;
      case 1l:
        id4394x_1 = id4394in_option1;
        break;
      default:
        id4394x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4394out_result[(getCycle()+1)%2] = (id4394x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4395out_output;

  { // Node ID: 4395 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4395in_input = id4394out_result[getCycle()%2];

    id4395out_output = id4395in_input;
  }
  { // Node ID: 4397 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4397in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4397in_option0 = in_vars.id4396out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4397in_option1 = id4395out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4397x_1;

    switch((id4397in_sel.getValueAsLong())) {
      case 0l:
        id4397x_1 = id4397in_option0;
        break;
      case 1l:
        id4397x_1 = id4397in_option1;
        break;
      default:
        id4397x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4397out_result[(getCycle()+1)%2] = (id4397x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4398out_output;

  { // Node ID: 4398 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4398in_input = id4397out_result[getCycle()%2];

    id4398out_output = id4398in_input;
  }
  { // Node ID: 4400 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4400in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4400in_option0 = in_vars.id4399out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4400in_option1 = id4398out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4400x_1;

    switch((id4400in_sel.getValueAsLong())) {
      case 0l:
        id4400x_1 = id4400in_option0;
        break;
      case 1l:
        id4400x_1 = id4400in_option1;
        break;
      default:
        id4400x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4400out_result[(getCycle()+1)%2] = (id4400x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4401out_output;

  { // Node ID: 4401 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4401in_input = id4400out_result[getCycle()%2];

    id4401out_output = id4401in_input;
  }
  { // Node ID: 4403 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4403in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4403in_option0 = in_vars.id4402out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4403in_option1 = id4401out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4403x_1;

    switch((id4403in_sel.getValueAsLong())) {
      case 0l:
        id4403x_1 = id4403in_option0;
        break;
      case 1l:
        id4403x_1 = id4403in_option1;
        break;
      default:
        id4403x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4403out_result[(getCycle()+1)%2] = (id4403x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4404out_output;

  { // Node ID: 4404 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4404in_input = id4403out_result[getCycle()%2];

    id4404out_output = id4404in_input;
  }
  { // Node ID: 4406 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4406in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4406in_option0 = in_vars.id4405out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4406in_option1 = id4404out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4406x_1;

    switch((id4406in_sel.getValueAsLong())) {
      case 0l:
        id4406x_1 = id4406in_option0;
        break;
      case 1l:
        id4406x_1 = id4406in_option1;
        break;
      default:
        id4406x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4406out_result[(getCycle()+1)%2] = (id4406x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4407out_output;

  { // Node ID: 4407 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4407in_input = id4406out_result[getCycle()%2];

    id4407out_output = id4407in_input;
  }
  { // Node ID: 4409 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4409in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4409in_option0 = in_vars.id4408out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4409in_option1 = id4407out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4409x_1;

    switch((id4409in_sel.getValueAsLong())) {
      case 0l:
        id4409x_1 = id4409in_option0;
        break;
      case 1l:
        id4409x_1 = id4409in_option1;
        break;
      default:
        id4409x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4409out_result[(getCycle()+1)%2] = (id4409x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4410out_output;

  { // Node ID: 4410 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4410in_input = id4409out_result[getCycle()%2];

    id4410out_output = id4410in_input;
  }
  { // Node ID: 4412 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4412in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4412in_option0 = in_vars.id4411out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4412in_option1 = id4410out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4412x_1;

    switch((id4412in_sel.getValueAsLong())) {
      case 0l:
        id4412x_1 = id4412in_option0;
        break;
      case 1l:
        id4412x_1 = id4412in_option1;
        break;
      default:
        id4412x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4412out_result[(getCycle()+1)%2] = (id4412x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4413out_output;

  { // Node ID: 4413 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4413in_input = id4412out_result[getCycle()%2];

    id4413out_output = id4413in_input;
  }
  { // Node ID: 4415 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4415in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4415in_option0 = in_vars.id4414out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4415in_option1 = id4413out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4415x_1;

    switch((id4415in_sel.getValueAsLong())) {
      case 0l:
        id4415x_1 = id4415in_option0;
        break;
      case 1l:
        id4415x_1 = id4415in_option1;
        break;
      default:
        id4415x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4415out_result[(getCycle()+1)%2] = (id4415x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4416out_output;

  { // Node ID: 4416 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4416in_input = id4415out_result[getCycle()%2];

    id4416out_output = id4416in_input;
  }
  { // Node ID: 4418 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4418in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4418in_option0 = in_vars.id4417out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4418in_option1 = id4416out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4418x_1;

    switch((id4418in_sel.getValueAsLong())) {
      case 0l:
        id4418x_1 = id4418in_option0;
        break;
      case 1l:
        id4418x_1 = id4418in_option1;
        break;
      default:
        id4418x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4418out_result[(getCycle()+1)%2] = (id4418x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4419out_output;

  { // Node ID: 4419 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4419in_input = id4418out_result[getCycle()%2];

    id4419out_output = id4419in_input;
  }
  { // Node ID: 4421 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4421in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4421in_option0 = in_vars.id4420out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4421in_option1 = id4419out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4421x_1;

    switch((id4421in_sel.getValueAsLong())) {
      case 0l:
        id4421x_1 = id4421in_option0;
        break;
      case 1l:
        id4421x_1 = id4421in_option1;
        break;
      default:
        id4421x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4421out_result[(getCycle()+1)%2] = (id4421x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4422out_output;

  { // Node ID: 4422 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4422in_input = id4421out_result[getCycle()%2];

    id4422out_output = id4422in_input;
  }
  { // Node ID: 4424 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4424in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4424in_option0 = in_vars.id4423out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4424in_option1 = id4422out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4424x_1;

    switch((id4424in_sel.getValueAsLong())) {
      case 0l:
        id4424x_1 = id4424in_option0;
        break;
      case 1l:
        id4424x_1 = id4424in_option1;
        break;
      default:
        id4424x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4424out_result[(getCycle()+1)%2] = (id4424x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4425out_output;

  { // Node ID: 4425 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4425in_input = id4424out_result[getCycle()%2];

    id4425out_output = id4425in_input;
  }
  { // Node ID: 4427 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4427in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4427in_option0 = in_vars.id4426out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4427in_option1 = id4425out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4427x_1;

    switch((id4427in_sel.getValueAsLong())) {
      case 0l:
        id4427x_1 = id4427in_option0;
        break;
      case 1l:
        id4427x_1 = id4427in_option1;
        break;
      default:
        id4427x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4427out_result[(getCycle()+1)%2] = (id4427x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4428out_output;

  { // Node ID: 4428 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4428in_input = id4427out_result[getCycle()%2];

    id4428out_output = id4428in_input;
  }
  { // Node ID: 4430 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4430in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4430in_option0 = in_vars.id4429out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4430in_option1 = id4428out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4430x_1;

    switch((id4430in_sel.getValueAsLong())) {
      case 0l:
        id4430x_1 = id4430in_option0;
        break;
      case 1l:
        id4430x_1 = id4430in_option1;
        break;
      default:
        id4430x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4430out_result[(getCycle()+1)%2] = (id4430x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4431out_output;

  { // Node ID: 4431 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4431in_input = id4430out_result[getCycle()%2];

    id4431out_output = id4431in_input;
  }
  { // Node ID: 4433 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4433in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4433in_option0 = in_vars.id4432out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4433in_option1 = id4431out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4433x_1;

    switch((id4433in_sel.getValueAsLong())) {
      case 0l:
        id4433x_1 = id4433in_option0;
        break;
      case 1l:
        id4433x_1 = id4433in_option1;
        break;
      default:
        id4433x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4433out_result[(getCycle()+1)%2] = (id4433x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4434out_output;

  { // Node ID: 4434 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4434in_input = id4433out_result[getCycle()%2];

    id4434out_output = id4434in_input;
  }
  { // Node ID: 4436 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4436in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4436in_option0 = in_vars.id4435out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4436in_option1 = id4434out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4436x_1;

    switch((id4436in_sel.getValueAsLong())) {
      case 0l:
        id4436x_1 = id4436in_option0;
        break;
      case 1l:
        id4436x_1 = id4436in_option1;
        break;
      default:
        id4436x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4436out_result[(getCycle()+1)%2] = (id4436x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4437out_output;

  { // Node ID: 4437 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4437in_input = id4436out_result[getCycle()%2];

    id4437out_output = id4437in_input;
  }
  { // Node ID: 4439 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4439in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4439in_option0 = in_vars.id4438out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4439in_option1 = id4437out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4439x_1;

    switch((id4439in_sel.getValueAsLong())) {
      case 0l:
        id4439x_1 = id4439in_option0;
        break;
      case 1l:
        id4439x_1 = id4439in_option1;
        break;
      default:
        id4439x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4439out_result[(getCycle()+1)%2] = (id4439x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4440out_output;

  { // Node ID: 4440 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4440in_input = id4439out_result[getCycle()%2];

    id4440out_output = id4440in_input;
  }
  { // Node ID: 4442 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4442in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4442in_option0 = in_vars.id4441out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4442in_option1 = id4440out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4442x_1;

    switch((id4442in_sel.getValueAsLong())) {
      case 0l:
        id4442x_1 = id4442in_option0;
        break;
      case 1l:
        id4442x_1 = id4442in_option1;
        break;
      default:
        id4442x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4442out_result[(getCycle()+1)%2] = (id4442x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4443out_output;

  { // Node ID: 4443 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4443in_input = id4442out_result[getCycle()%2];

    id4443out_output = id4443in_input;
  }
  { // Node ID: 4445 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4445in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4445in_option0 = in_vars.id4444out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4445in_option1 = id4443out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4445x_1;

    switch((id4445in_sel.getValueAsLong())) {
      case 0l:
        id4445x_1 = id4445in_option0;
        break;
      case 1l:
        id4445x_1 = id4445in_option1;
        break;
      default:
        id4445x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4445out_result[(getCycle()+1)%2] = (id4445x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4446out_output;

  { // Node ID: 4446 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4446in_input = id4445out_result[getCycle()%2];

    id4446out_output = id4446in_input;
  }
  { // Node ID: 4448 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4448in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4448in_option0 = in_vars.id4447out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4448in_option1 = id4446out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4448x_1;

    switch((id4448in_sel.getValueAsLong())) {
      case 0l:
        id4448x_1 = id4448in_option0;
        break;
      case 1l:
        id4448x_1 = id4448in_option1;
        break;
      default:
        id4448x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4448out_result[(getCycle()+1)%2] = (id4448x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4449out_output;

  { // Node ID: 4449 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4449in_input = id4448out_result[getCycle()%2];

    id4449out_output = id4449in_input;
  }
  { // Node ID: 4451 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4451in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4451in_option0 = in_vars.id4450out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4451in_option1 = id4449out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4451x_1;

    switch((id4451in_sel.getValueAsLong())) {
      case 0l:
        id4451x_1 = id4451in_option0;
        break;
      case 1l:
        id4451x_1 = id4451in_option1;
        break;
      default:
        id4451x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4451out_result[(getCycle()+1)%2] = (id4451x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4452out_output;

  { // Node ID: 4452 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4452in_input = id4451out_result[getCycle()%2];

    id4452out_output = id4452in_input;
  }
  { // Node ID: 4454 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4454in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4454in_option0 = in_vars.id4453out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4454in_option1 = id4452out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4454x_1;

    switch((id4454in_sel.getValueAsLong())) {
      case 0l:
        id4454x_1 = id4454in_option0;
        break;
      case 1l:
        id4454x_1 = id4454in_option1;
        break;
      default:
        id4454x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4454out_result[(getCycle()+1)%2] = (id4454x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4455out_output;

  { // Node ID: 4455 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4455in_input = id4454out_result[getCycle()%2];

    id4455out_output = id4455in_input;
  }
  { // Node ID: 4457 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4457in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4457in_option0 = in_vars.id4456out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4457in_option1 = id4455out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4457x_1;

    switch((id4457in_sel.getValueAsLong())) {
      case 0l:
        id4457x_1 = id4457in_option0;
        break;
      case 1l:
        id4457x_1 = id4457in_option1;
        break;
      default:
        id4457x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4457out_result[(getCycle()+1)%2] = (id4457x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4458out_output;

  { // Node ID: 4458 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4458in_input = id4457out_result[getCycle()%2];

    id4458out_output = id4458in_input;
  }
  { // Node ID: 4460 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4460in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4460in_option0 = in_vars.id4459out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4460in_option1 = id4458out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4460x_1;

    switch((id4460in_sel.getValueAsLong())) {
      case 0l:
        id4460x_1 = id4460in_option0;
        break;
      case 1l:
        id4460x_1 = id4460in_option1;
        break;
      default:
        id4460x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4460out_result[(getCycle()+1)%2] = (id4460x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4461out_output;

  { // Node ID: 4461 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4461in_input = id4460out_result[getCycle()%2];

    id4461out_output = id4461in_input;
  }
  { // Node ID: 4463 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4463in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4463in_option0 = in_vars.id4462out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4463in_option1 = id4461out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4463x_1;

    switch((id4463in_sel.getValueAsLong())) {
      case 0l:
        id4463x_1 = id4463in_option0;
        break;
      case 1l:
        id4463x_1 = id4463in_option1;
        break;
      default:
        id4463x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4463out_result[(getCycle()+1)%2] = (id4463x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4464out_output;

  { // Node ID: 4464 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4464in_input = id4463out_result[getCycle()%2];

    id4464out_output = id4464in_input;
  }
  { // Node ID: 4466 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4466in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4466in_option0 = in_vars.id4465out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4466in_option1 = id4464out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4466x_1;

    switch((id4466in_sel.getValueAsLong())) {
      case 0l:
        id4466x_1 = id4466in_option0;
        break;
      case 1l:
        id4466x_1 = id4466in_option1;
        break;
      default:
        id4466x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4466out_result[(getCycle()+1)%2] = (id4466x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4467out_output;

  { // Node ID: 4467 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4467in_input = id4466out_result[getCycle()%2];

    id4467out_output = id4467in_input;
  }
  { // Node ID: 4469 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4469in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4469in_option0 = in_vars.id4468out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4469in_option1 = id4467out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4469x_1;

    switch((id4469in_sel.getValueAsLong())) {
      case 0l:
        id4469x_1 = id4469in_option0;
        break;
      case 1l:
        id4469x_1 = id4469in_option1;
        break;
      default:
        id4469x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4469out_result[(getCycle()+1)%2] = (id4469x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4470out_output;

  { // Node ID: 4470 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4470in_input = id4469out_result[getCycle()%2];

    id4470out_output = id4470in_input;
  }
  { // Node ID: 4472 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4472in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4472in_option0 = in_vars.id4471out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4472in_option1 = id4470out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4472x_1;

    switch((id4472in_sel.getValueAsLong())) {
      case 0l:
        id4472x_1 = id4472in_option0;
        break;
      case 1l:
        id4472x_1 = id4472in_option1;
        break;
      default:
        id4472x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4472out_result[(getCycle()+1)%2] = (id4472x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4473out_output;

  { // Node ID: 4473 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4473in_input = id4472out_result[getCycle()%2];

    id4473out_output = id4473in_input;
  }
  { // Node ID: 4475 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4475in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4475in_option0 = in_vars.id4474out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4475in_option1 = id4473out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4475x_1;

    switch((id4475in_sel.getValueAsLong())) {
      case 0l:
        id4475x_1 = id4475in_option0;
        break;
      case 1l:
        id4475x_1 = id4475in_option1;
        break;
      default:
        id4475x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4475out_result[(getCycle()+1)%2] = (id4475x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4476out_output;

  { // Node ID: 4476 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4476in_input = id4475out_result[getCycle()%2];

    id4476out_output = id4476in_input;
  }
  { // Node ID: 4478 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4478in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4478in_option0 = in_vars.id4477out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4478in_option1 = id4476out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4478x_1;

    switch((id4478in_sel.getValueAsLong())) {
      case 0l:
        id4478x_1 = id4478in_option0;
        break;
      case 1l:
        id4478x_1 = id4478in_option1;
        break;
      default:
        id4478x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4478out_result[(getCycle()+1)%2] = (id4478x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4479out_output;

  { // Node ID: 4479 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4479in_input = id4478out_result[getCycle()%2];

    id4479out_output = id4479in_input;
  }
  { // Node ID: 4481 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4481in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4481in_option0 = in_vars.id4480out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4481in_option1 = id4479out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4481x_1;

    switch((id4481in_sel.getValueAsLong())) {
      case 0l:
        id4481x_1 = id4481in_option0;
        break;
      case 1l:
        id4481x_1 = id4481in_option1;
        break;
      default:
        id4481x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4481out_result[(getCycle()+1)%2] = (id4481x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4482out_output;

  { // Node ID: 4482 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4482in_input = id4481out_result[getCycle()%2];

    id4482out_output = id4482in_input;
  }
  { // Node ID: 4484 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4484in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4484in_option0 = in_vars.id4483out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4484in_option1 = id4482out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4484x_1;

    switch((id4484in_sel.getValueAsLong())) {
      case 0l:
        id4484x_1 = id4484in_option0;
        break;
      case 1l:
        id4484x_1 = id4484in_option1;
        break;
      default:
        id4484x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4484out_result[(getCycle()+1)%2] = (id4484x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4485out_output;

  { // Node ID: 4485 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4485in_input = id4484out_result[getCycle()%2];

    id4485out_output = id4485in_input;
  }
  { // Node ID: 4487 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4487in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4487in_option0 = in_vars.id4486out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4487in_option1 = id4485out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4487x_1;

    switch((id4487in_sel.getValueAsLong())) {
      case 0l:
        id4487x_1 = id4487in_option0;
        break;
      case 1l:
        id4487x_1 = id4487in_option1;
        break;
      default:
        id4487x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4487out_result[(getCycle()+1)%2] = (id4487x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4488out_output;

  { // Node ID: 4488 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4488in_input = id4487out_result[getCycle()%2];

    id4488out_output = id4488in_input;
  }
  { // Node ID: 4490 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4490in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4490in_option0 = in_vars.id4489out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4490in_option1 = id4488out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4490x_1;

    switch((id4490in_sel.getValueAsLong())) {
      case 0l:
        id4490x_1 = id4490in_option0;
        break;
      case 1l:
        id4490x_1 = id4490in_option1;
        break;
      default:
        id4490x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4490out_result[(getCycle()+1)%2] = (id4490x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4491out_output;

  { // Node ID: 4491 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4491in_input = id4490out_result[getCycle()%2];

    id4491out_output = id4491in_input;
  }
  { // Node ID: 4493 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4493in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4493in_option0 = in_vars.id4492out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4493in_option1 = id4491out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4493x_1;

    switch((id4493in_sel.getValueAsLong())) {
      case 0l:
        id4493x_1 = id4493in_option0;
        break;
      case 1l:
        id4493x_1 = id4493in_option1;
        break;
      default:
        id4493x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4493out_result[(getCycle()+1)%2] = (id4493x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4494out_output;

  { // Node ID: 4494 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4494in_input = id4493out_result[getCycle()%2];

    id4494out_output = id4494in_input;
  }
  { // Node ID: 4496 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4496in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4496in_option0 = in_vars.id4495out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4496in_option1 = id4494out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4496x_1;

    switch((id4496in_sel.getValueAsLong())) {
      case 0l:
        id4496x_1 = id4496in_option0;
        break;
      case 1l:
        id4496x_1 = id4496in_option1;
        break;
      default:
        id4496x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4496out_result[(getCycle()+1)%2] = (id4496x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4497out_output;

  { // Node ID: 4497 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4497in_input = id4496out_result[getCycle()%2];

    id4497out_output = id4497in_input;
  }
  { // Node ID: 4499 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4499in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4499in_option0 = in_vars.id4498out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4499in_option1 = id4497out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4499x_1;

    switch((id4499in_sel.getValueAsLong())) {
      case 0l:
        id4499x_1 = id4499in_option0;
        break;
      case 1l:
        id4499x_1 = id4499in_option1;
        break;
      default:
        id4499x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4499out_result[(getCycle()+1)%2] = (id4499x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4500out_output;

  { // Node ID: 4500 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4500in_input = id4499out_result[getCycle()%2];

    id4500out_output = id4500in_input;
  }
  { // Node ID: 4502 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4502in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4502in_option0 = in_vars.id4501out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4502in_option1 = id4500out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4502x_1;

    switch((id4502in_sel.getValueAsLong())) {
      case 0l:
        id4502x_1 = id4502in_option0;
        break;
      case 1l:
        id4502x_1 = id4502in_option1;
        break;
      default:
        id4502x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4502out_result[(getCycle()+1)%2] = (id4502x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4503out_output;

  { // Node ID: 4503 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4503in_input = id4502out_result[getCycle()%2];

    id4503out_output = id4503in_input;
  }
  { // Node ID: 4505 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4505in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4505in_option0 = in_vars.id4504out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4505in_option1 = id4503out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4505x_1;

    switch((id4505in_sel.getValueAsLong())) {
      case 0l:
        id4505x_1 = id4505in_option0;
        break;
      case 1l:
        id4505x_1 = id4505in_option1;
        break;
      default:
        id4505x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4505out_result[(getCycle()+1)%2] = (id4505x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4506out_output;

  { // Node ID: 4506 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4506in_input = id4505out_result[getCycle()%2];

    id4506out_output = id4506in_input;
  }
  { // Node ID: 4508 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4508in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4508in_option0 = in_vars.id4507out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4508in_option1 = id4506out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4508x_1;

    switch((id4508in_sel.getValueAsLong())) {
      case 0l:
        id4508x_1 = id4508in_option0;
        break;
      case 1l:
        id4508x_1 = id4508in_option1;
        break;
      default:
        id4508x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4508out_result[(getCycle()+1)%2] = (id4508x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4509out_output;

  { // Node ID: 4509 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4509in_input = id4508out_result[getCycle()%2];

    id4509out_output = id4509in_input;
  }
  { // Node ID: 4511 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4511in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4511in_option0 = in_vars.id4510out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4511in_option1 = id4509out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4511x_1;

    switch((id4511in_sel.getValueAsLong())) {
      case 0l:
        id4511x_1 = id4511in_option0;
        break;
      case 1l:
        id4511x_1 = id4511in_option1;
        break;
      default:
        id4511x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4511out_result[(getCycle()+1)%2] = (id4511x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4512out_output;

  { // Node ID: 4512 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4512in_input = id4511out_result[getCycle()%2];

    id4512out_output = id4512in_input;
  }
  { // Node ID: 4514 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4514in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4514in_option0 = in_vars.id4513out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4514in_option1 = id4512out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4514x_1;

    switch((id4514in_sel.getValueAsLong())) {
      case 0l:
        id4514x_1 = id4514in_option0;
        break;
      case 1l:
        id4514x_1 = id4514in_option1;
        break;
      default:
        id4514x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4514out_result[(getCycle()+1)%2] = (id4514x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4515out_output;

  { // Node ID: 4515 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4515in_input = id4514out_result[getCycle()%2];

    id4515out_output = id4515in_input;
  }
  { // Node ID: 4517 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4517in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4517in_option0 = in_vars.id4516out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4517in_option1 = id4515out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4517x_1;

    switch((id4517in_sel.getValueAsLong())) {
      case 0l:
        id4517x_1 = id4517in_option0;
        break;
      case 1l:
        id4517x_1 = id4517in_option1;
        break;
      default:
        id4517x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4517out_result[(getCycle()+1)%2] = (id4517x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4518out_output;

  { // Node ID: 4518 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4518in_input = id4517out_result[getCycle()%2];

    id4518out_output = id4518in_input;
  }
  { // Node ID: 4520 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4520in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4520in_option0 = in_vars.id4519out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4520in_option1 = id4518out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4520x_1;

    switch((id4520in_sel.getValueAsLong())) {
      case 0l:
        id4520x_1 = id4520in_option0;
        break;
      case 1l:
        id4520x_1 = id4520in_option1;
        break;
      default:
        id4520x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4520out_result[(getCycle()+1)%2] = (id4520x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4521out_output;

  { // Node ID: 4521 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4521in_input = id4520out_result[getCycle()%2];

    id4521out_output = id4521in_input;
  }
  { // Node ID: 4523 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4523in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4523in_option0 = in_vars.id4522out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4523in_option1 = id4521out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4523x_1;

    switch((id4523in_sel.getValueAsLong())) {
      case 0l:
        id4523x_1 = id4523in_option0;
        break;
      case 1l:
        id4523x_1 = id4523in_option1;
        break;
      default:
        id4523x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4523out_result[(getCycle()+1)%2] = (id4523x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4524out_output;

  { // Node ID: 4524 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4524in_input = id4523out_result[getCycle()%2];

    id4524out_output = id4524in_input;
  }
  { // Node ID: 4526 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4526in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4526in_option0 = in_vars.id4525out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4526in_option1 = id4524out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4526x_1;

    switch((id4526in_sel.getValueAsLong())) {
      case 0l:
        id4526x_1 = id4526in_option0;
        break;
      case 1l:
        id4526x_1 = id4526in_option1;
        break;
      default:
        id4526x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4526out_result[(getCycle()+1)%2] = (id4526x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4527out_output;

  { // Node ID: 4527 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4527in_input = id4526out_result[getCycle()%2];

    id4527out_output = id4527in_input;
  }
  { // Node ID: 4529 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4529in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4529in_option0 = in_vars.id4528out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4529in_option1 = id4527out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4529x_1;

    switch((id4529in_sel.getValueAsLong())) {
      case 0l:
        id4529x_1 = id4529in_option0;
        break;
      case 1l:
        id4529x_1 = id4529in_option1;
        break;
      default:
        id4529x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4529out_result[(getCycle()+1)%2] = (id4529x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4530out_output;

  { // Node ID: 4530 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4530in_input = id4529out_result[getCycle()%2];

    id4530out_output = id4530in_input;
  }
  { // Node ID: 4532 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4532in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4532in_option0 = in_vars.id4531out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4532in_option1 = id4530out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4532x_1;

    switch((id4532in_sel.getValueAsLong())) {
      case 0l:
        id4532x_1 = id4532in_option0;
        break;
      case 1l:
        id4532x_1 = id4532in_option1;
        break;
      default:
        id4532x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4532out_result[(getCycle()+1)%2] = (id4532x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4533out_output;

  { // Node ID: 4533 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4533in_input = id4532out_result[getCycle()%2];

    id4533out_output = id4533in_input;
  }
  { // Node ID: 4535 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4535in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4535in_option0 = in_vars.id4534out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4535in_option1 = id4533out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4535x_1;

    switch((id4535in_sel.getValueAsLong())) {
      case 0l:
        id4535x_1 = id4535in_option0;
        break;
      case 1l:
        id4535x_1 = id4535in_option1;
        break;
      default:
        id4535x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4535out_result[(getCycle()+1)%2] = (id4535x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4536out_output;

  { // Node ID: 4536 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4536in_input = id4535out_result[getCycle()%2];

    id4536out_output = id4536in_input;
  }
  { // Node ID: 4538 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4538in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4538in_option0 = in_vars.id4537out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4538in_option1 = id4536out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4538x_1;

    switch((id4538in_sel.getValueAsLong())) {
      case 0l:
        id4538x_1 = id4538in_option0;
        break;
      case 1l:
        id4538x_1 = id4538in_option1;
        break;
      default:
        id4538x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4538out_result[(getCycle()+1)%2] = (id4538x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4539out_output;

  { // Node ID: 4539 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4539in_input = id4538out_result[getCycle()%2];

    id4539out_output = id4539in_input;
  }
  { // Node ID: 4541 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4541in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4541in_option0 = in_vars.id4540out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4541in_option1 = id4539out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4541x_1;

    switch((id4541in_sel.getValueAsLong())) {
      case 0l:
        id4541x_1 = id4541in_option0;
        break;
      case 1l:
        id4541x_1 = id4541in_option1;
        break;
      default:
        id4541x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4541out_result[(getCycle()+1)%2] = (id4541x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4542out_output;

  { // Node ID: 4542 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4542in_input = id4541out_result[getCycle()%2];

    id4542out_output = id4542in_input;
  }
  { // Node ID: 4544 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4544in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4544in_option0 = in_vars.id4543out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4544in_option1 = id4542out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4544x_1;

    switch((id4544in_sel.getValueAsLong())) {
      case 0l:
        id4544x_1 = id4544in_option0;
        break;
      case 1l:
        id4544x_1 = id4544in_option1;
        break;
      default:
        id4544x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4544out_result[(getCycle()+1)%2] = (id4544x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4545out_output;

  { // Node ID: 4545 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4545in_input = id4544out_result[getCycle()%2];

    id4545out_output = id4545in_input;
  }
  { // Node ID: 4547 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4547in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4547in_option0 = in_vars.id4546out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4547in_option1 = id4545out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4547x_1;

    switch((id4547in_sel.getValueAsLong())) {
      case 0l:
        id4547x_1 = id4547in_option0;
        break;
      case 1l:
        id4547x_1 = id4547in_option1;
        break;
      default:
        id4547x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4547out_result[(getCycle()+1)%2] = (id4547x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4548out_output;

  { // Node ID: 4548 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4548in_input = id4547out_result[getCycle()%2];

    id4548out_output = id4548in_input;
  }
  { // Node ID: 4550 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4550in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4550in_option0 = in_vars.id4549out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4550in_option1 = id4548out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4550x_1;

    switch((id4550in_sel.getValueAsLong())) {
      case 0l:
        id4550x_1 = id4550in_option0;
        break;
      case 1l:
        id4550x_1 = id4550in_option1;
        break;
      default:
        id4550x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4550out_result[(getCycle()+1)%2] = (id4550x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4551out_output;

  { // Node ID: 4551 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4551in_input = id4550out_result[getCycle()%2];

    id4551out_output = id4551in_input;
  }
  { // Node ID: 4553 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4553in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4553in_option0 = in_vars.id4552out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4553in_option1 = id4551out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4553x_1;

    switch((id4553in_sel.getValueAsLong())) {
      case 0l:
        id4553x_1 = id4553in_option0;
        break;
      case 1l:
        id4553x_1 = id4553in_option1;
        break;
      default:
        id4553x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4553out_result[(getCycle()+1)%2] = (id4553x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4554out_output;

  { // Node ID: 4554 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4554in_input = id4553out_result[getCycle()%2];

    id4554out_output = id4554in_input;
  }
  { // Node ID: 4556 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4556in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4556in_option0 = in_vars.id4555out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4556in_option1 = id4554out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4556x_1;

    switch((id4556in_sel.getValueAsLong())) {
      case 0l:
        id4556x_1 = id4556in_option0;
        break;
      case 1l:
        id4556x_1 = id4556in_option1;
        break;
      default:
        id4556x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4556out_result[(getCycle()+1)%2] = (id4556x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4557out_output;

  { // Node ID: 4557 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4557in_input = id4556out_result[getCycle()%2];

    id4557out_output = id4557in_input;
  }
  { // Node ID: 4559 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4559in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4559in_option0 = in_vars.id4558out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4559in_option1 = id4557out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4559x_1;

    switch((id4559in_sel.getValueAsLong())) {
      case 0l:
        id4559x_1 = id4559in_option0;
        break;
      case 1l:
        id4559x_1 = id4559in_option1;
        break;
      default:
        id4559x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4559out_result[(getCycle()+1)%2] = (id4559x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4560out_output;

  { // Node ID: 4560 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4560in_input = id4559out_result[getCycle()%2];

    id4560out_output = id4560in_input;
  }
  { // Node ID: 4562 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4562in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4562in_option0 = in_vars.id4561out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4562in_option1 = id4560out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4562x_1;

    switch((id4562in_sel.getValueAsLong())) {
      case 0l:
        id4562x_1 = id4562in_option0;
        break;
      case 1l:
        id4562x_1 = id4562in_option1;
        break;
      default:
        id4562x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4562out_result[(getCycle()+1)%2] = (id4562x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4563out_output;

  { // Node ID: 4563 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4563in_input = id4562out_result[getCycle()%2];

    id4563out_output = id4563in_input;
  }
  { // Node ID: 4565 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4565in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4565in_option0 = in_vars.id4564out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4565in_option1 = id4563out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4565x_1;

    switch((id4565in_sel.getValueAsLong())) {
      case 0l:
        id4565x_1 = id4565in_option0;
        break;
      case 1l:
        id4565x_1 = id4565in_option1;
        break;
      default:
        id4565x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4565out_result[(getCycle()+1)%2] = (id4565x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4566out_output;

  { // Node ID: 4566 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4566in_input = id4565out_result[getCycle()%2];

    id4566out_output = id4566in_input;
  }
  { // Node ID: 4568 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4568in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4568in_option0 = in_vars.id4567out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4568in_option1 = id4566out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4568x_1;

    switch((id4568in_sel.getValueAsLong())) {
      case 0l:
        id4568x_1 = id4568in_option0;
        break;
      case 1l:
        id4568x_1 = id4568in_option1;
        break;
      default:
        id4568x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4568out_result[(getCycle()+1)%2] = (id4568x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4569out_output;

  { // Node ID: 4569 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4569in_input = id4568out_result[getCycle()%2];

    id4569out_output = id4569in_input;
  }
  { // Node ID: 4571 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4571in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4571in_option0 = in_vars.id4570out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4571in_option1 = id4569out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4571x_1;

    switch((id4571in_sel.getValueAsLong())) {
      case 0l:
        id4571x_1 = id4571in_option0;
        break;
      case 1l:
        id4571x_1 = id4571in_option1;
        break;
      default:
        id4571x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4571out_result[(getCycle()+1)%2] = (id4571x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4572out_output;

  { // Node ID: 4572 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4572in_input = id4571out_result[getCycle()%2];

    id4572out_output = id4572in_input;
  }
  { // Node ID: 4574 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4574in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4574in_option0 = in_vars.id4573out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4574in_option1 = id4572out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4574x_1;

    switch((id4574in_sel.getValueAsLong())) {
      case 0l:
        id4574x_1 = id4574in_option0;
        break;
      case 1l:
        id4574x_1 = id4574in_option1;
        break;
      default:
        id4574x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4574out_result[(getCycle()+1)%2] = (id4574x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4575out_output;

  { // Node ID: 4575 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4575in_input = id4574out_result[getCycle()%2];

    id4575out_output = id4575in_input;
  }
  { // Node ID: 4577 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4577in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4577in_option0 = in_vars.id4576out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4577in_option1 = id4575out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4577x_1;

    switch((id4577in_sel.getValueAsLong())) {
      case 0l:
        id4577x_1 = id4577in_option0;
        break;
      case 1l:
        id4577x_1 = id4577in_option1;
        break;
      default:
        id4577x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4577out_result[(getCycle()+1)%2] = (id4577x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4578out_output;

  { // Node ID: 4578 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4578in_input = id4577out_result[getCycle()%2];

    id4578out_output = id4578in_input;
  }
  { // Node ID: 4580 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4580in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4580in_option0 = in_vars.id4579out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4580in_option1 = id4578out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4580x_1;

    switch((id4580in_sel.getValueAsLong())) {
      case 0l:
        id4580x_1 = id4580in_option0;
        break;
      case 1l:
        id4580x_1 = id4580in_option1;
        break;
      default:
        id4580x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4580out_result[(getCycle()+1)%2] = (id4580x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4581out_output;

  { // Node ID: 4581 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4581in_input = id4580out_result[getCycle()%2];

    id4581out_output = id4581in_input;
  }
  { // Node ID: 4583 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4583in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4583in_option0 = in_vars.id4582out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4583in_option1 = id4581out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4583x_1;

    switch((id4583in_sel.getValueAsLong())) {
      case 0l:
        id4583x_1 = id4583in_option0;
        break;
      case 1l:
        id4583x_1 = id4583in_option1;
        break;
      default:
        id4583x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4583out_result[(getCycle()+1)%2] = (id4583x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4584out_output;

  { // Node ID: 4584 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4584in_input = id4583out_result[getCycle()%2];

    id4584out_output = id4584in_input;
  }
  { // Node ID: 4586 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4586in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4586in_option0 = in_vars.id4585out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4586in_option1 = id4584out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4586x_1;

    switch((id4586in_sel.getValueAsLong())) {
      case 0l:
        id4586x_1 = id4586in_option0;
        break;
      case 1l:
        id4586x_1 = id4586in_option1;
        break;
      default:
        id4586x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4586out_result[(getCycle()+1)%2] = (id4586x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4587out_output;

  { // Node ID: 4587 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4587in_input = id4586out_result[getCycle()%2];

    id4587out_output = id4587in_input;
  }
  { // Node ID: 4589 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4589in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4589in_option0 = in_vars.id4588out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4589in_option1 = id4587out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4589x_1;

    switch((id4589in_sel.getValueAsLong())) {
      case 0l:
        id4589x_1 = id4589in_option0;
        break;
      case 1l:
        id4589x_1 = id4589in_option1;
        break;
      default:
        id4589x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4589out_result[(getCycle()+1)%2] = (id4589x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4590out_output;

  { // Node ID: 4590 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4590in_input = id4589out_result[getCycle()%2];

    id4590out_output = id4590in_input;
  }
  { // Node ID: 4592 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4592in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4592in_option0 = in_vars.id4591out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4592in_option1 = id4590out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4592x_1;

    switch((id4592in_sel.getValueAsLong())) {
      case 0l:
        id4592x_1 = id4592in_option0;
        break;
      case 1l:
        id4592x_1 = id4592in_option1;
        break;
      default:
        id4592x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4592out_result[(getCycle()+1)%2] = (id4592x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4593out_output;

  { // Node ID: 4593 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4593in_input = id4592out_result[getCycle()%2];

    id4593out_output = id4593in_input;
  }
  { // Node ID: 4595 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4595in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4595in_option0 = in_vars.id4594out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4595in_option1 = id4593out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4595x_1;

    switch((id4595in_sel.getValueAsLong())) {
      case 0l:
        id4595x_1 = id4595in_option0;
        break;
      case 1l:
        id4595x_1 = id4595in_option1;
        break;
      default:
        id4595x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4595out_result[(getCycle()+1)%2] = (id4595x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4596out_output;

  { // Node ID: 4596 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4596in_input = id4595out_result[getCycle()%2];

    id4596out_output = id4596in_input;
  }
  { // Node ID: 4598 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4598in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4598in_option0 = in_vars.id4597out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4598in_option1 = id4596out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4598x_1;

    switch((id4598in_sel.getValueAsLong())) {
      case 0l:
        id4598x_1 = id4598in_option0;
        break;
      case 1l:
        id4598x_1 = id4598in_option1;
        break;
      default:
        id4598x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4598out_result[(getCycle()+1)%2] = (id4598x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4599out_output;

  { // Node ID: 4599 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4599in_input = id4598out_result[getCycle()%2];

    id4599out_output = id4599in_input;
  }
  { // Node ID: 4601 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4601in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4601in_option0 = in_vars.id4600out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4601in_option1 = id4599out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4601x_1;

    switch((id4601in_sel.getValueAsLong())) {
      case 0l:
        id4601x_1 = id4601in_option0;
        break;
      case 1l:
        id4601x_1 = id4601in_option1;
        break;
      default:
        id4601x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4601out_result[(getCycle()+1)%2] = (id4601x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4602out_output;

  { // Node ID: 4602 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4602in_input = id4601out_result[getCycle()%2];

    id4602out_output = id4602in_input;
  }
  { // Node ID: 4604 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4604in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4604in_option0 = in_vars.id4603out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4604in_option1 = id4602out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4604x_1;

    switch((id4604in_sel.getValueAsLong())) {
      case 0l:
        id4604x_1 = id4604in_option0;
        break;
      case 1l:
        id4604x_1 = id4604in_option1;
        break;
      default:
        id4604x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4604out_result[(getCycle()+1)%2] = (id4604x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4605out_output;

  { // Node ID: 4605 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4605in_input = id4604out_result[getCycle()%2];

    id4605out_output = id4605in_input;
  }
  { // Node ID: 4607 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4607in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4607in_option0 = in_vars.id4606out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4607in_option1 = id4605out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4607x_1;

    switch((id4607in_sel.getValueAsLong())) {
      case 0l:
        id4607x_1 = id4607in_option0;
        break;
      case 1l:
        id4607x_1 = id4607in_option1;
        break;
      default:
        id4607x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4607out_result[(getCycle()+1)%2] = (id4607x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4608out_output;

  { // Node ID: 4608 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4608in_input = id4607out_result[getCycle()%2];

    id4608out_output = id4608in_input;
  }
  { // Node ID: 4610 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4610in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4610in_option0 = in_vars.id4609out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4610in_option1 = id4608out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4610x_1;

    switch((id4610in_sel.getValueAsLong())) {
      case 0l:
        id4610x_1 = id4610in_option0;
        break;
      case 1l:
        id4610x_1 = id4610in_option1;
        break;
      default:
        id4610x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4610out_result[(getCycle()+1)%2] = (id4610x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4611out_output;

  { // Node ID: 4611 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4611in_input = id4610out_result[getCycle()%2];

    id4611out_output = id4611in_input;
  }
  { // Node ID: 4613 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4613in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4613in_option0 = in_vars.id4612out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4613in_option1 = id4611out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4613x_1;

    switch((id4613in_sel.getValueAsLong())) {
      case 0l:
        id4613x_1 = id4613in_option0;
        break;
      case 1l:
        id4613x_1 = id4613in_option1;
        break;
      default:
        id4613x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4613out_result[(getCycle()+1)%2] = (id4613x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4614out_output;

  { // Node ID: 4614 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4614in_input = id4613out_result[getCycle()%2];

    id4614out_output = id4614in_input;
  }
  { // Node ID: 4616 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4616in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4616in_option0 = in_vars.id4615out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4616in_option1 = id4614out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4616x_1;

    switch((id4616in_sel.getValueAsLong())) {
      case 0l:
        id4616x_1 = id4616in_option0;
        break;
      case 1l:
        id4616x_1 = id4616in_option1;
        break;
      default:
        id4616x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4616out_result[(getCycle()+1)%2] = (id4616x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4617out_output;

  { // Node ID: 4617 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4617in_input = id4616out_result[getCycle()%2];

    id4617out_output = id4617in_input;
  }
  { // Node ID: 4619 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4619in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4619in_option0 = in_vars.id4618out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4619in_option1 = id4617out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4619x_1;

    switch((id4619in_sel.getValueAsLong())) {
      case 0l:
        id4619x_1 = id4619in_option0;
        break;
      case 1l:
        id4619x_1 = id4619in_option1;
        break;
      default:
        id4619x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4619out_result[(getCycle()+1)%2] = (id4619x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4620out_output;

  { // Node ID: 4620 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4620in_input = id4619out_result[getCycle()%2];

    id4620out_output = id4620in_input;
  }
  { // Node ID: 4622 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4622in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4622in_option0 = in_vars.id4621out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4622in_option1 = id4620out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4622x_1;

    switch((id4622in_sel.getValueAsLong())) {
      case 0l:
        id4622x_1 = id4622in_option0;
        break;
      case 1l:
        id4622x_1 = id4622in_option1;
        break;
      default:
        id4622x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4622out_result[(getCycle()+1)%2] = (id4622x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4623out_output;

  { // Node ID: 4623 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4623in_input = id4622out_result[getCycle()%2];

    id4623out_output = id4623in_input;
  }
  { // Node ID: 4625 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4625in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4625in_option0 = in_vars.id4624out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4625in_option1 = id4623out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4625x_1;

    switch((id4625in_sel.getValueAsLong())) {
      case 0l:
        id4625x_1 = id4625in_option0;
        break;
      case 1l:
        id4625x_1 = id4625in_option1;
        break;
      default:
        id4625x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4625out_result[(getCycle()+1)%2] = (id4625x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4626out_output;

  { // Node ID: 4626 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4626in_input = id4625out_result[getCycle()%2];

    id4626out_output = id4626in_input;
  }
  { // Node ID: 4628 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4628in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4628in_option0 = in_vars.id4627out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4628in_option1 = id4626out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4628x_1;

    switch((id4628in_sel.getValueAsLong())) {
      case 0l:
        id4628x_1 = id4628in_option0;
        break;
      case 1l:
        id4628x_1 = id4628in_option1;
        break;
      default:
        id4628x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4628out_result[(getCycle()+1)%2] = (id4628x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4629out_output;

  { // Node ID: 4629 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4629in_input = id4628out_result[getCycle()%2];

    id4629out_output = id4629in_input;
  }
  { // Node ID: 4631 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4631in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4631in_option0 = in_vars.id4630out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4631in_option1 = id4629out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4631x_1;

    switch((id4631in_sel.getValueAsLong())) {
      case 0l:
        id4631x_1 = id4631in_option0;
        break;
      case 1l:
        id4631x_1 = id4631in_option1;
        break;
      default:
        id4631x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4631out_result[(getCycle()+1)%2] = (id4631x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4632out_output;

  { // Node ID: 4632 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4632in_input = id4631out_result[getCycle()%2];

    id4632out_output = id4632in_input;
  }
  { // Node ID: 4634 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4634in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4634in_option0 = in_vars.id4633out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4634in_option1 = id4632out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4634x_1;

    switch((id4634in_sel.getValueAsLong())) {
      case 0l:
        id4634x_1 = id4634in_option0;
        break;
      case 1l:
        id4634x_1 = id4634in_option1;
        break;
      default:
        id4634x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4634out_result[(getCycle()+1)%2] = (id4634x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4635out_output;

  { // Node ID: 4635 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4635in_input = id4634out_result[getCycle()%2];

    id4635out_output = id4635in_input;
  }
  { // Node ID: 4637 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4637in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4637in_option0 = in_vars.id4636out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4637in_option1 = id4635out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4637x_1;

    switch((id4637in_sel.getValueAsLong())) {
      case 0l:
        id4637x_1 = id4637in_option0;
        break;
      case 1l:
        id4637x_1 = id4637in_option1;
        break;
      default:
        id4637x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4637out_result[(getCycle()+1)%2] = (id4637x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4638out_output;

  { // Node ID: 4638 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4638in_input = id4637out_result[getCycle()%2];

    id4638out_output = id4638in_input;
  }
  { // Node ID: 4640 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4640in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4640in_option0 = in_vars.id4639out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4640in_option1 = id4638out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4640x_1;

    switch((id4640in_sel.getValueAsLong())) {
      case 0l:
        id4640x_1 = id4640in_option0;
        break;
      case 1l:
        id4640x_1 = id4640in_option1;
        break;
      default:
        id4640x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4640out_result[(getCycle()+1)%2] = (id4640x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4641out_output;

  { // Node ID: 4641 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4641in_input = id4640out_result[getCycle()%2];

    id4641out_output = id4641in_input;
  }
  { // Node ID: 4643 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4643in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4643in_option0 = in_vars.id4642out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4643in_option1 = id4641out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4643x_1;

    switch((id4643in_sel.getValueAsLong())) {
      case 0l:
        id4643x_1 = id4643in_option0;
        break;
      case 1l:
        id4643x_1 = id4643in_option1;
        break;
      default:
        id4643x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4643out_result[(getCycle()+1)%2] = (id4643x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4644out_output;

  { // Node ID: 4644 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4644in_input = id4643out_result[getCycle()%2];

    id4644out_output = id4644in_input;
  }
  { // Node ID: 4646 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4646in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4646in_option0 = in_vars.id4645out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4646in_option1 = id4644out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4646x_1;

    switch((id4646in_sel.getValueAsLong())) {
      case 0l:
        id4646x_1 = id4646in_option0;
        break;
      case 1l:
        id4646x_1 = id4646in_option1;
        break;
      default:
        id4646x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4646out_result[(getCycle()+1)%2] = (id4646x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4647out_output;

  { // Node ID: 4647 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4647in_input = id4646out_result[getCycle()%2];

    id4647out_output = id4647in_input;
  }
  { // Node ID: 4649 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4649in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4649in_option0 = in_vars.id4648out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4649in_option1 = id4647out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4649x_1;

    switch((id4649in_sel.getValueAsLong())) {
      case 0l:
        id4649x_1 = id4649in_option0;
        break;
      case 1l:
        id4649x_1 = id4649in_option1;
        break;
      default:
        id4649x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4649out_result[(getCycle()+1)%2] = (id4649x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4650out_output;

  { // Node ID: 4650 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4650in_input = id4649out_result[getCycle()%2];

    id4650out_output = id4650in_input;
  }
  { // Node ID: 4652 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4652in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4652in_option0 = in_vars.id4651out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4652in_option1 = id4650out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4652x_1;

    switch((id4652in_sel.getValueAsLong())) {
      case 0l:
        id4652x_1 = id4652in_option0;
        break;
      case 1l:
        id4652x_1 = id4652in_option1;
        break;
      default:
        id4652x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4652out_result[(getCycle()+1)%2] = (id4652x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4653out_output;

  { // Node ID: 4653 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4653in_input = id4652out_result[getCycle()%2];

    id4653out_output = id4653in_input;
  }
  { // Node ID: 4655 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4655in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4655in_option0 = in_vars.id4654out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4655in_option1 = id4653out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4655x_1;

    switch((id4655in_sel.getValueAsLong())) {
      case 0l:
        id4655x_1 = id4655in_option0;
        break;
      case 1l:
        id4655x_1 = id4655in_option1;
        break;
      default:
        id4655x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4655out_result[(getCycle()+1)%2] = (id4655x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4656out_output;

  { // Node ID: 4656 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4656in_input = id4655out_result[getCycle()%2];

    id4656out_output = id4656in_input;
  }
  { // Node ID: 4658 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4658in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4658in_option0 = in_vars.id4657out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4658in_option1 = id4656out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4658x_1;

    switch((id4658in_sel.getValueAsLong())) {
      case 0l:
        id4658x_1 = id4658in_option0;
        break;
      case 1l:
        id4658x_1 = id4658in_option1;
        break;
      default:
        id4658x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4658out_result[(getCycle()+1)%2] = (id4658x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4659out_output;

  { // Node ID: 4659 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4659in_input = id4658out_result[getCycle()%2];

    id4659out_output = id4659in_input;
  }
  { // Node ID: 4661 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4661in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4661in_option0 = in_vars.id4660out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4661in_option1 = id4659out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4661x_1;

    switch((id4661in_sel.getValueAsLong())) {
      case 0l:
        id4661x_1 = id4661in_option0;
        break;
      case 1l:
        id4661x_1 = id4661in_option1;
        break;
      default:
        id4661x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4661out_result[(getCycle()+1)%2] = (id4661x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4662out_output;

  { // Node ID: 4662 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4662in_input = id4661out_result[getCycle()%2];

    id4662out_output = id4662in_input;
  }
  { // Node ID: 4664 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4664in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4664in_option0 = in_vars.id4663out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4664in_option1 = id4662out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4664x_1;

    switch((id4664in_sel.getValueAsLong())) {
      case 0l:
        id4664x_1 = id4664in_option0;
        break;
      case 1l:
        id4664x_1 = id4664in_option1;
        break;
      default:
        id4664x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4664out_result[(getCycle()+1)%2] = (id4664x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4665out_output;

  { // Node ID: 4665 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4665in_input = id4664out_result[getCycle()%2];

    id4665out_output = id4665in_input;
  }
  { // Node ID: 4667 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4667in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4667in_option0 = in_vars.id4666out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4667in_option1 = id4665out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4667x_1;

    switch((id4667in_sel.getValueAsLong())) {
      case 0l:
        id4667x_1 = id4667in_option0;
        break;
      case 1l:
        id4667x_1 = id4667in_option1;
        break;
      default:
        id4667x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4667out_result[(getCycle()+1)%2] = (id4667x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4668out_output;

  { // Node ID: 4668 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4668in_input = id4667out_result[getCycle()%2];

    id4668out_output = id4668in_input;
  }
  { // Node ID: 4670 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4670in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4670in_option0 = in_vars.id4669out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4670in_option1 = id4668out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4670x_1;

    switch((id4670in_sel.getValueAsLong())) {
      case 0l:
        id4670x_1 = id4670in_option0;
        break;
      case 1l:
        id4670x_1 = id4670in_option1;
        break;
      default:
        id4670x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4670out_result[(getCycle()+1)%2] = (id4670x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4671out_output;

  { // Node ID: 4671 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4671in_input = id4670out_result[getCycle()%2];

    id4671out_output = id4671in_input;
  }
  { // Node ID: 4673 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4673in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4673in_option0 = in_vars.id4672out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4673in_option1 = id4671out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4673x_1;

    switch((id4673in_sel.getValueAsLong())) {
      case 0l:
        id4673x_1 = id4673in_option0;
        break;
      case 1l:
        id4673x_1 = id4673in_option1;
        break;
      default:
        id4673x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4673out_result[(getCycle()+1)%2] = (id4673x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4674out_output;

  { // Node ID: 4674 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4674in_input = id4673out_result[getCycle()%2];

    id4674out_output = id4674in_input;
  }
  { // Node ID: 4676 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4676in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4676in_option0 = in_vars.id4675out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4676in_option1 = id4674out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4676x_1;

    switch((id4676in_sel.getValueAsLong())) {
      case 0l:
        id4676x_1 = id4676in_option0;
        break;
      case 1l:
        id4676x_1 = id4676in_option1;
        break;
      default:
        id4676x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4676out_result[(getCycle()+1)%2] = (id4676x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4677out_output;

  { // Node ID: 4677 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4677in_input = id4676out_result[getCycle()%2];

    id4677out_output = id4677in_input;
  }
  { // Node ID: 4679 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4679in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4679in_option0 = in_vars.id4678out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4679in_option1 = id4677out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4679x_1;

    switch((id4679in_sel.getValueAsLong())) {
      case 0l:
        id4679x_1 = id4679in_option0;
        break;
      case 1l:
        id4679x_1 = id4679in_option1;
        break;
      default:
        id4679x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4679out_result[(getCycle()+1)%2] = (id4679x_1);
  }

  sliding_window10Block11Vars out_vars;
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
  out_vars.id6928out_output = in_vars.id6928out_output;
  out_vars.id6925out_output = in_vars.id6925out_output;
  out_vars.id6922out_output = in_vars.id6922out_output;
  out_vars.id6919out_output = in_vars.id6919out_output;
  out_vars.id6916out_output = in_vars.id6916out_output;
  out_vars.id6913out_output = in_vars.id6913out_output;
  out_vars.id6910out_output = in_vars.id6910out_output;
  out_vars.id6907out_output = in_vars.id6907out_output;
  out_vars.id6904out_output = in_vars.id6904out_output;
  out_vars.id6901out_output = in_vars.id6901out_output;
  out_vars.id6898out_output = in_vars.id6898out_output;
  out_vars.id6895out_output = in_vars.id6895out_output;
  out_vars.id6892out_output = in_vars.id6892out_output;
  out_vars.id6889out_output = in_vars.id6889out_output;
  out_vars.id6886out_output = in_vars.id6886out_output;
  out_vars.id6883out_output = in_vars.id6883out_output;
  out_vars.id6880out_output = in_vars.id6880out_output;
  out_vars.id6877out_output = in_vars.id6877out_output;
  out_vars.id6874out_output = in_vars.id6874out_output;
  out_vars.id6871out_output = in_vars.id6871out_output;
  out_vars.id6868out_output = in_vars.id6868out_output;
  out_vars.id6865out_output = in_vars.id6865out_output;
  out_vars.id6862out_output = in_vars.id6862out_output;
  out_vars.id6859out_output = in_vars.id6859out_output;
  out_vars.id6856out_output = in_vars.id6856out_output;
  out_vars.id6853out_output = in_vars.id6853out_output;
  out_vars.id6850out_output = in_vars.id6850out_output;
  out_vars.id6847out_output = in_vars.id6847out_output;
  out_vars.id6844out_output = in_vars.id6844out_output;
  out_vars.id6841out_output = in_vars.id6841out_output;
  out_vars.id6838out_output = in_vars.id6838out_output;
  out_vars.id6835out_output = in_vars.id6835out_output;
  out_vars.id6832out_output = in_vars.id6832out_output;
  out_vars.id6829out_output = in_vars.id6829out_output;
  out_vars.id6826out_output = in_vars.id6826out_output;
  out_vars.id6823out_output = in_vars.id6823out_output;
  out_vars.id6820out_output = in_vars.id6820out_output;
  out_vars.id6817out_output = in_vars.id6817out_output;
  out_vars.id6814out_output = in_vars.id6814out_output;
  out_vars.id6811out_output = in_vars.id6811out_output;
  out_vars.id6808out_output = in_vars.id6808out_output;
  out_vars.id6805out_output = in_vars.id6805out_output;
  out_vars.id6802out_output = in_vars.id6802out_output;
  out_vars.id6799out_output = in_vars.id6799out_output;
  out_vars.id6796out_output = in_vars.id6796out_output;
  out_vars.id6793out_output = in_vars.id6793out_output;
  out_vars.id6790out_output = in_vars.id6790out_output;
  out_vars.id6787out_output = in_vars.id6787out_output;
  out_vars.id6784out_output = in_vars.id6784out_output;
  out_vars.id6781out_output = in_vars.id6781out_output;
  out_vars.id6778out_output = in_vars.id6778out_output;
  out_vars.id6775out_output = in_vars.id6775out_output;
  out_vars.id6772out_output = in_vars.id6772out_output;
  out_vars.id6769out_output = in_vars.id6769out_output;
  out_vars.id6766out_output = in_vars.id6766out_output;
  out_vars.id6763out_output = in_vars.id6763out_output;
  out_vars.id6760out_output = in_vars.id6760out_output;
  out_vars.id6757out_output = in_vars.id6757out_output;
  out_vars.id6754out_output = in_vars.id6754out_output;
  out_vars.id6751out_output = in_vars.id6751out_output;
  out_vars.id6748out_output = in_vars.id6748out_output;
  out_vars.id6745out_output = in_vars.id6745out_output;
  out_vars.id6742out_output = in_vars.id6742out_output;
  out_vars.id6739out_output = in_vars.id6739out_output;
  out_vars.id6736out_output = in_vars.id6736out_output;
  out_vars.id6733out_output = in_vars.id6733out_output;
  out_vars.id6730out_output = in_vars.id6730out_output;
  out_vars.id6727out_output = in_vars.id6727out_output;
  out_vars.id6724out_output = in_vars.id6724out_output;
  out_vars.id6721out_output = in_vars.id6721out_output;
  out_vars.id6718out_output = in_vars.id6718out_output;
  out_vars.id6715out_output = in_vars.id6715out_output;
  out_vars.id6712out_output = in_vars.id6712out_output;
  out_vars.id6709out_output = in_vars.id6709out_output;
  out_vars.id6706out_output = in_vars.id6706out_output;
  out_vars.id6703out_output = in_vars.id6703out_output;
  out_vars.id6700out_output = in_vars.id6700out_output;
  out_vars.id6697out_output = in_vars.id6697out_output;
  out_vars.id6694out_output = in_vars.id6694out_output;
  out_vars.id6691out_output = in_vars.id6691out_output;
  out_vars.id6688out_output = in_vars.id6688out_output;
  out_vars.id6685out_output = in_vars.id6685out_output;
  out_vars.id6682out_output = in_vars.id6682out_output;
  out_vars.id6679out_output = in_vars.id6679out_output;
  out_vars.id6676out_output = in_vars.id6676out_output;
  out_vars.id6673out_output = in_vars.id6673out_output;
  out_vars.id6670out_output = in_vars.id6670out_output;
  out_vars.id6667out_output = in_vars.id6667out_output;
  out_vars.id6664out_output = in_vars.id6664out_output;
  out_vars.id6661out_output = in_vars.id6661out_output;
  out_vars.id6658out_output = in_vars.id6658out_output;
  out_vars.id6655out_output = in_vars.id6655out_output;
  out_vars.id6652out_output = in_vars.id6652out_output;
  out_vars.id6649out_output = in_vars.id6649out_output;
  out_vars.id6646out_output = in_vars.id6646out_output;
  out_vars.id6643out_output = in_vars.id6643out_output;
  out_vars.id6640out_output = in_vars.id6640out_output;
  out_vars.id6637out_output = in_vars.id6637out_output;
  out_vars.id6634out_output = in_vars.id6634out_output;
  out_vars.id6631out_output = in_vars.id6631out_output;
  out_vars.id6628out_output = in_vars.id6628out_output;
  out_vars.id6625out_output = in_vars.id6625out_output;
  out_vars.id6622out_output = in_vars.id6622out_output;
  out_vars.id6619out_output = in_vars.id6619out_output;
  out_vars.id6616out_output = in_vars.id6616out_output;
  out_vars.id6613out_output = in_vars.id6613out_output;
  out_vars.id6610out_output = in_vars.id6610out_output;
  out_vars.id6607out_output = in_vars.id6607out_output;
  out_vars.id6604out_output = in_vars.id6604out_output;
  out_vars.id6601out_output = in_vars.id6601out_output;
  out_vars.id6598out_output = in_vars.id6598out_output;
  out_vars.id6595out_output = in_vars.id6595out_output;
  out_vars.id6592out_output = in_vars.id6592out_output;
  out_vars.id6589out_output = in_vars.id6589out_output;
  out_vars.id6586out_output = in_vars.id6586out_output;
  out_vars.id6583out_output = in_vars.id6583out_output;
  out_vars.id6580out_output = in_vars.id6580out_output;
  out_vars.id6577out_output = in_vars.id6577out_output;
  out_vars.id6574out_output = in_vars.id6574out_output;
  out_vars.id6571out_output = in_vars.id6571out_output;
  out_vars.id6568out_output = in_vars.id6568out_output;
  out_vars.id6565out_output = in_vars.id6565out_output;
  out_vars.id6562out_output = in_vars.id6562out_output;
  out_vars.id6559out_output = in_vars.id6559out_output;
  out_vars.id6556out_output = in_vars.id6556out_output;
  out_vars.id6553out_output = in_vars.id6553out_output;
  out_vars.id6550out_output = in_vars.id6550out_output;
  out_vars.id6547out_output = in_vars.id6547out_output;
  out_vars.id6544out_output = in_vars.id6544out_output;
  out_vars.id6541out_output = in_vars.id6541out_output;
  out_vars.id6538out_output = in_vars.id6538out_output;
  out_vars.id6535out_output = in_vars.id6535out_output;
  out_vars.id6532out_output = in_vars.id6532out_output;
  out_vars.id6529out_output = in_vars.id6529out_output;
  out_vars.id6526out_output = in_vars.id6526out_output;
  out_vars.id6523out_output = in_vars.id6523out_output;
  out_vars.id6520out_output = in_vars.id6520out_output;
  out_vars.id6517out_output = in_vars.id6517out_output;
  out_vars.id6514out_output = in_vars.id6514out_output;
  out_vars.id6511out_output = in_vars.id6511out_output;
  out_vars.id6508out_output = in_vars.id6508out_output;
  out_vars.id6505out_output = in_vars.id6505out_output;
  out_vars.id6502out_output = in_vars.id6502out_output;
  out_vars.id6499out_output = in_vars.id6499out_output;
  out_vars.id6496out_output = in_vars.id6496out_output;
  out_vars.id6493out_output = in_vars.id6493out_output;
  out_vars.id6490out_output = in_vars.id6490out_output;
  out_vars.id6487out_output = in_vars.id6487out_output;
  out_vars.id6484out_output = in_vars.id6484out_output;
  out_vars.id6481out_output = in_vars.id6481out_output;
  out_vars.id6478out_output = in_vars.id6478out_output;
  out_vars.id6475out_output = in_vars.id6475out_output;
  out_vars.id6472out_output = in_vars.id6472out_output;
  out_vars.id6469out_output = in_vars.id6469out_output;
  out_vars.id6466out_output = in_vars.id6466out_output;
  out_vars.id6463out_output = in_vars.id6463out_output;
  out_vars.id6460out_output = in_vars.id6460out_output;
  out_vars.id6457out_output = in_vars.id6457out_output;
  out_vars.id6454out_output = in_vars.id6454out_output;
  out_vars.id6451out_output = in_vars.id6451out_output;
  out_vars.id6448out_output = in_vars.id6448out_output;
  out_vars.id6445out_output = in_vars.id6445out_output;
  out_vars.id6442out_output = in_vars.id6442out_output;
  out_vars.id6439out_output = in_vars.id6439out_output;
  out_vars.id6436out_output = in_vars.id6436out_output;
  out_vars.id6433out_output = in_vars.id6433out_output;
  out_vars.id6430out_output = in_vars.id6430out_output;
  out_vars.id6427out_output = in_vars.id6427out_output;
  out_vars.id6424out_output = in_vars.id6424out_output;
  out_vars.id6421out_output = in_vars.id6421out_output;
  out_vars.id6418out_output = in_vars.id6418out_output;
  out_vars.id6415out_output = in_vars.id6415out_output;
  out_vars.id6412out_output = in_vars.id6412out_output;
  out_vars.id6409out_output = in_vars.id6409out_output;
  out_vars.id6406out_output = in_vars.id6406out_output;
  out_vars.id6403out_output = in_vars.id6403out_output;
  out_vars.id6400out_output = in_vars.id6400out_output;
  out_vars.id6397out_output = in_vars.id6397out_output;
  out_vars.id6394out_output = in_vars.id6394out_output;
  out_vars.id6391out_output = in_vars.id6391out_output;
  out_vars.id6388out_output = in_vars.id6388out_output;
  out_vars.id6385out_output = in_vars.id6385out_output;
  out_vars.id6382out_output = in_vars.id6382out_output;
  out_vars.id6379out_output = in_vars.id6379out_output;
  out_vars.id6376out_output = in_vars.id6376out_output;
  out_vars.id6373out_output = in_vars.id6373out_output;
  out_vars.id6370out_output = in_vars.id6370out_output;
  out_vars.id6367out_output = in_vars.id6367out_output;
  out_vars.id6364out_output = in_vars.id6364out_output;
  out_vars.id6361out_output = in_vars.id6361out_output;
  out_vars.id6358out_output = in_vars.id6358out_output;
  out_vars.id6355out_output = in_vars.id6355out_output;
  out_vars.id6352out_output = in_vars.id6352out_output;
  out_vars.id6349out_output = in_vars.id6349out_output;
  out_vars.id6346out_output = in_vars.id6346out_output;
  out_vars.id6343out_output = in_vars.id6343out_output;
  out_vars.id6340out_output = in_vars.id6340out_output;
  out_vars.id6337out_output = in_vars.id6337out_output;
  out_vars.id6334out_output = in_vars.id6334out_output;
  out_vars.id6331out_output = in_vars.id6331out_output;
  out_vars.id6328out_output = in_vars.id6328out_output;
  out_vars.id6325out_output = in_vars.id6325out_output;
  out_vars.id6322out_output = in_vars.id6322out_output;
  out_vars.id6319out_output = in_vars.id6319out_output;
  out_vars.id6316out_output = in_vars.id6316out_output;
  out_vars.id6313out_output = in_vars.id6313out_output;
  out_vars.id6310out_output = in_vars.id6310out_output;
  out_vars.id6307out_output = in_vars.id6307out_output;
  out_vars.id6304out_output = in_vars.id6304out_output;
  out_vars.id6301out_output = in_vars.id6301out_output;
  out_vars.id6298out_output = in_vars.id6298out_output;
  out_vars.id6295out_output = in_vars.id6295out_output;
  out_vars.id6292out_output = in_vars.id6292out_output;
  out_vars.id6289out_output = in_vars.id6289out_output;
  out_vars.id6286out_output = in_vars.id6286out_output;
  out_vars.id6283out_output = in_vars.id6283out_output;
  out_vars.id6280out_output = in_vars.id6280out_output;
  out_vars.id6277out_output = in_vars.id6277out_output;
  out_vars.id6274out_output = in_vars.id6274out_output;
  out_vars.id6271out_output = in_vars.id6271out_output;
  out_vars.id6268out_output = in_vars.id6268out_output;
  out_vars.id6265out_output = in_vars.id6265out_output;
  out_vars.id6262out_output = in_vars.id6262out_output;
  out_vars.id6259out_output = in_vars.id6259out_output;
  out_vars.id6256out_output = in_vars.id6256out_output;
  out_vars.id6253out_output = in_vars.id6253out_output;
  out_vars.id6250out_output = in_vars.id6250out_output;
  out_vars.id6247out_output = in_vars.id6247out_output;
  out_vars.id6244out_output = in_vars.id6244out_output;
  out_vars.id6241out_output = in_vars.id6241out_output;
  out_vars.id6238out_output = in_vars.id6238out_output;
  out_vars.id6235out_output = in_vars.id6235out_output;
  out_vars.id6232out_output = in_vars.id6232out_output;
  out_vars.id6229out_output = in_vars.id6229out_output;
  out_vars.id6226out_output = in_vars.id6226out_output;
  out_vars.id6223out_output = in_vars.id6223out_output;
  out_vars.id6220out_output = in_vars.id6220out_output;
  out_vars.id6217out_output = in_vars.id6217out_output;
  out_vars.id6214out_output = in_vars.id6214out_output;
  out_vars.id6211out_output = in_vars.id6211out_output;
  out_vars.id6208out_output = in_vars.id6208out_output;
  out_vars.id6205out_output = in_vars.id6205out_output;
  out_vars.id6202out_output = in_vars.id6202out_output;
  out_vars.id6199out_output = in_vars.id6199out_output;
  out_vars.id6196out_output = in_vars.id6196out_output;
  out_vars.id6193out_output = in_vars.id6193out_output;
  out_vars.id6190out_output = in_vars.id6190out_output;
  out_vars.id6187out_output = in_vars.id6187out_output;
  out_vars.id6184out_output = in_vars.id6184out_output;
  out_vars.id6181out_output = in_vars.id6181out_output;
  out_vars.id6178out_output = in_vars.id6178out_output;
  out_vars.id6175out_output = in_vars.id6175out_output;
  out_vars.id6172out_output = in_vars.id6172out_output;
  out_vars.id6169out_output = in_vars.id6169out_output;
  out_vars.id6166out_output = in_vars.id6166out_output;
  out_vars.id6163out_output = in_vars.id6163out_output;
  out_vars.id6160out_output = in_vars.id6160out_output;
  out_vars.id6157out_output = in_vars.id6157out_output;
  out_vars.id6154out_output = in_vars.id6154out_output;
  out_vars.id6151out_output = in_vars.id6151out_output;
  out_vars.id6148out_output = in_vars.id6148out_output;
  out_vars.id6145out_output = in_vars.id6145out_output;
  out_vars.id6142out_output = in_vars.id6142out_output;
  out_vars.id6139out_output = in_vars.id6139out_output;
  out_vars.id6136out_output = in_vars.id6136out_output;
  out_vars.id6133out_output = in_vars.id6133out_output;
  out_vars.id6130out_output = in_vars.id6130out_output;
  out_vars.id6127out_output = in_vars.id6127out_output;
  out_vars.id6124out_output = in_vars.id6124out_output;
  out_vars.id6121out_output = in_vars.id6121out_output;
  out_vars.id6118out_output = in_vars.id6118out_output;
  out_vars.id6115out_output = in_vars.id6115out_output;
  out_vars.id6112out_output = in_vars.id6112out_output;
  out_vars.id6109out_output = in_vars.id6109out_output;
  out_vars.id6106out_output = in_vars.id6106out_output;
  out_vars.id6103out_output = in_vars.id6103out_output;
  out_vars.id6100out_output = in_vars.id6100out_output;
  out_vars.id6097out_output = in_vars.id6097out_output;
  out_vars.id6094out_output = in_vars.id6094out_output;
  out_vars.id6091out_output = in_vars.id6091out_output;
  out_vars.id6088out_output = in_vars.id6088out_output;
  out_vars.id6085out_output = in_vars.id6085out_output;
  out_vars.id6082out_output = in_vars.id6082out_output;
  out_vars.id6079out_output = in_vars.id6079out_output;
  out_vars.id6076out_output = in_vars.id6076out_output;
  out_vars.id6073out_output = in_vars.id6073out_output;
  out_vars.id6070out_output = in_vars.id6070out_output;
  out_vars.id6067out_output = in_vars.id6067out_output;
  out_vars.id6064out_output = in_vars.id6064out_output;
  out_vars.id6061out_output = in_vars.id6061out_output;
  out_vars.id6058out_output = in_vars.id6058out_output;
  out_vars.id6055out_output = in_vars.id6055out_output;
  out_vars.id6052out_output = in_vars.id6052out_output;
  out_vars.id6049out_output = in_vars.id6049out_output;
  out_vars.id6046out_output = in_vars.id6046out_output;
  out_vars.id6043out_output = in_vars.id6043out_output;
  out_vars.id6040out_output = in_vars.id6040out_output;
  out_vars.id6037out_output = in_vars.id6037out_output;
  out_vars.id6034out_output = in_vars.id6034out_output;
  out_vars.id6031out_output = in_vars.id6031out_output;
  out_vars.id6028out_output = in_vars.id6028out_output;
  out_vars.id6025out_output = in_vars.id6025out_output;
  out_vars.id6022out_output = in_vars.id6022out_output;
  out_vars.id6019out_output = in_vars.id6019out_output;
  out_vars.id6016out_output = in_vars.id6016out_output;
  out_vars.id6013out_output = in_vars.id6013out_output;
  out_vars.id6010out_output = in_vars.id6010out_output;
  out_vars.id6007out_output = in_vars.id6007out_output;
  out_vars.id6004out_output = in_vars.id6004out_output;
  out_vars.id6001out_output = in_vars.id6001out_output;
  out_vars.id5998out_output = in_vars.id5998out_output;
  out_vars.id5995out_output = in_vars.id5995out_output;
  out_vars.id5992out_output = in_vars.id5992out_output;
  out_vars.id5989out_output = in_vars.id5989out_output;
  out_vars.id5986out_output = in_vars.id5986out_output;
  out_vars.id5983out_output = in_vars.id5983out_output;
  out_vars.id5980out_output = in_vars.id5980out_output;
  out_vars.id5977out_output = in_vars.id5977out_output;
  out_vars.id5974out_output = in_vars.id5974out_output;
  out_vars.id5971out_output = in_vars.id5971out_output;
  out_vars.id5968out_output = in_vars.id5968out_output;
  out_vars.id5965out_output = in_vars.id5965out_output;
  out_vars.id5962out_output = in_vars.id5962out_output;
  out_vars.id5959out_output = in_vars.id5959out_output;
  out_vars.id5956out_output = in_vars.id5956out_output;
  out_vars.id5953out_output = in_vars.id5953out_output;
  out_vars.id5950out_output = in_vars.id5950out_output;
  out_vars.id5947out_output = in_vars.id5947out_output;
  out_vars.id5944out_output = in_vars.id5944out_output;
  out_vars.id5941out_output = in_vars.id5941out_output;
  out_vars.id5938out_output = in_vars.id5938out_output;
  out_vars.id5935out_output = in_vars.id5935out_output;
  out_vars.id5932out_output = in_vars.id5932out_output;
  out_vars.id5929out_output = in_vars.id5929out_output;
  out_vars.id5926out_output = in_vars.id5926out_output;
  out_vars.id5923out_output = in_vars.id5923out_output;
  out_vars.id5920out_output = in_vars.id5920out_output;
  out_vars.id5917out_output = in_vars.id5917out_output;
  out_vars.id5914out_output = in_vars.id5914out_output;
  out_vars.id5911out_output = in_vars.id5911out_output;
  out_vars.id5908out_output = in_vars.id5908out_output;
  out_vars.id5905out_output = in_vars.id5905out_output;
  out_vars.id5902out_output = in_vars.id5902out_output;
  out_vars.id5899out_output = in_vars.id5899out_output;
  out_vars.id5896out_output = in_vars.id5896out_output;
  out_vars.id5893out_output = in_vars.id5893out_output;
  out_vars.id5890out_output = in_vars.id5890out_output;
  out_vars.id5887out_output = in_vars.id5887out_output;
  out_vars.id5884out_output = in_vars.id5884out_output;
  out_vars.id5881out_output = in_vars.id5881out_output;
  out_vars.id5878out_output = in_vars.id5878out_output;
  out_vars.id5875out_output = in_vars.id5875out_output;
  out_vars.id5872out_output = in_vars.id5872out_output;
  out_vars.id5869out_output = in_vars.id5869out_output;
  out_vars.id5866out_output = in_vars.id5866out_output;
  out_vars.id5863out_output = in_vars.id5863out_output;
  out_vars.id5860out_output = in_vars.id5860out_output;
  out_vars.id5857out_output = in_vars.id5857out_output;
  out_vars.id5854out_output = in_vars.id5854out_output;
  out_vars.id5851out_output = in_vars.id5851out_output;
  out_vars.id5848out_output = in_vars.id5848out_output;
  out_vars.id5845out_output = in_vars.id5845out_output;
  out_vars.id5842out_output = in_vars.id5842out_output;
  out_vars.id5839out_output = in_vars.id5839out_output;
  out_vars.id5836out_output = in_vars.id5836out_output;
  out_vars.id5833out_output = in_vars.id5833out_output;
  out_vars.id5830out_output = in_vars.id5830out_output;
  out_vars.id5827out_output = in_vars.id5827out_output;
  out_vars.id5824out_output = in_vars.id5824out_output;
  out_vars.id5821out_output = in_vars.id5821out_output;
  out_vars.id5818out_output = in_vars.id5818out_output;
  out_vars.id5815out_output = in_vars.id5815out_output;
  out_vars.id5812out_output = in_vars.id5812out_output;
  out_vars.id5809out_output = in_vars.id5809out_output;
  out_vars.id5806out_output = in_vars.id5806out_output;
  out_vars.id5803out_output = in_vars.id5803out_output;
  out_vars.id5800out_output = in_vars.id5800out_output;
  out_vars.id5797out_output = in_vars.id5797out_output;
  out_vars.id5794out_output = in_vars.id5794out_output;
  out_vars.id5791out_output = in_vars.id5791out_output;
  out_vars.id5788out_output = in_vars.id5788out_output;
  out_vars.id5785out_output = in_vars.id5785out_output;
  out_vars.id5782out_output = in_vars.id5782out_output;
  out_vars.id5779out_output = in_vars.id5779out_output;
  out_vars.id5776out_output = in_vars.id5776out_output;
  out_vars.id5773out_output = in_vars.id5773out_output;
  out_vars.id5770out_output = in_vars.id5770out_output;
  out_vars.id5767out_output = in_vars.id5767out_output;
  out_vars.id5764out_output = in_vars.id5764out_output;
  out_vars.id5761out_output = in_vars.id5761out_output;
  out_vars.id5758out_output = in_vars.id5758out_output;
  out_vars.id5755out_output = in_vars.id5755out_output;
  out_vars.id5752out_output = in_vars.id5752out_output;
  out_vars.id5749out_output = in_vars.id5749out_output;
  out_vars.id5746out_output = in_vars.id5746out_output;
  out_vars.id5743out_output = in_vars.id5743out_output;
  out_vars.id5740out_output = in_vars.id5740out_output;
  out_vars.id5737out_output = in_vars.id5737out_output;
  out_vars.id5734out_output = in_vars.id5734out_output;
  out_vars.id5731out_output = in_vars.id5731out_output;
  out_vars.id5728out_output = in_vars.id5728out_output;
  out_vars.id5725out_output = in_vars.id5725out_output;
  out_vars.id5722out_output = in_vars.id5722out_output;
  out_vars.id5719out_output = in_vars.id5719out_output;
  out_vars.id5716out_output = in_vars.id5716out_output;
  out_vars.id5713out_output = in_vars.id5713out_output;
  out_vars.id5710out_output = in_vars.id5710out_output;
  out_vars.id5707out_output = in_vars.id5707out_output;
  out_vars.id5704out_output = in_vars.id5704out_output;
  out_vars.id5701out_output = in_vars.id5701out_output;
  out_vars.id5698out_output = in_vars.id5698out_output;
  out_vars.id5695out_output = in_vars.id5695out_output;
  out_vars.id5692out_output = in_vars.id5692out_output;
  out_vars.id5689out_output = in_vars.id5689out_output;
  out_vars.id5686out_output = in_vars.id5686out_output;
  out_vars.id5683out_output = in_vars.id5683out_output;
  out_vars.id5680out_output = in_vars.id5680out_output;
  out_vars.id5677out_output = in_vars.id5677out_output;
  out_vars.id5674out_output = in_vars.id5674out_output;
  out_vars.id5671out_output = in_vars.id5671out_output;
  out_vars.id5668out_output = in_vars.id5668out_output;
  out_vars.id5665out_output = in_vars.id5665out_output;
  out_vars.id5662out_output = in_vars.id5662out_output;
  out_vars.id5659out_output = in_vars.id5659out_output;
  out_vars.id5656out_output = in_vars.id5656out_output;
  out_vars.id5653out_output = in_vars.id5653out_output;
  out_vars.id5650out_output = in_vars.id5650out_output;
  out_vars.id5647out_output = in_vars.id5647out_output;
  out_vars.id5644out_output = in_vars.id5644out_output;
  out_vars.id5641out_output = in_vars.id5641out_output;
  out_vars.id5638out_output = in_vars.id5638out_output;
  out_vars.id5635out_output = in_vars.id5635out_output;
  out_vars.id5632out_output = in_vars.id5632out_output;
  out_vars.id5629out_output = in_vars.id5629out_output;
  out_vars.id5626out_output = in_vars.id5626out_output;
  out_vars.id5623out_output = in_vars.id5623out_output;
  out_vars.id5620out_output = in_vars.id5620out_output;
  out_vars.id5617out_output = in_vars.id5617out_output;
  out_vars.id5614out_output = in_vars.id5614out_output;
  out_vars.id5611out_output = in_vars.id5611out_output;
  out_vars.id5608out_output = in_vars.id5608out_output;
  out_vars.id5605out_output = in_vars.id5605out_output;
  out_vars.id5602out_output = in_vars.id5602out_output;
  out_vars.id5599out_output = in_vars.id5599out_output;
  out_vars.id5596out_output = in_vars.id5596out_output;
  out_vars.id5593out_output = in_vars.id5593out_output;
  out_vars.id5590out_output = in_vars.id5590out_output;
  out_vars.id5587out_output = in_vars.id5587out_output;
  out_vars.id5584out_output = in_vars.id5584out_output;
  out_vars.id5581out_output = in_vars.id5581out_output;
  out_vars.id5578out_output = in_vars.id5578out_output;
  out_vars.id5575out_output = in_vars.id5575out_output;
  out_vars.id5572out_output = in_vars.id5572out_output;
  out_vars.id5569out_output = in_vars.id5569out_output;
  out_vars.id5566out_output = in_vars.id5566out_output;
  out_vars.id5563out_output = in_vars.id5563out_output;
  out_vars.id5560out_output = in_vars.id5560out_output;
  out_vars.id5557out_output = in_vars.id5557out_output;
  out_vars.id5554out_output = in_vars.id5554out_output;
  out_vars.id5551out_output = in_vars.id5551out_output;
  out_vars.id5548out_output = in_vars.id5548out_output;
  out_vars.id5545out_output = in_vars.id5545out_output;
  out_vars.id5542out_output = in_vars.id5542out_output;
  out_vars.id5539out_output = in_vars.id5539out_output;
  out_vars.id5536out_output = in_vars.id5536out_output;
  out_vars.id5533out_output = in_vars.id5533out_output;
  out_vars.id5530out_output = in_vars.id5530out_output;
  out_vars.id5527out_output = in_vars.id5527out_output;
  out_vars.id5524out_output = in_vars.id5524out_output;
  out_vars.id5521out_output = in_vars.id5521out_output;
  out_vars.id5518out_output = in_vars.id5518out_output;
  out_vars.id5515out_output = in_vars.id5515out_output;
  out_vars.id5512out_output = in_vars.id5512out_output;
  out_vars.id5509out_output = in_vars.id5509out_output;
  out_vars.id5506out_output = in_vars.id5506out_output;
  out_vars.id5503out_output = in_vars.id5503out_output;
  out_vars.id5500out_output = in_vars.id5500out_output;
  out_vars.id5497out_output = in_vars.id5497out_output;
  out_vars.id5494out_output = in_vars.id5494out_output;
  out_vars.id5491out_output = in_vars.id5491out_output;
  out_vars.id5488out_output = in_vars.id5488out_output;
  out_vars.id5485out_output = in_vars.id5485out_output;
  out_vars.id5482out_output = in_vars.id5482out_output;
  out_vars.id5479out_output = in_vars.id5479out_output;
  out_vars.id5476out_output = in_vars.id5476out_output;
  out_vars.id5473out_output = in_vars.id5473out_output;
  out_vars.id5470out_output = in_vars.id5470out_output;
  out_vars.id5467out_output = in_vars.id5467out_output;
  out_vars.id5464out_output = in_vars.id5464out_output;
  out_vars.id5461out_output = in_vars.id5461out_output;
  out_vars.id5458out_output = in_vars.id5458out_output;
  out_vars.id5455out_output = in_vars.id5455out_output;
  out_vars.id5452out_output = in_vars.id5452out_output;
  out_vars.id5449out_output = in_vars.id5449out_output;
  out_vars.id5446out_output = in_vars.id5446out_output;
  out_vars.id5443out_output = in_vars.id5443out_output;
  out_vars.id5440out_output = in_vars.id5440out_output;
  out_vars.id5437out_output = in_vars.id5437out_output;
  out_vars.id5434out_output = in_vars.id5434out_output;
  out_vars.id5431out_output = in_vars.id5431out_output;
  out_vars.id5428out_output = in_vars.id5428out_output;
  out_vars.id5425out_output = in_vars.id5425out_output;
  out_vars.id5422out_output = in_vars.id5422out_output;
  out_vars.id5419out_output = in_vars.id5419out_output;
  out_vars.id5416out_output = in_vars.id5416out_output;
  out_vars.id5413out_output = in_vars.id5413out_output;
  out_vars.id5410out_output = in_vars.id5410out_output;
  out_vars.id5407out_output = in_vars.id5407out_output;
  out_vars.id5404out_output = in_vars.id5404out_output;
  out_vars.id5401out_output = in_vars.id5401out_output;
  out_vars.id5398out_output = in_vars.id5398out_output;
  out_vars.id5395out_output = in_vars.id5395out_output;
  out_vars.id5392out_output = in_vars.id5392out_output;
  out_vars.id5389out_output = in_vars.id5389out_output;
  out_vars.id5386out_output = in_vars.id5386out_output;
  out_vars.id5383out_output = in_vars.id5383out_output;
  out_vars.id5380out_output = in_vars.id5380out_output;
  out_vars.id5377out_output = in_vars.id5377out_output;
  out_vars.id5374out_output = in_vars.id5374out_output;
  out_vars.id5371out_output = in_vars.id5371out_output;
  out_vars.id5368out_output = in_vars.id5368out_output;
  out_vars.id5365out_output = in_vars.id5365out_output;
  out_vars.id5362out_output = in_vars.id5362out_output;
  out_vars.id5359out_output = in_vars.id5359out_output;
  out_vars.id5356out_output = in_vars.id5356out_output;
  out_vars.id5353out_output = in_vars.id5353out_output;
  out_vars.id5350out_output = in_vars.id5350out_output;
  out_vars.id5347out_output = in_vars.id5347out_output;
  out_vars.id5344out_output = in_vars.id5344out_output;
  out_vars.id5341out_output = in_vars.id5341out_output;
  out_vars.id5338out_output = in_vars.id5338out_output;
  out_vars.id5335out_output = in_vars.id5335out_output;
  out_vars.id5332out_output = in_vars.id5332out_output;
  out_vars.id5329out_output = in_vars.id5329out_output;
  out_vars.id5326out_output = in_vars.id5326out_output;
  out_vars.id5323out_output = in_vars.id5323out_output;
  out_vars.id5320out_output = in_vars.id5320out_output;
  out_vars.id5317out_output = in_vars.id5317out_output;
  out_vars.id5314out_output = in_vars.id5314out_output;
  out_vars.id5311out_output = in_vars.id5311out_output;
  out_vars.id5308out_output = in_vars.id5308out_output;
  out_vars.id5305out_output = in_vars.id5305out_output;
  out_vars.id5302out_output = in_vars.id5302out_output;
  out_vars.id5299out_output = in_vars.id5299out_output;
  out_vars.id5296out_output = in_vars.id5296out_output;
  out_vars.id5293out_output = in_vars.id5293out_output;
  out_vars.id5290out_output = in_vars.id5290out_output;
  out_vars.id5287out_output = in_vars.id5287out_output;
  out_vars.id5284out_output = in_vars.id5284out_output;
  out_vars.id5281out_output = in_vars.id5281out_output;
  out_vars.id5278out_output = in_vars.id5278out_output;
  out_vars.id5275out_output = in_vars.id5275out_output;
  out_vars.id5272out_output = in_vars.id5272out_output;
  out_vars.id5269out_output = in_vars.id5269out_output;
  out_vars.id5266out_output = in_vars.id5266out_output;
  out_vars.id5263out_output = in_vars.id5263out_output;
  out_vars.id5260out_output = in_vars.id5260out_output;
  out_vars.id5257out_output = in_vars.id5257out_output;
  out_vars.id5254out_output = in_vars.id5254out_output;
  out_vars.id5251out_output = in_vars.id5251out_output;
  out_vars.id5248out_output = in_vars.id5248out_output;
  out_vars.id5245out_output = in_vars.id5245out_output;
  out_vars.id5242out_output = in_vars.id5242out_output;
  out_vars.id5239out_output = in_vars.id5239out_output;
  out_vars.id5236out_output = in_vars.id5236out_output;
  out_vars.id5233out_output = in_vars.id5233out_output;
  out_vars.id5230out_output = in_vars.id5230out_output;
  out_vars.id5227out_output = in_vars.id5227out_output;
  out_vars.id5224out_output = in_vars.id5224out_output;
  out_vars.id5221out_output = in_vars.id5221out_output;
  out_vars.id5218out_output = in_vars.id5218out_output;
  out_vars.id5215out_output = in_vars.id5215out_output;
  out_vars.id5212out_output = in_vars.id5212out_output;
  out_vars.id5209out_output = in_vars.id5209out_output;
  out_vars.id5206out_output = in_vars.id5206out_output;
  out_vars.id5203out_output = in_vars.id5203out_output;
  out_vars.id5200out_output = in_vars.id5200out_output;
  out_vars.id5197out_output = in_vars.id5197out_output;
  out_vars.id5194out_output = in_vars.id5194out_output;
  out_vars.id5191out_output = in_vars.id5191out_output;
  out_vars.id5188out_output = in_vars.id5188out_output;
  out_vars.id5185out_output = in_vars.id5185out_output;
  out_vars.id5182out_output = in_vars.id5182out_output;
  out_vars.id5179out_output = in_vars.id5179out_output;
  out_vars.id5176out_output = in_vars.id5176out_output;
  out_vars.id5173out_output = in_vars.id5173out_output;
  out_vars.id5170out_output = in_vars.id5170out_output;
  out_vars.id5167out_output = in_vars.id5167out_output;
  out_vars.id5164out_output = in_vars.id5164out_output;
  out_vars.id5161out_output = in_vars.id5161out_output;
  out_vars.id5158out_output = in_vars.id5158out_output;
  out_vars.id5155out_output = in_vars.id5155out_output;
  out_vars.id5152out_output = in_vars.id5152out_output;
  out_vars.id5149out_output = in_vars.id5149out_output;
  out_vars.id5146out_output = in_vars.id5146out_output;
  out_vars.id5143out_output = in_vars.id5143out_output;
  out_vars.id5140out_output = in_vars.id5140out_output;
  out_vars.id5137out_output = in_vars.id5137out_output;
  out_vars.id5134out_output = in_vars.id5134out_output;
  out_vars.id5131out_output = in_vars.id5131out_output;
  out_vars.id5128out_output = in_vars.id5128out_output;
  out_vars.id5125out_output = in_vars.id5125out_output;
  out_vars.id5122out_output = in_vars.id5122out_output;
  out_vars.id5119out_output = in_vars.id5119out_output;
  out_vars.id5116out_output = in_vars.id5116out_output;
  out_vars.id5113out_output = in_vars.id5113out_output;
  out_vars.id5110out_output = in_vars.id5110out_output;
  out_vars.id5107out_output = in_vars.id5107out_output;
  out_vars.id5104out_output = in_vars.id5104out_output;
  out_vars.id5101out_output = in_vars.id5101out_output;
  out_vars.id5098out_output = in_vars.id5098out_output;
  out_vars.id5095out_output = in_vars.id5095out_output;
  out_vars.id5092out_output = in_vars.id5092out_output;
  out_vars.id5089out_output = in_vars.id5089out_output;
  out_vars.id5086out_output = in_vars.id5086out_output;
  out_vars.id5083out_output = in_vars.id5083out_output;
  out_vars.id5080out_output = in_vars.id5080out_output;
  out_vars.id5077out_output = in_vars.id5077out_output;
  out_vars.id5074out_output = in_vars.id5074out_output;
  out_vars.id5071out_output = in_vars.id5071out_output;
  out_vars.id5068out_output = in_vars.id5068out_output;
  out_vars.id5065out_output = in_vars.id5065out_output;
  out_vars.id5062out_output = in_vars.id5062out_output;
  out_vars.id5059out_output = in_vars.id5059out_output;
  out_vars.id5056out_output = in_vars.id5056out_output;
  out_vars.id5053out_output = in_vars.id5053out_output;
  out_vars.id5050out_output = in_vars.id5050out_output;
  out_vars.id5047out_output = in_vars.id5047out_output;
  out_vars.id5044out_output = in_vars.id5044out_output;
  out_vars.id5041out_output = in_vars.id5041out_output;
  out_vars.id5038out_output = in_vars.id5038out_output;
  out_vars.id5035out_output = in_vars.id5035out_output;
  out_vars.id5032out_output = in_vars.id5032out_output;
  out_vars.id5029out_output = in_vars.id5029out_output;
  out_vars.id5026out_output = in_vars.id5026out_output;
  out_vars.id5023out_output = in_vars.id5023out_output;
  out_vars.id5020out_output = in_vars.id5020out_output;
  out_vars.id5017out_output = in_vars.id5017out_output;
  out_vars.id5014out_output = in_vars.id5014out_output;
  out_vars.id5011out_output = in_vars.id5011out_output;
  out_vars.id5008out_output = in_vars.id5008out_output;
  out_vars.id5005out_output = in_vars.id5005out_output;
  out_vars.id5002out_output = in_vars.id5002out_output;
  out_vars.id4999out_output = in_vars.id4999out_output;
  out_vars.id4996out_output = in_vars.id4996out_output;
  out_vars.id4993out_output = in_vars.id4993out_output;
  out_vars.id4990out_output = in_vars.id4990out_output;
  out_vars.id4987out_output = in_vars.id4987out_output;
  out_vars.id4984out_output = in_vars.id4984out_output;
  out_vars.id4981out_output = in_vars.id4981out_output;
  out_vars.id4978out_output = in_vars.id4978out_output;
  out_vars.id4975out_output = in_vars.id4975out_output;
  out_vars.id4972out_output = in_vars.id4972out_output;
  out_vars.id4969out_output = in_vars.id4969out_output;
  out_vars.id4966out_output = in_vars.id4966out_output;
  out_vars.id4963out_output = in_vars.id4963out_output;
  out_vars.id4960out_output = in_vars.id4960out_output;
  out_vars.id4957out_output = in_vars.id4957out_output;
  out_vars.id4954out_output = in_vars.id4954out_output;
  out_vars.id4951out_output = in_vars.id4951out_output;
  out_vars.id4948out_output = in_vars.id4948out_output;
  out_vars.id4945out_output = in_vars.id4945out_output;
  out_vars.id4942out_output = in_vars.id4942out_output;
  out_vars.id4939out_output = in_vars.id4939out_output;
  out_vars.id4936out_output = in_vars.id4936out_output;
  out_vars.id4933out_output = in_vars.id4933out_output;
  out_vars.id4930out_output = in_vars.id4930out_output;
  out_vars.id4927out_output = in_vars.id4927out_output;
  out_vars.id4924out_output = in_vars.id4924out_output;
  out_vars.id4921out_output = in_vars.id4921out_output;
  out_vars.id4918out_output = in_vars.id4918out_output;
  out_vars.id4915out_output = in_vars.id4915out_output;
  out_vars.id4912out_output = in_vars.id4912out_output;
  out_vars.id4909out_output = in_vars.id4909out_output;
  out_vars.id4906out_output = in_vars.id4906out_output;
  out_vars.id4903out_output = in_vars.id4903out_output;
  out_vars.id4900out_output = in_vars.id4900out_output;
  out_vars.id4897out_output = in_vars.id4897out_output;
  out_vars.id4894out_output = in_vars.id4894out_output;
  out_vars.id4891out_output = in_vars.id4891out_output;
  out_vars.id4888out_output = in_vars.id4888out_output;
  out_vars.id4885out_output = in_vars.id4885out_output;
  out_vars.id4882out_output = in_vars.id4882out_output;
  out_vars.id4879out_output = in_vars.id4879out_output;
  out_vars.id4876out_output = in_vars.id4876out_output;
  out_vars.id4873out_output = in_vars.id4873out_output;
  out_vars.id4870out_output = in_vars.id4870out_output;
  out_vars.id4867out_output = in_vars.id4867out_output;
  out_vars.id4864out_output = in_vars.id4864out_output;
  out_vars.id4861out_output = in_vars.id4861out_output;
  out_vars.id4858out_output = in_vars.id4858out_output;
  out_vars.id4855out_output = in_vars.id4855out_output;
  out_vars.id4852out_output = in_vars.id4852out_output;
  out_vars.id4849out_output = in_vars.id4849out_output;
  out_vars.id4846out_output = in_vars.id4846out_output;
  out_vars.id4843out_output = in_vars.id4843out_output;
  out_vars.id4840out_output = in_vars.id4840out_output;
  out_vars.id4837out_output = in_vars.id4837out_output;
  out_vars.id4834out_output = in_vars.id4834out_output;
  out_vars.id4831out_output = in_vars.id4831out_output;
  out_vars.id4828out_output = in_vars.id4828out_output;
  out_vars.id4825out_output = in_vars.id4825out_output;
  out_vars.id4822out_output = in_vars.id4822out_output;
  out_vars.id4819out_output = in_vars.id4819out_output;
  out_vars.id4816out_output = in_vars.id4816out_output;
  out_vars.id4813out_output = in_vars.id4813out_output;
  out_vars.id4810out_output = in_vars.id4810out_output;
  out_vars.id4807out_output = in_vars.id4807out_output;
  out_vars.id4804out_output = in_vars.id4804out_output;
  out_vars.id4801out_output = in_vars.id4801out_output;
  out_vars.id4798out_output = in_vars.id4798out_output;
  out_vars.id4795out_output = in_vars.id4795out_output;
  out_vars.id4792out_output = in_vars.id4792out_output;
  out_vars.id4789out_output = in_vars.id4789out_output;
  out_vars.id4786out_output = in_vars.id4786out_output;
  out_vars.id4783out_output = in_vars.id4783out_output;
  out_vars.id4780out_output = in_vars.id4780out_output;
  out_vars.id4777out_output = in_vars.id4777out_output;
  out_vars.id4774out_output = in_vars.id4774out_output;
  out_vars.id4771out_output = in_vars.id4771out_output;
  out_vars.id4768out_output = in_vars.id4768out_output;
  out_vars.id4765out_output = in_vars.id4765out_output;
  out_vars.id4762out_output = in_vars.id4762out_output;
  out_vars.id4759out_output = in_vars.id4759out_output;
  out_vars.id4756out_output = in_vars.id4756out_output;
  out_vars.id4753out_output = in_vars.id4753out_output;
  out_vars.id4750out_output = in_vars.id4750out_output;
  out_vars.id4747out_output = in_vars.id4747out_output;
  out_vars.id4744out_output = in_vars.id4744out_output;
  out_vars.id4741out_output = in_vars.id4741out_output;
  out_vars.id4738out_output = in_vars.id4738out_output;
  out_vars.id4735out_output = in_vars.id4735out_output;
  out_vars.id4732out_output = in_vars.id4732out_output;
  out_vars.id4729out_output = in_vars.id4729out_output;
  out_vars.id4726out_output = in_vars.id4726out_output;
  out_vars.id4723out_output = in_vars.id4723out_output;
  out_vars.id4720out_output = in_vars.id4720out_output;
  out_vars.id4717out_output = in_vars.id4717out_output;
  out_vars.id4714out_output = in_vars.id4714out_output;
  out_vars.id4711out_output = in_vars.id4711out_output;
  out_vars.id4708out_output = in_vars.id4708out_output;
  out_vars.id4705out_output = in_vars.id4705out_output;
  out_vars.id4702out_output = in_vars.id4702out_output;
  out_vars.id4699out_output = in_vars.id4699out_output;
  out_vars.id4696out_output = in_vars.id4696out_output;
  out_vars.id4693out_output = in_vars.id4693out_output;
  out_vars.id4690out_output = in_vars.id4690out_output;
  out_vars.id4687out_output = in_vars.id4687out_output;
  out_vars.id4684out_output = in_vars.id4684out_output;
  out_vars.id4681out_output = in_vars.id4681out_output;
  return out_vars;
};

};
