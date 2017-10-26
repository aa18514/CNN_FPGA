#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window10_exec7.h"
//#include "sliding_window10_exec8.h"
//#include "sliding_window10.h"

namespace maxcompilersim {

sliding_window10Block8Vars sliding_window10::execute7(const sliding_window10Block7Vars &in_vars) {
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3468out_output;

  { // Node ID: 3468 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3468in_input = id3467out_result[getCycle()%2];

    id3468out_output = id3468in_input;
  }
  { // Node ID: 3470 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3470in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3470in_option0 = in_vars.id3469out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3470in_option1 = id3468out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3470x_1;

    switch((id3470in_sel.getValueAsLong())) {
      case 0l:
        id3470x_1 = id3470in_option0;
        break;
      case 1l:
        id3470x_1 = id3470in_option1;
        break;
      default:
        id3470x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3470out_result[(getCycle()+1)%2] = (id3470x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3471out_output;

  { // Node ID: 3471 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3471in_input = id3470out_result[getCycle()%2];

    id3471out_output = id3471in_input;
  }
  { // Node ID: 3473 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3473in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3473in_option0 = in_vars.id3472out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3473in_option1 = id3471out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3473x_1;

    switch((id3473in_sel.getValueAsLong())) {
      case 0l:
        id3473x_1 = id3473in_option0;
        break;
      case 1l:
        id3473x_1 = id3473in_option1;
        break;
      default:
        id3473x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3473out_result[(getCycle()+1)%2] = (id3473x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3474out_output;

  { // Node ID: 3474 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3474in_input = id3473out_result[getCycle()%2];

    id3474out_output = id3474in_input;
  }
  { // Node ID: 3476 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3476in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3476in_option0 = in_vars.id3475out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3476in_option1 = id3474out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3476x_1;

    switch((id3476in_sel.getValueAsLong())) {
      case 0l:
        id3476x_1 = id3476in_option0;
        break;
      case 1l:
        id3476x_1 = id3476in_option1;
        break;
      default:
        id3476x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3476out_result[(getCycle()+1)%2] = (id3476x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3477out_output;

  { // Node ID: 3477 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3477in_input = id3476out_result[getCycle()%2];

    id3477out_output = id3477in_input;
  }
  { // Node ID: 3479 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3479in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3479in_option0 = in_vars.id3478out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3479in_option1 = id3477out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3479x_1;

    switch((id3479in_sel.getValueAsLong())) {
      case 0l:
        id3479x_1 = id3479in_option0;
        break;
      case 1l:
        id3479x_1 = id3479in_option1;
        break;
      default:
        id3479x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3479out_result[(getCycle()+1)%2] = (id3479x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3480out_output;

  { // Node ID: 3480 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3480in_input = id3479out_result[getCycle()%2];

    id3480out_output = id3480in_input;
  }
  { // Node ID: 3482 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3482in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3482in_option0 = in_vars.id3481out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3482in_option1 = id3480out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3482x_1;

    switch((id3482in_sel.getValueAsLong())) {
      case 0l:
        id3482x_1 = id3482in_option0;
        break;
      case 1l:
        id3482x_1 = id3482in_option1;
        break;
      default:
        id3482x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3482out_result[(getCycle()+1)%2] = (id3482x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3483out_output;

  { // Node ID: 3483 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3483in_input = id3482out_result[getCycle()%2];

    id3483out_output = id3483in_input;
  }
  { // Node ID: 3485 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3485in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3485in_option0 = in_vars.id3484out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3485in_option1 = id3483out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3485x_1;

    switch((id3485in_sel.getValueAsLong())) {
      case 0l:
        id3485x_1 = id3485in_option0;
        break;
      case 1l:
        id3485x_1 = id3485in_option1;
        break;
      default:
        id3485x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3485out_result[(getCycle()+1)%2] = (id3485x_1);
  }
  HWRawBits<32> id3748out_output;

  { // Node ID: 3748 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3748in_input = id3485out_result[getCycle()%2];

    id3748out_output = (cast_fixed2bits(id3748in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3487out_output;

  { // Node ID: 3487 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3487in_input = id3488out_result[getCycle()%2];

    id3487out_output = id3487in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3486out_output;

  { // Node ID: 3486 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3486in_input = id3485out_result[getCycle()%2];

    id3486out_output = id3486in_input;
  }
  { // Node ID: 3488 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3488in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3488in_option0 = id3487out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3488in_option1 = id3486out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3488x_1;

    switch((id3488in_sel.getValueAsLong())) {
      case 0l:
        id3488x_1 = id3488in_option0;
        break;
      case 1l:
        id3488x_1 = id3488in_option1;
        break;
      default:
        id3488x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3488out_result[(getCycle()+1)%2] = (id3488x_1);
  }
  HWRawBits<32> id3746out_output;

  { // Node ID: 3746 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3746in_input = id3488out_result[getCycle()%2];

    id3746out_output = (cast_fixed2bits(id3746in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3490out_output;

  { // Node ID: 3490 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3490in_input = id3491out_result[getCycle()%2];

    id3490out_output = id3490in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3489out_output;

  { // Node ID: 3489 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3489in_input = id3488out_result[getCycle()%2];

    id3489out_output = id3489in_input;
  }
  { // Node ID: 3491 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3491in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3491in_option0 = id3490out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3491in_option1 = id3489out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3491x_1;

    switch((id3491in_sel.getValueAsLong())) {
      case 0l:
        id3491x_1 = id3491in_option0;
        break;
      case 1l:
        id3491x_1 = id3491in_option1;
        break;
      default:
        id3491x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3491out_result[(getCycle()+1)%2] = (id3491x_1);
  }
  HWRawBits<32> id3744out_output;

  { // Node ID: 3744 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3744in_input = id3491out_result[getCycle()%2];

    id3744out_output = (cast_fixed2bits(id3744in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3493out_output;

  { // Node ID: 3493 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3493in_input = id3494out_result[getCycle()%2];

    id3493out_output = id3493in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3492out_output;

  { // Node ID: 3492 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3492in_input = id3491out_result[getCycle()%2];

    id3492out_output = id3492in_input;
  }
  { // Node ID: 3494 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3494in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3494in_option0 = id3493out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3494in_option1 = id3492out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3494x_1;

    switch((id3494in_sel.getValueAsLong())) {
      case 0l:
        id3494x_1 = id3494in_option0;
        break;
      case 1l:
        id3494x_1 = id3494in_option1;
        break;
      default:
        id3494x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3494out_result[(getCycle()+1)%2] = (id3494x_1);
  }
  HWRawBits<32> id3742out_output;

  { // Node ID: 3742 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3742in_input = id3494out_result[getCycle()%2];

    id3742out_output = (cast_fixed2bits(id3742in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3496out_output;

  { // Node ID: 3496 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3496in_input = id3497out_result[getCycle()%2];

    id3496out_output = id3496in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3495out_output;

  { // Node ID: 3495 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3495in_input = id3494out_result[getCycle()%2];

    id3495out_output = id3495in_input;
  }
  { // Node ID: 3497 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3497in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3497in_option0 = id3496out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3497in_option1 = id3495out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3497x_1;

    switch((id3497in_sel.getValueAsLong())) {
      case 0l:
        id3497x_1 = id3497in_option0;
        break;
      case 1l:
        id3497x_1 = id3497in_option1;
        break;
      default:
        id3497x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3497out_result[(getCycle()+1)%2] = (id3497x_1);
  }
  HWRawBits<32> id3740out_output;

  { // Node ID: 3740 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3740in_input = id3497out_result[getCycle()%2];

    id3740out_output = (cast_fixed2bits(id3740in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3520out_output;

  { // Node ID: 3520 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3520in_input = id3521out_result[getCycle()%2];

    id3520out_output = id3520in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3517out_output;

  { // Node ID: 3517 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3517in_input = id3518out_result[getCycle()%2];

    id3517out_output = id3517in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3514out_output;

  { // Node ID: 3514 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3514in_input = id3515out_result[getCycle()%2];

    id3514out_output = id3514in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3511out_output;

  { // Node ID: 3511 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3511in_input = id3512out_result[getCycle()%2];

    id3511out_output = id3511in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3508out_output;

  { // Node ID: 3508 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3508in_input = id3509out_result[getCycle()%2];

    id3508out_output = id3508in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3505out_output;

  { // Node ID: 3505 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3505in_input = id3506out_result[getCycle()%2];

    id3505out_output = id3505in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3502out_output;

  { // Node ID: 3502 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3502in_input = id3503out_result[getCycle()%2];

    id3502out_output = id3502in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3499out_output;

  { // Node ID: 3499 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3499in_input = id3500out_result[getCycle()%2];

    id3499out_output = id3499in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3498out_output;

  { // Node ID: 3498 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3498in_input = id3497out_result[getCycle()%2];

    id3498out_output = id3498in_input;
  }
  { // Node ID: 3500 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3500in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3500in_option0 = id3499out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3500in_option1 = id3498out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3500x_1;

    switch((id3500in_sel.getValueAsLong())) {
      case 0l:
        id3500x_1 = id3500in_option0;
        break;
      case 1l:
        id3500x_1 = id3500in_option1;
        break;
      default:
        id3500x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3500out_result[(getCycle()+1)%2] = (id3500x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3501out_output;

  { // Node ID: 3501 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3501in_input = id3500out_result[getCycle()%2];

    id3501out_output = id3501in_input;
  }
  { // Node ID: 3503 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3503in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3503in_option0 = id3502out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3503in_option1 = id3501out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3503x_1;

    switch((id3503in_sel.getValueAsLong())) {
      case 0l:
        id3503x_1 = id3503in_option0;
        break;
      case 1l:
        id3503x_1 = id3503in_option1;
        break;
      default:
        id3503x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3503out_result[(getCycle()+1)%2] = (id3503x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3504out_output;

  { // Node ID: 3504 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3504in_input = id3503out_result[getCycle()%2];

    id3504out_output = id3504in_input;
  }
  { // Node ID: 3506 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3506in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3506in_option0 = id3505out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3506in_option1 = id3504out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3506x_1;

    switch((id3506in_sel.getValueAsLong())) {
      case 0l:
        id3506x_1 = id3506in_option0;
        break;
      case 1l:
        id3506x_1 = id3506in_option1;
        break;
      default:
        id3506x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3506out_result[(getCycle()+1)%2] = (id3506x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3507out_output;

  { // Node ID: 3507 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3507in_input = id3506out_result[getCycle()%2];

    id3507out_output = id3507in_input;
  }
  { // Node ID: 3509 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3509in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3509in_option0 = id3508out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3509in_option1 = id3507out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3509x_1;

    switch((id3509in_sel.getValueAsLong())) {
      case 0l:
        id3509x_1 = id3509in_option0;
        break;
      case 1l:
        id3509x_1 = id3509in_option1;
        break;
      default:
        id3509x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3509out_result[(getCycle()+1)%2] = (id3509x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3510out_output;

  { // Node ID: 3510 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3510in_input = id3509out_result[getCycle()%2];

    id3510out_output = id3510in_input;
  }
  { // Node ID: 3512 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3512in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3512in_option0 = id3511out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3512in_option1 = id3510out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3512x_1;

    switch((id3512in_sel.getValueAsLong())) {
      case 0l:
        id3512x_1 = id3512in_option0;
        break;
      case 1l:
        id3512x_1 = id3512in_option1;
        break;
      default:
        id3512x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3512out_result[(getCycle()+1)%2] = (id3512x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3513out_output;

  { // Node ID: 3513 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3513in_input = id3512out_result[getCycle()%2];

    id3513out_output = id3513in_input;
  }
  { // Node ID: 3515 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3515in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3515in_option0 = id3514out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3515in_option1 = id3513out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3515x_1;

    switch((id3515in_sel.getValueAsLong())) {
      case 0l:
        id3515x_1 = id3515in_option0;
        break;
      case 1l:
        id3515x_1 = id3515in_option1;
        break;
      default:
        id3515x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3515out_result[(getCycle()+1)%2] = (id3515x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3516out_output;

  { // Node ID: 3516 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3516in_input = id3515out_result[getCycle()%2];

    id3516out_output = id3516in_input;
  }
  { // Node ID: 3518 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3518in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3518in_option0 = id3517out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3518in_option1 = id3516out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3518x_1;

    switch((id3518in_sel.getValueAsLong())) {
      case 0l:
        id3518x_1 = id3518in_option0;
        break;
      case 1l:
        id3518x_1 = id3518in_option1;
        break;
      default:
        id3518x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3518out_result[(getCycle()+1)%2] = (id3518x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3519out_output;

  { // Node ID: 3519 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3519in_input = id3518out_result[getCycle()%2];

    id3519out_output = id3519in_input;
  }
  { // Node ID: 3521 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3521in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3521in_option0 = id3520out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3521in_option1 = id3519out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3521x_1;

    switch((id3521in_sel.getValueAsLong())) {
      case 0l:
        id3521x_1 = id3521in_option0;
        break;
      case 1l:
        id3521x_1 = id3521in_option1;
        break;
      default:
        id3521x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3521out_result[(getCycle()+1)%2] = (id3521x_1);
  }
  HWRawBits<32> id3738out_output;

  { // Node ID: 3738 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3738in_input = id3521out_result[getCycle()%2];

    id3738out_output = (cast_fixed2bits(id3738in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3523out_output;

  { // Node ID: 3523 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3523in_input = id3524out_result[getCycle()%2];

    id3523out_output = id3523in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3522out_output;

  { // Node ID: 3522 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3522in_input = id3521out_result[getCycle()%2];

    id3522out_output = id3522in_input;
  }
  { // Node ID: 3524 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3524in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3524in_option0 = id3523out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3524in_option1 = id3522out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3524x_1;

    switch((id3524in_sel.getValueAsLong())) {
      case 0l:
        id3524x_1 = id3524in_option0;
        break;
      case 1l:
        id3524x_1 = id3524in_option1;
        break;
      default:
        id3524x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3524out_result[(getCycle()+1)%2] = (id3524x_1);
  }
  HWRawBits<32> id3736out_output;

  { // Node ID: 3736 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3736in_input = id3524out_result[getCycle()%2];

    id3736out_output = (cast_fixed2bits(id3736in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3526out_output;

  { // Node ID: 3526 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3526in_input = id3527out_result[getCycle()%2];

    id3526out_output = id3526in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3525out_output;

  { // Node ID: 3525 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3525in_input = id3524out_result[getCycle()%2];

    id3525out_output = id3525in_input;
  }
  { // Node ID: 3527 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3527in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3527in_option0 = id3526out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3527in_option1 = id3525out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3527x_1;

    switch((id3527in_sel.getValueAsLong())) {
      case 0l:
        id3527x_1 = id3527in_option0;
        break;
      case 1l:
        id3527x_1 = id3527in_option1;
        break;
      default:
        id3527x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3527out_result[(getCycle()+1)%2] = (id3527x_1);
  }
  HWRawBits<32> id3734out_output;

  { // Node ID: 3734 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3734in_input = id3527out_result[getCycle()%2];

    id3734out_output = (cast_fixed2bits(id3734in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3529out_output;

  { // Node ID: 3529 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3529in_input = id3530out_result[getCycle()%2];

    id3529out_output = id3529in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3528out_output;

  { // Node ID: 3528 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3528in_input = id3527out_result[getCycle()%2];

    id3528out_output = id3528in_input;
  }
  { // Node ID: 3530 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3530in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3530in_option0 = id3529out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3530in_option1 = id3528out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3530x_1;

    switch((id3530in_sel.getValueAsLong())) {
      case 0l:
        id3530x_1 = id3530in_option0;
        break;
      case 1l:
        id3530x_1 = id3530in_option1;
        break;
      default:
        id3530x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3530out_result[(getCycle()+1)%2] = (id3530x_1);
  }
  HWRawBits<32> id3732out_output;

  { // Node ID: 3732 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3732in_input = id3530out_result[getCycle()%2];

    id3732out_output = (cast_fixed2bits(id3732in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3532out_output;

  { // Node ID: 3532 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3532in_input = id3533out_result[getCycle()%2];

    id3532out_output = id3532in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3531out_output;

  { // Node ID: 3531 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3531in_input = id3530out_result[getCycle()%2];

    id3531out_output = id3531in_input;
  }
  { // Node ID: 3533 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3533in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3533in_option0 = id3532out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3533in_option1 = id3531out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3533x_1;

    switch((id3533in_sel.getValueAsLong())) {
      case 0l:
        id3533x_1 = id3533in_option0;
        break;
      case 1l:
        id3533x_1 = id3533in_option1;
        break;
      default:
        id3533x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3533out_result[(getCycle()+1)%2] = (id3533x_1);
  }
  HWRawBits<32> id3730out_output;

  { // Node ID: 3730 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3730in_input = id3533out_result[getCycle()%2];

    id3730out_output = (cast_fixed2bits(id3730in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3556out_output;

  { // Node ID: 3556 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3556in_input = id3557out_result[getCycle()%2];

    id3556out_output = id3556in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3553out_output;

  { // Node ID: 3553 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3553in_input = id3554out_result[getCycle()%2];

    id3553out_output = id3553in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3550out_output;

  { // Node ID: 3550 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3550in_input = id3551out_result[getCycle()%2];

    id3550out_output = id3550in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3547out_output;

  { // Node ID: 3547 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3547in_input = id3548out_result[getCycle()%2];

    id3547out_output = id3547in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3544out_output;

  { // Node ID: 3544 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3544in_input = id3545out_result[getCycle()%2];

    id3544out_output = id3544in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3541out_output;

  { // Node ID: 3541 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3541in_input = id3542out_result[getCycle()%2];

    id3541out_output = id3541in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3538out_output;

  { // Node ID: 3538 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3538in_input = id3539out_result[getCycle()%2];

    id3538out_output = id3538in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3535out_output;

  { // Node ID: 3535 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3535in_input = id3536out_result[getCycle()%2];

    id3535out_output = id3535in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3534out_output;

  { // Node ID: 3534 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3534in_input = id3533out_result[getCycle()%2];

    id3534out_output = id3534in_input;
  }
  { // Node ID: 3536 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3536in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3536in_option0 = id3535out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3536in_option1 = id3534out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3536x_1;

    switch((id3536in_sel.getValueAsLong())) {
      case 0l:
        id3536x_1 = id3536in_option0;
        break;
      case 1l:
        id3536x_1 = id3536in_option1;
        break;
      default:
        id3536x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3536out_result[(getCycle()+1)%2] = (id3536x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3537out_output;

  { // Node ID: 3537 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3537in_input = id3536out_result[getCycle()%2];

    id3537out_output = id3537in_input;
  }
  { // Node ID: 3539 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3539in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3539in_option0 = id3538out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3539in_option1 = id3537out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3539x_1;

    switch((id3539in_sel.getValueAsLong())) {
      case 0l:
        id3539x_1 = id3539in_option0;
        break;
      case 1l:
        id3539x_1 = id3539in_option1;
        break;
      default:
        id3539x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3539out_result[(getCycle()+1)%2] = (id3539x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3540out_output;

  { // Node ID: 3540 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3540in_input = id3539out_result[getCycle()%2];

    id3540out_output = id3540in_input;
  }
  { // Node ID: 3542 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3542in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3542in_option0 = id3541out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3542in_option1 = id3540out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3542x_1;

    switch((id3542in_sel.getValueAsLong())) {
      case 0l:
        id3542x_1 = id3542in_option0;
        break;
      case 1l:
        id3542x_1 = id3542in_option1;
        break;
      default:
        id3542x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3542out_result[(getCycle()+1)%2] = (id3542x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3543out_output;

  { // Node ID: 3543 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3543in_input = id3542out_result[getCycle()%2];

    id3543out_output = id3543in_input;
  }
  { // Node ID: 3545 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3545in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3545in_option0 = id3544out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3545in_option1 = id3543out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3545x_1;

    switch((id3545in_sel.getValueAsLong())) {
      case 0l:
        id3545x_1 = id3545in_option0;
        break;
      case 1l:
        id3545x_1 = id3545in_option1;
        break;
      default:
        id3545x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3545out_result[(getCycle()+1)%2] = (id3545x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3546out_output;

  { // Node ID: 3546 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3546in_input = id3545out_result[getCycle()%2];

    id3546out_output = id3546in_input;
  }
  { // Node ID: 3548 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3548in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3548in_option0 = id3547out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3548in_option1 = id3546out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3548x_1;

    switch((id3548in_sel.getValueAsLong())) {
      case 0l:
        id3548x_1 = id3548in_option0;
        break;
      case 1l:
        id3548x_1 = id3548in_option1;
        break;
      default:
        id3548x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3548out_result[(getCycle()+1)%2] = (id3548x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3549out_output;

  { // Node ID: 3549 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3549in_input = id3548out_result[getCycle()%2];

    id3549out_output = id3549in_input;
  }
  { // Node ID: 3551 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3551in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3551in_option0 = id3550out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3551in_option1 = id3549out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3551x_1;

    switch((id3551in_sel.getValueAsLong())) {
      case 0l:
        id3551x_1 = id3551in_option0;
        break;
      case 1l:
        id3551x_1 = id3551in_option1;
        break;
      default:
        id3551x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3551out_result[(getCycle()+1)%2] = (id3551x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3552out_output;

  { // Node ID: 3552 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3552in_input = id3551out_result[getCycle()%2];

    id3552out_output = id3552in_input;
  }
  { // Node ID: 3554 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3554in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3554in_option0 = id3553out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3554in_option1 = id3552out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3554x_1;

    switch((id3554in_sel.getValueAsLong())) {
      case 0l:
        id3554x_1 = id3554in_option0;
        break;
      case 1l:
        id3554x_1 = id3554in_option1;
        break;
      default:
        id3554x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3554out_result[(getCycle()+1)%2] = (id3554x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3555out_output;

  { // Node ID: 3555 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3555in_input = id3554out_result[getCycle()%2];

    id3555out_output = id3555in_input;
  }
  { // Node ID: 3557 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3557in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3557in_option0 = id3556out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3557in_option1 = id3555out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3557x_1;

    switch((id3557in_sel.getValueAsLong())) {
      case 0l:
        id3557x_1 = id3557in_option0;
        break;
      case 1l:
        id3557x_1 = id3557in_option1;
        break;
      default:
        id3557x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3557out_result[(getCycle()+1)%2] = (id3557x_1);
  }
  HWRawBits<32> id3728out_output;

  { // Node ID: 3728 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3728in_input = id3557out_result[getCycle()%2];

    id3728out_output = (cast_fixed2bits(id3728in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3559out_output;

  { // Node ID: 3559 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3559in_input = id3560out_result[getCycle()%2];

    id3559out_output = id3559in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3558out_output;

  { // Node ID: 3558 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3558in_input = id3557out_result[getCycle()%2];

    id3558out_output = id3558in_input;
  }
  { // Node ID: 3560 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3560in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3560in_option0 = id3559out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3560in_option1 = id3558out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3560x_1;

    switch((id3560in_sel.getValueAsLong())) {
      case 0l:
        id3560x_1 = id3560in_option0;
        break;
      case 1l:
        id3560x_1 = id3560in_option1;
        break;
      default:
        id3560x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3560out_result[(getCycle()+1)%2] = (id3560x_1);
  }
  HWRawBits<32> id3726out_output;

  { // Node ID: 3726 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3726in_input = id3560out_result[getCycle()%2];

    id3726out_output = (cast_fixed2bits(id3726in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3562out_output;

  { // Node ID: 3562 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3562in_input = id3563out_result[getCycle()%2];

    id3562out_output = id3562in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3561out_output;

  { // Node ID: 3561 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3561in_input = id3560out_result[getCycle()%2];

    id3561out_output = id3561in_input;
  }
  { // Node ID: 3563 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3563in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3563in_option0 = id3562out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3563in_option1 = id3561out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3563x_1;

    switch((id3563in_sel.getValueAsLong())) {
      case 0l:
        id3563x_1 = id3563in_option0;
        break;
      case 1l:
        id3563x_1 = id3563in_option1;
        break;
      default:
        id3563x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3563out_result[(getCycle()+1)%2] = (id3563x_1);
  }
  HWRawBits<32> id3724out_output;

  { // Node ID: 3724 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3724in_input = id3563out_result[getCycle()%2];

    id3724out_output = (cast_fixed2bits(id3724in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3565out_output;

  { // Node ID: 3565 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3565in_input = id3566out_result[getCycle()%2];

    id3565out_output = id3565in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3564out_output;

  { // Node ID: 3564 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3564in_input = id3563out_result[getCycle()%2];

    id3564out_output = id3564in_input;
  }
  { // Node ID: 3566 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3566in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3566in_option0 = id3565out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3566in_option1 = id3564out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3566x_1;

    switch((id3566in_sel.getValueAsLong())) {
      case 0l:
        id3566x_1 = id3566in_option0;
        break;
      case 1l:
        id3566x_1 = id3566in_option1;
        break;
      default:
        id3566x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3566out_result[(getCycle()+1)%2] = (id3566x_1);
  }
  HWRawBits<32> id3722out_output;

  { // Node ID: 3722 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3722in_input = id3566out_result[getCycle()%2];

    id3722out_output = (cast_fixed2bits(id3722in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3568out_output;

  { // Node ID: 3568 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3568in_input = id3569out_result[getCycle()%2];

    id3568out_output = id3568in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3567out_output;

  { // Node ID: 3567 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3567in_input = id3566out_result[getCycle()%2];

    id3567out_output = id3567in_input;
  }
  { // Node ID: 3569 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3569in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3569in_option0 = id3568out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3569in_option1 = id3567out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3569x_1;

    switch((id3569in_sel.getValueAsLong())) {
      case 0l:
        id3569x_1 = id3569in_option0;
        break;
      case 1l:
        id3569x_1 = id3569in_option1;
        break;
      default:
        id3569x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3569out_result[(getCycle()+1)%2] = (id3569x_1);
  }
  HWRawBits<32> id3720out_output;

  { // Node ID: 3720 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3720in_input = id3569out_result[getCycle()%2];

    id3720out_output = (cast_fixed2bits(id3720in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3592out_output;

  { // Node ID: 3592 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3592in_input = id3593out_result[getCycle()%2];

    id3592out_output = id3592in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3589out_output;

  { // Node ID: 3589 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3589in_input = id3590out_result[getCycle()%2];

    id3589out_output = id3589in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3586out_output;

  { // Node ID: 3586 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3586in_input = id3587out_result[getCycle()%2];

    id3586out_output = id3586in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3583out_output;

  { // Node ID: 3583 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3583in_input = id3584out_result[getCycle()%2];

    id3583out_output = id3583in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3580out_output;

  { // Node ID: 3580 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3580in_input = id3581out_result[getCycle()%2];

    id3580out_output = id3580in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3577out_output;

  { // Node ID: 3577 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3577in_input = id3578out_result[getCycle()%2];

    id3577out_output = id3577in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3574out_output;

  { // Node ID: 3574 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3574in_input = id3575out_result[getCycle()%2];

    id3574out_output = id3574in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3571out_output;

  { // Node ID: 3571 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3571in_input = id3572out_result[getCycle()%2];

    id3571out_output = id3571in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3570out_output;

  { // Node ID: 3570 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3570in_input = id3569out_result[getCycle()%2];

    id3570out_output = id3570in_input;
  }
  { // Node ID: 3572 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3572in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3572in_option0 = id3571out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3572in_option1 = id3570out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3572x_1;

    switch((id3572in_sel.getValueAsLong())) {
      case 0l:
        id3572x_1 = id3572in_option0;
        break;
      case 1l:
        id3572x_1 = id3572in_option1;
        break;
      default:
        id3572x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3572out_result[(getCycle()+1)%2] = (id3572x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3573out_output;

  { // Node ID: 3573 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3573in_input = id3572out_result[getCycle()%2];

    id3573out_output = id3573in_input;
  }
  { // Node ID: 3575 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3575in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3575in_option0 = id3574out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3575in_option1 = id3573out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3575x_1;

    switch((id3575in_sel.getValueAsLong())) {
      case 0l:
        id3575x_1 = id3575in_option0;
        break;
      case 1l:
        id3575x_1 = id3575in_option1;
        break;
      default:
        id3575x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3575out_result[(getCycle()+1)%2] = (id3575x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3576out_output;

  { // Node ID: 3576 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3576in_input = id3575out_result[getCycle()%2];

    id3576out_output = id3576in_input;
  }
  { // Node ID: 3578 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3578in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3578in_option0 = id3577out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3578in_option1 = id3576out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3578x_1;

    switch((id3578in_sel.getValueAsLong())) {
      case 0l:
        id3578x_1 = id3578in_option0;
        break;
      case 1l:
        id3578x_1 = id3578in_option1;
        break;
      default:
        id3578x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3578out_result[(getCycle()+1)%2] = (id3578x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3579out_output;

  { // Node ID: 3579 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3579in_input = id3578out_result[getCycle()%2];

    id3579out_output = id3579in_input;
  }
  { // Node ID: 3581 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3581in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3581in_option0 = id3580out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3581in_option1 = id3579out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3581x_1;

    switch((id3581in_sel.getValueAsLong())) {
      case 0l:
        id3581x_1 = id3581in_option0;
        break;
      case 1l:
        id3581x_1 = id3581in_option1;
        break;
      default:
        id3581x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3581out_result[(getCycle()+1)%2] = (id3581x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3582out_output;

  { // Node ID: 3582 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3582in_input = id3581out_result[getCycle()%2];

    id3582out_output = id3582in_input;
  }
  { // Node ID: 3584 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3584in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3584in_option0 = id3583out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3584in_option1 = id3582out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3584x_1;

    switch((id3584in_sel.getValueAsLong())) {
      case 0l:
        id3584x_1 = id3584in_option0;
        break;
      case 1l:
        id3584x_1 = id3584in_option1;
        break;
      default:
        id3584x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3584out_result[(getCycle()+1)%2] = (id3584x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3585out_output;

  { // Node ID: 3585 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3585in_input = id3584out_result[getCycle()%2];

    id3585out_output = id3585in_input;
  }
  { // Node ID: 3587 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3587in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3587in_option0 = id3586out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3587in_option1 = id3585out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3587x_1;

    switch((id3587in_sel.getValueAsLong())) {
      case 0l:
        id3587x_1 = id3587in_option0;
        break;
      case 1l:
        id3587x_1 = id3587in_option1;
        break;
      default:
        id3587x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3587out_result[(getCycle()+1)%2] = (id3587x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3588out_output;

  { // Node ID: 3588 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3588in_input = id3587out_result[getCycle()%2];

    id3588out_output = id3588in_input;
  }
  { // Node ID: 3590 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3590in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3590in_option0 = id3589out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3590in_option1 = id3588out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3590x_1;

    switch((id3590in_sel.getValueAsLong())) {
      case 0l:
        id3590x_1 = id3590in_option0;
        break;
      case 1l:
        id3590x_1 = id3590in_option1;
        break;
      default:
        id3590x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3590out_result[(getCycle()+1)%2] = (id3590x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3591out_output;

  { // Node ID: 3591 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3591in_input = id3590out_result[getCycle()%2];

    id3591out_output = id3591in_input;
  }
  { // Node ID: 3593 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3593in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3593in_option0 = id3592out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3593in_option1 = id3591out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3593x_1;

    switch((id3593in_sel.getValueAsLong())) {
      case 0l:
        id3593x_1 = id3593in_option0;
        break;
      case 1l:
        id3593x_1 = id3593in_option1;
        break;
      default:
        id3593x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3593out_result[(getCycle()+1)%2] = (id3593x_1);
  }
  HWRawBits<32> id3718out_output;

  { // Node ID: 3718 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3718in_input = id3593out_result[getCycle()%2];

    id3718out_output = (cast_fixed2bits(id3718in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3595out_output;

  { // Node ID: 3595 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3595in_input = id3596out_result[getCycle()%2];

    id3595out_output = id3595in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3594out_output;

  { // Node ID: 3594 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3594in_input = id3593out_result[getCycle()%2];

    id3594out_output = id3594in_input;
  }
  { // Node ID: 3596 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3596in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3596in_option0 = id3595out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3596in_option1 = id3594out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3596x_1;

    switch((id3596in_sel.getValueAsLong())) {
      case 0l:
        id3596x_1 = id3596in_option0;
        break;
      case 1l:
        id3596x_1 = id3596in_option1;
        break;
      default:
        id3596x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3596out_result[(getCycle()+1)%2] = (id3596x_1);
  }
  HWRawBits<32> id3716out_output;

  { // Node ID: 3716 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3716in_input = id3596out_result[getCycle()%2];

    id3716out_output = (cast_fixed2bits(id3716in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3598out_output;

  { // Node ID: 3598 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3598in_input = id3599out_result[getCycle()%2];

    id3598out_output = id3598in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3597out_output;

  { // Node ID: 3597 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3597in_input = id3596out_result[getCycle()%2];

    id3597out_output = id3597in_input;
  }
  { // Node ID: 3599 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3599in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3599in_option0 = id3598out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3599in_option1 = id3597out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3599x_1;

    switch((id3599in_sel.getValueAsLong())) {
      case 0l:
        id3599x_1 = id3599in_option0;
        break;
      case 1l:
        id3599x_1 = id3599in_option1;
        break;
      default:
        id3599x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3599out_result[(getCycle()+1)%2] = (id3599x_1);
  }
  HWRawBits<32> id3714out_output;

  { // Node ID: 3714 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3714in_input = id3599out_result[getCycle()%2];

    id3714out_output = (cast_fixed2bits(id3714in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3601out_output;

  { // Node ID: 3601 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3601in_input = id3602out_result[getCycle()%2];

    id3601out_output = id3601in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3600out_output;

  { // Node ID: 3600 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3600in_input = id3599out_result[getCycle()%2];

    id3600out_output = id3600in_input;
  }
  { // Node ID: 3602 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3602in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3602in_option0 = id3601out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3602in_option1 = id3600out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3602x_1;

    switch((id3602in_sel.getValueAsLong())) {
      case 0l:
        id3602x_1 = id3602in_option0;
        break;
      case 1l:
        id3602x_1 = id3602in_option1;
        break;
      default:
        id3602x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3602out_result[(getCycle()+1)%2] = (id3602x_1);
  }
  HWRawBits<32> id3712out_output;

  { // Node ID: 3712 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3712in_input = id3602out_result[getCycle()%2];

    id3712out_output = (cast_fixed2bits(id3712in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3604out_output;

  { // Node ID: 3604 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3604in_input = id3605out_result[getCycle()%2];

    id3604out_output = id3604in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3603out_output;

  { // Node ID: 3603 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3603in_input = id3602out_result[getCycle()%2];

    id3603out_output = id3603in_input;
  }
  { // Node ID: 3605 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3605in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3605in_option0 = id3604out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3605in_option1 = id3603out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3605x_1;

    switch((id3605in_sel.getValueAsLong())) {
      case 0l:
        id3605x_1 = id3605in_option0;
        break;
      case 1l:
        id3605x_1 = id3605in_option1;
        break;
      default:
        id3605x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3605out_result[(getCycle()+1)%2] = (id3605x_1);
  }
  HWRawBits<32> id3710out_output;

  { // Node ID: 3710 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3710in_input = id3605out_result[getCycle()%2];

    id3710out_output = (cast_fixed2bits(id3710in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3628out_output;

  { // Node ID: 3628 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3628in_input = id3629out_result[getCycle()%2];

    id3628out_output = id3628in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3625out_output;

  { // Node ID: 3625 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3625in_input = id3626out_result[getCycle()%2];

    id3625out_output = id3625in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3622out_output;

  { // Node ID: 3622 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3622in_input = id3623out_result[getCycle()%2];

    id3622out_output = id3622in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3619out_output;

  { // Node ID: 3619 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3619in_input = id3620out_result[getCycle()%2];

    id3619out_output = id3619in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3616out_output;

  { // Node ID: 3616 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3616in_input = id3617out_result[getCycle()%2];

    id3616out_output = id3616in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3613out_output;

  { // Node ID: 3613 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3613in_input = id3614out_result[getCycle()%2];

    id3613out_output = id3613in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3610out_output;

  { // Node ID: 3610 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3610in_input = id3611out_result[getCycle()%2];

    id3610out_output = id3610in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3607out_output;

  { // Node ID: 3607 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3607in_input = id3608out_result[getCycle()%2];

    id3607out_output = id3607in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3606out_output;

  { // Node ID: 3606 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3606in_input = id3605out_result[getCycle()%2];

    id3606out_output = id3606in_input;
  }
  { // Node ID: 3608 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3608in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3608in_option0 = id3607out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3608in_option1 = id3606out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3608x_1;

    switch((id3608in_sel.getValueAsLong())) {
      case 0l:
        id3608x_1 = id3608in_option0;
        break;
      case 1l:
        id3608x_1 = id3608in_option1;
        break;
      default:
        id3608x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3608out_result[(getCycle()+1)%2] = (id3608x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3609out_output;

  { // Node ID: 3609 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3609in_input = id3608out_result[getCycle()%2];

    id3609out_output = id3609in_input;
  }
  { // Node ID: 3611 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3611in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3611in_option0 = id3610out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3611in_option1 = id3609out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3611x_1;

    switch((id3611in_sel.getValueAsLong())) {
      case 0l:
        id3611x_1 = id3611in_option0;
        break;
      case 1l:
        id3611x_1 = id3611in_option1;
        break;
      default:
        id3611x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3611out_result[(getCycle()+1)%2] = (id3611x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3612out_output;

  { // Node ID: 3612 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3612in_input = id3611out_result[getCycle()%2];

    id3612out_output = id3612in_input;
  }
  { // Node ID: 3614 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3614in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3614in_option0 = id3613out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3614in_option1 = id3612out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3614x_1;

    switch((id3614in_sel.getValueAsLong())) {
      case 0l:
        id3614x_1 = id3614in_option0;
        break;
      case 1l:
        id3614x_1 = id3614in_option1;
        break;
      default:
        id3614x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3614out_result[(getCycle()+1)%2] = (id3614x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3615out_output;

  { // Node ID: 3615 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3615in_input = id3614out_result[getCycle()%2];

    id3615out_output = id3615in_input;
  }
  { // Node ID: 3617 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3617in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3617in_option0 = id3616out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3617in_option1 = id3615out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3617x_1;

    switch((id3617in_sel.getValueAsLong())) {
      case 0l:
        id3617x_1 = id3617in_option0;
        break;
      case 1l:
        id3617x_1 = id3617in_option1;
        break;
      default:
        id3617x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3617out_result[(getCycle()+1)%2] = (id3617x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3618out_output;

  { // Node ID: 3618 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3618in_input = id3617out_result[getCycle()%2];

    id3618out_output = id3618in_input;
  }
  { // Node ID: 3620 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3620in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3620in_option0 = id3619out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3620in_option1 = id3618out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3620x_1;

    switch((id3620in_sel.getValueAsLong())) {
      case 0l:
        id3620x_1 = id3620in_option0;
        break;
      case 1l:
        id3620x_1 = id3620in_option1;
        break;
      default:
        id3620x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3620out_result[(getCycle()+1)%2] = (id3620x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3621out_output;

  { // Node ID: 3621 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3621in_input = id3620out_result[getCycle()%2];

    id3621out_output = id3621in_input;
  }
  { // Node ID: 3623 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3623in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3623in_option0 = id3622out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3623in_option1 = id3621out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3623x_1;

    switch((id3623in_sel.getValueAsLong())) {
      case 0l:
        id3623x_1 = id3623in_option0;
        break;
      case 1l:
        id3623x_1 = id3623in_option1;
        break;
      default:
        id3623x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3623out_result[(getCycle()+1)%2] = (id3623x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3624out_output;

  { // Node ID: 3624 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3624in_input = id3623out_result[getCycle()%2];

    id3624out_output = id3624in_input;
  }
  { // Node ID: 3626 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3626in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3626in_option0 = id3625out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3626in_option1 = id3624out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3626x_1;

    switch((id3626in_sel.getValueAsLong())) {
      case 0l:
        id3626x_1 = id3626in_option0;
        break;
      case 1l:
        id3626x_1 = id3626in_option1;
        break;
      default:
        id3626x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3626out_result[(getCycle()+1)%2] = (id3626x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3627out_output;

  { // Node ID: 3627 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3627in_input = id3626out_result[getCycle()%2];

    id3627out_output = id3627in_input;
  }
  { // Node ID: 3629 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3629in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3629in_option0 = id3628out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3629in_option1 = id3627out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3629x_1;

    switch((id3629in_sel.getValueAsLong())) {
      case 0l:
        id3629x_1 = id3629in_option0;
        break;
      case 1l:
        id3629x_1 = id3629in_option1;
        break;
      default:
        id3629x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3629out_result[(getCycle()+1)%2] = (id3629x_1);
  }
  HWRawBits<32> id3708out_output;

  { // Node ID: 3708 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3708in_input = id3629out_result[getCycle()%2];

    id3708out_output = (cast_fixed2bits(id3708in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3631out_output;

  { // Node ID: 3631 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3631in_input = id3632out_result[getCycle()%2];

    id3631out_output = id3631in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3630out_output;

  { // Node ID: 3630 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3630in_input = id3629out_result[getCycle()%2];

    id3630out_output = id3630in_input;
  }
  { // Node ID: 3632 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3632in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3632in_option0 = id3631out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3632in_option1 = id3630out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3632x_1;

    switch((id3632in_sel.getValueAsLong())) {
      case 0l:
        id3632x_1 = id3632in_option0;
        break;
      case 1l:
        id3632x_1 = id3632in_option1;
        break;
      default:
        id3632x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3632out_result[(getCycle()+1)%2] = (id3632x_1);
  }
  HWRawBits<32> id3706out_output;

  { // Node ID: 3706 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3706in_input = id3632out_result[getCycle()%2];

    id3706out_output = (cast_fixed2bits(id3706in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3634out_output;

  { // Node ID: 3634 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3634in_input = id3635out_result[getCycle()%2];

    id3634out_output = id3634in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3633out_output;

  { // Node ID: 3633 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3633in_input = id3632out_result[getCycle()%2];

    id3633out_output = id3633in_input;
  }
  { // Node ID: 3635 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3635in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3635in_option0 = id3634out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3635in_option1 = id3633out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3635x_1;

    switch((id3635in_sel.getValueAsLong())) {
      case 0l:
        id3635x_1 = id3635in_option0;
        break;
      case 1l:
        id3635x_1 = id3635in_option1;
        break;
      default:
        id3635x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3635out_result[(getCycle()+1)%2] = (id3635x_1);
  }
  HWRawBits<32> id3704out_output;

  { // Node ID: 3704 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3704in_input = id3635out_result[getCycle()%2];

    id3704out_output = (cast_fixed2bits(id3704in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3637out_output;

  { // Node ID: 3637 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3637in_input = id3638out_result[getCycle()%2];

    id3637out_output = id3637in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3636out_output;

  { // Node ID: 3636 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3636in_input = id3635out_result[getCycle()%2];

    id3636out_output = id3636in_input;
  }
  { // Node ID: 3638 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3638in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3638in_option0 = id3637out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3638in_option1 = id3636out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3638x_1;

    switch((id3638in_sel.getValueAsLong())) {
      case 0l:
        id3638x_1 = id3638in_option0;
        break;
      case 1l:
        id3638x_1 = id3638in_option1;
        break;
      default:
        id3638x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3638out_result[(getCycle()+1)%2] = (id3638x_1);
  }
  HWRawBits<32> id3702out_output;

  { // Node ID: 3702 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3702in_input = id3638out_result[getCycle()%2];

    id3702out_output = (cast_fixed2bits(id3702in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3640out_output;

  { // Node ID: 3640 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3640in_input = id3641out_result[getCycle()%2];

    id3640out_output = id3640in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3639out_output;

  { // Node ID: 3639 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3639in_input = id3638out_result[getCycle()%2];

    id3639out_output = id3639in_input;
  }
  { // Node ID: 3641 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id3641in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3641in_option0 = id3640out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3641in_option1 = id3639out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id3641x_1;

    switch((id3641in_sel.getValueAsLong())) {
      case 0l:
        id3641x_1 = id3641in_option0;
        break;
      case 1l:
        id3641x_1 = id3641in_option1;
        break;
      default:
        id3641x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id3641out_result[(getCycle()+1)%2] = (id3641x_1);
  }
  HWRawBits<32> id3701out_output;

  { // Node ID: 3701 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id3701in_input = id3641out_result[getCycle()%2];

    id3701out_output = (cast_fixed2bits(id3701in_input));
  }
  HWRawBits<64> id3703out_result;

  { // Node ID: 3703 (NodeCat)
    const HWRawBits<32> &id3703in_in0 = id3702out_output;
    const HWRawBits<32> &id3703in_in1 = id3701out_output;

    id3703out_result = (cat(id3703in_in0,id3703in_in1));
  }
  HWRawBits<96> id3705out_result;

  { // Node ID: 3705 (NodeCat)
    const HWRawBits<32> &id3705in_in0 = id3704out_output;
    const HWRawBits<64> &id3705in_in1 = id3703out_result;

    id3705out_result = (cat(id3705in_in0,id3705in_in1));
  }
  HWRawBits<128> id3707out_result;

  { // Node ID: 3707 (NodeCat)
    const HWRawBits<32> &id3707in_in0 = id3706out_output;
    const HWRawBits<96> &id3707in_in1 = id3705out_result;

    id3707out_result = (cat(id3707in_in0,id3707in_in1));
  }
  HWRawBits<160> id3709out_result;

  { // Node ID: 3709 (NodeCat)
    const HWRawBits<32> &id3709in_in0 = id3708out_output;
    const HWRawBits<128> &id3709in_in1 = id3707out_result;

    id3709out_result = (cat(id3709in_in0,id3709in_in1));
  }
  HWRawBits<192> id3711out_result;

  { // Node ID: 3711 (NodeCat)
    const HWRawBits<32> &id3711in_in0 = id3710out_output;
    const HWRawBits<160> &id3711in_in1 = id3709out_result;

    id3711out_result = (cat(id3711in_in0,id3711in_in1));
  }
  HWRawBits<224> id3713out_result;

  { // Node ID: 3713 (NodeCat)
    const HWRawBits<32> &id3713in_in0 = id3712out_output;
    const HWRawBits<192> &id3713in_in1 = id3711out_result;

    id3713out_result = (cat(id3713in_in0,id3713in_in1));
  }
  HWRawBits<256> id3715out_result;

  { // Node ID: 3715 (NodeCat)
    const HWRawBits<32> &id3715in_in0 = id3714out_output;
    const HWRawBits<224> &id3715in_in1 = id3713out_result;

    id3715out_result = (cat(id3715in_in0,id3715in_in1));
  }
  HWRawBits<288> id3717out_result;

  { // Node ID: 3717 (NodeCat)
    const HWRawBits<32> &id3717in_in0 = id3716out_output;
    const HWRawBits<256> &id3717in_in1 = id3715out_result;

    id3717out_result = (cat(id3717in_in0,id3717in_in1));
  }
  HWRawBits<320> id3719out_result;

  { // Node ID: 3719 (NodeCat)
    const HWRawBits<32> &id3719in_in0 = id3718out_output;
    const HWRawBits<288> &id3719in_in1 = id3717out_result;

    id3719out_result = (cat(id3719in_in0,id3719in_in1));
  }
  HWRawBits<352> id3721out_result;

  { // Node ID: 3721 (NodeCat)
    const HWRawBits<32> &id3721in_in0 = id3720out_output;
    const HWRawBits<320> &id3721in_in1 = id3719out_result;

    id3721out_result = (cat(id3721in_in0,id3721in_in1));
  }
  HWRawBits<384> id3723out_result;

  { // Node ID: 3723 (NodeCat)
    const HWRawBits<32> &id3723in_in0 = id3722out_output;
    const HWRawBits<352> &id3723in_in1 = id3721out_result;

    id3723out_result = (cat(id3723in_in0,id3723in_in1));
  }
  HWRawBits<416> id3725out_result;

  { // Node ID: 3725 (NodeCat)
    const HWRawBits<32> &id3725in_in0 = id3724out_output;
    const HWRawBits<384> &id3725in_in1 = id3723out_result;

    id3725out_result = (cat(id3725in_in0,id3725in_in1));
  }
  HWRawBits<448> id3727out_result;

  { // Node ID: 3727 (NodeCat)
    const HWRawBits<32> &id3727in_in0 = id3726out_output;
    const HWRawBits<416> &id3727in_in1 = id3725out_result;

    id3727out_result = (cat(id3727in_in0,id3727in_in1));
  }
  HWRawBits<480> id3729out_result;

  { // Node ID: 3729 (NodeCat)
    const HWRawBits<32> &id3729in_in0 = id3728out_output;
    const HWRawBits<448> &id3729in_in1 = id3727out_result;

    id3729out_result = (cat(id3729in_in0,id3729in_in1));
  }
  HWRawBits<512> id3731out_result;

  { // Node ID: 3731 (NodeCat)
    const HWRawBits<32> &id3731in_in0 = id3730out_output;
    const HWRawBits<480> &id3731in_in1 = id3729out_result;

    id3731out_result = (cat(id3731in_in0,id3731in_in1));
  }
  HWRawBits<544> id3733out_result;

  { // Node ID: 3733 (NodeCat)
    const HWRawBits<32> &id3733in_in0 = id3732out_output;
    const HWRawBits<512> &id3733in_in1 = id3731out_result;

    id3733out_result = (cat(id3733in_in0,id3733in_in1));
  }
  HWRawBits<576> id3735out_result;

  { // Node ID: 3735 (NodeCat)
    const HWRawBits<32> &id3735in_in0 = id3734out_output;
    const HWRawBits<544> &id3735in_in1 = id3733out_result;

    id3735out_result = (cat(id3735in_in0,id3735in_in1));
  }
  HWRawBits<608> id3737out_result;

  { // Node ID: 3737 (NodeCat)
    const HWRawBits<32> &id3737in_in0 = id3736out_output;
    const HWRawBits<576> &id3737in_in1 = id3735out_result;

    id3737out_result = (cat(id3737in_in0,id3737in_in1));
  }
  HWRawBits<640> id3739out_result;

  { // Node ID: 3739 (NodeCat)
    const HWRawBits<32> &id3739in_in0 = id3738out_output;
    const HWRawBits<608> &id3739in_in1 = id3737out_result;

    id3739out_result = (cat(id3739in_in0,id3739in_in1));
  }
  HWRawBits<672> id3741out_result;

  { // Node ID: 3741 (NodeCat)
    const HWRawBits<32> &id3741in_in0 = id3740out_output;
    const HWRawBits<640> &id3741in_in1 = id3739out_result;

    id3741out_result = (cat(id3741in_in0,id3741in_in1));
  }
  HWRawBits<704> id3743out_result;

  { // Node ID: 3743 (NodeCat)
    const HWRawBits<32> &id3743in_in0 = id3742out_output;
    const HWRawBits<672> &id3743in_in1 = id3741out_result;

    id3743out_result = (cat(id3743in_in0,id3743in_in1));
  }
  HWRawBits<736> id3745out_result;

  { // Node ID: 3745 (NodeCat)
    const HWRawBits<32> &id3745in_in0 = id3744out_output;
    const HWRawBits<704> &id3745in_in1 = id3743out_result;

    id3745out_result = (cat(id3745in_in0,id3745in_in1));
  }
  HWRawBits<768> id3747out_result;

  { // Node ID: 3747 (NodeCat)
    const HWRawBits<32> &id3747in_in0 = id3746out_output;
    const HWRawBits<736> &id3747in_in1 = id3745out_result;

    id3747out_result = (cat(id3747in_in0,id3747in_in1));
  }
  HWRawBits<800> id3749out_result;

  { // Node ID: 3749 (NodeCat)
    const HWRawBits<32> &id3749in_in0 = id3748out_output;
    const HWRawBits<768> &id3749in_in1 = id3747out_result;

    id3749out_result = (cat(id3749in_in0,id3749in_in1));
  }
  HWRawBits<832> id3751out_result;

  { // Node ID: 3751 (NodeCat)
    const HWRawBits<32> &id3751in_in0 = in_vars.id7565out_value;
    const HWRawBits<800> &id3751in_in1 = id3749out_result;

    id3751out_result = (cat(id3751in_in0,id3751in_in1));
  }
  HWRawBits<864> id3753out_result;

  { // Node ID: 3753 (NodeCat)
    const HWRawBits<32> &id3753in_in0 = in_vars.id7563out_value;
    const HWRawBits<832> &id3753in_in1 = id3751out_result;

    id3753out_result = (cat(id3753in_in0,id3753in_in1));
  }
  HWRawBits<896> id3755out_result;

  { // Node ID: 3755 (NodeCat)
    const HWRawBits<32> &id3755in_in0 = in_vars.id7561out_value;
    const HWRawBits<864> &id3755in_in1 = id3753out_result;

    id3755out_result = (cat(id3755in_in0,id3755in_in1));
  }
  HWRawBits<928> id3757out_result;

  { // Node ID: 3757 (NodeCat)
    const HWRawBits<32> &id3757in_in0 = in_vars.id7559out_value;
    const HWRawBits<896> &id3757in_in1 = id3755out_result;

    id3757out_result = (cat(id3757in_in0,id3757in_in1));
  }
  HWRawBits<960> id3759out_result;

  { // Node ID: 3759 (NodeCat)
    const HWRawBits<32> &id3759in_in0 = in_vars.id7557out_value;
    const HWRawBits<928> &id3759in_in1 = id3757out_result;

    id3759out_result = (cat(id3759in_in0,id3759in_in1));
  }
  HWRawBits<992> id3761out_result;

  { // Node ID: 3761 (NodeCat)
    const HWRawBits<32> &id3761in_in0 = in_vars.id7555out_value;
    const HWRawBits<960> &id3761in_in1 = id3759out_result;

    id3761out_result = (cat(id3761in_in0,id3761in_in1));
  }
  HWRawBits<1024> id3763out_result;

  { // Node ID: 3763 (NodeCat)
    const HWRawBits<32> &id3763in_in0 = in_vars.id7553out_value;
    const HWRawBits<992> &id3763in_in1 = id3761out_result;

    id3763out_result = (cat(id3763in_in0,id3763in_in1));
  }
  HWRawBits<1056> id3765out_result;

  { // Node ID: 3765 (NodeCat)
    const HWRawBits<32> &id3765in_in0 = in_vars.id7551out_value;
    const HWRawBits<1024> &id3765in_in1 = id3763out_result;

    id3765out_result = (cat(id3765in_in0,id3765in_in1));
  }
  HWRawBits<1088> id3767out_result;

  { // Node ID: 3767 (NodeCat)
    const HWRawBits<32> &id3767in_in0 = in_vars.id7549out_value;
    const HWRawBits<1056> &id3767in_in1 = id3765out_result;

    id3767out_result = (cat(id3767in_in0,id3767in_in1));
  }
  HWRawBits<1120> id3769out_result;

  { // Node ID: 3769 (NodeCat)
    const HWRawBits<32> &id3769in_in0 = in_vars.id7547out_value;
    const HWRawBits<1088> &id3769in_in1 = id3767out_result;

    id3769out_result = (cat(id3769in_in0,id3769in_in1));
  }
  HWRawBits<1152> id3771out_result;

  { // Node ID: 3771 (NodeCat)
    const HWRawBits<32> &id3771in_in0 = in_vars.id7545out_value;
    const HWRawBits<1120> &id3771in_in1 = id3769out_result;

    id3771out_result = (cat(id3771in_in0,id3771in_in1));
  }
  HWRawBits<1184> id3773out_result;

  { // Node ID: 3773 (NodeCat)
    const HWRawBits<32> &id3773in_in0 = in_vars.id7543out_value;
    const HWRawBits<1152> &id3773in_in1 = id3771out_result;

    id3773out_result = (cat(id3773in_in0,id3773in_in1));
  }
  HWRawBits<1216> id3775out_result;

  { // Node ID: 3775 (NodeCat)
    const HWRawBits<32> &id3775in_in0 = in_vars.id7541out_value;
    const HWRawBits<1184> &id3775in_in1 = id3773out_result;

    id3775out_result = (cat(id3775in_in0,id3775in_in1));
  }
  HWRawBits<1248> id3777out_result;

  { // Node ID: 3777 (NodeCat)
    const HWRawBits<32> &id3777in_in0 = in_vars.id7539out_value;
    const HWRawBits<1216> &id3777in_in1 = id3775out_result;

    id3777out_result = (cat(id3777in_in0,id3777in_in1));
  }
  HWRawBits<1280> id3779out_result;

  { // Node ID: 3779 (NodeCat)
    const HWRawBits<32> &id3779in_in0 = in_vars.id7537out_value;
    const HWRawBits<1248> &id3779in_in1 = id3777out_result;

    id3779out_result = (cat(id3779in_in0,id3779in_in1));
  }
  if ( (getFillLevel() >= (18l)) && (getFlushLevel() < (18l)|| !isFlushingActive() ))
  { // Node ID: 3700 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id3700in_output_control = in_vars.id3699out_result;
    const HWRawBits<1280> &id3700in_data = id3779out_result;

    bool id3700x_1;

    (id3700x_1) = ((id3700in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(18l))&(isFlushingActive()))));
    if((id3700x_1)) {
      writeOutput(m_y01, id3700in_data);
    }
  }
  { // Node ID: 7441 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id7442out_result;

  { // Node ID: 7442 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id7442in_a = id7441out_io_y11_force_disabled;

    id7442out_result = (not_fixed(id7442in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id7443out_result;

  { // Node ID: 7443 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id7443in_a = id7600out_output[getCycle()%13];
    const HWOffsetFix<1,0,UNSIGNED> &id7443in_b = id7442out_result;

    HWOffsetFix<1,0,UNSIGNED> id7443x_1;

    (id7443x_1) = (and_fixed(id7443in_a,id7443in_b));
    id7443out_result = (id7443x_1);
  }
  { // Node ID: 7567 (NodeConstantRawBits)
  }
  { // Node ID: 7569 (NodeConstantRawBits)
  }
  { // Node ID: 7571 (NodeConstantRawBits)
  }
  { // Node ID: 7573 (NodeConstantRawBits)
  }
  { // Node ID: 7575 (NodeConstantRawBits)
  }
  { // Node ID: 7577 (NodeConstantRawBits)
  }
  { // Node ID: 7579 (NodeConstantRawBits)
  }
  { // Node ID: 7581 (NodeConstantRawBits)
  }
  { // Node ID: 7583 (NodeConstantRawBits)
  }
  { // Node ID: 7585 (NodeConstantRawBits)
  }
  { // Node ID: 7587 (NodeConstantRawBits)
  }
  { // Node ID: 7589 (NodeConstantRawBits)
  }
  { // Node ID: 7591 (NodeConstantRawBits)
  }
  { // Node ID: 7593 (NodeConstantRawBits)
  }
  { // Node ID: 7595 (NodeConstantRawBits)
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7228out_output;

  { // Node ID: 7228 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7228in_input = id7229out_result[getCycle()%2];

    id7228out_output = id7228in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7225out_output;

  { // Node ID: 7225 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7225in_input = id7226out_result[getCycle()%2];

    id7225out_output = id7225in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7222out_output;

  { // Node ID: 7222 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7222in_input = id7223out_result[getCycle()%2];

    id7222out_output = id7222in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7219out_output;

  { // Node ID: 7219 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7219in_input = id7220out_result[getCycle()%2];

    id7219out_output = id7219in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7216out_output;

  { // Node ID: 7216 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7216in_input = id7217out_result[getCycle()%2];

    id7216out_output = id7216in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7213out_output;

  { // Node ID: 7213 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7213in_input = id7214out_result[getCycle()%2];

    id7213out_output = id7213in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7210out_output;

  { // Node ID: 7210 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7210in_input = id7211out_result[getCycle()%2];

    id7210out_output = id7210in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7207out_output;

  { // Node ID: 7207 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7207in_input = id7208out_result[getCycle()%2];

    id7207out_output = id7207in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7204out_output;

  { // Node ID: 7204 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7204in_input = id7205out_result[getCycle()%2];

    id7204out_output = id7204in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7201out_output;

  { // Node ID: 7201 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7201in_input = id7202out_result[getCycle()%2];

    id7201out_output = id7201in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7198out_output;

  { // Node ID: 7198 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7198in_input = id7199out_result[getCycle()%2];

    id7198out_output = id7198in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7195out_output;

  { // Node ID: 7195 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7195in_input = id7196out_result[getCycle()%2];

    id7195out_output = id7195in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7192out_output;

  { // Node ID: 7192 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7192in_input = id7193out_result[getCycle()%2];

    id7192out_output = id7192in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7189out_output;

  { // Node ID: 7189 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7189in_input = id7190out_result[getCycle()%2];

    id7189out_output = id7189in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7186out_output;

  { // Node ID: 7186 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7186in_input = id7187out_result[getCycle()%2];

    id7186out_output = id7186in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7183out_output;

  { // Node ID: 7183 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7183in_input = id7184out_result[getCycle()%2];

    id7183out_output = id7183in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7180out_output;

  { // Node ID: 7180 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7180in_input = id7181out_result[getCycle()%2];

    id7180out_output = id7180in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7177out_output;

  { // Node ID: 7177 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7177in_input = id7178out_result[getCycle()%2];

    id7177out_output = id7177in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7174out_output;

  { // Node ID: 7174 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7174in_input = id7175out_result[getCycle()%2];

    id7174out_output = id7174in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7171out_output;

  { // Node ID: 7171 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7171in_input = id7172out_result[getCycle()%2];

    id7171out_output = id7171in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7168out_output;

  { // Node ID: 7168 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7168in_input = id7169out_result[getCycle()%2];

    id7168out_output = id7168in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7165out_output;

  { // Node ID: 7165 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7165in_input = id7166out_result[getCycle()%2];

    id7165out_output = id7165in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7162out_output;

  { // Node ID: 7162 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7162in_input = id7163out_result[getCycle()%2];

    id7162out_output = id7162in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7159out_output;

  { // Node ID: 7159 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7159in_input = id7160out_result[getCycle()%2];

    id7159out_output = id7159in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7156out_output;

  { // Node ID: 7156 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7156in_input = id7157out_result[getCycle()%2];

    id7156out_output = id7156in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7153out_output;

  { // Node ID: 7153 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7153in_input = id7154out_result[getCycle()%2];

    id7153out_output = id7153in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7150out_output;

  { // Node ID: 7150 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7150in_input = id7151out_result[getCycle()%2];

    id7150out_output = id7150in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7147out_output;

  { // Node ID: 7147 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7147in_input = id7148out_result[getCycle()%2];

    id7147out_output = id7147in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7144out_output;

  { // Node ID: 7144 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7144in_input = id7145out_result[getCycle()%2];

    id7144out_output = id7144in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7141out_output;

  { // Node ID: 7141 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7141in_input = id7142out_result[getCycle()%2];

    id7141out_output = id7141in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7138out_output;

  { // Node ID: 7138 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7138in_input = id7139out_result[getCycle()%2];

    id7138out_output = id7138in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7135out_output;

  { // Node ID: 7135 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7135in_input = id7136out_result[getCycle()%2];

    id7135out_output = id7135in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7132out_output;

  { // Node ID: 7132 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7132in_input = id7133out_result[getCycle()%2];

    id7132out_output = id7132in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7129out_output;

  { // Node ID: 7129 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7129in_input = id7130out_result[getCycle()%2];

    id7129out_output = id7129in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7126out_output;

  { // Node ID: 7126 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7126in_input = id7127out_result[getCycle()%2];

    id7126out_output = id7126in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7123out_output;

  { // Node ID: 7123 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7123in_input = id7124out_result[getCycle()%2];

    id7123out_output = id7123in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7120out_output;

  { // Node ID: 7120 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7120in_input = id7121out_result[getCycle()%2];

    id7120out_output = id7120in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7117out_output;

  { // Node ID: 7117 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7117in_input = id7118out_result[getCycle()%2];

    id7117out_output = id7117in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7114out_output;

  { // Node ID: 7114 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7114in_input = id7115out_result[getCycle()%2];

    id7114out_output = id7114in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7111out_output;

  { // Node ID: 7111 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7111in_input = id7112out_result[getCycle()%2];

    id7111out_output = id7111in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7108out_output;

  { // Node ID: 7108 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7108in_input = id7109out_result[getCycle()%2];

    id7108out_output = id7108in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7105out_output;

  { // Node ID: 7105 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7105in_input = id7106out_result[getCycle()%2];

    id7105out_output = id7105in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7102out_output;

  { // Node ID: 7102 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7102in_input = id7103out_result[getCycle()%2];

    id7102out_output = id7102in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7099out_output;

  { // Node ID: 7099 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7099in_input = id7100out_result[getCycle()%2];

    id7099out_output = id7099in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7096out_output;

  { // Node ID: 7096 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7096in_input = id7097out_result[getCycle()%2];

    id7096out_output = id7096in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7093out_output;

  { // Node ID: 7093 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7093in_input = id7094out_result[getCycle()%2];

    id7093out_output = id7093in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7090out_output;

  { // Node ID: 7090 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7090in_input = id7091out_result[getCycle()%2];

    id7090out_output = id7090in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7087out_output;

  { // Node ID: 7087 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7087in_input = id7088out_result[getCycle()%2];

    id7087out_output = id7087in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7084out_output;

  { // Node ID: 7084 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7084in_input = id7085out_result[getCycle()%2];

    id7084out_output = id7084in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7081out_output;

  { // Node ID: 7081 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7081in_input = id7082out_result[getCycle()%2];

    id7081out_output = id7081in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7078out_output;

  { // Node ID: 7078 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7078in_input = id7079out_result[getCycle()%2];

    id7078out_output = id7078in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7075out_output;

  { // Node ID: 7075 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7075in_input = id7076out_result[getCycle()%2];

    id7075out_output = id7075in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7072out_output;

  { // Node ID: 7072 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7072in_input = id7073out_result[getCycle()%2];

    id7072out_output = id7072in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7069out_output;

  { // Node ID: 7069 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7069in_input = id7070out_result[getCycle()%2];

    id7069out_output = id7069in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7066out_output;

  { // Node ID: 7066 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7066in_input = id7067out_result[getCycle()%2];

    id7066out_output = id7066in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7063out_output;

  { // Node ID: 7063 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7063in_input = id7064out_result[getCycle()%2];

    id7063out_output = id7063in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7060out_output;

  { // Node ID: 7060 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7060in_input = id7061out_result[getCycle()%2];

    id7060out_output = id7060in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7057out_output;

  { // Node ID: 7057 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7057in_input = id7058out_result[getCycle()%2];

    id7057out_output = id7057in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7054out_output;

  { // Node ID: 7054 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7054in_input = id7055out_result[getCycle()%2];

    id7054out_output = id7054in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7051out_output;

  { // Node ID: 7051 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7051in_input = id7052out_result[getCycle()%2];

    id7051out_output = id7051in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7048out_output;

  { // Node ID: 7048 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7048in_input = id7049out_result[getCycle()%2];

    id7048out_output = id7048in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7045out_output;

  { // Node ID: 7045 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7045in_input = id7046out_result[getCycle()%2];

    id7045out_output = id7045in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7042out_output;

  { // Node ID: 7042 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7042in_input = id7043out_result[getCycle()%2];

    id7042out_output = id7042in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7039out_output;

  { // Node ID: 7039 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7039in_input = id7040out_result[getCycle()%2];

    id7039out_output = id7039in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7036out_output;

  { // Node ID: 7036 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7036in_input = id7037out_result[getCycle()%2];

    id7036out_output = id7036in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7033out_output;

  { // Node ID: 7033 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7033in_input = id7034out_result[getCycle()%2];

    id7033out_output = id7033in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7030out_output;

  { // Node ID: 7030 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7030in_input = id7031out_result[getCycle()%2];

    id7030out_output = id7030in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7027out_output;

  { // Node ID: 7027 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7027in_input = id7028out_result[getCycle()%2];

    id7027out_output = id7027in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7024out_output;

  { // Node ID: 7024 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7024in_input = id7025out_result[getCycle()%2];

    id7024out_output = id7024in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7021out_output;

  { // Node ID: 7021 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7021in_input = id7022out_result[getCycle()%2];

    id7021out_output = id7021in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7018out_output;

  { // Node ID: 7018 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7018in_input = id7019out_result[getCycle()%2];

    id7018out_output = id7018in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7015out_output;

  { // Node ID: 7015 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7015in_input = id7016out_result[getCycle()%2];

    id7015out_output = id7015in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7012out_output;

  { // Node ID: 7012 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7012in_input = id7013out_result[getCycle()%2];

    id7012out_output = id7012in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7009out_output;

  { // Node ID: 7009 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7009in_input = id7010out_result[getCycle()%2];

    id7009out_output = id7009in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7006out_output;

  { // Node ID: 7006 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7006in_input = id7007out_result[getCycle()%2];

    id7006out_output = id7006in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7003out_output;

  { // Node ID: 7003 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7003in_input = id7004out_result[getCycle()%2];

    id7003out_output = id7003in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id7000out_output;

  { // Node ID: 7000 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id7000in_input = id7001out_result[getCycle()%2];

    id7000out_output = id7000in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6997out_output;

  { // Node ID: 6997 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6997in_input = id6998out_result[getCycle()%2];

    id6997out_output = id6997in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6994out_output;

  { // Node ID: 6994 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6994in_input = id6995out_result[getCycle()%2];

    id6994out_output = id6994in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6991out_output;

  { // Node ID: 6991 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6991in_input = id6992out_result[getCycle()%2];

    id6991out_output = id6991in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6988out_output;

  { // Node ID: 6988 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6988in_input = id6989out_result[getCycle()%2];

    id6988out_output = id6988in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6985out_output;

  { // Node ID: 6985 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6985in_input = id6986out_result[getCycle()%2];

    id6985out_output = id6985in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6982out_output;

  { // Node ID: 6982 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6982in_input = id6983out_result[getCycle()%2];

    id6982out_output = id6982in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6979out_output;

  { // Node ID: 6979 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6979in_input = id6980out_result[getCycle()%2];

    id6979out_output = id6979in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6976out_output;

  { // Node ID: 6976 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6976in_input = id6977out_result[getCycle()%2];

    id6976out_output = id6976in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6973out_output;

  { // Node ID: 6973 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6973in_input = id6974out_result[getCycle()%2];

    id6973out_output = id6973in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6970out_output;

  { // Node ID: 6970 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6970in_input = id6971out_result[getCycle()%2];

    id6970out_output = id6970in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6967out_output;

  { // Node ID: 6967 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6967in_input = id6968out_result[getCycle()%2];

    id6967out_output = id6967in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6964out_output;

  { // Node ID: 6964 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6964in_input = id6965out_result[getCycle()%2];

    id6964out_output = id6964in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6961out_output;

  { // Node ID: 6961 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6961in_input = id6962out_result[getCycle()%2];

    id6961out_output = id6961in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6958out_output;

  { // Node ID: 6958 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6958in_input = id6959out_result[getCycle()%2];

    id6958out_output = id6958in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6955out_output;

  { // Node ID: 6955 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6955in_input = id6956out_result[getCycle()%2];

    id6955out_output = id6955in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6952out_output;

  { // Node ID: 6952 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6952in_input = id6953out_result[getCycle()%2];

    id6952out_output = id6952in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6949out_output;

  { // Node ID: 6949 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6949in_input = id6950out_result[getCycle()%2];

    id6949out_output = id6949in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6946out_output;

  { // Node ID: 6946 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6946in_input = id6947out_result[getCycle()%2];

    id6946out_output = id6946in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6943out_output;

  { // Node ID: 6943 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6943in_input = id6944out_result[getCycle()%2];

    id6943out_output = id6943in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6940out_output;

  { // Node ID: 6940 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6940in_input = id6941out_result[getCycle()%2];

    id6940out_output = id6940in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6937out_output;

  { // Node ID: 6937 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6937in_input = id6938out_result[getCycle()%2];

    id6937out_output = id6937in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6934out_output;

  { // Node ID: 6934 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6934in_input = id6935out_result[getCycle()%2];

    id6934out_output = id6934in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6931out_output;

  { // Node ID: 6931 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6931in_input = id6932out_result[getCycle()%2];

    id6931out_output = id6931in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6928out_output;

  { // Node ID: 6928 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6928in_input = id6929out_result[getCycle()%2];

    id6928out_output = id6928in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6925out_output;

  { // Node ID: 6925 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6925in_input = id6926out_result[getCycle()%2];

    id6925out_output = id6925in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6922out_output;

  { // Node ID: 6922 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6922in_input = id6923out_result[getCycle()%2];

    id6922out_output = id6922in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6919out_output;

  { // Node ID: 6919 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6919in_input = id6920out_result[getCycle()%2];

    id6919out_output = id6919in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6916out_output;

  { // Node ID: 6916 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6916in_input = id6917out_result[getCycle()%2];

    id6916out_output = id6916in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6913out_output;

  { // Node ID: 6913 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6913in_input = id6914out_result[getCycle()%2];

    id6913out_output = id6913in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6910out_output;

  { // Node ID: 6910 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6910in_input = id6911out_result[getCycle()%2];

    id6910out_output = id6910in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6907out_output;

  { // Node ID: 6907 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6907in_input = id6908out_result[getCycle()%2];

    id6907out_output = id6907in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6904out_output;

  { // Node ID: 6904 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6904in_input = id6905out_result[getCycle()%2];

    id6904out_output = id6904in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6901out_output;

  { // Node ID: 6901 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6901in_input = id6902out_result[getCycle()%2];

    id6901out_output = id6901in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6898out_output;

  { // Node ID: 6898 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6898in_input = id6899out_result[getCycle()%2];

    id6898out_output = id6898in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6895out_output;

  { // Node ID: 6895 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6895in_input = id6896out_result[getCycle()%2];

    id6895out_output = id6895in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6892out_output;

  { // Node ID: 6892 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6892in_input = id6893out_result[getCycle()%2];

    id6892out_output = id6892in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6889out_output;

  { // Node ID: 6889 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6889in_input = id6890out_result[getCycle()%2];

    id6889out_output = id6889in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6886out_output;

  { // Node ID: 6886 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6886in_input = id6887out_result[getCycle()%2];

    id6886out_output = id6886in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6883out_output;

  { // Node ID: 6883 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6883in_input = id6884out_result[getCycle()%2];

    id6883out_output = id6883in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6880out_output;

  { // Node ID: 6880 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6880in_input = id6881out_result[getCycle()%2];

    id6880out_output = id6880in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6877out_output;

  { // Node ID: 6877 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6877in_input = id6878out_result[getCycle()%2];

    id6877out_output = id6877in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6874out_output;

  { // Node ID: 6874 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6874in_input = id6875out_result[getCycle()%2];

    id6874out_output = id6874in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6871out_output;

  { // Node ID: 6871 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6871in_input = id6872out_result[getCycle()%2];

    id6871out_output = id6871in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6868out_output;

  { // Node ID: 6868 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6868in_input = id6869out_result[getCycle()%2];

    id6868out_output = id6868in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6865out_output;

  { // Node ID: 6865 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6865in_input = id6866out_result[getCycle()%2];

    id6865out_output = id6865in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6862out_output;

  { // Node ID: 6862 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6862in_input = id6863out_result[getCycle()%2];

    id6862out_output = id6862in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6859out_output;

  { // Node ID: 6859 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6859in_input = id6860out_result[getCycle()%2];

    id6859out_output = id6859in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6856out_output;

  { // Node ID: 6856 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6856in_input = id6857out_result[getCycle()%2];

    id6856out_output = id6856in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6853out_output;

  { // Node ID: 6853 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6853in_input = id6854out_result[getCycle()%2];

    id6853out_output = id6853in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6850out_output;

  { // Node ID: 6850 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6850in_input = id6851out_result[getCycle()%2];

    id6850out_output = id6850in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6847out_output;

  { // Node ID: 6847 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6847in_input = id6848out_result[getCycle()%2];

    id6847out_output = id6847in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6844out_output;

  { // Node ID: 6844 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6844in_input = id6845out_result[getCycle()%2];

    id6844out_output = id6844in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6841out_output;

  { // Node ID: 6841 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6841in_input = id6842out_result[getCycle()%2];

    id6841out_output = id6841in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6838out_output;

  { // Node ID: 6838 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6838in_input = id6839out_result[getCycle()%2];

    id6838out_output = id6838in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6835out_output;

  { // Node ID: 6835 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6835in_input = id6836out_result[getCycle()%2];

    id6835out_output = id6835in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6832out_output;

  { // Node ID: 6832 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6832in_input = id6833out_result[getCycle()%2];

    id6832out_output = id6832in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6829out_output;

  { // Node ID: 6829 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6829in_input = id6830out_result[getCycle()%2];

    id6829out_output = id6829in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6826out_output;

  { // Node ID: 6826 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6826in_input = id6827out_result[getCycle()%2];

    id6826out_output = id6826in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6823out_output;

  { // Node ID: 6823 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6823in_input = id6824out_result[getCycle()%2];

    id6823out_output = id6823in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6820out_output;

  { // Node ID: 6820 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6820in_input = id6821out_result[getCycle()%2];

    id6820out_output = id6820in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6817out_output;

  { // Node ID: 6817 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6817in_input = id6818out_result[getCycle()%2];

    id6817out_output = id6817in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6814out_output;

  { // Node ID: 6814 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6814in_input = id6815out_result[getCycle()%2];

    id6814out_output = id6814in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6811out_output;

  { // Node ID: 6811 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6811in_input = id6812out_result[getCycle()%2];

    id6811out_output = id6811in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6808out_output;

  { // Node ID: 6808 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6808in_input = id6809out_result[getCycle()%2];

    id6808out_output = id6808in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6805out_output;

  { // Node ID: 6805 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6805in_input = id6806out_result[getCycle()%2];

    id6805out_output = id6805in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6802out_output;

  { // Node ID: 6802 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6802in_input = id6803out_result[getCycle()%2];

    id6802out_output = id6802in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6799out_output;

  { // Node ID: 6799 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6799in_input = id6800out_result[getCycle()%2];

    id6799out_output = id6799in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6796out_output;

  { // Node ID: 6796 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6796in_input = id6797out_result[getCycle()%2];

    id6796out_output = id6796in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6793out_output;

  { // Node ID: 6793 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6793in_input = id6794out_result[getCycle()%2];

    id6793out_output = id6793in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6790out_output;

  { // Node ID: 6790 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6790in_input = id6791out_result[getCycle()%2];

    id6790out_output = id6790in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6787out_output;

  { // Node ID: 6787 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6787in_input = id6788out_result[getCycle()%2];

    id6787out_output = id6787in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6784out_output;

  { // Node ID: 6784 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6784in_input = id6785out_result[getCycle()%2];

    id6784out_output = id6784in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6781out_output;

  { // Node ID: 6781 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6781in_input = id6782out_result[getCycle()%2];

    id6781out_output = id6781in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6778out_output;

  { // Node ID: 6778 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6778in_input = id6779out_result[getCycle()%2];

    id6778out_output = id6778in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6775out_output;

  { // Node ID: 6775 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6775in_input = id6776out_result[getCycle()%2];

    id6775out_output = id6775in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6772out_output;

  { // Node ID: 6772 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6772in_input = id6773out_result[getCycle()%2];

    id6772out_output = id6772in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6769out_output;

  { // Node ID: 6769 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6769in_input = id6770out_result[getCycle()%2];

    id6769out_output = id6769in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6766out_output;

  { // Node ID: 6766 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6766in_input = id6767out_result[getCycle()%2];

    id6766out_output = id6766in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6763out_output;

  { // Node ID: 6763 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6763in_input = id6764out_result[getCycle()%2];

    id6763out_output = id6763in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6760out_output;

  { // Node ID: 6760 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6760in_input = id6761out_result[getCycle()%2];

    id6760out_output = id6760in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6757out_output;

  { // Node ID: 6757 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6757in_input = id6758out_result[getCycle()%2];

    id6757out_output = id6757in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6754out_output;

  { // Node ID: 6754 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6754in_input = id6755out_result[getCycle()%2];

    id6754out_output = id6754in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6751out_output;

  { // Node ID: 6751 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6751in_input = id6752out_result[getCycle()%2];

    id6751out_output = id6751in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6748out_output;

  { // Node ID: 6748 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6748in_input = id6749out_result[getCycle()%2];

    id6748out_output = id6748in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6745out_output;

  { // Node ID: 6745 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6745in_input = id6746out_result[getCycle()%2];

    id6745out_output = id6745in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6742out_output;

  { // Node ID: 6742 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6742in_input = id6743out_result[getCycle()%2];

    id6742out_output = id6742in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6739out_output;

  { // Node ID: 6739 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6739in_input = id6740out_result[getCycle()%2];

    id6739out_output = id6739in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6736out_output;

  { // Node ID: 6736 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6736in_input = id6737out_result[getCycle()%2];

    id6736out_output = id6736in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6733out_output;

  { // Node ID: 6733 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6733in_input = id6734out_result[getCycle()%2];

    id6733out_output = id6733in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6730out_output;

  { // Node ID: 6730 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6730in_input = id6731out_result[getCycle()%2];

    id6730out_output = id6730in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6727out_output;

  { // Node ID: 6727 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6727in_input = id6728out_result[getCycle()%2];

    id6727out_output = id6727in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6724out_output;

  { // Node ID: 6724 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6724in_input = id6725out_result[getCycle()%2];

    id6724out_output = id6724in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6721out_output;

  { // Node ID: 6721 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6721in_input = id6722out_result[getCycle()%2];

    id6721out_output = id6721in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6718out_output;

  { // Node ID: 6718 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6718in_input = id6719out_result[getCycle()%2];

    id6718out_output = id6718in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6715out_output;

  { // Node ID: 6715 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6715in_input = id6716out_result[getCycle()%2];

    id6715out_output = id6715in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6712out_output;

  { // Node ID: 6712 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6712in_input = id6713out_result[getCycle()%2];

    id6712out_output = id6712in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6709out_output;

  { // Node ID: 6709 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6709in_input = id6710out_result[getCycle()%2];

    id6709out_output = id6709in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6706out_output;

  { // Node ID: 6706 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6706in_input = id6707out_result[getCycle()%2];

    id6706out_output = id6706in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6703out_output;

  { // Node ID: 6703 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6703in_input = id6704out_result[getCycle()%2];

    id6703out_output = id6703in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6700out_output;

  { // Node ID: 6700 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6700in_input = id6701out_result[getCycle()%2];

    id6700out_output = id6700in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6697out_output;

  { // Node ID: 6697 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6697in_input = id6698out_result[getCycle()%2];

    id6697out_output = id6697in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6694out_output;

  { // Node ID: 6694 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6694in_input = id6695out_result[getCycle()%2];

    id6694out_output = id6694in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6691out_output;

  { // Node ID: 6691 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6691in_input = id6692out_result[getCycle()%2];

    id6691out_output = id6691in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6688out_output;

  { // Node ID: 6688 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6688in_input = id6689out_result[getCycle()%2];

    id6688out_output = id6688in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6685out_output;

  { // Node ID: 6685 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6685in_input = id6686out_result[getCycle()%2];

    id6685out_output = id6685in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6682out_output;

  { // Node ID: 6682 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6682in_input = id6683out_result[getCycle()%2];

    id6682out_output = id6682in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6679out_output;

  { // Node ID: 6679 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6679in_input = id6680out_result[getCycle()%2];

    id6679out_output = id6679in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6676out_output;

  { // Node ID: 6676 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6676in_input = id6677out_result[getCycle()%2];

    id6676out_output = id6676in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6673out_output;

  { // Node ID: 6673 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6673in_input = id6674out_result[getCycle()%2];

    id6673out_output = id6673in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6670out_output;

  { // Node ID: 6670 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6670in_input = id6671out_result[getCycle()%2];

    id6670out_output = id6670in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6667out_output;

  { // Node ID: 6667 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6667in_input = id6668out_result[getCycle()%2];

    id6667out_output = id6667in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6664out_output;

  { // Node ID: 6664 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6664in_input = id6665out_result[getCycle()%2];

    id6664out_output = id6664in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6661out_output;

  { // Node ID: 6661 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6661in_input = id6662out_result[getCycle()%2];

    id6661out_output = id6661in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6658out_output;

  { // Node ID: 6658 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6658in_input = id6659out_result[getCycle()%2];

    id6658out_output = id6658in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6655out_output;

  { // Node ID: 6655 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6655in_input = id6656out_result[getCycle()%2];

    id6655out_output = id6655in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6652out_output;

  { // Node ID: 6652 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6652in_input = id6653out_result[getCycle()%2];

    id6652out_output = id6652in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6649out_output;

  { // Node ID: 6649 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6649in_input = id6650out_result[getCycle()%2];

    id6649out_output = id6649in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6646out_output;

  { // Node ID: 6646 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6646in_input = id6647out_result[getCycle()%2];

    id6646out_output = id6646in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6643out_output;

  { // Node ID: 6643 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6643in_input = id6644out_result[getCycle()%2];

    id6643out_output = id6643in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6640out_output;

  { // Node ID: 6640 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6640in_input = id6641out_result[getCycle()%2];

    id6640out_output = id6640in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6637out_output;

  { // Node ID: 6637 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6637in_input = id6638out_result[getCycle()%2];

    id6637out_output = id6637in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6634out_output;

  { // Node ID: 6634 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6634in_input = id6635out_result[getCycle()%2];

    id6634out_output = id6634in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6631out_output;

  { // Node ID: 6631 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6631in_input = id6632out_result[getCycle()%2];

    id6631out_output = id6631in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6628out_output;

  { // Node ID: 6628 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6628in_input = id6629out_result[getCycle()%2];

    id6628out_output = id6628in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6625out_output;

  { // Node ID: 6625 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6625in_input = id6626out_result[getCycle()%2];

    id6625out_output = id6625in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6622out_output;

  { // Node ID: 6622 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6622in_input = id6623out_result[getCycle()%2];

    id6622out_output = id6622in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6619out_output;

  { // Node ID: 6619 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6619in_input = id6620out_result[getCycle()%2];

    id6619out_output = id6619in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6616out_output;

  { // Node ID: 6616 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6616in_input = id6617out_result[getCycle()%2];

    id6616out_output = id6616in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6613out_output;

  { // Node ID: 6613 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6613in_input = id6614out_result[getCycle()%2];

    id6613out_output = id6613in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6610out_output;

  { // Node ID: 6610 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6610in_input = id6611out_result[getCycle()%2];

    id6610out_output = id6610in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6607out_output;

  { // Node ID: 6607 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6607in_input = id6608out_result[getCycle()%2];

    id6607out_output = id6607in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6604out_output;

  { // Node ID: 6604 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6604in_input = id6605out_result[getCycle()%2];

    id6604out_output = id6604in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6601out_output;

  { // Node ID: 6601 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6601in_input = id6602out_result[getCycle()%2];

    id6601out_output = id6601in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6598out_output;

  { // Node ID: 6598 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6598in_input = id6599out_result[getCycle()%2];

    id6598out_output = id6598in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6595out_output;

  { // Node ID: 6595 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6595in_input = id6596out_result[getCycle()%2];

    id6595out_output = id6595in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6592out_output;

  { // Node ID: 6592 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6592in_input = id6593out_result[getCycle()%2];

    id6592out_output = id6592in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6589out_output;

  { // Node ID: 6589 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6589in_input = id6590out_result[getCycle()%2];

    id6589out_output = id6589in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6586out_output;

  { // Node ID: 6586 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6586in_input = id6587out_result[getCycle()%2];

    id6586out_output = id6586in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6583out_output;

  { // Node ID: 6583 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6583in_input = id6584out_result[getCycle()%2];

    id6583out_output = id6583in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6580out_output;

  { // Node ID: 6580 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6580in_input = id6581out_result[getCycle()%2];

    id6580out_output = id6580in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6577out_output;

  { // Node ID: 6577 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6577in_input = id6578out_result[getCycle()%2];

    id6577out_output = id6577in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6574out_output;

  { // Node ID: 6574 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6574in_input = id6575out_result[getCycle()%2];

    id6574out_output = id6574in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6571out_output;

  { // Node ID: 6571 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6571in_input = id6572out_result[getCycle()%2];

    id6571out_output = id6571in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6568out_output;

  { // Node ID: 6568 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6568in_input = id6569out_result[getCycle()%2];

    id6568out_output = id6568in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6565out_output;

  { // Node ID: 6565 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6565in_input = id6566out_result[getCycle()%2];

    id6565out_output = id6565in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6562out_output;

  { // Node ID: 6562 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6562in_input = id6563out_result[getCycle()%2];

    id6562out_output = id6562in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6559out_output;

  { // Node ID: 6559 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6559in_input = id6560out_result[getCycle()%2];

    id6559out_output = id6559in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6556out_output;

  { // Node ID: 6556 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6556in_input = id6557out_result[getCycle()%2];

    id6556out_output = id6556in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6553out_output;

  { // Node ID: 6553 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6553in_input = id6554out_result[getCycle()%2];

    id6553out_output = id6553in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6550out_output;

  { // Node ID: 6550 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6550in_input = id6551out_result[getCycle()%2];

    id6550out_output = id6550in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6547out_output;

  { // Node ID: 6547 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6547in_input = id6548out_result[getCycle()%2];

    id6547out_output = id6547in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6544out_output;

  { // Node ID: 6544 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6544in_input = id6545out_result[getCycle()%2];

    id6544out_output = id6544in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6541out_output;

  { // Node ID: 6541 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6541in_input = id6542out_result[getCycle()%2];

    id6541out_output = id6541in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6538out_output;

  { // Node ID: 6538 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6538in_input = id6539out_result[getCycle()%2];

    id6538out_output = id6538in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6535out_output;

  { // Node ID: 6535 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6535in_input = id6536out_result[getCycle()%2];

    id6535out_output = id6535in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6532out_output;

  { // Node ID: 6532 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6532in_input = id6533out_result[getCycle()%2];

    id6532out_output = id6532in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6529out_output;

  { // Node ID: 6529 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6529in_input = id6530out_result[getCycle()%2];

    id6529out_output = id6529in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6526out_output;

  { // Node ID: 6526 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6526in_input = id6527out_result[getCycle()%2];

    id6526out_output = id6526in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6523out_output;

  { // Node ID: 6523 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6523in_input = id6524out_result[getCycle()%2];

    id6523out_output = id6523in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6520out_output;

  { // Node ID: 6520 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6520in_input = id6521out_result[getCycle()%2];

    id6520out_output = id6520in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6517out_output;

  { // Node ID: 6517 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6517in_input = id6518out_result[getCycle()%2];

    id6517out_output = id6517in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6514out_output;

  { // Node ID: 6514 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6514in_input = id6515out_result[getCycle()%2];

    id6514out_output = id6514in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6511out_output;

  { // Node ID: 6511 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6511in_input = id6512out_result[getCycle()%2];

    id6511out_output = id6511in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6508out_output;

  { // Node ID: 6508 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6508in_input = id6509out_result[getCycle()%2];

    id6508out_output = id6508in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6505out_output;

  { // Node ID: 6505 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6505in_input = id6506out_result[getCycle()%2];

    id6505out_output = id6505in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6502out_output;

  { // Node ID: 6502 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6502in_input = id6503out_result[getCycle()%2];

    id6502out_output = id6502in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6499out_output;

  { // Node ID: 6499 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6499in_input = id6500out_result[getCycle()%2];

    id6499out_output = id6499in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6496out_output;

  { // Node ID: 6496 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6496in_input = id6497out_result[getCycle()%2];

    id6496out_output = id6496in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6493out_output;

  { // Node ID: 6493 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6493in_input = id6494out_result[getCycle()%2];

    id6493out_output = id6493in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6490out_output;

  { // Node ID: 6490 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6490in_input = id6491out_result[getCycle()%2];

    id6490out_output = id6490in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6487out_output;

  { // Node ID: 6487 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6487in_input = id6488out_result[getCycle()%2];

    id6487out_output = id6487in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6484out_output;

  { // Node ID: 6484 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6484in_input = id6485out_result[getCycle()%2];

    id6484out_output = id6484in_input;
  }

  sliding_window10Block8Vars out_vars;
  out_vars.id7443out_result = id7443out_result;
  out_vars.id7567out_value = id7567out_value;
  out_vars.id7569out_value = id7569out_value;
  out_vars.id7571out_value = id7571out_value;
  out_vars.id7573out_value = id7573out_value;
  out_vars.id7575out_value = id7575out_value;
  out_vars.id7577out_value = id7577out_value;
  out_vars.id7579out_value = id7579out_value;
  out_vars.id7581out_value = id7581out_value;
  out_vars.id7583out_value = id7583out_value;
  out_vars.id7585out_value = id7585out_value;
  out_vars.id7587out_value = id7587out_value;
  out_vars.id7589out_value = id7589out_value;
  out_vars.id7591out_value = id7591out_value;
  out_vars.id7593out_value = id7593out_value;
  out_vars.id7595out_value = id7595out_value;
  out_vars.id7228out_output = id7228out_output;
  out_vars.id7225out_output = id7225out_output;
  out_vars.id7222out_output = id7222out_output;
  out_vars.id7219out_output = id7219out_output;
  out_vars.id7216out_output = id7216out_output;
  out_vars.id7213out_output = id7213out_output;
  out_vars.id7210out_output = id7210out_output;
  out_vars.id7207out_output = id7207out_output;
  out_vars.id7204out_output = id7204out_output;
  out_vars.id7201out_output = id7201out_output;
  out_vars.id7198out_output = id7198out_output;
  out_vars.id7195out_output = id7195out_output;
  out_vars.id7192out_output = id7192out_output;
  out_vars.id7189out_output = id7189out_output;
  out_vars.id7186out_output = id7186out_output;
  out_vars.id7183out_output = id7183out_output;
  out_vars.id7180out_output = id7180out_output;
  out_vars.id7177out_output = id7177out_output;
  out_vars.id7174out_output = id7174out_output;
  out_vars.id7171out_output = id7171out_output;
  out_vars.id7168out_output = id7168out_output;
  out_vars.id7165out_output = id7165out_output;
  out_vars.id7162out_output = id7162out_output;
  out_vars.id7159out_output = id7159out_output;
  out_vars.id7156out_output = id7156out_output;
  out_vars.id7153out_output = id7153out_output;
  out_vars.id7150out_output = id7150out_output;
  out_vars.id7147out_output = id7147out_output;
  out_vars.id7144out_output = id7144out_output;
  out_vars.id7141out_output = id7141out_output;
  out_vars.id7138out_output = id7138out_output;
  out_vars.id7135out_output = id7135out_output;
  out_vars.id7132out_output = id7132out_output;
  out_vars.id7129out_output = id7129out_output;
  out_vars.id7126out_output = id7126out_output;
  out_vars.id7123out_output = id7123out_output;
  out_vars.id7120out_output = id7120out_output;
  out_vars.id7117out_output = id7117out_output;
  out_vars.id7114out_output = id7114out_output;
  out_vars.id7111out_output = id7111out_output;
  out_vars.id7108out_output = id7108out_output;
  out_vars.id7105out_output = id7105out_output;
  out_vars.id7102out_output = id7102out_output;
  out_vars.id7099out_output = id7099out_output;
  out_vars.id7096out_output = id7096out_output;
  out_vars.id7093out_output = id7093out_output;
  out_vars.id7090out_output = id7090out_output;
  out_vars.id7087out_output = id7087out_output;
  out_vars.id7084out_output = id7084out_output;
  out_vars.id7081out_output = id7081out_output;
  out_vars.id7078out_output = id7078out_output;
  out_vars.id7075out_output = id7075out_output;
  out_vars.id7072out_output = id7072out_output;
  out_vars.id7069out_output = id7069out_output;
  out_vars.id7066out_output = id7066out_output;
  out_vars.id7063out_output = id7063out_output;
  out_vars.id7060out_output = id7060out_output;
  out_vars.id7057out_output = id7057out_output;
  out_vars.id7054out_output = id7054out_output;
  out_vars.id7051out_output = id7051out_output;
  out_vars.id7048out_output = id7048out_output;
  out_vars.id7045out_output = id7045out_output;
  out_vars.id7042out_output = id7042out_output;
  out_vars.id7039out_output = id7039out_output;
  out_vars.id7036out_output = id7036out_output;
  out_vars.id7033out_output = id7033out_output;
  out_vars.id7030out_output = id7030out_output;
  out_vars.id7027out_output = id7027out_output;
  out_vars.id7024out_output = id7024out_output;
  out_vars.id7021out_output = id7021out_output;
  out_vars.id7018out_output = id7018out_output;
  out_vars.id7015out_output = id7015out_output;
  out_vars.id7012out_output = id7012out_output;
  out_vars.id7009out_output = id7009out_output;
  out_vars.id7006out_output = id7006out_output;
  out_vars.id7003out_output = id7003out_output;
  out_vars.id7000out_output = id7000out_output;
  out_vars.id6997out_output = id6997out_output;
  out_vars.id6994out_output = id6994out_output;
  out_vars.id6991out_output = id6991out_output;
  out_vars.id6988out_output = id6988out_output;
  out_vars.id6985out_output = id6985out_output;
  out_vars.id6982out_output = id6982out_output;
  out_vars.id6979out_output = id6979out_output;
  out_vars.id6976out_output = id6976out_output;
  out_vars.id6973out_output = id6973out_output;
  out_vars.id6970out_output = id6970out_output;
  out_vars.id6967out_output = id6967out_output;
  out_vars.id6964out_output = id6964out_output;
  out_vars.id6961out_output = id6961out_output;
  out_vars.id6958out_output = id6958out_output;
  out_vars.id6955out_output = id6955out_output;
  out_vars.id6952out_output = id6952out_output;
  out_vars.id6949out_output = id6949out_output;
  out_vars.id6946out_output = id6946out_output;
  out_vars.id6943out_output = id6943out_output;
  out_vars.id6940out_output = id6940out_output;
  out_vars.id6937out_output = id6937out_output;
  out_vars.id6934out_output = id6934out_output;
  out_vars.id6931out_output = id6931out_output;
  out_vars.id6928out_output = id6928out_output;
  out_vars.id6925out_output = id6925out_output;
  out_vars.id6922out_output = id6922out_output;
  out_vars.id6919out_output = id6919out_output;
  out_vars.id6916out_output = id6916out_output;
  out_vars.id6913out_output = id6913out_output;
  out_vars.id6910out_output = id6910out_output;
  out_vars.id6907out_output = id6907out_output;
  out_vars.id6904out_output = id6904out_output;
  out_vars.id6901out_output = id6901out_output;
  out_vars.id6898out_output = id6898out_output;
  out_vars.id6895out_output = id6895out_output;
  out_vars.id6892out_output = id6892out_output;
  out_vars.id6889out_output = id6889out_output;
  out_vars.id6886out_output = id6886out_output;
  out_vars.id6883out_output = id6883out_output;
  out_vars.id6880out_output = id6880out_output;
  out_vars.id6877out_output = id6877out_output;
  out_vars.id6874out_output = id6874out_output;
  out_vars.id6871out_output = id6871out_output;
  out_vars.id6868out_output = id6868out_output;
  out_vars.id6865out_output = id6865out_output;
  out_vars.id6862out_output = id6862out_output;
  out_vars.id6859out_output = id6859out_output;
  out_vars.id6856out_output = id6856out_output;
  out_vars.id6853out_output = id6853out_output;
  out_vars.id6850out_output = id6850out_output;
  out_vars.id6847out_output = id6847out_output;
  out_vars.id6844out_output = id6844out_output;
  out_vars.id6841out_output = id6841out_output;
  out_vars.id6838out_output = id6838out_output;
  out_vars.id6835out_output = id6835out_output;
  out_vars.id6832out_output = id6832out_output;
  out_vars.id6829out_output = id6829out_output;
  out_vars.id6826out_output = id6826out_output;
  out_vars.id6823out_output = id6823out_output;
  out_vars.id6820out_output = id6820out_output;
  out_vars.id6817out_output = id6817out_output;
  out_vars.id6814out_output = id6814out_output;
  out_vars.id6811out_output = id6811out_output;
  out_vars.id6808out_output = id6808out_output;
  out_vars.id6805out_output = id6805out_output;
  out_vars.id6802out_output = id6802out_output;
  out_vars.id6799out_output = id6799out_output;
  out_vars.id6796out_output = id6796out_output;
  out_vars.id6793out_output = id6793out_output;
  out_vars.id6790out_output = id6790out_output;
  out_vars.id6787out_output = id6787out_output;
  out_vars.id6784out_output = id6784out_output;
  out_vars.id6781out_output = id6781out_output;
  out_vars.id6778out_output = id6778out_output;
  out_vars.id6775out_output = id6775out_output;
  out_vars.id6772out_output = id6772out_output;
  out_vars.id6769out_output = id6769out_output;
  out_vars.id6766out_output = id6766out_output;
  out_vars.id6763out_output = id6763out_output;
  out_vars.id6760out_output = id6760out_output;
  out_vars.id6757out_output = id6757out_output;
  out_vars.id6754out_output = id6754out_output;
  out_vars.id6751out_output = id6751out_output;
  out_vars.id6748out_output = id6748out_output;
  out_vars.id6745out_output = id6745out_output;
  out_vars.id6742out_output = id6742out_output;
  out_vars.id6739out_output = id6739out_output;
  out_vars.id6736out_output = id6736out_output;
  out_vars.id6733out_output = id6733out_output;
  out_vars.id6730out_output = id6730out_output;
  out_vars.id6727out_output = id6727out_output;
  out_vars.id6724out_output = id6724out_output;
  out_vars.id6721out_output = id6721out_output;
  out_vars.id6718out_output = id6718out_output;
  out_vars.id6715out_output = id6715out_output;
  out_vars.id6712out_output = id6712out_output;
  out_vars.id6709out_output = id6709out_output;
  out_vars.id6706out_output = id6706out_output;
  out_vars.id6703out_output = id6703out_output;
  out_vars.id6700out_output = id6700out_output;
  out_vars.id6697out_output = id6697out_output;
  out_vars.id6694out_output = id6694out_output;
  out_vars.id6691out_output = id6691out_output;
  out_vars.id6688out_output = id6688out_output;
  out_vars.id6685out_output = id6685out_output;
  out_vars.id6682out_output = id6682out_output;
  out_vars.id6679out_output = id6679out_output;
  out_vars.id6676out_output = id6676out_output;
  out_vars.id6673out_output = id6673out_output;
  out_vars.id6670out_output = id6670out_output;
  out_vars.id6667out_output = id6667out_output;
  out_vars.id6664out_output = id6664out_output;
  out_vars.id6661out_output = id6661out_output;
  out_vars.id6658out_output = id6658out_output;
  out_vars.id6655out_output = id6655out_output;
  out_vars.id6652out_output = id6652out_output;
  out_vars.id6649out_output = id6649out_output;
  out_vars.id6646out_output = id6646out_output;
  out_vars.id6643out_output = id6643out_output;
  out_vars.id6640out_output = id6640out_output;
  out_vars.id6637out_output = id6637out_output;
  out_vars.id6634out_output = id6634out_output;
  out_vars.id6631out_output = id6631out_output;
  out_vars.id6628out_output = id6628out_output;
  out_vars.id6625out_output = id6625out_output;
  out_vars.id6622out_output = id6622out_output;
  out_vars.id6619out_output = id6619out_output;
  out_vars.id6616out_output = id6616out_output;
  out_vars.id6613out_output = id6613out_output;
  out_vars.id6610out_output = id6610out_output;
  out_vars.id6607out_output = id6607out_output;
  out_vars.id6604out_output = id6604out_output;
  out_vars.id6601out_output = id6601out_output;
  out_vars.id6598out_output = id6598out_output;
  out_vars.id6595out_output = id6595out_output;
  out_vars.id6592out_output = id6592out_output;
  out_vars.id6589out_output = id6589out_output;
  out_vars.id6586out_output = id6586out_output;
  out_vars.id6583out_output = id6583out_output;
  out_vars.id6580out_output = id6580out_output;
  out_vars.id6577out_output = id6577out_output;
  out_vars.id6574out_output = id6574out_output;
  out_vars.id6571out_output = id6571out_output;
  out_vars.id6568out_output = id6568out_output;
  out_vars.id6565out_output = id6565out_output;
  out_vars.id6562out_output = id6562out_output;
  out_vars.id6559out_output = id6559out_output;
  out_vars.id6556out_output = id6556out_output;
  out_vars.id6553out_output = id6553out_output;
  out_vars.id6550out_output = id6550out_output;
  out_vars.id6547out_output = id6547out_output;
  out_vars.id6544out_output = id6544out_output;
  out_vars.id6541out_output = id6541out_output;
  out_vars.id6538out_output = id6538out_output;
  out_vars.id6535out_output = id6535out_output;
  out_vars.id6532out_output = id6532out_output;
  out_vars.id6529out_output = id6529out_output;
  out_vars.id6526out_output = id6526out_output;
  out_vars.id6523out_output = id6523out_output;
  out_vars.id6520out_output = id6520out_output;
  out_vars.id6517out_output = id6517out_output;
  out_vars.id6514out_output = id6514out_output;
  out_vars.id6511out_output = id6511out_output;
  out_vars.id6508out_output = id6508out_output;
  out_vars.id6505out_output = id6505out_output;
  out_vars.id6502out_output = id6502out_output;
  out_vars.id6499out_output = id6499out_output;
  out_vars.id6496out_output = id6496out_output;
  out_vars.id6493out_output = id6493out_output;
  out_vars.id6490out_output = id6490out_output;
  out_vars.id6487out_output = id6487out_output;
  out_vars.id6484out_output = id6484out_output;
  return out_vars;
};

};
