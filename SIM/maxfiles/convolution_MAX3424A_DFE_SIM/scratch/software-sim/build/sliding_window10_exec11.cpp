#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window10_exec11.h"
//#include "sliding_window10_exec12.h"
//#include "sliding_window10.h"

namespace maxcompilersim {

sliding_window10Block12Vars sliding_window10::execute11(const sliding_window10Block11Vars &in_vars) {
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4680out_output;

  { // Node ID: 4680 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4680in_input = id4679out_result[getCycle()%2];

    id4680out_output = id4680in_input;
  }
  { // Node ID: 4682 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4682in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4682in_option0 = in_vars.id4681out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4682in_option1 = id4680out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4682x_1;

    switch((id4682in_sel.getValueAsLong())) {
      case 0l:
        id4682x_1 = id4682in_option0;
        break;
      case 1l:
        id4682x_1 = id4682in_option1;
        break;
      default:
        id4682x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4682out_result[(getCycle()+1)%2] = (id4682x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4683out_output;

  { // Node ID: 4683 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4683in_input = id4682out_result[getCycle()%2];

    id4683out_output = id4683in_input;
  }
  { // Node ID: 4685 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4685in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4685in_option0 = in_vars.id4684out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4685in_option1 = id4683out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4685x_1;

    switch((id4685in_sel.getValueAsLong())) {
      case 0l:
        id4685x_1 = id4685in_option0;
        break;
      case 1l:
        id4685x_1 = id4685in_option1;
        break;
      default:
        id4685x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4685out_result[(getCycle()+1)%2] = (id4685x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4686out_output;

  { // Node ID: 4686 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4686in_input = id4685out_result[getCycle()%2];

    id4686out_output = id4686in_input;
  }
  { // Node ID: 4688 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4688in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4688in_option0 = in_vars.id4687out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4688in_option1 = id4686out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4688x_1;

    switch((id4688in_sel.getValueAsLong())) {
      case 0l:
        id4688x_1 = id4688in_option0;
        break;
      case 1l:
        id4688x_1 = id4688in_option1;
        break;
      default:
        id4688x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4688out_result[(getCycle()+1)%2] = (id4688x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4689out_output;

  { // Node ID: 4689 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4689in_input = id4688out_result[getCycle()%2];

    id4689out_output = id4689in_input;
  }
  { // Node ID: 4691 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4691in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4691in_option0 = in_vars.id4690out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4691in_option1 = id4689out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4691x_1;

    switch((id4691in_sel.getValueAsLong())) {
      case 0l:
        id4691x_1 = id4691in_option0;
        break;
      case 1l:
        id4691x_1 = id4691in_option1;
        break;
      default:
        id4691x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4691out_result[(getCycle()+1)%2] = (id4691x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4692out_output;

  { // Node ID: 4692 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4692in_input = id4691out_result[getCycle()%2];

    id4692out_output = id4692in_input;
  }
  { // Node ID: 4694 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4694in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4694in_option0 = in_vars.id4693out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4694in_option1 = id4692out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4694x_1;

    switch((id4694in_sel.getValueAsLong())) {
      case 0l:
        id4694x_1 = id4694in_option0;
        break;
      case 1l:
        id4694x_1 = id4694in_option1;
        break;
      default:
        id4694x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4694out_result[(getCycle()+1)%2] = (id4694x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4695out_output;

  { // Node ID: 4695 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4695in_input = id4694out_result[getCycle()%2];

    id4695out_output = id4695in_input;
  }
  { // Node ID: 4697 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4697in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4697in_option0 = in_vars.id4696out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4697in_option1 = id4695out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4697x_1;

    switch((id4697in_sel.getValueAsLong())) {
      case 0l:
        id4697x_1 = id4697in_option0;
        break;
      case 1l:
        id4697x_1 = id4697in_option1;
        break;
      default:
        id4697x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4697out_result[(getCycle()+1)%2] = (id4697x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4698out_output;

  { // Node ID: 4698 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4698in_input = id4697out_result[getCycle()%2];

    id4698out_output = id4698in_input;
  }
  { // Node ID: 4700 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4700in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4700in_option0 = in_vars.id4699out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4700in_option1 = id4698out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4700x_1;

    switch((id4700in_sel.getValueAsLong())) {
      case 0l:
        id4700x_1 = id4700in_option0;
        break;
      case 1l:
        id4700x_1 = id4700in_option1;
        break;
      default:
        id4700x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4700out_result[(getCycle()+1)%2] = (id4700x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4701out_output;

  { // Node ID: 4701 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4701in_input = id4700out_result[getCycle()%2];

    id4701out_output = id4701in_input;
  }
  { // Node ID: 4703 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4703in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4703in_option0 = in_vars.id4702out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4703in_option1 = id4701out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4703x_1;

    switch((id4703in_sel.getValueAsLong())) {
      case 0l:
        id4703x_1 = id4703in_option0;
        break;
      case 1l:
        id4703x_1 = id4703in_option1;
        break;
      default:
        id4703x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4703out_result[(getCycle()+1)%2] = (id4703x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4704out_output;

  { // Node ID: 4704 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4704in_input = id4703out_result[getCycle()%2];

    id4704out_output = id4704in_input;
  }
  { // Node ID: 4706 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4706in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4706in_option0 = in_vars.id4705out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4706in_option1 = id4704out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4706x_1;

    switch((id4706in_sel.getValueAsLong())) {
      case 0l:
        id4706x_1 = id4706in_option0;
        break;
      case 1l:
        id4706x_1 = id4706in_option1;
        break;
      default:
        id4706x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4706out_result[(getCycle()+1)%2] = (id4706x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4707out_output;

  { // Node ID: 4707 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4707in_input = id4706out_result[getCycle()%2];

    id4707out_output = id4707in_input;
  }
  { // Node ID: 4709 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4709in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4709in_option0 = in_vars.id4708out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4709in_option1 = id4707out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4709x_1;

    switch((id4709in_sel.getValueAsLong())) {
      case 0l:
        id4709x_1 = id4709in_option0;
        break;
      case 1l:
        id4709x_1 = id4709in_option1;
        break;
      default:
        id4709x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4709out_result[(getCycle()+1)%2] = (id4709x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4710out_output;

  { // Node ID: 4710 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4710in_input = id4709out_result[getCycle()%2];

    id4710out_output = id4710in_input;
  }
  { // Node ID: 4712 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4712in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4712in_option0 = in_vars.id4711out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4712in_option1 = id4710out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4712x_1;

    switch((id4712in_sel.getValueAsLong())) {
      case 0l:
        id4712x_1 = id4712in_option0;
        break;
      case 1l:
        id4712x_1 = id4712in_option1;
        break;
      default:
        id4712x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4712out_result[(getCycle()+1)%2] = (id4712x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4713out_output;

  { // Node ID: 4713 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4713in_input = id4712out_result[getCycle()%2];

    id4713out_output = id4713in_input;
  }
  { // Node ID: 4715 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4715in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4715in_option0 = in_vars.id4714out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4715in_option1 = id4713out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4715x_1;

    switch((id4715in_sel.getValueAsLong())) {
      case 0l:
        id4715x_1 = id4715in_option0;
        break;
      case 1l:
        id4715x_1 = id4715in_option1;
        break;
      default:
        id4715x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4715out_result[(getCycle()+1)%2] = (id4715x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4716out_output;

  { // Node ID: 4716 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4716in_input = id4715out_result[getCycle()%2];

    id4716out_output = id4716in_input;
  }
  { // Node ID: 4718 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4718in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4718in_option0 = in_vars.id4717out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4718in_option1 = id4716out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4718x_1;

    switch((id4718in_sel.getValueAsLong())) {
      case 0l:
        id4718x_1 = id4718in_option0;
        break;
      case 1l:
        id4718x_1 = id4718in_option1;
        break;
      default:
        id4718x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4718out_result[(getCycle()+1)%2] = (id4718x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4719out_output;

  { // Node ID: 4719 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4719in_input = id4718out_result[getCycle()%2];

    id4719out_output = id4719in_input;
  }
  { // Node ID: 4721 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4721in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4721in_option0 = in_vars.id4720out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4721in_option1 = id4719out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4721x_1;

    switch((id4721in_sel.getValueAsLong())) {
      case 0l:
        id4721x_1 = id4721in_option0;
        break;
      case 1l:
        id4721x_1 = id4721in_option1;
        break;
      default:
        id4721x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4721out_result[(getCycle()+1)%2] = (id4721x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4722out_output;

  { // Node ID: 4722 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4722in_input = id4721out_result[getCycle()%2];

    id4722out_output = id4722in_input;
  }
  { // Node ID: 4724 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4724in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4724in_option0 = in_vars.id4723out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4724in_option1 = id4722out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4724x_1;

    switch((id4724in_sel.getValueAsLong())) {
      case 0l:
        id4724x_1 = id4724in_option0;
        break;
      case 1l:
        id4724x_1 = id4724in_option1;
        break;
      default:
        id4724x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4724out_result[(getCycle()+1)%2] = (id4724x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4725out_output;

  { // Node ID: 4725 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4725in_input = id4724out_result[getCycle()%2];

    id4725out_output = id4725in_input;
  }
  { // Node ID: 4727 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4727in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4727in_option0 = in_vars.id4726out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4727in_option1 = id4725out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4727x_1;

    switch((id4727in_sel.getValueAsLong())) {
      case 0l:
        id4727x_1 = id4727in_option0;
        break;
      case 1l:
        id4727x_1 = id4727in_option1;
        break;
      default:
        id4727x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4727out_result[(getCycle()+1)%2] = (id4727x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4728out_output;

  { // Node ID: 4728 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4728in_input = id4727out_result[getCycle()%2];

    id4728out_output = id4728in_input;
  }
  { // Node ID: 4730 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4730in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4730in_option0 = in_vars.id4729out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4730in_option1 = id4728out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4730x_1;

    switch((id4730in_sel.getValueAsLong())) {
      case 0l:
        id4730x_1 = id4730in_option0;
        break;
      case 1l:
        id4730x_1 = id4730in_option1;
        break;
      default:
        id4730x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4730out_result[(getCycle()+1)%2] = (id4730x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4731out_output;

  { // Node ID: 4731 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4731in_input = id4730out_result[getCycle()%2];

    id4731out_output = id4731in_input;
  }
  { // Node ID: 4733 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4733in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4733in_option0 = in_vars.id4732out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4733in_option1 = id4731out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4733x_1;

    switch((id4733in_sel.getValueAsLong())) {
      case 0l:
        id4733x_1 = id4733in_option0;
        break;
      case 1l:
        id4733x_1 = id4733in_option1;
        break;
      default:
        id4733x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4733out_result[(getCycle()+1)%2] = (id4733x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4734out_output;

  { // Node ID: 4734 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4734in_input = id4733out_result[getCycle()%2];

    id4734out_output = id4734in_input;
  }
  { // Node ID: 4736 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4736in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4736in_option0 = in_vars.id4735out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4736in_option1 = id4734out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4736x_1;

    switch((id4736in_sel.getValueAsLong())) {
      case 0l:
        id4736x_1 = id4736in_option0;
        break;
      case 1l:
        id4736x_1 = id4736in_option1;
        break;
      default:
        id4736x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4736out_result[(getCycle()+1)%2] = (id4736x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4737out_output;

  { // Node ID: 4737 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4737in_input = id4736out_result[getCycle()%2];

    id4737out_output = id4737in_input;
  }
  { // Node ID: 4739 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4739in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4739in_option0 = in_vars.id4738out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4739in_option1 = id4737out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4739x_1;

    switch((id4739in_sel.getValueAsLong())) {
      case 0l:
        id4739x_1 = id4739in_option0;
        break;
      case 1l:
        id4739x_1 = id4739in_option1;
        break;
      default:
        id4739x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4739out_result[(getCycle()+1)%2] = (id4739x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4740out_output;

  { // Node ID: 4740 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4740in_input = id4739out_result[getCycle()%2];

    id4740out_output = id4740in_input;
  }
  { // Node ID: 4742 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4742in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4742in_option0 = in_vars.id4741out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4742in_option1 = id4740out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4742x_1;

    switch((id4742in_sel.getValueAsLong())) {
      case 0l:
        id4742x_1 = id4742in_option0;
        break;
      case 1l:
        id4742x_1 = id4742in_option1;
        break;
      default:
        id4742x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4742out_result[(getCycle()+1)%2] = (id4742x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4743out_output;

  { // Node ID: 4743 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4743in_input = id4742out_result[getCycle()%2];

    id4743out_output = id4743in_input;
  }
  { // Node ID: 4745 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4745in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4745in_option0 = in_vars.id4744out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4745in_option1 = id4743out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4745x_1;

    switch((id4745in_sel.getValueAsLong())) {
      case 0l:
        id4745x_1 = id4745in_option0;
        break;
      case 1l:
        id4745x_1 = id4745in_option1;
        break;
      default:
        id4745x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4745out_result[(getCycle()+1)%2] = (id4745x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4746out_output;

  { // Node ID: 4746 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4746in_input = id4745out_result[getCycle()%2];

    id4746out_output = id4746in_input;
  }
  { // Node ID: 4748 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4748in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4748in_option0 = in_vars.id4747out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4748in_option1 = id4746out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4748x_1;

    switch((id4748in_sel.getValueAsLong())) {
      case 0l:
        id4748x_1 = id4748in_option0;
        break;
      case 1l:
        id4748x_1 = id4748in_option1;
        break;
      default:
        id4748x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4748out_result[(getCycle()+1)%2] = (id4748x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4749out_output;

  { // Node ID: 4749 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4749in_input = id4748out_result[getCycle()%2];

    id4749out_output = id4749in_input;
  }
  { // Node ID: 4751 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4751in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4751in_option0 = in_vars.id4750out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4751in_option1 = id4749out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4751x_1;

    switch((id4751in_sel.getValueAsLong())) {
      case 0l:
        id4751x_1 = id4751in_option0;
        break;
      case 1l:
        id4751x_1 = id4751in_option1;
        break;
      default:
        id4751x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4751out_result[(getCycle()+1)%2] = (id4751x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4752out_output;

  { // Node ID: 4752 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4752in_input = id4751out_result[getCycle()%2];

    id4752out_output = id4752in_input;
  }
  { // Node ID: 4754 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4754in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4754in_option0 = in_vars.id4753out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4754in_option1 = id4752out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4754x_1;

    switch((id4754in_sel.getValueAsLong())) {
      case 0l:
        id4754x_1 = id4754in_option0;
        break;
      case 1l:
        id4754x_1 = id4754in_option1;
        break;
      default:
        id4754x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4754out_result[(getCycle()+1)%2] = (id4754x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4755out_output;

  { // Node ID: 4755 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4755in_input = id4754out_result[getCycle()%2];

    id4755out_output = id4755in_input;
  }
  { // Node ID: 4757 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4757in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4757in_option0 = in_vars.id4756out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4757in_option1 = id4755out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4757x_1;

    switch((id4757in_sel.getValueAsLong())) {
      case 0l:
        id4757x_1 = id4757in_option0;
        break;
      case 1l:
        id4757x_1 = id4757in_option1;
        break;
      default:
        id4757x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4757out_result[(getCycle()+1)%2] = (id4757x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4758out_output;

  { // Node ID: 4758 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4758in_input = id4757out_result[getCycle()%2];

    id4758out_output = id4758in_input;
  }
  { // Node ID: 4760 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4760in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4760in_option0 = in_vars.id4759out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4760in_option1 = id4758out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4760x_1;

    switch((id4760in_sel.getValueAsLong())) {
      case 0l:
        id4760x_1 = id4760in_option0;
        break;
      case 1l:
        id4760x_1 = id4760in_option1;
        break;
      default:
        id4760x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4760out_result[(getCycle()+1)%2] = (id4760x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4761out_output;

  { // Node ID: 4761 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4761in_input = id4760out_result[getCycle()%2];

    id4761out_output = id4761in_input;
  }
  { // Node ID: 4763 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4763in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4763in_option0 = in_vars.id4762out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4763in_option1 = id4761out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4763x_1;

    switch((id4763in_sel.getValueAsLong())) {
      case 0l:
        id4763x_1 = id4763in_option0;
        break;
      case 1l:
        id4763x_1 = id4763in_option1;
        break;
      default:
        id4763x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4763out_result[(getCycle()+1)%2] = (id4763x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4764out_output;

  { // Node ID: 4764 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4764in_input = id4763out_result[getCycle()%2];

    id4764out_output = id4764in_input;
  }
  { // Node ID: 4766 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4766in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4766in_option0 = in_vars.id4765out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4766in_option1 = id4764out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4766x_1;

    switch((id4766in_sel.getValueAsLong())) {
      case 0l:
        id4766x_1 = id4766in_option0;
        break;
      case 1l:
        id4766x_1 = id4766in_option1;
        break;
      default:
        id4766x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4766out_result[(getCycle()+1)%2] = (id4766x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4767out_output;

  { // Node ID: 4767 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4767in_input = id4766out_result[getCycle()%2];

    id4767out_output = id4767in_input;
  }
  { // Node ID: 4769 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4769in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4769in_option0 = in_vars.id4768out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4769in_option1 = id4767out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4769x_1;

    switch((id4769in_sel.getValueAsLong())) {
      case 0l:
        id4769x_1 = id4769in_option0;
        break;
      case 1l:
        id4769x_1 = id4769in_option1;
        break;
      default:
        id4769x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4769out_result[(getCycle()+1)%2] = (id4769x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4770out_output;

  { // Node ID: 4770 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4770in_input = id4769out_result[getCycle()%2];

    id4770out_output = id4770in_input;
  }
  { // Node ID: 4772 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4772in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4772in_option0 = in_vars.id4771out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4772in_option1 = id4770out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4772x_1;

    switch((id4772in_sel.getValueAsLong())) {
      case 0l:
        id4772x_1 = id4772in_option0;
        break;
      case 1l:
        id4772x_1 = id4772in_option1;
        break;
      default:
        id4772x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4772out_result[(getCycle()+1)%2] = (id4772x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4773out_output;

  { // Node ID: 4773 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4773in_input = id4772out_result[getCycle()%2];

    id4773out_output = id4773in_input;
  }
  { // Node ID: 4775 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4775in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4775in_option0 = in_vars.id4774out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4775in_option1 = id4773out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4775x_1;

    switch((id4775in_sel.getValueAsLong())) {
      case 0l:
        id4775x_1 = id4775in_option0;
        break;
      case 1l:
        id4775x_1 = id4775in_option1;
        break;
      default:
        id4775x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4775out_result[(getCycle()+1)%2] = (id4775x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4776out_output;

  { // Node ID: 4776 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4776in_input = id4775out_result[getCycle()%2];

    id4776out_output = id4776in_input;
  }
  { // Node ID: 4778 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4778in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4778in_option0 = in_vars.id4777out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4778in_option1 = id4776out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4778x_1;

    switch((id4778in_sel.getValueAsLong())) {
      case 0l:
        id4778x_1 = id4778in_option0;
        break;
      case 1l:
        id4778x_1 = id4778in_option1;
        break;
      default:
        id4778x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4778out_result[(getCycle()+1)%2] = (id4778x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4779out_output;

  { // Node ID: 4779 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4779in_input = id4778out_result[getCycle()%2];

    id4779out_output = id4779in_input;
  }
  { // Node ID: 4781 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4781in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4781in_option0 = in_vars.id4780out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4781in_option1 = id4779out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4781x_1;

    switch((id4781in_sel.getValueAsLong())) {
      case 0l:
        id4781x_1 = id4781in_option0;
        break;
      case 1l:
        id4781x_1 = id4781in_option1;
        break;
      default:
        id4781x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4781out_result[(getCycle()+1)%2] = (id4781x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4782out_output;

  { // Node ID: 4782 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4782in_input = id4781out_result[getCycle()%2];

    id4782out_output = id4782in_input;
  }
  { // Node ID: 4784 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4784in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4784in_option0 = in_vars.id4783out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4784in_option1 = id4782out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4784x_1;

    switch((id4784in_sel.getValueAsLong())) {
      case 0l:
        id4784x_1 = id4784in_option0;
        break;
      case 1l:
        id4784x_1 = id4784in_option1;
        break;
      default:
        id4784x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4784out_result[(getCycle()+1)%2] = (id4784x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4785out_output;

  { // Node ID: 4785 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4785in_input = id4784out_result[getCycle()%2];

    id4785out_output = id4785in_input;
  }
  { // Node ID: 4787 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4787in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4787in_option0 = in_vars.id4786out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4787in_option1 = id4785out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4787x_1;

    switch((id4787in_sel.getValueAsLong())) {
      case 0l:
        id4787x_1 = id4787in_option0;
        break;
      case 1l:
        id4787x_1 = id4787in_option1;
        break;
      default:
        id4787x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4787out_result[(getCycle()+1)%2] = (id4787x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4788out_output;

  { // Node ID: 4788 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4788in_input = id4787out_result[getCycle()%2];

    id4788out_output = id4788in_input;
  }
  { // Node ID: 4790 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4790in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4790in_option0 = in_vars.id4789out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4790in_option1 = id4788out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4790x_1;

    switch((id4790in_sel.getValueAsLong())) {
      case 0l:
        id4790x_1 = id4790in_option0;
        break;
      case 1l:
        id4790x_1 = id4790in_option1;
        break;
      default:
        id4790x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4790out_result[(getCycle()+1)%2] = (id4790x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4791out_output;

  { // Node ID: 4791 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4791in_input = id4790out_result[getCycle()%2];

    id4791out_output = id4791in_input;
  }
  { // Node ID: 4793 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4793in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4793in_option0 = in_vars.id4792out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4793in_option1 = id4791out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4793x_1;

    switch((id4793in_sel.getValueAsLong())) {
      case 0l:
        id4793x_1 = id4793in_option0;
        break;
      case 1l:
        id4793x_1 = id4793in_option1;
        break;
      default:
        id4793x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4793out_result[(getCycle()+1)%2] = (id4793x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4794out_output;

  { // Node ID: 4794 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4794in_input = id4793out_result[getCycle()%2];

    id4794out_output = id4794in_input;
  }
  { // Node ID: 4796 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4796in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4796in_option0 = in_vars.id4795out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4796in_option1 = id4794out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4796x_1;

    switch((id4796in_sel.getValueAsLong())) {
      case 0l:
        id4796x_1 = id4796in_option0;
        break;
      case 1l:
        id4796x_1 = id4796in_option1;
        break;
      default:
        id4796x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4796out_result[(getCycle()+1)%2] = (id4796x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4797out_output;

  { // Node ID: 4797 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4797in_input = id4796out_result[getCycle()%2];

    id4797out_output = id4797in_input;
  }
  { // Node ID: 4799 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4799in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4799in_option0 = in_vars.id4798out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4799in_option1 = id4797out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4799x_1;

    switch((id4799in_sel.getValueAsLong())) {
      case 0l:
        id4799x_1 = id4799in_option0;
        break;
      case 1l:
        id4799x_1 = id4799in_option1;
        break;
      default:
        id4799x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4799out_result[(getCycle()+1)%2] = (id4799x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4800out_output;

  { // Node ID: 4800 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4800in_input = id4799out_result[getCycle()%2];

    id4800out_output = id4800in_input;
  }
  { // Node ID: 4802 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4802in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4802in_option0 = in_vars.id4801out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4802in_option1 = id4800out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4802x_1;

    switch((id4802in_sel.getValueAsLong())) {
      case 0l:
        id4802x_1 = id4802in_option0;
        break;
      case 1l:
        id4802x_1 = id4802in_option1;
        break;
      default:
        id4802x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4802out_result[(getCycle()+1)%2] = (id4802x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4803out_output;

  { // Node ID: 4803 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4803in_input = id4802out_result[getCycle()%2];

    id4803out_output = id4803in_input;
  }
  { // Node ID: 4805 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4805in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4805in_option0 = in_vars.id4804out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4805in_option1 = id4803out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4805x_1;

    switch((id4805in_sel.getValueAsLong())) {
      case 0l:
        id4805x_1 = id4805in_option0;
        break;
      case 1l:
        id4805x_1 = id4805in_option1;
        break;
      default:
        id4805x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4805out_result[(getCycle()+1)%2] = (id4805x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4806out_output;

  { // Node ID: 4806 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4806in_input = id4805out_result[getCycle()%2];

    id4806out_output = id4806in_input;
  }
  { // Node ID: 4808 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4808in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4808in_option0 = in_vars.id4807out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4808in_option1 = id4806out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4808x_1;

    switch((id4808in_sel.getValueAsLong())) {
      case 0l:
        id4808x_1 = id4808in_option0;
        break;
      case 1l:
        id4808x_1 = id4808in_option1;
        break;
      default:
        id4808x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4808out_result[(getCycle()+1)%2] = (id4808x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4809out_output;

  { // Node ID: 4809 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4809in_input = id4808out_result[getCycle()%2];

    id4809out_output = id4809in_input;
  }
  { // Node ID: 4811 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4811in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4811in_option0 = in_vars.id4810out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4811in_option1 = id4809out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4811x_1;

    switch((id4811in_sel.getValueAsLong())) {
      case 0l:
        id4811x_1 = id4811in_option0;
        break;
      case 1l:
        id4811x_1 = id4811in_option1;
        break;
      default:
        id4811x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4811out_result[(getCycle()+1)%2] = (id4811x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4812out_output;

  { // Node ID: 4812 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4812in_input = id4811out_result[getCycle()%2];

    id4812out_output = id4812in_input;
  }
  { // Node ID: 4814 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4814in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4814in_option0 = in_vars.id4813out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4814in_option1 = id4812out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4814x_1;

    switch((id4814in_sel.getValueAsLong())) {
      case 0l:
        id4814x_1 = id4814in_option0;
        break;
      case 1l:
        id4814x_1 = id4814in_option1;
        break;
      default:
        id4814x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4814out_result[(getCycle()+1)%2] = (id4814x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4815out_output;

  { // Node ID: 4815 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4815in_input = id4814out_result[getCycle()%2];

    id4815out_output = id4815in_input;
  }
  { // Node ID: 4817 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4817in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4817in_option0 = in_vars.id4816out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4817in_option1 = id4815out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4817x_1;

    switch((id4817in_sel.getValueAsLong())) {
      case 0l:
        id4817x_1 = id4817in_option0;
        break;
      case 1l:
        id4817x_1 = id4817in_option1;
        break;
      default:
        id4817x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4817out_result[(getCycle()+1)%2] = (id4817x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4818out_output;

  { // Node ID: 4818 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4818in_input = id4817out_result[getCycle()%2];

    id4818out_output = id4818in_input;
  }
  { // Node ID: 4820 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4820in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4820in_option0 = in_vars.id4819out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4820in_option1 = id4818out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4820x_1;

    switch((id4820in_sel.getValueAsLong())) {
      case 0l:
        id4820x_1 = id4820in_option0;
        break;
      case 1l:
        id4820x_1 = id4820in_option1;
        break;
      default:
        id4820x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4820out_result[(getCycle()+1)%2] = (id4820x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4821out_output;

  { // Node ID: 4821 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4821in_input = id4820out_result[getCycle()%2];

    id4821out_output = id4821in_input;
  }
  { // Node ID: 4823 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4823in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4823in_option0 = in_vars.id4822out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4823in_option1 = id4821out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4823x_1;

    switch((id4823in_sel.getValueAsLong())) {
      case 0l:
        id4823x_1 = id4823in_option0;
        break;
      case 1l:
        id4823x_1 = id4823in_option1;
        break;
      default:
        id4823x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4823out_result[(getCycle()+1)%2] = (id4823x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4824out_output;

  { // Node ID: 4824 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4824in_input = id4823out_result[getCycle()%2];

    id4824out_output = id4824in_input;
  }
  { // Node ID: 4826 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4826in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4826in_option0 = in_vars.id4825out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4826in_option1 = id4824out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4826x_1;

    switch((id4826in_sel.getValueAsLong())) {
      case 0l:
        id4826x_1 = id4826in_option0;
        break;
      case 1l:
        id4826x_1 = id4826in_option1;
        break;
      default:
        id4826x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4826out_result[(getCycle()+1)%2] = (id4826x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4827out_output;

  { // Node ID: 4827 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4827in_input = id4826out_result[getCycle()%2];

    id4827out_output = id4827in_input;
  }
  { // Node ID: 4829 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4829in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4829in_option0 = in_vars.id4828out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4829in_option1 = id4827out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4829x_1;

    switch((id4829in_sel.getValueAsLong())) {
      case 0l:
        id4829x_1 = id4829in_option0;
        break;
      case 1l:
        id4829x_1 = id4829in_option1;
        break;
      default:
        id4829x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4829out_result[(getCycle()+1)%2] = (id4829x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4830out_output;

  { // Node ID: 4830 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4830in_input = id4829out_result[getCycle()%2];

    id4830out_output = id4830in_input;
  }
  { // Node ID: 4832 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4832in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4832in_option0 = in_vars.id4831out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4832in_option1 = id4830out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4832x_1;

    switch((id4832in_sel.getValueAsLong())) {
      case 0l:
        id4832x_1 = id4832in_option0;
        break;
      case 1l:
        id4832x_1 = id4832in_option1;
        break;
      default:
        id4832x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4832out_result[(getCycle()+1)%2] = (id4832x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4833out_output;

  { // Node ID: 4833 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4833in_input = id4832out_result[getCycle()%2];

    id4833out_output = id4833in_input;
  }
  { // Node ID: 4835 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4835in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4835in_option0 = in_vars.id4834out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4835in_option1 = id4833out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4835x_1;

    switch((id4835in_sel.getValueAsLong())) {
      case 0l:
        id4835x_1 = id4835in_option0;
        break;
      case 1l:
        id4835x_1 = id4835in_option1;
        break;
      default:
        id4835x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4835out_result[(getCycle()+1)%2] = (id4835x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4836out_output;

  { // Node ID: 4836 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4836in_input = id4835out_result[getCycle()%2];

    id4836out_output = id4836in_input;
  }
  { // Node ID: 4838 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4838in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4838in_option0 = in_vars.id4837out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4838in_option1 = id4836out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4838x_1;

    switch((id4838in_sel.getValueAsLong())) {
      case 0l:
        id4838x_1 = id4838in_option0;
        break;
      case 1l:
        id4838x_1 = id4838in_option1;
        break;
      default:
        id4838x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4838out_result[(getCycle()+1)%2] = (id4838x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4839out_output;

  { // Node ID: 4839 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4839in_input = id4838out_result[getCycle()%2];

    id4839out_output = id4839in_input;
  }
  { // Node ID: 4841 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4841in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4841in_option0 = in_vars.id4840out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4841in_option1 = id4839out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4841x_1;

    switch((id4841in_sel.getValueAsLong())) {
      case 0l:
        id4841x_1 = id4841in_option0;
        break;
      case 1l:
        id4841x_1 = id4841in_option1;
        break;
      default:
        id4841x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4841out_result[(getCycle()+1)%2] = (id4841x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4842out_output;

  { // Node ID: 4842 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4842in_input = id4841out_result[getCycle()%2];

    id4842out_output = id4842in_input;
  }
  { // Node ID: 4844 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4844in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4844in_option0 = in_vars.id4843out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4844in_option1 = id4842out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4844x_1;

    switch((id4844in_sel.getValueAsLong())) {
      case 0l:
        id4844x_1 = id4844in_option0;
        break;
      case 1l:
        id4844x_1 = id4844in_option1;
        break;
      default:
        id4844x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4844out_result[(getCycle()+1)%2] = (id4844x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4845out_output;

  { // Node ID: 4845 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4845in_input = id4844out_result[getCycle()%2];

    id4845out_output = id4845in_input;
  }
  { // Node ID: 4847 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4847in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4847in_option0 = in_vars.id4846out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4847in_option1 = id4845out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4847x_1;

    switch((id4847in_sel.getValueAsLong())) {
      case 0l:
        id4847x_1 = id4847in_option0;
        break;
      case 1l:
        id4847x_1 = id4847in_option1;
        break;
      default:
        id4847x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4847out_result[(getCycle()+1)%2] = (id4847x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4848out_output;

  { // Node ID: 4848 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4848in_input = id4847out_result[getCycle()%2];

    id4848out_output = id4848in_input;
  }
  { // Node ID: 4850 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4850in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4850in_option0 = in_vars.id4849out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4850in_option1 = id4848out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4850x_1;

    switch((id4850in_sel.getValueAsLong())) {
      case 0l:
        id4850x_1 = id4850in_option0;
        break;
      case 1l:
        id4850x_1 = id4850in_option1;
        break;
      default:
        id4850x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4850out_result[(getCycle()+1)%2] = (id4850x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4851out_output;

  { // Node ID: 4851 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4851in_input = id4850out_result[getCycle()%2];

    id4851out_output = id4851in_input;
  }
  { // Node ID: 4853 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4853in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4853in_option0 = in_vars.id4852out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4853in_option1 = id4851out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4853x_1;

    switch((id4853in_sel.getValueAsLong())) {
      case 0l:
        id4853x_1 = id4853in_option0;
        break;
      case 1l:
        id4853x_1 = id4853in_option1;
        break;
      default:
        id4853x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4853out_result[(getCycle()+1)%2] = (id4853x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4854out_output;

  { // Node ID: 4854 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4854in_input = id4853out_result[getCycle()%2];

    id4854out_output = id4854in_input;
  }
  { // Node ID: 4856 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4856in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4856in_option0 = in_vars.id4855out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4856in_option1 = id4854out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4856x_1;

    switch((id4856in_sel.getValueAsLong())) {
      case 0l:
        id4856x_1 = id4856in_option0;
        break;
      case 1l:
        id4856x_1 = id4856in_option1;
        break;
      default:
        id4856x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4856out_result[(getCycle()+1)%2] = (id4856x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4857out_output;

  { // Node ID: 4857 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4857in_input = id4856out_result[getCycle()%2];

    id4857out_output = id4857in_input;
  }
  { // Node ID: 4859 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4859in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4859in_option0 = in_vars.id4858out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4859in_option1 = id4857out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4859x_1;

    switch((id4859in_sel.getValueAsLong())) {
      case 0l:
        id4859x_1 = id4859in_option0;
        break;
      case 1l:
        id4859x_1 = id4859in_option1;
        break;
      default:
        id4859x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4859out_result[(getCycle()+1)%2] = (id4859x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4860out_output;

  { // Node ID: 4860 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4860in_input = id4859out_result[getCycle()%2];

    id4860out_output = id4860in_input;
  }
  { // Node ID: 4862 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4862in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4862in_option0 = in_vars.id4861out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4862in_option1 = id4860out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4862x_1;

    switch((id4862in_sel.getValueAsLong())) {
      case 0l:
        id4862x_1 = id4862in_option0;
        break;
      case 1l:
        id4862x_1 = id4862in_option1;
        break;
      default:
        id4862x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4862out_result[(getCycle()+1)%2] = (id4862x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4863out_output;

  { // Node ID: 4863 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4863in_input = id4862out_result[getCycle()%2];

    id4863out_output = id4863in_input;
  }
  { // Node ID: 4865 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4865in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4865in_option0 = in_vars.id4864out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4865in_option1 = id4863out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4865x_1;

    switch((id4865in_sel.getValueAsLong())) {
      case 0l:
        id4865x_1 = id4865in_option0;
        break;
      case 1l:
        id4865x_1 = id4865in_option1;
        break;
      default:
        id4865x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4865out_result[(getCycle()+1)%2] = (id4865x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4866out_output;

  { // Node ID: 4866 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4866in_input = id4865out_result[getCycle()%2];

    id4866out_output = id4866in_input;
  }
  { // Node ID: 4868 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4868in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4868in_option0 = in_vars.id4867out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4868in_option1 = id4866out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4868x_1;

    switch((id4868in_sel.getValueAsLong())) {
      case 0l:
        id4868x_1 = id4868in_option0;
        break;
      case 1l:
        id4868x_1 = id4868in_option1;
        break;
      default:
        id4868x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4868out_result[(getCycle()+1)%2] = (id4868x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4869out_output;

  { // Node ID: 4869 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4869in_input = id4868out_result[getCycle()%2];

    id4869out_output = id4869in_input;
  }
  { // Node ID: 4871 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4871in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4871in_option0 = in_vars.id4870out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4871in_option1 = id4869out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4871x_1;

    switch((id4871in_sel.getValueAsLong())) {
      case 0l:
        id4871x_1 = id4871in_option0;
        break;
      case 1l:
        id4871x_1 = id4871in_option1;
        break;
      default:
        id4871x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4871out_result[(getCycle()+1)%2] = (id4871x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4872out_output;

  { // Node ID: 4872 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4872in_input = id4871out_result[getCycle()%2];

    id4872out_output = id4872in_input;
  }
  { // Node ID: 4874 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4874in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4874in_option0 = in_vars.id4873out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4874in_option1 = id4872out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4874x_1;

    switch((id4874in_sel.getValueAsLong())) {
      case 0l:
        id4874x_1 = id4874in_option0;
        break;
      case 1l:
        id4874x_1 = id4874in_option1;
        break;
      default:
        id4874x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4874out_result[(getCycle()+1)%2] = (id4874x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4875out_output;

  { // Node ID: 4875 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4875in_input = id4874out_result[getCycle()%2];

    id4875out_output = id4875in_input;
  }
  { // Node ID: 4877 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4877in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4877in_option0 = in_vars.id4876out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4877in_option1 = id4875out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4877x_1;

    switch((id4877in_sel.getValueAsLong())) {
      case 0l:
        id4877x_1 = id4877in_option0;
        break;
      case 1l:
        id4877x_1 = id4877in_option1;
        break;
      default:
        id4877x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4877out_result[(getCycle()+1)%2] = (id4877x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4878out_output;

  { // Node ID: 4878 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4878in_input = id4877out_result[getCycle()%2];

    id4878out_output = id4878in_input;
  }
  { // Node ID: 4880 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4880in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4880in_option0 = in_vars.id4879out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4880in_option1 = id4878out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4880x_1;

    switch((id4880in_sel.getValueAsLong())) {
      case 0l:
        id4880x_1 = id4880in_option0;
        break;
      case 1l:
        id4880x_1 = id4880in_option1;
        break;
      default:
        id4880x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4880out_result[(getCycle()+1)%2] = (id4880x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4881out_output;

  { // Node ID: 4881 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4881in_input = id4880out_result[getCycle()%2];

    id4881out_output = id4881in_input;
  }
  { // Node ID: 4883 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4883in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4883in_option0 = in_vars.id4882out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4883in_option1 = id4881out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4883x_1;

    switch((id4883in_sel.getValueAsLong())) {
      case 0l:
        id4883x_1 = id4883in_option0;
        break;
      case 1l:
        id4883x_1 = id4883in_option1;
        break;
      default:
        id4883x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4883out_result[(getCycle()+1)%2] = (id4883x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4884out_output;

  { // Node ID: 4884 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4884in_input = id4883out_result[getCycle()%2];

    id4884out_output = id4884in_input;
  }
  { // Node ID: 4886 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4886in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4886in_option0 = in_vars.id4885out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4886in_option1 = id4884out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4886x_1;

    switch((id4886in_sel.getValueAsLong())) {
      case 0l:
        id4886x_1 = id4886in_option0;
        break;
      case 1l:
        id4886x_1 = id4886in_option1;
        break;
      default:
        id4886x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4886out_result[(getCycle()+1)%2] = (id4886x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4887out_output;

  { // Node ID: 4887 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4887in_input = id4886out_result[getCycle()%2];

    id4887out_output = id4887in_input;
  }
  { // Node ID: 4889 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4889in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4889in_option0 = in_vars.id4888out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4889in_option1 = id4887out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4889x_1;

    switch((id4889in_sel.getValueAsLong())) {
      case 0l:
        id4889x_1 = id4889in_option0;
        break;
      case 1l:
        id4889x_1 = id4889in_option1;
        break;
      default:
        id4889x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4889out_result[(getCycle()+1)%2] = (id4889x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4890out_output;

  { // Node ID: 4890 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4890in_input = id4889out_result[getCycle()%2];

    id4890out_output = id4890in_input;
  }
  { // Node ID: 4892 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4892in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4892in_option0 = in_vars.id4891out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4892in_option1 = id4890out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4892x_1;

    switch((id4892in_sel.getValueAsLong())) {
      case 0l:
        id4892x_1 = id4892in_option0;
        break;
      case 1l:
        id4892x_1 = id4892in_option1;
        break;
      default:
        id4892x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4892out_result[(getCycle()+1)%2] = (id4892x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4893out_output;

  { // Node ID: 4893 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4893in_input = id4892out_result[getCycle()%2];

    id4893out_output = id4893in_input;
  }
  { // Node ID: 4895 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4895in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4895in_option0 = in_vars.id4894out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4895in_option1 = id4893out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4895x_1;

    switch((id4895in_sel.getValueAsLong())) {
      case 0l:
        id4895x_1 = id4895in_option0;
        break;
      case 1l:
        id4895x_1 = id4895in_option1;
        break;
      default:
        id4895x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4895out_result[(getCycle()+1)%2] = (id4895x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4896out_output;

  { // Node ID: 4896 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4896in_input = id4895out_result[getCycle()%2];

    id4896out_output = id4896in_input;
  }
  { // Node ID: 4898 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4898in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4898in_option0 = in_vars.id4897out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4898in_option1 = id4896out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4898x_1;

    switch((id4898in_sel.getValueAsLong())) {
      case 0l:
        id4898x_1 = id4898in_option0;
        break;
      case 1l:
        id4898x_1 = id4898in_option1;
        break;
      default:
        id4898x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4898out_result[(getCycle()+1)%2] = (id4898x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4899out_output;

  { // Node ID: 4899 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4899in_input = id4898out_result[getCycle()%2];

    id4899out_output = id4899in_input;
  }
  { // Node ID: 4901 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4901in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4901in_option0 = in_vars.id4900out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4901in_option1 = id4899out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4901x_1;

    switch((id4901in_sel.getValueAsLong())) {
      case 0l:
        id4901x_1 = id4901in_option0;
        break;
      case 1l:
        id4901x_1 = id4901in_option1;
        break;
      default:
        id4901x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4901out_result[(getCycle()+1)%2] = (id4901x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4902out_output;

  { // Node ID: 4902 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4902in_input = id4901out_result[getCycle()%2];

    id4902out_output = id4902in_input;
  }
  { // Node ID: 4904 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4904in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4904in_option0 = in_vars.id4903out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4904in_option1 = id4902out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4904x_1;

    switch((id4904in_sel.getValueAsLong())) {
      case 0l:
        id4904x_1 = id4904in_option0;
        break;
      case 1l:
        id4904x_1 = id4904in_option1;
        break;
      default:
        id4904x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4904out_result[(getCycle()+1)%2] = (id4904x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4905out_output;

  { // Node ID: 4905 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4905in_input = id4904out_result[getCycle()%2];

    id4905out_output = id4905in_input;
  }
  { // Node ID: 4907 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4907in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4907in_option0 = in_vars.id4906out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4907in_option1 = id4905out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4907x_1;

    switch((id4907in_sel.getValueAsLong())) {
      case 0l:
        id4907x_1 = id4907in_option0;
        break;
      case 1l:
        id4907x_1 = id4907in_option1;
        break;
      default:
        id4907x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4907out_result[(getCycle()+1)%2] = (id4907x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4908out_output;

  { // Node ID: 4908 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4908in_input = id4907out_result[getCycle()%2];

    id4908out_output = id4908in_input;
  }
  { // Node ID: 4910 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4910in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4910in_option0 = in_vars.id4909out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4910in_option1 = id4908out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4910x_1;

    switch((id4910in_sel.getValueAsLong())) {
      case 0l:
        id4910x_1 = id4910in_option0;
        break;
      case 1l:
        id4910x_1 = id4910in_option1;
        break;
      default:
        id4910x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4910out_result[(getCycle()+1)%2] = (id4910x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4911out_output;

  { // Node ID: 4911 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4911in_input = id4910out_result[getCycle()%2];

    id4911out_output = id4911in_input;
  }
  { // Node ID: 4913 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4913in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4913in_option0 = in_vars.id4912out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4913in_option1 = id4911out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4913x_1;

    switch((id4913in_sel.getValueAsLong())) {
      case 0l:
        id4913x_1 = id4913in_option0;
        break;
      case 1l:
        id4913x_1 = id4913in_option1;
        break;
      default:
        id4913x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4913out_result[(getCycle()+1)%2] = (id4913x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4914out_output;

  { // Node ID: 4914 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4914in_input = id4913out_result[getCycle()%2];

    id4914out_output = id4914in_input;
  }
  { // Node ID: 4916 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4916in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4916in_option0 = in_vars.id4915out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4916in_option1 = id4914out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4916x_1;

    switch((id4916in_sel.getValueAsLong())) {
      case 0l:
        id4916x_1 = id4916in_option0;
        break;
      case 1l:
        id4916x_1 = id4916in_option1;
        break;
      default:
        id4916x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4916out_result[(getCycle()+1)%2] = (id4916x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4917out_output;

  { // Node ID: 4917 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4917in_input = id4916out_result[getCycle()%2];

    id4917out_output = id4917in_input;
  }
  { // Node ID: 4919 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4919in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4919in_option0 = in_vars.id4918out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4919in_option1 = id4917out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4919x_1;

    switch((id4919in_sel.getValueAsLong())) {
      case 0l:
        id4919x_1 = id4919in_option0;
        break;
      case 1l:
        id4919x_1 = id4919in_option1;
        break;
      default:
        id4919x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4919out_result[(getCycle()+1)%2] = (id4919x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4920out_output;

  { // Node ID: 4920 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4920in_input = id4919out_result[getCycle()%2];

    id4920out_output = id4920in_input;
  }
  { // Node ID: 4922 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4922in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4922in_option0 = in_vars.id4921out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4922in_option1 = id4920out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4922x_1;

    switch((id4922in_sel.getValueAsLong())) {
      case 0l:
        id4922x_1 = id4922in_option0;
        break;
      case 1l:
        id4922x_1 = id4922in_option1;
        break;
      default:
        id4922x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4922out_result[(getCycle()+1)%2] = (id4922x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4923out_output;

  { // Node ID: 4923 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4923in_input = id4922out_result[getCycle()%2];

    id4923out_output = id4923in_input;
  }
  { // Node ID: 4925 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4925in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4925in_option0 = in_vars.id4924out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4925in_option1 = id4923out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4925x_1;

    switch((id4925in_sel.getValueAsLong())) {
      case 0l:
        id4925x_1 = id4925in_option0;
        break;
      case 1l:
        id4925x_1 = id4925in_option1;
        break;
      default:
        id4925x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4925out_result[(getCycle()+1)%2] = (id4925x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4926out_output;

  { // Node ID: 4926 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4926in_input = id4925out_result[getCycle()%2];

    id4926out_output = id4926in_input;
  }
  { // Node ID: 4928 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4928in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4928in_option0 = in_vars.id4927out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4928in_option1 = id4926out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4928x_1;

    switch((id4928in_sel.getValueAsLong())) {
      case 0l:
        id4928x_1 = id4928in_option0;
        break;
      case 1l:
        id4928x_1 = id4928in_option1;
        break;
      default:
        id4928x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4928out_result[(getCycle()+1)%2] = (id4928x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4929out_output;

  { // Node ID: 4929 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4929in_input = id4928out_result[getCycle()%2];

    id4929out_output = id4929in_input;
  }
  { // Node ID: 4931 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4931in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4931in_option0 = in_vars.id4930out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4931in_option1 = id4929out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4931x_1;

    switch((id4931in_sel.getValueAsLong())) {
      case 0l:
        id4931x_1 = id4931in_option0;
        break;
      case 1l:
        id4931x_1 = id4931in_option1;
        break;
      default:
        id4931x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4931out_result[(getCycle()+1)%2] = (id4931x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4932out_output;

  { // Node ID: 4932 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4932in_input = id4931out_result[getCycle()%2];

    id4932out_output = id4932in_input;
  }
  { // Node ID: 4934 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4934in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4934in_option0 = in_vars.id4933out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4934in_option1 = id4932out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4934x_1;

    switch((id4934in_sel.getValueAsLong())) {
      case 0l:
        id4934x_1 = id4934in_option0;
        break;
      case 1l:
        id4934x_1 = id4934in_option1;
        break;
      default:
        id4934x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4934out_result[(getCycle()+1)%2] = (id4934x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4935out_output;

  { // Node ID: 4935 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4935in_input = id4934out_result[getCycle()%2];

    id4935out_output = id4935in_input;
  }
  { // Node ID: 4937 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4937in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4937in_option0 = in_vars.id4936out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4937in_option1 = id4935out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4937x_1;

    switch((id4937in_sel.getValueAsLong())) {
      case 0l:
        id4937x_1 = id4937in_option0;
        break;
      case 1l:
        id4937x_1 = id4937in_option1;
        break;
      default:
        id4937x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4937out_result[(getCycle()+1)%2] = (id4937x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4938out_output;

  { // Node ID: 4938 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4938in_input = id4937out_result[getCycle()%2];

    id4938out_output = id4938in_input;
  }
  { // Node ID: 4940 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4940in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4940in_option0 = in_vars.id4939out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4940in_option1 = id4938out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4940x_1;

    switch((id4940in_sel.getValueAsLong())) {
      case 0l:
        id4940x_1 = id4940in_option0;
        break;
      case 1l:
        id4940x_1 = id4940in_option1;
        break;
      default:
        id4940x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4940out_result[(getCycle()+1)%2] = (id4940x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4941out_output;

  { // Node ID: 4941 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4941in_input = id4940out_result[getCycle()%2];

    id4941out_output = id4941in_input;
  }
  { // Node ID: 4943 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4943in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4943in_option0 = in_vars.id4942out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4943in_option1 = id4941out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4943x_1;

    switch((id4943in_sel.getValueAsLong())) {
      case 0l:
        id4943x_1 = id4943in_option0;
        break;
      case 1l:
        id4943x_1 = id4943in_option1;
        break;
      default:
        id4943x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4943out_result[(getCycle()+1)%2] = (id4943x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4944out_output;

  { // Node ID: 4944 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4944in_input = id4943out_result[getCycle()%2];

    id4944out_output = id4944in_input;
  }
  { // Node ID: 4946 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4946in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4946in_option0 = in_vars.id4945out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4946in_option1 = id4944out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4946x_1;

    switch((id4946in_sel.getValueAsLong())) {
      case 0l:
        id4946x_1 = id4946in_option0;
        break;
      case 1l:
        id4946x_1 = id4946in_option1;
        break;
      default:
        id4946x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4946out_result[(getCycle()+1)%2] = (id4946x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4947out_output;

  { // Node ID: 4947 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4947in_input = id4946out_result[getCycle()%2];

    id4947out_output = id4947in_input;
  }
  { // Node ID: 4949 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4949in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4949in_option0 = in_vars.id4948out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4949in_option1 = id4947out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4949x_1;

    switch((id4949in_sel.getValueAsLong())) {
      case 0l:
        id4949x_1 = id4949in_option0;
        break;
      case 1l:
        id4949x_1 = id4949in_option1;
        break;
      default:
        id4949x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4949out_result[(getCycle()+1)%2] = (id4949x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4950out_output;

  { // Node ID: 4950 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4950in_input = id4949out_result[getCycle()%2];

    id4950out_output = id4950in_input;
  }
  { // Node ID: 4952 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4952in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4952in_option0 = in_vars.id4951out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4952in_option1 = id4950out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4952x_1;

    switch((id4952in_sel.getValueAsLong())) {
      case 0l:
        id4952x_1 = id4952in_option0;
        break;
      case 1l:
        id4952x_1 = id4952in_option1;
        break;
      default:
        id4952x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4952out_result[(getCycle()+1)%2] = (id4952x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4953out_output;

  { // Node ID: 4953 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4953in_input = id4952out_result[getCycle()%2];

    id4953out_output = id4953in_input;
  }
  { // Node ID: 4955 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4955in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4955in_option0 = in_vars.id4954out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4955in_option1 = id4953out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4955x_1;

    switch((id4955in_sel.getValueAsLong())) {
      case 0l:
        id4955x_1 = id4955in_option0;
        break;
      case 1l:
        id4955x_1 = id4955in_option1;
        break;
      default:
        id4955x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4955out_result[(getCycle()+1)%2] = (id4955x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4956out_output;

  { // Node ID: 4956 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4956in_input = id4955out_result[getCycle()%2];

    id4956out_output = id4956in_input;
  }
  { // Node ID: 4958 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4958in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4958in_option0 = in_vars.id4957out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4958in_option1 = id4956out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4958x_1;

    switch((id4958in_sel.getValueAsLong())) {
      case 0l:
        id4958x_1 = id4958in_option0;
        break;
      case 1l:
        id4958x_1 = id4958in_option1;
        break;
      default:
        id4958x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4958out_result[(getCycle()+1)%2] = (id4958x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4959out_output;

  { // Node ID: 4959 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4959in_input = id4958out_result[getCycle()%2];

    id4959out_output = id4959in_input;
  }
  { // Node ID: 4961 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4961in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4961in_option0 = in_vars.id4960out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4961in_option1 = id4959out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4961x_1;

    switch((id4961in_sel.getValueAsLong())) {
      case 0l:
        id4961x_1 = id4961in_option0;
        break;
      case 1l:
        id4961x_1 = id4961in_option1;
        break;
      default:
        id4961x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4961out_result[(getCycle()+1)%2] = (id4961x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4962out_output;

  { // Node ID: 4962 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4962in_input = id4961out_result[getCycle()%2];

    id4962out_output = id4962in_input;
  }
  { // Node ID: 4964 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4964in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4964in_option0 = in_vars.id4963out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4964in_option1 = id4962out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4964x_1;

    switch((id4964in_sel.getValueAsLong())) {
      case 0l:
        id4964x_1 = id4964in_option0;
        break;
      case 1l:
        id4964x_1 = id4964in_option1;
        break;
      default:
        id4964x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4964out_result[(getCycle()+1)%2] = (id4964x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4965out_output;

  { // Node ID: 4965 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4965in_input = id4964out_result[getCycle()%2];

    id4965out_output = id4965in_input;
  }
  { // Node ID: 4967 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4967in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4967in_option0 = in_vars.id4966out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4967in_option1 = id4965out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4967x_1;

    switch((id4967in_sel.getValueAsLong())) {
      case 0l:
        id4967x_1 = id4967in_option0;
        break;
      case 1l:
        id4967x_1 = id4967in_option1;
        break;
      default:
        id4967x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4967out_result[(getCycle()+1)%2] = (id4967x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4968out_output;

  { // Node ID: 4968 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4968in_input = id4967out_result[getCycle()%2];

    id4968out_output = id4968in_input;
  }
  { // Node ID: 4970 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4970in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4970in_option0 = in_vars.id4969out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4970in_option1 = id4968out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4970x_1;

    switch((id4970in_sel.getValueAsLong())) {
      case 0l:
        id4970x_1 = id4970in_option0;
        break;
      case 1l:
        id4970x_1 = id4970in_option1;
        break;
      default:
        id4970x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4970out_result[(getCycle()+1)%2] = (id4970x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4971out_output;

  { // Node ID: 4971 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4971in_input = id4970out_result[getCycle()%2];

    id4971out_output = id4971in_input;
  }
  { // Node ID: 4973 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4973in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4973in_option0 = in_vars.id4972out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4973in_option1 = id4971out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4973x_1;

    switch((id4973in_sel.getValueAsLong())) {
      case 0l:
        id4973x_1 = id4973in_option0;
        break;
      case 1l:
        id4973x_1 = id4973in_option1;
        break;
      default:
        id4973x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4973out_result[(getCycle()+1)%2] = (id4973x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4974out_output;

  { // Node ID: 4974 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4974in_input = id4973out_result[getCycle()%2];

    id4974out_output = id4974in_input;
  }
  { // Node ID: 4976 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4976in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4976in_option0 = in_vars.id4975out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4976in_option1 = id4974out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4976x_1;

    switch((id4976in_sel.getValueAsLong())) {
      case 0l:
        id4976x_1 = id4976in_option0;
        break;
      case 1l:
        id4976x_1 = id4976in_option1;
        break;
      default:
        id4976x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4976out_result[(getCycle()+1)%2] = (id4976x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4977out_output;

  { // Node ID: 4977 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4977in_input = id4976out_result[getCycle()%2];

    id4977out_output = id4977in_input;
  }
  { // Node ID: 4979 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4979in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4979in_option0 = in_vars.id4978out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4979in_option1 = id4977out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4979x_1;

    switch((id4979in_sel.getValueAsLong())) {
      case 0l:
        id4979x_1 = id4979in_option0;
        break;
      case 1l:
        id4979x_1 = id4979in_option1;
        break;
      default:
        id4979x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4979out_result[(getCycle()+1)%2] = (id4979x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4980out_output;

  { // Node ID: 4980 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4980in_input = id4979out_result[getCycle()%2];

    id4980out_output = id4980in_input;
  }
  { // Node ID: 4982 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4982in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4982in_option0 = in_vars.id4981out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4982in_option1 = id4980out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4982x_1;

    switch((id4982in_sel.getValueAsLong())) {
      case 0l:
        id4982x_1 = id4982in_option0;
        break;
      case 1l:
        id4982x_1 = id4982in_option1;
        break;
      default:
        id4982x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4982out_result[(getCycle()+1)%2] = (id4982x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4983out_output;

  { // Node ID: 4983 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4983in_input = id4982out_result[getCycle()%2];

    id4983out_output = id4983in_input;
  }
  { // Node ID: 4985 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4985in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4985in_option0 = in_vars.id4984out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4985in_option1 = id4983out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4985x_1;

    switch((id4985in_sel.getValueAsLong())) {
      case 0l:
        id4985x_1 = id4985in_option0;
        break;
      case 1l:
        id4985x_1 = id4985in_option1;
        break;
      default:
        id4985x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4985out_result[(getCycle()+1)%2] = (id4985x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4986out_output;

  { // Node ID: 4986 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4986in_input = id4985out_result[getCycle()%2];

    id4986out_output = id4986in_input;
  }
  { // Node ID: 4988 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4988in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4988in_option0 = in_vars.id4987out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4988in_option1 = id4986out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4988x_1;

    switch((id4988in_sel.getValueAsLong())) {
      case 0l:
        id4988x_1 = id4988in_option0;
        break;
      case 1l:
        id4988x_1 = id4988in_option1;
        break;
      default:
        id4988x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4988out_result[(getCycle()+1)%2] = (id4988x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4989out_output;

  { // Node ID: 4989 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4989in_input = id4988out_result[getCycle()%2];

    id4989out_output = id4989in_input;
  }
  { // Node ID: 4991 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4991in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4991in_option0 = in_vars.id4990out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4991in_option1 = id4989out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4991x_1;

    switch((id4991in_sel.getValueAsLong())) {
      case 0l:
        id4991x_1 = id4991in_option0;
        break;
      case 1l:
        id4991x_1 = id4991in_option1;
        break;
      default:
        id4991x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4991out_result[(getCycle()+1)%2] = (id4991x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4992out_output;

  { // Node ID: 4992 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4992in_input = id4991out_result[getCycle()%2];

    id4992out_output = id4992in_input;
  }
  { // Node ID: 4994 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4994in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4994in_option0 = in_vars.id4993out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4994in_option1 = id4992out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4994x_1;

    switch((id4994in_sel.getValueAsLong())) {
      case 0l:
        id4994x_1 = id4994in_option0;
        break;
      case 1l:
        id4994x_1 = id4994in_option1;
        break;
      default:
        id4994x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4994out_result[(getCycle()+1)%2] = (id4994x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4995out_output;

  { // Node ID: 4995 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4995in_input = id4994out_result[getCycle()%2];

    id4995out_output = id4995in_input;
  }
  { // Node ID: 4997 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id4997in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4997in_option0 = in_vars.id4996out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4997in_option1 = id4995out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4997x_1;

    switch((id4997in_sel.getValueAsLong())) {
      case 0l:
        id4997x_1 = id4997in_option0;
        break;
      case 1l:
        id4997x_1 = id4997in_option1;
        break;
      default:
        id4997x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id4997out_result[(getCycle()+1)%2] = (id4997x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id4998out_output;

  { // Node ID: 4998 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id4998in_input = id4997out_result[getCycle()%2];

    id4998out_output = id4998in_input;
  }
  { // Node ID: 5000 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5000in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5000in_option0 = in_vars.id4999out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5000in_option1 = id4998out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5000x_1;

    switch((id5000in_sel.getValueAsLong())) {
      case 0l:
        id5000x_1 = id5000in_option0;
        break;
      case 1l:
        id5000x_1 = id5000in_option1;
        break;
      default:
        id5000x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5000out_result[(getCycle()+1)%2] = (id5000x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5001out_output;

  { // Node ID: 5001 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5001in_input = id5000out_result[getCycle()%2];

    id5001out_output = id5001in_input;
  }
  { // Node ID: 5003 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5003in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5003in_option0 = in_vars.id5002out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5003in_option1 = id5001out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5003x_1;

    switch((id5003in_sel.getValueAsLong())) {
      case 0l:
        id5003x_1 = id5003in_option0;
        break;
      case 1l:
        id5003x_1 = id5003in_option1;
        break;
      default:
        id5003x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5003out_result[(getCycle()+1)%2] = (id5003x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5004out_output;

  { // Node ID: 5004 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5004in_input = id5003out_result[getCycle()%2];

    id5004out_output = id5004in_input;
  }
  { // Node ID: 5006 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5006in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5006in_option0 = in_vars.id5005out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5006in_option1 = id5004out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5006x_1;

    switch((id5006in_sel.getValueAsLong())) {
      case 0l:
        id5006x_1 = id5006in_option0;
        break;
      case 1l:
        id5006x_1 = id5006in_option1;
        break;
      default:
        id5006x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5006out_result[(getCycle()+1)%2] = (id5006x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5007out_output;

  { // Node ID: 5007 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5007in_input = id5006out_result[getCycle()%2];

    id5007out_output = id5007in_input;
  }
  { // Node ID: 5009 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5009in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5009in_option0 = in_vars.id5008out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5009in_option1 = id5007out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5009x_1;

    switch((id5009in_sel.getValueAsLong())) {
      case 0l:
        id5009x_1 = id5009in_option0;
        break;
      case 1l:
        id5009x_1 = id5009in_option1;
        break;
      default:
        id5009x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5009out_result[(getCycle()+1)%2] = (id5009x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5010out_output;

  { // Node ID: 5010 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5010in_input = id5009out_result[getCycle()%2];

    id5010out_output = id5010in_input;
  }
  { // Node ID: 5012 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5012in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5012in_option0 = in_vars.id5011out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5012in_option1 = id5010out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5012x_1;

    switch((id5012in_sel.getValueAsLong())) {
      case 0l:
        id5012x_1 = id5012in_option0;
        break;
      case 1l:
        id5012x_1 = id5012in_option1;
        break;
      default:
        id5012x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5012out_result[(getCycle()+1)%2] = (id5012x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5013out_output;

  { // Node ID: 5013 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5013in_input = id5012out_result[getCycle()%2];

    id5013out_output = id5013in_input;
  }
  { // Node ID: 5015 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5015in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5015in_option0 = in_vars.id5014out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5015in_option1 = id5013out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5015x_1;

    switch((id5015in_sel.getValueAsLong())) {
      case 0l:
        id5015x_1 = id5015in_option0;
        break;
      case 1l:
        id5015x_1 = id5015in_option1;
        break;
      default:
        id5015x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5015out_result[(getCycle()+1)%2] = (id5015x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5016out_output;

  { // Node ID: 5016 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5016in_input = id5015out_result[getCycle()%2];

    id5016out_output = id5016in_input;
  }
  { // Node ID: 5018 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5018in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5018in_option0 = in_vars.id5017out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5018in_option1 = id5016out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5018x_1;

    switch((id5018in_sel.getValueAsLong())) {
      case 0l:
        id5018x_1 = id5018in_option0;
        break;
      case 1l:
        id5018x_1 = id5018in_option1;
        break;
      default:
        id5018x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5018out_result[(getCycle()+1)%2] = (id5018x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5019out_output;

  { // Node ID: 5019 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5019in_input = id5018out_result[getCycle()%2];

    id5019out_output = id5019in_input;
  }
  { // Node ID: 5021 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5021in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5021in_option0 = in_vars.id5020out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5021in_option1 = id5019out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5021x_1;

    switch((id5021in_sel.getValueAsLong())) {
      case 0l:
        id5021x_1 = id5021in_option0;
        break;
      case 1l:
        id5021x_1 = id5021in_option1;
        break;
      default:
        id5021x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5021out_result[(getCycle()+1)%2] = (id5021x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5022out_output;

  { // Node ID: 5022 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5022in_input = id5021out_result[getCycle()%2];

    id5022out_output = id5022in_input;
  }
  { // Node ID: 5024 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5024in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5024in_option0 = in_vars.id5023out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5024in_option1 = id5022out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5024x_1;

    switch((id5024in_sel.getValueAsLong())) {
      case 0l:
        id5024x_1 = id5024in_option0;
        break;
      case 1l:
        id5024x_1 = id5024in_option1;
        break;
      default:
        id5024x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5024out_result[(getCycle()+1)%2] = (id5024x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5025out_output;

  { // Node ID: 5025 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5025in_input = id5024out_result[getCycle()%2];

    id5025out_output = id5025in_input;
  }
  { // Node ID: 5027 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5027in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5027in_option0 = in_vars.id5026out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5027in_option1 = id5025out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5027x_1;

    switch((id5027in_sel.getValueAsLong())) {
      case 0l:
        id5027x_1 = id5027in_option0;
        break;
      case 1l:
        id5027x_1 = id5027in_option1;
        break;
      default:
        id5027x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5027out_result[(getCycle()+1)%2] = (id5027x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5028out_output;

  { // Node ID: 5028 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5028in_input = id5027out_result[getCycle()%2];

    id5028out_output = id5028in_input;
  }
  { // Node ID: 5030 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5030in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5030in_option0 = in_vars.id5029out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5030in_option1 = id5028out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5030x_1;

    switch((id5030in_sel.getValueAsLong())) {
      case 0l:
        id5030x_1 = id5030in_option0;
        break;
      case 1l:
        id5030x_1 = id5030in_option1;
        break;
      default:
        id5030x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5030out_result[(getCycle()+1)%2] = (id5030x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5031out_output;

  { // Node ID: 5031 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5031in_input = id5030out_result[getCycle()%2];

    id5031out_output = id5031in_input;
  }
  { // Node ID: 5033 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5033in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5033in_option0 = in_vars.id5032out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5033in_option1 = id5031out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5033x_1;

    switch((id5033in_sel.getValueAsLong())) {
      case 0l:
        id5033x_1 = id5033in_option0;
        break;
      case 1l:
        id5033x_1 = id5033in_option1;
        break;
      default:
        id5033x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5033out_result[(getCycle()+1)%2] = (id5033x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5034out_output;

  { // Node ID: 5034 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5034in_input = id5033out_result[getCycle()%2];

    id5034out_output = id5034in_input;
  }
  { // Node ID: 5036 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5036in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5036in_option0 = in_vars.id5035out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5036in_option1 = id5034out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5036x_1;

    switch((id5036in_sel.getValueAsLong())) {
      case 0l:
        id5036x_1 = id5036in_option0;
        break;
      case 1l:
        id5036x_1 = id5036in_option1;
        break;
      default:
        id5036x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5036out_result[(getCycle()+1)%2] = (id5036x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5037out_output;

  { // Node ID: 5037 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5037in_input = id5036out_result[getCycle()%2];

    id5037out_output = id5037in_input;
  }
  { // Node ID: 5039 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5039in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5039in_option0 = in_vars.id5038out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5039in_option1 = id5037out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5039x_1;

    switch((id5039in_sel.getValueAsLong())) {
      case 0l:
        id5039x_1 = id5039in_option0;
        break;
      case 1l:
        id5039x_1 = id5039in_option1;
        break;
      default:
        id5039x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5039out_result[(getCycle()+1)%2] = (id5039x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5040out_output;

  { // Node ID: 5040 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5040in_input = id5039out_result[getCycle()%2];

    id5040out_output = id5040in_input;
  }
  { // Node ID: 5042 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5042in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5042in_option0 = in_vars.id5041out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5042in_option1 = id5040out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5042x_1;

    switch((id5042in_sel.getValueAsLong())) {
      case 0l:
        id5042x_1 = id5042in_option0;
        break;
      case 1l:
        id5042x_1 = id5042in_option1;
        break;
      default:
        id5042x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5042out_result[(getCycle()+1)%2] = (id5042x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5043out_output;

  { // Node ID: 5043 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5043in_input = id5042out_result[getCycle()%2];

    id5043out_output = id5043in_input;
  }
  { // Node ID: 5045 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5045in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5045in_option0 = in_vars.id5044out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5045in_option1 = id5043out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5045x_1;

    switch((id5045in_sel.getValueAsLong())) {
      case 0l:
        id5045x_1 = id5045in_option0;
        break;
      case 1l:
        id5045x_1 = id5045in_option1;
        break;
      default:
        id5045x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5045out_result[(getCycle()+1)%2] = (id5045x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5046out_output;

  { // Node ID: 5046 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5046in_input = id5045out_result[getCycle()%2];

    id5046out_output = id5046in_input;
  }
  { // Node ID: 5048 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5048in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5048in_option0 = in_vars.id5047out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5048in_option1 = id5046out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5048x_1;

    switch((id5048in_sel.getValueAsLong())) {
      case 0l:
        id5048x_1 = id5048in_option0;
        break;
      case 1l:
        id5048x_1 = id5048in_option1;
        break;
      default:
        id5048x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5048out_result[(getCycle()+1)%2] = (id5048x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5049out_output;

  { // Node ID: 5049 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5049in_input = id5048out_result[getCycle()%2];

    id5049out_output = id5049in_input;
  }
  { // Node ID: 5051 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5051in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5051in_option0 = in_vars.id5050out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5051in_option1 = id5049out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5051x_1;

    switch((id5051in_sel.getValueAsLong())) {
      case 0l:
        id5051x_1 = id5051in_option0;
        break;
      case 1l:
        id5051x_1 = id5051in_option1;
        break;
      default:
        id5051x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5051out_result[(getCycle()+1)%2] = (id5051x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5052out_output;

  { // Node ID: 5052 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5052in_input = id5051out_result[getCycle()%2];

    id5052out_output = id5052in_input;
  }
  { // Node ID: 5054 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5054in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5054in_option0 = in_vars.id5053out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5054in_option1 = id5052out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5054x_1;

    switch((id5054in_sel.getValueAsLong())) {
      case 0l:
        id5054x_1 = id5054in_option0;
        break;
      case 1l:
        id5054x_1 = id5054in_option1;
        break;
      default:
        id5054x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5054out_result[(getCycle()+1)%2] = (id5054x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5055out_output;

  { // Node ID: 5055 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5055in_input = id5054out_result[getCycle()%2];

    id5055out_output = id5055in_input;
  }
  { // Node ID: 5057 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5057in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5057in_option0 = in_vars.id5056out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5057in_option1 = id5055out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5057x_1;

    switch((id5057in_sel.getValueAsLong())) {
      case 0l:
        id5057x_1 = id5057in_option0;
        break;
      case 1l:
        id5057x_1 = id5057in_option1;
        break;
      default:
        id5057x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5057out_result[(getCycle()+1)%2] = (id5057x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5058out_output;

  { // Node ID: 5058 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5058in_input = id5057out_result[getCycle()%2];

    id5058out_output = id5058in_input;
  }
  { // Node ID: 5060 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5060in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5060in_option0 = in_vars.id5059out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5060in_option1 = id5058out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5060x_1;

    switch((id5060in_sel.getValueAsLong())) {
      case 0l:
        id5060x_1 = id5060in_option0;
        break;
      case 1l:
        id5060x_1 = id5060in_option1;
        break;
      default:
        id5060x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5060out_result[(getCycle()+1)%2] = (id5060x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5061out_output;

  { // Node ID: 5061 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5061in_input = id5060out_result[getCycle()%2];

    id5061out_output = id5061in_input;
  }
  { // Node ID: 5063 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5063in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5063in_option0 = in_vars.id5062out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5063in_option1 = id5061out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5063x_1;

    switch((id5063in_sel.getValueAsLong())) {
      case 0l:
        id5063x_1 = id5063in_option0;
        break;
      case 1l:
        id5063x_1 = id5063in_option1;
        break;
      default:
        id5063x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5063out_result[(getCycle()+1)%2] = (id5063x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5064out_output;

  { // Node ID: 5064 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5064in_input = id5063out_result[getCycle()%2];

    id5064out_output = id5064in_input;
  }
  { // Node ID: 5066 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5066in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5066in_option0 = in_vars.id5065out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5066in_option1 = id5064out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5066x_1;

    switch((id5066in_sel.getValueAsLong())) {
      case 0l:
        id5066x_1 = id5066in_option0;
        break;
      case 1l:
        id5066x_1 = id5066in_option1;
        break;
      default:
        id5066x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5066out_result[(getCycle()+1)%2] = (id5066x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5067out_output;

  { // Node ID: 5067 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5067in_input = id5066out_result[getCycle()%2];

    id5067out_output = id5067in_input;
  }
  { // Node ID: 5069 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5069in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5069in_option0 = in_vars.id5068out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5069in_option1 = id5067out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5069x_1;

    switch((id5069in_sel.getValueAsLong())) {
      case 0l:
        id5069x_1 = id5069in_option0;
        break;
      case 1l:
        id5069x_1 = id5069in_option1;
        break;
      default:
        id5069x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5069out_result[(getCycle()+1)%2] = (id5069x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5070out_output;

  { // Node ID: 5070 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5070in_input = id5069out_result[getCycle()%2];

    id5070out_output = id5070in_input;
  }
  { // Node ID: 5072 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5072in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5072in_option0 = in_vars.id5071out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5072in_option1 = id5070out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5072x_1;

    switch((id5072in_sel.getValueAsLong())) {
      case 0l:
        id5072x_1 = id5072in_option0;
        break;
      case 1l:
        id5072x_1 = id5072in_option1;
        break;
      default:
        id5072x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5072out_result[(getCycle()+1)%2] = (id5072x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5073out_output;

  { // Node ID: 5073 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5073in_input = id5072out_result[getCycle()%2];

    id5073out_output = id5073in_input;
  }
  { // Node ID: 5075 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5075in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5075in_option0 = in_vars.id5074out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5075in_option1 = id5073out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5075x_1;

    switch((id5075in_sel.getValueAsLong())) {
      case 0l:
        id5075x_1 = id5075in_option0;
        break;
      case 1l:
        id5075x_1 = id5075in_option1;
        break;
      default:
        id5075x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5075out_result[(getCycle()+1)%2] = (id5075x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5076out_output;

  { // Node ID: 5076 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5076in_input = id5075out_result[getCycle()%2];

    id5076out_output = id5076in_input;
  }
  { // Node ID: 5078 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5078in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5078in_option0 = in_vars.id5077out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5078in_option1 = id5076out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5078x_1;

    switch((id5078in_sel.getValueAsLong())) {
      case 0l:
        id5078x_1 = id5078in_option0;
        break;
      case 1l:
        id5078x_1 = id5078in_option1;
        break;
      default:
        id5078x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5078out_result[(getCycle()+1)%2] = (id5078x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5079out_output;

  { // Node ID: 5079 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5079in_input = id5078out_result[getCycle()%2];

    id5079out_output = id5079in_input;
  }
  { // Node ID: 5081 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5081in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5081in_option0 = in_vars.id5080out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5081in_option1 = id5079out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5081x_1;

    switch((id5081in_sel.getValueAsLong())) {
      case 0l:
        id5081x_1 = id5081in_option0;
        break;
      case 1l:
        id5081x_1 = id5081in_option1;
        break;
      default:
        id5081x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5081out_result[(getCycle()+1)%2] = (id5081x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5082out_output;

  { // Node ID: 5082 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5082in_input = id5081out_result[getCycle()%2];

    id5082out_output = id5082in_input;
  }
  { // Node ID: 5084 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5084in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5084in_option0 = in_vars.id5083out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5084in_option1 = id5082out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5084x_1;

    switch((id5084in_sel.getValueAsLong())) {
      case 0l:
        id5084x_1 = id5084in_option0;
        break;
      case 1l:
        id5084x_1 = id5084in_option1;
        break;
      default:
        id5084x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5084out_result[(getCycle()+1)%2] = (id5084x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5085out_output;

  { // Node ID: 5085 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5085in_input = id5084out_result[getCycle()%2];

    id5085out_output = id5085in_input;
  }
  { // Node ID: 5087 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5087in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5087in_option0 = in_vars.id5086out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5087in_option1 = id5085out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5087x_1;

    switch((id5087in_sel.getValueAsLong())) {
      case 0l:
        id5087x_1 = id5087in_option0;
        break;
      case 1l:
        id5087x_1 = id5087in_option1;
        break;
      default:
        id5087x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5087out_result[(getCycle()+1)%2] = (id5087x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5088out_output;

  { // Node ID: 5088 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5088in_input = id5087out_result[getCycle()%2];

    id5088out_output = id5088in_input;
  }
  { // Node ID: 5090 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5090in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5090in_option0 = in_vars.id5089out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5090in_option1 = id5088out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5090x_1;

    switch((id5090in_sel.getValueAsLong())) {
      case 0l:
        id5090x_1 = id5090in_option0;
        break;
      case 1l:
        id5090x_1 = id5090in_option1;
        break;
      default:
        id5090x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5090out_result[(getCycle()+1)%2] = (id5090x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5091out_output;

  { // Node ID: 5091 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5091in_input = id5090out_result[getCycle()%2];

    id5091out_output = id5091in_input;
  }
  { // Node ID: 5093 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5093in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5093in_option0 = in_vars.id5092out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5093in_option1 = id5091out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5093x_1;

    switch((id5093in_sel.getValueAsLong())) {
      case 0l:
        id5093x_1 = id5093in_option0;
        break;
      case 1l:
        id5093x_1 = id5093in_option1;
        break;
      default:
        id5093x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5093out_result[(getCycle()+1)%2] = (id5093x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5094out_output;

  { // Node ID: 5094 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5094in_input = id5093out_result[getCycle()%2];

    id5094out_output = id5094in_input;
  }
  { // Node ID: 5096 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5096in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5096in_option0 = in_vars.id5095out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5096in_option1 = id5094out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5096x_1;

    switch((id5096in_sel.getValueAsLong())) {
      case 0l:
        id5096x_1 = id5096in_option0;
        break;
      case 1l:
        id5096x_1 = id5096in_option1;
        break;
      default:
        id5096x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5096out_result[(getCycle()+1)%2] = (id5096x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5097out_output;

  { // Node ID: 5097 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5097in_input = id5096out_result[getCycle()%2];

    id5097out_output = id5097in_input;
  }
  { // Node ID: 5099 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5099in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5099in_option0 = in_vars.id5098out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5099in_option1 = id5097out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5099x_1;

    switch((id5099in_sel.getValueAsLong())) {
      case 0l:
        id5099x_1 = id5099in_option0;
        break;
      case 1l:
        id5099x_1 = id5099in_option1;
        break;
      default:
        id5099x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5099out_result[(getCycle()+1)%2] = (id5099x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5100out_output;

  { // Node ID: 5100 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5100in_input = id5099out_result[getCycle()%2];

    id5100out_output = id5100in_input;
  }
  { // Node ID: 5102 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5102in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5102in_option0 = in_vars.id5101out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5102in_option1 = id5100out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5102x_1;

    switch((id5102in_sel.getValueAsLong())) {
      case 0l:
        id5102x_1 = id5102in_option0;
        break;
      case 1l:
        id5102x_1 = id5102in_option1;
        break;
      default:
        id5102x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5102out_result[(getCycle()+1)%2] = (id5102x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5103out_output;

  { // Node ID: 5103 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5103in_input = id5102out_result[getCycle()%2];

    id5103out_output = id5103in_input;
  }
  { // Node ID: 5105 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5105in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5105in_option0 = in_vars.id5104out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5105in_option1 = id5103out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5105x_1;

    switch((id5105in_sel.getValueAsLong())) {
      case 0l:
        id5105x_1 = id5105in_option0;
        break;
      case 1l:
        id5105x_1 = id5105in_option1;
        break;
      default:
        id5105x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5105out_result[(getCycle()+1)%2] = (id5105x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5106out_output;

  { // Node ID: 5106 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5106in_input = id5105out_result[getCycle()%2];

    id5106out_output = id5106in_input;
  }
  { // Node ID: 5108 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5108in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5108in_option0 = in_vars.id5107out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5108in_option1 = id5106out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5108x_1;

    switch((id5108in_sel.getValueAsLong())) {
      case 0l:
        id5108x_1 = id5108in_option0;
        break;
      case 1l:
        id5108x_1 = id5108in_option1;
        break;
      default:
        id5108x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5108out_result[(getCycle()+1)%2] = (id5108x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5109out_output;

  { // Node ID: 5109 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5109in_input = id5108out_result[getCycle()%2];

    id5109out_output = id5109in_input;
  }
  { // Node ID: 5111 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5111in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5111in_option0 = in_vars.id5110out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5111in_option1 = id5109out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5111x_1;

    switch((id5111in_sel.getValueAsLong())) {
      case 0l:
        id5111x_1 = id5111in_option0;
        break;
      case 1l:
        id5111x_1 = id5111in_option1;
        break;
      default:
        id5111x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5111out_result[(getCycle()+1)%2] = (id5111x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5112out_output;

  { // Node ID: 5112 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5112in_input = id5111out_result[getCycle()%2];

    id5112out_output = id5112in_input;
  }
  { // Node ID: 5114 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5114in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5114in_option0 = in_vars.id5113out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5114in_option1 = id5112out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5114x_1;

    switch((id5114in_sel.getValueAsLong())) {
      case 0l:
        id5114x_1 = id5114in_option0;
        break;
      case 1l:
        id5114x_1 = id5114in_option1;
        break;
      default:
        id5114x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5114out_result[(getCycle()+1)%2] = (id5114x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5115out_output;

  { // Node ID: 5115 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5115in_input = id5114out_result[getCycle()%2];

    id5115out_output = id5115in_input;
  }
  { // Node ID: 5117 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5117in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5117in_option0 = in_vars.id5116out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5117in_option1 = id5115out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5117x_1;

    switch((id5117in_sel.getValueAsLong())) {
      case 0l:
        id5117x_1 = id5117in_option0;
        break;
      case 1l:
        id5117x_1 = id5117in_option1;
        break;
      default:
        id5117x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5117out_result[(getCycle()+1)%2] = (id5117x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5118out_output;

  { // Node ID: 5118 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5118in_input = id5117out_result[getCycle()%2];

    id5118out_output = id5118in_input;
  }
  { // Node ID: 5120 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5120in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5120in_option0 = in_vars.id5119out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5120in_option1 = id5118out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5120x_1;

    switch((id5120in_sel.getValueAsLong())) {
      case 0l:
        id5120x_1 = id5120in_option0;
        break;
      case 1l:
        id5120x_1 = id5120in_option1;
        break;
      default:
        id5120x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5120out_result[(getCycle()+1)%2] = (id5120x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5121out_output;

  { // Node ID: 5121 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5121in_input = id5120out_result[getCycle()%2];

    id5121out_output = id5121in_input;
  }
  { // Node ID: 5123 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5123in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5123in_option0 = in_vars.id5122out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5123in_option1 = id5121out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5123x_1;

    switch((id5123in_sel.getValueAsLong())) {
      case 0l:
        id5123x_1 = id5123in_option0;
        break;
      case 1l:
        id5123x_1 = id5123in_option1;
        break;
      default:
        id5123x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5123out_result[(getCycle()+1)%2] = (id5123x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5124out_output;

  { // Node ID: 5124 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5124in_input = id5123out_result[getCycle()%2];

    id5124out_output = id5124in_input;
  }
  { // Node ID: 5126 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5126in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5126in_option0 = in_vars.id5125out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5126in_option1 = id5124out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5126x_1;

    switch((id5126in_sel.getValueAsLong())) {
      case 0l:
        id5126x_1 = id5126in_option0;
        break;
      case 1l:
        id5126x_1 = id5126in_option1;
        break;
      default:
        id5126x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5126out_result[(getCycle()+1)%2] = (id5126x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5127out_output;

  { // Node ID: 5127 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5127in_input = id5126out_result[getCycle()%2];

    id5127out_output = id5127in_input;
  }
  { // Node ID: 5129 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5129in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5129in_option0 = in_vars.id5128out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5129in_option1 = id5127out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5129x_1;

    switch((id5129in_sel.getValueAsLong())) {
      case 0l:
        id5129x_1 = id5129in_option0;
        break;
      case 1l:
        id5129x_1 = id5129in_option1;
        break;
      default:
        id5129x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5129out_result[(getCycle()+1)%2] = (id5129x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5130out_output;

  { // Node ID: 5130 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5130in_input = id5129out_result[getCycle()%2];

    id5130out_output = id5130in_input;
  }
  { // Node ID: 5132 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5132in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5132in_option0 = in_vars.id5131out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5132in_option1 = id5130out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5132x_1;

    switch((id5132in_sel.getValueAsLong())) {
      case 0l:
        id5132x_1 = id5132in_option0;
        break;
      case 1l:
        id5132x_1 = id5132in_option1;
        break;
      default:
        id5132x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5132out_result[(getCycle()+1)%2] = (id5132x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5133out_output;

  { // Node ID: 5133 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5133in_input = id5132out_result[getCycle()%2];

    id5133out_output = id5133in_input;
  }
  { // Node ID: 5135 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5135in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5135in_option0 = in_vars.id5134out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5135in_option1 = id5133out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5135x_1;

    switch((id5135in_sel.getValueAsLong())) {
      case 0l:
        id5135x_1 = id5135in_option0;
        break;
      case 1l:
        id5135x_1 = id5135in_option1;
        break;
      default:
        id5135x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5135out_result[(getCycle()+1)%2] = (id5135x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5136out_output;

  { // Node ID: 5136 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5136in_input = id5135out_result[getCycle()%2];

    id5136out_output = id5136in_input;
  }
  { // Node ID: 5138 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5138in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5138in_option0 = in_vars.id5137out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5138in_option1 = id5136out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5138x_1;

    switch((id5138in_sel.getValueAsLong())) {
      case 0l:
        id5138x_1 = id5138in_option0;
        break;
      case 1l:
        id5138x_1 = id5138in_option1;
        break;
      default:
        id5138x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5138out_result[(getCycle()+1)%2] = (id5138x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5139out_output;

  { // Node ID: 5139 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5139in_input = id5138out_result[getCycle()%2];

    id5139out_output = id5139in_input;
  }
  { // Node ID: 5141 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5141in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5141in_option0 = in_vars.id5140out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5141in_option1 = id5139out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5141x_1;

    switch((id5141in_sel.getValueAsLong())) {
      case 0l:
        id5141x_1 = id5141in_option0;
        break;
      case 1l:
        id5141x_1 = id5141in_option1;
        break;
      default:
        id5141x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5141out_result[(getCycle()+1)%2] = (id5141x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5142out_output;

  { // Node ID: 5142 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5142in_input = id5141out_result[getCycle()%2];

    id5142out_output = id5142in_input;
  }
  { // Node ID: 5144 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5144in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5144in_option0 = in_vars.id5143out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5144in_option1 = id5142out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5144x_1;

    switch((id5144in_sel.getValueAsLong())) {
      case 0l:
        id5144x_1 = id5144in_option0;
        break;
      case 1l:
        id5144x_1 = id5144in_option1;
        break;
      default:
        id5144x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5144out_result[(getCycle()+1)%2] = (id5144x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5145out_output;

  { // Node ID: 5145 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5145in_input = id5144out_result[getCycle()%2];

    id5145out_output = id5145in_input;
  }
  { // Node ID: 5147 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5147in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5147in_option0 = in_vars.id5146out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5147in_option1 = id5145out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5147x_1;

    switch((id5147in_sel.getValueAsLong())) {
      case 0l:
        id5147x_1 = id5147in_option0;
        break;
      case 1l:
        id5147x_1 = id5147in_option1;
        break;
      default:
        id5147x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5147out_result[(getCycle()+1)%2] = (id5147x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5148out_output;

  { // Node ID: 5148 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5148in_input = id5147out_result[getCycle()%2];

    id5148out_output = id5148in_input;
  }
  { // Node ID: 5150 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5150in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5150in_option0 = in_vars.id5149out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5150in_option1 = id5148out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5150x_1;

    switch((id5150in_sel.getValueAsLong())) {
      case 0l:
        id5150x_1 = id5150in_option0;
        break;
      case 1l:
        id5150x_1 = id5150in_option1;
        break;
      default:
        id5150x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5150out_result[(getCycle()+1)%2] = (id5150x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5151out_output;

  { // Node ID: 5151 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5151in_input = id5150out_result[getCycle()%2];

    id5151out_output = id5151in_input;
  }
  { // Node ID: 5153 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5153in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5153in_option0 = in_vars.id5152out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5153in_option1 = id5151out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5153x_1;

    switch((id5153in_sel.getValueAsLong())) {
      case 0l:
        id5153x_1 = id5153in_option0;
        break;
      case 1l:
        id5153x_1 = id5153in_option1;
        break;
      default:
        id5153x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5153out_result[(getCycle()+1)%2] = (id5153x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5154out_output;

  { // Node ID: 5154 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5154in_input = id5153out_result[getCycle()%2];

    id5154out_output = id5154in_input;
  }
  { // Node ID: 5156 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5156in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5156in_option0 = in_vars.id5155out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5156in_option1 = id5154out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5156x_1;

    switch((id5156in_sel.getValueAsLong())) {
      case 0l:
        id5156x_1 = id5156in_option0;
        break;
      case 1l:
        id5156x_1 = id5156in_option1;
        break;
      default:
        id5156x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5156out_result[(getCycle()+1)%2] = (id5156x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5157out_output;

  { // Node ID: 5157 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5157in_input = id5156out_result[getCycle()%2];

    id5157out_output = id5157in_input;
  }
  { // Node ID: 5159 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5159in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5159in_option0 = in_vars.id5158out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5159in_option1 = id5157out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5159x_1;

    switch((id5159in_sel.getValueAsLong())) {
      case 0l:
        id5159x_1 = id5159in_option0;
        break;
      case 1l:
        id5159x_1 = id5159in_option1;
        break;
      default:
        id5159x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5159out_result[(getCycle()+1)%2] = (id5159x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5160out_output;

  { // Node ID: 5160 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5160in_input = id5159out_result[getCycle()%2];

    id5160out_output = id5160in_input;
  }
  { // Node ID: 5162 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5162in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5162in_option0 = in_vars.id5161out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5162in_option1 = id5160out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5162x_1;

    switch((id5162in_sel.getValueAsLong())) {
      case 0l:
        id5162x_1 = id5162in_option0;
        break;
      case 1l:
        id5162x_1 = id5162in_option1;
        break;
      default:
        id5162x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5162out_result[(getCycle()+1)%2] = (id5162x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5163out_output;

  { // Node ID: 5163 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5163in_input = id5162out_result[getCycle()%2];

    id5163out_output = id5163in_input;
  }
  { // Node ID: 5165 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5165in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5165in_option0 = in_vars.id5164out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5165in_option1 = id5163out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5165x_1;

    switch((id5165in_sel.getValueAsLong())) {
      case 0l:
        id5165x_1 = id5165in_option0;
        break;
      case 1l:
        id5165x_1 = id5165in_option1;
        break;
      default:
        id5165x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5165out_result[(getCycle()+1)%2] = (id5165x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5166out_output;

  { // Node ID: 5166 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5166in_input = id5165out_result[getCycle()%2];

    id5166out_output = id5166in_input;
  }
  { // Node ID: 5168 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5168in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5168in_option0 = in_vars.id5167out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5168in_option1 = id5166out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5168x_1;

    switch((id5168in_sel.getValueAsLong())) {
      case 0l:
        id5168x_1 = id5168in_option0;
        break;
      case 1l:
        id5168x_1 = id5168in_option1;
        break;
      default:
        id5168x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5168out_result[(getCycle()+1)%2] = (id5168x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5169out_output;

  { // Node ID: 5169 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5169in_input = id5168out_result[getCycle()%2];

    id5169out_output = id5169in_input;
  }
  { // Node ID: 5171 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5171in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5171in_option0 = in_vars.id5170out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5171in_option1 = id5169out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5171x_1;

    switch((id5171in_sel.getValueAsLong())) {
      case 0l:
        id5171x_1 = id5171in_option0;
        break;
      case 1l:
        id5171x_1 = id5171in_option1;
        break;
      default:
        id5171x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5171out_result[(getCycle()+1)%2] = (id5171x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5172out_output;

  { // Node ID: 5172 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5172in_input = id5171out_result[getCycle()%2];

    id5172out_output = id5172in_input;
  }
  { // Node ID: 5174 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5174in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5174in_option0 = in_vars.id5173out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5174in_option1 = id5172out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5174x_1;

    switch((id5174in_sel.getValueAsLong())) {
      case 0l:
        id5174x_1 = id5174in_option0;
        break;
      case 1l:
        id5174x_1 = id5174in_option1;
        break;
      default:
        id5174x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5174out_result[(getCycle()+1)%2] = (id5174x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5175out_output;

  { // Node ID: 5175 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5175in_input = id5174out_result[getCycle()%2];

    id5175out_output = id5175in_input;
  }
  { // Node ID: 5177 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5177in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5177in_option0 = in_vars.id5176out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5177in_option1 = id5175out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5177x_1;

    switch((id5177in_sel.getValueAsLong())) {
      case 0l:
        id5177x_1 = id5177in_option0;
        break;
      case 1l:
        id5177x_1 = id5177in_option1;
        break;
      default:
        id5177x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5177out_result[(getCycle()+1)%2] = (id5177x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5178out_output;

  { // Node ID: 5178 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5178in_input = id5177out_result[getCycle()%2];

    id5178out_output = id5178in_input;
  }
  { // Node ID: 5180 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5180in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5180in_option0 = in_vars.id5179out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5180in_option1 = id5178out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5180x_1;

    switch((id5180in_sel.getValueAsLong())) {
      case 0l:
        id5180x_1 = id5180in_option0;
        break;
      case 1l:
        id5180x_1 = id5180in_option1;
        break;
      default:
        id5180x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5180out_result[(getCycle()+1)%2] = (id5180x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5181out_output;

  { // Node ID: 5181 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5181in_input = id5180out_result[getCycle()%2];

    id5181out_output = id5181in_input;
  }
  { // Node ID: 5183 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5183in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5183in_option0 = in_vars.id5182out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5183in_option1 = id5181out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5183x_1;

    switch((id5183in_sel.getValueAsLong())) {
      case 0l:
        id5183x_1 = id5183in_option0;
        break;
      case 1l:
        id5183x_1 = id5183in_option1;
        break;
      default:
        id5183x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5183out_result[(getCycle()+1)%2] = (id5183x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5184out_output;

  { // Node ID: 5184 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5184in_input = id5183out_result[getCycle()%2];

    id5184out_output = id5184in_input;
  }
  { // Node ID: 5186 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5186in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5186in_option0 = in_vars.id5185out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5186in_option1 = id5184out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5186x_1;

    switch((id5186in_sel.getValueAsLong())) {
      case 0l:
        id5186x_1 = id5186in_option0;
        break;
      case 1l:
        id5186x_1 = id5186in_option1;
        break;
      default:
        id5186x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5186out_result[(getCycle()+1)%2] = (id5186x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5187out_output;

  { // Node ID: 5187 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5187in_input = id5186out_result[getCycle()%2];

    id5187out_output = id5187in_input;
  }
  { // Node ID: 5189 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5189in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5189in_option0 = in_vars.id5188out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5189in_option1 = id5187out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5189x_1;

    switch((id5189in_sel.getValueAsLong())) {
      case 0l:
        id5189x_1 = id5189in_option0;
        break;
      case 1l:
        id5189x_1 = id5189in_option1;
        break;
      default:
        id5189x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5189out_result[(getCycle()+1)%2] = (id5189x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5190out_output;

  { // Node ID: 5190 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5190in_input = id5189out_result[getCycle()%2];

    id5190out_output = id5190in_input;
  }
  { // Node ID: 5192 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5192in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5192in_option0 = in_vars.id5191out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5192in_option1 = id5190out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5192x_1;

    switch((id5192in_sel.getValueAsLong())) {
      case 0l:
        id5192x_1 = id5192in_option0;
        break;
      case 1l:
        id5192x_1 = id5192in_option1;
        break;
      default:
        id5192x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5192out_result[(getCycle()+1)%2] = (id5192x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5193out_output;

  { // Node ID: 5193 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5193in_input = id5192out_result[getCycle()%2];

    id5193out_output = id5193in_input;
  }
  { // Node ID: 5195 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5195in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5195in_option0 = in_vars.id5194out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5195in_option1 = id5193out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5195x_1;

    switch((id5195in_sel.getValueAsLong())) {
      case 0l:
        id5195x_1 = id5195in_option0;
        break;
      case 1l:
        id5195x_1 = id5195in_option1;
        break;
      default:
        id5195x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5195out_result[(getCycle()+1)%2] = (id5195x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5196out_output;

  { // Node ID: 5196 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5196in_input = id5195out_result[getCycle()%2];

    id5196out_output = id5196in_input;
  }
  { // Node ID: 5198 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5198in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5198in_option0 = in_vars.id5197out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5198in_option1 = id5196out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5198x_1;

    switch((id5198in_sel.getValueAsLong())) {
      case 0l:
        id5198x_1 = id5198in_option0;
        break;
      case 1l:
        id5198x_1 = id5198in_option1;
        break;
      default:
        id5198x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5198out_result[(getCycle()+1)%2] = (id5198x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5199out_output;

  { // Node ID: 5199 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5199in_input = id5198out_result[getCycle()%2];

    id5199out_output = id5199in_input;
  }
  { // Node ID: 5201 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5201in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5201in_option0 = in_vars.id5200out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5201in_option1 = id5199out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5201x_1;

    switch((id5201in_sel.getValueAsLong())) {
      case 0l:
        id5201x_1 = id5201in_option0;
        break;
      case 1l:
        id5201x_1 = id5201in_option1;
        break;
      default:
        id5201x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5201out_result[(getCycle()+1)%2] = (id5201x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5202out_output;

  { // Node ID: 5202 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5202in_input = id5201out_result[getCycle()%2];

    id5202out_output = id5202in_input;
  }
  { // Node ID: 5204 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5204in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5204in_option0 = in_vars.id5203out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5204in_option1 = id5202out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5204x_1;

    switch((id5204in_sel.getValueAsLong())) {
      case 0l:
        id5204x_1 = id5204in_option0;
        break;
      case 1l:
        id5204x_1 = id5204in_option1;
        break;
      default:
        id5204x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5204out_result[(getCycle()+1)%2] = (id5204x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5205out_output;

  { // Node ID: 5205 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5205in_input = id5204out_result[getCycle()%2];

    id5205out_output = id5205in_input;
  }
  { // Node ID: 5207 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5207in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5207in_option0 = in_vars.id5206out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5207in_option1 = id5205out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5207x_1;

    switch((id5207in_sel.getValueAsLong())) {
      case 0l:
        id5207x_1 = id5207in_option0;
        break;
      case 1l:
        id5207x_1 = id5207in_option1;
        break;
      default:
        id5207x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5207out_result[(getCycle()+1)%2] = (id5207x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5208out_output;

  { // Node ID: 5208 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5208in_input = id5207out_result[getCycle()%2];

    id5208out_output = id5208in_input;
  }
  { // Node ID: 5210 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5210in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5210in_option0 = in_vars.id5209out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5210in_option1 = id5208out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5210x_1;

    switch((id5210in_sel.getValueAsLong())) {
      case 0l:
        id5210x_1 = id5210in_option0;
        break;
      case 1l:
        id5210x_1 = id5210in_option1;
        break;
      default:
        id5210x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5210out_result[(getCycle()+1)%2] = (id5210x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5211out_output;

  { // Node ID: 5211 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5211in_input = id5210out_result[getCycle()%2];

    id5211out_output = id5211in_input;
  }
  { // Node ID: 5213 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5213in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5213in_option0 = in_vars.id5212out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5213in_option1 = id5211out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5213x_1;

    switch((id5213in_sel.getValueAsLong())) {
      case 0l:
        id5213x_1 = id5213in_option0;
        break;
      case 1l:
        id5213x_1 = id5213in_option1;
        break;
      default:
        id5213x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5213out_result[(getCycle()+1)%2] = (id5213x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5214out_output;

  { // Node ID: 5214 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5214in_input = id5213out_result[getCycle()%2];

    id5214out_output = id5214in_input;
  }
  { // Node ID: 5216 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5216in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5216in_option0 = in_vars.id5215out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5216in_option1 = id5214out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5216x_1;

    switch((id5216in_sel.getValueAsLong())) {
      case 0l:
        id5216x_1 = id5216in_option0;
        break;
      case 1l:
        id5216x_1 = id5216in_option1;
        break;
      default:
        id5216x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5216out_result[(getCycle()+1)%2] = (id5216x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5217out_output;

  { // Node ID: 5217 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5217in_input = id5216out_result[getCycle()%2];

    id5217out_output = id5217in_input;
  }
  { // Node ID: 5219 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5219in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5219in_option0 = in_vars.id5218out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5219in_option1 = id5217out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5219x_1;

    switch((id5219in_sel.getValueAsLong())) {
      case 0l:
        id5219x_1 = id5219in_option0;
        break;
      case 1l:
        id5219x_1 = id5219in_option1;
        break;
      default:
        id5219x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5219out_result[(getCycle()+1)%2] = (id5219x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5220out_output;

  { // Node ID: 5220 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5220in_input = id5219out_result[getCycle()%2];

    id5220out_output = id5220in_input;
  }
  { // Node ID: 5222 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5222in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5222in_option0 = in_vars.id5221out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5222in_option1 = id5220out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5222x_1;

    switch((id5222in_sel.getValueAsLong())) {
      case 0l:
        id5222x_1 = id5222in_option0;
        break;
      case 1l:
        id5222x_1 = id5222in_option1;
        break;
      default:
        id5222x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5222out_result[(getCycle()+1)%2] = (id5222x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5223out_output;

  { // Node ID: 5223 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5223in_input = id5222out_result[getCycle()%2];

    id5223out_output = id5223in_input;
  }
  { // Node ID: 5225 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5225in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5225in_option0 = in_vars.id5224out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5225in_option1 = id5223out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5225x_1;

    switch((id5225in_sel.getValueAsLong())) {
      case 0l:
        id5225x_1 = id5225in_option0;
        break;
      case 1l:
        id5225x_1 = id5225in_option1;
        break;
      default:
        id5225x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5225out_result[(getCycle()+1)%2] = (id5225x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5226out_output;

  { // Node ID: 5226 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5226in_input = id5225out_result[getCycle()%2];

    id5226out_output = id5226in_input;
  }
  { // Node ID: 5228 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5228in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5228in_option0 = in_vars.id5227out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5228in_option1 = id5226out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5228x_1;

    switch((id5228in_sel.getValueAsLong())) {
      case 0l:
        id5228x_1 = id5228in_option0;
        break;
      case 1l:
        id5228x_1 = id5228in_option1;
        break;
      default:
        id5228x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5228out_result[(getCycle()+1)%2] = (id5228x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5229out_output;

  { // Node ID: 5229 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5229in_input = id5228out_result[getCycle()%2];

    id5229out_output = id5229in_input;
  }
  { // Node ID: 5231 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5231in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5231in_option0 = in_vars.id5230out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5231in_option1 = id5229out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5231x_1;

    switch((id5231in_sel.getValueAsLong())) {
      case 0l:
        id5231x_1 = id5231in_option0;
        break;
      case 1l:
        id5231x_1 = id5231in_option1;
        break;
      default:
        id5231x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5231out_result[(getCycle()+1)%2] = (id5231x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5232out_output;

  { // Node ID: 5232 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5232in_input = id5231out_result[getCycle()%2];

    id5232out_output = id5232in_input;
  }
  { // Node ID: 5234 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5234in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5234in_option0 = in_vars.id5233out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5234in_option1 = id5232out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5234x_1;

    switch((id5234in_sel.getValueAsLong())) {
      case 0l:
        id5234x_1 = id5234in_option0;
        break;
      case 1l:
        id5234x_1 = id5234in_option1;
        break;
      default:
        id5234x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5234out_result[(getCycle()+1)%2] = (id5234x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5235out_output;

  { // Node ID: 5235 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5235in_input = id5234out_result[getCycle()%2];

    id5235out_output = id5235in_input;
  }
  { // Node ID: 5237 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5237in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5237in_option0 = in_vars.id5236out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5237in_option1 = id5235out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5237x_1;

    switch((id5237in_sel.getValueAsLong())) {
      case 0l:
        id5237x_1 = id5237in_option0;
        break;
      case 1l:
        id5237x_1 = id5237in_option1;
        break;
      default:
        id5237x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5237out_result[(getCycle()+1)%2] = (id5237x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5238out_output;

  { // Node ID: 5238 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5238in_input = id5237out_result[getCycle()%2];

    id5238out_output = id5238in_input;
  }
  { // Node ID: 5240 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5240in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5240in_option0 = in_vars.id5239out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5240in_option1 = id5238out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5240x_1;

    switch((id5240in_sel.getValueAsLong())) {
      case 0l:
        id5240x_1 = id5240in_option0;
        break;
      case 1l:
        id5240x_1 = id5240in_option1;
        break;
      default:
        id5240x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5240out_result[(getCycle()+1)%2] = (id5240x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5241out_output;

  { // Node ID: 5241 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5241in_input = id5240out_result[getCycle()%2];

    id5241out_output = id5241in_input;
  }
  { // Node ID: 5243 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5243in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5243in_option0 = in_vars.id5242out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5243in_option1 = id5241out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5243x_1;

    switch((id5243in_sel.getValueAsLong())) {
      case 0l:
        id5243x_1 = id5243in_option0;
        break;
      case 1l:
        id5243x_1 = id5243in_option1;
        break;
      default:
        id5243x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5243out_result[(getCycle()+1)%2] = (id5243x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5244out_output;

  { // Node ID: 5244 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5244in_input = id5243out_result[getCycle()%2];

    id5244out_output = id5244in_input;
  }
  { // Node ID: 5246 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5246in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5246in_option0 = in_vars.id5245out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5246in_option1 = id5244out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5246x_1;

    switch((id5246in_sel.getValueAsLong())) {
      case 0l:
        id5246x_1 = id5246in_option0;
        break;
      case 1l:
        id5246x_1 = id5246in_option1;
        break;
      default:
        id5246x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5246out_result[(getCycle()+1)%2] = (id5246x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5247out_output;

  { // Node ID: 5247 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5247in_input = id5246out_result[getCycle()%2];

    id5247out_output = id5247in_input;
  }
  { // Node ID: 5249 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5249in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5249in_option0 = in_vars.id5248out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5249in_option1 = id5247out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5249x_1;

    switch((id5249in_sel.getValueAsLong())) {
      case 0l:
        id5249x_1 = id5249in_option0;
        break;
      case 1l:
        id5249x_1 = id5249in_option1;
        break;
      default:
        id5249x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5249out_result[(getCycle()+1)%2] = (id5249x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5250out_output;

  { // Node ID: 5250 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5250in_input = id5249out_result[getCycle()%2];

    id5250out_output = id5250in_input;
  }
  { // Node ID: 5252 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5252in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5252in_option0 = in_vars.id5251out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5252in_option1 = id5250out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5252x_1;

    switch((id5252in_sel.getValueAsLong())) {
      case 0l:
        id5252x_1 = id5252in_option0;
        break;
      case 1l:
        id5252x_1 = id5252in_option1;
        break;
      default:
        id5252x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5252out_result[(getCycle()+1)%2] = (id5252x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5253out_output;

  { // Node ID: 5253 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5253in_input = id5252out_result[getCycle()%2];

    id5253out_output = id5253in_input;
  }
  { // Node ID: 5255 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5255in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5255in_option0 = in_vars.id5254out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5255in_option1 = id5253out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5255x_1;

    switch((id5255in_sel.getValueAsLong())) {
      case 0l:
        id5255x_1 = id5255in_option0;
        break;
      case 1l:
        id5255x_1 = id5255in_option1;
        break;
      default:
        id5255x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5255out_result[(getCycle()+1)%2] = (id5255x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5256out_output;

  { // Node ID: 5256 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5256in_input = id5255out_result[getCycle()%2];

    id5256out_output = id5256in_input;
  }
  { // Node ID: 5258 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5258in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5258in_option0 = in_vars.id5257out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5258in_option1 = id5256out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5258x_1;

    switch((id5258in_sel.getValueAsLong())) {
      case 0l:
        id5258x_1 = id5258in_option0;
        break;
      case 1l:
        id5258x_1 = id5258in_option1;
        break;
      default:
        id5258x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5258out_result[(getCycle()+1)%2] = (id5258x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5259out_output;

  { // Node ID: 5259 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5259in_input = id5258out_result[getCycle()%2];

    id5259out_output = id5259in_input;
  }
  { // Node ID: 5261 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5261in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5261in_option0 = in_vars.id5260out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5261in_option1 = id5259out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5261x_1;

    switch((id5261in_sel.getValueAsLong())) {
      case 0l:
        id5261x_1 = id5261in_option0;
        break;
      case 1l:
        id5261x_1 = id5261in_option1;
        break;
      default:
        id5261x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5261out_result[(getCycle()+1)%2] = (id5261x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5262out_output;

  { // Node ID: 5262 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5262in_input = id5261out_result[getCycle()%2];

    id5262out_output = id5262in_input;
  }
  { // Node ID: 5264 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5264in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5264in_option0 = in_vars.id5263out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5264in_option1 = id5262out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5264x_1;

    switch((id5264in_sel.getValueAsLong())) {
      case 0l:
        id5264x_1 = id5264in_option0;
        break;
      case 1l:
        id5264x_1 = id5264in_option1;
        break;
      default:
        id5264x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5264out_result[(getCycle()+1)%2] = (id5264x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5265out_output;

  { // Node ID: 5265 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5265in_input = id5264out_result[getCycle()%2];

    id5265out_output = id5265in_input;
  }
  { // Node ID: 5267 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5267in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5267in_option0 = in_vars.id5266out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5267in_option1 = id5265out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5267x_1;

    switch((id5267in_sel.getValueAsLong())) {
      case 0l:
        id5267x_1 = id5267in_option0;
        break;
      case 1l:
        id5267x_1 = id5267in_option1;
        break;
      default:
        id5267x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5267out_result[(getCycle()+1)%2] = (id5267x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5268out_output;

  { // Node ID: 5268 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5268in_input = id5267out_result[getCycle()%2];

    id5268out_output = id5268in_input;
  }
  { // Node ID: 5270 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5270in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5270in_option0 = in_vars.id5269out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5270in_option1 = id5268out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5270x_1;

    switch((id5270in_sel.getValueAsLong())) {
      case 0l:
        id5270x_1 = id5270in_option0;
        break;
      case 1l:
        id5270x_1 = id5270in_option1;
        break;
      default:
        id5270x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5270out_result[(getCycle()+1)%2] = (id5270x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5271out_output;

  { // Node ID: 5271 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5271in_input = id5270out_result[getCycle()%2];

    id5271out_output = id5271in_input;
  }
  { // Node ID: 5273 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5273in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5273in_option0 = in_vars.id5272out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5273in_option1 = id5271out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5273x_1;

    switch((id5273in_sel.getValueAsLong())) {
      case 0l:
        id5273x_1 = id5273in_option0;
        break;
      case 1l:
        id5273x_1 = id5273in_option1;
        break;
      default:
        id5273x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5273out_result[(getCycle()+1)%2] = (id5273x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5274out_output;

  { // Node ID: 5274 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5274in_input = id5273out_result[getCycle()%2];

    id5274out_output = id5274in_input;
  }
  { // Node ID: 5276 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5276in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5276in_option0 = in_vars.id5275out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5276in_option1 = id5274out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5276x_1;

    switch((id5276in_sel.getValueAsLong())) {
      case 0l:
        id5276x_1 = id5276in_option0;
        break;
      case 1l:
        id5276x_1 = id5276in_option1;
        break;
      default:
        id5276x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5276out_result[(getCycle()+1)%2] = (id5276x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5277out_output;

  { // Node ID: 5277 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5277in_input = id5276out_result[getCycle()%2];

    id5277out_output = id5277in_input;
  }
  { // Node ID: 5279 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5279in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5279in_option0 = in_vars.id5278out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5279in_option1 = id5277out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5279x_1;

    switch((id5279in_sel.getValueAsLong())) {
      case 0l:
        id5279x_1 = id5279in_option0;
        break;
      case 1l:
        id5279x_1 = id5279in_option1;
        break;
      default:
        id5279x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5279out_result[(getCycle()+1)%2] = (id5279x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5280out_output;

  { // Node ID: 5280 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5280in_input = id5279out_result[getCycle()%2];

    id5280out_output = id5280in_input;
  }
  { // Node ID: 5282 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5282in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5282in_option0 = in_vars.id5281out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5282in_option1 = id5280out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5282x_1;

    switch((id5282in_sel.getValueAsLong())) {
      case 0l:
        id5282x_1 = id5282in_option0;
        break;
      case 1l:
        id5282x_1 = id5282in_option1;
        break;
      default:
        id5282x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5282out_result[(getCycle()+1)%2] = (id5282x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5283out_output;

  { // Node ID: 5283 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5283in_input = id5282out_result[getCycle()%2];

    id5283out_output = id5283in_input;
  }
  { // Node ID: 5285 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5285in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5285in_option0 = in_vars.id5284out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5285in_option1 = id5283out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5285x_1;

    switch((id5285in_sel.getValueAsLong())) {
      case 0l:
        id5285x_1 = id5285in_option0;
        break;
      case 1l:
        id5285x_1 = id5285in_option1;
        break;
      default:
        id5285x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5285out_result[(getCycle()+1)%2] = (id5285x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5286out_output;

  { // Node ID: 5286 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5286in_input = id5285out_result[getCycle()%2];

    id5286out_output = id5286in_input;
  }
  { // Node ID: 5288 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5288in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5288in_option0 = in_vars.id5287out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5288in_option1 = id5286out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5288x_1;

    switch((id5288in_sel.getValueAsLong())) {
      case 0l:
        id5288x_1 = id5288in_option0;
        break;
      case 1l:
        id5288x_1 = id5288in_option1;
        break;
      default:
        id5288x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5288out_result[(getCycle()+1)%2] = (id5288x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5289out_output;

  { // Node ID: 5289 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5289in_input = id5288out_result[getCycle()%2];

    id5289out_output = id5289in_input;
  }
  { // Node ID: 5291 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5291in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5291in_option0 = in_vars.id5290out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5291in_option1 = id5289out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5291x_1;

    switch((id5291in_sel.getValueAsLong())) {
      case 0l:
        id5291x_1 = id5291in_option0;
        break;
      case 1l:
        id5291x_1 = id5291in_option1;
        break;
      default:
        id5291x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5291out_result[(getCycle()+1)%2] = (id5291x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5292out_output;

  { // Node ID: 5292 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5292in_input = id5291out_result[getCycle()%2];

    id5292out_output = id5292in_input;
  }
  { // Node ID: 5294 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5294in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5294in_option0 = in_vars.id5293out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5294in_option1 = id5292out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5294x_1;

    switch((id5294in_sel.getValueAsLong())) {
      case 0l:
        id5294x_1 = id5294in_option0;
        break;
      case 1l:
        id5294x_1 = id5294in_option1;
        break;
      default:
        id5294x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5294out_result[(getCycle()+1)%2] = (id5294x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5295out_output;

  { // Node ID: 5295 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5295in_input = id5294out_result[getCycle()%2];

    id5295out_output = id5295in_input;
  }
  { // Node ID: 5297 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5297in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5297in_option0 = in_vars.id5296out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5297in_option1 = id5295out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5297x_1;

    switch((id5297in_sel.getValueAsLong())) {
      case 0l:
        id5297x_1 = id5297in_option0;
        break;
      case 1l:
        id5297x_1 = id5297in_option1;
        break;
      default:
        id5297x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5297out_result[(getCycle()+1)%2] = (id5297x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5298out_output;

  { // Node ID: 5298 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5298in_input = id5297out_result[getCycle()%2];

    id5298out_output = id5298in_input;
  }
  { // Node ID: 5300 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5300in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5300in_option0 = in_vars.id5299out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5300in_option1 = id5298out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5300x_1;

    switch((id5300in_sel.getValueAsLong())) {
      case 0l:
        id5300x_1 = id5300in_option0;
        break;
      case 1l:
        id5300x_1 = id5300in_option1;
        break;
      default:
        id5300x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5300out_result[(getCycle()+1)%2] = (id5300x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5301out_output;

  { // Node ID: 5301 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5301in_input = id5300out_result[getCycle()%2];

    id5301out_output = id5301in_input;
  }
  { // Node ID: 5303 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5303in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5303in_option0 = in_vars.id5302out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5303in_option1 = id5301out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5303x_1;

    switch((id5303in_sel.getValueAsLong())) {
      case 0l:
        id5303x_1 = id5303in_option0;
        break;
      case 1l:
        id5303x_1 = id5303in_option1;
        break;
      default:
        id5303x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5303out_result[(getCycle()+1)%2] = (id5303x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5304out_output;

  { // Node ID: 5304 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5304in_input = id5303out_result[getCycle()%2];

    id5304out_output = id5304in_input;
  }
  { // Node ID: 5306 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5306in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5306in_option0 = in_vars.id5305out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5306in_option1 = id5304out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5306x_1;

    switch((id5306in_sel.getValueAsLong())) {
      case 0l:
        id5306x_1 = id5306in_option0;
        break;
      case 1l:
        id5306x_1 = id5306in_option1;
        break;
      default:
        id5306x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5306out_result[(getCycle()+1)%2] = (id5306x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5307out_output;

  { // Node ID: 5307 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5307in_input = id5306out_result[getCycle()%2];

    id5307out_output = id5307in_input;
  }
  { // Node ID: 5309 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5309in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5309in_option0 = in_vars.id5308out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5309in_option1 = id5307out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5309x_1;

    switch((id5309in_sel.getValueAsLong())) {
      case 0l:
        id5309x_1 = id5309in_option0;
        break;
      case 1l:
        id5309x_1 = id5309in_option1;
        break;
      default:
        id5309x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5309out_result[(getCycle()+1)%2] = (id5309x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5310out_output;

  { // Node ID: 5310 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5310in_input = id5309out_result[getCycle()%2];

    id5310out_output = id5310in_input;
  }
  { // Node ID: 5312 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5312in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5312in_option0 = in_vars.id5311out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5312in_option1 = id5310out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5312x_1;

    switch((id5312in_sel.getValueAsLong())) {
      case 0l:
        id5312x_1 = id5312in_option0;
        break;
      case 1l:
        id5312x_1 = id5312in_option1;
        break;
      default:
        id5312x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5312out_result[(getCycle()+1)%2] = (id5312x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5313out_output;

  { // Node ID: 5313 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5313in_input = id5312out_result[getCycle()%2];

    id5313out_output = id5313in_input;
  }
  { // Node ID: 5315 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5315in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5315in_option0 = in_vars.id5314out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5315in_option1 = id5313out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5315x_1;

    switch((id5315in_sel.getValueAsLong())) {
      case 0l:
        id5315x_1 = id5315in_option0;
        break;
      case 1l:
        id5315x_1 = id5315in_option1;
        break;
      default:
        id5315x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5315out_result[(getCycle()+1)%2] = (id5315x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5316out_output;

  { // Node ID: 5316 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5316in_input = id5315out_result[getCycle()%2];

    id5316out_output = id5316in_input;
  }
  { // Node ID: 5318 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5318in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5318in_option0 = in_vars.id5317out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5318in_option1 = id5316out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5318x_1;

    switch((id5318in_sel.getValueAsLong())) {
      case 0l:
        id5318x_1 = id5318in_option0;
        break;
      case 1l:
        id5318x_1 = id5318in_option1;
        break;
      default:
        id5318x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5318out_result[(getCycle()+1)%2] = (id5318x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5319out_output;

  { // Node ID: 5319 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5319in_input = id5318out_result[getCycle()%2];

    id5319out_output = id5319in_input;
  }
  { // Node ID: 5321 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5321in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5321in_option0 = in_vars.id5320out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5321in_option1 = id5319out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5321x_1;

    switch((id5321in_sel.getValueAsLong())) {
      case 0l:
        id5321x_1 = id5321in_option0;
        break;
      case 1l:
        id5321x_1 = id5321in_option1;
        break;
      default:
        id5321x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5321out_result[(getCycle()+1)%2] = (id5321x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5322out_output;

  { // Node ID: 5322 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5322in_input = id5321out_result[getCycle()%2];

    id5322out_output = id5322in_input;
  }
  { // Node ID: 5324 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5324in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5324in_option0 = in_vars.id5323out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5324in_option1 = id5322out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5324x_1;

    switch((id5324in_sel.getValueAsLong())) {
      case 0l:
        id5324x_1 = id5324in_option0;
        break;
      case 1l:
        id5324x_1 = id5324in_option1;
        break;
      default:
        id5324x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5324out_result[(getCycle()+1)%2] = (id5324x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5325out_output;

  { // Node ID: 5325 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5325in_input = id5324out_result[getCycle()%2];

    id5325out_output = id5325in_input;
  }
  { // Node ID: 5327 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5327in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5327in_option0 = in_vars.id5326out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5327in_option1 = id5325out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5327x_1;

    switch((id5327in_sel.getValueAsLong())) {
      case 0l:
        id5327x_1 = id5327in_option0;
        break;
      case 1l:
        id5327x_1 = id5327in_option1;
        break;
      default:
        id5327x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5327out_result[(getCycle()+1)%2] = (id5327x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5328out_output;

  { // Node ID: 5328 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5328in_input = id5327out_result[getCycle()%2];

    id5328out_output = id5328in_input;
  }
  { // Node ID: 5330 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5330in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5330in_option0 = in_vars.id5329out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5330in_option1 = id5328out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5330x_1;

    switch((id5330in_sel.getValueAsLong())) {
      case 0l:
        id5330x_1 = id5330in_option0;
        break;
      case 1l:
        id5330x_1 = id5330in_option1;
        break;
      default:
        id5330x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5330out_result[(getCycle()+1)%2] = (id5330x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5331out_output;

  { // Node ID: 5331 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5331in_input = id5330out_result[getCycle()%2];

    id5331out_output = id5331in_input;
  }
  { // Node ID: 5333 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5333in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5333in_option0 = in_vars.id5332out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5333in_option1 = id5331out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5333x_1;

    switch((id5333in_sel.getValueAsLong())) {
      case 0l:
        id5333x_1 = id5333in_option0;
        break;
      case 1l:
        id5333x_1 = id5333in_option1;
        break;
      default:
        id5333x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5333out_result[(getCycle()+1)%2] = (id5333x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5334out_output;

  { // Node ID: 5334 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5334in_input = id5333out_result[getCycle()%2];

    id5334out_output = id5334in_input;
  }
  { // Node ID: 5336 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5336in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5336in_option0 = in_vars.id5335out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5336in_option1 = id5334out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5336x_1;

    switch((id5336in_sel.getValueAsLong())) {
      case 0l:
        id5336x_1 = id5336in_option0;
        break;
      case 1l:
        id5336x_1 = id5336in_option1;
        break;
      default:
        id5336x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5336out_result[(getCycle()+1)%2] = (id5336x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5337out_output;

  { // Node ID: 5337 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5337in_input = id5336out_result[getCycle()%2];

    id5337out_output = id5337in_input;
  }
  { // Node ID: 5339 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5339in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5339in_option0 = in_vars.id5338out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5339in_option1 = id5337out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5339x_1;

    switch((id5339in_sel.getValueAsLong())) {
      case 0l:
        id5339x_1 = id5339in_option0;
        break;
      case 1l:
        id5339x_1 = id5339in_option1;
        break;
      default:
        id5339x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5339out_result[(getCycle()+1)%2] = (id5339x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5340out_output;

  { // Node ID: 5340 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5340in_input = id5339out_result[getCycle()%2];

    id5340out_output = id5340in_input;
  }
  { // Node ID: 5342 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5342in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5342in_option0 = in_vars.id5341out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5342in_option1 = id5340out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5342x_1;

    switch((id5342in_sel.getValueAsLong())) {
      case 0l:
        id5342x_1 = id5342in_option0;
        break;
      case 1l:
        id5342x_1 = id5342in_option1;
        break;
      default:
        id5342x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5342out_result[(getCycle()+1)%2] = (id5342x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5343out_output;

  { // Node ID: 5343 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5343in_input = id5342out_result[getCycle()%2];

    id5343out_output = id5343in_input;
  }
  { // Node ID: 5345 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5345in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5345in_option0 = in_vars.id5344out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5345in_option1 = id5343out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5345x_1;

    switch((id5345in_sel.getValueAsLong())) {
      case 0l:
        id5345x_1 = id5345in_option0;
        break;
      case 1l:
        id5345x_1 = id5345in_option1;
        break;
      default:
        id5345x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5345out_result[(getCycle()+1)%2] = (id5345x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5346out_output;

  { // Node ID: 5346 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5346in_input = id5345out_result[getCycle()%2];

    id5346out_output = id5346in_input;
  }
  { // Node ID: 5348 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5348in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5348in_option0 = in_vars.id5347out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5348in_option1 = id5346out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5348x_1;

    switch((id5348in_sel.getValueAsLong())) {
      case 0l:
        id5348x_1 = id5348in_option0;
        break;
      case 1l:
        id5348x_1 = id5348in_option1;
        break;
      default:
        id5348x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5348out_result[(getCycle()+1)%2] = (id5348x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5349out_output;

  { // Node ID: 5349 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5349in_input = id5348out_result[getCycle()%2];

    id5349out_output = id5349in_input;
  }
  { // Node ID: 5351 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5351in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5351in_option0 = in_vars.id5350out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5351in_option1 = id5349out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5351x_1;

    switch((id5351in_sel.getValueAsLong())) {
      case 0l:
        id5351x_1 = id5351in_option0;
        break;
      case 1l:
        id5351x_1 = id5351in_option1;
        break;
      default:
        id5351x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5351out_result[(getCycle()+1)%2] = (id5351x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5352out_output;

  { // Node ID: 5352 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5352in_input = id5351out_result[getCycle()%2];

    id5352out_output = id5352in_input;
  }
  { // Node ID: 5354 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5354in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5354in_option0 = in_vars.id5353out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5354in_option1 = id5352out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5354x_1;

    switch((id5354in_sel.getValueAsLong())) {
      case 0l:
        id5354x_1 = id5354in_option0;
        break;
      case 1l:
        id5354x_1 = id5354in_option1;
        break;
      default:
        id5354x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5354out_result[(getCycle()+1)%2] = (id5354x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5355out_output;

  { // Node ID: 5355 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5355in_input = id5354out_result[getCycle()%2];

    id5355out_output = id5355in_input;
  }
  { // Node ID: 5357 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5357in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5357in_option0 = in_vars.id5356out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5357in_option1 = id5355out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5357x_1;

    switch((id5357in_sel.getValueAsLong())) {
      case 0l:
        id5357x_1 = id5357in_option0;
        break;
      case 1l:
        id5357x_1 = id5357in_option1;
        break;
      default:
        id5357x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5357out_result[(getCycle()+1)%2] = (id5357x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5358out_output;

  { // Node ID: 5358 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5358in_input = id5357out_result[getCycle()%2];

    id5358out_output = id5358in_input;
  }
  { // Node ID: 5360 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5360in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5360in_option0 = in_vars.id5359out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5360in_option1 = id5358out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5360x_1;

    switch((id5360in_sel.getValueAsLong())) {
      case 0l:
        id5360x_1 = id5360in_option0;
        break;
      case 1l:
        id5360x_1 = id5360in_option1;
        break;
      default:
        id5360x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5360out_result[(getCycle()+1)%2] = (id5360x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5361out_output;

  { // Node ID: 5361 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5361in_input = id5360out_result[getCycle()%2];

    id5361out_output = id5361in_input;
  }
  { // Node ID: 5363 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5363in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5363in_option0 = in_vars.id5362out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5363in_option1 = id5361out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5363x_1;

    switch((id5363in_sel.getValueAsLong())) {
      case 0l:
        id5363x_1 = id5363in_option0;
        break;
      case 1l:
        id5363x_1 = id5363in_option1;
        break;
      default:
        id5363x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5363out_result[(getCycle()+1)%2] = (id5363x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5364out_output;

  { // Node ID: 5364 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5364in_input = id5363out_result[getCycle()%2];

    id5364out_output = id5364in_input;
  }
  { // Node ID: 5366 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5366in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5366in_option0 = in_vars.id5365out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5366in_option1 = id5364out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5366x_1;

    switch((id5366in_sel.getValueAsLong())) {
      case 0l:
        id5366x_1 = id5366in_option0;
        break;
      case 1l:
        id5366x_1 = id5366in_option1;
        break;
      default:
        id5366x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5366out_result[(getCycle()+1)%2] = (id5366x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5367out_output;

  { // Node ID: 5367 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5367in_input = id5366out_result[getCycle()%2];

    id5367out_output = id5367in_input;
  }
  { // Node ID: 5369 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5369in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5369in_option0 = in_vars.id5368out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5369in_option1 = id5367out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5369x_1;

    switch((id5369in_sel.getValueAsLong())) {
      case 0l:
        id5369x_1 = id5369in_option0;
        break;
      case 1l:
        id5369x_1 = id5369in_option1;
        break;
      default:
        id5369x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5369out_result[(getCycle()+1)%2] = (id5369x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5370out_output;

  { // Node ID: 5370 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5370in_input = id5369out_result[getCycle()%2];

    id5370out_output = id5370in_input;
  }
  { // Node ID: 5372 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5372in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5372in_option0 = in_vars.id5371out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5372in_option1 = id5370out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5372x_1;

    switch((id5372in_sel.getValueAsLong())) {
      case 0l:
        id5372x_1 = id5372in_option0;
        break;
      case 1l:
        id5372x_1 = id5372in_option1;
        break;
      default:
        id5372x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5372out_result[(getCycle()+1)%2] = (id5372x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5373out_output;

  { // Node ID: 5373 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5373in_input = id5372out_result[getCycle()%2];

    id5373out_output = id5373in_input;
  }
  { // Node ID: 5375 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5375in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5375in_option0 = in_vars.id5374out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5375in_option1 = id5373out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5375x_1;

    switch((id5375in_sel.getValueAsLong())) {
      case 0l:
        id5375x_1 = id5375in_option0;
        break;
      case 1l:
        id5375x_1 = id5375in_option1;
        break;
      default:
        id5375x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5375out_result[(getCycle()+1)%2] = (id5375x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5376out_output;

  { // Node ID: 5376 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5376in_input = id5375out_result[getCycle()%2];

    id5376out_output = id5376in_input;
  }
  { // Node ID: 5378 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5378in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5378in_option0 = in_vars.id5377out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5378in_option1 = id5376out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5378x_1;

    switch((id5378in_sel.getValueAsLong())) {
      case 0l:
        id5378x_1 = id5378in_option0;
        break;
      case 1l:
        id5378x_1 = id5378in_option1;
        break;
      default:
        id5378x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5378out_result[(getCycle()+1)%2] = (id5378x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5379out_output;

  { // Node ID: 5379 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5379in_input = id5378out_result[getCycle()%2];

    id5379out_output = id5379in_input;
  }
  { // Node ID: 5381 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5381in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5381in_option0 = in_vars.id5380out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5381in_option1 = id5379out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5381x_1;

    switch((id5381in_sel.getValueAsLong())) {
      case 0l:
        id5381x_1 = id5381in_option0;
        break;
      case 1l:
        id5381x_1 = id5381in_option1;
        break;
      default:
        id5381x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5381out_result[(getCycle()+1)%2] = (id5381x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5382out_output;

  { // Node ID: 5382 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5382in_input = id5381out_result[getCycle()%2];

    id5382out_output = id5382in_input;
  }
  { // Node ID: 5384 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5384in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5384in_option0 = in_vars.id5383out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5384in_option1 = id5382out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5384x_1;

    switch((id5384in_sel.getValueAsLong())) {
      case 0l:
        id5384x_1 = id5384in_option0;
        break;
      case 1l:
        id5384x_1 = id5384in_option1;
        break;
      default:
        id5384x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5384out_result[(getCycle()+1)%2] = (id5384x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5385out_output;

  { // Node ID: 5385 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5385in_input = id5384out_result[getCycle()%2];

    id5385out_output = id5385in_input;
  }
  { // Node ID: 5387 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5387in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5387in_option0 = in_vars.id5386out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5387in_option1 = id5385out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5387x_1;

    switch((id5387in_sel.getValueAsLong())) {
      case 0l:
        id5387x_1 = id5387in_option0;
        break;
      case 1l:
        id5387x_1 = id5387in_option1;
        break;
      default:
        id5387x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5387out_result[(getCycle()+1)%2] = (id5387x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5388out_output;

  { // Node ID: 5388 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5388in_input = id5387out_result[getCycle()%2];

    id5388out_output = id5388in_input;
  }
  { // Node ID: 5390 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5390in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5390in_option0 = in_vars.id5389out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5390in_option1 = id5388out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5390x_1;

    switch((id5390in_sel.getValueAsLong())) {
      case 0l:
        id5390x_1 = id5390in_option0;
        break;
      case 1l:
        id5390x_1 = id5390in_option1;
        break;
      default:
        id5390x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5390out_result[(getCycle()+1)%2] = (id5390x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5391out_output;

  { // Node ID: 5391 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5391in_input = id5390out_result[getCycle()%2];

    id5391out_output = id5391in_input;
  }
  { // Node ID: 5393 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5393in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5393in_option0 = in_vars.id5392out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5393in_option1 = id5391out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5393x_1;

    switch((id5393in_sel.getValueAsLong())) {
      case 0l:
        id5393x_1 = id5393in_option0;
        break;
      case 1l:
        id5393x_1 = id5393in_option1;
        break;
      default:
        id5393x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5393out_result[(getCycle()+1)%2] = (id5393x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5394out_output;

  { // Node ID: 5394 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5394in_input = id5393out_result[getCycle()%2];

    id5394out_output = id5394in_input;
  }
  { // Node ID: 5396 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5396in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5396in_option0 = in_vars.id5395out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5396in_option1 = id5394out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5396x_1;

    switch((id5396in_sel.getValueAsLong())) {
      case 0l:
        id5396x_1 = id5396in_option0;
        break;
      case 1l:
        id5396x_1 = id5396in_option1;
        break;
      default:
        id5396x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5396out_result[(getCycle()+1)%2] = (id5396x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5397out_output;

  { // Node ID: 5397 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5397in_input = id5396out_result[getCycle()%2];

    id5397out_output = id5397in_input;
  }
  { // Node ID: 5399 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5399in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5399in_option0 = in_vars.id5398out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5399in_option1 = id5397out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5399x_1;

    switch((id5399in_sel.getValueAsLong())) {
      case 0l:
        id5399x_1 = id5399in_option0;
        break;
      case 1l:
        id5399x_1 = id5399in_option1;
        break;
      default:
        id5399x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5399out_result[(getCycle()+1)%2] = (id5399x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5400out_output;

  { // Node ID: 5400 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5400in_input = id5399out_result[getCycle()%2];

    id5400out_output = id5400in_input;
  }
  { // Node ID: 5402 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5402in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5402in_option0 = in_vars.id5401out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5402in_option1 = id5400out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5402x_1;

    switch((id5402in_sel.getValueAsLong())) {
      case 0l:
        id5402x_1 = id5402in_option0;
        break;
      case 1l:
        id5402x_1 = id5402in_option1;
        break;
      default:
        id5402x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5402out_result[(getCycle()+1)%2] = (id5402x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5403out_output;

  { // Node ID: 5403 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5403in_input = id5402out_result[getCycle()%2];

    id5403out_output = id5403in_input;
  }
  { // Node ID: 5405 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5405in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5405in_option0 = in_vars.id5404out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5405in_option1 = id5403out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5405x_1;

    switch((id5405in_sel.getValueAsLong())) {
      case 0l:
        id5405x_1 = id5405in_option0;
        break;
      case 1l:
        id5405x_1 = id5405in_option1;
        break;
      default:
        id5405x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5405out_result[(getCycle()+1)%2] = (id5405x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5406out_output;

  { // Node ID: 5406 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5406in_input = id5405out_result[getCycle()%2];

    id5406out_output = id5406in_input;
  }
  { // Node ID: 5408 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5408in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5408in_option0 = in_vars.id5407out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5408in_option1 = id5406out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5408x_1;

    switch((id5408in_sel.getValueAsLong())) {
      case 0l:
        id5408x_1 = id5408in_option0;
        break;
      case 1l:
        id5408x_1 = id5408in_option1;
        break;
      default:
        id5408x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5408out_result[(getCycle()+1)%2] = (id5408x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5409out_output;

  { // Node ID: 5409 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5409in_input = id5408out_result[getCycle()%2];

    id5409out_output = id5409in_input;
  }
  { // Node ID: 5411 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5411in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5411in_option0 = in_vars.id5410out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5411in_option1 = id5409out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5411x_1;

    switch((id5411in_sel.getValueAsLong())) {
      case 0l:
        id5411x_1 = id5411in_option0;
        break;
      case 1l:
        id5411x_1 = id5411in_option1;
        break;
      default:
        id5411x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5411out_result[(getCycle()+1)%2] = (id5411x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5412out_output;

  { // Node ID: 5412 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5412in_input = id5411out_result[getCycle()%2];

    id5412out_output = id5412in_input;
  }
  { // Node ID: 5414 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5414in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5414in_option0 = in_vars.id5413out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5414in_option1 = id5412out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5414x_1;

    switch((id5414in_sel.getValueAsLong())) {
      case 0l:
        id5414x_1 = id5414in_option0;
        break;
      case 1l:
        id5414x_1 = id5414in_option1;
        break;
      default:
        id5414x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5414out_result[(getCycle()+1)%2] = (id5414x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5415out_output;

  { // Node ID: 5415 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5415in_input = id5414out_result[getCycle()%2];

    id5415out_output = id5415in_input;
  }
  { // Node ID: 5417 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5417in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5417in_option0 = in_vars.id5416out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5417in_option1 = id5415out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5417x_1;

    switch((id5417in_sel.getValueAsLong())) {
      case 0l:
        id5417x_1 = id5417in_option0;
        break;
      case 1l:
        id5417x_1 = id5417in_option1;
        break;
      default:
        id5417x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5417out_result[(getCycle()+1)%2] = (id5417x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5418out_output;

  { // Node ID: 5418 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5418in_input = id5417out_result[getCycle()%2];

    id5418out_output = id5418in_input;
  }
  { // Node ID: 5420 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5420in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5420in_option0 = in_vars.id5419out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5420in_option1 = id5418out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5420x_1;

    switch((id5420in_sel.getValueAsLong())) {
      case 0l:
        id5420x_1 = id5420in_option0;
        break;
      case 1l:
        id5420x_1 = id5420in_option1;
        break;
      default:
        id5420x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5420out_result[(getCycle()+1)%2] = (id5420x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5421out_output;

  { // Node ID: 5421 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5421in_input = id5420out_result[getCycle()%2];

    id5421out_output = id5421in_input;
  }
  { // Node ID: 5423 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5423in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5423in_option0 = in_vars.id5422out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5423in_option1 = id5421out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5423x_1;

    switch((id5423in_sel.getValueAsLong())) {
      case 0l:
        id5423x_1 = id5423in_option0;
        break;
      case 1l:
        id5423x_1 = id5423in_option1;
        break;
      default:
        id5423x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5423out_result[(getCycle()+1)%2] = (id5423x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5424out_output;

  { // Node ID: 5424 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5424in_input = id5423out_result[getCycle()%2];

    id5424out_output = id5424in_input;
  }
  { // Node ID: 5426 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5426in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5426in_option0 = in_vars.id5425out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5426in_option1 = id5424out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5426x_1;

    switch((id5426in_sel.getValueAsLong())) {
      case 0l:
        id5426x_1 = id5426in_option0;
        break;
      case 1l:
        id5426x_1 = id5426in_option1;
        break;
      default:
        id5426x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5426out_result[(getCycle()+1)%2] = (id5426x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5427out_output;

  { // Node ID: 5427 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5427in_input = id5426out_result[getCycle()%2];

    id5427out_output = id5427in_input;
  }
  { // Node ID: 5429 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5429in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5429in_option0 = in_vars.id5428out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5429in_option1 = id5427out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5429x_1;

    switch((id5429in_sel.getValueAsLong())) {
      case 0l:
        id5429x_1 = id5429in_option0;
        break;
      case 1l:
        id5429x_1 = id5429in_option1;
        break;
      default:
        id5429x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5429out_result[(getCycle()+1)%2] = (id5429x_1);
  }

  sliding_window10Block12Vars out_vars;
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
  return out_vars;
};

};
