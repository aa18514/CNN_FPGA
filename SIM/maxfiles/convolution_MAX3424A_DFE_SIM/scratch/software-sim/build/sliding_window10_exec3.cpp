#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window10_exec3.h"
//#include "sliding_window10_exec4.h"
//#include "sliding_window10.h"

namespace maxcompilersim {

sliding_window10Block4Vars sliding_window10::execute3(const sliding_window10Block3Vars &in_vars) {
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id468out_output;

  { // Node ID: 468 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id468in_input = id467out_result[getCycle()%2];

    id468out_output = id468in_input;
  }
  { // Node ID: 470 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id470in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id470in_option0 = in_vars.id469out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id470in_option1 = id468out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id470x_1;

    switch((id470in_sel.getValueAsLong())) {
      case 0l:
        id470x_1 = id470in_option0;
        break;
      case 1l:
        id470x_1 = id470in_option1;
        break;
      default:
        id470x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id470out_result[(getCycle()+1)%2] = (id470x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id471out_output;

  { // Node ID: 471 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id471in_input = id470out_result[getCycle()%2];

    id471out_output = id471in_input;
  }
  { // Node ID: 473 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id473in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id473in_option0 = in_vars.id472out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id473in_option1 = id471out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id473x_1;

    switch((id473in_sel.getValueAsLong())) {
      case 0l:
        id473x_1 = id473in_option0;
        break;
      case 1l:
        id473x_1 = id473in_option1;
        break;
      default:
        id473x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id473out_result[(getCycle()+1)%2] = (id473x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id474out_output;

  { // Node ID: 474 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id474in_input = id473out_result[getCycle()%2];

    id474out_output = id474in_input;
  }
  { // Node ID: 476 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id476in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id476in_option0 = in_vars.id475out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id476in_option1 = id474out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id476x_1;

    switch((id476in_sel.getValueAsLong())) {
      case 0l:
        id476x_1 = id476in_option0;
        break;
      case 1l:
        id476x_1 = id476in_option1;
        break;
      default:
        id476x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id476out_result[(getCycle()+1)%2] = (id476x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id477out_output;

  { // Node ID: 477 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id477in_input = id476out_result[getCycle()%2];

    id477out_output = id477in_input;
  }
  { // Node ID: 479 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id479in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id479in_option0 = in_vars.id478out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id479in_option1 = id477out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id479x_1;

    switch((id479in_sel.getValueAsLong())) {
      case 0l:
        id479x_1 = id479in_option0;
        break;
      case 1l:
        id479x_1 = id479in_option1;
        break;
      default:
        id479x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id479out_result[(getCycle()+1)%2] = (id479x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id480out_output;

  { // Node ID: 480 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id480in_input = id479out_result[getCycle()%2];

    id480out_output = id480in_input;
  }
  { // Node ID: 482 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id482in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id482in_option0 = in_vars.id481out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id482in_option1 = id480out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id482x_1;

    switch((id482in_sel.getValueAsLong())) {
      case 0l:
        id482x_1 = id482in_option0;
        break;
      case 1l:
        id482x_1 = id482in_option1;
        break;
      default:
        id482x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id482out_result[(getCycle()+1)%2] = (id482x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id483out_output;

  { // Node ID: 483 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id483in_input = id482out_result[getCycle()%2];

    id483out_output = id483in_input;
  }
  { // Node ID: 485 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id485in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id485in_option0 = in_vars.id484out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id485in_option1 = id483out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id485x_1;

    switch((id485in_sel.getValueAsLong())) {
      case 0l:
        id485x_1 = id485in_option0;
        break;
      case 1l:
        id485x_1 = id485in_option1;
        break;
      default:
        id485x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id485out_result[(getCycle()+1)%2] = (id485x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id486out_output;

  { // Node ID: 486 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id486in_input = id485out_result[getCycle()%2];

    id486out_output = id486in_input;
  }
  { // Node ID: 488 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id488in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id488in_option0 = in_vars.id487out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id488in_option1 = id486out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id488x_1;

    switch((id488in_sel.getValueAsLong())) {
      case 0l:
        id488x_1 = id488in_option0;
        break;
      case 1l:
        id488x_1 = id488in_option1;
        break;
      default:
        id488x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id488out_result[(getCycle()+1)%2] = (id488x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id489out_output;

  { // Node ID: 489 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id489in_input = id488out_result[getCycle()%2];

    id489out_output = id489in_input;
  }
  { // Node ID: 491 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id491in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id491in_option0 = in_vars.id490out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id491in_option1 = id489out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id491x_1;

    switch((id491in_sel.getValueAsLong())) {
      case 0l:
        id491x_1 = id491in_option0;
        break;
      case 1l:
        id491x_1 = id491in_option1;
        break;
      default:
        id491x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id491out_result[(getCycle()+1)%2] = (id491x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id492out_output;

  { // Node ID: 492 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id492in_input = id491out_result[getCycle()%2];

    id492out_output = id492in_input;
  }
  { // Node ID: 494 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id494in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id494in_option0 = in_vars.id493out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id494in_option1 = id492out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id494x_1;

    switch((id494in_sel.getValueAsLong())) {
      case 0l:
        id494x_1 = id494in_option0;
        break;
      case 1l:
        id494x_1 = id494in_option1;
        break;
      default:
        id494x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id494out_result[(getCycle()+1)%2] = (id494x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id495out_output;

  { // Node ID: 495 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id495in_input = id494out_result[getCycle()%2];

    id495out_output = id495in_input;
  }
  { // Node ID: 497 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id497in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id497in_option0 = in_vars.id496out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id497in_option1 = id495out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id497x_1;

    switch((id497in_sel.getValueAsLong())) {
      case 0l:
        id497x_1 = id497in_option0;
        break;
      case 1l:
        id497x_1 = id497in_option1;
        break;
      default:
        id497x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id497out_result[(getCycle()+1)%2] = (id497x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id498out_output;

  { // Node ID: 498 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id498in_input = id497out_result[getCycle()%2];

    id498out_output = id498in_input;
  }
  { // Node ID: 500 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id500in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id500in_option0 = in_vars.id499out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id500in_option1 = id498out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id500x_1;

    switch((id500in_sel.getValueAsLong())) {
      case 0l:
        id500x_1 = id500in_option0;
        break;
      case 1l:
        id500x_1 = id500in_option1;
        break;
      default:
        id500x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id500out_result[(getCycle()+1)%2] = (id500x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id501out_output;

  { // Node ID: 501 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id501in_input = id500out_result[getCycle()%2];

    id501out_output = id501in_input;
  }
  { // Node ID: 503 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id503in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id503in_option0 = in_vars.id502out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id503in_option1 = id501out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id503x_1;

    switch((id503in_sel.getValueAsLong())) {
      case 0l:
        id503x_1 = id503in_option0;
        break;
      case 1l:
        id503x_1 = id503in_option1;
        break;
      default:
        id503x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id503out_result[(getCycle()+1)%2] = (id503x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id504out_output;

  { // Node ID: 504 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id504in_input = id503out_result[getCycle()%2];

    id504out_output = id504in_input;
  }
  { // Node ID: 506 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id506in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id506in_option0 = in_vars.id505out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id506in_option1 = id504out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id506x_1;

    switch((id506in_sel.getValueAsLong())) {
      case 0l:
        id506x_1 = id506in_option0;
        break;
      case 1l:
        id506x_1 = id506in_option1;
        break;
      default:
        id506x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id506out_result[(getCycle()+1)%2] = (id506x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id507out_output;

  { // Node ID: 507 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id507in_input = id506out_result[getCycle()%2];

    id507out_output = id507in_input;
  }
  { // Node ID: 509 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id509in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id509in_option0 = in_vars.id508out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id509in_option1 = id507out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id509x_1;

    switch((id509in_sel.getValueAsLong())) {
      case 0l:
        id509x_1 = id509in_option0;
        break;
      case 1l:
        id509x_1 = id509in_option1;
        break;
      default:
        id509x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id509out_result[(getCycle()+1)%2] = (id509x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id510out_output;

  { // Node ID: 510 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id510in_input = id509out_result[getCycle()%2];

    id510out_output = id510in_input;
  }
  { // Node ID: 512 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id512in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id512in_option0 = in_vars.id511out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id512in_option1 = id510out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id512x_1;

    switch((id512in_sel.getValueAsLong())) {
      case 0l:
        id512x_1 = id512in_option0;
        break;
      case 1l:
        id512x_1 = id512in_option1;
        break;
      default:
        id512x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id512out_result[(getCycle()+1)%2] = (id512x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id513out_output;

  { // Node ID: 513 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id513in_input = id512out_result[getCycle()%2];

    id513out_output = id513in_input;
  }
  { // Node ID: 515 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id515in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id515in_option0 = in_vars.id514out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id515in_option1 = id513out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id515x_1;

    switch((id515in_sel.getValueAsLong())) {
      case 0l:
        id515x_1 = id515in_option0;
        break;
      case 1l:
        id515x_1 = id515in_option1;
        break;
      default:
        id515x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id515out_result[(getCycle()+1)%2] = (id515x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id516out_output;

  { // Node ID: 516 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id516in_input = id515out_result[getCycle()%2];

    id516out_output = id516in_input;
  }
  { // Node ID: 518 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id518in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id518in_option0 = in_vars.id517out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id518in_option1 = id516out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id518x_1;

    switch((id518in_sel.getValueAsLong())) {
      case 0l:
        id518x_1 = id518in_option0;
        break;
      case 1l:
        id518x_1 = id518in_option1;
        break;
      default:
        id518x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id518out_result[(getCycle()+1)%2] = (id518x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id519out_output;

  { // Node ID: 519 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id519in_input = id518out_result[getCycle()%2];

    id519out_output = id519in_input;
  }
  { // Node ID: 521 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id521in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id521in_option0 = in_vars.id520out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id521in_option1 = id519out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id521x_1;

    switch((id521in_sel.getValueAsLong())) {
      case 0l:
        id521x_1 = id521in_option0;
        break;
      case 1l:
        id521x_1 = id521in_option1;
        break;
      default:
        id521x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id521out_result[(getCycle()+1)%2] = (id521x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id522out_output;

  { // Node ID: 522 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id522in_input = id521out_result[getCycle()%2];

    id522out_output = id522in_input;
  }
  { // Node ID: 524 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id524in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id524in_option0 = in_vars.id523out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id524in_option1 = id522out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id524x_1;

    switch((id524in_sel.getValueAsLong())) {
      case 0l:
        id524x_1 = id524in_option0;
        break;
      case 1l:
        id524x_1 = id524in_option1;
        break;
      default:
        id524x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id524out_result[(getCycle()+1)%2] = (id524x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id525out_output;

  { // Node ID: 525 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id525in_input = id524out_result[getCycle()%2];

    id525out_output = id525in_input;
  }
  { // Node ID: 527 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id527in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id527in_option0 = in_vars.id526out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id527in_option1 = id525out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id527x_1;

    switch((id527in_sel.getValueAsLong())) {
      case 0l:
        id527x_1 = id527in_option0;
        break;
      case 1l:
        id527x_1 = id527in_option1;
        break;
      default:
        id527x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id527out_result[(getCycle()+1)%2] = (id527x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id528out_output;

  { // Node ID: 528 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id528in_input = id527out_result[getCycle()%2];

    id528out_output = id528in_input;
  }
  { // Node ID: 530 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id530in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id530in_option0 = in_vars.id529out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id530in_option1 = id528out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id530x_1;

    switch((id530in_sel.getValueAsLong())) {
      case 0l:
        id530x_1 = id530in_option0;
        break;
      case 1l:
        id530x_1 = id530in_option1;
        break;
      default:
        id530x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id530out_result[(getCycle()+1)%2] = (id530x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id531out_output;

  { // Node ID: 531 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id531in_input = id530out_result[getCycle()%2];

    id531out_output = id531in_input;
  }
  { // Node ID: 533 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id533in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id533in_option0 = in_vars.id532out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id533in_option1 = id531out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id533x_1;

    switch((id533in_sel.getValueAsLong())) {
      case 0l:
        id533x_1 = id533in_option0;
        break;
      case 1l:
        id533x_1 = id533in_option1;
        break;
      default:
        id533x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id533out_result[(getCycle()+1)%2] = (id533x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id534out_output;

  { // Node ID: 534 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id534in_input = id533out_result[getCycle()%2];

    id534out_output = id534in_input;
  }
  { // Node ID: 536 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id536in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id536in_option0 = in_vars.id535out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id536in_option1 = id534out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id536x_1;

    switch((id536in_sel.getValueAsLong())) {
      case 0l:
        id536x_1 = id536in_option0;
        break;
      case 1l:
        id536x_1 = id536in_option1;
        break;
      default:
        id536x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id536out_result[(getCycle()+1)%2] = (id536x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id537out_output;

  { // Node ID: 537 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id537in_input = id536out_result[getCycle()%2];

    id537out_output = id537in_input;
  }
  { // Node ID: 539 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id539in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id539in_option0 = in_vars.id538out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id539in_option1 = id537out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id539x_1;

    switch((id539in_sel.getValueAsLong())) {
      case 0l:
        id539x_1 = id539in_option0;
        break;
      case 1l:
        id539x_1 = id539in_option1;
        break;
      default:
        id539x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id539out_result[(getCycle()+1)%2] = (id539x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id540out_output;

  { // Node ID: 540 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id540in_input = id539out_result[getCycle()%2];

    id540out_output = id540in_input;
  }
  { // Node ID: 542 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id542in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id542in_option0 = in_vars.id541out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id542in_option1 = id540out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id542x_1;

    switch((id542in_sel.getValueAsLong())) {
      case 0l:
        id542x_1 = id542in_option0;
        break;
      case 1l:
        id542x_1 = id542in_option1;
        break;
      default:
        id542x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id542out_result[(getCycle()+1)%2] = (id542x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id543out_output;

  { // Node ID: 543 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id543in_input = id542out_result[getCycle()%2];

    id543out_output = id543in_input;
  }
  { // Node ID: 545 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id545in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id545in_option0 = in_vars.id544out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id545in_option1 = id543out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id545x_1;

    switch((id545in_sel.getValueAsLong())) {
      case 0l:
        id545x_1 = id545in_option0;
        break;
      case 1l:
        id545x_1 = id545in_option1;
        break;
      default:
        id545x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id545out_result[(getCycle()+1)%2] = (id545x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id546out_output;

  { // Node ID: 546 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id546in_input = id545out_result[getCycle()%2];

    id546out_output = id546in_input;
  }
  { // Node ID: 548 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id548in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id548in_option0 = in_vars.id547out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id548in_option1 = id546out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id548x_1;

    switch((id548in_sel.getValueAsLong())) {
      case 0l:
        id548x_1 = id548in_option0;
        break;
      case 1l:
        id548x_1 = id548in_option1;
        break;
      default:
        id548x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id548out_result[(getCycle()+1)%2] = (id548x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id549out_output;

  { // Node ID: 549 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id549in_input = id548out_result[getCycle()%2];

    id549out_output = id549in_input;
  }
  { // Node ID: 551 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id551in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id551in_option0 = in_vars.id550out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id551in_option1 = id549out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id551x_1;

    switch((id551in_sel.getValueAsLong())) {
      case 0l:
        id551x_1 = id551in_option0;
        break;
      case 1l:
        id551x_1 = id551in_option1;
        break;
      default:
        id551x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id551out_result[(getCycle()+1)%2] = (id551x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id552out_output;

  { // Node ID: 552 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id552in_input = id551out_result[getCycle()%2];

    id552out_output = id552in_input;
  }
  { // Node ID: 554 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id554in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id554in_option0 = in_vars.id553out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id554in_option1 = id552out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id554x_1;

    switch((id554in_sel.getValueAsLong())) {
      case 0l:
        id554x_1 = id554in_option0;
        break;
      case 1l:
        id554x_1 = id554in_option1;
        break;
      default:
        id554x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id554out_result[(getCycle()+1)%2] = (id554x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id555out_output;

  { // Node ID: 555 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id555in_input = id554out_result[getCycle()%2];

    id555out_output = id555in_input;
  }
  { // Node ID: 557 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id557in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id557in_option0 = in_vars.id556out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id557in_option1 = id555out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id557x_1;

    switch((id557in_sel.getValueAsLong())) {
      case 0l:
        id557x_1 = id557in_option0;
        break;
      case 1l:
        id557x_1 = id557in_option1;
        break;
      default:
        id557x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id557out_result[(getCycle()+1)%2] = (id557x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id558out_output;

  { // Node ID: 558 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id558in_input = id557out_result[getCycle()%2];

    id558out_output = id558in_input;
  }
  { // Node ID: 560 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id560in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id560in_option0 = in_vars.id559out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id560in_option1 = id558out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id560x_1;

    switch((id560in_sel.getValueAsLong())) {
      case 0l:
        id560x_1 = id560in_option0;
        break;
      case 1l:
        id560x_1 = id560in_option1;
        break;
      default:
        id560x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id560out_result[(getCycle()+1)%2] = (id560x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id561out_output;

  { // Node ID: 561 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id561in_input = id560out_result[getCycle()%2];

    id561out_output = id561in_input;
  }
  { // Node ID: 563 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id563in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id563in_option0 = in_vars.id562out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id563in_option1 = id561out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id563x_1;

    switch((id563in_sel.getValueAsLong())) {
      case 0l:
        id563x_1 = id563in_option0;
        break;
      case 1l:
        id563x_1 = id563in_option1;
        break;
      default:
        id563x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id563out_result[(getCycle()+1)%2] = (id563x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id564out_output;

  { // Node ID: 564 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id564in_input = id563out_result[getCycle()%2];

    id564out_output = id564in_input;
  }
  { // Node ID: 566 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id566in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id566in_option0 = in_vars.id565out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id566in_option1 = id564out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id566x_1;

    switch((id566in_sel.getValueAsLong())) {
      case 0l:
        id566x_1 = id566in_option0;
        break;
      case 1l:
        id566x_1 = id566in_option1;
        break;
      default:
        id566x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id566out_result[(getCycle()+1)%2] = (id566x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id567out_output;

  { // Node ID: 567 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id567in_input = id566out_result[getCycle()%2];

    id567out_output = id567in_input;
  }
  { // Node ID: 569 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id569in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id569in_option0 = in_vars.id568out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id569in_option1 = id567out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id569x_1;

    switch((id569in_sel.getValueAsLong())) {
      case 0l:
        id569x_1 = id569in_option0;
        break;
      case 1l:
        id569x_1 = id569in_option1;
        break;
      default:
        id569x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id569out_result[(getCycle()+1)%2] = (id569x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id570out_output;

  { // Node ID: 570 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id570in_input = id569out_result[getCycle()%2];

    id570out_output = id570in_input;
  }
  { // Node ID: 572 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id572in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id572in_option0 = in_vars.id571out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id572in_option1 = id570out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id572x_1;

    switch((id572in_sel.getValueAsLong())) {
      case 0l:
        id572x_1 = id572in_option0;
        break;
      case 1l:
        id572x_1 = id572in_option1;
        break;
      default:
        id572x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id572out_result[(getCycle()+1)%2] = (id572x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id573out_output;

  { // Node ID: 573 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id573in_input = id572out_result[getCycle()%2];

    id573out_output = id573in_input;
  }
  { // Node ID: 575 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id575in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id575in_option0 = in_vars.id574out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id575in_option1 = id573out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id575x_1;

    switch((id575in_sel.getValueAsLong())) {
      case 0l:
        id575x_1 = id575in_option0;
        break;
      case 1l:
        id575x_1 = id575in_option1;
        break;
      default:
        id575x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id575out_result[(getCycle()+1)%2] = (id575x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id576out_output;

  { // Node ID: 576 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id576in_input = id575out_result[getCycle()%2];

    id576out_output = id576in_input;
  }
  { // Node ID: 578 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id578in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id578in_option0 = in_vars.id577out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id578in_option1 = id576out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id578x_1;

    switch((id578in_sel.getValueAsLong())) {
      case 0l:
        id578x_1 = id578in_option0;
        break;
      case 1l:
        id578x_1 = id578in_option1;
        break;
      default:
        id578x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id578out_result[(getCycle()+1)%2] = (id578x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id579out_output;

  { // Node ID: 579 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id579in_input = id578out_result[getCycle()%2];

    id579out_output = id579in_input;
  }
  { // Node ID: 581 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id581in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id581in_option0 = in_vars.id580out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id581in_option1 = id579out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id581x_1;

    switch((id581in_sel.getValueAsLong())) {
      case 0l:
        id581x_1 = id581in_option0;
        break;
      case 1l:
        id581x_1 = id581in_option1;
        break;
      default:
        id581x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id581out_result[(getCycle()+1)%2] = (id581x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id582out_output;

  { // Node ID: 582 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id582in_input = id581out_result[getCycle()%2];

    id582out_output = id582in_input;
  }
  { // Node ID: 584 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id584in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id584in_option0 = in_vars.id583out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id584in_option1 = id582out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id584x_1;

    switch((id584in_sel.getValueAsLong())) {
      case 0l:
        id584x_1 = id584in_option0;
        break;
      case 1l:
        id584x_1 = id584in_option1;
        break;
      default:
        id584x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id584out_result[(getCycle()+1)%2] = (id584x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id585out_output;

  { // Node ID: 585 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id585in_input = id584out_result[getCycle()%2];

    id585out_output = id585in_input;
  }
  { // Node ID: 587 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id587in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id587in_option0 = in_vars.id586out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id587in_option1 = id585out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id587x_1;

    switch((id587in_sel.getValueAsLong())) {
      case 0l:
        id587x_1 = id587in_option0;
        break;
      case 1l:
        id587x_1 = id587in_option1;
        break;
      default:
        id587x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id587out_result[(getCycle()+1)%2] = (id587x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id588out_output;

  { // Node ID: 588 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id588in_input = id587out_result[getCycle()%2];

    id588out_output = id588in_input;
  }
  { // Node ID: 590 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id590in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id590in_option0 = in_vars.id589out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id590in_option1 = id588out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id590x_1;

    switch((id590in_sel.getValueAsLong())) {
      case 0l:
        id590x_1 = id590in_option0;
        break;
      case 1l:
        id590x_1 = id590in_option1;
        break;
      default:
        id590x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id590out_result[(getCycle()+1)%2] = (id590x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id591out_output;

  { // Node ID: 591 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id591in_input = id590out_result[getCycle()%2];

    id591out_output = id591in_input;
  }
  { // Node ID: 593 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id593in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id593in_option0 = in_vars.id592out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id593in_option1 = id591out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id593x_1;

    switch((id593in_sel.getValueAsLong())) {
      case 0l:
        id593x_1 = id593in_option0;
        break;
      case 1l:
        id593x_1 = id593in_option1;
        break;
      default:
        id593x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id593out_result[(getCycle()+1)%2] = (id593x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id594out_output;

  { // Node ID: 594 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id594in_input = id593out_result[getCycle()%2];

    id594out_output = id594in_input;
  }
  { // Node ID: 596 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id596in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id596in_option0 = in_vars.id595out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id596in_option1 = id594out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id596x_1;

    switch((id596in_sel.getValueAsLong())) {
      case 0l:
        id596x_1 = id596in_option0;
        break;
      case 1l:
        id596x_1 = id596in_option1;
        break;
      default:
        id596x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id596out_result[(getCycle()+1)%2] = (id596x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id597out_output;

  { // Node ID: 597 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id597in_input = id596out_result[getCycle()%2];

    id597out_output = id597in_input;
  }
  { // Node ID: 599 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id599in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id599in_option0 = in_vars.id598out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id599in_option1 = id597out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id599x_1;

    switch((id599in_sel.getValueAsLong())) {
      case 0l:
        id599x_1 = id599in_option0;
        break;
      case 1l:
        id599x_1 = id599in_option1;
        break;
      default:
        id599x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id599out_result[(getCycle()+1)%2] = (id599x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id600out_output;

  { // Node ID: 600 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id600in_input = id599out_result[getCycle()%2];

    id600out_output = id600in_input;
  }
  { // Node ID: 602 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id602in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id602in_option0 = in_vars.id601out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id602in_option1 = id600out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id602x_1;

    switch((id602in_sel.getValueAsLong())) {
      case 0l:
        id602x_1 = id602in_option0;
        break;
      case 1l:
        id602x_1 = id602in_option1;
        break;
      default:
        id602x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id602out_result[(getCycle()+1)%2] = (id602x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id603out_output;

  { // Node ID: 603 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id603in_input = id602out_result[getCycle()%2];

    id603out_output = id603in_input;
  }
  { // Node ID: 605 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id605in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id605in_option0 = in_vars.id604out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id605in_option1 = id603out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id605x_1;

    switch((id605in_sel.getValueAsLong())) {
      case 0l:
        id605x_1 = id605in_option0;
        break;
      case 1l:
        id605x_1 = id605in_option1;
        break;
      default:
        id605x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id605out_result[(getCycle()+1)%2] = (id605x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id606out_output;

  { // Node ID: 606 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id606in_input = id605out_result[getCycle()%2];

    id606out_output = id606in_input;
  }
  { // Node ID: 608 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id608in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id608in_option0 = in_vars.id607out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id608in_option1 = id606out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id608x_1;

    switch((id608in_sel.getValueAsLong())) {
      case 0l:
        id608x_1 = id608in_option0;
        break;
      case 1l:
        id608x_1 = id608in_option1;
        break;
      default:
        id608x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id608out_result[(getCycle()+1)%2] = (id608x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id609out_output;

  { // Node ID: 609 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id609in_input = id608out_result[getCycle()%2];

    id609out_output = id609in_input;
  }
  { // Node ID: 611 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id611in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id611in_option0 = in_vars.id610out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id611in_option1 = id609out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id611x_1;

    switch((id611in_sel.getValueAsLong())) {
      case 0l:
        id611x_1 = id611in_option0;
        break;
      case 1l:
        id611x_1 = id611in_option1;
        break;
      default:
        id611x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id611out_result[(getCycle()+1)%2] = (id611x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id612out_output;

  { // Node ID: 612 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id612in_input = id611out_result[getCycle()%2];

    id612out_output = id612in_input;
  }
  { // Node ID: 614 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id614in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id614in_option0 = in_vars.id613out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id614in_option1 = id612out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id614x_1;

    switch((id614in_sel.getValueAsLong())) {
      case 0l:
        id614x_1 = id614in_option0;
        break;
      case 1l:
        id614x_1 = id614in_option1;
        break;
      default:
        id614x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id614out_result[(getCycle()+1)%2] = (id614x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id615out_output;

  { // Node ID: 615 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id615in_input = id614out_result[getCycle()%2];

    id615out_output = id615in_input;
  }
  { // Node ID: 617 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id617in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id617in_option0 = in_vars.id616out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id617in_option1 = id615out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id617x_1;

    switch((id617in_sel.getValueAsLong())) {
      case 0l:
        id617x_1 = id617in_option0;
        break;
      case 1l:
        id617x_1 = id617in_option1;
        break;
      default:
        id617x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id617out_result[(getCycle()+1)%2] = (id617x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id618out_output;

  { // Node ID: 618 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id618in_input = id617out_result[getCycle()%2];

    id618out_output = id618in_input;
  }
  { // Node ID: 620 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id620in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id620in_option0 = in_vars.id619out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id620in_option1 = id618out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id620x_1;

    switch((id620in_sel.getValueAsLong())) {
      case 0l:
        id620x_1 = id620in_option0;
        break;
      case 1l:
        id620x_1 = id620in_option1;
        break;
      default:
        id620x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id620out_result[(getCycle()+1)%2] = (id620x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id621out_output;

  { // Node ID: 621 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id621in_input = id620out_result[getCycle()%2];

    id621out_output = id621in_input;
  }
  { // Node ID: 623 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id623in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id623in_option0 = in_vars.id622out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id623in_option1 = id621out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id623x_1;

    switch((id623in_sel.getValueAsLong())) {
      case 0l:
        id623x_1 = id623in_option0;
        break;
      case 1l:
        id623x_1 = id623in_option1;
        break;
      default:
        id623x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id623out_result[(getCycle()+1)%2] = (id623x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id624out_output;

  { // Node ID: 624 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id624in_input = id623out_result[getCycle()%2];

    id624out_output = id624in_input;
  }
  { // Node ID: 626 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id626in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id626in_option0 = in_vars.id625out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id626in_option1 = id624out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id626x_1;

    switch((id626in_sel.getValueAsLong())) {
      case 0l:
        id626x_1 = id626in_option0;
        break;
      case 1l:
        id626x_1 = id626in_option1;
        break;
      default:
        id626x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id626out_result[(getCycle()+1)%2] = (id626x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id627out_output;

  { // Node ID: 627 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id627in_input = id626out_result[getCycle()%2];

    id627out_output = id627in_input;
  }
  { // Node ID: 629 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id629in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id629in_option0 = in_vars.id628out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id629in_option1 = id627out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id629x_1;

    switch((id629in_sel.getValueAsLong())) {
      case 0l:
        id629x_1 = id629in_option0;
        break;
      case 1l:
        id629x_1 = id629in_option1;
        break;
      default:
        id629x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id629out_result[(getCycle()+1)%2] = (id629x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id630out_output;

  { // Node ID: 630 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id630in_input = id629out_result[getCycle()%2];

    id630out_output = id630in_input;
  }
  { // Node ID: 632 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id632in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id632in_option0 = in_vars.id631out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id632in_option1 = id630out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id632x_1;

    switch((id632in_sel.getValueAsLong())) {
      case 0l:
        id632x_1 = id632in_option0;
        break;
      case 1l:
        id632x_1 = id632in_option1;
        break;
      default:
        id632x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id632out_result[(getCycle()+1)%2] = (id632x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id633out_output;

  { // Node ID: 633 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id633in_input = id632out_result[getCycle()%2];

    id633out_output = id633in_input;
  }
  { // Node ID: 635 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id635in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id635in_option0 = in_vars.id634out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id635in_option1 = id633out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id635x_1;

    switch((id635in_sel.getValueAsLong())) {
      case 0l:
        id635x_1 = id635in_option0;
        break;
      case 1l:
        id635x_1 = id635in_option1;
        break;
      default:
        id635x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id635out_result[(getCycle()+1)%2] = (id635x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id636out_output;

  { // Node ID: 636 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id636in_input = id635out_result[getCycle()%2];

    id636out_output = id636in_input;
  }
  { // Node ID: 638 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id638in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id638in_option0 = in_vars.id637out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id638in_option1 = id636out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id638x_1;

    switch((id638in_sel.getValueAsLong())) {
      case 0l:
        id638x_1 = id638in_option0;
        break;
      case 1l:
        id638x_1 = id638in_option1;
        break;
      default:
        id638x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id638out_result[(getCycle()+1)%2] = (id638x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id639out_output;

  { // Node ID: 639 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id639in_input = id638out_result[getCycle()%2];

    id639out_output = id639in_input;
  }
  { // Node ID: 641 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id641in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id641in_option0 = in_vars.id640out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id641in_option1 = id639out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id641x_1;

    switch((id641in_sel.getValueAsLong())) {
      case 0l:
        id641x_1 = id641in_option0;
        break;
      case 1l:
        id641x_1 = id641in_option1;
        break;
      default:
        id641x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id641out_result[(getCycle()+1)%2] = (id641x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id642out_output;

  { // Node ID: 642 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id642in_input = id641out_result[getCycle()%2];

    id642out_output = id642in_input;
  }
  { // Node ID: 644 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id644in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id644in_option0 = in_vars.id643out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id644in_option1 = id642out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id644x_1;

    switch((id644in_sel.getValueAsLong())) {
      case 0l:
        id644x_1 = id644in_option0;
        break;
      case 1l:
        id644x_1 = id644in_option1;
        break;
      default:
        id644x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id644out_result[(getCycle()+1)%2] = (id644x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id645out_output;

  { // Node ID: 645 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id645in_input = id644out_result[getCycle()%2];

    id645out_output = id645in_input;
  }
  { // Node ID: 647 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id647in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id647in_option0 = in_vars.id646out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id647in_option1 = id645out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id647x_1;

    switch((id647in_sel.getValueAsLong())) {
      case 0l:
        id647x_1 = id647in_option0;
        break;
      case 1l:
        id647x_1 = id647in_option1;
        break;
      default:
        id647x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id647out_result[(getCycle()+1)%2] = (id647x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id648out_output;

  { // Node ID: 648 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id648in_input = id647out_result[getCycle()%2];

    id648out_output = id648in_input;
  }
  { // Node ID: 650 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id650in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id650in_option0 = in_vars.id649out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id650in_option1 = id648out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id650x_1;

    switch((id650in_sel.getValueAsLong())) {
      case 0l:
        id650x_1 = id650in_option0;
        break;
      case 1l:
        id650x_1 = id650in_option1;
        break;
      default:
        id650x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id650out_result[(getCycle()+1)%2] = (id650x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id651out_output;

  { // Node ID: 651 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id651in_input = id650out_result[getCycle()%2];

    id651out_output = id651in_input;
  }
  { // Node ID: 653 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id653in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id653in_option0 = in_vars.id652out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id653in_option1 = id651out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id653x_1;

    switch((id653in_sel.getValueAsLong())) {
      case 0l:
        id653x_1 = id653in_option0;
        break;
      case 1l:
        id653x_1 = id653in_option1;
        break;
      default:
        id653x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id653out_result[(getCycle()+1)%2] = (id653x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id654out_output;

  { // Node ID: 654 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id654in_input = id653out_result[getCycle()%2];

    id654out_output = id654in_input;
  }
  { // Node ID: 656 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id656in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id656in_option0 = in_vars.id655out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id656in_option1 = id654out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id656x_1;

    switch((id656in_sel.getValueAsLong())) {
      case 0l:
        id656x_1 = id656in_option0;
        break;
      case 1l:
        id656x_1 = id656in_option1;
        break;
      default:
        id656x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id656out_result[(getCycle()+1)%2] = (id656x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id657out_output;

  { // Node ID: 657 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id657in_input = id656out_result[getCycle()%2];

    id657out_output = id657in_input;
  }
  { // Node ID: 659 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id659in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id659in_option0 = in_vars.id658out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id659in_option1 = id657out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id659x_1;

    switch((id659in_sel.getValueAsLong())) {
      case 0l:
        id659x_1 = id659in_option0;
        break;
      case 1l:
        id659x_1 = id659in_option1;
        break;
      default:
        id659x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id659out_result[(getCycle()+1)%2] = (id659x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id660out_output;

  { // Node ID: 660 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id660in_input = id659out_result[getCycle()%2];

    id660out_output = id660in_input;
  }
  { // Node ID: 662 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id662in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id662in_option0 = in_vars.id661out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id662in_option1 = id660out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id662x_1;

    switch((id662in_sel.getValueAsLong())) {
      case 0l:
        id662x_1 = id662in_option0;
        break;
      case 1l:
        id662x_1 = id662in_option1;
        break;
      default:
        id662x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id662out_result[(getCycle()+1)%2] = (id662x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id663out_output;

  { // Node ID: 663 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id663in_input = id662out_result[getCycle()%2];

    id663out_output = id663in_input;
  }
  { // Node ID: 665 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id665in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id665in_option0 = in_vars.id664out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id665in_option1 = id663out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id665x_1;

    switch((id665in_sel.getValueAsLong())) {
      case 0l:
        id665x_1 = id665in_option0;
        break;
      case 1l:
        id665x_1 = id665in_option1;
        break;
      default:
        id665x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id665out_result[(getCycle()+1)%2] = (id665x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id666out_output;

  { // Node ID: 666 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id666in_input = id665out_result[getCycle()%2];

    id666out_output = id666in_input;
  }
  { // Node ID: 668 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id668in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id668in_option0 = in_vars.id667out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id668in_option1 = id666out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id668x_1;

    switch((id668in_sel.getValueAsLong())) {
      case 0l:
        id668x_1 = id668in_option0;
        break;
      case 1l:
        id668x_1 = id668in_option1;
        break;
      default:
        id668x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id668out_result[(getCycle()+1)%2] = (id668x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id669out_output;

  { // Node ID: 669 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id669in_input = id668out_result[getCycle()%2];

    id669out_output = id669in_input;
  }
  { // Node ID: 671 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id671in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id671in_option0 = in_vars.id670out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id671in_option1 = id669out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id671x_1;

    switch((id671in_sel.getValueAsLong())) {
      case 0l:
        id671x_1 = id671in_option0;
        break;
      case 1l:
        id671x_1 = id671in_option1;
        break;
      default:
        id671x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id671out_result[(getCycle()+1)%2] = (id671x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id672out_output;

  { // Node ID: 672 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id672in_input = id671out_result[getCycle()%2];

    id672out_output = id672in_input;
  }
  { // Node ID: 674 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id674in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id674in_option0 = in_vars.id673out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id674in_option1 = id672out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id674x_1;

    switch((id674in_sel.getValueAsLong())) {
      case 0l:
        id674x_1 = id674in_option0;
        break;
      case 1l:
        id674x_1 = id674in_option1;
        break;
      default:
        id674x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id674out_result[(getCycle()+1)%2] = (id674x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id675out_output;

  { // Node ID: 675 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id675in_input = id674out_result[getCycle()%2];

    id675out_output = id675in_input;
  }
  { // Node ID: 677 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id677in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id677in_option0 = in_vars.id676out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id677in_option1 = id675out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id677x_1;

    switch((id677in_sel.getValueAsLong())) {
      case 0l:
        id677x_1 = id677in_option0;
        break;
      case 1l:
        id677x_1 = id677in_option1;
        break;
      default:
        id677x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id677out_result[(getCycle()+1)%2] = (id677x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id678out_output;

  { // Node ID: 678 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id678in_input = id677out_result[getCycle()%2];

    id678out_output = id678in_input;
  }
  { // Node ID: 680 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id680in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id680in_option0 = in_vars.id679out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id680in_option1 = id678out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id680x_1;

    switch((id680in_sel.getValueAsLong())) {
      case 0l:
        id680x_1 = id680in_option0;
        break;
      case 1l:
        id680x_1 = id680in_option1;
        break;
      default:
        id680x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id680out_result[(getCycle()+1)%2] = (id680x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id681out_output;

  { // Node ID: 681 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id681in_input = id680out_result[getCycle()%2];

    id681out_output = id681in_input;
  }
  { // Node ID: 683 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id683in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id683in_option0 = in_vars.id682out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id683in_option1 = id681out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id683x_1;

    switch((id683in_sel.getValueAsLong())) {
      case 0l:
        id683x_1 = id683in_option0;
        break;
      case 1l:
        id683x_1 = id683in_option1;
        break;
      default:
        id683x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id683out_result[(getCycle()+1)%2] = (id683x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id684out_output;

  { // Node ID: 684 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id684in_input = id683out_result[getCycle()%2];

    id684out_output = id684in_input;
  }
  { // Node ID: 686 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id686in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id686in_option0 = in_vars.id685out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id686in_option1 = id684out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id686x_1;

    switch((id686in_sel.getValueAsLong())) {
      case 0l:
        id686x_1 = id686in_option0;
        break;
      case 1l:
        id686x_1 = id686in_option1;
        break;
      default:
        id686x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id686out_result[(getCycle()+1)%2] = (id686x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id687out_output;

  { // Node ID: 687 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id687in_input = id686out_result[getCycle()%2];

    id687out_output = id687in_input;
  }
  { // Node ID: 689 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id689in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id689in_option0 = in_vars.id688out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id689in_option1 = id687out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id689x_1;

    switch((id689in_sel.getValueAsLong())) {
      case 0l:
        id689x_1 = id689in_option0;
        break;
      case 1l:
        id689x_1 = id689in_option1;
        break;
      default:
        id689x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id689out_result[(getCycle()+1)%2] = (id689x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id690out_output;

  { // Node ID: 690 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id690in_input = id689out_result[getCycle()%2];

    id690out_output = id690in_input;
  }
  { // Node ID: 692 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id692in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id692in_option0 = in_vars.id691out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id692in_option1 = id690out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id692x_1;

    switch((id692in_sel.getValueAsLong())) {
      case 0l:
        id692x_1 = id692in_option0;
        break;
      case 1l:
        id692x_1 = id692in_option1;
        break;
      default:
        id692x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id692out_result[(getCycle()+1)%2] = (id692x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id693out_output;

  { // Node ID: 693 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id693in_input = id692out_result[getCycle()%2];

    id693out_output = id693in_input;
  }
  { // Node ID: 695 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id695in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id695in_option0 = in_vars.id694out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id695in_option1 = id693out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id695x_1;

    switch((id695in_sel.getValueAsLong())) {
      case 0l:
        id695x_1 = id695in_option0;
        break;
      case 1l:
        id695x_1 = id695in_option1;
        break;
      default:
        id695x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id695out_result[(getCycle()+1)%2] = (id695x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id696out_output;

  { // Node ID: 696 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id696in_input = id695out_result[getCycle()%2];

    id696out_output = id696in_input;
  }
  { // Node ID: 698 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id698in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id698in_option0 = in_vars.id697out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id698in_option1 = id696out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id698x_1;

    switch((id698in_sel.getValueAsLong())) {
      case 0l:
        id698x_1 = id698in_option0;
        break;
      case 1l:
        id698x_1 = id698in_option1;
        break;
      default:
        id698x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id698out_result[(getCycle()+1)%2] = (id698x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id699out_output;

  { // Node ID: 699 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id699in_input = id698out_result[getCycle()%2];

    id699out_output = id699in_input;
  }
  { // Node ID: 701 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id701in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id701in_option0 = in_vars.id700out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id701in_option1 = id699out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id701x_1;

    switch((id701in_sel.getValueAsLong())) {
      case 0l:
        id701x_1 = id701in_option0;
        break;
      case 1l:
        id701x_1 = id701in_option1;
        break;
      default:
        id701x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id701out_result[(getCycle()+1)%2] = (id701x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id702out_output;

  { // Node ID: 702 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id702in_input = id701out_result[getCycle()%2];

    id702out_output = id702in_input;
  }
  { // Node ID: 704 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id704in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id704in_option0 = in_vars.id703out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id704in_option1 = id702out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id704x_1;

    switch((id704in_sel.getValueAsLong())) {
      case 0l:
        id704x_1 = id704in_option0;
        break;
      case 1l:
        id704x_1 = id704in_option1;
        break;
      default:
        id704x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id704out_result[(getCycle()+1)%2] = (id704x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id705out_output;

  { // Node ID: 705 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id705in_input = id704out_result[getCycle()%2];

    id705out_output = id705in_input;
  }
  { // Node ID: 707 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id707in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id707in_option0 = in_vars.id706out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id707in_option1 = id705out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id707x_1;

    switch((id707in_sel.getValueAsLong())) {
      case 0l:
        id707x_1 = id707in_option0;
        break;
      case 1l:
        id707x_1 = id707in_option1;
        break;
      default:
        id707x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id707out_result[(getCycle()+1)%2] = (id707x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id708out_output;

  { // Node ID: 708 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id708in_input = id707out_result[getCycle()%2];

    id708out_output = id708in_input;
  }
  { // Node ID: 710 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id710in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id710in_option0 = in_vars.id709out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id710in_option1 = id708out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id710x_1;

    switch((id710in_sel.getValueAsLong())) {
      case 0l:
        id710x_1 = id710in_option0;
        break;
      case 1l:
        id710x_1 = id710in_option1;
        break;
      default:
        id710x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id710out_result[(getCycle()+1)%2] = (id710x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id711out_output;

  { // Node ID: 711 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id711in_input = id710out_result[getCycle()%2];

    id711out_output = id711in_input;
  }
  { // Node ID: 713 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id713in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id713in_option0 = in_vars.id712out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id713in_option1 = id711out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id713x_1;

    switch((id713in_sel.getValueAsLong())) {
      case 0l:
        id713x_1 = id713in_option0;
        break;
      case 1l:
        id713x_1 = id713in_option1;
        break;
      default:
        id713x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id713out_result[(getCycle()+1)%2] = (id713x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id714out_output;

  { // Node ID: 714 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id714in_input = id713out_result[getCycle()%2];

    id714out_output = id714in_input;
  }
  { // Node ID: 716 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id716in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id716in_option0 = in_vars.id715out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id716in_option1 = id714out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id716x_1;

    switch((id716in_sel.getValueAsLong())) {
      case 0l:
        id716x_1 = id716in_option0;
        break;
      case 1l:
        id716x_1 = id716in_option1;
        break;
      default:
        id716x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id716out_result[(getCycle()+1)%2] = (id716x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id717out_output;

  { // Node ID: 717 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id717in_input = id716out_result[getCycle()%2];

    id717out_output = id717in_input;
  }
  { // Node ID: 719 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id719in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id719in_option0 = in_vars.id718out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id719in_option1 = id717out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id719x_1;

    switch((id719in_sel.getValueAsLong())) {
      case 0l:
        id719x_1 = id719in_option0;
        break;
      case 1l:
        id719x_1 = id719in_option1;
        break;
      default:
        id719x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id719out_result[(getCycle()+1)%2] = (id719x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id720out_output;

  { // Node ID: 720 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id720in_input = id719out_result[getCycle()%2];

    id720out_output = id720in_input;
  }
  { // Node ID: 722 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id722in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id722in_option0 = in_vars.id721out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id722in_option1 = id720out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id722x_1;

    switch((id722in_sel.getValueAsLong())) {
      case 0l:
        id722x_1 = id722in_option0;
        break;
      case 1l:
        id722x_1 = id722in_option1;
        break;
      default:
        id722x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id722out_result[(getCycle()+1)%2] = (id722x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id723out_output;

  { // Node ID: 723 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id723in_input = id722out_result[getCycle()%2];

    id723out_output = id723in_input;
  }
  { // Node ID: 725 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id725in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id725in_option0 = in_vars.id724out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id725in_option1 = id723out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id725x_1;

    switch((id725in_sel.getValueAsLong())) {
      case 0l:
        id725x_1 = id725in_option0;
        break;
      case 1l:
        id725x_1 = id725in_option1;
        break;
      default:
        id725x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id725out_result[(getCycle()+1)%2] = (id725x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id726out_output;

  { // Node ID: 726 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id726in_input = id725out_result[getCycle()%2];

    id726out_output = id726in_input;
  }
  { // Node ID: 728 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id728in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id728in_option0 = in_vars.id727out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id728in_option1 = id726out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id728x_1;

    switch((id728in_sel.getValueAsLong())) {
      case 0l:
        id728x_1 = id728in_option0;
        break;
      case 1l:
        id728x_1 = id728in_option1;
        break;
      default:
        id728x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id728out_result[(getCycle()+1)%2] = (id728x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id729out_output;

  { // Node ID: 729 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id729in_input = id728out_result[getCycle()%2];

    id729out_output = id729in_input;
  }
  { // Node ID: 731 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id731in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id731in_option0 = in_vars.id730out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id731in_option1 = id729out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id731x_1;

    switch((id731in_sel.getValueAsLong())) {
      case 0l:
        id731x_1 = id731in_option0;
        break;
      case 1l:
        id731x_1 = id731in_option1;
        break;
      default:
        id731x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id731out_result[(getCycle()+1)%2] = (id731x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id732out_output;

  { // Node ID: 732 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id732in_input = id731out_result[getCycle()%2];

    id732out_output = id732in_input;
  }
  { // Node ID: 734 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id734in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id734in_option0 = in_vars.id733out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id734in_option1 = id732out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id734x_1;

    switch((id734in_sel.getValueAsLong())) {
      case 0l:
        id734x_1 = id734in_option0;
        break;
      case 1l:
        id734x_1 = id734in_option1;
        break;
      default:
        id734x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id734out_result[(getCycle()+1)%2] = (id734x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id735out_output;

  { // Node ID: 735 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id735in_input = id734out_result[getCycle()%2];

    id735out_output = id735in_input;
  }
  { // Node ID: 737 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id737in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id737in_option0 = in_vars.id736out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id737in_option1 = id735out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id737x_1;

    switch((id737in_sel.getValueAsLong())) {
      case 0l:
        id737x_1 = id737in_option0;
        break;
      case 1l:
        id737x_1 = id737in_option1;
        break;
      default:
        id737x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id737out_result[(getCycle()+1)%2] = (id737x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id738out_output;

  { // Node ID: 738 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id738in_input = id737out_result[getCycle()%2];

    id738out_output = id738in_input;
  }
  { // Node ID: 740 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id740in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id740in_option0 = in_vars.id739out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id740in_option1 = id738out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id740x_1;

    switch((id740in_sel.getValueAsLong())) {
      case 0l:
        id740x_1 = id740in_option0;
        break;
      case 1l:
        id740x_1 = id740in_option1;
        break;
      default:
        id740x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id740out_result[(getCycle()+1)%2] = (id740x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id741out_output;

  { // Node ID: 741 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id741in_input = id740out_result[getCycle()%2];

    id741out_output = id741in_input;
  }
  { // Node ID: 743 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id743in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id743in_option0 = in_vars.id742out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id743in_option1 = id741out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id743x_1;

    switch((id743in_sel.getValueAsLong())) {
      case 0l:
        id743x_1 = id743in_option0;
        break;
      case 1l:
        id743x_1 = id743in_option1;
        break;
      default:
        id743x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id743out_result[(getCycle()+1)%2] = (id743x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id744out_output;

  { // Node ID: 744 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id744in_input = id743out_result[getCycle()%2];

    id744out_output = id744in_input;
  }
  { // Node ID: 746 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id746in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id746in_option0 = in_vars.id745out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id746in_option1 = id744out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id746x_1;

    switch((id746in_sel.getValueAsLong())) {
      case 0l:
        id746x_1 = id746in_option0;
        break;
      case 1l:
        id746x_1 = id746in_option1;
        break;
      default:
        id746x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id746out_result[(getCycle()+1)%2] = (id746x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id747out_output;

  { // Node ID: 747 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id747in_input = id746out_result[getCycle()%2];

    id747out_output = id747in_input;
  }
  { // Node ID: 749 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id749in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id749in_option0 = in_vars.id748out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id749in_option1 = id747out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id749x_1;

    switch((id749in_sel.getValueAsLong())) {
      case 0l:
        id749x_1 = id749in_option0;
        break;
      case 1l:
        id749x_1 = id749in_option1;
        break;
      default:
        id749x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id749out_result[(getCycle()+1)%2] = (id749x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id750out_output;

  { // Node ID: 750 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id750in_input = id749out_result[getCycle()%2];

    id750out_output = id750in_input;
  }
  { // Node ID: 752 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id752in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id752in_option0 = in_vars.id751out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id752in_option1 = id750out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id752x_1;

    switch((id752in_sel.getValueAsLong())) {
      case 0l:
        id752x_1 = id752in_option0;
        break;
      case 1l:
        id752x_1 = id752in_option1;
        break;
      default:
        id752x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id752out_result[(getCycle()+1)%2] = (id752x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id753out_output;

  { // Node ID: 753 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id753in_input = id752out_result[getCycle()%2];

    id753out_output = id753in_input;
  }
  { // Node ID: 755 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id755in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id755in_option0 = in_vars.id754out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id755in_option1 = id753out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id755x_1;

    switch((id755in_sel.getValueAsLong())) {
      case 0l:
        id755x_1 = id755in_option0;
        break;
      case 1l:
        id755x_1 = id755in_option1;
        break;
      default:
        id755x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id755out_result[(getCycle()+1)%2] = (id755x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id756out_output;

  { // Node ID: 756 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id756in_input = id755out_result[getCycle()%2];

    id756out_output = id756in_input;
  }
  { // Node ID: 758 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id758in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id758in_option0 = in_vars.id757out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id758in_option1 = id756out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id758x_1;

    switch((id758in_sel.getValueAsLong())) {
      case 0l:
        id758x_1 = id758in_option0;
        break;
      case 1l:
        id758x_1 = id758in_option1;
        break;
      default:
        id758x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id758out_result[(getCycle()+1)%2] = (id758x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id759out_output;

  { // Node ID: 759 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id759in_input = id758out_result[getCycle()%2];

    id759out_output = id759in_input;
  }
  { // Node ID: 761 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id761in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id761in_option0 = in_vars.id760out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id761in_option1 = id759out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id761x_1;

    switch((id761in_sel.getValueAsLong())) {
      case 0l:
        id761x_1 = id761in_option0;
        break;
      case 1l:
        id761x_1 = id761in_option1;
        break;
      default:
        id761x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id761out_result[(getCycle()+1)%2] = (id761x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id762out_output;

  { // Node ID: 762 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id762in_input = id761out_result[getCycle()%2];

    id762out_output = id762in_input;
  }
  { // Node ID: 764 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id764in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id764in_option0 = in_vars.id763out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id764in_option1 = id762out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id764x_1;

    switch((id764in_sel.getValueAsLong())) {
      case 0l:
        id764x_1 = id764in_option0;
        break;
      case 1l:
        id764x_1 = id764in_option1;
        break;
      default:
        id764x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id764out_result[(getCycle()+1)%2] = (id764x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id765out_output;

  { // Node ID: 765 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id765in_input = id764out_result[getCycle()%2];

    id765out_output = id765in_input;
  }
  { // Node ID: 767 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id767in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id767in_option0 = in_vars.id766out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id767in_option1 = id765out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id767x_1;

    switch((id767in_sel.getValueAsLong())) {
      case 0l:
        id767x_1 = id767in_option0;
        break;
      case 1l:
        id767x_1 = id767in_option1;
        break;
      default:
        id767x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id767out_result[(getCycle()+1)%2] = (id767x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id768out_output;

  { // Node ID: 768 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id768in_input = id767out_result[getCycle()%2];

    id768out_output = id768in_input;
  }
  { // Node ID: 770 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id770in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id770in_option0 = in_vars.id769out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id770in_option1 = id768out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id770x_1;

    switch((id770in_sel.getValueAsLong())) {
      case 0l:
        id770x_1 = id770in_option0;
        break;
      case 1l:
        id770x_1 = id770in_option1;
        break;
      default:
        id770x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id770out_result[(getCycle()+1)%2] = (id770x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id771out_output;

  { // Node ID: 771 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id771in_input = id770out_result[getCycle()%2];

    id771out_output = id771in_input;
  }
  { // Node ID: 773 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id773in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id773in_option0 = in_vars.id772out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id773in_option1 = id771out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id773x_1;

    switch((id773in_sel.getValueAsLong())) {
      case 0l:
        id773x_1 = id773in_option0;
        break;
      case 1l:
        id773x_1 = id773in_option1;
        break;
      default:
        id773x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id773out_result[(getCycle()+1)%2] = (id773x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id774out_output;

  { // Node ID: 774 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id774in_input = id773out_result[getCycle()%2];

    id774out_output = id774in_input;
  }
  { // Node ID: 776 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id776in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id776in_option0 = in_vars.id775out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id776in_option1 = id774out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id776x_1;

    switch((id776in_sel.getValueAsLong())) {
      case 0l:
        id776x_1 = id776in_option0;
        break;
      case 1l:
        id776x_1 = id776in_option1;
        break;
      default:
        id776x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id776out_result[(getCycle()+1)%2] = (id776x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id777out_output;

  { // Node ID: 777 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id777in_input = id776out_result[getCycle()%2];

    id777out_output = id777in_input;
  }
  { // Node ID: 779 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id779in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id779in_option0 = in_vars.id778out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id779in_option1 = id777out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id779x_1;

    switch((id779in_sel.getValueAsLong())) {
      case 0l:
        id779x_1 = id779in_option0;
        break;
      case 1l:
        id779x_1 = id779in_option1;
        break;
      default:
        id779x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id779out_result[(getCycle()+1)%2] = (id779x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id780out_output;

  { // Node ID: 780 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id780in_input = id779out_result[getCycle()%2];

    id780out_output = id780in_input;
  }
  { // Node ID: 782 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id782in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id782in_option0 = in_vars.id781out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id782in_option1 = id780out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id782x_1;

    switch((id782in_sel.getValueAsLong())) {
      case 0l:
        id782x_1 = id782in_option0;
        break;
      case 1l:
        id782x_1 = id782in_option1;
        break;
      default:
        id782x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id782out_result[(getCycle()+1)%2] = (id782x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id783out_output;

  { // Node ID: 783 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id783in_input = id782out_result[getCycle()%2];

    id783out_output = id783in_input;
  }
  { // Node ID: 785 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id785in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id785in_option0 = in_vars.id784out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id785in_option1 = id783out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id785x_1;

    switch((id785in_sel.getValueAsLong())) {
      case 0l:
        id785x_1 = id785in_option0;
        break;
      case 1l:
        id785x_1 = id785in_option1;
        break;
      default:
        id785x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id785out_result[(getCycle()+1)%2] = (id785x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id786out_output;

  { // Node ID: 786 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id786in_input = id785out_result[getCycle()%2];

    id786out_output = id786in_input;
  }
  { // Node ID: 788 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id788in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id788in_option0 = in_vars.id787out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id788in_option1 = id786out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id788x_1;

    switch((id788in_sel.getValueAsLong())) {
      case 0l:
        id788x_1 = id788in_option0;
        break;
      case 1l:
        id788x_1 = id788in_option1;
        break;
      default:
        id788x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id788out_result[(getCycle()+1)%2] = (id788x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id789out_output;

  { // Node ID: 789 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id789in_input = id788out_result[getCycle()%2];

    id789out_output = id789in_input;
  }
  { // Node ID: 791 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id791in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id791in_option0 = in_vars.id790out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id791in_option1 = id789out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id791x_1;

    switch((id791in_sel.getValueAsLong())) {
      case 0l:
        id791x_1 = id791in_option0;
        break;
      case 1l:
        id791x_1 = id791in_option1;
        break;
      default:
        id791x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id791out_result[(getCycle()+1)%2] = (id791x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id792out_output;

  { // Node ID: 792 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id792in_input = id791out_result[getCycle()%2];

    id792out_output = id792in_input;
  }
  { // Node ID: 794 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id794in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id794in_option0 = in_vars.id793out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id794in_option1 = id792out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id794x_1;

    switch((id794in_sel.getValueAsLong())) {
      case 0l:
        id794x_1 = id794in_option0;
        break;
      case 1l:
        id794x_1 = id794in_option1;
        break;
      default:
        id794x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id794out_result[(getCycle()+1)%2] = (id794x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id795out_output;

  { // Node ID: 795 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id795in_input = id794out_result[getCycle()%2];

    id795out_output = id795in_input;
  }
  { // Node ID: 797 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id797in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id797in_option0 = in_vars.id796out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id797in_option1 = id795out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id797x_1;

    switch((id797in_sel.getValueAsLong())) {
      case 0l:
        id797x_1 = id797in_option0;
        break;
      case 1l:
        id797x_1 = id797in_option1;
        break;
      default:
        id797x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id797out_result[(getCycle()+1)%2] = (id797x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id798out_output;

  { // Node ID: 798 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id798in_input = id797out_result[getCycle()%2];

    id798out_output = id798in_input;
  }
  { // Node ID: 800 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id800in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id800in_option0 = in_vars.id799out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id800in_option1 = id798out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id800x_1;

    switch((id800in_sel.getValueAsLong())) {
      case 0l:
        id800x_1 = id800in_option0;
        break;
      case 1l:
        id800x_1 = id800in_option1;
        break;
      default:
        id800x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id800out_result[(getCycle()+1)%2] = (id800x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id801out_output;

  { // Node ID: 801 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id801in_input = id800out_result[getCycle()%2];

    id801out_output = id801in_input;
  }
  { // Node ID: 803 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id803in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id803in_option0 = in_vars.id802out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id803in_option1 = id801out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id803x_1;

    switch((id803in_sel.getValueAsLong())) {
      case 0l:
        id803x_1 = id803in_option0;
        break;
      case 1l:
        id803x_1 = id803in_option1;
        break;
      default:
        id803x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id803out_result[(getCycle()+1)%2] = (id803x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id804out_output;

  { // Node ID: 804 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id804in_input = id803out_result[getCycle()%2];

    id804out_output = id804in_input;
  }
  { // Node ID: 806 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id806in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id806in_option0 = in_vars.id805out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id806in_option1 = id804out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id806x_1;

    switch((id806in_sel.getValueAsLong())) {
      case 0l:
        id806x_1 = id806in_option0;
        break;
      case 1l:
        id806x_1 = id806in_option1;
        break;
      default:
        id806x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id806out_result[(getCycle()+1)%2] = (id806x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id807out_output;

  { // Node ID: 807 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id807in_input = id806out_result[getCycle()%2];

    id807out_output = id807in_input;
  }
  { // Node ID: 809 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id809in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id809in_option0 = in_vars.id808out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id809in_option1 = id807out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id809x_1;

    switch((id809in_sel.getValueAsLong())) {
      case 0l:
        id809x_1 = id809in_option0;
        break;
      case 1l:
        id809x_1 = id809in_option1;
        break;
      default:
        id809x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id809out_result[(getCycle()+1)%2] = (id809x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id810out_output;

  { // Node ID: 810 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id810in_input = id809out_result[getCycle()%2];

    id810out_output = id810in_input;
  }
  { // Node ID: 812 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id812in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id812in_option0 = in_vars.id811out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id812in_option1 = id810out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id812x_1;

    switch((id812in_sel.getValueAsLong())) {
      case 0l:
        id812x_1 = id812in_option0;
        break;
      case 1l:
        id812x_1 = id812in_option1;
        break;
      default:
        id812x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id812out_result[(getCycle()+1)%2] = (id812x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id813out_output;

  { // Node ID: 813 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id813in_input = id812out_result[getCycle()%2];

    id813out_output = id813in_input;
  }
  { // Node ID: 815 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id815in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id815in_option0 = in_vars.id814out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id815in_option1 = id813out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id815x_1;

    switch((id815in_sel.getValueAsLong())) {
      case 0l:
        id815x_1 = id815in_option0;
        break;
      case 1l:
        id815x_1 = id815in_option1;
        break;
      default:
        id815x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id815out_result[(getCycle()+1)%2] = (id815x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id816out_output;

  { // Node ID: 816 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id816in_input = id815out_result[getCycle()%2];

    id816out_output = id816in_input;
  }
  { // Node ID: 818 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id818in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id818in_option0 = in_vars.id817out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id818in_option1 = id816out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id818x_1;

    switch((id818in_sel.getValueAsLong())) {
      case 0l:
        id818x_1 = id818in_option0;
        break;
      case 1l:
        id818x_1 = id818in_option1;
        break;
      default:
        id818x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id818out_result[(getCycle()+1)%2] = (id818x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id819out_output;

  { // Node ID: 819 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id819in_input = id818out_result[getCycle()%2];

    id819out_output = id819in_input;
  }
  { // Node ID: 821 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id821in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id821in_option0 = in_vars.id820out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id821in_option1 = id819out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id821x_1;

    switch((id821in_sel.getValueAsLong())) {
      case 0l:
        id821x_1 = id821in_option0;
        break;
      case 1l:
        id821x_1 = id821in_option1;
        break;
      default:
        id821x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id821out_result[(getCycle()+1)%2] = (id821x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id822out_output;

  { // Node ID: 822 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id822in_input = id821out_result[getCycle()%2];

    id822out_output = id822in_input;
  }
  { // Node ID: 824 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id824in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id824in_option0 = in_vars.id823out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id824in_option1 = id822out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id824x_1;

    switch((id824in_sel.getValueAsLong())) {
      case 0l:
        id824x_1 = id824in_option0;
        break;
      case 1l:
        id824x_1 = id824in_option1;
        break;
      default:
        id824x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id824out_result[(getCycle()+1)%2] = (id824x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id825out_output;

  { // Node ID: 825 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id825in_input = id824out_result[getCycle()%2];

    id825out_output = id825in_input;
  }
  { // Node ID: 827 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id827in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id827in_option0 = in_vars.id826out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id827in_option1 = id825out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id827x_1;

    switch((id827in_sel.getValueAsLong())) {
      case 0l:
        id827x_1 = id827in_option0;
        break;
      case 1l:
        id827x_1 = id827in_option1;
        break;
      default:
        id827x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id827out_result[(getCycle()+1)%2] = (id827x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id828out_output;

  { // Node ID: 828 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id828in_input = id827out_result[getCycle()%2];

    id828out_output = id828in_input;
  }
  { // Node ID: 830 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id830in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id830in_option0 = in_vars.id829out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id830in_option1 = id828out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id830x_1;

    switch((id830in_sel.getValueAsLong())) {
      case 0l:
        id830x_1 = id830in_option0;
        break;
      case 1l:
        id830x_1 = id830in_option1;
        break;
      default:
        id830x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id830out_result[(getCycle()+1)%2] = (id830x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id831out_output;

  { // Node ID: 831 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id831in_input = id830out_result[getCycle()%2];

    id831out_output = id831in_input;
  }
  { // Node ID: 833 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id833in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id833in_option0 = in_vars.id832out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id833in_option1 = id831out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id833x_1;

    switch((id833in_sel.getValueAsLong())) {
      case 0l:
        id833x_1 = id833in_option0;
        break;
      case 1l:
        id833x_1 = id833in_option1;
        break;
      default:
        id833x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id833out_result[(getCycle()+1)%2] = (id833x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id834out_output;

  { // Node ID: 834 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id834in_input = id833out_result[getCycle()%2];

    id834out_output = id834in_input;
  }
  { // Node ID: 836 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id836in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id836in_option0 = in_vars.id835out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id836in_option1 = id834out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id836x_1;

    switch((id836in_sel.getValueAsLong())) {
      case 0l:
        id836x_1 = id836in_option0;
        break;
      case 1l:
        id836x_1 = id836in_option1;
        break;
      default:
        id836x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id836out_result[(getCycle()+1)%2] = (id836x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id837out_output;

  { // Node ID: 837 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id837in_input = id836out_result[getCycle()%2];

    id837out_output = id837in_input;
  }
  { // Node ID: 839 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id839in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id839in_option0 = in_vars.id838out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id839in_option1 = id837out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id839x_1;

    switch((id839in_sel.getValueAsLong())) {
      case 0l:
        id839x_1 = id839in_option0;
        break;
      case 1l:
        id839x_1 = id839in_option1;
        break;
      default:
        id839x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id839out_result[(getCycle()+1)%2] = (id839x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id840out_output;

  { // Node ID: 840 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id840in_input = id839out_result[getCycle()%2];

    id840out_output = id840in_input;
  }
  { // Node ID: 842 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id842in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id842in_option0 = in_vars.id841out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id842in_option1 = id840out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id842x_1;

    switch((id842in_sel.getValueAsLong())) {
      case 0l:
        id842x_1 = id842in_option0;
        break;
      case 1l:
        id842x_1 = id842in_option1;
        break;
      default:
        id842x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id842out_result[(getCycle()+1)%2] = (id842x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id843out_output;

  { // Node ID: 843 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id843in_input = id842out_result[getCycle()%2];

    id843out_output = id843in_input;
  }
  { // Node ID: 845 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id845in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id845in_option0 = in_vars.id844out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id845in_option1 = id843out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id845x_1;

    switch((id845in_sel.getValueAsLong())) {
      case 0l:
        id845x_1 = id845in_option0;
        break;
      case 1l:
        id845x_1 = id845in_option1;
        break;
      default:
        id845x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id845out_result[(getCycle()+1)%2] = (id845x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id846out_output;

  { // Node ID: 846 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id846in_input = id845out_result[getCycle()%2];

    id846out_output = id846in_input;
  }
  { // Node ID: 848 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id848in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id848in_option0 = in_vars.id847out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id848in_option1 = id846out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id848x_1;

    switch((id848in_sel.getValueAsLong())) {
      case 0l:
        id848x_1 = id848in_option0;
        break;
      case 1l:
        id848x_1 = id848in_option1;
        break;
      default:
        id848x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id848out_result[(getCycle()+1)%2] = (id848x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id849out_output;

  { // Node ID: 849 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id849in_input = id848out_result[getCycle()%2];

    id849out_output = id849in_input;
  }
  { // Node ID: 851 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id851in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id851in_option0 = in_vars.id850out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id851in_option1 = id849out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id851x_1;

    switch((id851in_sel.getValueAsLong())) {
      case 0l:
        id851x_1 = id851in_option0;
        break;
      case 1l:
        id851x_1 = id851in_option1;
        break;
      default:
        id851x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id851out_result[(getCycle()+1)%2] = (id851x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id852out_output;

  { // Node ID: 852 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id852in_input = id851out_result[getCycle()%2];

    id852out_output = id852in_input;
  }
  { // Node ID: 854 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id854in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id854in_option0 = in_vars.id853out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id854in_option1 = id852out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id854x_1;

    switch((id854in_sel.getValueAsLong())) {
      case 0l:
        id854x_1 = id854in_option0;
        break;
      case 1l:
        id854x_1 = id854in_option1;
        break;
      default:
        id854x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id854out_result[(getCycle()+1)%2] = (id854x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id855out_output;

  { // Node ID: 855 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id855in_input = id854out_result[getCycle()%2];

    id855out_output = id855in_input;
  }
  { // Node ID: 857 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id857in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id857in_option0 = in_vars.id856out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id857in_option1 = id855out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id857x_1;

    switch((id857in_sel.getValueAsLong())) {
      case 0l:
        id857x_1 = id857in_option0;
        break;
      case 1l:
        id857x_1 = id857in_option1;
        break;
      default:
        id857x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id857out_result[(getCycle()+1)%2] = (id857x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id858out_output;

  { // Node ID: 858 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id858in_input = id857out_result[getCycle()%2];

    id858out_output = id858in_input;
  }
  { // Node ID: 860 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id860in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id860in_option0 = in_vars.id859out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id860in_option1 = id858out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id860x_1;

    switch((id860in_sel.getValueAsLong())) {
      case 0l:
        id860x_1 = id860in_option0;
        break;
      case 1l:
        id860x_1 = id860in_option1;
        break;
      default:
        id860x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id860out_result[(getCycle()+1)%2] = (id860x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id861out_output;

  { // Node ID: 861 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id861in_input = id860out_result[getCycle()%2];

    id861out_output = id861in_input;
  }
  { // Node ID: 863 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id863in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id863in_option0 = in_vars.id862out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id863in_option1 = id861out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id863x_1;

    switch((id863in_sel.getValueAsLong())) {
      case 0l:
        id863x_1 = id863in_option0;
        break;
      case 1l:
        id863x_1 = id863in_option1;
        break;
      default:
        id863x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id863out_result[(getCycle()+1)%2] = (id863x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id864out_output;

  { // Node ID: 864 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id864in_input = id863out_result[getCycle()%2];

    id864out_output = id864in_input;
  }
  { // Node ID: 866 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id866in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id866in_option0 = in_vars.id865out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id866in_option1 = id864out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id866x_1;

    switch((id866in_sel.getValueAsLong())) {
      case 0l:
        id866x_1 = id866in_option0;
        break;
      case 1l:
        id866x_1 = id866in_option1;
        break;
      default:
        id866x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id866out_result[(getCycle()+1)%2] = (id866x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id867out_output;

  { // Node ID: 867 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id867in_input = id866out_result[getCycle()%2];

    id867out_output = id867in_input;
  }
  { // Node ID: 869 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id869in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id869in_option0 = in_vars.id868out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id869in_option1 = id867out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id869x_1;

    switch((id869in_sel.getValueAsLong())) {
      case 0l:
        id869x_1 = id869in_option0;
        break;
      case 1l:
        id869x_1 = id869in_option1;
        break;
      default:
        id869x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id869out_result[(getCycle()+1)%2] = (id869x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id870out_output;

  { // Node ID: 870 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id870in_input = id869out_result[getCycle()%2];

    id870out_output = id870in_input;
  }
  { // Node ID: 872 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id872in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id872in_option0 = in_vars.id871out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id872in_option1 = id870out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id872x_1;

    switch((id872in_sel.getValueAsLong())) {
      case 0l:
        id872x_1 = id872in_option0;
        break;
      case 1l:
        id872x_1 = id872in_option1;
        break;
      default:
        id872x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id872out_result[(getCycle()+1)%2] = (id872x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id873out_output;

  { // Node ID: 873 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id873in_input = id872out_result[getCycle()%2];

    id873out_output = id873in_input;
  }
  { // Node ID: 875 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id875in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id875in_option0 = in_vars.id874out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id875in_option1 = id873out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id875x_1;

    switch((id875in_sel.getValueAsLong())) {
      case 0l:
        id875x_1 = id875in_option0;
        break;
      case 1l:
        id875x_1 = id875in_option1;
        break;
      default:
        id875x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id875out_result[(getCycle()+1)%2] = (id875x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id876out_output;

  { // Node ID: 876 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id876in_input = id875out_result[getCycle()%2];

    id876out_output = id876in_input;
  }
  { // Node ID: 878 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id878in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id878in_option0 = in_vars.id877out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id878in_option1 = id876out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id878x_1;

    switch((id878in_sel.getValueAsLong())) {
      case 0l:
        id878x_1 = id878in_option0;
        break;
      case 1l:
        id878x_1 = id878in_option1;
        break;
      default:
        id878x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id878out_result[(getCycle()+1)%2] = (id878x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id879out_output;

  { // Node ID: 879 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id879in_input = id878out_result[getCycle()%2];

    id879out_output = id879in_input;
  }
  { // Node ID: 881 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id881in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id881in_option0 = in_vars.id880out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id881in_option1 = id879out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id881x_1;

    switch((id881in_sel.getValueAsLong())) {
      case 0l:
        id881x_1 = id881in_option0;
        break;
      case 1l:
        id881x_1 = id881in_option1;
        break;
      default:
        id881x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id881out_result[(getCycle()+1)%2] = (id881x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id882out_output;

  { // Node ID: 882 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id882in_input = id881out_result[getCycle()%2];

    id882out_output = id882in_input;
  }
  { // Node ID: 884 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id884in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id884in_option0 = in_vars.id883out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id884in_option1 = id882out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id884x_1;

    switch((id884in_sel.getValueAsLong())) {
      case 0l:
        id884x_1 = id884in_option0;
        break;
      case 1l:
        id884x_1 = id884in_option1;
        break;
      default:
        id884x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id884out_result[(getCycle()+1)%2] = (id884x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id885out_output;

  { // Node ID: 885 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id885in_input = id884out_result[getCycle()%2];

    id885out_output = id885in_input;
  }
  { // Node ID: 887 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id887in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id887in_option0 = in_vars.id886out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id887in_option1 = id885out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id887x_1;

    switch((id887in_sel.getValueAsLong())) {
      case 0l:
        id887x_1 = id887in_option0;
        break;
      case 1l:
        id887x_1 = id887in_option1;
        break;
      default:
        id887x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id887out_result[(getCycle()+1)%2] = (id887x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id888out_output;

  { // Node ID: 888 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id888in_input = id887out_result[getCycle()%2];

    id888out_output = id888in_input;
  }
  { // Node ID: 890 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id890in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id890in_option0 = in_vars.id889out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id890in_option1 = id888out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id890x_1;

    switch((id890in_sel.getValueAsLong())) {
      case 0l:
        id890x_1 = id890in_option0;
        break;
      case 1l:
        id890x_1 = id890in_option1;
        break;
      default:
        id890x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id890out_result[(getCycle()+1)%2] = (id890x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id891out_output;

  { // Node ID: 891 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id891in_input = id890out_result[getCycle()%2];

    id891out_output = id891in_input;
  }
  { // Node ID: 893 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id893in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id893in_option0 = in_vars.id892out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id893in_option1 = id891out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id893x_1;

    switch((id893in_sel.getValueAsLong())) {
      case 0l:
        id893x_1 = id893in_option0;
        break;
      case 1l:
        id893x_1 = id893in_option1;
        break;
      default:
        id893x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id893out_result[(getCycle()+1)%2] = (id893x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id894out_output;

  { // Node ID: 894 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id894in_input = id893out_result[getCycle()%2];

    id894out_output = id894in_input;
  }
  { // Node ID: 896 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id896in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id896in_option0 = in_vars.id895out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id896in_option1 = id894out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id896x_1;

    switch((id896in_sel.getValueAsLong())) {
      case 0l:
        id896x_1 = id896in_option0;
        break;
      case 1l:
        id896x_1 = id896in_option1;
        break;
      default:
        id896x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id896out_result[(getCycle()+1)%2] = (id896x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id897out_output;

  { // Node ID: 897 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id897in_input = id896out_result[getCycle()%2];

    id897out_output = id897in_input;
  }
  { // Node ID: 899 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id899in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id899in_option0 = in_vars.id898out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id899in_option1 = id897out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id899x_1;

    switch((id899in_sel.getValueAsLong())) {
      case 0l:
        id899x_1 = id899in_option0;
        break;
      case 1l:
        id899x_1 = id899in_option1;
        break;
      default:
        id899x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id899out_result[(getCycle()+1)%2] = (id899x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id900out_output;

  { // Node ID: 900 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id900in_input = id899out_result[getCycle()%2];

    id900out_output = id900in_input;
  }
  { // Node ID: 902 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id902in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id902in_option0 = in_vars.id901out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id902in_option1 = id900out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id902x_1;

    switch((id902in_sel.getValueAsLong())) {
      case 0l:
        id902x_1 = id902in_option0;
        break;
      case 1l:
        id902x_1 = id902in_option1;
        break;
      default:
        id902x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id902out_result[(getCycle()+1)%2] = (id902x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id903out_output;

  { // Node ID: 903 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id903in_input = id902out_result[getCycle()%2];

    id903out_output = id903in_input;
  }
  { // Node ID: 905 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id905in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id905in_option0 = in_vars.id904out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id905in_option1 = id903out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id905x_1;

    switch((id905in_sel.getValueAsLong())) {
      case 0l:
        id905x_1 = id905in_option0;
        break;
      case 1l:
        id905x_1 = id905in_option1;
        break;
      default:
        id905x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id905out_result[(getCycle()+1)%2] = (id905x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id906out_output;

  { // Node ID: 906 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id906in_input = id905out_result[getCycle()%2];

    id906out_output = id906in_input;
  }
  { // Node ID: 908 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id908in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id908in_option0 = in_vars.id907out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id908in_option1 = id906out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id908x_1;

    switch((id908in_sel.getValueAsLong())) {
      case 0l:
        id908x_1 = id908in_option0;
        break;
      case 1l:
        id908x_1 = id908in_option1;
        break;
      default:
        id908x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id908out_result[(getCycle()+1)%2] = (id908x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id909out_output;

  { // Node ID: 909 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id909in_input = id908out_result[getCycle()%2];

    id909out_output = id909in_input;
  }
  { // Node ID: 911 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id911in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id911in_option0 = in_vars.id910out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id911in_option1 = id909out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id911x_1;

    switch((id911in_sel.getValueAsLong())) {
      case 0l:
        id911x_1 = id911in_option0;
        break;
      case 1l:
        id911x_1 = id911in_option1;
        break;
      default:
        id911x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id911out_result[(getCycle()+1)%2] = (id911x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id912out_output;

  { // Node ID: 912 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id912in_input = id911out_result[getCycle()%2];

    id912out_output = id912in_input;
  }
  { // Node ID: 914 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id914in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id914in_option0 = in_vars.id913out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id914in_option1 = id912out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id914x_1;

    switch((id914in_sel.getValueAsLong())) {
      case 0l:
        id914x_1 = id914in_option0;
        break;
      case 1l:
        id914x_1 = id914in_option1;
        break;
      default:
        id914x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id914out_result[(getCycle()+1)%2] = (id914x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id915out_output;

  { // Node ID: 915 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id915in_input = id914out_result[getCycle()%2];

    id915out_output = id915in_input;
  }
  { // Node ID: 917 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id917in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id917in_option0 = in_vars.id916out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id917in_option1 = id915out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id917x_1;

    switch((id917in_sel.getValueAsLong())) {
      case 0l:
        id917x_1 = id917in_option0;
        break;
      case 1l:
        id917x_1 = id917in_option1;
        break;
      default:
        id917x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id917out_result[(getCycle()+1)%2] = (id917x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id918out_output;

  { // Node ID: 918 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id918in_input = id917out_result[getCycle()%2];

    id918out_output = id918in_input;
  }
  { // Node ID: 920 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id920in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id920in_option0 = in_vars.id919out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id920in_option1 = id918out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id920x_1;

    switch((id920in_sel.getValueAsLong())) {
      case 0l:
        id920x_1 = id920in_option0;
        break;
      case 1l:
        id920x_1 = id920in_option1;
        break;
      default:
        id920x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id920out_result[(getCycle()+1)%2] = (id920x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id921out_output;

  { // Node ID: 921 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id921in_input = id920out_result[getCycle()%2];

    id921out_output = id921in_input;
  }
  { // Node ID: 923 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id923in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id923in_option0 = in_vars.id922out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id923in_option1 = id921out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id923x_1;

    switch((id923in_sel.getValueAsLong())) {
      case 0l:
        id923x_1 = id923in_option0;
        break;
      case 1l:
        id923x_1 = id923in_option1;
        break;
      default:
        id923x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id923out_result[(getCycle()+1)%2] = (id923x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id924out_output;

  { // Node ID: 924 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id924in_input = id923out_result[getCycle()%2];

    id924out_output = id924in_input;
  }
  { // Node ID: 926 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id926in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id926in_option0 = in_vars.id925out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id926in_option1 = id924out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id926x_1;

    switch((id926in_sel.getValueAsLong())) {
      case 0l:
        id926x_1 = id926in_option0;
        break;
      case 1l:
        id926x_1 = id926in_option1;
        break;
      default:
        id926x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id926out_result[(getCycle()+1)%2] = (id926x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id927out_output;

  { // Node ID: 927 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id927in_input = id926out_result[getCycle()%2];

    id927out_output = id927in_input;
  }
  { // Node ID: 929 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id929in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id929in_option0 = in_vars.id928out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id929in_option1 = id927out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id929x_1;

    switch((id929in_sel.getValueAsLong())) {
      case 0l:
        id929x_1 = id929in_option0;
        break;
      case 1l:
        id929x_1 = id929in_option1;
        break;
      default:
        id929x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id929out_result[(getCycle()+1)%2] = (id929x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id930out_output;

  { // Node ID: 930 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id930in_input = id929out_result[getCycle()%2];

    id930out_output = id930in_input;
  }
  { // Node ID: 932 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id932in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id932in_option0 = in_vars.id931out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id932in_option1 = id930out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id932x_1;

    switch((id932in_sel.getValueAsLong())) {
      case 0l:
        id932x_1 = id932in_option0;
        break;
      case 1l:
        id932x_1 = id932in_option1;
        break;
      default:
        id932x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id932out_result[(getCycle()+1)%2] = (id932x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id933out_output;

  { // Node ID: 933 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id933in_input = id932out_result[getCycle()%2];

    id933out_output = id933in_input;
  }
  { // Node ID: 935 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id935in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id935in_option0 = in_vars.id934out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id935in_option1 = id933out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id935x_1;

    switch((id935in_sel.getValueAsLong())) {
      case 0l:
        id935x_1 = id935in_option0;
        break;
      case 1l:
        id935x_1 = id935in_option1;
        break;
      default:
        id935x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id935out_result[(getCycle()+1)%2] = (id935x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id936out_output;

  { // Node ID: 936 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id936in_input = id935out_result[getCycle()%2];

    id936out_output = id936in_input;
  }
  { // Node ID: 938 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id938in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id938in_option0 = in_vars.id937out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id938in_option1 = id936out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id938x_1;

    switch((id938in_sel.getValueAsLong())) {
      case 0l:
        id938x_1 = id938in_option0;
        break;
      case 1l:
        id938x_1 = id938in_option1;
        break;
      default:
        id938x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id938out_result[(getCycle()+1)%2] = (id938x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id939out_output;

  { // Node ID: 939 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id939in_input = id938out_result[getCycle()%2];

    id939out_output = id939in_input;
  }
  { // Node ID: 941 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id941in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id941in_option0 = in_vars.id940out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id941in_option1 = id939out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id941x_1;

    switch((id941in_sel.getValueAsLong())) {
      case 0l:
        id941x_1 = id941in_option0;
        break;
      case 1l:
        id941x_1 = id941in_option1;
        break;
      default:
        id941x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id941out_result[(getCycle()+1)%2] = (id941x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id942out_output;

  { // Node ID: 942 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id942in_input = id941out_result[getCycle()%2];

    id942out_output = id942in_input;
  }
  { // Node ID: 944 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id944in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id944in_option0 = in_vars.id943out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id944in_option1 = id942out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id944x_1;

    switch((id944in_sel.getValueAsLong())) {
      case 0l:
        id944x_1 = id944in_option0;
        break;
      case 1l:
        id944x_1 = id944in_option1;
        break;
      default:
        id944x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id944out_result[(getCycle()+1)%2] = (id944x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id945out_output;

  { // Node ID: 945 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id945in_input = id944out_result[getCycle()%2];

    id945out_output = id945in_input;
  }
  { // Node ID: 947 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id947in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id947in_option0 = in_vars.id946out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id947in_option1 = id945out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id947x_1;

    switch((id947in_sel.getValueAsLong())) {
      case 0l:
        id947x_1 = id947in_option0;
        break;
      case 1l:
        id947x_1 = id947in_option1;
        break;
      default:
        id947x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id947out_result[(getCycle()+1)%2] = (id947x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id948out_output;

  { // Node ID: 948 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id948in_input = id947out_result[getCycle()%2];

    id948out_output = id948in_input;
  }
  { // Node ID: 950 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id950in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id950in_option0 = in_vars.id949out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id950in_option1 = id948out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id950x_1;

    switch((id950in_sel.getValueAsLong())) {
      case 0l:
        id950x_1 = id950in_option0;
        break;
      case 1l:
        id950x_1 = id950in_option1;
        break;
      default:
        id950x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id950out_result[(getCycle()+1)%2] = (id950x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id951out_output;

  { // Node ID: 951 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id951in_input = id950out_result[getCycle()%2];

    id951out_output = id951in_input;
  }
  { // Node ID: 953 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id953in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id953in_option0 = in_vars.id952out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id953in_option1 = id951out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id953x_1;

    switch((id953in_sel.getValueAsLong())) {
      case 0l:
        id953x_1 = id953in_option0;
        break;
      case 1l:
        id953x_1 = id953in_option1;
        break;
      default:
        id953x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id953out_result[(getCycle()+1)%2] = (id953x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id954out_output;

  { // Node ID: 954 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id954in_input = id953out_result[getCycle()%2];

    id954out_output = id954in_input;
  }
  { // Node ID: 956 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id956in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id956in_option0 = in_vars.id955out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id956in_option1 = id954out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id956x_1;

    switch((id956in_sel.getValueAsLong())) {
      case 0l:
        id956x_1 = id956in_option0;
        break;
      case 1l:
        id956x_1 = id956in_option1;
        break;
      default:
        id956x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id956out_result[(getCycle()+1)%2] = (id956x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id957out_output;

  { // Node ID: 957 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id957in_input = id956out_result[getCycle()%2];

    id957out_output = id957in_input;
  }
  { // Node ID: 959 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id959in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id959in_option0 = in_vars.id958out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id959in_option1 = id957out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id959x_1;

    switch((id959in_sel.getValueAsLong())) {
      case 0l:
        id959x_1 = id959in_option0;
        break;
      case 1l:
        id959x_1 = id959in_option1;
        break;
      default:
        id959x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id959out_result[(getCycle()+1)%2] = (id959x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id960out_output;

  { // Node ID: 960 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id960in_input = id959out_result[getCycle()%2];

    id960out_output = id960in_input;
  }
  { // Node ID: 962 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id962in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id962in_option0 = in_vars.id961out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id962in_option1 = id960out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id962x_1;

    switch((id962in_sel.getValueAsLong())) {
      case 0l:
        id962x_1 = id962in_option0;
        break;
      case 1l:
        id962x_1 = id962in_option1;
        break;
      default:
        id962x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id962out_result[(getCycle()+1)%2] = (id962x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id963out_output;

  { // Node ID: 963 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id963in_input = id962out_result[getCycle()%2];

    id963out_output = id963in_input;
  }
  { // Node ID: 965 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id965in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id965in_option0 = in_vars.id964out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id965in_option1 = id963out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id965x_1;

    switch((id965in_sel.getValueAsLong())) {
      case 0l:
        id965x_1 = id965in_option0;
        break;
      case 1l:
        id965x_1 = id965in_option1;
        break;
      default:
        id965x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id965out_result[(getCycle()+1)%2] = (id965x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id966out_output;

  { // Node ID: 966 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id966in_input = id965out_result[getCycle()%2];

    id966out_output = id966in_input;
  }
  { // Node ID: 968 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id968in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id968in_option0 = in_vars.id967out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id968in_option1 = id966out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id968x_1;

    switch((id968in_sel.getValueAsLong())) {
      case 0l:
        id968x_1 = id968in_option0;
        break;
      case 1l:
        id968x_1 = id968in_option1;
        break;
      default:
        id968x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id968out_result[(getCycle()+1)%2] = (id968x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id969out_output;

  { // Node ID: 969 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id969in_input = id968out_result[getCycle()%2];

    id969out_output = id969in_input;
  }
  { // Node ID: 971 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id971in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id971in_option0 = in_vars.id970out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id971in_option1 = id969out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id971x_1;

    switch((id971in_sel.getValueAsLong())) {
      case 0l:
        id971x_1 = id971in_option0;
        break;
      case 1l:
        id971x_1 = id971in_option1;
        break;
      default:
        id971x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id971out_result[(getCycle()+1)%2] = (id971x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id972out_output;

  { // Node ID: 972 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id972in_input = id971out_result[getCycle()%2];

    id972out_output = id972in_input;
  }
  { // Node ID: 974 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id974in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id974in_option0 = in_vars.id973out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id974in_option1 = id972out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id974x_1;

    switch((id974in_sel.getValueAsLong())) {
      case 0l:
        id974x_1 = id974in_option0;
        break;
      case 1l:
        id974x_1 = id974in_option1;
        break;
      default:
        id974x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id974out_result[(getCycle()+1)%2] = (id974x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id975out_output;

  { // Node ID: 975 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id975in_input = id974out_result[getCycle()%2];

    id975out_output = id975in_input;
  }
  { // Node ID: 977 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id977in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id977in_option0 = in_vars.id976out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id977in_option1 = id975out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id977x_1;

    switch((id977in_sel.getValueAsLong())) {
      case 0l:
        id977x_1 = id977in_option0;
        break;
      case 1l:
        id977x_1 = id977in_option1;
        break;
      default:
        id977x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id977out_result[(getCycle()+1)%2] = (id977x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id978out_output;

  { // Node ID: 978 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id978in_input = id977out_result[getCycle()%2];

    id978out_output = id978in_input;
  }
  { // Node ID: 980 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id980in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id980in_option0 = in_vars.id979out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id980in_option1 = id978out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id980x_1;

    switch((id980in_sel.getValueAsLong())) {
      case 0l:
        id980x_1 = id980in_option0;
        break;
      case 1l:
        id980x_1 = id980in_option1;
        break;
      default:
        id980x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id980out_result[(getCycle()+1)%2] = (id980x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id981out_output;

  { // Node ID: 981 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id981in_input = id980out_result[getCycle()%2];

    id981out_output = id981in_input;
  }
  { // Node ID: 983 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id983in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id983in_option0 = in_vars.id982out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id983in_option1 = id981out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id983x_1;

    switch((id983in_sel.getValueAsLong())) {
      case 0l:
        id983x_1 = id983in_option0;
        break;
      case 1l:
        id983x_1 = id983in_option1;
        break;
      default:
        id983x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id983out_result[(getCycle()+1)%2] = (id983x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id984out_output;

  { // Node ID: 984 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id984in_input = id983out_result[getCycle()%2];

    id984out_output = id984in_input;
  }
  { // Node ID: 986 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id986in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id986in_option0 = in_vars.id985out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id986in_option1 = id984out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id986x_1;

    switch((id986in_sel.getValueAsLong())) {
      case 0l:
        id986x_1 = id986in_option0;
        break;
      case 1l:
        id986x_1 = id986in_option1;
        break;
      default:
        id986x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id986out_result[(getCycle()+1)%2] = (id986x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id987out_output;

  { // Node ID: 987 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id987in_input = id986out_result[getCycle()%2];

    id987out_output = id987in_input;
  }
  { // Node ID: 989 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id989in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id989in_option0 = in_vars.id988out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id989in_option1 = id987out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id989x_1;

    switch((id989in_sel.getValueAsLong())) {
      case 0l:
        id989x_1 = id989in_option0;
        break;
      case 1l:
        id989x_1 = id989in_option1;
        break;
      default:
        id989x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id989out_result[(getCycle()+1)%2] = (id989x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id990out_output;

  { // Node ID: 990 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id990in_input = id989out_result[getCycle()%2];

    id990out_output = id990in_input;
  }
  { // Node ID: 992 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id992in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id992in_option0 = in_vars.id991out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id992in_option1 = id990out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id992x_1;

    switch((id992in_sel.getValueAsLong())) {
      case 0l:
        id992x_1 = id992in_option0;
        break;
      case 1l:
        id992x_1 = id992in_option1;
        break;
      default:
        id992x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id992out_result[(getCycle()+1)%2] = (id992x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id993out_output;

  { // Node ID: 993 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id993in_input = id992out_result[getCycle()%2];

    id993out_output = id993in_input;
  }
  { // Node ID: 995 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id995in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id995in_option0 = in_vars.id994out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id995in_option1 = id993out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id995x_1;

    switch((id995in_sel.getValueAsLong())) {
      case 0l:
        id995x_1 = id995in_option0;
        break;
      case 1l:
        id995x_1 = id995in_option1;
        break;
      default:
        id995x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id995out_result[(getCycle()+1)%2] = (id995x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id996out_output;

  { // Node ID: 996 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id996in_input = id995out_result[getCycle()%2];

    id996out_output = id996in_input;
  }
  { // Node ID: 998 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id998in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id998in_option0 = in_vars.id997out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id998in_option1 = id996out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id998x_1;

    switch((id998in_sel.getValueAsLong())) {
      case 0l:
        id998x_1 = id998in_option0;
        break;
      case 1l:
        id998x_1 = id998in_option1;
        break;
      default:
        id998x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id998out_result[(getCycle()+1)%2] = (id998x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id999out_output;

  { // Node ID: 999 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id999in_input = id998out_result[getCycle()%2];

    id999out_output = id999in_input;
  }
  { // Node ID: 1001 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1001in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1001in_option0 = in_vars.id1000out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1001in_option1 = id999out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1001x_1;

    switch((id1001in_sel.getValueAsLong())) {
      case 0l:
        id1001x_1 = id1001in_option0;
        break;
      case 1l:
        id1001x_1 = id1001in_option1;
        break;
      default:
        id1001x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1001out_result[(getCycle()+1)%2] = (id1001x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1002out_output;

  { // Node ID: 1002 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1002in_input = id1001out_result[getCycle()%2];

    id1002out_output = id1002in_input;
  }
  { // Node ID: 1004 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1004in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1004in_option0 = in_vars.id1003out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1004in_option1 = id1002out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1004x_1;

    switch((id1004in_sel.getValueAsLong())) {
      case 0l:
        id1004x_1 = id1004in_option0;
        break;
      case 1l:
        id1004x_1 = id1004in_option1;
        break;
      default:
        id1004x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1004out_result[(getCycle()+1)%2] = (id1004x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1005out_output;

  { // Node ID: 1005 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1005in_input = id1004out_result[getCycle()%2];

    id1005out_output = id1005in_input;
  }
  { // Node ID: 1007 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1007in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1007in_option0 = in_vars.id1006out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1007in_option1 = id1005out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1007x_1;

    switch((id1007in_sel.getValueAsLong())) {
      case 0l:
        id1007x_1 = id1007in_option0;
        break;
      case 1l:
        id1007x_1 = id1007in_option1;
        break;
      default:
        id1007x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1007out_result[(getCycle()+1)%2] = (id1007x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1008out_output;

  { // Node ID: 1008 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1008in_input = id1007out_result[getCycle()%2];

    id1008out_output = id1008in_input;
  }
  { // Node ID: 1010 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1010in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1010in_option0 = in_vars.id1009out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1010in_option1 = id1008out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1010x_1;

    switch((id1010in_sel.getValueAsLong())) {
      case 0l:
        id1010x_1 = id1010in_option0;
        break;
      case 1l:
        id1010x_1 = id1010in_option1;
        break;
      default:
        id1010x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1010out_result[(getCycle()+1)%2] = (id1010x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1011out_output;

  { // Node ID: 1011 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1011in_input = id1010out_result[getCycle()%2];

    id1011out_output = id1011in_input;
  }
  { // Node ID: 1013 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1013in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1013in_option0 = in_vars.id1012out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1013in_option1 = id1011out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1013x_1;

    switch((id1013in_sel.getValueAsLong())) {
      case 0l:
        id1013x_1 = id1013in_option0;
        break;
      case 1l:
        id1013x_1 = id1013in_option1;
        break;
      default:
        id1013x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1013out_result[(getCycle()+1)%2] = (id1013x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1014out_output;

  { // Node ID: 1014 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1014in_input = id1013out_result[getCycle()%2];

    id1014out_output = id1014in_input;
  }
  { // Node ID: 1016 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1016in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1016in_option0 = in_vars.id1015out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1016in_option1 = id1014out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1016x_1;

    switch((id1016in_sel.getValueAsLong())) {
      case 0l:
        id1016x_1 = id1016in_option0;
        break;
      case 1l:
        id1016x_1 = id1016in_option1;
        break;
      default:
        id1016x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1016out_result[(getCycle()+1)%2] = (id1016x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1017out_output;

  { // Node ID: 1017 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1017in_input = id1016out_result[getCycle()%2];

    id1017out_output = id1017in_input;
  }
  { // Node ID: 1019 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1019in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1019in_option0 = in_vars.id1018out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1019in_option1 = id1017out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1019x_1;

    switch((id1019in_sel.getValueAsLong())) {
      case 0l:
        id1019x_1 = id1019in_option0;
        break;
      case 1l:
        id1019x_1 = id1019in_option1;
        break;
      default:
        id1019x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1019out_result[(getCycle()+1)%2] = (id1019x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1020out_output;

  { // Node ID: 1020 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1020in_input = id1019out_result[getCycle()%2];

    id1020out_output = id1020in_input;
  }
  { // Node ID: 1022 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1022in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1022in_option0 = in_vars.id1021out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1022in_option1 = id1020out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1022x_1;

    switch((id1022in_sel.getValueAsLong())) {
      case 0l:
        id1022x_1 = id1022in_option0;
        break;
      case 1l:
        id1022x_1 = id1022in_option1;
        break;
      default:
        id1022x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1022out_result[(getCycle()+1)%2] = (id1022x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1023out_output;

  { // Node ID: 1023 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1023in_input = id1022out_result[getCycle()%2];

    id1023out_output = id1023in_input;
  }
  { // Node ID: 1025 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1025in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1025in_option0 = in_vars.id1024out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1025in_option1 = id1023out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1025x_1;

    switch((id1025in_sel.getValueAsLong())) {
      case 0l:
        id1025x_1 = id1025in_option0;
        break;
      case 1l:
        id1025x_1 = id1025in_option1;
        break;
      default:
        id1025x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1025out_result[(getCycle()+1)%2] = (id1025x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1026out_output;

  { // Node ID: 1026 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1026in_input = id1025out_result[getCycle()%2];

    id1026out_output = id1026in_input;
  }
  { // Node ID: 1028 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1028in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1028in_option0 = in_vars.id1027out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1028in_option1 = id1026out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1028x_1;

    switch((id1028in_sel.getValueAsLong())) {
      case 0l:
        id1028x_1 = id1028in_option0;
        break;
      case 1l:
        id1028x_1 = id1028in_option1;
        break;
      default:
        id1028x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1028out_result[(getCycle()+1)%2] = (id1028x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1029out_output;

  { // Node ID: 1029 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1029in_input = id1028out_result[getCycle()%2];

    id1029out_output = id1029in_input;
  }
  { // Node ID: 1031 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1031in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1031in_option0 = in_vars.id1030out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1031in_option1 = id1029out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1031x_1;

    switch((id1031in_sel.getValueAsLong())) {
      case 0l:
        id1031x_1 = id1031in_option0;
        break;
      case 1l:
        id1031x_1 = id1031in_option1;
        break;
      default:
        id1031x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1031out_result[(getCycle()+1)%2] = (id1031x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1032out_output;

  { // Node ID: 1032 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1032in_input = id1031out_result[getCycle()%2];

    id1032out_output = id1032in_input;
  }
  { // Node ID: 1034 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1034in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1034in_option0 = in_vars.id1033out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1034in_option1 = id1032out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1034x_1;

    switch((id1034in_sel.getValueAsLong())) {
      case 0l:
        id1034x_1 = id1034in_option0;
        break;
      case 1l:
        id1034x_1 = id1034in_option1;
        break;
      default:
        id1034x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1034out_result[(getCycle()+1)%2] = (id1034x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1035out_output;

  { // Node ID: 1035 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1035in_input = id1034out_result[getCycle()%2];

    id1035out_output = id1035in_input;
  }
  { // Node ID: 1037 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1037in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1037in_option0 = in_vars.id1036out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1037in_option1 = id1035out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1037x_1;

    switch((id1037in_sel.getValueAsLong())) {
      case 0l:
        id1037x_1 = id1037in_option0;
        break;
      case 1l:
        id1037x_1 = id1037in_option1;
        break;
      default:
        id1037x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1037out_result[(getCycle()+1)%2] = (id1037x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1038out_output;

  { // Node ID: 1038 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1038in_input = id1037out_result[getCycle()%2];

    id1038out_output = id1038in_input;
  }
  { // Node ID: 1040 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1040in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1040in_option0 = in_vars.id1039out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1040in_option1 = id1038out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1040x_1;

    switch((id1040in_sel.getValueAsLong())) {
      case 0l:
        id1040x_1 = id1040in_option0;
        break;
      case 1l:
        id1040x_1 = id1040in_option1;
        break;
      default:
        id1040x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1040out_result[(getCycle()+1)%2] = (id1040x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1041out_output;

  { // Node ID: 1041 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1041in_input = id1040out_result[getCycle()%2];

    id1041out_output = id1041in_input;
  }
  { // Node ID: 1043 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1043in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1043in_option0 = in_vars.id1042out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1043in_option1 = id1041out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1043x_1;

    switch((id1043in_sel.getValueAsLong())) {
      case 0l:
        id1043x_1 = id1043in_option0;
        break;
      case 1l:
        id1043x_1 = id1043in_option1;
        break;
      default:
        id1043x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1043out_result[(getCycle()+1)%2] = (id1043x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1044out_output;

  { // Node ID: 1044 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1044in_input = id1043out_result[getCycle()%2];

    id1044out_output = id1044in_input;
  }
  { // Node ID: 1046 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1046in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1046in_option0 = in_vars.id1045out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1046in_option1 = id1044out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1046x_1;

    switch((id1046in_sel.getValueAsLong())) {
      case 0l:
        id1046x_1 = id1046in_option0;
        break;
      case 1l:
        id1046x_1 = id1046in_option1;
        break;
      default:
        id1046x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1046out_result[(getCycle()+1)%2] = (id1046x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1047out_output;

  { // Node ID: 1047 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1047in_input = id1046out_result[getCycle()%2];

    id1047out_output = id1047in_input;
  }
  { // Node ID: 1049 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1049in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1049in_option0 = in_vars.id1048out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1049in_option1 = id1047out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1049x_1;

    switch((id1049in_sel.getValueAsLong())) {
      case 0l:
        id1049x_1 = id1049in_option0;
        break;
      case 1l:
        id1049x_1 = id1049in_option1;
        break;
      default:
        id1049x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1049out_result[(getCycle()+1)%2] = (id1049x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1050out_output;

  { // Node ID: 1050 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1050in_input = id1049out_result[getCycle()%2];

    id1050out_output = id1050in_input;
  }
  { // Node ID: 1052 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1052in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1052in_option0 = in_vars.id1051out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1052in_option1 = id1050out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1052x_1;

    switch((id1052in_sel.getValueAsLong())) {
      case 0l:
        id1052x_1 = id1052in_option0;
        break;
      case 1l:
        id1052x_1 = id1052in_option1;
        break;
      default:
        id1052x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1052out_result[(getCycle()+1)%2] = (id1052x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1053out_output;

  { // Node ID: 1053 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1053in_input = id1052out_result[getCycle()%2];

    id1053out_output = id1053in_input;
  }
  { // Node ID: 1055 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1055in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1055in_option0 = in_vars.id1054out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1055in_option1 = id1053out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1055x_1;

    switch((id1055in_sel.getValueAsLong())) {
      case 0l:
        id1055x_1 = id1055in_option0;
        break;
      case 1l:
        id1055x_1 = id1055in_option1;
        break;
      default:
        id1055x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1055out_result[(getCycle()+1)%2] = (id1055x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1056out_output;

  { // Node ID: 1056 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1056in_input = id1055out_result[getCycle()%2];

    id1056out_output = id1056in_input;
  }
  { // Node ID: 1058 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1058in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1058in_option0 = in_vars.id1057out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1058in_option1 = id1056out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1058x_1;

    switch((id1058in_sel.getValueAsLong())) {
      case 0l:
        id1058x_1 = id1058in_option0;
        break;
      case 1l:
        id1058x_1 = id1058in_option1;
        break;
      default:
        id1058x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1058out_result[(getCycle()+1)%2] = (id1058x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1059out_output;

  { // Node ID: 1059 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1059in_input = id1058out_result[getCycle()%2];

    id1059out_output = id1059in_input;
  }
  { // Node ID: 1061 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1061in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1061in_option0 = in_vars.id1060out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1061in_option1 = id1059out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1061x_1;

    switch((id1061in_sel.getValueAsLong())) {
      case 0l:
        id1061x_1 = id1061in_option0;
        break;
      case 1l:
        id1061x_1 = id1061in_option1;
        break;
      default:
        id1061x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1061out_result[(getCycle()+1)%2] = (id1061x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1062out_output;

  { // Node ID: 1062 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1062in_input = id1061out_result[getCycle()%2];

    id1062out_output = id1062in_input;
  }
  { // Node ID: 1064 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1064in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1064in_option0 = in_vars.id1063out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1064in_option1 = id1062out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1064x_1;

    switch((id1064in_sel.getValueAsLong())) {
      case 0l:
        id1064x_1 = id1064in_option0;
        break;
      case 1l:
        id1064x_1 = id1064in_option1;
        break;
      default:
        id1064x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1064out_result[(getCycle()+1)%2] = (id1064x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1065out_output;

  { // Node ID: 1065 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1065in_input = id1064out_result[getCycle()%2];

    id1065out_output = id1065in_input;
  }
  { // Node ID: 1067 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1067in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1067in_option0 = in_vars.id1066out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1067in_option1 = id1065out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1067x_1;

    switch((id1067in_sel.getValueAsLong())) {
      case 0l:
        id1067x_1 = id1067in_option0;
        break;
      case 1l:
        id1067x_1 = id1067in_option1;
        break;
      default:
        id1067x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1067out_result[(getCycle()+1)%2] = (id1067x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1068out_output;

  { // Node ID: 1068 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1068in_input = id1067out_result[getCycle()%2];

    id1068out_output = id1068in_input;
  }
  { // Node ID: 1070 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1070in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1070in_option0 = in_vars.id1069out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1070in_option1 = id1068out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1070x_1;

    switch((id1070in_sel.getValueAsLong())) {
      case 0l:
        id1070x_1 = id1070in_option0;
        break;
      case 1l:
        id1070x_1 = id1070in_option1;
        break;
      default:
        id1070x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1070out_result[(getCycle()+1)%2] = (id1070x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1071out_output;

  { // Node ID: 1071 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1071in_input = id1070out_result[getCycle()%2];

    id1071out_output = id1071in_input;
  }
  { // Node ID: 1073 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1073in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1073in_option0 = in_vars.id1072out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1073in_option1 = id1071out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1073x_1;

    switch((id1073in_sel.getValueAsLong())) {
      case 0l:
        id1073x_1 = id1073in_option0;
        break;
      case 1l:
        id1073x_1 = id1073in_option1;
        break;
      default:
        id1073x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1073out_result[(getCycle()+1)%2] = (id1073x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1074out_output;

  { // Node ID: 1074 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1074in_input = id1073out_result[getCycle()%2];

    id1074out_output = id1074in_input;
  }
  { // Node ID: 1076 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1076in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1076in_option0 = in_vars.id1075out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1076in_option1 = id1074out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1076x_1;

    switch((id1076in_sel.getValueAsLong())) {
      case 0l:
        id1076x_1 = id1076in_option0;
        break;
      case 1l:
        id1076x_1 = id1076in_option1;
        break;
      default:
        id1076x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1076out_result[(getCycle()+1)%2] = (id1076x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1077out_output;

  { // Node ID: 1077 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1077in_input = id1076out_result[getCycle()%2];

    id1077out_output = id1077in_input;
  }
  { // Node ID: 1079 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1079in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1079in_option0 = in_vars.id1078out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1079in_option1 = id1077out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1079x_1;

    switch((id1079in_sel.getValueAsLong())) {
      case 0l:
        id1079x_1 = id1079in_option0;
        break;
      case 1l:
        id1079x_1 = id1079in_option1;
        break;
      default:
        id1079x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1079out_result[(getCycle()+1)%2] = (id1079x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1080out_output;

  { // Node ID: 1080 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1080in_input = id1079out_result[getCycle()%2];

    id1080out_output = id1080in_input;
  }
  { // Node ID: 1082 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1082in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1082in_option0 = in_vars.id1081out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1082in_option1 = id1080out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1082x_1;

    switch((id1082in_sel.getValueAsLong())) {
      case 0l:
        id1082x_1 = id1082in_option0;
        break;
      case 1l:
        id1082x_1 = id1082in_option1;
        break;
      default:
        id1082x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1082out_result[(getCycle()+1)%2] = (id1082x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1083out_output;

  { // Node ID: 1083 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1083in_input = id1082out_result[getCycle()%2];

    id1083out_output = id1083in_input;
  }
  { // Node ID: 1085 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1085in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1085in_option0 = in_vars.id1084out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1085in_option1 = id1083out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1085x_1;

    switch((id1085in_sel.getValueAsLong())) {
      case 0l:
        id1085x_1 = id1085in_option0;
        break;
      case 1l:
        id1085x_1 = id1085in_option1;
        break;
      default:
        id1085x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1085out_result[(getCycle()+1)%2] = (id1085x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1086out_output;

  { // Node ID: 1086 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1086in_input = id1085out_result[getCycle()%2];

    id1086out_output = id1086in_input;
  }
  { // Node ID: 1088 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1088in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1088in_option0 = in_vars.id1087out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1088in_option1 = id1086out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1088x_1;

    switch((id1088in_sel.getValueAsLong())) {
      case 0l:
        id1088x_1 = id1088in_option0;
        break;
      case 1l:
        id1088x_1 = id1088in_option1;
        break;
      default:
        id1088x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1088out_result[(getCycle()+1)%2] = (id1088x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1089out_output;

  { // Node ID: 1089 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1089in_input = id1088out_result[getCycle()%2];

    id1089out_output = id1089in_input;
  }
  { // Node ID: 1091 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1091in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1091in_option0 = in_vars.id1090out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1091in_option1 = id1089out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1091x_1;

    switch((id1091in_sel.getValueAsLong())) {
      case 0l:
        id1091x_1 = id1091in_option0;
        break;
      case 1l:
        id1091x_1 = id1091in_option1;
        break;
      default:
        id1091x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1091out_result[(getCycle()+1)%2] = (id1091x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1092out_output;

  { // Node ID: 1092 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1092in_input = id1091out_result[getCycle()%2];

    id1092out_output = id1092in_input;
  }
  { // Node ID: 1094 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1094in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1094in_option0 = in_vars.id1093out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1094in_option1 = id1092out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1094x_1;

    switch((id1094in_sel.getValueAsLong())) {
      case 0l:
        id1094x_1 = id1094in_option0;
        break;
      case 1l:
        id1094x_1 = id1094in_option1;
        break;
      default:
        id1094x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1094out_result[(getCycle()+1)%2] = (id1094x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1095out_output;

  { // Node ID: 1095 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1095in_input = id1094out_result[getCycle()%2];

    id1095out_output = id1095in_input;
  }
  { // Node ID: 1097 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1097in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1097in_option0 = in_vars.id1096out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1097in_option1 = id1095out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1097x_1;

    switch((id1097in_sel.getValueAsLong())) {
      case 0l:
        id1097x_1 = id1097in_option0;
        break;
      case 1l:
        id1097x_1 = id1097in_option1;
        break;
      default:
        id1097x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1097out_result[(getCycle()+1)%2] = (id1097x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1098out_output;

  { // Node ID: 1098 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1098in_input = id1097out_result[getCycle()%2];

    id1098out_output = id1098in_input;
  }
  { // Node ID: 1100 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1100in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1100in_option0 = in_vars.id1099out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1100in_option1 = id1098out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1100x_1;

    switch((id1100in_sel.getValueAsLong())) {
      case 0l:
        id1100x_1 = id1100in_option0;
        break;
      case 1l:
        id1100x_1 = id1100in_option1;
        break;
      default:
        id1100x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1100out_result[(getCycle()+1)%2] = (id1100x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1101out_output;

  { // Node ID: 1101 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1101in_input = id1100out_result[getCycle()%2];

    id1101out_output = id1101in_input;
  }
  { // Node ID: 1103 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1103in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1103in_option0 = in_vars.id1102out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1103in_option1 = id1101out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1103x_1;

    switch((id1103in_sel.getValueAsLong())) {
      case 0l:
        id1103x_1 = id1103in_option0;
        break;
      case 1l:
        id1103x_1 = id1103in_option1;
        break;
      default:
        id1103x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1103out_result[(getCycle()+1)%2] = (id1103x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1104out_output;

  { // Node ID: 1104 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1104in_input = id1103out_result[getCycle()%2];

    id1104out_output = id1104in_input;
  }
  { // Node ID: 1106 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1106in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1106in_option0 = in_vars.id1105out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1106in_option1 = id1104out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1106x_1;

    switch((id1106in_sel.getValueAsLong())) {
      case 0l:
        id1106x_1 = id1106in_option0;
        break;
      case 1l:
        id1106x_1 = id1106in_option1;
        break;
      default:
        id1106x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1106out_result[(getCycle()+1)%2] = (id1106x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1107out_output;

  { // Node ID: 1107 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1107in_input = id1106out_result[getCycle()%2];

    id1107out_output = id1107in_input;
  }
  { // Node ID: 1109 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1109in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1109in_option0 = in_vars.id1108out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1109in_option1 = id1107out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1109x_1;

    switch((id1109in_sel.getValueAsLong())) {
      case 0l:
        id1109x_1 = id1109in_option0;
        break;
      case 1l:
        id1109x_1 = id1109in_option1;
        break;
      default:
        id1109x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1109out_result[(getCycle()+1)%2] = (id1109x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1110out_output;

  { // Node ID: 1110 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1110in_input = id1109out_result[getCycle()%2];

    id1110out_output = id1110in_input;
  }
  { // Node ID: 1112 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1112in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1112in_option0 = in_vars.id1111out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1112in_option1 = id1110out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1112x_1;

    switch((id1112in_sel.getValueAsLong())) {
      case 0l:
        id1112x_1 = id1112in_option0;
        break;
      case 1l:
        id1112x_1 = id1112in_option1;
        break;
      default:
        id1112x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1112out_result[(getCycle()+1)%2] = (id1112x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1113out_output;

  { // Node ID: 1113 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1113in_input = id1112out_result[getCycle()%2];

    id1113out_output = id1113in_input;
  }
  { // Node ID: 1115 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1115in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1115in_option0 = in_vars.id1114out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1115in_option1 = id1113out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1115x_1;

    switch((id1115in_sel.getValueAsLong())) {
      case 0l:
        id1115x_1 = id1115in_option0;
        break;
      case 1l:
        id1115x_1 = id1115in_option1;
        break;
      default:
        id1115x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1115out_result[(getCycle()+1)%2] = (id1115x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1116out_output;

  { // Node ID: 1116 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1116in_input = id1115out_result[getCycle()%2];

    id1116out_output = id1116in_input;
  }
  { // Node ID: 1118 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1118in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1118in_option0 = in_vars.id1117out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1118in_option1 = id1116out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1118x_1;

    switch((id1118in_sel.getValueAsLong())) {
      case 0l:
        id1118x_1 = id1118in_option0;
        break;
      case 1l:
        id1118x_1 = id1118in_option1;
        break;
      default:
        id1118x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1118out_result[(getCycle()+1)%2] = (id1118x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1119out_output;

  { // Node ID: 1119 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1119in_input = id1118out_result[getCycle()%2];

    id1119out_output = id1119in_input;
  }
  { // Node ID: 1121 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1121in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1121in_option0 = in_vars.id1120out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1121in_option1 = id1119out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1121x_1;

    switch((id1121in_sel.getValueAsLong())) {
      case 0l:
        id1121x_1 = id1121in_option0;
        break;
      case 1l:
        id1121x_1 = id1121in_option1;
        break;
      default:
        id1121x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1121out_result[(getCycle()+1)%2] = (id1121x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1122out_output;

  { // Node ID: 1122 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1122in_input = id1121out_result[getCycle()%2];

    id1122out_output = id1122in_input;
  }
  { // Node ID: 1124 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1124in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1124in_option0 = in_vars.id1123out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1124in_option1 = id1122out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1124x_1;

    switch((id1124in_sel.getValueAsLong())) {
      case 0l:
        id1124x_1 = id1124in_option0;
        break;
      case 1l:
        id1124x_1 = id1124in_option1;
        break;
      default:
        id1124x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1124out_result[(getCycle()+1)%2] = (id1124x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1125out_output;

  { // Node ID: 1125 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1125in_input = id1124out_result[getCycle()%2];

    id1125out_output = id1125in_input;
  }
  { // Node ID: 1127 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1127in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1127in_option0 = in_vars.id1126out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1127in_option1 = id1125out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1127x_1;

    switch((id1127in_sel.getValueAsLong())) {
      case 0l:
        id1127x_1 = id1127in_option0;
        break;
      case 1l:
        id1127x_1 = id1127in_option1;
        break;
      default:
        id1127x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1127out_result[(getCycle()+1)%2] = (id1127x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1128out_output;

  { // Node ID: 1128 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1128in_input = id1127out_result[getCycle()%2];

    id1128out_output = id1128in_input;
  }
  { // Node ID: 1130 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1130in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1130in_option0 = in_vars.id1129out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1130in_option1 = id1128out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1130x_1;

    switch((id1130in_sel.getValueAsLong())) {
      case 0l:
        id1130x_1 = id1130in_option0;
        break;
      case 1l:
        id1130x_1 = id1130in_option1;
        break;
      default:
        id1130x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1130out_result[(getCycle()+1)%2] = (id1130x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1131out_output;

  { // Node ID: 1131 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1131in_input = id1130out_result[getCycle()%2];

    id1131out_output = id1131in_input;
  }
  { // Node ID: 1133 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1133in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1133in_option0 = in_vars.id1132out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1133in_option1 = id1131out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1133x_1;

    switch((id1133in_sel.getValueAsLong())) {
      case 0l:
        id1133x_1 = id1133in_option0;
        break;
      case 1l:
        id1133x_1 = id1133in_option1;
        break;
      default:
        id1133x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1133out_result[(getCycle()+1)%2] = (id1133x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1134out_output;

  { // Node ID: 1134 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1134in_input = id1133out_result[getCycle()%2];

    id1134out_output = id1134in_input;
  }
  { // Node ID: 1136 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1136in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1136in_option0 = in_vars.id1135out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1136in_option1 = id1134out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1136x_1;

    switch((id1136in_sel.getValueAsLong())) {
      case 0l:
        id1136x_1 = id1136in_option0;
        break;
      case 1l:
        id1136x_1 = id1136in_option1;
        break;
      default:
        id1136x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1136out_result[(getCycle()+1)%2] = (id1136x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1137out_output;

  { // Node ID: 1137 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1137in_input = id1136out_result[getCycle()%2];

    id1137out_output = id1137in_input;
  }
  { // Node ID: 1139 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1139in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1139in_option0 = in_vars.id1138out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1139in_option1 = id1137out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1139x_1;

    switch((id1139in_sel.getValueAsLong())) {
      case 0l:
        id1139x_1 = id1139in_option0;
        break;
      case 1l:
        id1139x_1 = id1139in_option1;
        break;
      default:
        id1139x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1139out_result[(getCycle()+1)%2] = (id1139x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1140out_output;

  { // Node ID: 1140 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1140in_input = id1139out_result[getCycle()%2];

    id1140out_output = id1140in_input;
  }
  { // Node ID: 1142 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1142in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1142in_option0 = in_vars.id1141out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1142in_option1 = id1140out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1142x_1;

    switch((id1142in_sel.getValueAsLong())) {
      case 0l:
        id1142x_1 = id1142in_option0;
        break;
      case 1l:
        id1142x_1 = id1142in_option1;
        break;
      default:
        id1142x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1142out_result[(getCycle()+1)%2] = (id1142x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1143out_output;

  { // Node ID: 1143 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1143in_input = id1142out_result[getCycle()%2];

    id1143out_output = id1143in_input;
  }
  { // Node ID: 1145 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1145in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1145in_option0 = in_vars.id1144out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1145in_option1 = id1143out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1145x_1;

    switch((id1145in_sel.getValueAsLong())) {
      case 0l:
        id1145x_1 = id1145in_option0;
        break;
      case 1l:
        id1145x_1 = id1145in_option1;
        break;
      default:
        id1145x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1145out_result[(getCycle()+1)%2] = (id1145x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1146out_output;

  { // Node ID: 1146 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1146in_input = id1145out_result[getCycle()%2];

    id1146out_output = id1146in_input;
  }
  { // Node ID: 1148 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1148in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1148in_option0 = in_vars.id1147out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1148in_option1 = id1146out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1148x_1;

    switch((id1148in_sel.getValueAsLong())) {
      case 0l:
        id1148x_1 = id1148in_option0;
        break;
      case 1l:
        id1148x_1 = id1148in_option1;
        break;
      default:
        id1148x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1148out_result[(getCycle()+1)%2] = (id1148x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1149out_output;

  { // Node ID: 1149 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1149in_input = id1148out_result[getCycle()%2];

    id1149out_output = id1149in_input;
  }
  { // Node ID: 1151 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1151in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1151in_option0 = in_vars.id1150out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1151in_option1 = id1149out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1151x_1;

    switch((id1151in_sel.getValueAsLong())) {
      case 0l:
        id1151x_1 = id1151in_option0;
        break;
      case 1l:
        id1151x_1 = id1151in_option1;
        break;
      default:
        id1151x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1151out_result[(getCycle()+1)%2] = (id1151x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1152out_output;

  { // Node ID: 1152 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1152in_input = id1151out_result[getCycle()%2];

    id1152out_output = id1152in_input;
  }
  { // Node ID: 1154 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1154in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1154in_option0 = in_vars.id1153out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1154in_option1 = id1152out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1154x_1;

    switch((id1154in_sel.getValueAsLong())) {
      case 0l:
        id1154x_1 = id1154in_option0;
        break;
      case 1l:
        id1154x_1 = id1154in_option1;
        break;
      default:
        id1154x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1154out_result[(getCycle()+1)%2] = (id1154x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1155out_output;

  { // Node ID: 1155 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1155in_input = id1154out_result[getCycle()%2];

    id1155out_output = id1155in_input;
  }
  { // Node ID: 1157 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1157in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1157in_option0 = in_vars.id1156out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1157in_option1 = id1155out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1157x_1;

    switch((id1157in_sel.getValueAsLong())) {
      case 0l:
        id1157x_1 = id1157in_option0;
        break;
      case 1l:
        id1157x_1 = id1157in_option1;
        break;
      default:
        id1157x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1157out_result[(getCycle()+1)%2] = (id1157x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1158out_output;

  { // Node ID: 1158 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1158in_input = id1157out_result[getCycle()%2];

    id1158out_output = id1158in_input;
  }
  { // Node ID: 1160 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1160in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1160in_option0 = in_vars.id1159out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1160in_option1 = id1158out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1160x_1;

    switch((id1160in_sel.getValueAsLong())) {
      case 0l:
        id1160x_1 = id1160in_option0;
        break;
      case 1l:
        id1160x_1 = id1160in_option1;
        break;
      default:
        id1160x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1160out_result[(getCycle()+1)%2] = (id1160x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1161out_output;

  { // Node ID: 1161 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1161in_input = id1160out_result[getCycle()%2];

    id1161out_output = id1161in_input;
  }
  { // Node ID: 1163 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1163in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1163in_option0 = in_vars.id1162out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1163in_option1 = id1161out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1163x_1;

    switch((id1163in_sel.getValueAsLong())) {
      case 0l:
        id1163x_1 = id1163in_option0;
        break;
      case 1l:
        id1163x_1 = id1163in_option1;
        break;
      default:
        id1163x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1163out_result[(getCycle()+1)%2] = (id1163x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1164out_output;

  { // Node ID: 1164 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1164in_input = id1163out_result[getCycle()%2];

    id1164out_output = id1164in_input;
  }
  { // Node ID: 1166 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1166in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1166in_option0 = in_vars.id1165out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1166in_option1 = id1164out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1166x_1;

    switch((id1166in_sel.getValueAsLong())) {
      case 0l:
        id1166x_1 = id1166in_option0;
        break;
      case 1l:
        id1166x_1 = id1166in_option1;
        break;
      default:
        id1166x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1166out_result[(getCycle()+1)%2] = (id1166x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1167out_output;

  { // Node ID: 1167 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1167in_input = id1166out_result[getCycle()%2];

    id1167out_output = id1167in_input;
  }
  { // Node ID: 1169 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1169in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1169in_option0 = in_vars.id1168out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1169in_option1 = id1167out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1169x_1;

    switch((id1169in_sel.getValueAsLong())) {
      case 0l:
        id1169x_1 = id1169in_option0;
        break;
      case 1l:
        id1169x_1 = id1169in_option1;
        break;
      default:
        id1169x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1169out_result[(getCycle()+1)%2] = (id1169x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1170out_output;

  { // Node ID: 1170 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1170in_input = id1169out_result[getCycle()%2];

    id1170out_output = id1170in_input;
  }
  { // Node ID: 1172 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1172in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1172in_option0 = in_vars.id1171out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1172in_option1 = id1170out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1172x_1;

    switch((id1172in_sel.getValueAsLong())) {
      case 0l:
        id1172x_1 = id1172in_option0;
        break;
      case 1l:
        id1172x_1 = id1172in_option1;
        break;
      default:
        id1172x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1172out_result[(getCycle()+1)%2] = (id1172x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1173out_output;

  { // Node ID: 1173 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1173in_input = id1172out_result[getCycle()%2];

    id1173out_output = id1173in_input;
  }
  { // Node ID: 1175 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1175in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1175in_option0 = in_vars.id1174out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1175in_option1 = id1173out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1175x_1;

    switch((id1175in_sel.getValueAsLong())) {
      case 0l:
        id1175x_1 = id1175in_option0;
        break;
      case 1l:
        id1175x_1 = id1175in_option1;
        break;
      default:
        id1175x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1175out_result[(getCycle()+1)%2] = (id1175x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1176out_output;

  { // Node ID: 1176 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1176in_input = id1175out_result[getCycle()%2];

    id1176out_output = id1176in_input;
  }
  { // Node ID: 1178 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1178in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1178in_option0 = in_vars.id1177out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1178in_option1 = id1176out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1178x_1;

    switch((id1178in_sel.getValueAsLong())) {
      case 0l:
        id1178x_1 = id1178in_option0;
        break;
      case 1l:
        id1178x_1 = id1178in_option1;
        break;
      default:
        id1178x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1178out_result[(getCycle()+1)%2] = (id1178x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1179out_output;

  { // Node ID: 1179 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1179in_input = id1178out_result[getCycle()%2];

    id1179out_output = id1179in_input;
  }
  { // Node ID: 1181 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1181in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1181in_option0 = in_vars.id1180out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1181in_option1 = id1179out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1181x_1;

    switch((id1181in_sel.getValueAsLong())) {
      case 0l:
        id1181x_1 = id1181in_option0;
        break;
      case 1l:
        id1181x_1 = id1181in_option1;
        break;
      default:
        id1181x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1181out_result[(getCycle()+1)%2] = (id1181x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1182out_output;

  { // Node ID: 1182 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1182in_input = id1181out_result[getCycle()%2];

    id1182out_output = id1182in_input;
  }
  { // Node ID: 1184 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1184in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1184in_option0 = in_vars.id1183out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1184in_option1 = id1182out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1184x_1;

    switch((id1184in_sel.getValueAsLong())) {
      case 0l:
        id1184x_1 = id1184in_option0;
        break;
      case 1l:
        id1184x_1 = id1184in_option1;
        break;
      default:
        id1184x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1184out_result[(getCycle()+1)%2] = (id1184x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1185out_output;

  { // Node ID: 1185 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1185in_input = id1184out_result[getCycle()%2];

    id1185out_output = id1185in_input;
  }
  { // Node ID: 1187 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1187in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1187in_option0 = in_vars.id1186out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1187in_option1 = id1185out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1187x_1;

    switch((id1187in_sel.getValueAsLong())) {
      case 0l:
        id1187x_1 = id1187in_option0;
        break;
      case 1l:
        id1187x_1 = id1187in_option1;
        break;
      default:
        id1187x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1187out_result[(getCycle()+1)%2] = (id1187x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1188out_output;

  { // Node ID: 1188 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1188in_input = id1187out_result[getCycle()%2];

    id1188out_output = id1188in_input;
  }
  { // Node ID: 1190 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1190in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1190in_option0 = in_vars.id1189out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1190in_option1 = id1188out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1190x_1;

    switch((id1190in_sel.getValueAsLong())) {
      case 0l:
        id1190x_1 = id1190in_option0;
        break;
      case 1l:
        id1190x_1 = id1190in_option1;
        break;
      default:
        id1190x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1190out_result[(getCycle()+1)%2] = (id1190x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1191out_output;

  { // Node ID: 1191 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1191in_input = id1190out_result[getCycle()%2];

    id1191out_output = id1191in_input;
  }
  { // Node ID: 1193 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1193in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1193in_option0 = in_vars.id1192out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1193in_option1 = id1191out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1193x_1;

    switch((id1193in_sel.getValueAsLong())) {
      case 0l:
        id1193x_1 = id1193in_option0;
        break;
      case 1l:
        id1193x_1 = id1193in_option1;
        break;
      default:
        id1193x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1193out_result[(getCycle()+1)%2] = (id1193x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1194out_output;

  { // Node ID: 1194 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1194in_input = id1193out_result[getCycle()%2];

    id1194out_output = id1194in_input;
  }
  { // Node ID: 1196 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1196in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1196in_option0 = in_vars.id1195out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1196in_option1 = id1194out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1196x_1;

    switch((id1196in_sel.getValueAsLong())) {
      case 0l:
        id1196x_1 = id1196in_option0;
        break;
      case 1l:
        id1196x_1 = id1196in_option1;
        break;
      default:
        id1196x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1196out_result[(getCycle()+1)%2] = (id1196x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1197out_output;

  { // Node ID: 1197 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1197in_input = id1196out_result[getCycle()%2];

    id1197out_output = id1197in_input;
  }
  { // Node ID: 1199 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1199in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1199in_option0 = in_vars.id1198out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1199in_option1 = id1197out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1199x_1;

    switch((id1199in_sel.getValueAsLong())) {
      case 0l:
        id1199x_1 = id1199in_option0;
        break;
      case 1l:
        id1199x_1 = id1199in_option1;
        break;
      default:
        id1199x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1199out_result[(getCycle()+1)%2] = (id1199x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1200out_output;

  { // Node ID: 1200 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1200in_input = id1199out_result[getCycle()%2];

    id1200out_output = id1200in_input;
  }
  { // Node ID: 1202 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1202in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1202in_option0 = in_vars.id1201out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1202in_option1 = id1200out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1202x_1;

    switch((id1202in_sel.getValueAsLong())) {
      case 0l:
        id1202x_1 = id1202in_option0;
        break;
      case 1l:
        id1202x_1 = id1202in_option1;
        break;
      default:
        id1202x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1202out_result[(getCycle()+1)%2] = (id1202x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1203out_output;

  { // Node ID: 1203 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1203in_input = id1202out_result[getCycle()%2];

    id1203out_output = id1203in_input;
  }
  { // Node ID: 1205 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1205in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1205in_option0 = in_vars.id1204out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1205in_option1 = id1203out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1205x_1;

    switch((id1205in_sel.getValueAsLong())) {
      case 0l:
        id1205x_1 = id1205in_option0;
        break;
      case 1l:
        id1205x_1 = id1205in_option1;
        break;
      default:
        id1205x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1205out_result[(getCycle()+1)%2] = (id1205x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1206out_output;

  { // Node ID: 1206 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1206in_input = id1205out_result[getCycle()%2];

    id1206out_output = id1206in_input;
  }
  { // Node ID: 1208 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1208in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1208in_option0 = in_vars.id1207out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1208in_option1 = id1206out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1208x_1;

    switch((id1208in_sel.getValueAsLong())) {
      case 0l:
        id1208x_1 = id1208in_option0;
        break;
      case 1l:
        id1208x_1 = id1208in_option1;
        break;
      default:
        id1208x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1208out_result[(getCycle()+1)%2] = (id1208x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1209out_output;

  { // Node ID: 1209 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1209in_input = id1208out_result[getCycle()%2];

    id1209out_output = id1209in_input;
  }
  { // Node ID: 1211 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1211in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1211in_option0 = in_vars.id1210out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1211in_option1 = id1209out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1211x_1;

    switch((id1211in_sel.getValueAsLong())) {
      case 0l:
        id1211x_1 = id1211in_option0;
        break;
      case 1l:
        id1211x_1 = id1211in_option1;
        break;
      default:
        id1211x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1211out_result[(getCycle()+1)%2] = (id1211x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1212out_output;

  { // Node ID: 1212 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1212in_input = id1211out_result[getCycle()%2];

    id1212out_output = id1212in_input;
  }
  { // Node ID: 1214 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1214in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1214in_option0 = in_vars.id1213out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1214in_option1 = id1212out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1214x_1;

    switch((id1214in_sel.getValueAsLong())) {
      case 0l:
        id1214x_1 = id1214in_option0;
        break;
      case 1l:
        id1214x_1 = id1214in_option1;
        break;
      default:
        id1214x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1214out_result[(getCycle()+1)%2] = (id1214x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1215out_output;

  { // Node ID: 1215 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1215in_input = id1214out_result[getCycle()%2];

    id1215out_output = id1215in_input;
  }
  { // Node ID: 1217 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id1217in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1217in_option0 = in_vars.id1216out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1217in_option1 = id1215out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id1217x_1;

    switch((id1217in_sel.getValueAsLong())) {
      case 0l:
        id1217x_1 = id1217in_option0;
        break;
      case 1l:
        id1217x_1 = id1217in_option1;
        break;
      default:
        id1217x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id1217out_result[(getCycle()+1)%2] = (id1217x_1);
  }

  sliding_window10Block4Vars out_vars;
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
  out_vars.id3466out_output = in_vars.id3466out_output;
  out_vars.id3463out_output = in_vars.id3463out_output;
  out_vars.id3460out_output = in_vars.id3460out_output;
  out_vars.id3457out_output = in_vars.id3457out_output;
  out_vars.id3454out_output = in_vars.id3454out_output;
  out_vars.id3451out_output = in_vars.id3451out_output;
  out_vars.id3448out_output = in_vars.id3448out_output;
  out_vars.id3445out_output = in_vars.id3445out_output;
  out_vars.id3442out_output = in_vars.id3442out_output;
  out_vars.id3439out_output = in_vars.id3439out_output;
  out_vars.id3436out_output = in_vars.id3436out_output;
  out_vars.id3433out_output = in_vars.id3433out_output;
  out_vars.id3430out_output = in_vars.id3430out_output;
  out_vars.id3427out_output = in_vars.id3427out_output;
  out_vars.id3424out_output = in_vars.id3424out_output;
  out_vars.id3421out_output = in_vars.id3421out_output;
  out_vars.id3418out_output = in_vars.id3418out_output;
  out_vars.id3415out_output = in_vars.id3415out_output;
  out_vars.id3412out_output = in_vars.id3412out_output;
  out_vars.id3409out_output = in_vars.id3409out_output;
  out_vars.id3406out_output = in_vars.id3406out_output;
  out_vars.id3403out_output = in_vars.id3403out_output;
  out_vars.id3400out_output = in_vars.id3400out_output;
  out_vars.id3397out_output = in_vars.id3397out_output;
  out_vars.id3394out_output = in_vars.id3394out_output;
  out_vars.id3391out_output = in_vars.id3391out_output;
  out_vars.id3388out_output = in_vars.id3388out_output;
  out_vars.id3385out_output = in_vars.id3385out_output;
  out_vars.id3382out_output = in_vars.id3382out_output;
  out_vars.id3379out_output = in_vars.id3379out_output;
  out_vars.id3376out_output = in_vars.id3376out_output;
  out_vars.id3373out_output = in_vars.id3373out_output;
  out_vars.id3370out_output = in_vars.id3370out_output;
  out_vars.id3367out_output = in_vars.id3367out_output;
  out_vars.id3364out_output = in_vars.id3364out_output;
  out_vars.id3361out_output = in_vars.id3361out_output;
  out_vars.id3358out_output = in_vars.id3358out_output;
  out_vars.id3355out_output = in_vars.id3355out_output;
  out_vars.id3352out_output = in_vars.id3352out_output;
  out_vars.id3349out_output = in_vars.id3349out_output;
  out_vars.id3346out_output = in_vars.id3346out_output;
  out_vars.id3343out_output = in_vars.id3343out_output;
  out_vars.id3340out_output = in_vars.id3340out_output;
  out_vars.id3337out_output = in_vars.id3337out_output;
  out_vars.id3334out_output = in_vars.id3334out_output;
  out_vars.id3331out_output = in_vars.id3331out_output;
  out_vars.id3328out_output = in_vars.id3328out_output;
  out_vars.id3325out_output = in_vars.id3325out_output;
  out_vars.id3322out_output = in_vars.id3322out_output;
  out_vars.id3319out_output = in_vars.id3319out_output;
  out_vars.id3316out_output = in_vars.id3316out_output;
  out_vars.id3313out_output = in_vars.id3313out_output;
  out_vars.id3310out_output = in_vars.id3310out_output;
  out_vars.id3307out_output = in_vars.id3307out_output;
  out_vars.id3304out_output = in_vars.id3304out_output;
  out_vars.id3301out_output = in_vars.id3301out_output;
  out_vars.id3298out_output = in_vars.id3298out_output;
  out_vars.id3295out_output = in_vars.id3295out_output;
  out_vars.id3292out_output = in_vars.id3292out_output;
  out_vars.id3289out_output = in_vars.id3289out_output;
  out_vars.id3286out_output = in_vars.id3286out_output;
  out_vars.id3283out_output = in_vars.id3283out_output;
  out_vars.id3280out_output = in_vars.id3280out_output;
  out_vars.id3277out_output = in_vars.id3277out_output;
  out_vars.id3274out_output = in_vars.id3274out_output;
  out_vars.id3271out_output = in_vars.id3271out_output;
  out_vars.id3268out_output = in_vars.id3268out_output;
  out_vars.id3265out_output = in_vars.id3265out_output;
  out_vars.id3262out_output = in_vars.id3262out_output;
  out_vars.id3259out_output = in_vars.id3259out_output;
  out_vars.id3256out_output = in_vars.id3256out_output;
  out_vars.id3253out_output = in_vars.id3253out_output;
  out_vars.id3250out_output = in_vars.id3250out_output;
  out_vars.id3247out_output = in_vars.id3247out_output;
  out_vars.id3244out_output = in_vars.id3244out_output;
  out_vars.id3241out_output = in_vars.id3241out_output;
  out_vars.id3238out_output = in_vars.id3238out_output;
  out_vars.id3235out_output = in_vars.id3235out_output;
  out_vars.id3232out_output = in_vars.id3232out_output;
  out_vars.id3229out_output = in_vars.id3229out_output;
  out_vars.id3226out_output = in_vars.id3226out_output;
  out_vars.id3223out_output = in_vars.id3223out_output;
  out_vars.id3220out_output = in_vars.id3220out_output;
  out_vars.id3217out_output = in_vars.id3217out_output;
  out_vars.id3214out_output = in_vars.id3214out_output;
  out_vars.id3211out_output = in_vars.id3211out_output;
  out_vars.id3208out_output = in_vars.id3208out_output;
  out_vars.id3205out_output = in_vars.id3205out_output;
  out_vars.id3202out_output = in_vars.id3202out_output;
  out_vars.id3199out_output = in_vars.id3199out_output;
  out_vars.id3196out_output = in_vars.id3196out_output;
  out_vars.id3193out_output = in_vars.id3193out_output;
  out_vars.id3190out_output = in_vars.id3190out_output;
  out_vars.id3187out_output = in_vars.id3187out_output;
  out_vars.id3184out_output = in_vars.id3184out_output;
  out_vars.id3181out_output = in_vars.id3181out_output;
  out_vars.id3178out_output = in_vars.id3178out_output;
  out_vars.id3175out_output = in_vars.id3175out_output;
  out_vars.id3172out_output = in_vars.id3172out_output;
  out_vars.id3169out_output = in_vars.id3169out_output;
  out_vars.id3166out_output = in_vars.id3166out_output;
  out_vars.id3163out_output = in_vars.id3163out_output;
  out_vars.id3160out_output = in_vars.id3160out_output;
  out_vars.id3157out_output = in_vars.id3157out_output;
  out_vars.id3154out_output = in_vars.id3154out_output;
  out_vars.id3151out_output = in_vars.id3151out_output;
  out_vars.id3148out_output = in_vars.id3148out_output;
  out_vars.id3145out_output = in_vars.id3145out_output;
  out_vars.id3142out_output = in_vars.id3142out_output;
  out_vars.id3139out_output = in_vars.id3139out_output;
  out_vars.id3136out_output = in_vars.id3136out_output;
  out_vars.id3133out_output = in_vars.id3133out_output;
  out_vars.id3130out_output = in_vars.id3130out_output;
  out_vars.id3127out_output = in_vars.id3127out_output;
  out_vars.id3124out_output = in_vars.id3124out_output;
  out_vars.id3121out_output = in_vars.id3121out_output;
  out_vars.id3118out_output = in_vars.id3118out_output;
  out_vars.id3115out_output = in_vars.id3115out_output;
  out_vars.id3112out_output = in_vars.id3112out_output;
  out_vars.id3109out_output = in_vars.id3109out_output;
  out_vars.id3106out_output = in_vars.id3106out_output;
  out_vars.id3103out_output = in_vars.id3103out_output;
  out_vars.id3100out_output = in_vars.id3100out_output;
  out_vars.id3097out_output = in_vars.id3097out_output;
  out_vars.id3094out_output = in_vars.id3094out_output;
  out_vars.id3091out_output = in_vars.id3091out_output;
  out_vars.id3088out_output = in_vars.id3088out_output;
  out_vars.id3085out_output = in_vars.id3085out_output;
  out_vars.id3082out_output = in_vars.id3082out_output;
  out_vars.id3079out_output = in_vars.id3079out_output;
  out_vars.id3076out_output = in_vars.id3076out_output;
  out_vars.id3073out_output = in_vars.id3073out_output;
  out_vars.id3070out_output = in_vars.id3070out_output;
  out_vars.id3067out_output = in_vars.id3067out_output;
  out_vars.id3064out_output = in_vars.id3064out_output;
  out_vars.id3061out_output = in_vars.id3061out_output;
  out_vars.id3058out_output = in_vars.id3058out_output;
  out_vars.id3055out_output = in_vars.id3055out_output;
  out_vars.id3052out_output = in_vars.id3052out_output;
  out_vars.id3049out_output = in_vars.id3049out_output;
  out_vars.id3046out_output = in_vars.id3046out_output;
  out_vars.id3043out_output = in_vars.id3043out_output;
  out_vars.id3040out_output = in_vars.id3040out_output;
  out_vars.id3037out_output = in_vars.id3037out_output;
  out_vars.id3034out_output = in_vars.id3034out_output;
  out_vars.id3031out_output = in_vars.id3031out_output;
  out_vars.id3028out_output = in_vars.id3028out_output;
  out_vars.id3025out_output = in_vars.id3025out_output;
  out_vars.id3022out_output = in_vars.id3022out_output;
  out_vars.id3019out_output = in_vars.id3019out_output;
  out_vars.id3016out_output = in_vars.id3016out_output;
  out_vars.id3013out_output = in_vars.id3013out_output;
  out_vars.id3010out_output = in_vars.id3010out_output;
  out_vars.id3007out_output = in_vars.id3007out_output;
  out_vars.id3004out_output = in_vars.id3004out_output;
  out_vars.id3001out_output = in_vars.id3001out_output;
  out_vars.id2998out_output = in_vars.id2998out_output;
  out_vars.id2995out_output = in_vars.id2995out_output;
  out_vars.id2992out_output = in_vars.id2992out_output;
  out_vars.id2989out_output = in_vars.id2989out_output;
  out_vars.id2986out_output = in_vars.id2986out_output;
  out_vars.id2983out_output = in_vars.id2983out_output;
  out_vars.id2980out_output = in_vars.id2980out_output;
  out_vars.id2977out_output = in_vars.id2977out_output;
  out_vars.id2974out_output = in_vars.id2974out_output;
  out_vars.id2971out_output = in_vars.id2971out_output;
  out_vars.id2968out_output = in_vars.id2968out_output;
  out_vars.id2965out_output = in_vars.id2965out_output;
  out_vars.id2962out_output = in_vars.id2962out_output;
  out_vars.id2959out_output = in_vars.id2959out_output;
  out_vars.id2956out_output = in_vars.id2956out_output;
  out_vars.id2953out_output = in_vars.id2953out_output;
  out_vars.id2950out_output = in_vars.id2950out_output;
  out_vars.id2947out_output = in_vars.id2947out_output;
  out_vars.id2944out_output = in_vars.id2944out_output;
  out_vars.id2941out_output = in_vars.id2941out_output;
  out_vars.id2938out_output = in_vars.id2938out_output;
  out_vars.id2935out_output = in_vars.id2935out_output;
  out_vars.id2932out_output = in_vars.id2932out_output;
  out_vars.id2929out_output = in_vars.id2929out_output;
  out_vars.id2926out_output = in_vars.id2926out_output;
  out_vars.id2923out_output = in_vars.id2923out_output;
  out_vars.id2920out_output = in_vars.id2920out_output;
  out_vars.id2917out_output = in_vars.id2917out_output;
  out_vars.id2914out_output = in_vars.id2914out_output;
  out_vars.id2911out_output = in_vars.id2911out_output;
  out_vars.id2908out_output = in_vars.id2908out_output;
  out_vars.id2905out_output = in_vars.id2905out_output;
  out_vars.id2902out_output = in_vars.id2902out_output;
  out_vars.id2899out_output = in_vars.id2899out_output;
  out_vars.id2896out_output = in_vars.id2896out_output;
  out_vars.id2893out_output = in_vars.id2893out_output;
  out_vars.id2890out_output = in_vars.id2890out_output;
  out_vars.id2887out_output = in_vars.id2887out_output;
  out_vars.id2884out_output = in_vars.id2884out_output;
  out_vars.id2881out_output = in_vars.id2881out_output;
  out_vars.id2878out_output = in_vars.id2878out_output;
  out_vars.id2875out_output = in_vars.id2875out_output;
  out_vars.id2872out_output = in_vars.id2872out_output;
  out_vars.id2869out_output = in_vars.id2869out_output;
  out_vars.id2866out_output = in_vars.id2866out_output;
  out_vars.id2863out_output = in_vars.id2863out_output;
  out_vars.id2860out_output = in_vars.id2860out_output;
  out_vars.id2857out_output = in_vars.id2857out_output;
  out_vars.id2854out_output = in_vars.id2854out_output;
  out_vars.id2851out_output = in_vars.id2851out_output;
  out_vars.id2848out_output = in_vars.id2848out_output;
  out_vars.id2845out_output = in_vars.id2845out_output;
  out_vars.id2842out_output = in_vars.id2842out_output;
  out_vars.id2839out_output = in_vars.id2839out_output;
  out_vars.id2836out_output = in_vars.id2836out_output;
  out_vars.id2833out_output = in_vars.id2833out_output;
  out_vars.id2830out_output = in_vars.id2830out_output;
  out_vars.id2827out_output = in_vars.id2827out_output;
  out_vars.id2824out_output = in_vars.id2824out_output;
  out_vars.id2821out_output = in_vars.id2821out_output;
  out_vars.id2818out_output = in_vars.id2818out_output;
  out_vars.id2815out_output = in_vars.id2815out_output;
  out_vars.id2812out_output = in_vars.id2812out_output;
  out_vars.id2809out_output = in_vars.id2809out_output;
  out_vars.id2806out_output = in_vars.id2806out_output;
  out_vars.id2803out_output = in_vars.id2803out_output;
  out_vars.id2800out_output = in_vars.id2800out_output;
  out_vars.id2797out_output = in_vars.id2797out_output;
  out_vars.id2794out_output = in_vars.id2794out_output;
  out_vars.id2791out_output = in_vars.id2791out_output;
  out_vars.id2788out_output = in_vars.id2788out_output;
  out_vars.id2785out_output = in_vars.id2785out_output;
  out_vars.id2782out_output = in_vars.id2782out_output;
  out_vars.id2779out_output = in_vars.id2779out_output;
  out_vars.id2776out_output = in_vars.id2776out_output;
  out_vars.id2773out_output = in_vars.id2773out_output;
  out_vars.id2770out_output = in_vars.id2770out_output;
  out_vars.id2767out_output = in_vars.id2767out_output;
  out_vars.id2764out_output = in_vars.id2764out_output;
  out_vars.id2761out_output = in_vars.id2761out_output;
  out_vars.id2758out_output = in_vars.id2758out_output;
  out_vars.id2755out_output = in_vars.id2755out_output;
  out_vars.id2752out_output = in_vars.id2752out_output;
  out_vars.id2749out_output = in_vars.id2749out_output;
  out_vars.id2746out_output = in_vars.id2746out_output;
  out_vars.id2743out_output = in_vars.id2743out_output;
  out_vars.id2740out_output = in_vars.id2740out_output;
  out_vars.id2737out_output = in_vars.id2737out_output;
  out_vars.id2734out_output = in_vars.id2734out_output;
  out_vars.id2731out_output = in_vars.id2731out_output;
  out_vars.id2728out_output = in_vars.id2728out_output;
  out_vars.id2725out_output = in_vars.id2725out_output;
  out_vars.id2722out_output = in_vars.id2722out_output;
  out_vars.id2719out_output = in_vars.id2719out_output;
  out_vars.id2716out_output = in_vars.id2716out_output;
  out_vars.id2713out_output = in_vars.id2713out_output;
  out_vars.id2710out_output = in_vars.id2710out_output;
  out_vars.id2707out_output = in_vars.id2707out_output;
  out_vars.id2704out_output = in_vars.id2704out_output;
  out_vars.id2701out_output = in_vars.id2701out_output;
  out_vars.id2698out_output = in_vars.id2698out_output;
  out_vars.id2695out_output = in_vars.id2695out_output;
  out_vars.id2692out_output = in_vars.id2692out_output;
  out_vars.id2689out_output = in_vars.id2689out_output;
  out_vars.id2686out_output = in_vars.id2686out_output;
  out_vars.id2683out_output = in_vars.id2683out_output;
  out_vars.id2680out_output = in_vars.id2680out_output;
  out_vars.id2677out_output = in_vars.id2677out_output;
  out_vars.id2674out_output = in_vars.id2674out_output;
  out_vars.id2671out_output = in_vars.id2671out_output;
  out_vars.id2668out_output = in_vars.id2668out_output;
  out_vars.id2665out_output = in_vars.id2665out_output;
  out_vars.id2662out_output = in_vars.id2662out_output;
  out_vars.id2659out_output = in_vars.id2659out_output;
  out_vars.id2656out_output = in_vars.id2656out_output;
  out_vars.id2653out_output = in_vars.id2653out_output;
  out_vars.id2650out_output = in_vars.id2650out_output;
  out_vars.id2647out_output = in_vars.id2647out_output;
  out_vars.id2644out_output = in_vars.id2644out_output;
  out_vars.id2641out_output = in_vars.id2641out_output;
  out_vars.id2638out_output = in_vars.id2638out_output;
  out_vars.id2635out_output = in_vars.id2635out_output;
  out_vars.id2632out_output = in_vars.id2632out_output;
  out_vars.id2629out_output = in_vars.id2629out_output;
  out_vars.id2626out_output = in_vars.id2626out_output;
  out_vars.id2623out_output = in_vars.id2623out_output;
  out_vars.id2620out_output = in_vars.id2620out_output;
  out_vars.id2617out_output = in_vars.id2617out_output;
  out_vars.id2614out_output = in_vars.id2614out_output;
  out_vars.id2611out_output = in_vars.id2611out_output;
  out_vars.id2608out_output = in_vars.id2608out_output;
  out_vars.id2605out_output = in_vars.id2605out_output;
  out_vars.id2602out_output = in_vars.id2602out_output;
  out_vars.id2599out_output = in_vars.id2599out_output;
  out_vars.id2596out_output = in_vars.id2596out_output;
  out_vars.id2593out_output = in_vars.id2593out_output;
  out_vars.id2590out_output = in_vars.id2590out_output;
  out_vars.id2587out_output = in_vars.id2587out_output;
  out_vars.id2584out_output = in_vars.id2584out_output;
  out_vars.id2581out_output = in_vars.id2581out_output;
  out_vars.id2578out_output = in_vars.id2578out_output;
  out_vars.id2575out_output = in_vars.id2575out_output;
  out_vars.id2572out_output = in_vars.id2572out_output;
  out_vars.id2569out_output = in_vars.id2569out_output;
  out_vars.id2566out_output = in_vars.id2566out_output;
  out_vars.id2563out_output = in_vars.id2563out_output;
  out_vars.id2560out_output = in_vars.id2560out_output;
  out_vars.id2557out_output = in_vars.id2557out_output;
  out_vars.id2554out_output = in_vars.id2554out_output;
  out_vars.id2551out_output = in_vars.id2551out_output;
  out_vars.id2548out_output = in_vars.id2548out_output;
  out_vars.id2545out_output = in_vars.id2545out_output;
  out_vars.id2542out_output = in_vars.id2542out_output;
  out_vars.id2539out_output = in_vars.id2539out_output;
  out_vars.id2536out_output = in_vars.id2536out_output;
  out_vars.id2533out_output = in_vars.id2533out_output;
  out_vars.id2530out_output = in_vars.id2530out_output;
  out_vars.id2527out_output = in_vars.id2527out_output;
  out_vars.id2524out_output = in_vars.id2524out_output;
  out_vars.id2521out_output = in_vars.id2521out_output;
  out_vars.id2518out_output = in_vars.id2518out_output;
  out_vars.id2515out_output = in_vars.id2515out_output;
  out_vars.id2512out_output = in_vars.id2512out_output;
  out_vars.id2509out_output = in_vars.id2509out_output;
  out_vars.id2506out_output = in_vars.id2506out_output;
  out_vars.id2503out_output = in_vars.id2503out_output;
  out_vars.id2500out_output = in_vars.id2500out_output;
  out_vars.id2497out_output = in_vars.id2497out_output;
  out_vars.id2494out_output = in_vars.id2494out_output;
  out_vars.id2491out_output = in_vars.id2491out_output;
  out_vars.id2488out_output = in_vars.id2488out_output;
  out_vars.id2485out_output = in_vars.id2485out_output;
  out_vars.id2482out_output = in_vars.id2482out_output;
  out_vars.id2479out_output = in_vars.id2479out_output;
  out_vars.id2476out_output = in_vars.id2476out_output;
  out_vars.id2473out_output = in_vars.id2473out_output;
  out_vars.id2470out_output = in_vars.id2470out_output;
  out_vars.id2467out_output = in_vars.id2467out_output;
  out_vars.id2464out_output = in_vars.id2464out_output;
  out_vars.id2461out_output = in_vars.id2461out_output;
  out_vars.id2458out_output = in_vars.id2458out_output;
  out_vars.id2455out_output = in_vars.id2455out_output;
  out_vars.id2452out_output = in_vars.id2452out_output;
  out_vars.id2449out_output = in_vars.id2449out_output;
  out_vars.id2446out_output = in_vars.id2446out_output;
  out_vars.id2443out_output = in_vars.id2443out_output;
  out_vars.id2440out_output = in_vars.id2440out_output;
  out_vars.id2437out_output = in_vars.id2437out_output;
  out_vars.id2434out_output = in_vars.id2434out_output;
  out_vars.id2431out_output = in_vars.id2431out_output;
  out_vars.id2428out_output = in_vars.id2428out_output;
  out_vars.id2425out_output = in_vars.id2425out_output;
  out_vars.id2422out_output = in_vars.id2422out_output;
  out_vars.id2419out_output = in_vars.id2419out_output;
  out_vars.id2416out_output = in_vars.id2416out_output;
  out_vars.id2413out_output = in_vars.id2413out_output;
  out_vars.id2410out_output = in_vars.id2410out_output;
  out_vars.id2407out_output = in_vars.id2407out_output;
  out_vars.id2404out_output = in_vars.id2404out_output;
  out_vars.id2401out_output = in_vars.id2401out_output;
  out_vars.id2398out_output = in_vars.id2398out_output;
  out_vars.id2395out_output = in_vars.id2395out_output;
  out_vars.id2392out_output = in_vars.id2392out_output;
  out_vars.id2389out_output = in_vars.id2389out_output;
  out_vars.id2386out_output = in_vars.id2386out_output;
  out_vars.id2383out_output = in_vars.id2383out_output;
  out_vars.id2380out_output = in_vars.id2380out_output;
  out_vars.id2377out_output = in_vars.id2377out_output;
  out_vars.id2374out_output = in_vars.id2374out_output;
  out_vars.id2371out_output = in_vars.id2371out_output;
  out_vars.id2368out_output = in_vars.id2368out_output;
  out_vars.id2365out_output = in_vars.id2365out_output;
  out_vars.id2362out_output = in_vars.id2362out_output;
  out_vars.id2359out_output = in_vars.id2359out_output;
  out_vars.id2356out_output = in_vars.id2356out_output;
  out_vars.id2353out_output = in_vars.id2353out_output;
  out_vars.id2350out_output = in_vars.id2350out_output;
  out_vars.id2347out_output = in_vars.id2347out_output;
  out_vars.id2344out_output = in_vars.id2344out_output;
  out_vars.id2341out_output = in_vars.id2341out_output;
  out_vars.id2338out_output = in_vars.id2338out_output;
  out_vars.id2335out_output = in_vars.id2335out_output;
  out_vars.id2332out_output = in_vars.id2332out_output;
  out_vars.id2329out_output = in_vars.id2329out_output;
  out_vars.id2326out_output = in_vars.id2326out_output;
  out_vars.id2323out_output = in_vars.id2323out_output;
  out_vars.id2320out_output = in_vars.id2320out_output;
  out_vars.id2317out_output = in_vars.id2317out_output;
  out_vars.id2314out_output = in_vars.id2314out_output;
  out_vars.id2311out_output = in_vars.id2311out_output;
  out_vars.id2308out_output = in_vars.id2308out_output;
  out_vars.id2305out_output = in_vars.id2305out_output;
  out_vars.id2302out_output = in_vars.id2302out_output;
  out_vars.id2299out_output = in_vars.id2299out_output;
  out_vars.id2296out_output = in_vars.id2296out_output;
  out_vars.id2293out_output = in_vars.id2293out_output;
  out_vars.id2290out_output = in_vars.id2290out_output;
  out_vars.id2287out_output = in_vars.id2287out_output;
  out_vars.id2284out_output = in_vars.id2284out_output;
  out_vars.id2281out_output = in_vars.id2281out_output;
  out_vars.id2278out_output = in_vars.id2278out_output;
  out_vars.id2275out_output = in_vars.id2275out_output;
  out_vars.id2272out_output = in_vars.id2272out_output;
  out_vars.id2269out_output = in_vars.id2269out_output;
  out_vars.id2266out_output = in_vars.id2266out_output;
  out_vars.id2263out_output = in_vars.id2263out_output;
  out_vars.id2260out_output = in_vars.id2260out_output;
  out_vars.id2257out_output = in_vars.id2257out_output;
  out_vars.id2254out_output = in_vars.id2254out_output;
  out_vars.id2251out_output = in_vars.id2251out_output;
  out_vars.id2248out_output = in_vars.id2248out_output;
  out_vars.id2245out_output = in_vars.id2245out_output;
  out_vars.id2242out_output = in_vars.id2242out_output;
  out_vars.id2239out_output = in_vars.id2239out_output;
  out_vars.id2236out_output = in_vars.id2236out_output;
  out_vars.id2233out_output = in_vars.id2233out_output;
  out_vars.id2230out_output = in_vars.id2230out_output;
  out_vars.id2227out_output = in_vars.id2227out_output;
  out_vars.id2224out_output = in_vars.id2224out_output;
  out_vars.id2221out_output = in_vars.id2221out_output;
  out_vars.id2218out_output = in_vars.id2218out_output;
  out_vars.id2215out_output = in_vars.id2215out_output;
  out_vars.id2212out_output = in_vars.id2212out_output;
  out_vars.id2209out_output = in_vars.id2209out_output;
  out_vars.id2206out_output = in_vars.id2206out_output;
  out_vars.id2203out_output = in_vars.id2203out_output;
  out_vars.id2200out_output = in_vars.id2200out_output;
  out_vars.id2197out_output = in_vars.id2197out_output;
  out_vars.id2194out_output = in_vars.id2194out_output;
  out_vars.id2191out_output = in_vars.id2191out_output;
  out_vars.id2188out_output = in_vars.id2188out_output;
  out_vars.id2185out_output = in_vars.id2185out_output;
  out_vars.id2182out_output = in_vars.id2182out_output;
  out_vars.id2179out_output = in_vars.id2179out_output;
  out_vars.id2176out_output = in_vars.id2176out_output;
  out_vars.id2173out_output = in_vars.id2173out_output;
  out_vars.id2170out_output = in_vars.id2170out_output;
  out_vars.id2167out_output = in_vars.id2167out_output;
  out_vars.id2164out_output = in_vars.id2164out_output;
  out_vars.id2161out_output = in_vars.id2161out_output;
  out_vars.id2158out_output = in_vars.id2158out_output;
  out_vars.id2155out_output = in_vars.id2155out_output;
  out_vars.id2152out_output = in_vars.id2152out_output;
  out_vars.id2149out_output = in_vars.id2149out_output;
  out_vars.id2146out_output = in_vars.id2146out_output;
  out_vars.id2143out_output = in_vars.id2143out_output;
  out_vars.id2140out_output = in_vars.id2140out_output;
  out_vars.id2137out_output = in_vars.id2137out_output;
  out_vars.id2134out_output = in_vars.id2134out_output;
  out_vars.id2131out_output = in_vars.id2131out_output;
  out_vars.id2128out_output = in_vars.id2128out_output;
  out_vars.id2125out_output = in_vars.id2125out_output;
  out_vars.id2122out_output = in_vars.id2122out_output;
  out_vars.id2119out_output = in_vars.id2119out_output;
  out_vars.id2116out_output = in_vars.id2116out_output;
  out_vars.id2113out_output = in_vars.id2113out_output;
  out_vars.id2110out_output = in_vars.id2110out_output;
  out_vars.id2107out_output = in_vars.id2107out_output;
  out_vars.id2104out_output = in_vars.id2104out_output;
  out_vars.id2101out_output = in_vars.id2101out_output;
  out_vars.id2098out_output = in_vars.id2098out_output;
  out_vars.id2095out_output = in_vars.id2095out_output;
  out_vars.id2092out_output = in_vars.id2092out_output;
  out_vars.id2089out_output = in_vars.id2089out_output;
  out_vars.id2086out_output = in_vars.id2086out_output;
  out_vars.id2083out_output = in_vars.id2083out_output;
  out_vars.id2080out_output = in_vars.id2080out_output;
  out_vars.id2077out_output = in_vars.id2077out_output;
  out_vars.id2074out_output = in_vars.id2074out_output;
  out_vars.id2071out_output = in_vars.id2071out_output;
  out_vars.id2068out_output = in_vars.id2068out_output;
  out_vars.id2065out_output = in_vars.id2065out_output;
  out_vars.id2062out_output = in_vars.id2062out_output;
  out_vars.id2059out_output = in_vars.id2059out_output;
  out_vars.id2056out_output = in_vars.id2056out_output;
  out_vars.id2053out_output = in_vars.id2053out_output;
  out_vars.id2050out_output = in_vars.id2050out_output;
  out_vars.id2047out_output = in_vars.id2047out_output;
  out_vars.id2044out_output = in_vars.id2044out_output;
  out_vars.id2041out_output = in_vars.id2041out_output;
  out_vars.id2038out_output = in_vars.id2038out_output;
  out_vars.id2035out_output = in_vars.id2035out_output;
  out_vars.id2032out_output = in_vars.id2032out_output;
  out_vars.id2029out_output = in_vars.id2029out_output;
  out_vars.id2026out_output = in_vars.id2026out_output;
  out_vars.id2023out_output = in_vars.id2023out_output;
  out_vars.id2020out_output = in_vars.id2020out_output;
  out_vars.id2017out_output = in_vars.id2017out_output;
  out_vars.id2014out_output = in_vars.id2014out_output;
  out_vars.id2011out_output = in_vars.id2011out_output;
  out_vars.id2008out_output = in_vars.id2008out_output;
  out_vars.id2005out_output = in_vars.id2005out_output;
  out_vars.id2002out_output = in_vars.id2002out_output;
  out_vars.id1999out_output = in_vars.id1999out_output;
  out_vars.id1996out_output = in_vars.id1996out_output;
  out_vars.id1993out_output = in_vars.id1993out_output;
  out_vars.id1990out_output = in_vars.id1990out_output;
  out_vars.id1987out_output = in_vars.id1987out_output;
  out_vars.id1984out_output = in_vars.id1984out_output;
  out_vars.id1981out_output = in_vars.id1981out_output;
  out_vars.id1978out_output = in_vars.id1978out_output;
  out_vars.id1975out_output = in_vars.id1975out_output;
  out_vars.id1972out_output = in_vars.id1972out_output;
  out_vars.id1969out_output = in_vars.id1969out_output;
  out_vars.id1966out_output = in_vars.id1966out_output;
  out_vars.id1963out_output = in_vars.id1963out_output;
  out_vars.id1960out_output = in_vars.id1960out_output;
  out_vars.id1957out_output = in_vars.id1957out_output;
  out_vars.id1954out_output = in_vars.id1954out_output;
  out_vars.id1951out_output = in_vars.id1951out_output;
  out_vars.id1948out_output = in_vars.id1948out_output;
  out_vars.id1945out_output = in_vars.id1945out_output;
  out_vars.id1942out_output = in_vars.id1942out_output;
  out_vars.id1939out_output = in_vars.id1939out_output;
  out_vars.id1936out_output = in_vars.id1936out_output;
  out_vars.id1933out_output = in_vars.id1933out_output;
  out_vars.id1930out_output = in_vars.id1930out_output;
  out_vars.id1927out_output = in_vars.id1927out_output;
  out_vars.id1924out_output = in_vars.id1924out_output;
  out_vars.id1921out_output = in_vars.id1921out_output;
  out_vars.id1918out_output = in_vars.id1918out_output;
  out_vars.id1915out_output = in_vars.id1915out_output;
  out_vars.id1912out_output = in_vars.id1912out_output;
  out_vars.id1909out_output = in_vars.id1909out_output;
  out_vars.id1906out_output = in_vars.id1906out_output;
  out_vars.id1903out_output = in_vars.id1903out_output;
  out_vars.id1900out_output = in_vars.id1900out_output;
  out_vars.id1897out_output = in_vars.id1897out_output;
  out_vars.id1894out_output = in_vars.id1894out_output;
  out_vars.id1891out_output = in_vars.id1891out_output;
  out_vars.id1888out_output = in_vars.id1888out_output;
  out_vars.id1885out_output = in_vars.id1885out_output;
  out_vars.id1882out_output = in_vars.id1882out_output;
  out_vars.id1879out_output = in_vars.id1879out_output;
  out_vars.id1876out_output = in_vars.id1876out_output;
  out_vars.id1873out_output = in_vars.id1873out_output;
  out_vars.id1870out_output = in_vars.id1870out_output;
  out_vars.id1867out_output = in_vars.id1867out_output;
  out_vars.id1864out_output = in_vars.id1864out_output;
  out_vars.id1861out_output = in_vars.id1861out_output;
  out_vars.id1858out_output = in_vars.id1858out_output;
  out_vars.id1855out_output = in_vars.id1855out_output;
  out_vars.id1852out_output = in_vars.id1852out_output;
  out_vars.id1849out_output = in_vars.id1849out_output;
  out_vars.id1846out_output = in_vars.id1846out_output;
  out_vars.id1843out_output = in_vars.id1843out_output;
  out_vars.id1840out_output = in_vars.id1840out_output;
  out_vars.id1837out_output = in_vars.id1837out_output;
  out_vars.id1834out_output = in_vars.id1834out_output;
  out_vars.id1831out_output = in_vars.id1831out_output;
  out_vars.id1828out_output = in_vars.id1828out_output;
  out_vars.id1825out_output = in_vars.id1825out_output;
  out_vars.id1822out_output = in_vars.id1822out_output;
  out_vars.id1819out_output = in_vars.id1819out_output;
  out_vars.id1816out_output = in_vars.id1816out_output;
  out_vars.id1813out_output = in_vars.id1813out_output;
  out_vars.id1810out_output = in_vars.id1810out_output;
  out_vars.id1807out_output = in_vars.id1807out_output;
  out_vars.id1804out_output = in_vars.id1804out_output;
  out_vars.id1801out_output = in_vars.id1801out_output;
  out_vars.id1798out_output = in_vars.id1798out_output;
  out_vars.id1795out_output = in_vars.id1795out_output;
  out_vars.id1792out_output = in_vars.id1792out_output;
  out_vars.id1789out_output = in_vars.id1789out_output;
  out_vars.id1786out_output = in_vars.id1786out_output;
  out_vars.id1783out_output = in_vars.id1783out_output;
  out_vars.id1780out_output = in_vars.id1780out_output;
  out_vars.id1777out_output = in_vars.id1777out_output;
  out_vars.id1774out_output = in_vars.id1774out_output;
  out_vars.id1771out_output = in_vars.id1771out_output;
  out_vars.id1768out_output = in_vars.id1768out_output;
  out_vars.id1765out_output = in_vars.id1765out_output;
  out_vars.id1762out_output = in_vars.id1762out_output;
  out_vars.id1759out_output = in_vars.id1759out_output;
  out_vars.id1756out_output = in_vars.id1756out_output;
  out_vars.id1753out_output = in_vars.id1753out_output;
  out_vars.id1750out_output = in_vars.id1750out_output;
  out_vars.id1747out_output = in_vars.id1747out_output;
  out_vars.id1744out_output = in_vars.id1744out_output;
  out_vars.id1741out_output = in_vars.id1741out_output;
  out_vars.id1738out_output = in_vars.id1738out_output;
  out_vars.id1735out_output = in_vars.id1735out_output;
  out_vars.id1732out_output = in_vars.id1732out_output;
  out_vars.id1729out_output = in_vars.id1729out_output;
  out_vars.id1726out_output = in_vars.id1726out_output;
  out_vars.id1723out_output = in_vars.id1723out_output;
  out_vars.id1720out_output = in_vars.id1720out_output;
  out_vars.id1717out_output = in_vars.id1717out_output;
  out_vars.id1714out_output = in_vars.id1714out_output;
  out_vars.id1711out_output = in_vars.id1711out_output;
  out_vars.id1708out_output = in_vars.id1708out_output;
  out_vars.id1705out_output = in_vars.id1705out_output;
  out_vars.id1702out_output = in_vars.id1702out_output;
  out_vars.id1699out_output = in_vars.id1699out_output;
  out_vars.id1696out_output = in_vars.id1696out_output;
  out_vars.id1693out_output = in_vars.id1693out_output;
  out_vars.id1690out_output = in_vars.id1690out_output;
  out_vars.id1687out_output = in_vars.id1687out_output;
  out_vars.id1684out_output = in_vars.id1684out_output;
  out_vars.id1681out_output = in_vars.id1681out_output;
  out_vars.id1678out_output = in_vars.id1678out_output;
  out_vars.id1675out_output = in_vars.id1675out_output;
  out_vars.id1672out_output = in_vars.id1672out_output;
  out_vars.id1669out_output = in_vars.id1669out_output;
  out_vars.id1666out_output = in_vars.id1666out_output;
  out_vars.id1663out_output = in_vars.id1663out_output;
  out_vars.id1660out_output = in_vars.id1660out_output;
  out_vars.id1657out_output = in_vars.id1657out_output;
  out_vars.id1654out_output = in_vars.id1654out_output;
  out_vars.id1651out_output = in_vars.id1651out_output;
  out_vars.id1648out_output = in_vars.id1648out_output;
  out_vars.id1645out_output = in_vars.id1645out_output;
  out_vars.id1642out_output = in_vars.id1642out_output;
  out_vars.id1639out_output = in_vars.id1639out_output;
  out_vars.id1636out_output = in_vars.id1636out_output;
  out_vars.id1633out_output = in_vars.id1633out_output;
  out_vars.id1630out_output = in_vars.id1630out_output;
  out_vars.id1627out_output = in_vars.id1627out_output;
  out_vars.id1624out_output = in_vars.id1624out_output;
  out_vars.id1621out_output = in_vars.id1621out_output;
  out_vars.id1618out_output = in_vars.id1618out_output;
  out_vars.id1615out_output = in_vars.id1615out_output;
  out_vars.id1612out_output = in_vars.id1612out_output;
  out_vars.id1609out_output = in_vars.id1609out_output;
  out_vars.id1606out_output = in_vars.id1606out_output;
  out_vars.id1603out_output = in_vars.id1603out_output;
  out_vars.id1600out_output = in_vars.id1600out_output;
  out_vars.id1597out_output = in_vars.id1597out_output;
  out_vars.id1594out_output = in_vars.id1594out_output;
  out_vars.id1591out_output = in_vars.id1591out_output;
  out_vars.id1588out_output = in_vars.id1588out_output;
  out_vars.id1585out_output = in_vars.id1585out_output;
  out_vars.id1582out_output = in_vars.id1582out_output;
  out_vars.id1579out_output = in_vars.id1579out_output;
  out_vars.id1576out_output = in_vars.id1576out_output;
  out_vars.id1573out_output = in_vars.id1573out_output;
  out_vars.id1570out_output = in_vars.id1570out_output;
  out_vars.id1567out_output = in_vars.id1567out_output;
  out_vars.id1564out_output = in_vars.id1564out_output;
  out_vars.id1561out_output = in_vars.id1561out_output;
  out_vars.id1558out_output = in_vars.id1558out_output;
  out_vars.id1555out_output = in_vars.id1555out_output;
  out_vars.id1552out_output = in_vars.id1552out_output;
  out_vars.id1549out_output = in_vars.id1549out_output;
  out_vars.id1546out_output = in_vars.id1546out_output;
  out_vars.id1543out_output = in_vars.id1543out_output;
  out_vars.id1540out_output = in_vars.id1540out_output;
  out_vars.id1537out_output = in_vars.id1537out_output;
  out_vars.id1534out_output = in_vars.id1534out_output;
  out_vars.id1531out_output = in_vars.id1531out_output;
  out_vars.id1528out_output = in_vars.id1528out_output;
  out_vars.id1525out_output = in_vars.id1525out_output;
  out_vars.id1522out_output = in_vars.id1522out_output;
  out_vars.id1519out_output = in_vars.id1519out_output;
  out_vars.id1516out_output = in_vars.id1516out_output;
  out_vars.id1513out_output = in_vars.id1513out_output;
  out_vars.id1510out_output = in_vars.id1510out_output;
  out_vars.id1507out_output = in_vars.id1507out_output;
  out_vars.id1504out_output = in_vars.id1504out_output;
  out_vars.id1501out_output = in_vars.id1501out_output;
  out_vars.id1498out_output = in_vars.id1498out_output;
  out_vars.id1495out_output = in_vars.id1495out_output;
  out_vars.id1492out_output = in_vars.id1492out_output;
  out_vars.id1489out_output = in_vars.id1489out_output;
  out_vars.id1486out_output = in_vars.id1486out_output;
  out_vars.id1483out_output = in_vars.id1483out_output;
  out_vars.id1480out_output = in_vars.id1480out_output;
  out_vars.id1477out_output = in_vars.id1477out_output;
  out_vars.id1474out_output = in_vars.id1474out_output;
  out_vars.id1471out_output = in_vars.id1471out_output;
  out_vars.id1468out_output = in_vars.id1468out_output;
  out_vars.id1465out_output = in_vars.id1465out_output;
  out_vars.id1462out_output = in_vars.id1462out_output;
  out_vars.id1459out_output = in_vars.id1459out_output;
  out_vars.id1456out_output = in_vars.id1456out_output;
  out_vars.id1453out_output = in_vars.id1453out_output;
  out_vars.id1450out_output = in_vars.id1450out_output;
  out_vars.id1447out_output = in_vars.id1447out_output;
  out_vars.id1444out_output = in_vars.id1444out_output;
  out_vars.id1441out_output = in_vars.id1441out_output;
  out_vars.id1438out_output = in_vars.id1438out_output;
  out_vars.id1435out_output = in_vars.id1435out_output;
  out_vars.id1432out_output = in_vars.id1432out_output;
  out_vars.id1429out_output = in_vars.id1429out_output;
  out_vars.id1426out_output = in_vars.id1426out_output;
  out_vars.id1423out_output = in_vars.id1423out_output;
  out_vars.id1420out_output = in_vars.id1420out_output;
  out_vars.id1417out_output = in_vars.id1417out_output;
  out_vars.id1414out_output = in_vars.id1414out_output;
  out_vars.id1411out_output = in_vars.id1411out_output;
  out_vars.id1408out_output = in_vars.id1408out_output;
  out_vars.id1405out_output = in_vars.id1405out_output;
  out_vars.id1402out_output = in_vars.id1402out_output;
  out_vars.id1399out_output = in_vars.id1399out_output;
  out_vars.id1396out_output = in_vars.id1396out_output;
  out_vars.id1393out_output = in_vars.id1393out_output;
  out_vars.id1390out_output = in_vars.id1390out_output;
  out_vars.id1387out_output = in_vars.id1387out_output;
  out_vars.id1384out_output = in_vars.id1384out_output;
  out_vars.id1381out_output = in_vars.id1381out_output;
  out_vars.id1378out_output = in_vars.id1378out_output;
  out_vars.id1375out_output = in_vars.id1375out_output;
  out_vars.id1372out_output = in_vars.id1372out_output;
  out_vars.id1369out_output = in_vars.id1369out_output;
  out_vars.id1366out_output = in_vars.id1366out_output;
  out_vars.id1363out_output = in_vars.id1363out_output;
  out_vars.id1360out_output = in_vars.id1360out_output;
  out_vars.id1357out_output = in_vars.id1357out_output;
  out_vars.id1354out_output = in_vars.id1354out_output;
  out_vars.id1351out_output = in_vars.id1351out_output;
  out_vars.id1348out_output = in_vars.id1348out_output;
  out_vars.id1345out_output = in_vars.id1345out_output;
  out_vars.id1342out_output = in_vars.id1342out_output;
  out_vars.id1339out_output = in_vars.id1339out_output;
  out_vars.id1336out_output = in_vars.id1336out_output;
  out_vars.id1333out_output = in_vars.id1333out_output;
  out_vars.id1330out_output = in_vars.id1330out_output;
  out_vars.id1327out_output = in_vars.id1327out_output;
  out_vars.id1324out_output = in_vars.id1324out_output;
  out_vars.id1321out_output = in_vars.id1321out_output;
  out_vars.id1318out_output = in_vars.id1318out_output;
  out_vars.id1315out_output = in_vars.id1315out_output;
  out_vars.id1312out_output = in_vars.id1312out_output;
  out_vars.id1309out_output = in_vars.id1309out_output;
  out_vars.id1306out_output = in_vars.id1306out_output;
  out_vars.id1303out_output = in_vars.id1303out_output;
  out_vars.id1300out_output = in_vars.id1300out_output;
  out_vars.id1297out_output = in_vars.id1297out_output;
  out_vars.id1294out_output = in_vars.id1294out_output;
  out_vars.id1291out_output = in_vars.id1291out_output;
  out_vars.id1288out_output = in_vars.id1288out_output;
  out_vars.id1285out_output = in_vars.id1285out_output;
  out_vars.id1282out_output = in_vars.id1282out_output;
  out_vars.id1279out_output = in_vars.id1279out_output;
  out_vars.id1276out_output = in_vars.id1276out_output;
  out_vars.id1273out_output = in_vars.id1273out_output;
  out_vars.id1270out_output = in_vars.id1270out_output;
  out_vars.id1267out_output = in_vars.id1267out_output;
  out_vars.id1264out_output = in_vars.id1264out_output;
  out_vars.id1261out_output = in_vars.id1261out_output;
  out_vars.id1258out_output = in_vars.id1258out_output;
  out_vars.id1255out_output = in_vars.id1255out_output;
  out_vars.id1252out_output = in_vars.id1252out_output;
  out_vars.id1249out_output = in_vars.id1249out_output;
  out_vars.id1246out_output = in_vars.id1246out_output;
  out_vars.id1243out_output = in_vars.id1243out_output;
  out_vars.id1240out_output = in_vars.id1240out_output;
  out_vars.id1237out_output = in_vars.id1237out_output;
  out_vars.id1234out_output = in_vars.id1234out_output;
  out_vars.id1231out_output = in_vars.id1231out_output;
  out_vars.id1228out_output = in_vars.id1228out_output;
  out_vars.id1225out_output = in_vars.id1225out_output;
  out_vars.id1222out_output = in_vars.id1222out_output;
  out_vars.id1219out_output = in_vars.id1219out_output;
  return out_vars;
};

};
