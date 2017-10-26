#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window10_exec6.h"
//#include "sliding_window10_exec7.h"
//#include "sliding_window10.h"

namespace maxcompilersim {

sliding_window10Block7Vars sliding_window10::execute6(const sliding_window10Block6Vars &in_vars) {
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2718out_output;

  { // Node ID: 2718 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2718in_input = id2717out_result[getCycle()%2];

    id2718out_output = id2718in_input;
  }
  { // Node ID: 2720 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2720in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2720in_option0 = in_vars.id2719out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2720in_option1 = id2718out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2720x_1;

    switch((id2720in_sel.getValueAsLong())) {
      case 0l:
        id2720x_1 = id2720in_option0;
        break;
      case 1l:
        id2720x_1 = id2720in_option1;
        break;
      default:
        id2720x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2720out_result[(getCycle()+1)%2] = (id2720x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2721out_output;

  { // Node ID: 2721 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2721in_input = id2720out_result[getCycle()%2];

    id2721out_output = id2721in_input;
  }
  { // Node ID: 2723 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2723in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2723in_option0 = in_vars.id2722out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2723in_option1 = id2721out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2723x_1;

    switch((id2723in_sel.getValueAsLong())) {
      case 0l:
        id2723x_1 = id2723in_option0;
        break;
      case 1l:
        id2723x_1 = id2723in_option1;
        break;
      default:
        id2723x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2723out_result[(getCycle()+1)%2] = (id2723x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2724out_output;

  { // Node ID: 2724 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2724in_input = id2723out_result[getCycle()%2];

    id2724out_output = id2724in_input;
  }
  { // Node ID: 2726 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2726in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2726in_option0 = in_vars.id2725out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2726in_option1 = id2724out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2726x_1;

    switch((id2726in_sel.getValueAsLong())) {
      case 0l:
        id2726x_1 = id2726in_option0;
        break;
      case 1l:
        id2726x_1 = id2726in_option1;
        break;
      default:
        id2726x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2726out_result[(getCycle()+1)%2] = (id2726x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2727out_output;

  { // Node ID: 2727 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2727in_input = id2726out_result[getCycle()%2];

    id2727out_output = id2727in_input;
  }
  { // Node ID: 2729 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2729in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2729in_option0 = in_vars.id2728out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2729in_option1 = id2727out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2729x_1;

    switch((id2729in_sel.getValueAsLong())) {
      case 0l:
        id2729x_1 = id2729in_option0;
        break;
      case 1l:
        id2729x_1 = id2729in_option1;
        break;
      default:
        id2729x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2729out_result[(getCycle()+1)%2] = (id2729x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2730out_output;

  { // Node ID: 2730 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2730in_input = id2729out_result[getCycle()%2];

    id2730out_output = id2730in_input;
  }
  { // Node ID: 2732 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2732in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2732in_option0 = in_vars.id2731out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2732in_option1 = id2730out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2732x_1;

    switch((id2732in_sel.getValueAsLong())) {
      case 0l:
        id2732x_1 = id2732in_option0;
        break;
      case 1l:
        id2732x_1 = id2732in_option1;
        break;
      default:
        id2732x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2732out_result[(getCycle()+1)%2] = (id2732x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2733out_output;

  { // Node ID: 2733 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2733in_input = id2732out_result[getCycle()%2];

    id2733out_output = id2733in_input;
  }
  { // Node ID: 2735 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2735in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2735in_option0 = in_vars.id2734out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2735in_option1 = id2733out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2735x_1;

    switch((id2735in_sel.getValueAsLong())) {
      case 0l:
        id2735x_1 = id2735in_option0;
        break;
      case 1l:
        id2735x_1 = id2735in_option1;
        break;
      default:
        id2735x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2735out_result[(getCycle()+1)%2] = (id2735x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2736out_output;

  { // Node ID: 2736 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2736in_input = id2735out_result[getCycle()%2];

    id2736out_output = id2736in_input;
  }
  { // Node ID: 2738 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2738in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2738in_option0 = in_vars.id2737out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2738in_option1 = id2736out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2738x_1;

    switch((id2738in_sel.getValueAsLong())) {
      case 0l:
        id2738x_1 = id2738in_option0;
        break;
      case 1l:
        id2738x_1 = id2738in_option1;
        break;
      default:
        id2738x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2738out_result[(getCycle()+1)%2] = (id2738x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2739out_output;

  { // Node ID: 2739 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2739in_input = id2738out_result[getCycle()%2];

    id2739out_output = id2739in_input;
  }
  { // Node ID: 2741 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2741in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2741in_option0 = in_vars.id2740out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2741in_option1 = id2739out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2741x_1;

    switch((id2741in_sel.getValueAsLong())) {
      case 0l:
        id2741x_1 = id2741in_option0;
        break;
      case 1l:
        id2741x_1 = id2741in_option1;
        break;
      default:
        id2741x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2741out_result[(getCycle()+1)%2] = (id2741x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2742out_output;

  { // Node ID: 2742 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2742in_input = id2741out_result[getCycle()%2];

    id2742out_output = id2742in_input;
  }
  { // Node ID: 2744 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2744in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2744in_option0 = in_vars.id2743out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2744in_option1 = id2742out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2744x_1;

    switch((id2744in_sel.getValueAsLong())) {
      case 0l:
        id2744x_1 = id2744in_option0;
        break;
      case 1l:
        id2744x_1 = id2744in_option1;
        break;
      default:
        id2744x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2744out_result[(getCycle()+1)%2] = (id2744x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2745out_output;

  { // Node ID: 2745 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2745in_input = id2744out_result[getCycle()%2];

    id2745out_output = id2745in_input;
  }
  { // Node ID: 2747 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2747in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2747in_option0 = in_vars.id2746out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2747in_option1 = id2745out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2747x_1;

    switch((id2747in_sel.getValueAsLong())) {
      case 0l:
        id2747x_1 = id2747in_option0;
        break;
      case 1l:
        id2747x_1 = id2747in_option1;
        break;
      default:
        id2747x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2747out_result[(getCycle()+1)%2] = (id2747x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2748out_output;

  { // Node ID: 2748 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2748in_input = id2747out_result[getCycle()%2];

    id2748out_output = id2748in_input;
  }
  { // Node ID: 2750 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2750in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2750in_option0 = in_vars.id2749out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2750in_option1 = id2748out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2750x_1;

    switch((id2750in_sel.getValueAsLong())) {
      case 0l:
        id2750x_1 = id2750in_option0;
        break;
      case 1l:
        id2750x_1 = id2750in_option1;
        break;
      default:
        id2750x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2750out_result[(getCycle()+1)%2] = (id2750x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2751out_output;

  { // Node ID: 2751 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2751in_input = id2750out_result[getCycle()%2];

    id2751out_output = id2751in_input;
  }
  { // Node ID: 2753 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2753in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2753in_option0 = in_vars.id2752out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2753in_option1 = id2751out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2753x_1;

    switch((id2753in_sel.getValueAsLong())) {
      case 0l:
        id2753x_1 = id2753in_option0;
        break;
      case 1l:
        id2753x_1 = id2753in_option1;
        break;
      default:
        id2753x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2753out_result[(getCycle()+1)%2] = (id2753x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2754out_output;

  { // Node ID: 2754 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2754in_input = id2753out_result[getCycle()%2];

    id2754out_output = id2754in_input;
  }
  { // Node ID: 2756 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2756in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2756in_option0 = in_vars.id2755out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2756in_option1 = id2754out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2756x_1;

    switch((id2756in_sel.getValueAsLong())) {
      case 0l:
        id2756x_1 = id2756in_option0;
        break;
      case 1l:
        id2756x_1 = id2756in_option1;
        break;
      default:
        id2756x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2756out_result[(getCycle()+1)%2] = (id2756x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2757out_output;

  { // Node ID: 2757 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2757in_input = id2756out_result[getCycle()%2];

    id2757out_output = id2757in_input;
  }
  { // Node ID: 2759 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2759in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2759in_option0 = in_vars.id2758out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2759in_option1 = id2757out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2759x_1;

    switch((id2759in_sel.getValueAsLong())) {
      case 0l:
        id2759x_1 = id2759in_option0;
        break;
      case 1l:
        id2759x_1 = id2759in_option1;
        break;
      default:
        id2759x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2759out_result[(getCycle()+1)%2] = (id2759x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2760out_output;

  { // Node ID: 2760 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2760in_input = id2759out_result[getCycle()%2];

    id2760out_output = id2760in_input;
  }
  { // Node ID: 2762 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2762in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2762in_option0 = in_vars.id2761out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2762in_option1 = id2760out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2762x_1;

    switch((id2762in_sel.getValueAsLong())) {
      case 0l:
        id2762x_1 = id2762in_option0;
        break;
      case 1l:
        id2762x_1 = id2762in_option1;
        break;
      default:
        id2762x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2762out_result[(getCycle()+1)%2] = (id2762x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2763out_output;

  { // Node ID: 2763 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2763in_input = id2762out_result[getCycle()%2];

    id2763out_output = id2763in_input;
  }
  { // Node ID: 2765 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2765in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2765in_option0 = in_vars.id2764out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2765in_option1 = id2763out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2765x_1;

    switch((id2765in_sel.getValueAsLong())) {
      case 0l:
        id2765x_1 = id2765in_option0;
        break;
      case 1l:
        id2765x_1 = id2765in_option1;
        break;
      default:
        id2765x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2765out_result[(getCycle()+1)%2] = (id2765x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2766out_output;

  { // Node ID: 2766 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2766in_input = id2765out_result[getCycle()%2];

    id2766out_output = id2766in_input;
  }
  { // Node ID: 2768 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2768in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2768in_option0 = in_vars.id2767out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2768in_option1 = id2766out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2768x_1;

    switch((id2768in_sel.getValueAsLong())) {
      case 0l:
        id2768x_1 = id2768in_option0;
        break;
      case 1l:
        id2768x_1 = id2768in_option1;
        break;
      default:
        id2768x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2768out_result[(getCycle()+1)%2] = (id2768x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2769out_output;

  { // Node ID: 2769 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2769in_input = id2768out_result[getCycle()%2];

    id2769out_output = id2769in_input;
  }
  { // Node ID: 2771 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2771in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2771in_option0 = in_vars.id2770out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2771in_option1 = id2769out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2771x_1;

    switch((id2771in_sel.getValueAsLong())) {
      case 0l:
        id2771x_1 = id2771in_option0;
        break;
      case 1l:
        id2771x_1 = id2771in_option1;
        break;
      default:
        id2771x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2771out_result[(getCycle()+1)%2] = (id2771x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2772out_output;

  { // Node ID: 2772 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2772in_input = id2771out_result[getCycle()%2];

    id2772out_output = id2772in_input;
  }
  { // Node ID: 2774 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2774in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2774in_option0 = in_vars.id2773out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2774in_option1 = id2772out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2774x_1;

    switch((id2774in_sel.getValueAsLong())) {
      case 0l:
        id2774x_1 = id2774in_option0;
        break;
      case 1l:
        id2774x_1 = id2774in_option1;
        break;
      default:
        id2774x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2774out_result[(getCycle()+1)%2] = (id2774x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2775out_output;

  { // Node ID: 2775 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2775in_input = id2774out_result[getCycle()%2];

    id2775out_output = id2775in_input;
  }
  { // Node ID: 2777 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2777in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2777in_option0 = in_vars.id2776out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2777in_option1 = id2775out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2777x_1;

    switch((id2777in_sel.getValueAsLong())) {
      case 0l:
        id2777x_1 = id2777in_option0;
        break;
      case 1l:
        id2777x_1 = id2777in_option1;
        break;
      default:
        id2777x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2777out_result[(getCycle()+1)%2] = (id2777x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2778out_output;

  { // Node ID: 2778 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2778in_input = id2777out_result[getCycle()%2];

    id2778out_output = id2778in_input;
  }
  { // Node ID: 2780 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2780in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2780in_option0 = in_vars.id2779out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2780in_option1 = id2778out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2780x_1;

    switch((id2780in_sel.getValueAsLong())) {
      case 0l:
        id2780x_1 = id2780in_option0;
        break;
      case 1l:
        id2780x_1 = id2780in_option1;
        break;
      default:
        id2780x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2780out_result[(getCycle()+1)%2] = (id2780x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2781out_output;

  { // Node ID: 2781 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2781in_input = id2780out_result[getCycle()%2];

    id2781out_output = id2781in_input;
  }
  { // Node ID: 2783 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2783in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2783in_option0 = in_vars.id2782out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2783in_option1 = id2781out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2783x_1;

    switch((id2783in_sel.getValueAsLong())) {
      case 0l:
        id2783x_1 = id2783in_option0;
        break;
      case 1l:
        id2783x_1 = id2783in_option1;
        break;
      default:
        id2783x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2783out_result[(getCycle()+1)%2] = (id2783x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2784out_output;

  { // Node ID: 2784 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2784in_input = id2783out_result[getCycle()%2];

    id2784out_output = id2784in_input;
  }
  { // Node ID: 2786 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2786in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2786in_option0 = in_vars.id2785out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2786in_option1 = id2784out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2786x_1;

    switch((id2786in_sel.getValueAsLong())) {
      case 0l:
        id2786x_1 = id2786in_option0;
        break;
      case 1l:
        id2786x_1 = id2786in_option1;
        break;
      default:
        id2786x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2786out_result[(getCycle()+1)%2] = (id2786x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2787out_output;

  { // Node ID: 2787 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2787in_input = id2786out_result[getCycle()%2];

    id2787out_output = id2787in_input;
  }
  { // Node ID: 2789 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2789in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2789in_option0 = in_vars.id2788out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2789in_option1 = id2787out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2789x_1;

    switch((id2789in_sel.getValueAsLong())) {
      case 0l:
        id2789x_1 = id2789in_option0;
        break;
      case 1l:
        id2789x_1 = id2789in_option1;
        break;
      default:
        id2789x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2789out_result[(getCycle()+1)%2] = (id2789x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2790out_output;

  { // Node ID: 2790 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2790in_input = id2789out_result[getCycle()%2];

    id2790out_output = id2790in_input;
  }
  { // Node ID: 2792 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2792in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2792in_option0 = in_vars.id2791out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2792in_option1 = id2790out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2792x_1;

    switch((id2792in_sel.getValueAsLong())) {
      case 0l:
        id2792x_1 = id2792in_option0;
        break;
      case 1l:
        id2792x_1 = id2792in_option1;
        break;
      default:
        id2792x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2792out_result[(getCycle()+1)%2] = (id2792x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2793out_output;

  { // Node ID: 2793 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2793in_input = id2792out_result[getCycle()%2];

    id2793out_output = id2793in_input;
  }
  { // Node ID: 2795 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2795in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2795in_option0 = in_vars.id2794out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2795in_option1 = id2793out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2795x_1;

    switch((id2795in_sel.getValueAsLong())) {
      case 0l:
        id2795x_1 = id2795in_option0;
        break;
      case 1l:
        id2795x_1 = id2795in_option1;
        break;
      default:
        id2795x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2795out_result[(getCycle()+1)%2] = (id2795x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2796out_output;

  { // Node ID: 2796 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2796in_input = id2795out_result[getCycle()%2];

    id2796out_output = id2796in_input;
  }
  { // Node ID: 2798 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2798in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2798in_option0 = in_vars.id2797out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2798in_option1 = id2796out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2798x_1;

    switch((id2798in_sel.getValueAsLong())) {
      case 0l:
        id2798x_1 = id2798in_option0;
        break;
      case 1l:
        id2798x_1 = id2798in_option1;
        break;
      default:
        id2798x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2798out_result[(getCycle()+1)%2] = (id2798x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2799out_output;

  { // Node ID: 2799 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2799in_input = id2798out_result[getCycle()%2];

    id2799out_output = id2799in_input;
  }
  { // Node ID: 2801 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2801in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2801in_option0 = in_vars.id2800out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2801in_option1 = id2799out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2801x_1;

    switch((id2801in_sel.getValueAsLong())) {
      case 0l:
        id2801x_1 = id2801in_option0;
        break;
      case 1l:
        id2801x_1 = id2801in_option1;
        break;
      default:
        id2801x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2801out_result[(getCycle()+1)%2] = (id2801x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2802out_output;

  { // Node ID: 2802 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2802in_input = id2801out_result[getCycle()%2];

    id2802out_output = id2802in_input;
  }
  { // Node ID: 2804 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2804in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2804in_option0 = in_vars.id2803out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2804in_option1 = id2802out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2804x_1;

    switch((id2804in_sel.getValueAsLong())) {
      case 0l:
        id2804x_1 = id2804in_option0;
        break;
      case 1l:
        id2804x_1 = id2804in_option1;
        break;
      default:
        id2804x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2804out_result[(getCycle()+1)%2] = (id2804x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2805out_output;

  { // Node ID: 2805 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2805in_input = id2804out_result[getCycle()%2];

    id2805out_output = id2805in_input;
  }
  { // Node ID: 2807 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2807in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2807in_option0 = in_vars.id2806out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2807in_option1 = id2805out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2807x_1;

    switch((id2807in_sel.getValueAsLong())) {
      case 0l:
        id2807x_1 = id2807in_option0;
        break;
      case 1l:
        id2807x_1 = id2807in_option1;
        break;
      default:
        id2807x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2807out_result[(getCycle()+1)%2] = (id2807x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2808out_output;

  { // Node ID: 2808 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2808in_input = id2807out_result[getCycle()%2];

    id2808out_output = id2808in_input;
  }
  { // Node ID: 2810 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2810in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2810in_option0 = in_vars.id2809out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2810in_option1 = id2808out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2810x_1;

    switch((id2810in_sel.getValueAsLong())) {
      case 0l:
        id2810x_1 = id2810in_option0;
        break;
      case 1l:
        id2810x_1 = id2810in_option1;
        break;
      default:
        id2810x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2810out_result[(getCycle()+1)%2] = (id2810x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2811out_output;

  { // Node ID: 2811 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2811in_input = id2810out_result[getCycle()%2];

    id2811out_output = id2811in_input;
  }
  { // Node ID: 2813 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2813in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2813in_option0 = in_vars.id2812out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2813in_option1 = id2811out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2813x_1;

    switch((id2813in_sel.getValueAsLong())) {
      case 0l:
        id2813x_1 = id2813in_option0;
        break;
      case 1l:
        id2813x_1 = id2813in_option1;
        break;
      default:
        id2813x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2813out_result[(getCycle()+1)%2] = (id2813x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2814out_output;

  { // Node ID: 2814 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2814in_input = id2813out_result[getCycle()%2];

    id2814out_output = id2814in_input;
  }
  { // Node ID: 2816 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2816in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2816in_option0 = in_vars.id2815out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2816in_option1 = id2814out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2816x_1;

    switch((id2816in_sel.getValueAsLong())) {
      case 0l:
        id2816x_1 = id2816in_option0;
        break;
      case 1l:
        id2816x_1 = id2816in_option1;
        break;
      default:
        id2816x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2816out_result[(getCycle()+1)%2] = (id2816x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2817out_output;

  { // Node ID: 2817 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2817in_input = id2816out_result[getCycle()%2];

    id2817out_output = id2817in_input;
  }
  { // Node ID: 2819 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2819in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2819in_option0 = in_vars.id2818out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2819in_option1 = id2817out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2819x_1;

    switch((id2819in_sel.getValueAsLong())) {
      case 0l:
        id2819x_1 = id2819in_option0;
        break;
      case 1l:
        id2819x_1 = id2819in_option1;
        break;
      default:
        id2819x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2819out_result[(getCycle()+1)%2] = (id2819x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2820out_output;

  { // Node ID: 2820 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2820in_input = id2819out_result[getCycle()%2];

    id2820out_output = id2820in_input;
  }
  { // Node ID: 2822 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2822in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2822in_option0 = in_vars.id2821out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2822in_option1 = id2820out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2822x_1;

    switch((id2822in_sel.getValueAsLong())) {
      case 0l:
        id2822x_1 = id2822in_option0;
        break;
      case 1l:
        id2822x_1 = id2822in_option1;
        break;
      default:
        id2822x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2822out_result[(getCycle()+1)%2] = (id2822x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2823out_output;

  { // Node ID: 2823 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2823in_input = id2822out_result[getCycle()%2];

    id2823out_output = id2823in_input;
  }
  { // Node ID: 2825 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2825in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2825in_option0 = in_vars.id2824out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2825in_option1 = id2823out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2825x_1;

    switch((id2825in_sel.getValueAsLong())) {
      case 0l:
        id2825x_1 = id2825in_option0;
        break;
      case 1l:
        id2825x_1 = id2825in_option1;
        break;
      default:
        id2825x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2825out_result[(getCycle()+1)%2] = (id2825x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2826out_output;

  { // Node ID: 2826 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2826in_input = id2825out_result[getCycle()%2];

    id2826out_output = id2826in_input;
  }
  { // Node ID: 2828 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2828in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2828in_option0 = in_vars.id2827out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2828in_option1 = id2826out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2828x_1;

    switch((id2828in_sel.getValueAsLong())) {
      case 0l:
        id2828x_1 = id2828in_option0;
        break;
      case 1l:
        id2828x_1 = id2828in_option1;
        break;
      default:
        id2828x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2828out_result[(getCycle()+1)%2] = (id2828x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2829out_output;

  { // Node ID: 2829 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2829in_input = id2828out_result[getCycle()%2];

    id2829out_output = id2829in_input;
  }
  { // Node ID: 2831 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2831in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2831in_option0 = in_vars.id2830out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2831in_option1 = id2829out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2831x_1;

    switch((id2831in_sel.getValueAsLong())) {
      case 0l:
        id2831x_1 = id2831in_option0;
        break;
      case 1l:
        id2831x_1 = id2831in_option1;
        break;
      default:
        id2831x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2831out_result[(getCycle()+1)%2] = (id2831x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2832out_output;

  { // Node ID: 2832 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2832in_input = id2831out_result[getCycle()%2];

    id2832out_output = id2832in_input;
  }
  { // Node ID: 2834 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2834in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2834in_option0 = in_vars.id2833out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2834in_option1 = id2832out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2834x_1;

    switch((id2834in_sel.getValueAsLong())) {
      case 0l:
        id2834x_1 = id2834in_option0;
        break;
      case 1l:
        id2834x_1 = id2834in_option1;
        break;
      default:
        id2834x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2834out_result[(getCycle()+1)%2] = (id2834x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2835out_output;

  { // Node ID: 2835 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2835in_input = id2834out_result[getCycle()%2];

    id2835out_output = id2835in_input;
  }
  { // Node ID: 2837 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2837in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2837in_option0 = in_vars.id2836out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2837in_option1 = id2835out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2837x_1;

    switch((id2837in_sel.getValueAsLong())) {
      case 0l:
        id2837x_1 = id2837in_option0;
        break;
      case 1l:
        id2837x_1 = id2837in_option1;
        break;
      default:
        id2837x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2837out_result[(getCycle()+1)%2] = (id2837x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2838out_output;

  { // Node ID: 2838 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2838in_input = id2837out_result[getCycle()%2];

    id2838out_output = id2838in_input;
  }
  { // Node ID: 2840 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2840in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2840in_option0 = in_vars.id2839out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2840in_option1 = id2838out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2840x_1;

    switch((id2840in_sel.getValueAsLong())) {
      case 0l:
        id2840x_1 = id2840in_option0;
        break;
      case 1l:
        id2840x_1 = id2840in_option1;
        break;
      default:
        id2840x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2840out_result[(getCycle()+1)%2] = (id2840x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2841out_output;

  { // Node ID: 2841 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2841in_input = id2840out_result[getCycle()%2];

    id2841out_output = id2841in_input;
  }
  { // Node ID: 2843 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2843in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2843in_option0 = in_vars.id2842out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2843in_option1 = id2841out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2843x_1;

    switch((id2843in_sel.getValueAsLong())) {
      case 0l:
        id2843x_1 = id2843in_option0;
        break;
      case 1l:
        id2843x_1 = id2843in_option1;
        break;
      default:
        id2843x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2843out_result[(getCycle()+1)%2] = (id2843x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2844out_output;

  { // Node ID: 2844 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2844in_input = id2843out_result[getCycle()%2];

    id2844out_output = id2844in_input;
  }
  { // Node ID: 2846 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2846in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2846in_option0 = in_vars.id2845out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2846in_option1 = id2844out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2846x_1;

    switch((id2846in_sel.getValueAsLong())) {
      case 0l:
        id2846x_1 = id2846in_option0;
        break;
      case 1l:
        id2846x_1 = id2846in_option1;
        break;
      default:
        id2846x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2846out_result[(getCycle()+1)%2] = (id2846x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2847out_output;

  { // Node ID: 2847 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2847in_input = id2846out_result[getCycle()%2];

    id2847out_output = id2847in_input;
  }
  { // Node ID: 2849 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2849in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2849in_option0 = in_vars.id2848out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2849in_option1 = id2847out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2849x_1;

    switch((id2849in_sel.getValueAsLong())) {
      case 0l:
        id2849x_1 = id2849in_option0;
        break;
      case 1l:
        id2849x_1 = id2849in_option1;
        break;
      default:
        id2849x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2849out_result[(getCycle()+1)%2] = (id2849x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2850out_output;

  { // Node ID: 2850 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2850in_input = id2849out_result[getCycle()%2];

    id2850out_output = id2850in_input;
  }
  { // Node ID: 2852 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2852in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2852in_option0 = in_vars.id2851out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2852in_option1 = id2850out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2852x_1;

    switch((id2852in_sel.getValueAsLong())) {
      case 0l:
        id2852x_1 = id2852in_option0;
        break;
      case 1l:
        id2852x_1 = id2852in_option1;
        break;
      default:
        id2852x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2852out_result[(getCycle()+1)%2] = (id2852x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2853out_output;

  { // Node ID: 2853 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2853in_input = id2852out_result[getCycle()%2];

    id2853out_output = id2853in_input;
  }
  { // Node ID: 2855 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2855in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2855in_option0 = in_vars.id2854out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2855in_option1 = id2853out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2855x_1;

    switch((id2855in_sel.getValueAsLong())) {
      case 0l:
        id2855x_1 = id2855in_option0;
        break;
      case 1l:
        id2855x_1 = id2855in_option1;
        break;
      default:
        id2855x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2855out_result[(getCycle()+1)%2] = (id2855x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2856out_output;

  { // Node ID: 2856 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2856in_input = id2855out_result[getCycle()%2];

    id2856out_output = id2856in_input;
  }
  { // Node ID: 2858 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2858in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2858in_option0 = in_vars.id2857out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2858in_option1 = id2856out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2858x_1;

    switch((id2858in_sel.getValueAsLong())) {
      case 0l:
        id2858x_1 = id2858in_option0;
        break;
      case 1l:
        id2858x_1 = id2858in_option1;
        break;
      default:
        id2858x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2858out_result[(getCycle()+1)%2] = (id2858x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2859out_output;

  { // Node ID: 2859 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2859in_input = id2858out_result[getCycle()%2];

    id2859out_output = id2859in_input;
  }
  { // Node ID: 2861 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2861in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2861in_option0 = in_vars.id2860out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2861in_option1 = id2859out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2861x_1;

    switch((id2861in_sel.getValueAsLong())) {
      case 0l:
        id2861x_1 = id2861in_option0;
        break;
      case 1l:
        id2861x_1 = id2861in_option1;
        break;
      default:
        id2861x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2861out_result[(getCycle()+1)%2] = (id2861x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2862out_output;

  { // Node ID: 2862 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2862in_input = id2861out_result[getCycle()%2];

    id2862out_output = id2862in_input;
  }
  { // Node ID: 2864 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2864in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2864in_option0 = in_vars.id2863out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2864in_option1 = id2862out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2864x_1;

    switch((id2864in_sel.getValueAsLong())) {
      case 0l:
        id2864x_1 = id2864in_option0;
        break;
      case 1l:
        id2864x_1 = id2864in_option1;
        break;
      default:
        id2864x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2864out_result[(getCycle()+1)%2] = (id2864x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2865out_output;

  { // Node ID: 2865 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2865in_input = id2864out_result[getCycle()%2];

    id2865out_output = id2865in_input;
  }
  { // Node ID: 2867 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2867in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2867in_option0 = in_vars.id2866out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2867in_option1 = id2865out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2867x_1;

    switch((id2867in_sel.getValueAsLong())) {
      case 0l:
        id2867x_1 = id2867in_option0;
        break;
      case 1l:
        id2867x_1 = id2867in_option1;
        break;
      default:
        id2867x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2867out_result[(getCycle()+1)%2] = (id2867x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2868out_output;

  { // Node ID: 2868 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2868in_input = id2867out_result[getCycle()%2];

    id2868out_output = id2868in_input;
  }
  { // Node ID: 2870 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2870in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2870in_option0 = in_vars.id2869out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2870in_option1 = id2868out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2870x_1;

    switch((id2870in_sel.getValueAsLong())) {
      case 0l:
        id2870x_1 = id2870in_option0;
        break;
      case 1l:
        id2870x_1 = id2870in_option1;
        break;
      default:
        id2870x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2870out_result[(getCycle()+1)%2] = (id2870x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2871out_output;

  { // Node ID: 2871 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2871in_input = id2870out_result[getCycle()%2];

    id2871out_output = id2871in_input;
  }
  { // Node ID: 2873 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2873in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2873in_option0 = in_vars.id2872out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2873in_option1 = id2871out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2873x_1;

    switch((id2873in_sel.getValueAsLong())) {
      case 0l:
        id2873x_1 = id2873in_option0;
        break;
      case 1l:
        id2873x_1 = id2873in_option1;
        break;
      default:
        id2873x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2873out_result[(getCycle()+1)%2] = (id2873x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2874out_output;

  { // Node ID: 2874 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2874in_input = id2873out_result[getCycle()%2];

    id2874out_output = id2874in_input;
  }
  { // Node ID: 2876 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2876in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2876in_option0 = in_vars.id2875out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2876in_option1 = id2874out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2876x_1;

    switch((id2876in_sel.getValueAsLong())) {
      case 0l:
        id2876x_1 = id2876in_option0;
        break;
      case 1l:
        id2876x_1 = id2876in_option1;
        break;
      default:
        id2876x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2876out_result[(getCycle()+1)%2] = (id2876x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2877out_output;

  { // Node ID: 2877 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2877in_input = id2876out_result[getCycle()%2];

    id2877out_output = id2877in_input;
  }
  { // Node ID: 2879 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2879in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2879in_option0 = in_vars.id2878out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2879in_option1 = id2877out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2879x_1;

    switch((id2879in_sel.getValueAsLong())) {
      case 0l:
        id2879x_1 = id2879in_option0;
        break;
      case 1l:
        id2879x_1 = id2879in_option1;
        break;
      default:
        id2879x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2879out_result[(getCycle()+1)%2] = (id2879x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2880out_output;

  { // Node ID: 2880 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2880in_input = id2879out_result[getCycle()%2];

    id2880out_output = id2880in_input;
  }
  { // Node ID: 2882 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2882in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2882in_option0 = in_vars.id2881out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2882in_option1 = id2880out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2882x_1;

    switch((id2882in_sel.getValueAsLong())) {
      case 0l:
        id2882x_1 = id2882in_option0;
        break;
      case 1l:
        id2882x_1 = id2882in_option1;
        break;
      default:
        id2882x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2882out_result[(getCycle()+1)%2] = (id2882x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2883out_output;

  { // Node ID: 2883 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2883in_input = id2882out_result[getCycle()%2];

    id2883out_output = id2883in_input;
  }
  { // Node ID: 2885 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2885in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2885in_option0 = in_vars.id2884out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2885in_option1 = id2883out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2885x_1;

    switch((id2885in_sel.getValueAsLong())) {
      case 0l:
        id2885x_1 = id2885in_option0;
        break;
      case 1l:
        id2885x_1 = id2885in_option1;
        break;
      default:
        id2885x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2885out_result[(getCycle()+1)%2] = (id2885x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2886out_output;

  { // Node ID: 2886 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2886in_input = id2885out_result[getCycle()%2];

    id2886out_output = id2886in_input;
  }
  { // Node ID: 2888 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2888in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2888in_option0 = in_vars.id2887out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2888in_option1 = id2886out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2888x_1;

    switch((id2888in_sel.getValueAsLong())) {
      case 0l:
        id2888x_1 = id2888in_option0;
        break;
      case 1l:
        id2888x_1 = id2888in_option1;
        break;
      default:
        id2888x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2888out_result[(getCycle()+1)%2] = (id2888x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2889out_output;

  { // Node ID: 2889 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2889in_input = id2888out_result[getCycle()%2];

    id2889out_output = id2889in_input;
  }
  { // Node ID: 2891 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2891in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2891in_option0 = in_vars.id2890out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2891in_option1 = id2889out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2891x_1;

    switch((id2891in_sel.getValueAsLong())) {
      case 0l:
        id2891x_1 = id2891in_option0;
        break;
      case 1l:
        id2891x_1 = id2891in_option1;
        break;
      default:
        id2891x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2891out_result[(getCycle()+1)%2] = (id2891x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2892out_output;

  { // Node ID: 2892 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2892in_input = id2891out_result[getCycle()%2];

    id2892out_output = id2892in_input;
  }
  { // Node ID: 2894 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2894in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2894in_option0 = in_vars.id2893out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2894in_option1 = id2892out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2894x_1;

    switch((id2894in_sel.getValueAsLong())) {
      case 0l:
        id2894x_1 = id2894in_option0;
        break;
      case 1l:
        id2894x_1 = id2894in_option1;
        break;
      default:
        id2894x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2894out_result[(getCycle()+1)%2] = (id2894x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2895out_output;

  { // Node ID: 2895 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2895in_input = id2894out_result[getCycle()%2];

    id2895out_output = id2895in_input;
  }
  { // Node ID: 2897 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2897in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2897in_option0 = in_vars.id2896out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2897in_option1 = id2895out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2897x_1;

    switch((id2897in_sel.getValueAsLong())) {
      case 0l:
        id2897x_1 = id2897in_option0;
        break;
      case 1l:
        id2897x_1 = id2897in_option1;
        break;
      default:
        id2897x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2897out_result[(getCycle()+1)%2] = (id2897x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2898out_output;

  { // Node ID: 2898 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2898in_input = id2897out_result[getCycle()%2];

    id2898out_output = id2898in_input;
  }
  { // Node ID: 2900 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2900in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2900in_option0 = in_vars.id2899out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2900in_option1 = id2898out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2900x_1;

    switch((id2900in_sel.getValueAsLong())) {
      case 0l:
        id2900x_1 = id2900in_option0;
        break;
      case 1l:
        id2900x_1 = id2900in_option1;
        break;
      default:
        id2900x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2900out_result[(getCycle()+1)%2] = (id2900x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2901out_output;

  { // Node ID: 2901 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2901in_input = id2900out_result[getCycle()%2];

    id2901out_output = id2901in_input;
  }
  { // Node ID: 2903 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2903in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2903in_option0 = in_vars.id2902out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2903in_option1 = id2901out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2903x_1;

    switch((id2903in_sel.getValueAsLong())) {
      case 0l:
        id2903x_1 = id2903in_option0;
        break;
      case 1l:
        id2903x_1 = id2903in_option1;
        break;
      default:
        id2903x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2903out_result[(getCycle()+1)%2] = (id2903x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2904out_output;

  { // Node ID: 2904 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2904in_input = id2903out_result[getCycle()%2];

    id2904out_output = id2904in_input;
  }
  { // Node ID: 2906 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2906in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2906in_option0 = in_vars.id2905out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2906in_option1 = id2904out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2906x_1;

    switch((id2906in_sel.getValueAsLong())) {
      case 0l:
        id2906x_1 = id2906in_option0;
        break;
      case 1l:
        id2906x_1 = id2906in_option1;
        break;
      default:
        id2906x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2906out_result[(getCycle()+1)%2] = (id2906x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2907out_output;

  { // Node ID: 2907 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2907in_input = id2906out_result[getCycle()%2];

    id2907out_output = id2907in_input;
  }
  { // Node ID: 2909 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2909in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2909in_option0 = in_vars.id2908out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2909in_option1 = id2907out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2909x_1;

    switch((id2909in_sel.getValueAsLong())) {
      case 0l:
        id2909x_1 = id2909in_option0;
        break;
      case 1l:
        id2909x_1 = id2909in_option1;
        break;
      default:
        id2909x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2909out_result[(getCycle()+1)%2] = (id2909x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2910out_output;

  { // Node ID: 2910 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2910in_input = id2909out_result[getCycle()%2];

    id2910out_output = id2910in_input;
  }
  { // Node ID: 2912 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2912in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2912in_option0 = in_vars.id2911out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2912in_option1 = id2910out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2912x_1;

    switch((id2912in_sel.getValueAsLong())) {
      case 0l:
        id2912x_1 = id2912in_option0;
        break;
      case 1l:
        id2912x_1 = id2912in_option1;
        break;
      default:
        id2912x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2912out_result[(getCycle()+1)%2] = (id2912x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2913out_output;

  { // Node ID: 2913 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2913in_input = id2912out_result[getCycle()%2];

    id2913out_output = id2913in_input;
  }
  { // Node ID: 2915 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2915in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2915in_option0 = in_vars.id2914out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2915in_option1 = id2913out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2915x_1;

    switch((id2915in_sel.getValueAsLong())) {
      case 0l:
        id2915x_1 = id2915in_option0;
        break;
      case 1l:
        id2915x_1 = id2915in_option1;
        break;
      default:
        id2915x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2915out_result[(getCycle()+1)%2] = (id2915x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2916out_output;

  { // Node ID: 2916 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2916in_input = id2915out_result[getCycle()%2];

    id2916out_output = id2916in_input;
  }
  { // Node ID: 2918 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2918in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2918in_option0 = in_vars.id2917out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2918in_option1 = id2916out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2918x_1;

    switch((id2918in_sel.getValueAsLong())) {
      case 0l:
        id2918x_1 = id2918in_option0;
        break;
      case 1l:
        id2918x_1 = id2918in_option1;
        break;
      default:
        id2918x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2918out_result[(getCycle()+1)%2] = (id2918x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2919out_output;

  { // Node ID: 2919 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2919in_input = id2918out_result[getCycle()%2];

    id2919out_output = id2919in_input;
  }
  { // Node ID: 2921 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2921in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2921in_option0 = in_vars.id2920out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2921in_option1 = id2919out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2921x_1;

    switch((id2921in_sel.getValueAsLong())) {
      case 0l:
        id2921x_1 = id2921in_option0;
        break;
      case 1l:
        id2921x_1 = id2921in_option1;
        break;
      default:
        id2921x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2921out_result[(getCycle()+1)%2] = (id2921x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2922out_output;

  { // Node ID: 2922 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2922in_input = id2921out_result[getCycle()%2];

    id2922out_output = id2922in_input;
  }
  { // Node ID: 2924 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2924in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2924in_option0 = in_vars.id2923out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2924in_option1 = id2922out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2924x_1;

    switch((id2924in_sel.getValueAsLong())) {
      case 0l:
        id2924x_1 = id2924in_option0;
        break;
      case 1l:
        id2924x_1 = id2924in_option1;
        break;
      default:
        id2924x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2924out_result[(getCycle()+1)%2] = (id2924x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2925out_output;

  { // Node ID: 2925 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2925in_input = id2924out_result[getCycle()%2];

    id2925out_output = id2925in_input;
  }
  { // Node ID: 2927 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2927in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2927in_option0 = in_vars.id2926out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2927in_option1 = id2925out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2927x_1;

    switch((id2927in_sel.getValueAsLong())) {
      case 0l:
        id2927x_1 = id2927in_option0;
        break;
      case 1l:
        id2927x_1 = id2927in_option1;
        break;
      default:
        id2927x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2927out_result[(getCycle()+1)%2] = (id2927x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2928out_output;

  { // Node ID: 2928 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2928in_input = id2927out_result[getCycle()%2];

    id2928out_output = id2928in_input;
  }
  { // Node ID: 2930 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2930in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2930in_option0 = in_vars.id2929out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2930in_option1 = id2928out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2930x_1;

    switch((id2930in_sel.getValueAsLong())) {
      case 0l:
        id2930x_1 = id2930in_option0;
        break;
      case 1l:
        id2930x_1 = id2930in_option1;
        break;
      default:
        id2930x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2930out_result[(getCycle()+1)%2] = (id2930x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2931out_output;

  { // Node ID: 2931 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2931in_input = id2930out_result[getCycle()%2];

    id2931out_output = id2931in_input;
  }
  { // Node ID: 2933 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2933in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2933in_option0 = in_vars.id2932out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2933in_option1 = id2931out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2933x_1;

    switch((id2933in_sel.getValueAsLong())) {
      case 0l:
        id2933x_1 = id2933in_option0;
        break;
      case 1l:
        id2933x_1 = id2933in_option1;
        break;
      default:
        id2933x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2933out_result[(getCycle()+1)%2] = (id2933x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2934out_output;

  { // Node ID: 2934 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2934in_input = id2933out_result[getCycle()%2];

    id2934out_output = id2934in_input;
  }
  { // Node ID: 2936 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2936in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2936in_option0 = in_vars.id2935out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2936in_option1 = id2934out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2936x_1;

    switch((id2936in_sel.getValueAsLong())) {
      case 0l:
        id2936x_1 = id2936in_option0;
        break;
      case 1l:
        id2936x_1 = id2936in_option1;
        break;
      default:
        id2936x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2936out_result[(getCycle()+1)%2] = (id2936x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2937out_output;

  { // Node ID: 2937 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2937in_input = id2936out_result[getCycle()%2];

    id2937out_output = id2937in_input;
  }
  { // Node ID: 2939 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2939in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2939in_option0 = in_vars.id2938out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2939in_option1 = id2937out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2939x_1;

    switch((id2939in_sel.getValueAsLong())) {
      case 0l:
        id2939x_1 = id2939in_option0;
        break;
      case 1l:
        id2939x_1 = id2939in_option1;
        break;
      default:
        id2939x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2939out_result[(getCycle()+1)%2] = (id2939x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2940out_output;

  { // Node ID: 2940 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2940in_input = id2939out_result[getCycle()%2];

    id2940out_output = id2940in_input;
  }
  { // Node ID: 2942 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2942in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2942in_option0 = in_vars.id2941out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2942in_option1 = id2940out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2942x_1;

    switch((id2942in_sel.getValueAsLong())) {
      case 0l:
        id2942x_1 = id2942in_option0;
        break;
      case 1l:
        id2942x_1 = id2942in_option1;
        break;
      default:
        id2942x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2942out_result[(getCycle()+1)%2] = (id2942x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2943out_output;

  { // Node ID: 2943 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2943in_input = id2942out_result[getCycle()%2];

    id2943out_output = id2943in_input;
  }
  { // Node ID: 2945 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2945in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2945in_option0 = in_vars.id2944out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2945in_option1 = id2943out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2945x_1;

    switch((id2945in_sel.getValueAsLong())) {
      case 0l:
        id2945x_1 = id2945in_option0;
        break;
      case 1l:
        id2945x_1 = id2945in_option1;
        break;
      default:
        id2945x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2945out_result[(getCycle()+1)%2] = (id2945x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2946out_output;

  { // Node ID: 2946 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2946in_input = id2945out_result[getCycle()%2];

    id2946out_output = id2946in_input;
  }
  { // Node ID: 2948 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2948in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2948in_option0 = in_vars.id2947out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2948in_option1 = id2946out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2948x_1;

    switch((id2948in_sel.getValueAsLong())) {
      case 0l:
        id2948x_1 = id2948in_option0;
        break;
      case 1l:
        id2948x_1 = id2948in_option1;
        break;
      default:
        id2948x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2948out_result[(getCycle()+1)%2] = (id2948x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2949out_output;

  { // Node ID: 2949 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2949in_input = id2948out_result[getCycle()%2];

    id2949out_output = id2949in_input;
  }
  { // Node ID: 2951 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2951in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2951in_option0 = in_vars.id2950out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2951in_option1 = id2949out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2951x_1;

    switch((id2951in_sel.getValueAsLong())) {
      case 0l:
        id2951x_1 = id2951in_option0;
        break;
      case 1l:
        id2951x_1 = id2951in_option1;
        break;
      default:
        id2951x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2951out_result[(getCycle()+1)%2] = (id2951x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2952out_output;

  { // Node ID: 2952 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2952in_input = id2951out_result[getCycle()%2];

    id2952out_output = id2952in_input;
  }
  { // Node ID: 2954 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2954in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2954in_option0 = in_vars.id2953out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2954in_option1 = id2952out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2954x_1;

    switch((id2954in_sel.getValueAsLong())) {
      case 0l:
        id2954x_1 = id2954in_option0;
        break;
      case 1l:
        id2954x_1 = id2954in_option1;
        break;
      default:
        id2954x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2954out_result[(getCycle()+1)%2] = (id2954x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2955out_output;

  { // Node ID: 2955 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2955in_input = id2954out_result[getCycle()%2];

    id2955out_output = id2955in_input;
  }
  { // Node ID: 2957 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2957in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2957in_option0 = in_vars.id2956out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2957in_option1 = id2955out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2957x_1;

    switch((id2957in_sel.getValueAsLong())) {
      case 0l:
        id2957x_1 = id2957in_option0;
        break;
      case 1l:
        id2957x_1 = id2957in_option1;
        break;
      default:
        id2957x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2957out_result[(getCycle()+1)%2] = (id2957x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2958out_output;

  { // Node ID: 2958 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2958in_input = id2957out_result[getCycle()%2];

    id2958out_output = id2958in_input;
  }
  { // Node ID: 2960 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2960in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2960in_option0 = in_vars.id2959out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2960in_option1 = id2958out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2960x_1;

    switch((id2960in_sel.getValueAsLong())) {
      case 0l:
        id2960x_1 = id2960in_option0;
        break;
      case 1l:
        id2960x_1 = id2960in_option1;
        break;
      default:
        id2960x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2960out_result[(getCycle()+1)%2] = (id2960x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2961out_output;

  { // Node ID: 2961 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2961in_input = id2960out_result[getCycle()%2];

    id2961out_output = id2961in_input;
  }
  { // Node ID: 2963 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2963in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2963in_option0 = in_vars.id2962out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2963in_option1 = id2961out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2963x_1;

    switch((id2963in_sel.getValueAsLong())) {
      case 0l:
        id2963x_1 = id2963in_option0;
        break;
      case 1l:
        id2963x_1 = id2963in_option1;
        break;
      default:
        id2963x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2963out_result[(getCycle()+1)%2] = (id2963x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2964out_output;

  { // Node ID: 2964 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2964in_input = id2963out_result[getCycle()%2];

    id2964out_output = id2964in_input;
  }
  { // Node ID: 2966 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2966in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2966in_option0 = in_vars.id2965out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2966in_option1 = id2964out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2966x_1;

    switch((id2966in_sel.getValueAsLong())) {
      case 0l:
        id2966x_1 = id2966in_option0;
        break;
      case 1l:
        id2966x_1 = id2966in_option1;
        break;
      default:
        id2966x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2966out_result[(getCycle()+1)%2] = (id2966x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2967out_output;

  { // Node ID: 2967 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2967in_input = id2966out_result[getCycle()%2];

    id2967out_output = id2967in_input;
  }
  { // Node ID: 2969 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2969in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2969in_option0 = in_vars.id2968out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2969in_option1 = id2967out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2969x_1;

    switch((id2969in_sel.getValueAsLong())) {
      case 0l:
        id2969x_1 = id2969in_option0;
        break;
      case 1l:
        id2969x_1 = id2969in_option1;
        break;
      default:
        id2969x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2969out_result[(getCycle()+1)%2] = (id2969x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2970out_output;

  { // Node ID: 2970 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2970in_input = id2969out_result[getCycle()%2];

    id2970out_output = id2970in_input;
  }
  { // Node ID: 2972 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2972in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2972in_option0 = in_vars.id2971out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2972in_option1 = id2970out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2972x_1;

    switch((id2972in_sel.getValueAsLong())) {
      case 0l:
        id2972x_1 = id2972in_option0;
        break;
      case 1l:
        id2972x_1 = id2972in_option1;
        break;
      default:
        id2972x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2972out_result[(getCycle()+1)%2] = (id2972x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2973out_output;

  { // Node ID: 2973 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2973in_input = id2972out_result[getCycle()%2];

    id2973out_output = id2973in_input;
  }
  { // Node ID: 2975 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2975in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2975in_option0 = in_vars.id2974out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2975in_option1 = id2973out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2975x_1;

    switch((id2975in_sel.getValueAsLong())) {
      case 0l:
        id2975x_1 = id2975in_option0;
        break;
      case 1l:
        id2975x_1 = id2975in_option1;
        break;
      default:
        id2975x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2975out_result[(getCycle()+1)%2] = (id2975x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2976out_output;

  { // Node ID: 2976 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2976in_input = id2975out_result[getCycle()%2];

    id2976out_output = id2976in_input;
  }
  { // Node ID: 2978 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2978in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2978in_option0 = in_vars.id2977out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2978in_option1 = id2976out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2978x_1;

    switch((id2978in_sel.getValueAsLong())) {
      case 0l:
        id2978x_1 = id2978in_option0;
        break;
      case 1l:
        id2978x_1 = id2978in_option1;
        break;
      default:
        id2978x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2978out_result[(getCycle()+1)%2] = (id2978x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2979out_output;

  { // Node ID: 2979 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2979in_input = id2978out_result[getCycle()%2];

    id2979out_output = id2979in_input;
  }
  { // Node ID: 2981 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2981in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2981in_option0 = in_vars.id2980out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2981in_option1 = id2979out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2981x_1;

    switch((id2981in_sel.getValueAsLong())) {
      case 0l:
        id2981x_1 = id2981in_option0;
        break;
      case 1l:
        id2981x_1 = id2981in_option1;
        break;
      default:
        id2981x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2981out_result[(getCycle()+1)%2] = (id2981x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2982out_output;

  { // Node ID: 2982 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2982in_input = id2981out_result[getCycle()%2];

    id2982out_output = id2982in_input;
  }
  { // Node ID: 2984 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2984in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2984in_option0 = in_vars.id2983out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2984in_option1 = id2982out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2984x_1;

    switch((id2984in_sel.getValueAsLong())) {
      case 0l:
        id2984x_1 = id2984in_option0;
        break;
      case 1l:
        id2984x_1 = id2984in_option1;
        break;
      default:
        id2984x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2984out_result[(getCycle()+1)%2] = (id2984x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2985out_output;

  { // Node ID: 2985 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2985in_input = id2984out_result[getCycle()%2];

    id2985out_output = id2985in_input;
  }
  { // Node ID: 2987 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2987in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2987in_option0 = in_vars.id2986out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2987in_option1 = id2985out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2987x_1;

    switch((id2987in_sel.getValueAsLong())) {
      case 0l:
        id2987x_1 = id2987in_option0;
        break;
      case 1l:
        id2987x_1 = id2987in_option1;
        break;
      default:
        id2987x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2987out_result[(getCycle()+1)%2] = (id2987x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2988out_output;

  { // Node ID: 2988 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2988in_input = id2987out_result[getCycle()%2];

    id2988out_output = id2988in_input;
  }
  { // Node ID: 2990 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2990in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2990in_option0 = in_vars.id2989out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2990in_option1 = id2988out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2990x_1;

    switch((id2990in_sel.getValueAsLong())) {
      case 0l:
        id2990x_1 = id2990in_option0;
        break;
      case 1l:
        id2990x_1 = id2990in_option1;
        break;
      default:
        id2990x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2990out_result[(getCycle()+1)%2] = (id2990x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2991out_output;

  { // Node ID: 2991 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2991in_input = id2990out_result[getCycle()%2];

    id2991out_output = id2991in_input;
  }
  { // Node ID: 2993 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2993in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2993in_option0 = in_vars.id2992out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2993in_option1 = id2991out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2993x_1;

    switch((id2993in_sel.getValueAsLong())) {
      case 0l:
        id2993x_1 = id2993in_option0;
        break;
      case 1l:
        id2993x_1 = id2993in_option1;
        break;
      default:
        id2993x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2993out_result[(getCycle()+1)%2] = (id2993x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2994out_output;

  { // Node ID: 2994 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2994in_input = id2993out_result[getCycle()%2];

    id2994out_output = id2994in_input;
  }
  { // Node ID: 2996 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2996in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2996in_option0 = in_vars.id2995out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2996in_option1 = id2994out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2996x_1;

    switch((id2996in_sel.getValueAsLong())) {
      case 0l:
        id2996x_1 = id2996in_option0;
        break;
      case 1l:
        id2996x_1 = id2996in_option1;
        break;
      default:
        id2996x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2996out_result[(getCycle()+1)%2] = (id2996x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2997out_output;

  { // Node ID: 2997 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2997in_input = id2996out_result[getCycle()%2];

    id2997out_output = id2997in_input;
  }
  { // Node ID: 2999 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id2999in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2999in_option0 = in_vars.id2998out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id2999in_option1 = id2997out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id2999x_1;

    switch((id2999in_sel.getValueAsLong())) {
      case 0l:
        id2999x_1 = id2999in_option0;
        break;
      case 1l:
        id2999x_1 = id2999in_option1;
        break;
      default:
        id2999x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id2999out_result[(getCycle()+1)%2] = (id2999x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3000out_output;

  { // Node ID: 3000 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3000in_input = id2999out_result[getCycle()%2];

    id3000out_output = id3000in_input;
  }
  { // Node ID: 3002 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3002in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3002in_option0 = in_vars.id3001out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3002in_option1 = id3000out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3002x_1;

    switch((id3002in_sel.getValueAsLong())) {
      case 0l:
        id3002x_1 = id3002in_option0;
        break;
      case 1l:
        id3002x_1 = id3002in_option1;
        break;
      default:
        id3002x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3002out_result[(getCycle()+1)%2] = (id3002x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3003out_output;

  { // Node ID: 3003 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3003in_input = id3002out_result[getCycle()%2];

    id3003out_output = id3003in_input;
  }
  { // Node ID: 3005 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3005in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3005in_option0 = in_vars.id3004out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3005in_option1 = id3003out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3005x_1;

    switch((id3005in_sel.getValueAsLong())) {
      case 0l:
        id3005x_1 = id3005in_option0;
        break;
      case 1l:
        id3005x_1 = id3005in_option1;
        break;
      default:
        id3005x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3005out_result[(getCycle()+1)%2] = (id3005x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3006out_output;

  { // Node ID: 3006 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3006in_input = id3005out_result[getCycle()%2];

    id3006out_output = id3006in_input;
  }
  { // Node ID: 3008 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3008in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3008in_option0 = in_vars.id3007out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3008in_option1 = id3006out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3008x_1;

    switch((id3008in_sel.getValueAsLong())) {
      case 0l:
        id3008x_1 = id3008in_option0;
        break;
      case 1l:
        id3008x_1 = id3008in_option1;
        break;
      default:
        id3008x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3008out_result[(getCycle()+1)%2] = (id3008x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3009out_output;

  { // Node ID: 3009 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3009in_input = id3008out_result[getCycle()%2];

    id3009out_output = id3009in_input;
  }
  { // Node ID: 3011 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3011in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3011in_option0 = in_vars.id3010out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3011in_option1 = id3009out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3011x_1;

    switch((id3011in_sel.getValueAsLong())) {
      case 0l:
        id3011x_1 = id3011in_option0;
        break;
      case 1l:
        id3011x_1 = id3011in_option1;
        break;
      default:
        id3011x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3011out_result[(getCycle()+1)%2] = (id3011x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3012out_output;

  { // Node ID: 3012 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3012in_input = id3011out_result[getCycle()%2];

    id3012out_output = id3012in_input;
  }
  { // Node ID: 3014 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3014in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3014in_option0 = in_vars.id3013out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3014in_option1 = id3012out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3014x_1;

    switch((id3014in_sel.getValueAsLong())) {
      case 0l:
        id3014x_1 = id3014in_option0;
        break;
      case 1l:
        id3014x_1 = id3014in_option1;
        break;
      default:
        id3014x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3014out_result[(getCycle()+1)%2] = (id3014x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3015out_output;

  { // Node ID: 3015 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3015in_input = id3014out_result[getCycle()%2];

    id3015out_output = id3015in_input;
  }
  { // Node ID: 3017 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3017in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3017in_option0 = in_vars.id3016out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3017in_option1 = id3015out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3017x_1;

    switch((id3017in_sel.getValueAsLong())) {
      case 0l:
        id3017x_1 = id3017in_option0;
        break;
      case 1l:
        id3017x_1 = id3017in_option1;
        break;
      default:
        id3017x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3017out_result[(getCycle()+1)%2] = (id3017x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3018out_output;

  { // Node ID: 3018 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3018in_input = id3017out_result[getCycle()%2];

    id3018out_output = id3018in_input;
  }
  { // Node ID: 3020 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3020in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3020in_option0 = in_vars.id3019out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3020in_option1 = id3018out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3020x_1;

    switch((id3020in_sel.getValueAsLong())) {
      case 0l:
        id3020x_1 = id3020in_option0;
        break;
      case 1l:
        id3020x_1 = id3020in_option1;
        break;
      default:
        id3020x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3020out_result[(getCycle()+1)%2] = (id3020x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3021out_output;

  { // Node ID: 3021 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3021in_input = id3020out_result[getCycle()%2];

    id3021out_output = id3021in_input;
  }
  { // Node ID: 3023 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3023in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3023in_option0 = in_vars.id3022out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3023in_option1 = id3021out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3023x_1;

    switch((id3023in_sel.getValueAsLong())) {
      case 0l:
        id3023x_1 = id3023in_option0;
        break;
      case 1l:
        id3023x_1 = id3023in_option1;
        break;
      default:
        id3023x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3023out_result[(getCycle()+1)%2] = (id3023x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3024out_output;

  { // Node ID: 3024 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3024in_input = id3023out_result[getCycle()%2];

    id3024out_output = id3024in_input;
  }
  { // Node ID: 3026 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3026in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3026in_option0 = in_vars.id3025out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3026in_option1 = id3024out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3026x_1;

    switch((id3026in_sel.getValueAsLong())) {
      case 0l:
        id3026x_1 = id3026in_option0;
        break;
      case 1l:
        id3026x_1 = id3026in_option1;
        break;
      default:
        id3026x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3026out_result[(getCycle()+1)%2] = (id3026x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3027out_output;

  { // Node ID: 3027 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3027in_input = id3026out_result[getCycle()%2];

    id3027out_output = id3027in_input;
  }
  { // Node ID: 3029 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3029in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3029in_option0 = in_vars.id3028out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3029in_option1 = id3027out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3029x_1;

    switch((id3029in_sel.getValueAsLong())) {
      case 0l:
        id3029x_1 = id3029in_option0;
        break;
      case 1l:
        id3029x_1 = id3029in_option1;
        break;
      default:
        id3029x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3029out_result[(getCycle()+1)%2] = (id3029x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3030out_output;

  { // Node ID: 3030 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3030in_input = id3029out_result[getCycle()%2];

    id3030out_output = id3030in_input;
  }
  { // Node ID: 3032 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3032in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3032in_option0 = in_vars.id3031out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3032in_option1 = id3030out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3032x_1;

    switch((id3032in_sel.getValueAsLong())) {
      case 0l:
        id3032x_1 = id3032in_option0;
        break;
      case 1l:
        id3032x_1 = id3032in_option1;
        break;
      default:
        id3032x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3032out_result[(getCycle()+1)%2] = (id3032x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3033out_output;

  { // Node ID: 3033 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3033in_input = id3032out_result[getCycle()%2];

    id3033out_output = id3033in_input;
  }
  { // Node ID: 3035 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3035in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3035in_option0 = in_vars.id3034out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3035in_option1 = id3033out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3035x_1;

    switch((id3035in_sel.getValueAsLong())) {
      case 0l:
        id3035x_1 = id3035in_option0;
        break;
      case 1l:
        id3035x_1 = id3035in_option1;
        break;
      default:
        id3035x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3035out_result[(getCycle()+1)%2] = (id3035x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3036out_output;

  { // Node ID: 3036 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3036in_input = id3035out_result[getCycle()%2];

    id3036out_output = id3036in_input;
  }
  { // Node ID: 3038 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3038in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3038in_option0 = in_vars.id3037out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3038in_option1 = id3036out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3038x_1;

    switch((id3038in_sel.getValueAsLong())) {
      case 0l:
        id3038x_1 = id3038in_option0;
        break;
      case 1l:
        id3038x_1 = id3038in_option1;
        break;
      default:
        id3038x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3038out_result[(getCycle()+1)%2] = (id3038x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3039out_output;

  { // Node ID: 3039 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3039in_input = id3038out_result[getCycle()%2];

    id3039out_output = id3039in_input;
  }
  { // Node ID: 3041 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3041in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3041in_option0 = in_vars.id3040out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3041in_option1 = id3039out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3041x_1;

    switch((id3041in_sel.getValueAsLong())) {
      case 0l:
        id3041x_1 = id3041in_option0;
        break;
      case 1l:
        id3041x_1 = id3041in_option1;
        break;
      default:
        id3041x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3041out_result[(getCycle()+1)%2] = (id3041x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3042out_output;

  { // Node ID: 3042 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3042in_input = id3041out_result[getCycle()%2];

    id3042out_output = id3042in_input;
  }
  { // Node ID: 3044 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3044in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3044in_option0 = in_vars.id3043out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3044in_option1 = id3042out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3044x_1;

    switch((id3044in_sel.getValueAsLong())) {
      case 0l:
        id3044x_1 = id3044in_option0;
        break;
      case 1l:
        id3044x_1 = id3044in_option1;
        break;
      default:
        id3044x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3044out_result[(getCycle()+1)%2] = (id3044x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3045out_output;

  { // Node ID: 3045 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3045in_input = id3044out_result[getCycle()%2];

    id3045out_output = id3045in_input;
  }
  { // Node ID: 3047 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3047in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3047in_option0 = in_vars.id3046out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3047in_option1 = id3045out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3047x_1;

    switch((id3047in_sel.getValueAsLong())) {
      case 0l:
        id3047x_1 = id3047in_option0;
        break;
      case 1l:
        id3047x_1 = id3047in_option1;
        break;
      default:
        id3047x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3047out_result[(getCycle()+1)%2] = (id3047x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3048out_output;

  { // Node ID: 3048 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3048in_input = id3047out_result[getCycle()%2];

    id3048out_output = id3048in_input;
  }
  { // Node ID: 3050 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3050in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3050in_option0 = in_vars.id3049out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3050in_option1 = id3048out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3050x_1;

    switch((id3050in_sel.getValueAsLong())) {
      case 0l:
        id3050x_1 = id3050in_option0;
        break;
      case 1l:
        id3050x_1 = id3050in_option1;
        break;
      default:
        id3050x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3050out_result[(getCycle()+1)%2] = (id3050x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3051out_output;

  { // Node ID: 3051 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3051in_input = id3050out_result[getCycle()%2];

    id3051out_output = id3051in_input;
  }
  { // Node ID: 3053 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3053in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3053in_option0 = in_vars.id3052out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3053in_option1 = id3051out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3053x_1;

    switch((id3053in_sel.getValueAsLong())) {
      case 0l:
        id3053x_1 = id3053in_option0;
        break;
      case 1l:
        id3053x_1 = id3053in_option1;
        break;
      default:
        id3053x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3053out_result[(getCycle()+1)%2] = (id3053x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3054out_output;

  { // Node ID: 3054 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3054in_input = id3053out_result[getCycle()%2];

    id3054out_output = id3054in_input;
  }
  { // Node ID: 3056 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3056in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3056in_option0 = in_vars.id3055out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3056in_option1 = id3054out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3056x_1;

    switch((id3056in_sel.getValueAsLong())) {
      case 0l:
        id3056x_1 = id3056in_option0;
        break;
      case 1l:
        id3056x_1 = id3056in_option1;
        break;
      default:
        id3056x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3056out_result[(getCycle()+1)%2] = (id3056x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3057out_output;

  { // Node ID: 3057 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3057in_input = id3056out_result[getCycle()%2];

    id3057out_output = id3057in_input;
  }
  { // Node ID: 3059 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3059in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3059in_option0 = in_vars.id3058out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3059in_option1 = id3057out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3059x_1;

    switch((id3059in_sel.getValueAsLong())) {
      case 0l:
        id3059x_1 = id3059in_option0;
        break;
      case 1l:
        id3059x_1 = id3059in_option1;
        break;
      default:
        id3059x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3059out_result[(getCycle()+1)%2] = (id3059x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3060out_output;

  { // Node ID: 3060 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3060in_input = id3059out_result[getCycle()%2];

    id3060out_output = id3060in_input;
  }
  { // Node ID: 3062 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3062in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3062in_option0 = in_vars.id3061out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3062in_option1 = id3060out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3062x_1;

    switch((id3062in_sel.getValueAsLong())) {
      case 0l:
        id3062x_1 = id3062in_option0;
        break;
      case 1l:
        id3062x_1 = id3062in_option1;
        break;
      default:
        id3062x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3062out_result[(getCycle()+1)%2] = (id3062x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3063out_output;

  { // Node ID: 3063 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3063in_input = id3062out_result[getCycle()%2];

    id3063out_output = id3063in_input;
  }
  { // Node ID: 3065 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3065in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3065in_option0 = in_vars.id3064out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3065in_option1 = id3063out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3065x_1;

    switch((id3065in_sel.getValueAsLong())) {
      case 0l:
        id3065x_1 = id3065in_option0;
        break;
      case 1l:
        id3065x_1 = id3065in_option1;
        break;
      default:
        id3065x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3065out_result[(getCycle()+1)%2] = (id3065x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3066out_output;

  { // Node ID: 3066 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3066in_input = id3065out_result[getCycle()%2];

    id3066out_output = id3066in_input;
  }
  { // Node ID: 3068 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3068in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3068in_option0 = in_vars.id3067out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3068in_option1 = id3066out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3068x_1;

    switch((id3068in_sel.getValueAsLong())) {
      case 0l:
        id3068x_1 = id3068in_option0;
        break;
      case 1l:
        id3068x_1 = id3068in_option1;
        break;
      default:
        id3068x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3068out_result[(getCycle()+1)%2] = (id3068x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3069out_output;

  { // Node ID: 3069 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3069in_input = id3068out_result[getCycle()%2];

    id3069out_output = id3069in_input;
  }
  { // Node ID: 3071 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3071in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3071in_option0 = in_vars.id3070out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3071in_option1 = id3069out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3071x_1;

    switch((id3071in_sel.getValueAsLong())) {
      case 0l:
        id3071x_1 = id3071in_option0;
        break;
      case 1l:
        id3071x_1 = id3071in_option1;
        break;
      default:
        id3071x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3071out_result[(getCycle()+1)%2] = (id3071x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3072out_output;

  { // Node ID: 3072 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3072in_input = id3071out_result[getCycle()%2];

    id3072out_output = id3072in_input;
  }
  { // Node ID: 3074 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3074in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3074in_option0 = in_vars.id3073out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3074in_option1 = id3072out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3074x_1;

    switch((id3074in_sel.getValueAsLong())) {
      case 0l:
        id3074x_1 = id3074in_option0;
        break;
      case 1l:
        id3074x_1 = id3074in_option1;
        break;
      default:
        id3074x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3074out_result[(getCycle()+1)%2] = (id3074x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3075out_output;

  { // Node ID: 3075 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3075in_input = id3074out_result[getCycle()%2];

    id3075out_output = id3075in_input;
  }
  { // Node ID: 3077 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3077in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3077in_option0 = in_vars.id3076out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3077in_option1 = id3075out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3077x_1;

    switch((id3077in_sel.getValueAsLong())) {
      case 0l:
        id3077x_1 = id3077in_option0;
        break;
      case 1l:
        id3077x_1 = id3077in_option1;
        break;
      default:
        id3077x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3077out_result[(getCycle()+1)%2] = (id3077x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3078out_output;

  { // Node ID: 3078 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3078in_input = id3077out_result[getCycle()%2];

    id3078out_output = id3078in_input;
  }
  { // Node ID: 3080 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3080in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3080in_option0 = in_vars.id3079out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3080in_option1 = id3078out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3080x_1;

    switch((id3080in_sel.getValueAsLong())) {
      case 0l:
        id3080x_1 = id3080in_option0;
        break;
      case 1l:
        id3080x_1 = id3080in_option1;
        break;
      default:
        id3080x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3080out_result[(getCycle()+1)%2] = (id3080x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3081out_output;

  { // Node ID: 3081 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3081in_input = id3080out_result[getCycle()%2];

    id3081out_output = id3081in_input;
  }
  { // Node ID: 3083 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3083in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3083in_option0 = in_vars.id3082out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3083in_option1 = id3081out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3083x_1;

    switch((id3083in_sel.getValueAsLong())) {
      case 0l:
        id3083x_1 = id3083in_option0;
        break;
      case 1l:
        id3083x_1 = id3083in_option1;
        break;
      default:
        id3083x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3083out_result[(getCycle()+1)%2] = (id3083x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3084out_output;

  { // Node ID: 3084 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3084in_input = id3083out_result[getCycle()%2];

    id3084out_output = id3084in_input;
  }
  { // Node ID: 3086 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3086in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3086in_option0 = in_vars.id3085out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3086in_option1 = id3084out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3086x_1;

    switch((id3086in_sel.getValueAsLong())) {
      case 0l:
        id3086x_1 = id3086in_option0;
        break;
      case 1l:
        id3086x_1 = id3086in_option1;
        break;
      default:
        id3086x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3086out_result[(getCycle()+1)%2] = (id3086x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3087out_output;

  { // Node ID: 3087 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3087in_input = id3086out_result[getCycle()%2];

    id3087out_output = id3087in_input;
  }
  { // Node ID: 3089 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3089in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3089in_option0 = in_vars.id3088out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3089in_option1 = id3087out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3089x_1;

    switch((id3089in_sel.getValueAsLong())) {
      case 0l:
        id3089x_1 = id3089in_option0;
        break;
      case 1l:
        id3089x_1 = id3089in_option1;
        break;
      default:
        id3089x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3089out_result[(getCycle()+1)%2] = (id3089x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3090out_output;

  { // Node ID: 3090 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3090in_input = id3089out_result[getCycle()%2];

    id3090out_output = id3090in_input;
  }
  { // Node ID: 3092 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3092in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3092in_option0 = in_vars.id3091out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3092in_option1 = id3090out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3092x_1;

    switch((id3092in_sel.getValueAsLong())) {
      case 0l:
        id3092x_1 = id3092in_option0;
        break;
      case 1l:
        id3092x_1 = id3092in_option1;
        break;
      default:
        id3092x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3092out_result[(getCycle()+1)%2] = (id3092x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3093out_output;

  { // Node ID: 3093 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3093in_input = id3092out_result[getCycle()%2];

    id3093out_output = id3093in_input;
  }
  { // Node ID: 3095 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3095in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3095in_option0 = in_vars.id3094out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3095in_option1 = id3093out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3095x_1;

    switch((id3095in_sel.getValueAsLong())) {
      case 0l:
        id3095x_1 = id3095in_option0;
        break;
      case 1l:
        id3095x_1 = id3095in_option1;
        break;
      default:
        id3095x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3095out_result[(getCycle()+1)%2] = (id3095x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3096out_output;

  { // Node ID: 3096 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3096in_input = id3095out_result[getCycle()%2];

    id3096out_output = id3096in_input;
  }
  { // Node ID: 3098 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3098in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3098in_option0 = in_vars.id3097out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3098in_option1 = id3096out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3098x_1;

    switch((id3098in_sel.getValueAsLong())) {
      case 0l:
        id3098x_1 = id3098in_option0;
        break;
      case 1l:
        id3098x_1 = id3098in_option1;
        break;
      default:
        id3098x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3098out_result[(getCycle()+1)%2] = (id3098x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3099out_output;

  { // Node ID: 3099 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3099in_input = id3098out_result[getCycle()%2];

    id3099out_output = id3099in_input;
  }
  { // Node ID: 3101 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3101in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3101in_option0 = in_vars.id3100out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3101in_option1 = id3099out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3101x_1;

    switch((id3101in_sel.getValueAsLong())) {
      case 0l:
        id3101x_1 = id3101in_option0;
        break;
      case 1l:
        id3101x_1 = id3101in_option1;
        break;
      default:
        id3101x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3101out_result[(getCycle()+1)%2] = (id3101x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3102out_output;

  { // Node ID: 3102 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3102in_input = id3101out_result[getCycle()%2];

    id3102out_output = id3102in_input;
  }
  { // Node ID: 3104 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3104in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3104in_option0 = in_vars.id3103out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3104in_option1 = id3102out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3104x_1;

    switch((id3104in_sel.getValueAsLong())) {
      case 0l:
        id3104x_1 = id3104in_option0;
        break;
      case 1l:
        id3104x_1 = id3104in_option1;
        break;
      default:
        id3104x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3104out_result[(getCycle()+1)%2] = (id3104x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3105out_output;

  { // Node ID: 3105 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3105in_input = id3104out_result[getCycle()%2];

    id3105out_output = id3105in_input;
  }
  { // Node ID: 3107 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3107in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3107in_option0 = in_vars.id3106out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3107in_option1 = id3105out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3107x_1;

    switch((id3107in_sel.getValueAsLong())) {
      case 0l:
        id3107x_1 = id3107in_option0;
        break;
      case 1l:
        id3107x_1 = id3107in_option1;
        break;
      default:
        id3107x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3107out_result[(getCycle()+1)%2] = (id3107x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3108out_output;

  { // Node ID: 3108 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3108in_input = id3107out_result[getCycle()%2];

    id3108out_output = id3108in_input;
  }
  { // Node ID: 3110 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3110in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3110in_option0 = in_vars.id3109out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3110in_option1 = id3108out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3110x_1;

    switch((id3110in_sel.getValueAsLong())) {
      case 0l:
        id3110x_1 = id3110in_option0;
        break;
      case 1l:
        id3110x_1 = id3110in_option1;
        break;
      default:
        id3110x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3110out_result[(getCycle()+1)%2] = (id3110x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3111out_output;

  { // Node ID: 3111 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3111in_input = id3110out_result[getCycle()%2];

    id3111out_output = id3111in_input;
  }
  { // Node ID: 3113 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3113in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3113in_option0 = in_vars.id3112out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3113in_option1 = id3111out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3113x_1;

    switch((id3113in_sel.getValueAsLong())) {
      case 0l:
        id3113x_1 = id3113in_option0;
        break;
      case 1l:
        id3113x_1 = id3113in_option1;
        break;
      default:
        id3113x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3113out_result[(getCycle()+1)%2] = (id3113x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3114out_output;

  { // Node ID: 3114 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3114in_input = id3113out_result[getCycle()%2];

    id3114out_output = id3114in_input;
  }
  { // Node ID: 3116 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3116in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3116in_option0 = in_vars.id3115out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3116in_option1 = id3114out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3116x_1;

    switch((id3116in_sel.getValueAsLong())) {
      case 0l:
        id3116x_1 = id3116in_option0;
        break;
      case 1l:
        id3116x_1 = id3116in_option1;
        break;
      default:
        id3116x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3116out_result[(getCycle()+1)%2] = (id3116x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3117out_output;

  { // Node ID: 3117 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3117in_input = id3116out_result[getCycle()%2];

    id3117out_output = id3117in_input;
  }
  { // Node ID: 3119 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3119in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3119in_option0 = in_vars.id3118out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3119in_option1 = id3117out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3119x_1;

    switch((id3119in_sel.getValueAsLong())) {
      case 0l:
        id3119x_1 = id3119in_option0;
        break;
      case 1l:
        id3119x_1 = id3119in_option1;
        break;
      default:
        id3119x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3119out_result[(getCycle()+1)%2] = (id3119x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3120out_output;

  { // Node ID: 3120 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3120in_input = id3119out_result[getCycle()%2];

    id3120out_output = id3120in_input;
  }
  { // Node ID: 3122 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3122in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3122in_option0 = in_vars.id3121out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3122in_option1 = id3120out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3122x_1;

    switch((id3122in_sel.getValueAsLong())) {
      case 0l:
        id3122x_1 = id3122in_option0;
        break;
      case 1l:
        id3122x_1 = id3122in_option1;
        break;
      default:
        id3122x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3122out_result[(getCycle()+1)%2] = (id3122x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3123out_output;

  { // Node ID: 3123 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3123in_input = id3122out_result[getCycle()%2];

    id3123out_output = id3123in_input;
  }
  { // Node ID: 3125 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3125in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3125in_option0 = in_vars.id3124out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3125in_option1 = id3123out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3125x_1;

    switch((id3125in_sel.getValueAsLong())) {
      case 0l:
        id3125x_1 = id3125in_option0;
        break;
      case 1l:
        id3125x_1 = id3125in_option1;
        break;
      default:
        id3125x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3125out_result[(getCycle()+1)%2] = (id3125x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3126out_output;

  { // Node ID: 3126 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3126in_input = id3125out_result[getCycle()%2];

    id3126out_output = id3126in_input;
  }
  { // Node ID: 3128 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3128in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3128in_option0 = in_vars.id3127out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3128in_option1 = id3126out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3128x_1;

    switch((id3128in_sel.getValueAsLong())) {
      case 0l:
        id3128x_1 = id3128in_option0;
        break;
      case 1l:
        id3128x_1 = id3128in_option1;
        break;
      default:
        id3128x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3128out_result[(getCycle()+1)%2] = (id3128x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3129out_output;

  { // Node ID: 3129 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3129in_input = id3128out_result[getCycle()%2];

    id3129out_output = id3129in_input;
  }
  { // Node ID: 3131 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3131in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3131in_option0 = in_vars.id3130out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3131in_option1 = id3129out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3131x_1;

    switch((id3131in_sel.getValueAsLong())) {
      case 0l:
        id3131x_1 = id3131in_option0;
        break;
      case 1l:
        id3131x_1 = id3131in_option1;
        break;
      default:
        id3131x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3131out_result[(getCycle()+1)%2] = (id3131x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3132out_output;

  { // Node ID: 3132 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3132in_input = id3131out_result[getCycle()%2];

    id3132out_output = id3132in_input;
  }
  { // Node ID: 3134 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3134in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3134in_option0 = in_vars.id3133out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3134in_option1 = id3132out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3134x_1;

    switch((id3134in_sel.getValueAsLong())) {
      case 0l:
        id3134x_1 = id3134in_option0;
        break;
      case 1l:
        id3134x_1 = id3134in_option1;
        break;
      default:
        id3134x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3134out_result[(getCycle()+1)%2] = (id3134x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3135out_output;

  { // Node ID: 3135 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3135in_input = id3134out_result[getCycle()%2];

    id3135out_output = id3135in_input;
  }
  { // Node ID: 3137 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3137in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3137in_option0 = in_vars.id3136out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3137in_option1 = id3135out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3137x_1;

    switch((id3137in_sel.getValueAsLong())) {
      case 0l:
        id3137x_1 = id3137in_option0;
        break;
      case 1l:
        id3137x_1 = id3137in_option1;
        break;
      default:
        id3137x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3137out_result[(getCycle()+1)%2] = (id3137x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3138out_output;

  { // Node ID: 3138 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3138in_input = id3137out_result[getCycle()%2];

    id3138out_output = id3138in_input;
  }
  { // Node ID: 3140 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3140in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3140in_option0 = in_vars.id3139out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3140in_option1 = id3138out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3140x_1;

    switch((id3140in_sel.getValueAsLong())) {
      case 0l:
        id3140x_1 = id3140in_option0;
        break;
      case 1l:
        id3140x_1 = id3140in_option1;
        break;
      default:
        id3140x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3140out_result[(getCycle()+1)%2] = (id3140x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3141out_output;

  { // Node ID: 3141 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3141in_input = id3140out_result[getCycle()%2];

    id3141out_output = id3141in_input;
  }
  { // Node ID: 3143 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3143in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3143in_option0 = in_vars.id3142out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3143in_option1 = id3141out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3143x_1;

    switch((id3143in_sel.getValueAsLong())) {
      case 0l:
        id3143x_1 = id3143in_option0;
        break;
      case 1l:
        id3143x_1 = id3143in_option1;
        break;
      default:
        id3143x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3143out_result[(getCycle()+1)%2] = (id3143x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3144out_output;

  { // Node ID: 3144 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3144in_input = id3143out_result[getCycle()%2];

    id3144out_output = id3144in_input;
  }
  { // Node ID: 3146 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3146in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3146in_option0 = in_vars.id3145out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3146in_option1 = id3144out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3146x_1;

    switch((id3146in_sel.getValueAsLong())) {
      case 0l:
        id3146x_1 = id3146in_option0;
        break;
      case 1l:
        id3146x_1 = id3146in_option1;
        break;
      default:
        id3146x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3146out_result[(getCycle()+1)%2] = (id3146x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3147out_output;

  { // Node ID: 3147 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3147in_input = id3146out_result[getCycle()%2];

    id3147out_output = id3147in_input;
  }
  { // Node ID: 3149 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3149in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3149in_option0 = in_vars.id3148out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3149in_option1 = id3147out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3149x_1;

    switch((id3149in_sel.getValueAsLong())) {
      case 0l:
        id3149x_1 = id3149in_option0;
        break;
      case 1l:
        id3149x_1 = id3149in_option1;
        break;
      default:
        id3149x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3149out_result[(getCycle()+1)%2] = (id3149x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3150out_output;

  { // Node ID: 3150 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3150in_input = id3149out_result[getCycle()%2];

    id3150out_output = id3150in_input;
  }
  { // Node ID: 3152 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3152in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3152in_option0 = in_vars.id3151out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3152in_option1 = id3150out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3152x_1;

    switch((id3152in_sel.getValueAsLong())) {
      case 0l:
        id3152x_1 = id3152in_option0;
        break;
      case 1l:
        id3152x_1 = id3152in_option1;
        break;
      default:
        id3152x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3152out_result[(getCycle()+1)%2] = (id3152x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3153out_output;

  { // Node ID: 3153 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3153in_input = id3152out_result[getCycle()%2];

    id3153out_output = id3153in_input;
  }
  { // Node ID: 3155 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3155in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3155in_option0 = in_vars.id3154out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3155in_option1 = id3153out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3155x_1;

    switch((id3155in_sel.getValueAsLong())) {
      case 0l:
        id3155x_1 = id3155in_option0;
        break;
      case 1l:
        id3155x_1 = id3155in_option1;
        break;
      default:
        id3155x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3155out_result[(getCycle()+1)%2] = (id3155x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3156out_output;

  { // Node ID: 3156 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3156in_input = id3155out_result[getCycle()%2];

    id3156out_output = id3156in_input;
  }
  { // Node ID: 3158 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3158in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3158in_option0 = in_vars.id3157out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3158in_option1 = id3156out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3158x_1;

    switch((id3158in_sel.getValueAsLong())) {
      case 0l:
        id3158x_1 = id3158in_option0;
        break;
      case 1l:
        id3158x_1 = id3158in_option1;
        break;
      default:
        id3158x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3158out_result[(getCycle()+1)%2] = (id3158x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3159out_output;

  { // Node ID: 3159 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3159in_input = id3158out_result[getCycle()%2];

    id3159out_output = id3159in_input;
  }
  { // Node ID: 3161 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3161in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3161in_option0 = in_vars.id3160out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3161in_option1 = id3159out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3161x_1;

    switch((id3161in_sel.getValueAsLong())) {
      case 0l:
        id3161x_1 = id3161in_option0;
        break;
      case 1l:
        id3161x_1 = id3161in_option1;
        break;
      default:
        id3161x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3161out_result[(getCycle()+1)%2] = (id3161x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3162out_output;

  { // Node ID: 3162 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3162in_input = id3161out_result[getCycle()%2];

    id3162out_output = id3162in_input;
  }
  { // Node ID: 3164 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3164in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3164in_option0 = in_vars.id3163out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3164in_option1 = id3162out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3164x_1;

    switch((id3164in_sel.getValueAsLong())) {
      case 0l:
        id3164x_1 = id3164in_option0;
        break;
      case 1l:
        id3164x_1 = id3164in_option1;
        break;
      default:
        id3164x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3164out_result[(getCycle()+1)%2] = (id3164x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3165out_output;

  { // Node ID: 3165 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3165in_input = id3164out_result[getCycle()%2];

    id3165out_output = id3165in_input;
  }
  { // Node ID: 3167 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3167in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3167in_option0 = in_vars.id3166out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3167in_option1 = id3165out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3167x_1;

    switch((id3167in_sel.getValueAsLong())) {
      case 0l:
        id3167x_1 = id3167in_option0;
        break;
      case 1l:
        id3167x_1 = id3167in_option1;
        break;
      default:
        id3167x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3167out_result[(getCycle()+1)%2] = (id3167x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3168out_output;

  { // Node ID: 3168 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3168in_input = id3167out_result[getCycle()%2];

    id3168out_output = id3168in_input;
  }
  { // Node ID: 3170 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3170in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3170in_option0 = in_vars.id3169out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3170in_option1 = id3168out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3170x_1;

    switch((id3170in_sel.getValueAsLong())) {
      case 0l:
        id3170x_1 = id3170in_option0;
        break;
      case 1l:
        id3170x_1 = id3170in_option1;
        break;
      default:
        id3170x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3170out_result[(getCycle()+1)%2] = (id3170x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3171out_output;

  { // Node ID: 3171 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3171in_input = id3170out_result[getCycle()%2];

    id3171out_output = id3171in_input;
  }
  { // Node ID: 3173 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3173in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3173in_option0 = in_vars.id3172out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3173in_option1 = id3171out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3173x_1;

    switch((id3173in_sel.getValueAsLong())) {
      case 0l:
        id3173x_1 = id3173in_option0;
        break;
      case 1l:
        id3173x_1 = id3173in_option1;
        break;
      default:
        id3173x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3173out_result[(getCycle()+1)%2] = (id3173x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3174out_output;

  { // Node ID: 3174 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3174in_input = id3173out_result[getCycle()%2];

    id3174out_output = id3174in_input;
  }
  { // Node ID: 3176 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3176in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3176in_option0 = in_vars.id3175out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3176in_option1 = id3174out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3176x_1;

    switch((id3176in_sel.getValueAsLong())) {
      case 0l:
        id3176x_1 = id3176in_option0;
        break;
      case 1l:
        id3176x_1 = id3176in_option1;
        break;
      default:
        id3176x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3176out_result[(getCycle()+1)%2] = (id3176x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3177out_output;

  { // Node ID: 3177 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3177in_input = id3176out_result[getCycle()%2];

    id3177out_output = id3177in_input;
  }
  { // Node ID: 3179 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3179in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3179in_option0 = in_vars.id3178out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3179in_option1 = id3177out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3179x_1;

    switch((id3179in_sel.getValueAsLong())) {
      case 0l:
        id3179x_1 = id3179in_option0;
        break;
      case 1l:
        id3179x_1 = id3179in_option1;
        break;
      default:
        id3179x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3179out_result[(getCycle()+1)%2] = (id3179x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3180out_output;

  { // Node ID: 3180 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3180in_input = id3179out_result[getCycle()%2];

    id3180out_output = id3180in_input;
  }
  { // Node ID: 3182 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3182in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3182in_option0 = in_vars.id3181out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3182in_option1 = id3180out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3182x_1;

    switch((id3182in_sel.getValueAsLong())) {
      case 0l:
        id3182x_1 = id3182in_option0;
        break;
      case 1l:
        id3182x_1 = id3182in_option1;
        break;
      default:
        id3182x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3182out_result[(getCycle()+1)%2] = (id3182x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3183out_output;

  { // Node ID: 3183 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3183in_input = id3182out_result[getCycle()%2];

    id3183out_output = id3183in_input;
  }
  { // Node ID: 3185 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3185in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3185in_option0 = in_vars.id3184out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3185in_option1 = id3183out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3185x_1;

    switch((id3185in_sel.getValueAsLong())) {
      case 0l:
        id3185x_1 = id3185in_option0;
        break;
      case 1l:
        id3185x_1 = id3185in_option1;
        break;
      default:
        id3185x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3185out_result[(getCycle()+1)%2] = (id3185x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3186out_output;

  { // Node ID: 3186 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3186in_input = id3185out_result[getCycle()%2];

    id3186out_output = id3186in_input;
  }
  { // Node ID: 3188 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3188in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3188in_option0 = in_vars.id3187out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3188in_option1 = id3186out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3188x_1;

    switch((id3188in_sel.getValueAsLong())) {
      case 0l:
        id3188x_1 = id3188in_option0;
        break;
      case 1l:
        id3188x_1 = id3188in_option1;
        break;
      default:
        id3188x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3188out_result[(getCycle()+1)%2] = (id3188x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3189out_output;

  { // Node ID: 3189 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3189in_input = id3188out_result[getCycle()%2];

    id3189out_output = id3189in_input;
  }
  { // Node ID: 3191 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3191in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3191in_option0 = in_vars.id3190out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3191in_option1 = id3189out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3191x_1;

    switch((id3191in_sel.getValueAsLong())) {
      case 0l:
        id3191x_1 = id3191in_option0;
        break;
      case 1l:
        id3191x_1 = id3191in_option1;
        break;
      default:
        id3191x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3191out_result[(getCycle()+1)%2] = (id3191x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3192out_output;

  { // Node ID: 3192 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3192in_input = id3191out_result[getCycle()%2];

    id3192out_output = id3192in_input;
  }
  { // Node ID: 3194 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3194in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3194in_option0 = in_vars.id3193out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3194in_option1 = id3192out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3194x_1;

    switch((id3194in_sel.getValueAsLong())) {
      case 0l:
        id3194x_1 = id3194in_option0;
        break;
      case 1l:
        id3194x_1 = id3194in_option1;
        break;
      default:
        id3194x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3194out_result[(getCycle()+1)%2] = (id3194x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3195out_output;

  { // Node ID: 3195 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3195in_input = id3194out_result[getCycle()%2];

    id3195out_output = id3195in_input;
  }
  { // Node ID: 3197 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3197in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3197in_option0 = in_vars.id3196out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3197in_option1 = id3195out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3197x_1;

    switch((id3197in_sel.getValueAsLong())) {
      case 0l:
        id3197x_1 = id3197in_option0;
        break;
      case 1l:
        id3197x_1 = id3197in_option1;
        break;
      default:
        id3197x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3197out_result[(getCycle()+1)%2] = (id3197x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3198out_output;

  { // Node ID: 3198 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3198in_input = id3197out_result[getCycle()%2];

    id3198out_output = id3198in_input;
  }
  { // Node ID: 3200 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3200in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3200in_option0 = in_vars.id3199out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3200in_option1 = id3198out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3200x_1;

    switch((id3200in_sel.getValueAsLong())) {
      case 0l:
        id3200x_1 = id3200in_option0;
        break;
      case 1l:
        id3200x_1 = id3200in_option1;
        break;
      default:
        id3200x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3200out_result[(getCycle()+1)%2] = (id3200x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3201out_output;

  { // Node ID: 3201 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3201in_input = id3200out_result[getCycle()%2];

    id3201out_output = id3201in_input;
  }
  { // Node ID: 3203 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3203in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3203in_option0 = in_vars.id3202out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3203in_option1 = id3201out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3203x_1;

    switch((id3203in_sel.getValueAsLong())) {
      case 0l:
        id3203x_1 = id3203in_option0;
        break;
      case 1l:
        id3203x_1 = id3203in_option1;
        break;
      default:
        id3203x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3203out_result[(getCycle()+1)%2] = (id3203x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3204out_output;

  { // Node ID: 3204 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3204in_input = id3203out_result[getCycle()%2];

    id3204out_output = id3204in_input;
  }
  { // Node ID: 3206 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3206in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3206in_option0 = in_vars.id3205out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3206in_option1 = id3204out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3206x_1;

    switch((id3206in_sel.getValueAsLong())) {
      case 0l:
        id3206x_1 = id3206in_option0;
        break;
      case 1l:
        id3206x_1 = id3206in_option1;
        break;
      default:
        id3206x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3206out_result[(getCycle()+1)%2] = (id3206x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3207out_output;

  { // Node ID: 3207 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3207in_input = id3206out_result[getCycle()%2];

    id3207out_output = id3207in_input;
  }
  { // Node ID: 3209 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3209in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3209in_option0 = in_vars.id3208out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3209in_option1 = id3207out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3209x_1;

    switch((id3209in_sel.getValueAsLong())) {
      case 0l:
        id3209x_1 = id3209in_option0;
        break;
      case 1l:
        id3209x_1 = id3209in_option1;
        break;
      default:
        id3209x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3209out_result[(getCycle()+1)%2] = (id3209x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3210out_output;

  { // Node ID: 3210 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3210in_input = id3209out_result[getCycle()%2];

    id3210out_output = id3210in_input;
  }
  { // Node ID: 3212 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3212in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3212in_option0 = in_vars.id3211out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3212in_option1 = id3210out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3212x_1;

    switch((id3212in_sel.getValueAsLong())) {
      case 0l:
        id3212x_1 = id3212in_option0;
        break;
      case 1l:
        id3212x_1 = id3212in_option1;
        break;
      default:
        id3212x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3212out_result[(getCycle()+1)%2] = (id3212x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3213out_output;

  { // Node ID: 3213 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3213in_input = id3212out_result[getCycle()%2];

    id3213out_output = id3213in_input;
  }
  { // Node ID: 3215 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3215in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3215in_option0 = in_vars.id3214out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3215in_option1 = id3213out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3215x_1;

    switch((id3215in_sel.getValueAsLong())) {
      case 0l:
        id3215x_1 = id3215in_option0;
        break;
      case 1l:
        id3215x_1 = id3215in_option1;
        break;
      default:
        id3215x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3215out_result[(getCycle()+1)%2] = (id3215x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3216out_output;

  { // Node ID: 3216 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3216in_input = id3215out_result[getCycle()%2];

    id3216out_output = id3216in_input;
  }
  { // Node ID: 3218 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3218in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3218in_option0 = in_vars.id3217out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3218in_option1 = id3216out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3218x_1;

    switch((id3218in_sel.getValueAsLong())) {
      case 0l:
        id3218x_1 = id3218in_option0;
        break;
      case 1l:
        id3218x_1 = id3218in_option1;
        break;
      default:
        id3218x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3218out_result[(getCycle()+1)%2] = (id3218x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3219out_output;

  { // Node ID: 3219 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3219in_input = id3218out_result[getCycle()%2];

    id3219out_output = id3219in_input;
  }
  { // Node ID: 3221 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3221in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3221in_option0 = in_vars.id3220out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3221in_option1 = id3219out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3221x_1;

    switch((id3221in_sel.getValueAsLong())) {
      case 0l:
        id3221x_1 = id3221in_option0;
        break;
      case 1l:
        id3221x_1 = id3221in_option1;
        break;
      default:
        id3221x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3221out_result[(getCycle()+1)%2] = (id3221x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3222out_output;

  { // Node ID: 3222 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3222in_input = id3221out_result[getCycle()%2];

    id3222out_output = id3222in_input;
  }
  { // Node ID: 3224 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3224in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3224in_option0 = in_vars.id3223out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3224in_option1 = id3222out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3224x_1;

    switch((id3224in_sel.getValueAsLong())) {
      case 0l:
        id3224x_1 = id3224in_option0;
        break;
      case 1l:
        id3224x_1 = id3224in_option1;
        break;
      default:
        id3224x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3224out_result[(getCycle()+1)%2] = (id3224x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3225out_output;

  { // Node ID: 3225 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3225in_input = id3224out_result[getCycle()%2];

    id3225out_output = id3225in_input;
  }
  { // Node ID: 3227 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3227in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3227in_option0 = in_vars.id3226out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3227in_option1 = id3225out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3227x_1;

    switch((id3227in_sel.getValueAsLong())) {
      case 0l:
        id3227x_1 = id3227in_option0;
        break;
      case 1l:
        id3227x_1 = id3227in_option1;
        break;
      default:
        id3227x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3227out_result[(getCycle()+1)%2] = (id3227x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3228out_output;

  { // Node ID: 3228 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3228in_input = id3227out_result[getCycle()%2];

    id3228out_output = id3228in_input;
  }
  { // Node ID: 3230 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3230in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3230in_option0 = in_vars.id3229out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3230in_option1 = id3228out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3230x_1;

    switch((id3230in_sel.getValueAsLong())) {
      case 0l:
        id3230x_1 = id3230in_option0;
        break;
      case 1l:
        id3230x_1 = id3230in_option1;
        break;
      default:
        id3230x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3230out_result[(getCycle()+1)%2] = (id3230x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3231out_output;

  { // Node ID: 3231 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3231in_input = id3230out_result[getCycle()%2];

    id3231out_output = id3231in_input;
  }
  { // Node ID: 3233 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3233in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3233in_option0 = in_vars.id3232out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3233in_option1 = id3231out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3233x_1;

    switch((id3233in_sel.getValueAsLong())) {
      case 0l:
        id3233x_1 = id3233in_option0;
        break;
      case 1l:
        id3233x_1 = id3233in_option1;
        break;
      default:
        id3233x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3233out_result[(getCycle()+1)%2] = (id3233x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3234out_output;

  { // Node ID: 3234 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3234in_input = id3233out_result[getCycle()%2];

    id3234out_output = id3234in_input;
  }
  { // Node ID: 3236 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3236in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3236in_option0 = in_vars.id3235out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3236in_option1 = id3234out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3236x_1;

    switch((id3236in_sel.getValueAsLong())) {
      case 0l:
        id3236x_1 = id3236in_option0;
        break;
      case 1l:
        id3236x_1 = id3236in_option1;
        break;
      default:
        id3236x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3236out_result[(getCycle()+1)%2] = (id3236x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3237out_output;

  { // Node ID: 3237 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3237in_input = id3236out_result[getCycle()%2];

    id3237out_output = id3237in_input;
  }
  { // Node ID: 3239 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3239in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3239in_option0 = in_vars.id3238out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3239in_option1 = id3237out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3239x_1;

    switch((id3239in_sel.getValueAsLong())) {
      case 0l:
        id3239x_1 = id3239in_option0;
        break;
      case 1l:
        id3239x_1 = id3239in_option1;
        break;
      default:
        id3239x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3239out_result[(getCycle()+1)%2] = (id3239x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3240out_output;

  { // Node ID: 3240 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3240in_input = id3239out_result[getCycle()%2];

    id3240out_output = id3240in_input;
  }
  { // Node ID: 3242 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3242in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3242in_option0 = in_vars.id3241out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3242in_option1 = id3240out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3242x_1;

    switch((id3242in_sel.getValueAsLong())) {
      case 0l:
        id3242x_1 = id3242in_option0;
        break;
      case 1l:
        id3242x_1 = id3242in_option1;
        break;
      default:
        id3242x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3242out_result[(getCycle()+1)%2] = (id3242x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3243out_output;

  { // Node ID: 3243 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3243in_input = id3242out_result[getCycle()%2];

    id3243out_output = id3243in_input;
  }
  { // Node ID: 3245 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3245in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3245in_option0 = in_vars.id3244out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3245in_option1 = id3243out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3245x_1;

    switch((id3245in_sel.getValueAsLong())) {
      case 0l:
        id3245x_1 = id3245in_option0;
        break;
      case 1l:
        id3245x_1 = id3245in_option1;
        break;
      default:
        id3245x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3245out_result[(getCycle()+1)%2] = (id3245x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3246out_output;

  { // Node ID: 3246 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3246in_input = id3245out_result[getCycle()%2];

    id3246out_output = id3246in_input;
  }
  { // Node ID: 3248 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3248in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3248in_option0 = in_vars.id3247out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3248in_option1 = id3246out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3248x_1;

    switch((id3248in_sel.getValueAsLong())) {
      case 0l:
        id3248x_1 = id3248in_option0;
        break;
      case 1l:
        id3248x_1 = id3248in_option1;
        break;
      default:
        id3248x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3248out_result[(getCycle()+1)%2] = (id3248x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3249out_output;

  { // Node ID: 3249 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3249in_input = id3248out_result[getCycle()%2];

    id3249out_output = id3249in_input;
  }
  { // Node ID: 3251 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3251in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3251in_option0 = in_vars.id3250out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3251in_option1 = id3249out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3251x_1;

    switch((id3251in_sel.getValueAsLong())) {
      case 0l:
        id3251x_1 = id3251in_option0;
        break;
      case 1l:
        id3251x_1 = id3251in_option1;
        break;
      default:
        id3251x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3251out_result[(getCycle()+1)%2] = (id3251x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3252out_output;

  { // Node ID: 3252 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3252in_input = id3251out_result[getCycle()%2];

    id3252out_output = id3252in_input;
  }
  { // Node ID: 3254 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3254in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3254in_option0 = in_vars.id3253out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3254in_option1 = id3252out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3254x_1;

    switch((id3254in_sel.getValueAsLong())) {
      case 0l:
        id3254x_1 = id3254in_option0;
        break;
      case 1l:
        id3254x_1 = id3254in_option1;
        break;
      default:
        id3254x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3254out_result[(getCycle()+1)%2] = (id3254x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3255out_output;

  { // Node ID: 3255 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3255in_input = id3254out_result[getCycle()%2];

    id3255out_output = id3255in_input;
  }
  { // Node ID: 3257 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3257in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3257in_option0 = in_vars.id3256out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3257in_option1 = id3255out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3257x_1;

    switch((id3257in_sel.getValueAsLong())) {
      case 0l:
        id3257x_1 = id3257in_option0;
        break;
      case 1l:
        id3257x_1 = id3257in_option1;
        break;
      default:
        id3257x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3257out_result[(getCycle()+1)%2] = (id3257x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3258out_output;

  { // Node ID: 3258 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3258in_input = id3257out_result[getCycle()%2];

    id3258out_output = id3258in_input;
  }
  { // Node ID: 3260 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3260in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3260in_option0 = in_vars.id3259out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3260in_option1 = id3258out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3260x_1;

    switch((id3260in_sel.getValueAsLong())) {
      case 0l:
        id3260x_1 = id3260in_option0;
        break;
      case 1l:
        id3260x_1 = id3260in_option1;
        break;
      default:
        id3260x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3260out_result[(getCycle()+1)%2] = (id3260x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3261out_output;

  { // Node ID: 3261 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3261in_input = id3260out_result[getCycle()%2];

    id3261out_output = id3261in_input;
  }
  { // Node ID: 3263 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3263in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3263in_option0 = in_vars.id3262out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3263in_option1 = id3261out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3263x_1;

    switch((id3263in_sel.getValueAsLong())) {
      case 0l:
        id3263x_1 = id3263in_option0;
        break;
      case 1l:
        id3263x_1 = id3263in_option1;
        break;
      default:
        id3263x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3263out_result[(getCycle()+1)%2] = (id3263x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3264out_output;

  { // Node ID: 3264 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3264in_input = id3263out_result[getCycle()%2];

    id3264out_output = id3264in_input;
  }
  { // Node ID: 3266 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3266in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3266in_option0 = in_vars.id3265out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3266in_option1 = id3264out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3266x_1;

    switch((id3266in_sel.getValueAsLong())) {
      case 0l:
        id3266x_1 = id3266in_option0;
        break;
      case 1l:
        id3266x_1 = id3266in_option1;
        break;
      default:
        id3266x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3266out_result[(getCycle()+1)%2] = (id3266x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3267out_output;

  { // Node ID: 3267 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3267in_input = id3266out_result[getCycle()%2];

    id3267out_output = id3267in_input;
  }
  { // Node ID: 3269 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3269in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3269in_option0 = in_vars.id3268out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3269in_option1 = id3267out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3269x_1;

    switch((id3269in_sel.getValueAsLong())) {
      case 0l:
        id3269x_1 = id3269in_option0;
        break;
      case 1l:
        id3269x_1 = id3269in_option1;
        break;
      default:
        id3269x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3269out_result[(getCycle()+1)%2] = (id3269x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3270out_output;

  { // Node ID: 3270 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3270in_input = id3269out_result[getCycle()%2];

    id3270out_output = id3270in_input;
  }
  { // Node ID: 3272 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3272in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3272in_option0 = in_vars.id3271out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3272in_option1 = id3270out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3272x_1;

    switch((id3272in_sel.getValueAsLong())) {
      case 0l:
        id3272x_1 = id3272in_option0;
        break;
      case 1l:
        id3272x_1 = id3272in_option1;
        break;
      default:
        id3272x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3272out_result[(getCycle()+1)%2] = (id3272x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3273out_output;

  { // Node ID: 3273 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3273in_input = id3272out_result[getCycle()%2];

    id3273out_output = id3273in_input;
  }
  { // Node ID: 3275 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3275in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3275in_option0 = in_vars.id3274out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3275in_option1 = id3273out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3275x_1;

    switch((id3275in_sel.getValueAsLong())) {
      case 0l:
        id3275x_1 = id3275in_option0;
        break;
      case 1l:
        id3275x_1 = id3275in_option1;
        break;
      default:
        id3275x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3275out_result[(getCycle()+1)%2] = (id3275x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3276out_output;

  { // Node ID: 3276 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3276in_input = id3275out_result[getCycle()%2];

    id3276out_output = id3276in_input;
  }
  { // Node ID: 3278 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3278in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3278in_option0 = in_vars.id3277out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3278in_option1 = id3276out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3278x_1;

    switch((id3278in_sel.getValueAsLong())) {
      case 0l:
        id3278x_1 = id3278in_option0;
        break;
      case 1l:
        id3278x_1 = id3278in_option1;
        break;
      default:
        id3278x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3278out_result[(getCycle()+1)%2] = (id3278x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3279out_output;

  { // Node ID: 3279 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3279in_input = id3278out_result[getCycle()%2];

    id3279out_output = id3279in_input;
  }
  { // Node ID: 3281 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3281in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3281in_option0 = in_vars.id3280out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3281in_option1 = id3279out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3281x_1;

    switch((id3281in_sel.getValueAsLong())) {
      case 0l:
        id3281x_1 = id3281in_option0;
        break;
      case 1l:
        id3281x_1 = id3281in_option1;
        break;
      default:
        id3281x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3281out_result[(getCycle()+1)%2] = (id3281x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3282out_output;

  { // Node ID: 3282 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3282in_input = id3281out_result[getCycle()%2];

    id3282out_output = id3282in_input;
  }
  { // Node ID: 3284 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3284in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3284in_option0 = in_vars.id3283out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3284in_option1 = id3282out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3284x_1;

    switch((id3284in_sel.getValueAsLong())) {
      case 0l:
        id3284x_1 = id3284in_option0;
        break;
      case 1l:
        id3284x_1 = id3284in_option1;
        break;
      default:
        id3284x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3284out_result[(getCycle()+1)%2] = (id3284x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3285out_output;

  { // Node ID: 3285 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3285in_input = id3284out_result[getCycle()%2];

    id3285out_output = id3285in_input;
  }
  { // Node ID: 3287 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3287in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3287in_option0 = in_vars.id3286out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3287in_option1 = id3285out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3287x_1;

    switch((id3287in_sel.getValueAsLong())) {
      case 0l:
        id3287x_1 = id3287in_option0;
        break;
      case 1l:
        id3287x_1 = id3287in_option1;
        break;
      default:
        id3287x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3287out_result[(getCycle()+1)%2] = (id3287x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3288out_output;

  { // Node ID: 3288 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3288in_input = id3287out_result[getCycle()%2];

    id3288out_output = id3288in_input;
  }
  { // Node ID: 3290 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3290in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3290in_option0 = in_vars.id3289out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3290in_option1 = id3288out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3290x_1;

    switch((id3290in_sel.getValueAsLong())) {
      case 0l:
        id3290x_1 = id3290in_option0;
        break;
      case 1l:
        id3290x_1 = id3290in_option1;
        break;
      default:
        id3290x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3290out_result[(getCycle()+1)%2] = (id3290x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3291out_output;

  { // Node ID: 3291 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3291in_input = id3290out_result[getCycle()%2];

    id3291out_output = id3291in_input;
  }
  { // Node ID: 3293 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3293in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3293in_option0 = in_vars.id3292out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3293in_option1 = id3291out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3293x_1;

    switch((id3293in_sel.getValueAsLong())) {
      case 0l:
        id3293x_1 = id3293in_option0;
        break;
      case 1l:
        id3293x_1 = id3293in_option1;
        break;
      default:
        id3293x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3293out_result[(getCycle()+1)%2] = (id3293x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3294out_output;

  { // Node ID: 3294 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3294in_input = id3293out_result[getCycle()%2];

    id3294out_output = id3294in_input;
  }
  { // Node ID: 3296 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3296in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3296in_option0 = in_vars.id3295out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3296in_option1 = id3294out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3296x_1;

    switch((id3296in_sel.getValueAsLong())) {
      case 0l:
        id3296x_1 = id3296in_option0;
        break;
      case 1l:
        id3296x_1 = id3296in_option1;
        break;
      default:
        id3296x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3296out_result[(getCycle()+1)%2] = (id3296x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3297out_output;

  { // Node ID: 3297 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3297in_input = id3296out_result[getCycle()%2];

    id3297out_output = id3297in_input;
  }
  { // Node ID: 3299 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3299in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3299in_option0 = in_vars.id3298out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3299in_option1 = id3297out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3299x_1;

    switch((id3299in_sel.getValueAsLong())) {
      case 0l:
        id3299x_1 = id3299in_option0;
        break;
      case 1l:
        id3299x_1 = id3299in_option1;
        break;
      default:
        id3299x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3299out_result[(getCycle()+1)%2] = (id3299x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3300out_output;

  { // Node ID: 3300 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3300in_input = id3299out_result[getCycle()%2];

    id3300out_output = id3300in_input;
  }
  { // Node ID: 3302 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3302in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3302in_option0 = in_vars.id3301out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3302in_option1 = id3300out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3302x_1;

    switch((id3302in_sel.getValueAsLong())) {
      case 0l:
        id3302x_1 = id3302in_option0;
        break;
      case 1l:
        id3302x_1 = id3302in_option1;
        break;
      default:
        id3302x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3302out_result[(getCycle()+1)%2] = (id3302x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3303out_output;

  { // Node ID: 3303 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3303in_input = id3302out_result[getCycle()%2];

    id3303out_output = id3303in_input;
  }
  { // Node ID: 3305 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3305in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3305in_option0 = in_vars.id3304out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3305in_option1 = id3303out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3305x_1;

    switch((id3305in_sel.getValueAsLong())) {
      case 0l:
        id3305x_1 = id3305in_option0;
        break;
      case 1l:
        id3305x_1 = id3305in_option1;
        break;
      default:
        id3305x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3305out_result[(getCycle()+1)%2] = (id3305x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3306out_output;

  { // Node ID: 3306 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3306in_input = id3305out_result[getCycle()%2];

    id3306out_output = id3306in_input;
  }
  { // Node ID: 3308 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3308in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3308in_option0 = in_vars.id3307out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3308in_option1 = id3306out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3308x_1;

    switch((id3308in_sel.getValueAsLong())) {
      case 0l:
        id3308x_1 = id3308in_option0;
        break;
      case 1l:
        id3308x_1 = id3308in_option1;
        break;
      default:
        id3308x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3308out_result[(getCycle()+1)%2] = (id3308x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3309out_output;

  { // Node ID: 3309 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3309in_input = id3308out_result[getCycle()%2];

    id3309out_output = id3309in_input;
  }
  { // Node ID: 3311 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3311in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3311in_option0 = in_vars.id3310out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3311in_option1 = id3309out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3311x_1;

    switch((id3311in_sel.getValueAsLong())) {
      case 0l:
        id3311x_1 = id3311in_option0;
        break;
      case 1l:
        id3311x_1 = id3311in_option1;
        break;
      default:
        id3311x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3311out_result[(getCycle()+1)%2] = (id3311x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3312out_output;

  { // Node ID: 3312 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3312in_input = id3311out_result[getCycle()%2];

    id3312out_output = id3312in_input;
  }
  { // Node ID: 3314 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3314in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3314in_option0 = in_vars.id3313out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3314in_option1 = id3312out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3314x_1;

    switch((id3314in_sel.getValueAsLong())) {
      case 0l:
        id3314x_1 = id3314in_option0;
        break;
      case 1l:
        id3314x_1 = id3314in_option1;
        break;
      default:
        id3314x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3314out_result[(getCycle()+1)%2] = (id3314x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3315out_output;

  { // Node ID: 3315 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3315in_input = id3314out_result[getCycle()%2];

    id3315out_output = id3315in_input;
  }
  { // Node ID: 3317 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3317in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3317in_option0 = in_vars.id3316out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3317in_option1 = id3315out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3317x_1;

    switch((id3317in_sel.getValueAsLong())) {
      case 0l:
        id3317x_1 = id3317in_option0;
        break;
      case 1l:
        id3317x_1 = id3317in_option1;
        break;
      default:
        id3317x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3317out_result[(getCycle()+1)%2] = (id3317x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3318out_output;

  { // Node ID: 3318 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3318in_input = id3317out_result[getCycle()%2];

    id3318out_output = id3318in_input;
  }
  { // Node ID: 3320 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3320in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3320in_option0 = in_vars.id3319out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3320in_option1 = id3318out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3320x_1;

    switch((id3320in_sel.getValueAsLong())) {
      case 0l:
        id3320x_1 = id3320in_option0;
        break;
      case 1l:
        id3320x_1 = id3320in_option1;
        break;
      default:
        id3320x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3320out_result[(getCycle()+1)%2] = (id3320x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3321out_output;

  { // Node ID: 3321 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3321in_input = id3320out_result[getCycle()%2];

    id3321out_output = id3321in_input;
  }
  { // Node ID: 3323 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3323in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3323in_option0 = in_vars.id3322out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3323in_option1 = id3321out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3323x_1;

    switch((id3323in_sel.getValueAsLong())) {
      case 0l:
        id3323x_1 = id3323in_option0;
        break;
      case 1l:
        id3323x_1 = id3323in_option1;
        break;
      default:
        id3323x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3323out_result[(getCycle()+1)%2] = (id3323x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3324out_output;

  { // Node ID: 3324 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3324in_input = id3323out_result[getCycle()%2];

    id3324out_output = id3324in_input;
  }
  { // Node ID: 3326 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3326in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3326in_option0 = in_vars.id3325out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3326in_option1 = id3324out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3326x_1;

    switch((id3326in_sel.getValueAsLong())) {
      case 0l:
        id3326x_1 = id3326in_option0;
        break;
      case 1l:
        id3326x_1 = id3326in_option1;
        break;
      default:
        id3326x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3326out_result[(getCycle()+1)%2] = (id3326x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3327out_output;

  { // Node ID: 3327 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3327in_input = id3326out_result[getCycle()%2];

    id3327out_output = id3327in_input;
  }
  { // Node ID: 3329 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3329in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3329in_option0 = in_vars.id3328out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3329in_option1 = id3327out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3329x_1;

    switch((id3329in_sel.getValueAsLong())) {
      case 0l:
        id3329x_1 = id3329in_option0;
        break;
      case 1l:
        id3329x_1 = id3329in_option1;
        break;
      default:
        id3329x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3329out_result[(getCycle()+1)%2] = (id3329x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3330out_output;

  { // Node ID: 3330 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3330in_input = id3329out_result[getCycle()%2];

    id3330out_output = id3330in_input;
  }
  { // Node ID: 3332 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3332in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3332in_option0 = in_vars.id3331out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3332in_option1 = id3330out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3332x_1;

    switch((id3332in_sel.getValueAsLong())) {
      case 0l:
        id3332x_1 = id3332in_option0;
        break;
      case 1l:
        id3332x_1 = id3332in_option1;
        break;
      default:
        id3332x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3332out_result[(getCycle()+1)%2] = (id3332x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3333out_output;

  { // Node ID: 3333 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3333in_input = id3332out_result[getCycle()%2];

    id3333out_output = id3333in_input;
  }
  { // Node ID: 3335 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3335in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3335in_option0 = in_vars.id3334out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3335in_option1 = id3333out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3335x_1;

    switch((id3335in_sel.getValueAsLong())) {
      case 0l:
        id3335x_1 = id3335in_option0;
        break;
      case 1l:
        id3335x_1 = id3335in_option1;
        break;
      default:
        id3335x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3335out_result[(getCycle()+1)%2] = (id3335x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3336out_output;

  { // Node ID: 3336 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3336in_input = id3335out_result[getCycle()%2];

    id3336out_output = id3336in_input;
  }
  { // Node ID: 3338 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3338in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3338in_option0 = in_vars.id3337out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3338in_option1 = id3336out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3338x_1;

    switch((id3338in_sel.getValueAsLong())) {
      case 0l:
        id3338x_1 = id3338in_option0;
        break;
      case 1l:
        id3338x_1 = id3338in_option1;
        break;
      default:
        id3338x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3338out_result[(getCycle()+1)%2] = (id3338x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3339out_output;

  { // Node ID: 3339 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3339in_input = id3338out_result[getCycle()%2];

    id3339out_output = id3339in_input;
  }
  { // Node ID: 3341 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3341in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3341in_option0 = in_vars.id3340out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3341in_option1 = id3339out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3341x_1;

    switch((id3341in_sel.getValueAsLong())) {
      case 0l:
        id3341x_1 = id3341in_option0;
        break;
      case 1l:
        id3341x_1 = id3341in_option1;
        break;
      default:
        id3341x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3341out_result[(getCycle()+1)%2] = (id3341x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3342out_output;

  { // Node ID: 3342 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3342in_input = id3341out_result[getCycle()%2];

    id3342out_output = id3342in_input;
  }
  { // Node ID: 3344 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3344in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3344in_option0 = in_vars.id3343out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3344in_option1 = id3342out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3344x_1;

    switch((id3344in_sel.getValueAsLong())) {
      case 0l:
        id3344x_1 = id3344in_option0;
        break;
      case 1l:
        id3344x_1 = id3344in_option1;
        break;
      default:
        id3344x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3344out_result[(getCycle()+1)%2] = (id3344x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3345out_output;

  { // Node ID: 3345 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3345in_input = id3344out_result[getCycle()%2];

    id3345out_output = id3345in_input;
  }
  { // Node ID: 3347 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3347in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3347in_option0 = in_vars.id3346out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3347in_option1 = id3345out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3347x_1;

    switch((id3347in_sel.getValueAsLong())) {
      case 0l:
        id3347x_1 = id3347in_option0;
        break;
      case 1l:
        id3347x_1 = id3347in_option1;
        break;
      default:
        id3347x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3347out_result[(getCycle()+1)%2] = (id3347x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3348out_output;

  { // Node ID: 3348 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3348in_input = id3347out_result[getCycle()%2];

    id3348out_output = id3348in_input;
  }
  { // Node ID: 3350 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3350in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3350in_option0 = in_vars.id3349out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3350in_option1 = id3348out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3350x_1;

    switch((id3350in_sel.getValueAsLong())) {
      case 0l:
        id3350x_1 = id3350in_option0;
        break;
      case 1l:
        id3350x_1 = id3350in_option1;
        break;
      default:
        id3350x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3350out_result[(getCycle()+1)%2] = (id3350x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3351out_output;

  { // Node ID: 3351 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3351in_input = id3350out_result[getCycle()%2];

    id3351out_output = id3351in_input;
  }
  { // Node ID: 3353 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3353in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3353in_option0 = in_vars.id3352out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3353in_option1 = id3351out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3353x_1;

    switch((id3353in_sel.getValueAsLong())) {
      case 0l:
        id3353x_1 = id3353in_option0;
        break;
      case 1l:
        id3353x_1 = id3353in_option1;
        break;
      default:
        id3353x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3353out_result[(getCycle()+1)%2] = (id3353x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3354out_output;

  { // Node ID: 3354 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3354in_input = id3353out_result[getCycle()%2];

    id3354out_output = id3354in_input;
  }
  { // Node ID: 3356 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3356in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3356in_option0 = in_vars.id3355out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3356in_option1 = id3354out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3356x_1;

    switch((id3356in_sel.getValueAsLong())) {
      case 0l:
        id3356x_1 = id3356in_option0;
        break;
      case 1l:
        id3356x_1 = id3356in_option1;
        break;
      default:
        id3356x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3356out_result[(getCycle()+1)%2] = (id3356x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3357out_output;

  { // Node ID: 3357 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3357in_input = id3356out_result[getCycle()%2];

    id3357out_output = id3357in_input;
  }
  { // Node ID: 3359 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3359in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3359in_option0 = in_vars.id3358out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3359in_option1 = id3357out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3359x_1;

    switch((id3359in_sel.getValueAsLong())) {
      case 0l:
        id3359x_1 = id3359in_option0;
        break;
      case 1l:
        id3359x_1 = id3359in_option1;
        break;
      default:
        id3359x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3359out_result[(getCycle()+1)%2] = (id3359x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3360out_output;

  { // Node ID: 3360 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3360in_input = id3359out_result[getCycle()%2];

    id3360out_output = id3360in_input;
  }
  { // Node ID: 3362 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3362in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3362in_option0 = in_vars.id3361out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3362in_option1 = id3360out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3362x_1;

    switch((id3362in_sel.getValueAsLong())) {
      case 0l:
        id3362x_1 = id3362in_option0;
        break;
      case 1l:
        id3362x_1 = id3362in_option1;
        break;
      default:
        id3362x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3362out_result[(getCycle()+1)%2] = (id3362x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3363out_output;

  { // Node ID: 3363 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3363in_input = id3362out_result[getCycle()%2];

    id3363out_output = id3363in_input;
  }
  { // Node ID: 3365 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3365in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3365in_option0 = in_vars.id3364out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3365in_option1 = id3363out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3365x_1;

    switch((id3365in_sel.getValueAsLong())) {
      case 0l:
        id3365x_1 = id3365in_option0;
        break;
      case 1l:
        id3365x_1 = id3365in_option1;
        break;
      default:
        id3365x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3365out_result[(getCycle()+1)%2] = (id3365x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3366out_output;

  { // Node ID: 3366 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3366in_input = id3365out_result[getCycle()%2];

    id3366out_output = id3366in_input;
  }
  { // Node ID: 3368 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3368in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3368in_option0 = in_vars.id3367out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3368in_option1 = id3366out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3368x_1;

    switch((id3368in_sel.getValueAsLong())) {
      case 0l:
        id3368x_1 = id3368in_option0;
        break;
      case 1l:
        id3368x_1 = id3368in_option1;
        break;
      default:
        id3368x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3368out_result[(getCycle()+1)%2] = (id3368x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3369out_output;

  { // Node ID: 3369 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3369in_input = id3368out_result[getCycle()%2];

    id3369out_output = id3369in_input;
  }
  { // Node ID: 3371 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3371in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3371in_option0 = in_vars.id3370out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3371in_option1 = id3369out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3371x_1;

    switch((id3371in_sel.getValueAsLong())) {
      case 0l:
        id3371x_1 = id3371in_option0;
        break;
      case 1l:
        id3371x_1 = id3371in_option1;
        break;
      default:
        id3371x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3371out_result[(getCycle()+1)%2] = (id3371x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3372out_output;

  { // Node ID: 3372 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3372in_input = id3371out_result[getCycle()%2];

    id3372out_output = id3372in_input;
  }
  { // Node ID: 3374 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3374in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3374in_option0 = in_vars.id3373out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3374in_option1 = id3372out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3374x_1;

    switch((id3374in_sel.getValueAsLong())) {
      case 0l:
        id3374x_1 = id3374in_option0;
        break;
      case 1l:
        id3374x_1 = id3374in_option1;
        break;
      default:
        id3374x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3374out_result[(getCycle()+1)%2] = (id3374x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3375out_output;

  { // Node ID: 3375 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3375in_input = id3374out_result[getCycle()%2];

    id3375out_output = id3375in_input;
  }
  { // Node ID: 3377 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3377in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3377in_option0 = in_vars.id3376out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3377in_option1 = id3375out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3377x_1;

    switch((id3377in_sel.getValueAsLong())) {
      case 0l:
        id3377x_1 = id3377in_option0;
        break;
      case 1l:
        id3377x_1 = id3377in_option1;
        break;
      default:
        id3377x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3377out_result[(getCycle()+1)%2] = (id3377x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3378out_output;

  { // Node ID: 3378 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3378in_input = id3377out_result[getCycle()%2];

    id3378out_output = id3378in_input;
  }
  { // Node ID: 3380 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3380in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3380in_option0 = in_vars.id3379out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3380in_option1 = id3378out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3380x_1;

    switch((id3380in_sel.getValueAsLong())) {
      case 0l:
        id3380x_1 = id3380in_option0;
        break;
      case 1l:
        id3380x_1 = id3380in_option1;
        break;
      default:
        id3380x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3380out_result[(getCycle()+1)%2] = (id3380x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3381out_output;

  { // Node ID: 3381 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3381in_input = id3380out_result[getCycle()%2];

    id3381out_output = id3381in_input;
  }
  { // Node ID: 3383 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3383in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3383in_option0 = in_vars.id3382out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3383in_option1 = id3381out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3383x_1;

    switch((id3383in_sel.getValueAsLong())) {
      case 0l:
        id3383x_1 = id3383in_option0;
        break;
      case 1l:
        id3383x_1 = id3383in_option1;
        break;
      default:
        id3383x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3383out_result[(getCycle()+1)%2] = (id3383x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3384out_output;

  { // Node ID: 3384 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3384in_input = id3383out_result[getCycle()%2];

    id3384out_output = id3384in_input;
  }
  { // Node ID: 3386 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3386in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3386in_option0 = in_vars.id3385out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3386in_option1 = id3384out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3386x_1;

    switch((id3386in_sel.getValueAsLong())) {
      case 0l:
        id3386x_1 = id3386in_option0;
        break;
      case 1l:
        id3386x_1 = id3386in_option1;
        break;
      default:
        id3386x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3386out_result[(getCycle()+1)%2] = (id3386x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3387out_output;

  { // Node ID: 3387 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3387in_input = id3386out_result[getCycle()%2];

    id3387out_output = id3387in_input;
  }
  { // Node ID: 3389 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3389in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3389in_option0 = in_vars.id3388out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3389in_option1 = id3387out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3389x_1;

    switch((id3389in_sel.getValueAsLong())) {
      case 0l:
        id3389x_1 = id3389in_option0;
        break;
      case 1l:
        id3389x_1 = id3389in_option1;
        break;
      default:
        id3389x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3389out_result[(getCycle()+1)%2] = (id3389x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3390out_output;

  { // Node ID: 3390 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3390in_input = id3389out_result[getCycle()%2];

    id3390out_output = id3390in_input;
  }
  { // Node ID: 3392 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3392in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3392in_option0 = in_vars.id3391out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3392in_option1 = id3390out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3392x_1;

    switch((id3392in_sel.getValueAsLong())) {
      case 0l:
        id3392x_1 = id3392in_option0;
        break;
      case 1l:
        id3392x_1 = id3392in_option1;
        break;
      default:
        id3392x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3392out_result[(getCycle()+1)%2] = (id3392x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3393out_output;

  { // Node ID: 3393 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3393in_input = id3392out_result[getCycle()%2];

    id3393out_output = id3393in_input;
  }
  { // Node ID: 3395 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3395in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3395in_option0 = in_vars.id3394out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3395in_option1 = id3393out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3395x_1;

    switch((id3395in_sel.getValueAsLong())) {
      case 0l:
        id3395x_1 = id3395in_option0;
        break;
      case 1l:
        id3395x_1 = id3395in_option1;
        break;
      default:
        id3395x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3395out_result[(getCycle()+1)%2] = (id3395x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3396out_output;

  { // Node ID: 3396 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3396in_input = id3395out_result[getCycle()%2];

    id3396out_output = id3396in_input;
  }
  { // Node ID: 3398 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3398in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3398in_option0 = in_vars.id3397out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3398in_option1 = id3396out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3398x_1;

    switch((id3398in_sel.getValueAsLong())) {
      case 0l:
        id3398x_1 = id3398in_option0;
        break;
      case 1l:
        id3398x_1 = id3398in_option1;
        break;
      default:
        id3398x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3398out_result[(getCycle()+1)%2] = (id3398x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3399out_output;

  { // Node ID: 3399 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3399in_input = id3398out_result[getCycle()%2];

    id3399out_output = id3399in_input;
  }
  { // Node ID: 3401 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3401in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3401in_option0 = in_vars.id3400out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3401in_option1 = id3399out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3401x_1;

    switch((id3401in_sel.getValueAsLong())) {
      case 0l:
        id3401x_1 = id3401in_option0;
        break;
      case 1l:
        id3401x_1 = id3401in_option1;
        break;
      default:
        id3401x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3401out_result[(getCycle()+1)%2] = (id3401x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3402out_output;

  { // Node ID: 3402 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3402in_input = id3401out_result[getCycle()%2];

    id3402out_output = id3402in_input;
  }
  { // Node ID: 3404 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3404in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3404in_option0 = in_vars.id3403out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3404in_option1 = id3402out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3404x_1;

    switch((id3404in_sel.getValueAsLong())) {
      case 0l:
        id3404x_1 = id3404in_option0;
        break;
      case 1l:
        id3404x_1 = id3404in_option1;
        break;
      default:
        id3404x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3404out_result[(getCycle()+1)%2] = (id3404x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3405out_output;

  { // Node ID: 3405 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3405in_input = id3404out_result[getCycle()%2];

    id3405out_output = id3405in_input;
  }
  { // Node ID: 3407 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3407in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3407in_option0 = in_vars.id3406out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3407in_option1 = id3405out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3407x_1;

    switch((id3407in_sel.getValueAsLong())) {
      case 0l:
        id3407x_1 = id3407in_option0;
        break;
      case 1l:
        id3407x_1 = id3407in_option1;
        break;
      default:
        id3407x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3407out_result[(getCycle()+1)%2] = (id3407x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3408out_output;

  { // Node ID: 3408 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3408in_input = id3407out_result[getCycle()%2];

    id3408out_output = id3408in_input;
  }
  { // Node ID: 3410 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3410in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3410in_option0 = in_vars.id3409out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3410in_option1 = id3408out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3410x_1;

    switch((id3410in_sel.getValueAsLong())) {
      case 0l:
        id3410x_1 = id3410in_option0;
        break;
      case 1l:
        id3410x_1 = id3410in_option1;
        break;
      default:
        id3410x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3410out_result[(getCycle()+1)%2] = (id3410x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3411out_output;

  { // Node ID: 3411 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3411in_input = id3410out_result[getCycle()%2];

    id3411out_output = id3411in_input;
  }
  { // Node ID: 3413 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3413in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3413in_option0 = in_vars.id3412out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3413in_option1 = id3411out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3413x_1;

    switch((id3413in_sel.getValueAsLong())) {
      case 0l:
        id3413x_1 = id3413in_option0;
        break;
      case 1l:
        id3413x_1 = id3413in_option1;
        break;
      default:
        id3413x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3413out_result[(getCycle()+1)%2] = (id3413x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3414out_output;

  { // Node ID: 3414 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3414in_input = id3413out_result[getCycle()%2];

    id3414out_output = id3414in_input;
  }
  { // Node ID: 3416 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3416in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3416in_option0 = in_vars.id3415out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3416in_option1 = id3414out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3416x_1;

    switch((id3416in_sel.getValueAsLong())) {
      case 0l:
        id3416x_1 = id3416in_option0;
        break;
      case 1l:
        id3416x_1 = id3416in_option1;
        break;
      default:
        id3416x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3416out_result[(getCycle()+1)%2] = (id3416x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3417out_output;

  { // Node ID: 3417 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3417in_input = id3416out_result[getCycle()%2];

    id3417out_output = id3417in_input;
  }
  { // Node ID: 3419 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3419in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3419in_option0 = in_vars.id3418out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3419in_option1 = id3417out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3419x_1;

    switch((id3419in_sel.getValueAsLong())) {
      case 0l:
        id3419x_1 = id3419in_option0;
        break;
      case 1l:
        id3419x_1 = id3419in_option1;
        break;
      default:
        id3419x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3419out_result[(getCycle()+1)%2] = (id3419x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3420out_output;

  { // Node ID: 3420 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3420in_input = id3419out_result[getCycle()%2];

    id3420out_output = id3420in_input;
  }
  { // Node ID: 3422 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3422in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3422in_option0 = in_vars.id3421out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3422in_option1 = id3420out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3422x_1;

    switch((id3422in_sel.getValueAsLong())) {
      case 0l:
        id3422x_1 = id3422in_option0;
        break;
      case 1l:
        id3422x_1 = id3422in_option1;
        break;
      default:
        id3422x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3422out_result[(getCycle()+1)%2] = (id3422x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3423out_output;

  { // Node ID: 3423 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3423in_input = id3422out_result[getCycle()%2];

    id3423out_output = id3423in_input;
  }
  { // Node ID: 3425 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3425in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3425in_option0 = in_vars.id3424out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3425in_option1 = id3423out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3425x_1;

    switch((id3425in_sel.getValueAsLong())) {
      case 0l:
        id3425x_1 = id3425in_option0;
        break;
      case 1l:
        id3425x_1 = id3425in_option1;
        break;
      default:
        id3425x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3425out_result[(getCycle()+1)%2] = (id3425x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3426out_output;

  { // Node ID: 3426 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3426in_input = id3425out_result[getCycle()%2];

    id3426out_output = id3426in_input;
  }
  { // Node ID: 3428 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3428in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3428in_option0 = in_vars.id3427out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3428in_option1 = id3426out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3428x_1;

    switch((id3428in_sel.getValueAsLong())) {
      case 0l:
        id3428x_1 = id3428in_option0;
        break;
      case 1l:
        id3428x_1 = id3428in_option1;
        break;
      default:
        id3428x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3428out_result[(getCycle()+1)%2] = (id3428x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3429out_output;

  { // Node ID: 3429 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3429in_input = id3428out_result[getCycle()%2];

    id3429out_output = id3429in_input;
  }
  { // Node ID: 3431 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3431in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3431in_option0 = in_vars.id3430out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3431in_option1 = id3429out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3431x_1;

    switch((id3431in_sel.getValueAsLong())) {
      case 0l:
        id3431x_1 = id3431in_option0;
        break;
      case 1l:
        id3431x_1 = id3431in_option1;
        break;
      default:
        id3431x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3431out_result[(getCycle()+1)%2] = (id3431x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3432out_output;

  { // Node ID: 3432 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3432in_input = id3431out_result[getCycle()%2];

    id3432out_output = id3432in_input;
  }
  { // Node ID: 3434 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3434in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3434in_option0 = in_vars.id3433out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3434in_option1 = id3432out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3434x_1;

    switch((id3434in_sel.getValueAsLong())) {
      case 0l:
        id3434x_1 = id3434in_option0;
        break;
      case 1l:
        id3434x_1 = id3434in_option1;
        break;
      default:
        id3434x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3434out_result[(getCycle()+1)%2] = (id3434x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3435out_output;

  { // Node ID: 3435 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3435in_input = id3434out_result[getCycle()%2];

    id3435out_output = id3435in_input;
  }
  { // Node ID: 3437 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3437in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3437in_option0 = in_vars.id3436out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3437in_option1 = id3435out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3437x_1;

    switch((id3437in_sel.getValueAsLong())) {
      case 0l:
        id3437x_1 = id3437in_option0;
        break;
      case 1l:
        id3437x_1 = id3437in_option1;
        break;
      default:
        id3437x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3437out_result[(getCycle()+1)%2] = (id3437x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3438out_output;

  { // Node ID: 3438 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3438in_input = id3437out_result[getCycle()%2];

    id3438out_output = id3438in_input;
  }
  { // Node ID: 3440 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3440in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3440in_option0 = in_vars.id3439out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3440in_option1 = id3438out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3440x_1;

    switch((id3440in_sel.getValueAsLong())) {
      case 0l:
        id3440x_1 = id3440in_option0;
        break;
      case 1l:
        id3440x_1 = id3440in_option1;
        break;
      default:
        id3440x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3440out_result[(getCycle()+1)%2] = (id3440x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3441out_output;

  { // Node ID: 3441 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3441in_input = id3440out_result[getCycle()%2];

    id3441out_output = id3441in_input;
  }
  { // Node ID: 3443 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3443in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3443in_option0 = in_vars.id3442out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3443in_option1 = id3441out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3443x_1;

    switch((id3443in_sel.getValueAsLong())) {
      case 0l:
        id3443x_1 = id3443in_option0;
        break;
      case 1l:
        id3443x_1 = id3443in_option1;
        break;
      default:
        id3443x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3443out_result[(getCycle()+1)%2] = (id3443x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3444out_output;

  { // Node ID: 3444 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3444in_input = id3443out_result[getCycle()%2];

    id3444out_output = id3444in_input;
  }
  { // Node ID: 3446 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3446in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3446in_option0 = in_vars.id3445out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3446in_option1 = id3444out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3446x_1;

    switch((id3446in_sel.getValueAsLong())) {
      case 0l:
        id3446x_1 = id3446in_option0;
        break;
      case 1l:
        id3446x_1 = id3446in_option1;
        break;
      default:
        id3446x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3446out_result[(getCycle()+1)%2] = (id3446x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3447out_output;

  { // Node ID: 3447 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3447in_input = id3446out_result[getCycle()%2];

    id3447out_output = id3447in_input;
  }
  { // Node ID: 3449 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3449in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3449in_option0 = in_vars.id3448out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3449in_option1 = id3447out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3449x_1;

    switch((id3449in_sel.getValueAsLong())) {
      case 0l:
        id3449x_1 = id3449in_option0;
        break;
      case 1l:
        id3449x_1 = id3449in_option1;
        break;
      default:
        id3449x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3449out_result[(getCycle()+1)%2] = (id3449x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3450out_output;

  { // Node ID: 3450 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3450in_input = id3449out_result[getCycle()%2];

    id3450out_output = id3450in_input;
  }
  { // Node ID: 3452 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3452in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3452in_option0 = in_vars.id3451out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3452in_option1 = id3450out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3452x_1;

    switch((id3452in_sel.getValueAsLong())) {
      case 0l:
        id3452x_1 = id3452in_option0;
        break;
      case 1l:
        id3452x_1 = id3452in_option1;
        break;
      default:
        id3452x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3452out_result[(getCycle()+1)%2] = (id3452x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3453out_output;

  { // Node ID: 3453 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3453in_input = id3452out_result[getCycle()%2];

    id3453out_output = id3453in_input;
  }
  { // Node ID: 3455 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3455in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3455in_option0 = in_vars.id3454out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3455in_option1 = id3453out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3455x_1;

    switch((id3455in_sel.getValueAsLong())) {
      case 0l:
        id3455x_1 = id3455in_option0;
        break;
      case 1l:
        id3455x_1 = id3455in_option1;
        break;
      default:
        id3455x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3455out_result[(getCycle()+1)%2] = (id3455x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3456out_output;

  { // Node ID: 3456 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3456in_input = id3455out_result[getCycle()%2];

    id3456out_output = id3456in_input;
  }
  { // Node ID: 3458 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3458in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3458in_option0 = in_vars.id3457out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3458in_option1 = id3456out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3458x_1;

    switch((id3458in_sel.getValueAsLong())) {
      case 0l:
        id3458x_1 = id3458in_option0;
        break;
      case 1l:
        id3458x_1 = id3458in_option1;
        break;
      default:
        id3458x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3458out_result[(getCycle()+1)%2] = (id3458x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3459out_output;

  { // Node ID: 3459 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3459in_input = id3458out_result[getCycle()%2];

    id3459out_output = id3459in_input;
  }
  { // Node ID: 3461 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3461in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3461in_option0 = in_vars.id3460out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3461in_option1 = id3459out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3461x_1;

    switch((id3461in_sel.getValueAsLong())) {
      case 0l:
        id3461x_1 = id3461in_option0;
        break;
      case 1l:
        id3461x_1 = id3461in_option1;
        break;
      default:
        id3461x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3461out_result[(getCycle()+1)%2] = (id3461x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3462out_output;

  { // Node ID: 3462 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3462in_input = id3461out_result[getCycle()%2];

    id3462out_output = id3462in_input;
  }
  { // Node ID: 3464 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3464in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3464in_option0 = in_vars.id3463out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3464in_option1 = id3462out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3464x_1;

    switch((id3464in_sel.getValueAsLong())) {
      case 0l:
        id3464x_1 = id3464in_option0;
        break;
      case 1l:
        id3464x_1 = id3464in_option1;
        break;
      default:
        id3464x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3464out_result[(getCycle()+1)%2] = (id3464x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3465out_output;

  { // Node ID: 3465 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3465in_input = id3464out_result[getCycle()%2];

    id3465out_output = id3465in_input;
  }
  { // Node ID: 3467 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3467in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3467in_option0 = in_vars.id3466out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3467in_option1 = id3465out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3467x_1;

    switch((id3467in_sel.getValueAsLong())) {
      case 0l:
        id3467x_1 = id3467in_option0;
        break;
      case 1l:
        id3467x_1 = id3467in_option1;
        break;
      default:
        id3467x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3467out_result[(getCycle()+1)%2] = (id3467x_1);
  }

  sliding_window10Block7Vars out_vars;
  out_vars.id3699out_result = in_vars.id3699out_result;
  out_vars.id7537out_value = in_vars.id7537out_value;
  out_vars.id7539out_value = in_vars.id7539out_value;
  out_vars.id7541out_value = in_vars.id7541out_value;
  out_vars.id7543out_value = in_vars.id7543out_value;
  out_vars.id7545out_value = in_vars.id7545out_value;
  out_vars.id7547out_value = in_vars.id7547out_value;
  out_vars.id7549out_value = in_vars.id7549out_value;
  out_vars.id7551out_value = in_vars.id7551out_value;
  out_vars.id7553out_value = in_vars.id7553out_value;
  out_vars.id7555out_value = in_vars.id7555out_value;
  out_vars.id7557out_value = in_vars.id7557out_value;
  out_vars.id7559out_value = in_vars.id7559out_value;
  out_vars.id7561out_value = in_vars.id7561out_value;
  out_vars.id7563out_value = in_vars.id7563out_value;
  out_vars.id7565out_value = in_vars.id7565out_value;
  out_vars.id3484out_output = in_vars.id3484out_output;
  out_vars.id3481out_output = in_vars.id3481out_output;
  out_vars.id3478out_output = in_vars.id3478out_output;
  out_vars.id3475out_output = in_vars.id3475out_output;
  out_vars.id3472out_output = in_vars.id3472out_output;
  out_vars.id3469out_output = in_vars.id3469out_output;
  return out_vars;
};

};
