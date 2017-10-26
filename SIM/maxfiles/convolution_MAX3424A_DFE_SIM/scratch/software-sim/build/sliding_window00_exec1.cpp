#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window00_exec1.h"
//#include "sliding_window00.h"

namespace maxcompilersim {

void sliding_window00::execute1(const sliding_window00Block1Vars &in_vars) {
  HWRawBits<160> id499out_result;

  { // Node ID: 499 (NodeCat)
    const HWRawBits<32> &id499in_in0 = in_vars.id498out_output;
    const HWRawBits<128> &id499in_in1 = in_vars.id497out_result;

    id499out_result = (cat(id499in_in0,id499in_in1));
  }
  HWRawBits<192> id501out_result;

  { // Node ID: 501 (NodeCat)
    const HWRawBits<32> &id501in_in0 = in_vars.id500out_output;
    const HWRawBits<160> &id501in_in1 = id499out_result;

    id501out_result = (cat(id501in_in0,id501in_in1));
  }
  HWRawBits<224> id503out_result;

  { // Node ID: 503 (NodeCat)
    const HWRawBits<32> &id503in_in0 = in_vars.id502out_output;
    const HWRawBits<192> &id503in_in1 = id501out_result;

    id503out_result = (cat(id503in_in0,id503in_in1));
  }
  HWRawBits<256> id505out_result;

  { // Node ID: 505 (NodeCat)
    const HWRawBits<32> &id505in_in0 = in_vars.id504out_output;
    const HWRawBits<224> &id505in_in1 = id503out_result;

    id505out_result = (cat(id505in_in0,id505in_in1));
  }
  HWRawBits<288> id507out_result;

  { // Node ID: 507 (NodeCat)
    const HWRawBits<32> &id507in_in0 = in_vars.id506out_output;
    const HWRawBits<256> &id507in_in1 = id505out_result;

    id507out_result = (cat(id507in_in0,id507in_in1));
  }
  HWRawBits<320> id509out_result;

  { // Node ID: 509 (NodeCat)
    const HWRawBits<32> &id509in_in0 = in_vars.id508out_output;
    const HWRawBits<288> &id509in_in1 = id507out_result;

    id509out_result = (cat(id509in_in0,id509in_in1));
  }
  HWRawBits<352> id511out_result;

  { // Node ID: 511 (NodeCat)
    const HWRawBits<32> &id511in_in0 = in_vars.id510out_output;
    const HWRawBits<320> &id511in_in1 = id509out_result;

    id511out_result = (cat(id511in_in0,id511in_in1));
  }
  HWRawBits<384> id513out_result;

  { // Node ID: 513 (NodeCat)
    const HWRawBits<32> &id513in_in0 = in_vars.id512out_output;
    const HWRawBits<352> &id513in_in1 = id511out_result;

    id513out_result = (cat(id513in_in0,id513in_in1));
  }
  HWRawBits<416> id515out_result;

  { // Node ID: 515 (NodeCat)
    const HWRawBits<32> &id515in_in0 = in_vars.id514out_output;
    const HWRawBits<384> &id515in_in1 = id513out_result;

    id515out_result = (cat(id515in_in0,id515in_in1));
  }
  HWRawBits<448> id517out_result;

  { // Node ID: 517 (NodeCat)
    const HWRawBits<32> &id517in_in0 = in_vars.id516out_output;
    const HWRawBits<416> &id517in_in1 = id515out_result;

    id517out_result = (cat(id517in_in0,id517in_in1));
  }
  HWRawBits<480> id519out_result;

  { // Node ID: 519 (NodeCat)
    const HWRawBits<32> &id519in_in0 = in_vars.id518out_output;
    const HWRawBits<448> &id519in_in1 = id517out_result;

    id519out_result = (cat(id519in_in0,id519in_in1));
  }
  HWRawBits<512> id521out_result;

  { // Node ID: 521 (NodeCat)
    const HWRawBits<32> &id521in_in0 = in_vars.id520out_output;
    const HWRawBits<480> &id521in_in1 = id519out_result;

    id521out_result = (cat(id521in_in0,id521in_in1));
  }
  HWRawBits<544> id523out_result;

  { // Node ID: 523 (NodeCat)
    const HWRawBits<32> &id523in_in0 = in_vars.id522out_output;
    const HWRawBits<512> &id523in_in1 = id521out_result;

    id523out_result = (cat(id523in_in0,id523in_in1));
  }
  HWRawBits<576> id525out_result;

  { // Node ID: 525 (NodeCat)
    const HWRawBits<32> &id525in_in0 = in_vars.id524out_output;
    const HWRawBits<544> &id525in_in1 = id523out_result;

    id525out_result = (cat(id525in_in0,id525in_in1));
  }
  HWRawBits<608> id527out_result;

  { // Node ID: 527 (NodeCat)
    const HWRawBits<32> &id527in_in0 = in_vars.id526out_output;
    const HWRawBits<576> &id527in_in1 = id525out_result;

    id527out_result = (cat(id527in_in0,id527in_in1));
  }
  HWRawBits<640> id529out_result;

  { // Node ID: 529 (NodeCat)
    const HWRawBits<32> &id529in_in0 = in_vars.id528out_output;
    const HWRawBits<608> &id529in_in1 = id527out_result;

    id529out_result = (cat(id529in_in0,id529in_in1));
  }
  HWRawBits<672> id531out_result;

  { // Node ID: 531 (NodeCat)
    const HWRawBits<32> &id531in_in0 = in_vars.id530out_output;
    const HWRawBits<640> &id531in_in1 = id529out_result;

    id531out_result = (cat(id531in_in0,id531in_in1));
  }
  HWRawBits<704> id533out_result;

  { // Node ID: 533 (NodeCat)
    const HWRawBits<32> &id533in_in0 = in_vars.id532out_output;
    const HWRawBits<672> &id533in_in1 = id531out_result;

    id533out_result = (cat(id533in_in0,id533in_in1));
  }
  HWRawBits<736> id535out_result;

  { // Node ID: 535 (NodeCat)
    const HWRawBits<32> &id535in_in0 = in_vars.id534out_output;
    const HWRawBits<704> &id535in_in1 = id533out_result;

    id535out_result = (cat(id535in_in0,id535in_in1));
  }
  HWRawBits<768> id537out_result;

  { // Node ID: 537 (NodeCat)
    const HWRawBits<32> &id537in_in0 = in_vars.id536out_output;
    const HWRawBits<736> &id537in_in1 = id535out_result;

    id537out_result = (cat(id537in_in0,id537in_in1));
  }
  HWRawBits<800> id539out_result;

  { // Node ID: 539 (NodeCat)
    const HWRawBits<32> &id539in_in0 = in_vars.id538out_output;
    const HWRawBits<768> &id539in_in1 = id537out_result;

    id539out_result = (cat(id539in_in0,id539in_in1));
  }
  if ( (getFillLevel() >= (18l)) && (getFlushLevel() < (18l)|| !isFlushingActive() ))
  { // Node ID: 490 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id490in_output_control = in_vars.id489out_result;
    const HWRawBits<800> &id490in_data = id539out_result;

    bool id490x_1;

    (id490x_1) = ((id490in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(18l))&(isFlushingActive()))));
    if((id490x_1)) {
      writeOutput(m_y01, id490in_data);
    }
  }
  { // Node ID: 991 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id992out_result;

  { // Node ID: 992 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id992in_a = id991out_io_y11_force_disabled;

    id992out_result = (not_fixed(id992in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id993out_result;

  { // Node ID: 993 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id993in_a = id1058out_output[getCycle()%14];
    const HWOffsetFix<1,0,UNSIGNED> &id993in_b = id992out_result;

    HWOffsetFix<1,0,UNSIGNED> id993x_1;

    (id993x_1) = (and_fixed(id993in_a,id993in_b));
    id993out_result = (id993x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id616out_output;

  { // Node ID: 616 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id616in_input = id617out_result[getCycle()%2];

    id616out_output = id616in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id613out_output;

  { // Node ID: 613 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id613in_input = id614out_result[getCycle()%2];

    id613out_output = id613in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id610out_output;

  { // Node ID: 610 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id610in_input = id611out_result[getCycle()%2];

    id610out_output = id610in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id607out_output;

  { // Node ID: 607 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id607in_input = id608out_result[getCycle()%2];

    id607out_output = id607in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id604out_output;

  { // Node ID: 604 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id604in_input = id605out_result[getCycle()%2];

    id604out_output = id604in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id601out_output;

  { // Node ID: 601 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id601in_input = id602out_result[getCycle()%2];

    id601out_output = id601in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id598out_output;

  { // Node ID: 598 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id598in_input = id599out_result[getCycle()%2];

    id598out_output = id598in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id595out_output;

  { // Node ID: 595 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id595in_input = id596out_result[getCycle()%2];

    id595out_output = id595in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id592out_output;

  { // Node ID: 592 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id592in_input = id593out_result[getCycle()%2];

    id592out_output = id592in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id589out_output;

  { // Node ID: 589 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id589in_input = id590out_result[getCycle()%2];

    id589out_output = id589in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id586out_output;

  { // Node ID: 586 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id586in_input = id587out_result[getCycle()%2];

    id586out_output = id586in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id583out_output;

  { // Node ID: 583 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id583in_input = id584out_result[getCycle()%2];

    id583out_output = id583in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id580out_output;

  { // Node ID: 580 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id580in_input = id581out_result[getCycle()%2];

    id580out_output = id580in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id577out_output;

  { // Node ID: 577 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id577in_input = id578out_result[getCycle()%2];

    id577out_output = id577in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id574out_output;

  { // Node ID: 574 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id574in_input = id575out_result[getCycle()%2];

    id574out_output = id574in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id571out_output;

  { // Node ID: 571 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id571in_input = id572out_result[getCycle()%2];

    id571out_output = id571in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id568out_output;

  { // Node ID: 568 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id568in_input = id569out_result[getCycle()%2];

    id568out_output = id568in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id565out_output;

  { // Node ID: 565 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id565in_input = id566out_result[getCycle()%2];

    id565out_output = id565in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id562out_output;

  { // Node ID: 562 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id562in_input = id563out_result[getCycle()%2];

    id562out_output = id562in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id559out_output;

  { // Node ID: 559 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id559in_input = id560out_result[getCycle()%2];

    id559out_output = id559in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id556out_output;

  { // Node ID: 556 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id556in_input = id557out_result[getCycle()%2];

    id556out_output = id556in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id553out_output;

  { // Node ID: 553 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id553in_input = id554out_result[getCycle()%2];

    id553out_output = id553in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id550out_output;

  { // Node ID: 550 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id550in_input = id551out_result[getCycle()%2];

    id550out_output = id550in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id547out_output;

  { // Node ID: 547 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id547in_input = id548out_result[getCycle()%2];

    id547out_output = id547in_input;
  }
  { // Node ID: 540 (NodeInputMappedReg)
  }
  HWOffsetFix<1,0,UNSIGNED> id541out_result;

  { // Node ID: 541 (NodeNot)
    const HWOffsetFix<1,0,UNSIGNED> &id541in_a = id540out_io_x11_force_disabled;

    id541out_result = (not_fixed(id541in_a));
  }
  HWOffsetFix<1,0,UNSIGNED> id542out_result;

  { // Node ID: 542 (NodeAnd)
    const HWOffsetFix<1,0,UNSIGNED> &id542in_a = id24out_result[getCycle()%2];
    const HWOffsetFix<1,0,UNSIGNED> &id542in_b = id541out_result;

    HWOffsetFix<1,0,UNSIGNED> id542x_1;

    (id542x_1) = (and_fixed(id542in_a,id542in_b));
    id542out_result = (id542x_1);
  }
  if ( (getFillLevel() >= (6l)))
  { // Node ID: 543 (NodeInput)
    const HWOffsetFix<1,0,UNSIGNED> &id543in_enable = id542out_result;

    (id543st_read_next_cycle) = ((id543in_enable.getValueAsBool())&(!(((getFlushLevel())>=(6l))&(isFlushingActive()))));
    queueReadRequest(m_x11, id543st_read_next_cycle.getValueAsBool());
  }
  HWFloat<8,24> id545out_output;

  { // Node ID: 545 (NodeReinterpret)
    const HWRawBits<32> &id545in_input = id543out_data;

    id545out_output = (cast_bits2float<8,24>(id545in_input));
  }
  { // Node ID: 546 (NodeCast)
    const HWFloat<8,24> &id546in_i = id545out_output;

    id546out_o[(getCycle()+6)%7] = (cast_float2fixed<32,-24,TWOSCOMPLEMENT,TONEAREVEN>(id546in_i));
  }
  { // Node ID: 548 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id548in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id548in_option0 = id547out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id548in_option1 = id546out_o[getCycle()%7];

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
    const HWOffsetFix<1,0,UNSIGNED> &id551in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id551in_option0 = id550out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id554in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id554in_option0 = id553out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id557in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id557in_option0 = id556out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id560in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id560in_option0 = id559out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id563in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id563in_option0 = id562out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id566in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id566in_option0 = id565out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id569in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id569in_option0 = id568out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id572in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id572in_option0 = id571out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id575in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id575in_option0 = id574out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id578in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id578in_option0 = id577out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id581in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id581in_option0 = id580out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id584in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id584in_option0 = id583out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id587in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id587in_option0 = id586out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id590in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id590in_option0 = id589out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id593in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id593in_option0 = id592out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id596in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id596in_option0 = id595out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id599in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id599in_option0 = id598out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id602in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id602in_option0 = id601out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id605in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id605in_option0 = id604out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id608in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id608in_option0 = id607out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id611in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id611in_option0 = id610out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id614in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id614in_option0 = id613out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id617in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id617in_option0 = id616out_output;
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
  HWRawBits<32> id1042out_output;

  { // Node ID: 1042 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1042in_input = id617out_result[getCycle()%2];

    id1042out_output = (cast_fixed2bits(id1042in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id619out_output;

  { // Node ID: 619 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id619in_input = id620out_result[getCycle()%2];

    id619out_output = id619in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id618out_output;

  { // Node ID: 618 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id618in_input = id617out_result[getCycle()%2];

    id618out_output = id618in_input;
  }
  { // Node ID: 620 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id620in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id620in_option0 = id619out_output;
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
  HWRawBits<32> id1040out_output;

  { // Node ID: 1040 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1040in_input = id620out_result[getCycle()%2];

    id1040out_output = (cast_fixed2bits(id1040in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id622out_output;

  { // Node ID: 622 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id622in_input = id623out_result[getCycle()%2];

    id622out_output = id622in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id621out_output;

  { // Node ID: 621 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id621in_input = id620out_result[getCycle()%2];

    id621out_output = id621in_input;
  }
  { // Node ID: 623 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id623in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id623in_option0 = id622out_output;
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
  HWRawBits<32> id1038out_output;

  { // Node ID: 1038 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1038in_input = id623out_result[getCycle()%2];

    id1038out_output = (cast_fixed2bits(id1038in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id625out_output;

  { // Node ID: 625 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id625in_input = id626out_result[getCycle()%2];

    id625out_output = id625in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id624out_output;

  { // Node ID: 624 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id624in_input = id623out_result[getCycle()%2];

    id624out_output = id624in_input;
  }
  { // Node ID: 626 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id626in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id626in_option0 = id625out_output;
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
  HWRawBits<32> id1036out_output;

  { // Node ID: 1036 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1036in_input = id626out_result[getCycle()%2];

    id1036out_output = (cast_fixed2bits(id1036in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id628out_output;

  { // Node ID: 628 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id628in_input = id629out_result[getCycle()%2];

    id628out_output = id628in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id627out_output;

  { // Node ID: 627 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id627in_input = id626out_result[getCycle()%2];

    id627out_output = id627in_input;
  }
  { // Node ID: 629 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id629in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id629in_option0 = id628out_output;
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
  HWRawBits<32> id1034out_output;

  { // Node ID: 1034 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1034in_input = id629out_result[getCycle()%2];

    id1034out_output = (cast_fixed2bits(id1034in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id700out_output;

  { // Node ID: 700 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id700in_input = id701out_result[getCycle()%2];

    id700out_output = id700in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id697out_output;

  { // Node ID: 697 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id697in_input = id698out_result[getCycle()%2];

    id697out_output = id697in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id694out_output;

  { // Node ID: 694 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id694in_input = id695out_result[getCycle()%2];

    id694out_output = id694in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id691out_output;

  { // Node ID: 691 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id691in_input = id692out_result[getCycle()%2];

    id691out_output = id691in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id688out_output;

  { // Node ID: 688 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id688in_input = id689out_result[getCycle()%2];

    id688out_output = id688in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id685out_output;

  { // Node ID: 685 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id685in_input = id686out_result[getCycle()%2];

    id685out_output = id685in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id682out_output;

  { // Node ID: 682 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id682in_input = id683out_result[getCycle()%2];

    id682out_output = id682in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id679out_output;

  { // Node ID: 679 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id679in_input = id680out_result[getCycle()%2];

    id679out_output = id679in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id676out_output;

  { // Node ID: 676 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id676in_input = id677out_result[getCycle()%2];

    id676out_output = id676in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id673out_output;

  { // Node ID: 673 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id673in_input = id674out_result[getCycle()%2];

    id673out_output = id673in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id670out_output;

  { // Node ID: 670 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id670in_input = id671out_result[getCycle()%2];

    id670out_output = id670in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id667out_output;

  { // Node ID: 667 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id667in_input = id668out_result[getCycle()%2];

    id667out_output = id667in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id664out_output;

  { // Node ID: 664 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id664in_input = id665out_result[getCycle()%2];

    id664out_output = id664in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id661out_output;

  { // Node ID: 661 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id661in_input = id662out_result[getCycle()%2];

    id661out_output = id661in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id658out_output;

  { // Node ID: 658 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id658in_input = id659out_result[getCycle()%2];

    id658out_output = id658in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id655out_output;

  { // Node ID: 655 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id655in_input = id656out_result[getCycle()%2];

    id655out_output = id655in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id652out_output;

  { // Node ID: 652 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id652in_input = id653out_result[getCycle()%2];

    id652out_output = id652in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id649out_output;

  { // Node ID: 649 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id649in_input = id650out_result[getCycle()%2];

    id649out_output = id649in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id646out_output;

  { // Node ID: 646 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id646in_input = id647out_result[getCycle()%2];

    id646out_output = id646in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id643out_output;

  { // Node ID: 643 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id643in_input = id644out_result[getCycle()%2];

    id643out_output = id643in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id640out_output;

  { // Node ID: 640 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id640in_input = id641out_result[getCycle()%2];

    id640out_output = id640in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id637out_output;

  { // Node ID: 637 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id637in_input = id638out_result[getCycle()%2];

    id637out_output = id637in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id634out_output;

  { // Node ID: 634 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id634in_input = id635out_result[getCycle()%2];

    id634out_output = id634in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id631out_output;

  { // Node ID: 631 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id631in_input = id632out_result[getCycle()%2];

    id631out_output = id631in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id630out_output;

  { // Node ID: 630 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id630in_input = id629out_result[getCycle()%2];

    id630out_output = id630in_input;
  }
  { // Node ID: 632 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id632in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id632in_option0 = id631out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id635in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id635in_option0 = id634out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id638in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id638in_option0 = id637out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id641in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id641in_option0 = id640out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id644in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id644in_option0 = id643out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id647in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id647in_option0 = id646out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id650in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id650in_option0 = id649out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id653in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id653in_option0 = id652out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id656in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id656in_option0 = id655out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id659in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id659in_option0 = id658out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id662in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id662in_option0 = id661out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id665in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id665in_option0 = id664out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id668in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id668in_option0 = id667out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id671in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id671in_option0 = id670out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id674in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id674in_option0 = id673out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id677in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id677in_option0 = id676out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id680in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id680in_option0 = id679out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id683in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id683in_option0 = id682out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id686in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id686in_option0 = id685out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id689in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id689in_option0 = id688out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id692in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id692in_option0 = id691out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id695in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id695in_option0 = id694out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id698in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id698in_option0 = id697out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id701in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id701in_option0 = id700out_output;
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
  HWRawBits<32> id1032out_output;

  { // Node ID: 1032 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1032in_input = id701out_result[getCycle()%2];

    id1032out_output = (cast_fixed2bits(id1032in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id703out_output;

  { // Node ID: 703 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id703in_input = id704out_result[getCycle()%2];

    id703out_output = id703in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id702out_output;

  { // Node ID: 702 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id702in_input = id701out_result[getCycle()%2];

    id702out_output = id702in_input;
  }
  { // Node ID: 704 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id704in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id704in_option0 = id703out_output;
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
  HWRawBits<32> id1030out_output;

  { // Node ID: 1030 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1030in_input = id704out_result[getCycle()%2];

    id1030out_output = (cast_fixed2bits(id1030in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id706out_output;

  { // Node ID: 706 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id706in_input = id707out_result[getCycle()%2];

    id706out_output = id706in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id705out_output;

  { // Node ID: 705 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id705in_input = id704out_result[getCycle()%2];

    id705out_output = id705in_input;
  }
  { // Node ID: 707 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id707in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id707in_option0 = id706out_output;
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
  HWRawBits<32> id1028out_output;

  { // Node ID: 1028 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1028in_input = id707out_result[getCycle()%2];

    id1028out_output = (cast_fixed2bits(id1028in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id709out_output;

  { // Node ID: 709 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id709in_input = id710out_result[getCycle()%2];

    id709out_output = id709in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id708out_output;

  { // Node ID: 708 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id708in_input = id707out_result[getCycle()%2];

    id708out_output = id708in_input;
  }
  { // Node ID: 710 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id710in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id710in_option0 = id709out_output;
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
  HWRawBits<32> id1026out_output;

  { // Node ID: 1026 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1026in_input = id710out_result[getCycle()%2];

    id1026out_output = (cast_fixed2bits(id1026in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id712out_output;

  { // Node ID: 712 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id712in_input = id713out_result[getCycle()%2];

    id712out_output = id712in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id711out_output;

  { // Node ID: 711 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id711in_input = id710out_result[getCycle()%2];

    id711out_output = id711in_input;
  }
  { // Node ID: 713 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id713in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id713in_option0 = id712out_output;
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
  HWRawBits<32> id1024out_output;

  { // Node ID: 1024 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1024in_input = id713out_result[getCycle()%2];

    id1024out_output = (cast_fixed2bits(id1024in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id784out_output;

  { // Node ID: 784 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id784in_input = id785out_result[getCycle()%2];

    id784out_output = id784in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id781out_output;

  { // Node ID: 781 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id781in_input = id782out_result[getCycle()%2];

    id781out_output = id781in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id778out_output;

  { // Node ID: 778 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id778in_input = id779out_result[getCycle()%2];

    id778out_output = id778in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id775out_output;

  { // Node ID: 775 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id775in_input = id776out_result[getCycle()%2];

    id775out_output = id775in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id772out_output;

  { // Node ID: 772 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id772in_input = id773out_result[getCycle()%2];

    id772out_output = id772in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id769out_output;

  { // Node ID: 769 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id769in_input = id770out_result[getCycle()%2];

    id769out_output = id769in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id766out_output;

  { // Node ID: 766 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id766in_input = id767out_result[getCycle()%2];

    id766out_output = id766in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id763out_output;

  { // Node ID: 763 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id763in_input = id764out_result[getCycle()%2];

    id763out_output = id763in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id760out_output;

  { // Node ID: 760 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id760in_input = id761out_result[getCycle()%2];

    id760out_output = id760in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id757out_output;

  { // Node ID: 757 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id757in_input = id758out_result[getCycle()%2];

    id757out_output = id757in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id754out_output;

  { // Node ID: 754 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id754in_input = id755out_result[getCycle()%2];

    id754out_output = id754in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id751out_output;

  { // Node ID: 751 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id751in_input = id752out_result[getCycle()%2];

    id751out_output = id751in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id748out_output;

  { // Node ID: 748 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id748in_input = id749out_result[getCycle()%2];

    id748out_output = id748in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id745out_output;

  { // Node ID: 745 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id745in_input = id746out_result[getCycle()%2];

    id745out_output = id745in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id742out_output;

  { // Node ID: 742 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id742in_input = id743out_result[getCycle()%2];

    id742out_output = id742in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id739out_output;

  { // Node ID: 739 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id739in_input = id740out_result[getCycle()%2];

    id739out_output = id739in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id736out_output;

  { // Node ID: 736 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id736in_input = id737out_result[getCycle()%2];

    id736out_output = id736in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id733out_output;

  { // Node ID: 733 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id733in_input = id734out_result[getCycle()%2];

    id733out_output = id733in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id730out_output;

  { // Node ID: 730 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id730in_input = id731out_result[getCycle()%2];

    id730out_output = id730in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id727out_output;

  { // Node ID: 727 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id727in_input = id728out_result[getCycle()%2];

    id727out_output = id727in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id724out_output;

  { // Node ID: 724 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id724in_input = id725out_result[getCycle()%2];

    id724out_output = id724in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id721out_output;

  { // Node ID: 721 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id721in_input = id722out_result[getCycle()%2];

    id721out_output = id721in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id718out_output;

  { // Node ID: 718 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id718in_input = id719out_result[getCycle()%2];

    id718out_output = id718in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id715out_output;

  { // Node ID: 715 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id715in_input = id716out_result[getCycle()%2];

    id715out_output = id715in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id714out_output;

  { // Node ID: 714 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id714in_input = id713out_result[getCycle()%2];

    id714out_output = id714in_input;
  }
  { // Node ID: 716 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id716in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id716in_option0 = id715out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id719in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id719in_option0 = id718out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id722in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id722in_option0 = id721out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id725in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id725in_option0 = id724out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id728in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id728in_option0 = id727out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id731in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id731in_option0 = id730out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id734in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id734in_option0 = id733out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id737in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id737in_option0 = id736out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id740in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id740in_option0 = id739out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id743in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id743in_option0 = id742out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id746in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id746in_option0 = id745out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id749in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id749in_option0 = id748out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id752in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id752in_option0 = id751out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id755in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id755in_option0 = id754out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id758in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id758in_option0 = id757out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id761in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id761in_option0 = id760out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id764in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id764in_option0 = id763out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id767in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id767in_option0 = id766out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id770in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id770in_option0 = id769out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id773in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id773in_option0 = id772out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id776in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id776in_option0 = id775out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id779in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id779in_option0 = id778out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id782in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id782in_option0 = id781out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id785in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id785in_option0 = id784out_output;
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
  HWRawBits<32> id1022out_output;

  { // Node ID: 1022 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1022in_input = id785out_result[getCycle()%2];

    id1022out_output = (cast_fixed2bits(id1022in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id787out_output;

  { // Node ID: 787 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id787in_input = id788out_result[getCycle()%2];

    id787out_output = id787in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id786out_output;

  { // Node ID: 786 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id786in_input = id785out_result[getCycle()%2];

    id786out_output = id786in_input;
  }
  { // Node ID: 788 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id788in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id788in_option0 = id787out_output;
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
  HWRawBits<32> id1020out_output;

  { // Node ID: 1020 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1020in_input = id788out_result[getCycle()%2];

    id1020out_output = (cast_fixed2bits(id1020in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id790out_output;

  { // Node ID: 790 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id790in_input = id791out_result[getCycle()%2];

    id790out_output = id790in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id789out_output;

  { // Node ID: 789 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id789in_input = id788out_result[getCycle()%2];

    id789out_output = id789in_input;
  }
  { // Node ID: 791 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id791in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id791in_option0 = id790out_output;
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
  HWRawBits<32> id1018out_output;

  { // Node ID: 1018 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1018in_input = id791out_result[getCycle()%2];

    id1018out_output = (cast_fixed2bits(id1018in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id793out_output;

  { // Node ID: 793 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id793in_input = id794out_result[getCycle()%2];

    id793out_output = id793in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id792out_output;

  { // Node ID: 792 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id792in_input = id791out_result[getCycle()%2];

    id792out_output = id792in_input;
  }
  { // Node ID: 794 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id794in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id794in_option0 = id793out_output;
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
  HWRawBits<32> id1016out_output;

  { // Node ID: 1016 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1016in_input = id794out_result[getCycle()%2];

    id1016out_output = (cast_fixed2bits(id1016in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id796out_output;

  { // Node ID: 796 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id796in_input = id797out_result[getCycle()%2];

    id796out_output = id796in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id795out_output;

  { // Node ID: 795 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id795in_input = id794out_result[getCycle()%2];

    id795out_output = id795in_input;
  }
  { // Node ID: 797 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id797in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id797in_option0 = id796out_output;
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
  HWRawBits<32> id1014out_output;

  { // Node ID: 1014 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1014in_input = id797out_result[getCycle()%2];

    id1014out_output = (cast_fixed2bits(id1014in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id868out_output;

  { // Node ID: 868 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id868in_input = id869out_result[getCycle()%2];

    id868out_output = id868in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id865out_output;

  { // Node ID: 865 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id865in_input = id866out_result[getCycle()%2];

    id865out_output = id865in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id862out_output;

  { // Node ID: 862 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id862in_input = id863out_result[getCycle()%2];

    id862out_output = id862in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id859out_output;

  { // Node ID: 859 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id859in_input = id860out_result[getCycle()%2];

    id859out_output = id859in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id856out_output;

  { // Node ID: 856 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id856in_input = id857out_result[getCycle()%2];

    id856out_output = id856in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id853out_output;

  { // Node ID: 853 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id853in_input = id854out_result[getCycle()%2];

    id853out_output = id853in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id850out_output;

  { // Node ID: 850 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id850in_input = id851out_result[getCycle()%2];

    id850out_output = id850in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id847out_output;

  { // Node ID: 847 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id847in_input = id848out_result[getCycle()%2];

    id847out_output = id847in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id844out_output;

  { // Node ID: 844 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id844in_input = id845out_result[getCycle()%2];

    id844out_output = id844in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id841out_output;

  { // Node ID: 841 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id841in_input = id842out_result[getCycle()%2];

    id841out_output = id841in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id838out_output;

  { // Node ID: 838 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id838in_input = id839out_result[getCycle()%2];

    id838out_output = id838in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id835out_output;

  { // Node ID: 835 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id835in_input = id836out_result[getCycle()%2];

    id835out_output = id835in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id832out_output;

  { // Node ID: 832 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id832in_input = id833out_result[getCycle()%2];

    id832out_output = id832in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id829out_output;

  { // Node ID: 829 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id829in_input = id830out_result[getCycle()%2];

    id829out_output = id829in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id826out_output;

  { // Node ID: 826 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id826in_input = id827out_result[getCycle()%2];

    id826out_output = id826in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id823out_output;

  { // Node ID: 823 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id823in_input = id824out_result[getCycle()%2];

    id823out_output = id823in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id820out_output;

  { // Node ID: 820 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id820in_input = id821out_result[getCycle()%2];

    id820out_output = id820in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id817out_output;

  { // Node ID: 817 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id817in_input = id818out_result[getCycle()%2];

    id817out_output = id817in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id814out_output;

  { // Node ID: 814 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id814in_input = id815out_result[getCycle()%2];

    id814out_output = id814in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id811out_output;

  { // Node ID: 811 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id811in_input = id812out_result[getCycle()%2];

    id811out_output = id811in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id808out_output;

  { // Node ID: 808 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id808in_input = id809out_result[getCycle()%2];

    id808out_output = id808in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id805out_output;

  { // Node ID: 805 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id805in_input = id806out_result[getCycle()%2];

    id805out_output = id805in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id802out_output;

  { // Node ID: 802 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id802in_input = id803out_result[getCycle()%2];

    id802out_output = id802in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id799out_output;

  { // Node ID: 799 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id799in_input = id800out_result[getCycle()%2];

    id799out_output = id799in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id798out_output;

  { // Node ID: 798 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id798in_input = id797out_result[getCycle()%2];

    id798out_output = id798in_input;
  }
  { // Node ID: 800 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id800in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id800in_option0 = id799out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id803in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id803in_option0 = id802out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id806in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id806in_option0 = id805out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id809in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id809in_option0 = id808out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id812in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id812in_option0 = id811out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id815in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id815in_option0 = id814out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id818in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id818in_option0 = id817out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id821in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id821in_option0 = id820out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id824in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id824in_option0 = id823out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id827in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id827in_option0 = id826out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id830in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id830in_option0 = id829out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id833in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id833in_option0 = id832out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id836in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id836in_option0 = id835out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id839in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id839in_option0 = id838out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id842in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id842in_option0 = id841out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id845in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id845in_option0 = id844out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id848in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id848in_option0 = id847out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id851in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id851in_option0 = id850out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id854in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id854in_option0 = id853out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id857in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id857in_option0 = id856out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id860in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id860in_option0 = id859out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id863in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id863in_option0 = id862out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id866in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id866in_option0 = id865out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id869in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id869in_option0 = id868out_output;
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
  HWRawBits<32> id1012out_output;

  { // Node ID: 1012 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1012in_input = id869out_result[getCycle()%2];

    id1012out_output = (cast_fixed2bits(id1012in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id871out_output;

  { // Node ID: 871 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id871in_input = id872out_result[getCycle()%2];

    id871out_output = id871in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id870out_output;

  { // Node ID: 870 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id870in_input = id869out_result[getCycle()%2];

    id870out_output = id870in_input;
  }
  { // Node ID: 872 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id872in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id872in_option0 = id871out_output;
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
  HWRawBits<32> id1010out_output;

  { // Node ID: 1010 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1010in_input = id872out_result[getCycle()%2];

    id1010out_output = (cast_fixed2bits(id1010in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id874out_output;

  { // Node ID: 874 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id874in_input = id875out_result[getCycle()%2];

    id874out_output = id874in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id873out_output;

  { // Node ID: 873 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id873in_input = id872out_result[getCycle()%2];

    id873out_output = id873in_input;
  }
  { // Node ID: 875 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id875in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id875in_option0 = id874out_output;
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
  HWRawBits<32> id1008out_output;

  { // Node ID: 1008 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1008in_input = id875out_result[getCycle()%2];

    id1008out_output = (cast_fixed2bits(id1008in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id877out_output;

  { // Node ID: 877 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id877in_input = id878out_result[getCycle()%2];

    id877out_output = id877in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id876out_output;

  { // Node ID: 876 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id876in_input = id875out_result[getCycle()%2];

    id876out_output = id876in_input;
  }
  { // Node ID: 878 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id878in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id878in_option0 = id877out_output;
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
  HWRawBits<32> id1006out_output;

  { // Node ID: 1006 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1006in_input = id878out_result[getCycle()%2];

    id1006out_output = (cast_fixed2bits(id1006in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id880out_output;

  { // Node ID: 880 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id880in_input = id881out_result[getCycle()%2];

    id880out_output = id880in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id879out_output;

  { // Node ID: 879 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id879in_input = id878out_result[getCycle()%2];

    id879out_output = id879in_input;
  }
  { // Node ID: 881 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id881in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id881in_option0 = id880out_output;
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
  HWRawBits<32> id1004out_output;

  { // Node ID: 1004 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1004in_input = id881out_result[getCycle()%2];

    id1004out_output = (cast_fixed2bits(id1004in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id952out_output;

  { // Node ID: 952 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id952in_input = id953out_result[getCycle()%2];

    id952out_output = id952in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id949out_output;

  { // Node ID: 949 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id949in_input = id950out_result[getCycle()%2];

    id949out_output = id949in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id946out_output;

  { // Node ID: 946 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id946in_input = id947out_result[getCycle()%2];

    id946out_output = id946in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id943out_output;

  { // Node ID: 943 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id943in_input = id944out_result[getCycle()%2];

    id943out_output = id943in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id940out_output;

  { // Node ID: 940 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id940in_input = id941out_result[getCycle()%2];

    id940out_output = id940in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id937out_output;

  { // Node ID: 937 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id937in_input = id938out_result[getCycle()%2];

    id937out_output = id937in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id934out_output;

  { // Node ID: 934 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id934in_input = id935out_result[getCycle()%2];

    id934out_output = id934in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id931out_output;

  { // Node ID: 931 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id931in_input = id932out_result[getCycle()%2];

    id931out_output = id931in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id928out_output;

  { // Node ID: 928 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id928in_input = id929out_result[getCycle()%2];

    id928out_output = id928in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id925out_output;

  { // Node ID: 925 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id925in_input = id926out_result[getCycle()%2];

    id925out_output = id925in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id922out_output;

  { // Node ID: 922 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id922in_input = id923out_result[getCycle()%2];

    id922out_output = id922in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id919out_output;

  { // Node ID: 919 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id919in_input = id920out_result[getCycle()%2];

    id919out_output = id919in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id916out_output;

  { // Node ID: 916 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id916in_input = id917out_result[getCycle()%2];

    id916out_output = id916in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id913out_output;

  { // Node ID: 913 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id913in_input = id914out_result[getCycle()%2];

    id913out_output = id913in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id910out_output;

  { // Node ID: 910 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id910in_input = id911out_result[getCycle()%2];

    id910out_output = id910in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id907out_output;

  { // Node ID: 907 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id907in_input = id908out_result[getCycle()%2];

    id907out_output = id907in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id904out_output;

  { // Node ID: 904 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id904in_input = id905out_result[getCycle()%2];

    id904out_output = id904in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id901out_output;

  { // Node ID: 901 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id901in_input = id902out_result[getCycle()%2];

    id901out_output = id901in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id898out_output;

  { // Node ID: 898 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id898in_input = id899out_result[getCycle()%2];

    id898out_output = id898in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id895out_output;

  { // Node ID: 895 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id895in_input = id896out_result[getCycle()%2];

    id895out_output = id895in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id892out_output;

  { // Node ID: 892 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id892in_input = id893out_result[getCycle()%2];

    id892out_output = id892in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id889out_output;

  { // Node ID: 889 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id889in_input = id890out_result[getCycle()%2];

    id889out_output = id889in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id886out_output;

  { // Node ID: 886 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id886in_input = id887out_result[getCycle()%2];

    id886out_output = id886in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id883out_output;

  { // Node ID: 883 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id883in_input = id884out_result[getCycle()%2];

    id883out_output = id883in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id882out_output;

  { // Node ID: 882 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id882in_input = id881out_result[getCycle()%2];

    id882out_output = id882in_input;
  }
  { // Node ID: 884 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id884in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id884in_option0 = id883out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id887in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id887in_option0 = id886out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id890in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id890in_option0 = id889out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id893in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id893in_option0 = id892out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id896in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id896in_option0 = id895out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id899in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id899in_option0 = id898out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id902in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id902in_option0 = id901out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id905in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id905in_option0 = id904out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id908in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id908in_option0 = id907out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id911in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id911in_option0 = id910out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id914in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id914in_option0 = id913out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id917in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id917in_option0 = id916out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id920in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id920in_option0 = id919out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id923in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id923in_option0 = id922out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id926in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id926in_option0 = id925out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id929in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id929in_option0 = id928out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id932in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id932in_option0 = id931out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id935in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id935in_option0 = id934out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id938in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id938in_option0 = id937out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id941in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id941in_option0 = id940out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id944in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id944in_option0 = id943out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id947in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id947in_option0 = id946out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id950in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id950in_option0 = id949out_output;
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
    const HWOffsetFix<1,0,UNSIGNED> &id953in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id953in_option0 = id952out_output;
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
  HWRawBits<32> id1002out_output;

  { // Node ID: 1002 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1002in_input = id953out_result[getCycle()%2];

    id1002out_output = (cast_fixed2bits(id1002in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id955out_output;

  { // Node ID: 955 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id955in_input = id956out_result[getCycle()%2];

    id955out_output = id955in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id954out_output;

  { // Node ID: 954 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id954in_input = id953out_result[getCycle()%2];

    id954out_output = id954in_input;
  }
  { // Node ID: 956 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id956in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id956in_option0 = id955out_output;
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
  HWRawBits<32> id1000out_output;

  { // Node ID: 1000 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id1000in_input = id956out_result[getCycle()%2];

    id1000out_output = (cast_fixed2bits(id1000in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id958out_output;

  { // Node ID: 958 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id958in_input = id959out_result[getCycle()%2];

    id958out_output = id958in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id957out_output;

  { // Node ID: 957 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id957in_input = id956out_result[getCycle()%2];

    id957out_output = id957in_input;
  }
  { // Node ID: 959 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id959in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id959in_option0 = id958out_output;
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
  HWRawBits<32> id998out_output;

  { // Node ID: 998 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id998in_input = id959out_result[getCycle()%2];

    id998out_output = (cast_fixed2bits(id998in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id961out_output;

  { // Node ID: 961 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id961in_input = id962out_result[getCycle()%2];

    id961out_output = id961in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id960out_output;

  { // Node ID: 960 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id960in_input = id959out_result[getCycle()%2];

    id960out_output = id960in_input;
  }
  { // Node ID: 962 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id962in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id962in_option0 = id961out_output;
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
  HWRawBits<32> id996out_output;

  { // Node ID: 996 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id996in_input = id962out_result[getCycle()%2];

    id996out_output = (cast_fixed2bits(id996in_input));
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id964out_output;

  { // Node ID: 964 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id964in_input = id965out_result[getCycle()%2];

    id964out_output = id964in_input;
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id963out_output;

  { // Node ID: 963 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id963in_input = id962out_result[getCycle()%2];

    id963out_output = id963in_input;
  }
  { // Node ID: 965 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id965in_sel = id1063out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id965in_option0 = id964out_output;
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
  HWRawBits<32> id995out_output;

  { // Node ID: 995 (NodeReinterpret)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id995in_input = id965out_result[getCycle()%2];

    id995out_output = (cast_fixed2bits(id995in_input));
  }
  HWRawBits<64> id997out_result;

  { // Node ID: 997 (NodeCat)
    const HWRawBits<32> &id997in_in0 = id996out_output;
    const HWRawBits<32> &id997in_in1 = id995out_output;

    id997out_result = (cat(id997in_in0,id997in_in1));
  }
  HWRawBits<96> id999out_result;

  { // Node ID: 999 (NodeCat)
    const HWRawBits<32> &id999in_in0 = id998out_output;
    const HWRawBits<64> &id999in_in1 = id997out_result;

    id999out_result = (cat(id999in_in0,id999in_in1));
  }
  HWRawBits<128> id1001out_result;

  { // Node ID: 1001 (NodeCat)
    const HWRawBits<32> &id1001in_in0 = id1000out_output;
    const HWRawBits<96> &id1001in_in1 = id999out_result;

    id1001out_result = (cat(id1001in_in0,id1001in_in1));
  }
  HWRawBits<160> id1003out_result;

  { // Node ID: 1003 (NodeCat)
    const HWRawBits<32> &id1003in_in0 = id1002out_output;
    const HWRawBits<128> &id1003in_in1 = id1001out_result;

    id1003out_result = (cat(id1003in_in0,id1003in_in1));
  }
  HWRawBits<192> id1005out_result;

  { // Node ID: 1005 (NodeCat)
    const HWRawBits<32> &id1005in_in0 = id1004out_output;
    const HWRawBits<160> &id1005in_in1 = id1003out_result;

    id1005out_result = (cat(id1005in_in0,id1005in_in1));
  }
  HWRawBits<224> id1007out_result;

  { // Node ID: 1007 (NodeCat)
    const HWRawBits<32> &id1007in_in0 = id1006out_output;
    const HWRawBits<192> &id1007in_in1 = id1005out_result;

    id1007out_result = (cat(id1007in_in0,id1007in_in1));
  }
  HWRawBits<256> id1009out_result;

  { // Node ID: 1009 (NodeCat)
    const HWRawBits<32> &id1009in_in0 = id1008out_output;
    const HWRawBits<224> &id1009in_in1 = id1007out_result;

    id1009out_result = (cat(id1009in_in0,id1009in_in1));
  }
  HWRawBits<288> id1011out_result;

  { // Node ID: 1011 (NodeCat)
    const HWRawBits<32> &id1011in_in0 = id1010out_output;
    const HWRawBits<256> &id1011in_in1 = id1009out_result;

    id1011out_result = (cat(id1011in_in0,id1011in_in1));
  }
  HWRawBits<320> id1013out_result;

  { // Node ID: 1013 (NodeCat)
    const HWRawBits<32> &id1013in_in0 = id1012out_output;
    const HWRawBits<288> &id1013in_in1 = id1011out_result;

    id1013out_result = (cat(id1013in_in0,id1013in_in1));
  }
  HWRawBits<352> id1015out_result;

  { // Node ID: 1015 (NodeCat)
    const HWRawBits<32> &id1015in_in0 = id1014out_output;
    const HWRawBits<320> &id1015in_in1 = id1013out_result;

    id1015out_result = (cat(id1015in_in0,id1015in_in1));
  }
  HWRawBits<384> id1017out_result;

  { // Node ID: 1017 (NodeCat)
    const HWRawBits<32> &id1017in_in0 = id1016out_output;
    const HWRawBits<352> &id1017in_in1 = id1015out_result;

    id1017out_result = (cat(id1017in_in0,id1017in_in1));
  }
  HWRawBits<416> id1019out_result;

  { // Node ID: 1019 (NodeCat)
    const HWRawBits<32> &id1019in_in0 = id1018out_output;
    const HWRawBits<384> &id1019in_in1 = id1017out_result;

    id1019out_result = (cat(id1019in_in0,id1019in_in1));
  }
  HWRawBits<448> id1021out_result;

  { // Node ID: 1021 (NodeCat)
    const HWRawBits<32> &id1021in_in0 = id1020out_output;
    const HWRawBits<416> &id1021in_in1 = id1019out_result;

    id1021out_result = (cat(id1021in_in0,id1021in_in1));
  }
  HWRawBits<480> id1023out_result;

  { // Node ID: 1023 (NodeCat)
    const HWRawBits<32> &id1023in_in0 = id1022out_output;
    const HWRawBits<448> &id1023in_in1 = id1021out_result;

    id1023out_result = (cat(id1023in_in0,id1023in_in1));
  }
  HWRawBits<512> id1025out_result;

  { // Node ID: 1025 (NodeCat)
    const HWRawBits<32> &id1025in_in0 = id1024out_output;
    const HWRawBits<480> &id1025in_in1 = id1023out_result;

    id1025out_result = (cat(id1025in_in0,id1025in_in1));
  }
  HWRawBits<544> id1027out_result;

  { // Node ID: 1027 (NodeCat)
    const HWRawBits<32> &id1027in_in0 = id1026out_output;
    const HWRawBits<512> &id1027in_in1 = id1025out_result;

    id1027out_result = (cat(id1027in_in0,id1027in_in1));
  }
  HWRawBits<576> id1029out_result;

  { // Node ID: 1029 (NodeCat)
    const HWRawBits<32> &id1029in_in0 = id1028out_output;
    const HWRawBits<544> &id1029in_in1 = id1027out_result;

    id1029out_result = (cat(id1029in_in0,id1029in_in1));
  }
  HWRawBits<608> id1031out_result;

  { // Node ID: 1031 (NodeCat)
    const HWRawBits<32> &id1031in_in0 = id1030out_output;
    const HWRawBits<576> &id1031in_in1 = id1029out_result;

    id1031out_result = (cat(id1031in_in0,id1031in_in1));
  }
  HWRawBits<640> id1033out_result;

  { // Node ID: 1033 (NodeCat)
    const HWRawBits<32> &id1033in_in0 = id1032out_output;
    const HWRawBits<608> &id1033in_in1 = id1031out_result;

    id1033out_result = (cat(id1033in_in0,id1033in_in1));
  }
  HWRawBits<672> id1035out_result;

  { // Node ID: 1035 (NodeCat)
    const HWRawBits<32> &id1035in_in0 = id1034out_output;
    const HWRawBits<640> &id1035in_in1 = id1033out_result;

    id1035out_result = (cat(id1035in_in0,id1035in_in1));
  }
  HWRawBits<704> id1037out_result;

  { // Node ID: 1037 (NodeCat)
    const HWRawBits<32> &id1037in_in0 = id1036out_output;
    const HWRawBits<672> &id1037in_in1 = id1035out_result;

    id1037out_result = (cat(id1037in_in0,id1037in_in1));
  }
  HWRawBits<736> id1039out_result;

  { // Node ID: 1039 (NodeCat)
    const HWRawBits<32> &id1039in_in0 = id1038out_output;
    const HWRawBits<704> &id1039in_in1 = id1037out_result;

    id1039out_result = (cat(id1039in_in0,id1039in_in1));
  }
  HWRawBits<768> id1041out_result;

  { // Node ID: 1041 (NodeCat)
    const HWRawBits<32> &id1041in_in0 = id1040out_output;
    const HWRawBits<736> &id1041in_in1 = id1039out_result;

    id1041out_result = (cat(id1041in_in0,id1041in_in1));
  }
  HWRawBits<800> id1043out_result;

  { // Node ID: 1043 (NodeCat)
    const HWRawBits<32> &id1043in_in0 = id1042out_output;
    const HWRawBits<768> &id1043in_in1 = id1041out_result;

    id1043out_result = (cat(id1043in_in0,id1043in_in1));
  }
  if ( (getFillLevel() >= (18l)) && (getFlushLevel() < (18l)|| !isFlushingActive() ))
  { // Node ID: 994 (NodeOutput)
    const HWOffsetFix<1,0,UNSIGNED> &id994in_output_control = id993out_result;
    const HWRawBits<800> &id994in_data = id1043out_result;

    bool id994x_1;

    (id994x_1) = ((id994in_output_control.getValueAsBool())&(!(((getFlushLevel())>=(18l))&(isFlushingActive()))));
    if((id994x_1)) {
      writeOutput(m_y11, id994in_data);
    }
  }
};

};
