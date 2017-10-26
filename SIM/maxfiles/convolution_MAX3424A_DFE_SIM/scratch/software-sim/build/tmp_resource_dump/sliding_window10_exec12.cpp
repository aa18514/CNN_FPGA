#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window10_exec12.h"
//#include "sliding_window10_exec13.h"
//#include "sliding_window10.h"

namespace maxcompilersim {

sliding_window10Block13Vars sliding_window10::execute12(const sliding_window10Block12Vars &in_vars) {
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5430out_output;

  { // Node ID: 5430 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5430in_input = id5429out_result[getCycle()%2];

    id5430out_output = id5430in_input;
  }
  { // Node ID: 5432 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5432in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5432in_option0 = in_vars.id5431out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5432in_option1 = id5430out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5432x_1;

    switch((id5432in_sel.getValueAsLong())) {
      case 0l:
        id5432x_1 = id5432in_option0;
        break;
      case 1l:
        id5432x_1 = id5432in_option1;
        break;
      default:
        id5432x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5432out_result[(getCycle()+1)%2] = (id5432x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5433out_output;

  { // Node ID: 5433 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5433in_input = id5432out_result[getCycle()%2];

    id5433out_output = id5433in_input;
  }
  { // Node ID: 5435 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5435in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5435in_option0 = in_vars.id5434out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5435in_option1 = id5433out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5435x_1;

    switch((id5435in_sel.getValueAsLong())) {
      case 0l:
        id5435x_1 = id5435in_option0;
        break;
      case 1l:
        id5435x_1 = id5435in_option1;
        break;
      default:
        id5435x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5435out_result[(getCycle()+1)%2] = (id5435x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5436out_output;

  { // Node ID: 5436 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5436in_input = id5435out_result[getCycle()%2];

    id5436out_output = id5436in_input;
  }
  { // Node ID: 5438 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5438in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5438in_option0 = in_vars.id5437out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5438in_option1 = id5436out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5438x_1;

    switch((id5438in_sel.getValueAsLong())) {
      case 0l:
        id5438x_1 = id5438in_option0;
        break;
      case 1l:
        id5438x_1 = id5438in_option1;
        break;
      default:
        id5438x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5438out_result[(getCycle()+1)%2] = (id5438x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5439out_output;

  { // Node ID: 5439 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5439in_input = id5438out_result[getCycle()%2];

    id5439out_output = id5439in_input;
  }
  { // Node ID: 5441 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5441in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5441in_option0 = in_vars.id5440out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5441in_option1 = id5439out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5441x_1;

    switch((id5441in_sel.getValueAsLong())) {
      case 0l:
        id5441x_1 = id5441in_option0;
        break;
      case 1l:
        id5441x_1 = id5441in_option1;
        break;
      default:
        id5441x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5441out_result[(getCycle()+1)%2] = (id5441x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5442out_output;

  { // Node ID: 5442 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5442in_input = id5441out_result[getCycle()%2];

    id5442out_output = id5442in_input;
  }
  { // Node ID: 5444 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5444in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5444in_option0 = in_vars.id5443out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5444in_option1 = id5442out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5444x_1;

    switch((id5444in_sel.getValueAsLong())) {
      case 0l:
        id5444x_1 = id5444in_option0;
        break;
      case 1l:
        id5444x_1 = id5444in_option1;
        break;
      default:
        id5444x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5444out_result[(getCycle()+1)%2] = (id5444x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5445out_output;

  { // Node ID: 5445 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5445in_input = id5444out_result[getCycle()%2];

    id5445out_output = id5445in_input;
  }
  { // Node ID: 5447 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5447in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5447in_option0 = in_vars.id5446out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5447in_option1 = id5445out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5447x_1;

    switch((id5447in_sel.getValueAsLong())) {
      case 0l:
        id5447x_1 = id5447in_option0;
        break;
      case 1l:
        id5447x_1 = id5447in_option1;
        break;
      default:
        id5447x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5447out_result[(getCycle()+1)%2] = (id5447x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5448out_output;

  { // Node ID: 5448 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5448in_input = id5447out_result[getCycle()%2];

    id5448out_output = id5448in_input;
  }
  { // Node ID: 5450 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5450in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5450in_option0 = in_vars.id5449out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5450in_option1 = id5448out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5450x_1;

    switch((id5450in_sel.getValueAsLong())) {
      case 0l:
        id5450x_1 = id5450in_option0;
        break;
      case 1l:
        id5450x_1 = id5450in_option1;
        break;
      default:
        id5450x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5450out_result[(getCycle()+1)%2] = (id5450x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5451out_output;

  { // Node ID: 5451 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5451in_input = id5450out_result[getCycle()%2];

    id5451out_output = id5451in_input;
  }
  { // Node ID: 5453 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5453in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5453in_option0 = in_vars.id5452out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5453in_option1 = id5451out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5453x_1;

    switch((id5453in_sel.getValueAsLong())) {
      case 0l:
        id5453x_1 = id5453in_option0;
        break;
      case 1l:
        id5453x_1 = id5453in_option1;
        break;
      default:
        id5453x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5453out_result[(getCycle()+1)%2] = (id5453x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5454out_output;

  { // Node ID: 5454 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5454in_input = id5453out_result[getCycle()%2];

    id5454out_output = id5454in_input;
  }
  { // Node ID: 5456 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5456in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5456in_option0 = in_vars.id5455out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5456in_option1 = id5454out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5456x_1;

    switch((id5456in_sel.getValueAsLong())) {
      case 0l:
        id5456x_1 = id5456in_option0;
        break;
      case 1l:
        id5456x_1 = id5456in_option1;
        break;
      default:
        id5456x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5456out_result[(getCycle()+1)%2] = (id5456x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5457out_output;

  { // Node ID: 5457 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5457in_input = id5456out_result[getCycle()%2];

    id5457out_output = id5457in_input;
  }
  { // Node ID: 5459 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5459in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5459in_option0 = in_vars.id5458out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5459in_option1 = id5457out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5459x_1;

    switch((id5459in_sel.getValueAsLong())) {
      case 0l:
        id5459x_1 = id5459in_option0;
        break;
      case 1l:
        id5459x_1 = id5459in_option1;
        break;
      default:
        id5459x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5459out_result[(getCycle()+1)%2] = (id5459x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5460out_output;

  { // Node ID: 5460 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5460in_input = id5459out_result[getCycle()%2];

    id5460out_output = id5460in_input;
  }
  { // Node ID: 5462 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5462in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5462in_option0 = in_vars.id5461out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5462in_option1 = id5460out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5462x_1;

    switch((id5462in_sel.getValueAsLong())) {
      case 0l:
        id5462x_1 = id5462in_option0;
        break;
      case 1l:
        id5462x_1 = id5462in_option1;
        break;
      default:
        id5462x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5462out_result[(getCycle()+1)%2] = (id5462x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5463out_output;

  { // Node ID: 5463 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5463in_input = id5462out_result[getCycle()%2];

    id5463out_output = id5463in_input;
  }
  { // Node ID: 5465 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5465in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5465in_option0 = in_vars.id5464out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5465in_option1 = id5463out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5465x_1;

    switch((id5465in_sel.getValueAsLong())) {
      case 0l:
        id5465x_1 = id5465in_option0;
        break;
      case 1l:
        id5465x_1 = id5465in_option1;
        break;
      default:
        id5465x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5465out_result[(getCycle()+1)%2] = (id5465x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5466out_output;

  { // Node ID: 5466 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5466in_input = id5465out_result[getCycle()%2];

    id5466out_output = id5466in_input;
  }
  { // Node ID: 5468 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5468in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5468in_option0 = in_vars.id5467out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5468in_option1 = id5466out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5468x_1;

    switch((id5468in_sel.getValueAsLong())) {
      case 0l:
        id5468x_1 = id5468in_option0;
        break;
      case 1l:
        id5468x_1 = id5468in_option1;
        break;
      default:
        id5468x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5468out_result[(getCycle()+1)%2] = (id5468x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5469out_output;

  { // Node ID: 5469 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5469in_input = id5468out_result[getCycle()%2];

    id5469out_output = id5469in_input;
  }
  { // Node ID: 5471 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5471in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5471in_option0 = in_vars.id5470out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5471in_option1 = id5469out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5471x_1;

    switch((id5471in_sel.getValueAsLong())) {
      case 0l:
        id5471x_1 = id5471in_option0;
        break;
      case 1l:
        id5471x_1 = id5471in_option1;
        break;
      default:
        id5471x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5471out_result[(getCycle()+1)%2] = (id5471x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5472out_output;

  { // Node ID: 5472 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5472in_input = id5471out_result[getCycle()%2];

    id5472out_output = id5472in_input;
  }
  { // Node ID: 5474 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5474in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5474in_option0 = in_vars.id5473out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5474in_option1 = id5472out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5474x_1;

    switch((id5474in_sel.getValueAsLong())) {
      case 0l:
        id5474x_1 = id5474in_option0;
        break;
      case 1l:
        id5474x_1 = id5474in_option1;
        break;
      default:
        id5474x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5474out_result[(getCycle()+1)%2] = (id5474x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5475out_output;

  { // Node ID: 5475 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5475in_input = id5474out_result[getCycle()%2];

    id5475out_output = id5475in_input;
  }
  { // Node ID: 5477 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5477in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5477in_option0 = in_vars.id5476out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5477in_option1 = id5475out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5477x_1;

    switch((id5477in_sel.getValueAsLong())) {
      case 0l:
        id5477x_1 = id5477in_option0;
        break;
      case 1l:
        id5477x_1 = id5477in_option1;
        break;
      default:
        id5477x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5477out_result[(getCycle()+1)%2] = (id5477x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5478out_output;

  { // Node ID: 5478 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5478in_input = id5477out_result[getCycle()%2];

    id5478out_output = id5478in_input;
  }
  { // Node ID: 5480 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5480in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5480in_option0 = in_vars.id5479out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5480in_option1 = id5478out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5480x_1;

    switch((id5480in_sel.getValueAsLong())) {
      case 0l:
        id5480x_1 = id5480in_option0;
        break;
      case 1l:
        id5480x_1 = id5480in_option1;
        break;
      default:
        id5480x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5480out_result[(getCycle()+1)%2] = (id5480x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5481out_output;

  { // Node ID: 5481 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5481in_input = id5480out_result[getCycle()%2];

    id5481out_output = id5481in_input;
  }
  { // Node ID: 5483 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5483in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5483in_option0 = in_vars.id5482out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5483in_option1 = id5481out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5483x_1;

    switch((id5483in_sel.getValueAsLong())) {
      case 0l:
        id5483x_1 = id5483in_option0;
        break;
      case 1l:
        id5483x_1 = id5483in_option1;
        break;
      default:
        id5483x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5483out_result[(getCycle()+1)%2] = (id5483x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5484out_output;

  { // Node ID: 5484 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5484in_input = id5483out_result[getCycle()%2];

    id5484out_output = id5484in_input;
  }
  { // Node ID: 5486 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5486in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5486in_option0 = in_vars.id5485out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5486in_option1 = id5484out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5486x_1;

    switch((id5486in_sel.getValueAsLong())) {
      case 0l:
        id5486x_1 = id5486in_option0;
        break;
      case 1l:
        id5486x_1 = id5486in_option1;
        break;
      default:
        id5486x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5486out_result[(getCycle()+1)%2] = (id5486x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5487out_output;

  { // Node ID: 5487 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5487in_input = id5486out_result[getCycle()%2];

    id5487out_output = id5487in_input;
  }
  { // Node ID: 5489 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5489in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5489in_option0 = in_vars.id5488out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5489in_option1 = id5487out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5489x_1;

    switch((id5489in_sel.getValueAsLong())) {
      case 0l:
        id5489x_1 = id5489in_option0;
        break;
      case 1l:
        id5489x_1 = id5489in_option1;
        break;
      default:
        id5489x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5489out_result[(getCycle()+1)%2] = (id5489x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5490out_output;

  { // Node ID: 5490 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5490in_input = id5489out_result[getCycle()%2];

    id5490out_output = id5490in_input;
  }
  { // Node ID: 5492 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5492in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5492in_option0 = in_vars.id5491out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5492in_option1 = id5490out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5492x_1;

    switch((id5492in_sel.getValueAsLong())) {
      case 0l:
        id5492x_1 = id5492in_option0;
        break;
      case 1l:
        id5492x_1 = id5492in_option1;
        break;
      default:
        id5492x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5492out_result[(getCycle()+1)%2] = (id5492x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5493out_output;

  { // Node ID: 5493 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5493in_input = id5492out_result[getCycle()%2];

    id5493out_output = id5493in_input;
  }
  { // Node ID: 5495 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5495in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5495in_option0 = in_vars.id5494out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5495in_option1 = id5493out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5495x_1;

    switch((id5495in_sel.getValueAsLong())) {
      case 0l:
        id5495x_1 = id5495in_option0;
        break;
      case 1l:
        id5495x_1 = id5495in_option1;
        break;
      default:
        id5495x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5495out_result[(getCycle()+1)%2] = (id5495x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5496out_output;

  { // Node ID: 5496 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5496in_input = id5495out_result[getCycle()%2];

    id5496out_output = id5496in_input;
  }
  { // Node ID: 5498 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5498in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5498in_option0 = in_vars.id5497out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5498in_option1 = id5496out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5498x_1;

    switch((id5498in_sel.getValueAsLong())) {
      case 0l:
        id5498x_1 = id5498in_option0;
        break;
      case 1l:
        id5498x_1 = id5498in_option1;
        break;
      default:
        id5498x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5498out_result[(getCycle()+1)%2] = (id5498x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5499out_output;

  { // Node ID: 5499 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5499in_input = id5498out_result[getCycle()%2];

    id5499out_output = id5499in_input;
  }
  { // Node ID: 5501 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5501in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5501in_option0 = in_vars.id5500out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5501in_option1 = id5499out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5501x_1;

    switch((id5501in_sel.getValueAsLong())) {
      case 0l:
        id5501x_1 = id5501in_option0;
        break;
      case 1l:
        id5501x_1 = id5501in_option1;
        break;
      default:
        id5501x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5501out_result[(getCycle()+1)%2] = (id5501x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5502out_output;

  { // Node ID: 5502 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5502in_input = id5501out_result[getCycle()%2];

    id5502out_output = id5502in_input;
  }
  { // Node ID: 5504 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5504in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5504in_option0 = in_vars.id5503out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5504in_option1 = id5502out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5504x_1;

    switch((id5504in_sel.getValueAsLong())) {
      case 0l:
        id5504x_1 = id5504in_option0;
        break;
      case 1l:
        id5504x_1 = id5504in_option1;
        break;
      default:
        id5504x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5504out_result[(getCycle()+1)%2] = (id5504x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5505out_output;

  { // Node ID: 5505 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5505in_input = id5504out_result[getCycle()%2];

    id5505out_output = id5505in_input;
  }
  { // Node ID: 5507 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5507in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5507in_option0 = in_vars.id5506out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5507in_option1 = id5505out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5507x_1;

    switch((id5507in_sel.getValueAsLong())) {
      case 0l:
        id5507x_1 = id5507in_option0;
        break;
      case 1l:
        id5507x_1 = id5507in_option1;
        break;
      default:
        id5507x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5507out_result[(getCycle()+1)%2] = (id5507x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5508out_output;

  { // Node ID: 5508 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5508in_input = id5507out_result[getCycle()%2];

    id5508out_output = id5508in_input;
  }
  { // Node ID: 5510 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5510in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5510in_option0 = in_vars.id5509out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5510in_option1 = id5508out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5510x_1;

    switch((id5510in_sel.getValueAsLong())) {
      case 0l:
        id5510x_1 = id5510in_option0;
        break;
      case 1l:
        id5510x_1 = id5510in_option1;
        break;
      default:
        id5510x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5510out_result[(getCycle()+1)%2] = (id5510x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5511out_output;

  { // Node ID: 5511 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5511in_input = id5510out_result[getCycle()%2];

    id5511out_output = id5511in_input;
  }
  { // Node ID: 5513 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5513in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5513in_option0 = in_vars.id5512out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5513in_option1 = id5511out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5513x_1;

    switch((id5513in_sel.getValueAsLong())) {
      case 0l:
        id5513x_1 = id5513in_option0;
        break;
      case 1l:
        id5513x_1 = id5513in_option1;
        break;
      default:
        id5513x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5513out_result[(getCycle()+1)%2] = (id5513x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5514out_output;

  { // Node ID: 5514 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5514in_input = id5513out_result[getCycle()%2];

    id5514out_output = id5514in_input;
  }
  { // Node ID: 5516 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5516in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5516in_option0 = in_vars.id5515out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5516in_option1 = id5514out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5516x_1;

    switch((id5516in_sel.getValueAsLong())) {
      case 0l:
        id5516x_1 = id5516in_option0;
        break;
      case 1l:
        id5516x_1 = id5516in_option1;
        break;
      default:
        id5516x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5516out_result[(getCycle()+1)%2] = (id5516x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5517out_output;

  { // Node ID: 5517 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5517in_input = id5516out_result[getCycle()%2];

    id5517out_output = id5517in_input;
  }
  { // Node ID: 5519 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5519in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5519in_option0 = in_vars.id5518out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5519in_option1 = id5517out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5519x_1;

    switch((id5519in_sel.getValueAsLong())) {
      case 0l:
        id5519x_1 = id5519in_option0;
        break;
      case 1l:
        id5519x_1 = id5519in_option1;
        break;
      default:
        id5519x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5519out_result[(getCycle()+1)%2] = (id5519x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5520out_output;

  { // Node ID: 5520 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5520in_input = id5519out_result[getCycle()%2];

    id5520out_output = id5520in_input;
  }
  { // Node ID: 5522 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5522in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5522in_option0 = in_vars.id5521out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5522in_option1 = id5520out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5522x_1;

    switch((id5522in_sel.getValueAsLong())) {
      case 0l:
        id5522x_1 = id5522in_option0;
        break;
      case 1l:
        id5522x_1 = id5522in_option1;
        break;
      default:
        id5522x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5522out_result[(getCycle()+1)%2] = (id5522x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5523out_output;

  { // Node ID: 5523 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5523in_input = id5522out_result[getCycle()%2];

    id5523out_output = id5523in_input;
  }
  { // Node ID: 5525 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5525in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5525in_option0 = in_vars.id5524out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5525in_option1 = id5523out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5525x_1;

    switch((id5525in_sel.getValueAsLong())) {
      case 0l:
        id5525x_1 = id5525in_option0;
        break;
      case 1l:
        id5525x_1 = id5525in_option1;
        break;
      default:
        id5525x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5525out_result[(getCycle()+1)%2] = (id5525x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5526out_output;

  { // Node ID: 5526 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5526in_input = id5525out_result[getCycle()%2];

    id5526out_output = id5526in_input;
  }
  { // Node ID: 5528 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5528in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5528in_option0 = in_vars.id5527out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5528in_option1 = id5526out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5528x_1;

    switch((id5528in_sel.getValueAsLong())) {
      case 0l:
        id5528x_1 = id5528in_option0;
        break;
      case 1l:
        id5528x_1 = id5528in_option1;
        break;
      default:
        id5528x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5528out_result[(getCycle()+1)%2] = (id5528x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5529out_output;

  { // Node ID: 5529 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5529in_input = id5528out_result[getCycle()%2];

    id5529out_output = id5529in_input;
  }
  { // Node ID: 5531 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5531in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5531in_option0 = in_vars.id5530out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5531in_option1 = id5529out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5531x_1;

    switch((id5531in_sel.getValueAsLong())) {
      case 0l:
        id5531x_1 = id5531in_option0;
        break;
      case 1l:
        id5531x_1 = id5531in_option1;
        break;
      default:
        id5531x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5531out_result[(getCycle()+1)%2] = (id5531x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5532out_output;

  { // Node ID: 5532 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5532in_input = id5531out_result[getCycle()%2];

    id5532out_output = id5532in_input;
  }
  { // Node ID: 5534 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5534in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5534in_option0 = in_vars.id5533out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5534in_option1 = id5532out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5534x_1;

    switch((id5534in_sel.getValueAsLong())) {
      case 0l:
        id5534x_1 = id5534in_option0;
        break;
      case 1l:
        id5534x_1 = id5534in_option1;
        break;
      default:
        id5534x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5534out_result[(getCycle()+1)%2] = (id5534x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5535out_output;

  { // Node ID: 5535 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5535in_input = id5534out_result[getCycle()%2];

    id5535out_output = id5535in_input;
  }
  { // Node ID: 5537 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5537in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5537in_option0 = in_vars.id5536out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5537in_option1 = id5535out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5537x_1;

    switch((id5537in_sel.getValueAsLong())) {
      case 0l:
        id5537x_1 = id5537in_option0;
        break;
      case 1l:
        id5537x_1 = id5537in_option1;
        break;
      default:
        id5537x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5537out_result[(getCycle()+1)%2] = (id5537x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5538out_output;

  { // Node ID: 5538 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5538in_input = id5537out_result[getCycle()%2];

    id5538out_output = id5538in_input;
  }
  { // Node ID: 5540 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5540in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5540in_option0 = in_vars.id5539out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5540in_option1 = id5538out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5540x_1;

    switch((id5540in_sel.getValueAsLong())) {
      case 0l:
        id5540x_1 = id5540in_option0;
        break;
      case 1l:
        id5540x_1 = id5540in_option1;
        break;
      default:
        id5540x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5540out_result[(getCycle()+1)%2] = (id5540x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5541out_output;

  { // Node ID: 5541 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5541in_input = id5540out_result[getCycle()%2];

    id5541out_output = id5541in_input;
  }
  { // Node ID: 5543 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5543in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5543in_option0 = in_vars.id5542out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5543in_option1 = id5541out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5543x_1;

    switch((id5543in_sel.getValueAsLong())) {
      case 0l:
        id5543x_1 = id5543in_option0;
        break;
      case 1l:
        id5543x_1 = id5543in_option1;
        break;
      default:
        id5543x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5543out_result[(getCycle()+1)%2] = (id5543x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5544out_output;

  { // Node ID: 5544 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5544in_input = id5543out_result[getCycle()%2];

    id5544out_output = id5544in_input;
  }
  { // Node ID: 5546 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5546in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5546in_option0 = in_vars.id5545out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5546in_option1 = id5544out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5546x_1;

    switch((id5546in_sel.getValueAsLong())) {
      case 0l:
        id5546x_1 = id5546in_option0;
        break;
      case 1l:
        id5546x_1 = id5546in_option1;
        break;
      default:
        id5546x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5546out_result[(getCycle()+1)%2] = (id5546x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5547out_output;

  { // Node ID: 5547 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5547in_input = id5546out_result[getCycle()%2];

    id5547out_output = id5547in_input;
  }
  { // Node ID: 5549 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5549in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5549in_option0 = in_vars.id5548out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5549in_option1 = id5547out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5549x_1;

    switch((id5549in_sel.getValueAsLong())) {
      case 0l:
        id5549x_1 = id5549in_option0;
        break;
      case 1l:
        id5549x_1 = id5549in_option1;
        break;
      default:
        id5549x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5549out_result[(getCycle()+1)%2] = (id5549x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5550out_output;

  { // Node ID: 5550 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5550in_input = id5549out_result[getCycle()%2];

    id5550out_output = id5550in_input;
  }
  { // Node ID: 5552 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5552in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5552in_option0 = in_vars.id5551out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5552in_option1 = id5550out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5552x_1;

    switch((id5552in_sel.getValueAsLong())) {
      case 0l:
        id5552x_1 = id5552in_option0;
        break;
      case 1l:
        id5552x_1 = id5552in_option1;
        break;
      default:
        id5552x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5552out_result[(getCycle()+1)%2] = (id5552x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5553out_output;

  { // Node ID: 5553 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5553in_input = id5552out_result[getCycle()%2];

    id5553out_output = id5553in_input;
  }
  { // Node ID: 5555 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5555in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5555in_option0 = in_vars.id5554out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5555in_option1 = id5553out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5555x_1;

    switch((id5555in_sel.getValueAsLong())) {
      case 0l:
        id5555x_1 = id5555in_option0;
        break;
      case 1l:
        id5555x_1 = id5555in_option1;
        break;
      default:
        id5555x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5555out_result[(getCycle()+1)%2] = (id5555x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5556out_output;

  { // Node ID: 5556 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5556in_input = id5555out_result[getCycle()%2];

    id5556out_output = id5556in_input;
  }
  { // Node ID: 5558 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5558in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5558in_option0 = in_vars.id5557out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5558in_option1 = id5556out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5558x_1;

    switch((id5558in_sel.getValueAsLong())) {
      case 0l:
        id5558x_1 = id5558in_option0;
        break;
      case 1l:
        id5558x_1 = id5558in_option1;
        break;
      default:
        id5558x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5558out_result[(getCycle()+1)%2] = (id5558x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5559out_output;

  { // Node ID: 5559 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5559in_input = id5558out_result[getCycle()%2];

    id5559out_output = id5559in_input;
  }
  { // Node ID: 5561 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5561in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5561in_option0 = in_vars.id5560out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5561in_option1 = id5559out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5561x_1;

    switch((id5561in_sel.getValueAsLong())) {
      case 0l:
        id5561x_1 = id5561in_option0;
        break;
      case 1l:
        id5561x_1 = id5561in_option1;
        break;
      default:
        id5561x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5561out_result[(getCycle()+1)%2] = (id5561x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5562out_output;

  { // Node ID: 5562 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5562in_input = id5561out_result[getCycle()%2];

    id5562out_output = id5562in_input;
  }
  { // Node ID: 5564 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5564in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5564in_option0 = in_vars.id5563out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5564in_option1 = id5562out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5564x_1;

    switch((id5564in_sel.getValueAsLong())) {
      case 0l:
        id5564x_1 = id5564in_option0;
        break;
      case 1l:
        id5564x_1 = id5564in_option1;
        break;
      default:
        id5564x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5564out_result[(getCycle()+1)%2] = (id5564x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5565out_output;

  { // Node ID: 5565 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5565in_input = id5564out_result[getCycle()%2];

    id5565out_output = id5565in_input;
  }
  { // Node ID: 5567 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5567in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5567in_option0 = in_vars.id5566out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5567in_option1 = id5565out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5567x_1;

    switch((id5567in_sel.getValueAsLong())) {
      case 0l:
        id5567x_1 = id5567in_option0;
        break;
      case 1l:
        id5567x_1 = id5567in_option1;
        break;
      default:
        id5567x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5567out_result[(getCycle()+1)%2] = (id5567x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5568out_output;

  { // Node ID: 5568 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5568in_input = id5567out_result[getCycle()%2];

    id5568out_output = id5568in_input;
  }
  { // Node ID: 5570 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5570in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5570in_option0 = in_vars.id5569out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5570in_option1 = id5568out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5570x_1;

    switch((id5570in_sel.getValueAsLong())) {
      case 0l:
        id5570x_1 = id5570in_option0;
        break;
      case 1l:
        id5570x_1 = id5570in_option1;
        break;
      default:
        id5570x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5570out_result[(getCycle()+1)%2] = (id5570x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5571out_output;

  { // Node ID: 5571 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5571in_input = id5570out_result[getCycle()%2];

    id5571out_output = id5571in_input;
  }
  { // Node ID: 5573 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5573in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5573in_option0 = in_vars.id5572out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5573in_option1 = id5571out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5573x_1;

    switch((id5573in_sel.getValueAsLong())) {
      case 0l:
        id5573x_1 = id5573in_option0;
        break;
      case 1l:
        id5573x_1 = id5573in_option1;
        break;
      default:
        id5573x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5573out_result[(getCycle()+1)%2] = (id5573x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5574out_output;

  { // Node ID: 5574 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5574in_input = id5573out_result[getCycle()%2];

    id5574out_output = id5574in_input;
  }
  { // Node ID: 5576 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5576in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5576in_option0 = in_vars.id5575out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5576in_option1 = id5574out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5576x_1;

    switch((id5576in_sel.getValueAsLong())) {
      case 0l:
        id5576x_1 = id5576in_option0;
        break;
      case 1l:
        id5576x_1 = id5576in_option1;
        break;
      default:
        id5576x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5576out_result[(getCycle()+1)%2] = (id5576x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5577out_output;

  { // Node ID: 5577 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5577in_input = id5576out_result[getCycle()%2];

    id5577out_output = id5577in_input;
  }
  { // Node ID: 5579 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5579in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5579in_option0 = in_vars.id5578out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5579in_option1 = id5577out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5579x_1;

    switch((id5579in_sel.getValueAsLong())) {
      case 0l:
        id5579x_1 = id5579in_option0;
        break;
      case 1l:
        id5579x_1 = id5579in_option1;
        break;
      default:
        id5579x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5579out_result[(getCycle()+1)%2] = (id5579x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5580out_output;

  { // Node ID: 5580 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5580in_input = id5579out_result[getCycle()%2];

    id5580out_output = id5580in_input;
  }
  { // Node ID: 5582 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5582in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5582in_option0 = in_vars.id5581out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5582in_option1 = id5580out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5582x_1;

    switch((id5582in_sel.getValueAsLong())) {
      case 0l:
        id5582x_1 = id5582in_option0;
        break;
      case 1l:
        id5582x_1 = id5582in_option1;
        break;
      default:
        id5582x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5582out_result[(getCycle()+1)%2] = (id5582x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5583out_output;

  { // Node ID: 5583 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5583in_input = id5582out_result[getCycle()%2];

    id5583out_output = id5583in_input;
  }
  { // Node ID: 5585 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5585in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5585in_option0 = in_vars.id5584out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5585in_option1 = id5583out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5585x_1;

    switch((id5585in_sel.getValueAsLong())) {
      case 0l:
        id5585x_1 = id5585in_option0;
        break;
      case 1l:
        id5585x_1 = id5585in_option1;
        break;
      default:
        id5585x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5585out_result[(getCycle()+1)%2] = (id5585x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5586out_output;

  { // Node ID: 5586 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5586in_input = id5585out_result[getCycle()%2];

    id5586out_output = id5586in_input;
  }
  { // Node ID: 5588 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5588in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5588in_option0 = in_vars.id5587out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5588in_option1 = id5586out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5588x_1;

    switch((id5588in_sel.getValueAsLong())) {
      case 0l:
        id5588x_1 = id5588in_option0;
        break;
      case 1l:
        id5588x_1 = id5588in_option1;
        break;
      default:
        id5588x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5588out_result[(getCycle()+1)%2] = (id5588x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5589out_output;

  { // Node ID: 5589 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5589in_input = id5588out_result[getCycle()%2];

    id5589out_output = id5589in_input;
  }
  { // Node ID: 5591 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5591in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5591in_option0 = in_vars.id5590out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5591in_option1 = id5589out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5591x_1;

    switch((id5591in_sel.getValueAsLong())) {
      case 0l:
        id5591x_1 = id5591in_option0;
        break;
      case 1l:
        id5591x_1 = id5591in_option1;
        break;
      default:
        id5591x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5591out_result[(getCycle()+1)%2] = (id5591x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5592out_output;

  { // Node ID: 5592 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5592in_input = id5591out_result[getCycle()%2];

    id5592out_output = id5592in_input;
  }
  { // Node ID: 5594 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5594in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5594in_option0 = in_vars.id5593out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5594in_option1 = id5592out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5594x_1;

    switch((id5594in_sel.getValueAsLong())) {
      case 0l:
        id5594x_1 = id5594in_option0;
        break;
      case 1l:
        id5594x_1 = id5594in_option1;
        break;
      default:
        id5594x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5594out_result[(getCycle()+1)%2] = (id5594x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5595out_output;

  { // Node ID: 5595 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5595in_input = id5594out_result[getCycle()%2];

    id5595out_output = id5595in_input;
  }
  { // Node ID: 5597 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5597in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5597in_option0 = in_vars.id5596out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5597in_option1 = id5595out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5597x_1;

    switch((id5597in_sel.getValueAsLong())) {
      case 0l:
        id5597x_1 = id5597in_option0;
        break;
      case 1l:
        id5597x_1 = id5597in_option1;
        break;
      default:
        id5597x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5597out_result[(getCycle()+1)%2] = (id5597x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5598out_output;

  { // Node ID: 5598 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5598in_input = id5597out_result[getCycle()%2];

    id5598out_output = id5598in_input;
  }
  { // Node ID: 5600 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5600in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5600in_option0 = in_vars.id5599out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5600in_option1 = id5598out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5600x_1;

    switch((id5600in_sel.getValueAsLong())) {
      case 0l:
        id5600x_1 = id5600in_option0;
        break;
      case 1l:
        id5600x_1 = id5600in_option1;
        break;
      default:
        id5600x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5600out_result[(getCycle()+1)%2] = (id5600x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5601out_output;

  { // Node ID: 5601 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5601in_input = id5600out_result[getCycle()%2];

    id5601out_output = id5601in_input;
  }
  { // Node ID: 5603 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5603in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5603in_option0 = in_vars.id5602out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5603in_option1 = id5601out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5603x_1;

    switch((id5603in_sel.getValueAsLong())) {
      case 0l:
        id5603x_1 = id5603in_option0;
        break;
      case 1l:
        id5603x_1 = id5603in_option1;
        break;
      default:
        id5603x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5603out_result[(getCycle()+1)%2] = (id5603x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5604out_output;

  { // Node ID: 5604 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5604in_input = id5603out_result[getCycle()%2];

    id5604out_output = id5604in_input;
  }
  { // Node ID: 5606 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5606in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5606in_option0 = in_vars.id5605out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5606in_option1 = id5604out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5606x_1;

    switch((id5606in_sel.getValueAsLong())) {
      case 0l:
        id5606x_1 = id5606in_option0;
        break;
      case 1l:
        id5606x_1 = id5606in_option1;
        break;
      default:
        id5606x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5606out_result[(getCycle()+1)%2] = (id5606x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5607out_output;

  { // Node ID: 5607 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5607in_input = id5606out_result[getCycle()%2];

    id5607out_output = id5607in_input;
  }
  { // Node ID: 5609 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5609in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5609in_option0 = in_vars.id5608out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5609in_option1 = id5607out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5609x_1;

    switch((id5609in_sel.getValueAsLong())) {
      case 0l:
        id5609x_1 = id5609in_option0;
        break;
      case 1l:
        id5609x_1 = id5609in_option1;
        break;
      default:
        id5609x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5609out_result[(getCycle()+1)%2] = (id5609x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5610out_output;

  { // Node ID: 5610 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5610in_input = id5609out_result[getCycle()%2];

    id5610out_output = id5610in_input;
  }
  { // Node ID: 5612 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5612in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5612in_option0 = in_vars.id5611out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5612in_option1 = id5610out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5612x_1;

    switch((id5612in_sel.getValueAsLong())) {
      case 0l:
        id5612x_1 = id5612in_option0;
        break;
      case 1l:
        id5612x_1 = id5612in_option1;
        break;
      default:
        id5612x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5612out_result[(getCycle()+1)%2] = (id5612x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5613out_output;

  { // Node ID: 5613 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5613in_input = id5612out_result[getCycle()%2];

    id5613out_output = id5613in_input;
  }
  { // Node ID: 5615 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5615in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5615in_option0 = in_vars.id5614out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5615in_option1 = id5613out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5615x_1;

    switch((id5615in_sel.getValueAsLong())) {
      case 0l:
        id5615x_1 = id5615in_option0;
        break;
      case 1l:
        id5615x_1 = id5615in_option1;
        break;
      default:
        id5615x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5615out_result[(getCycle()+1)%2] = (id5615x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5616out_output;

  { // Node ID: 5616 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5616in_input = id5615out_result[getCycle()%2];

    id5616out_output = id5616in_input;
  }
  { // Node ID: 5618 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5618in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5618in_option0 = in_vars.id5617out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5618in_option1 = id5616out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5618x_1;

    switch((id5618in_sel.getValueAsLong())) {
      case 0l:
        id5618x_1 = id5618in_option0;
        break;
      case 1l:
        id5618x_1 = id5618in_option1;
        break;
      default:
        id5618x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5618out_result[(getCycle()+1)%2] = (id5618x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5619out_output;

  { // Node ID: 5619 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5619in_input = id5618out_result[getCycle()%2];

    id5619out_output = id5619in_input;
  }
  { // Node ID: 5621 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5621in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5621in_option0 = in_vars.id5620out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5621in_option1 = id5619out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5621x_1;

    switch((id5621in_sel.getValueAsLong())) {
      case 0l:
        id5621x_1 = id5621in_option0;
        break;
      case 1l:
        id5621x_1 = id5621in_option1;
        break;
      default:
        id5621x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5621out_result[(getCycle()+1)%2] = (id5621x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5622out_output;

  { // Node ID: 5622 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5622in_input = id5621out_result[getCycle()%2];

    id5622out_output = id5622in_input;
  }
  { // Node ID: 5624 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5624in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5624in_option0 = in_vars.id5623out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5624in_option1 = id5622out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5624x_1;

    switch((id5624in_sel.getValueAsLong())) {
      case 0l:
        id5624x_1 = id5624in_option0;
        break;
      case 1l:
        id5624x_1 = id5624in_option1;
        break;
      default:
        id5624x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5624out_result[(getCycle()+1)%2] = (id5624x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5625out_output;

  { // Node ID: 5625 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5625in_input = id5624out_result[getCycle()%2];

    id5625out_output = id5625in_input;
  }
  { // Node ID: 5627 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5627in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5627in_option0 = in_vars.id5626out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5627in_option1 = id5625out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5627x_1;

    switch((id5627in_sel.getValueAsLong())) {
      case 0l:
        id5627x_1 = id5627in_option0;
        break;
      case 1l:
        id5627x_1 = id5627in_option1;
        break;
      default:
        id5627x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5627out_result[(getCycle()+1)%2] = (id5627x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5628out_output;

  { // Node ID: 5628 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5628in_input = id5627out_result[getCycle()%2];

    id5628out_output = id5628in_input;
  }
  { // Node ID: 5630 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5630in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5630in_option0 = in_vars.id5629out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5630in_option1 = id5628out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5630x_1;

    switch((id5630in_sel.getValueAsLong())) {
      case 0l:
        id5630x_1 = id5630in_option0;
        break;
      case 1l:
        id5630x_1 = id5630in_option1;
        break;
      default:
        id5630x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5630out_result[(getCycle()+1)%2] = (id5630x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5631out_output;

  { // Node ID: 5631 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5631in_input = id5630out_result[getCycle()%2];

    id5631out_output = id5631in_input;
  }
  { // Node ID: 5633 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5633in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5633in_option0 = in_vars.id5632out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5633in_option1 = id5631out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5633x_1;

    switch((id5633in_sel.getValueAsLong())) {
      case 0l:
        id5633x_1 = id5633in_option0;
        break;
      case 1l:
        id5633x_1 = id5633in_option1;
        break;
      default:
        id5633x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5633out_result[(getCycle()+1)%2] = (id5633x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5634out_output;

  { // Node ID: 5634 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5634in_input = id5633out_result[getCycle()%2];

    id5634out_output = id5634in_input;
  }
  { // Node ID: 5636 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5636in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5636in_option0 = in_vars.id5635out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5636in_option1 = id5634out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5636x_1;

    switch((id5636in_sel.getValueAsLong())) {
      case 0l:
        id5636x_1 = id5636in_option0;
        break;
      case 1l:
        id5636x_1 = id5636in_option1;
        break;
      default:
        id5636x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5636out_result[(getCycle()+1)%2] = (id5636x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5637out_output;

  { // Node ID: 5637 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5637in_input = id5636out_result[getCycle()%2];

    id5637out_output = id5637in_input;
  }
  { // Node ID: 5639 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5639in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5639in_option0 = in_vars.id5638out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5639in_option1 = id5637out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5639x_1;

    switch((id5639in_sel.getValueAsLong())) {
      case 0l:
        id5639x_1 = id5639in_option0;
        break;
      case 1l:
        id5639x_1 = id5639in_option1;
        break;
      default:
        id5639x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5639out_result[(getCycle()+1)%2] = (id5639x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5640out_output;

  { // Node ID: 5640 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5640in_input = id5639out_result[getCycle()%2];

    id5640out_output = id5640in_input;
  }
  { // Node ID: 5642 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5642in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5642in_option0 = in_vars.id5641out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5642in_option1 = id5640out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5642x_1;

    switch((id5642in_sel.getValueAsLong())) {
      case 0l:
        id5642x_1 = id5642in_option0;
        break;
      case 1l:
        id5642x_1 = id5642in_option1;
        break;
      default:
        id5642x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5642out_result[(getCycle()+1)%2] = (id5642x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5643out_output;

  { // Node ID: 5643 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5643in_input = id5642out_result[getCycle()%2];

    id5643out_output = id5643in_input;
  }
  { // Node ID: 5645 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5645in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5645in_option0 = in_vars.id5644out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5645in_option1 = id5643out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5645x_1;

    switch((id5645in_sel.getValueAsLong())) {
      case 0l:
        id5645x_1 = id5645in_option0;
        break;
      case 1l:
        id5645x_1 = id5645in_option1;
        break;
      default:
        id5645x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5645out_result[(getCycle()+1)%2] = (id5645x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5646out_output;

  { // Node ID: 5646 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5646in_input = id5645out_result[getCycle()%2];

    id5646out_output = id5646in_input;
  }
  { // Node ID: 5648 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5648in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5648in_option0 = in_vars.id5647out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5648in_option1 = id5646out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5648x_1;

    switch((id5648in_sel.getValueAsLong())) {
      case 0l:
        id5648x_1 = id5648in_option0;
        break;
      case 1l:
        id5648x_1 = id5648in_option1;
        break;
      default:
        id5648x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5648out_result[(getCycle()+1)%2] = (id5648x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5649out_output;

  { // Node ID: 5649 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5649in_input = id5648out_result[getCycle()%2];

    id5649out_output = id5649in_input;
  }
  { // Node ID: 5651 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5651in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5651in_option0 = in_vars.id5650out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5651in_option1 = id5649out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5651x_1;

    switch((id5651in_sel.getValueAsLong())) {
      case 0l:
        id5651x_1 = id5651in_option0;
        break;
      case 1l:
        id5651x_1 = id5651in_option1;
        break;
      default:
        id5651x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5651out_result[(getCycle()+1)%2] = (id5651x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5652out_output;

  { // Node ID: 5652 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5652in_input = id5651out_result[getCycle()%2];

    id5652out_output = id5652in_input;
  }
  { // Node ID: 5654 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5654in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5654in_option0 = in_vars.id5653out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5654in_option1 = id5652out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5654x_1;

    switch((id5654in_sel.getValueAsLong())) {
      case 0l:
        id5654x_1 = id5654in_option0;
        break;
      case 1l:
        id5654x_1 = id5654in_option1;
        break;
      default:
        id5654x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5654out_result[(getCycle()+1)%2] = (id5654x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5655out_output;

  { // Node ID: 5655 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5655in_input = id5654out_result[getCycle()%2];

    id5655out_output = id5655in_input;
  }
  { // Node ID: 5657 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5657in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5657in_option0 = in_vars.id5656out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5657in_option1 = id5655out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5657x_1;

    switch((id5657in_sel.getValueAsLong())) {
      case 0l:
        id5657x_1 = id5657in_option0;
        break;
      case 1l:
        id5657x_1 = id5657in_option1;
        break;
      default:
        id5657x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5657out_result[(getCycle()+1)%2] = (id5657x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5658out_output;

  { // Node ID: 5658 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5658in_input = id5657out_result[getCycle()%2];

    id5658out_output = id5658in_input;
  }
  { // Node ID: 5660 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5660in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5660in_option0 = in_vars.id5659out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5660in_option1 = id5658out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5660x_1;

    switch((id5660in_sel.getValueAsLong())) {
      case 0l:
        id5660x_1 = id5660in_option0;
        break;
      case 1l:
        id5660x_1 = id5660in_option1;
        break;
      default:
        id5660x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5660out_result[(getCycle()+1)%2] = (id5660x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5661out_output;

  { // Node ID: 5661 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5661in_input = id5660out_result[getCycle()%2];

    id5661out_output = id5661in_input;
  }
  { // Node ID: 5663 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5663in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5663in_option0 = in_vars.id5662out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5663in_option1 = id5661out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5663x_1;

    switch((id5663in_sel.getValueAsLong())) {
      case 0l:
        id5663x_1 = id5663in_option0;
        break;
      case 1l:
        id5663x_1 = id5663in_option1;
        break;
      default:
        id5663x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5663out_result[(getCycle()+1)%2] = (id5663x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5664out_output;

  { // Node ID: 5664 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5664in_input = id5663out_result[getCycle()%2];

    id5664out_output = id5664in_input;
  }
  { // Node ID: 5666 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5666in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5666in_option0 = in_vars.id5665out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5666in_option1 = id5664out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5666x_1;

    switch((id5666in_sel.getValueAsLong())) {
      case 0l:
        id5666x_1 = id5666in_option0;
        break;
      case 1l:
        id5666x_1 = id5666in_option1;
        break;
      default:
        id5666x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5666out_result[(getCycle()+1)%2] = (id5666x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5667out_output;

  { // Node ID: 5667 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5667in_input = id5666out_result[getCycle()%2];

    id5667out_output = id5667in_input;
  }
  { // Node ID: 5669 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5669in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5669in_option0 = in_vars.id5668out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5669in_option1 = id5667out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5669x_1;

    switch((id5669in_sel.getValueAsLong())) {
      case 0l:
        id5669x_1 = id5669in_option0;
        break;
      case 1l:
        id5669x_1 = id5669in_option1;
        break;
      default:
        id5669x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5669out_result[(getCycle()+1)%2] = (id5669x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5670out_output;

  { // Node ID: 5670 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5670in_input = id5669out_result[getCycle()%2];

    id5670out_output = id5670in_input;
  }
  { // Node ID: 5672 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5672in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5672in_option0 = in_vars.id5671out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5672in_option1 = id5670out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5672x_1;

    switch((id5672in_sel.getValueAsLong())) {
      case 0l:
        id5672x_1 = id5672in_option0;
        break;
      case 1l:
        id5672x_1 = id5672in_option1;
        break;
      default:
        id5672x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5672out_result[(getCycle()+1)%2] = (id5672x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5673out_output;

  { // Node ID: 5673 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5673in_input = id5672out_result[getCycle()%2];

    id5673out_output = id5673in_input;
  }
  { // Node ID: 5675 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5675in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5675in_option0 = in_vars.id5674out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5675in_option1 = id5673out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5675x_1;

    switch((id5675in_sel.getValueAsLong())) {
      case 0l:
        id5675x_1 = id5675in_option0;
        break;
      case 1l:
        id5675x_1 = id5675in_option1;
        break;
      default:
        id5675x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5675out_result[(getCycle()+1)%2] = (id5675x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5676out_output;

  { // Node ID: 5676 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5676in_input = id5675out_result[getCycle()%2];

    id5676out_output = id5676in_input;
  }
  { // Node ID: 5678 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5678in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5678in_option0 = in_vars.id5677out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5678in_option1 = id5676out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5678x_1;

    switch((id5678in_sel.getValueAsLong())) {
      case 0l:
        id5678x_1 = id5678in_option0;
        break;
      case 1l:
        id5678x_1 = id5678in_option1;
        break;
      default:
        id5678x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5678out_result[(getCycle()+1)%2] = (id5678x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5679out_output;

  { // Node ID: 5679 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5679in_input = id5678out_result[getCycle()%2];

    id5679out_output = id5679in_input;
  }
  { // Node ID: 5681 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5681in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5681in_option0 = in_vars.id5680out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5681in_option1 = id5679out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5681x_1;

    switch((id5681in_sel.getValueAsLong())) {
      case 0l:
        id5681x_1 = id5681in_option0;
        break;
      case 1l:
        id5681x_1 = id5681in_option1;
        break;
      default:
        id5681x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5681out_result[(getCycle()+1)%2] = (id5681x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5682out_output;

  { // Node ID: 5682 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5682in_input = id5681out_result[getCycle()%2];

    id5682out_output = id5682in_input;
  }
  { // Node ID: 5684 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5684in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5684in_option0 = in_vars.id5683out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5684in_option1 = id5682out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5684x_1;

    switch((id5684in_sel.getValueAsLong())) {
      case 0l:
        id5684x_1 = id5684in_option0;
        break;
      case 1l:
        id5684x_1 = id5684in_option1;
        break;
      default:
        id5684x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5684out_result[(getCycle()+1)%2] = (id5684x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5685out_output;

  { // Node ID: 5685 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5685in_input = id5684out_result[getCycle()%2];

    id5685out_output = id5685in_input;
  }
  { // Node ID: 5687 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5687in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5687in_option0 = in_vars.id5686out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5687in_option1 = id5685out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5687x_1;

    switch((id5687in_sel.getValueAsLong())) {
      case 0l:
        id5687x_1 = id5687in_option0;
        break;
      case 1l:
        id5687x_1 = id5687in_option1;
        break;
      default:
        id5687x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5687out_result[(getCycle()+1)%2] = (id5687x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5688out_output;

  { // Node ID: 5688 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5688in_input = id5687out_result[getCycle()%2];

    id5688out_output = id5688in_input;
  }
  { // Node ID: 5690 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5690in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5690in_option0 = in_vars.id5689out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5690in_option1 = id5688out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5690x_1;

    switch((id5690in_sel.getValueAsLong())) {
      case 0l:
        id5690x_1 = id5690in_option0;
        break;
      case 1l:
        id5690x_1 = id5690in_option1;
        break;
      default:
        id5690x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5690out_result[(getCycle()+1)%2] = (id5690x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5691out_output;

  { // Node ID: 5691 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5691in_input = id5690out_result[getCycle()%2];

    id5691out_output = id5691in_input;
  }
  { // Node ID: 5693 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5693in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5693in_option0 = in_vars.id5692out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5693in_option1 = id5691out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5693x_1;

    switch((id5693in_sel.getValueAsLong())) {
      case 0l:
        id5693x_1 = id5693in_option0;
        break;
      case 1l:
        id5693x_1 = id5693in_option1;
        break;
      default:
        id5693x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5693out_result[(getCycle()+1)%2] = (id5693x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5694out_output;

  { // Node ID: 5694 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5694in_input = id5693out_result[getCycle()%2];

    id5694out_output = id5694in_input;
  }
  { // Node ID: 5696 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5696in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5696in_option0 = in_vars.id5695out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5696in_option1 = id5694out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5696x_1;

    switch((id5696in_sel.getValueAsLong())) {
      case 0l:
        id5696x_1 = id5696in_option0;
        break;
      case 1l:
        id5696x_1 = id5696in_option1;
        break;
      default:
        id5696x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5696out_result[(getCycle()+1)%2] = (id5696x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5697out_output;

  { // Node ID: 5697 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5697in_input = id5696out_result[getCycle()%2];

    id5697out_output = id5697in_input;
  }
  { // Node ID: 5699 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5699in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5699in_option0 = in_vars.id5698out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5699in_option1 = id5697out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5699x_1;

    switch((id5699in_sel.getValueAsLong())) {
      case 0l:
        id5699x_1 = id5699in_option0;
        break;
      case 1l:
        id5699x_1 = id5699in_option1;
        break;
      default:
        id5699x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5699out_result[(getCycle()+1)%2] = (id5699x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5700out_output;

  { // Node ID: 5700 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5700in_input = id5699out_result[getCycle()%2];

    id5700out_output = id5700in_input;
  }
  { // Node ID: 5702 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5702in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5702in_option0 = in_vars.id5701out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5702in_option1 = id5700out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5702x_1;

    switch((id5702in_sel.getValueAsLong())) {
      case 0l:
        id5702x_1 = id5702in_option0;
        break;
      case 1l:
        id5702x_1 = id5702in_option1;
        break;
      default:
        id5702x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5702out_result[(getCycle()+1)%2] = (id5702x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5703out_output;

  { // Node ID: 5703 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5703in_input = id5702out_result[getCycle()%2];

    id5703out_output = id5703in_input;
  }
  { // Node ID: 5705 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5705in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5705in_option0 = in_vars.id5704out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5705in_option1 = id5703out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5705x_1;

    switch((id5705in_sel.getValueAsLong())) {
      case 0l:
        id5705x_1 = id5705in_option0;
        break;
      case 1l:
        id5705x_1 = id5705in_option1;
        break;
      default:
        id5705x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5705out_result[(getCycle()+1)%2] = (id5705x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5706out_output;

  { // Node ID: 5706 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5706in_input = id5705out_result[getCycle()%2];

    id5706out_output = id5706in_input;
  }
  { // Node ID: 5708 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5708in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5708in_option0 = in_vars.id5707out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5708in_option1 = id5706out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5708x_1;

    switch((id5708in_sel.getValueAsLong())) {
      case 0l:
        id5708x_1 = id5708in_option0;
        break;
      case 1l:
        id5708x_1 = id5708in_option1;
        break;
      default:
        id5708x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5708out_result[(getCycle()+1)%2] = (id5708x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5709out_output;

  { // Node ID: 5709 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5709in_input = id5708out_result[getCycle()%2];

    id5709out_output = id5709in_input;
  }
  { // Node ID: 5711 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5711in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5711in_option0 = in_vars.id5710out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5711in_option1 = id5709out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5711x_1;

    switch((id5711in_sel.getValueAsLong())) {
      case 0l:
        id5711x_1 = id5711in_option0;
        break;
      case 1l:
        id5711x_1 = id5711in_option1;
        break;
      default:
        id5711x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5711out_result[(getCycle()+1)%2] = (id5711x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5712out_output;

  { // Node ID: 5712 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5712in_input = id5711out_result[getCycle()%2];

    id5712out_output = id5712in_input;
  }
  { // Node ID: 5714 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5714in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5714in_option0 = in_vars.id5713out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5714in_option1 = id5712out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5714x_1;

    switch((id5714in_sel.getValueAsLong())) {
      case 0l:
        id5714x_1 = id5714in_option0;
        break;
      case 1l:
        id5714x_1 = id5714in_option1;
        break;
      default:
        id5714x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5714out_result[(getCycle()+1)%2] = (id5714x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5715out_output;

  { // Node ID: 5715 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5715in_input = id5714out_result[getCycle()%2];

    id5715out_output = id5715in_input;
  }
  { // Node ID: 5717 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5717in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5717in_option0 = in_vars.id5716out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5717in_option1 = id5715out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5717x_1;

    switch((id5717in_sel.getValueAsLong())) {
      case 0l:
        id5717x_1 = id5717in_option0;
        break;
      case 1l:
        id5717x_1 = id5717in_option1;
        break;
      default:
        id5717x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5717out_result[(getCycle()+1)%2] = (id5717x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5718out_output;

  { // Node ID: 5718 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5718in_input = id5717out_result[getCycle()%2];

    id5718out_output = id5718in_input;
  }
  { // Node ID: 5720 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5720in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5720in_option0 = in_vars.id5719out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5720in_option1 = id5718out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5720x_1;

    switch((id5720in_sel.getValueAsLong())) {
      case 0l:
        id5720x_1 = id5720in_option0;
        break;
      case 1l:
        id5720x_1 = id5720in_option1;
        break;
      default:
        id5720x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5720out_result[(getCycle()+1)%2] = (id5720x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5721out_output;

  { // Node ID: 5721 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5721in_input = id5720out_result[getCycle()%2];

    id5721out_output = id5721in_input;
  }
  { // Node ID: 5723 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5723in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5723in_option0 = in_vars.id5722out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5723in_option1 = id5721out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5723x_1;

    switch((id5723in_sel.getValueAsLong())) {
      case 0l:
        id5723x_1 = id5723in_option0;
        break;
      case 1l:
        id5723x_1 = id5723in_option1;
        break;
      default:
        id5723x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5723out_result[(getCycle()+1)%2] = (id5723x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5724out_output;

  { // Node ID: 5724 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5724in_input = id5723out_result[getCycle()%2];

    id5724out_output = id5724in_input;
  }
  { // Node ID: 5726 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5726in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5726in_option0 = in_vars.id5725out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5726in_option1 = id5724out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5726x_1;

    switch((id5726in_sel.getValueAsLong())) {
      case 0l:
        id5726x_1 = id5726in_option0;
        break;
      case 1l:
        id5726x_1 = id5726in_option1;
        break;
      default:
        id5726x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5726out_result[(getCycle()+1)%2] = (id5726x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5727out_output;

  { // Node ID: 5727 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5727in_input = id5726out_result[getCycle()%2];

    id5727out_output = id5727in_input;
  }
  { // Node ID: 5729 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5729in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5729in_option0 = in_vars.id5728out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5729in_option1 = id5727out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5729x_1;

    switch((id5729in_sel.getValueAsLong())) {
      case 0l:
        id5729x_1 = id5729in_option0;
        break;
      case 1l:
        id5729x_1 = id5729in_option1;
        break;
      default:
        id5729x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5729out_result[(getCycle()+1)%2] = (id5729x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5730out_output;

  { // Node ID: 5730 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5730in_input = id5729out_result[getCycle()%2];

    id5730out_output = id5730in_input;
  }
  { // Node ID: 5732 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5732in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5732in_option0 = in_vars.id5731out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5732in_option1 = id5730out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5732x_1;

    switch((id5732in_sel.getValueAsLong())) {
      case 0l:
        id5732x_1 = id5732in_option0;
        break;
      case 1l:
        id5732x_1 = id5732in_option1;
        break;
      default:
        id5732x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5732out_result[(getCycle()+1)%2] = (id5732x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5733out_output;

  { // Node ID: 5733 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5733in_input = id5732out_result[getCycle()%2];

    id5733out_output = id5733in_input;
  }
  { // Node ID: 5735 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5735in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5735in_option0 = in_vars.id5734out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5735in_option1 = id5733out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5735x_1;

    switch((id5735in_sel.getValueAsLong())) {
      case 0l:
        id5735x_1 = id5735in_option0;
        break;
      case 1l:
        id5735x_1 = id5735in_option1;
        break;
      default:
        id5735x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5735out_result[(getCycle()+1)%2] = (id5735x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5736out_output;

  { // Node ID: 5736 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5736in_input = id5735out_result[getCycle()%2];

    id5736out_output = id5736in_input;
  }
  { // Node ID: 5738 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5738in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5738in_option0 = in_vars.id5737out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5738in_option1 = id5736out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5738x_1;

    switch((id5738in_sel.getValueAsLong())) {
      case 0l:
        id5738x_1 = id5738in_option0;
        break;
      case 1l:
        id5738x_1 = id5738in_option1;
        break;
      default:
        id5738x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5738out_result[(getCycle()+1)%2] = (id5738x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5739out_output;

  { // Node ID: 5739 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5739in_input = id5738out_result[getCycle()%2];

    id5739out_output = id5739in_input;
  }
  { // Node ID: 5741 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5741in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5741in_option0 = in_vars.id5740out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5741in_option1 = id5739out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5741x_1;

    switch((id5741in_sel.getValueAsLong())) {
      case 0l:
        id5741x_1 = id5741in_option0;
        break;
      case 1l:
        id5741x_1 = id5741in_option1;
        break;
      default:
        id5741x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5741out_result[(getCycle()+1)%2] = (id5741x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5742out_output;

  { // Node ID: 5742 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5742in_input = id5741out_result[getCycle()%2];

    id5742out_output = id5742in_input;
  }
  { // Node ID: 5744 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5744in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5744in_option0 = in_vars.id5743out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5744in_option1 = id5742out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5744x_1;

    switch((id5744in_sel.getValueAsLong())) {
      case 0l:
        id5744x_1 = id5744in_option0;
        break;
      case 1l:
        id5744x_1 = id5744in_option1;
        break;
      default:
        id5744x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5744out_result[(getCycle()+1)%2] = (id5744x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5745out_output;

  { // Node ID: 5745 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5745in_input = id5744out_result[getCycle()%2];

    id5745out_output = id5745in_input;
  }
  { // Node ID: 5747 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5747in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5747in_option0 = in_vars.id5746out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5747in_option1 = id5745out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5747x_1;

    switch((id5747in_sel.getValueAsLong())) {
      case 0l:
        id5747x_1 = id5747in_option0;
        break;
      case 1l:
        id5747x_1 = id5747in_option1;
        break;
      default:
        id5747x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5747out_result[(getCycle()+1)%2] = (id5747x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5748out_output;

  { // Node ID: 5748 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5748in_input = id5747out_result[getCycle()%2];

    id5748out_output = id5748in_input;
  }
  { // Node ID: 5750 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5750in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5750in_option0 = in_vars.id5749out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5750in_option1 = id5748out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5750x_1;

    switch((id5750in_sel.getValueAsLong())) {
      case 0l:
        id5750x_1 = id5750in_option0;
        break;
      case 1l:
        id5750x_1 = id5750in_option1;
        break;
      default:
        id5750x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5750out_result[(getCycle()+1)%2] = (id5750x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5751out_output;

  { // Node ID: 5751 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5751in_input = id5750out_result[getCycle()%2];

    id5751out_output = id5751in_input;
  }
  { // Node ID: 5753 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5753in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5753in_option0 = in_vars.id5752out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5753in_option1 = id5751out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5753x_1;

    switch((id5753in_sel.getValueAsLong())) {
      case 0l:
        id5753x_1 = id5753in_option0;
        break;
      case 1l:
        id5753x_1 = id5753in_option1;
        break;
      default:
        id5753x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5753out_result[(getCycle()+1)%2] = (id5753x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5754out_output;

  { // Node ID: 5754 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5754in_input = id5753out_result[getCycle()%2];

    id5754out_output = id5754in_input;
  }
  { // Node ID: 5756 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5756in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5756in_option0 = in_vars.id5755out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5756in_option1 = id5754out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5756x_1;

    switch((id5756in_sel.getValueAsLong())) {
      case 0l:
        id5756x_1 = id5756in_option0;
        break;
      case 1l:
        id5756x_1 = id5756in_option1;
        break;
      default:
        id5756x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5756out_result[(getCycle()+1)%2] = (id5756x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5757out_output;

  { // Node ID: 5757 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5757in_input = id5756out_result[getCycle()%2];

    id5757out_output = id5757in_input;
  }
  { // Node ID: 5759 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5759in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5759in_option0 = in_vars.id5758out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5759in_option1 = id5757out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5759x_1;

    switch((id5759in_sel.getValueAsLong())) {
      case 0l:
        id5759x_1 = id5759in_option0;
        break;
      case 1l:
        id5759x_1 = id5759in_option1;
        break;
      default:
        id5759x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5759out_result[(getCycle()+1)%2] = (id5759x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5760out_output;

  { // Node ID: 5760 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5760in_input = id5759out_result[getCycle()%2];

    id5760out_output = id5760in_input;
  }
  { // Node ID: 5762 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5762in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5762in_option0 = in_vars.id5761out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5762in_option1 = id5760out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5762x_1;

    switch((id5762in_sel.getValueAsLong())) {
      case 0l:
        id5762x_1 = id5762in_option0;
        break;
      case 1l:
        id5762x_1 = id5762in_option1;
        break;
      default:
        id5762x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5762out_result[(getCycle()+1)%2] = (id5762x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5763out_output;

  { // Node ID: 5763 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5763in_input = id5762out_result[getCycle()%2];

    id5763out_output = id5763in_input;
  }
  { // Node ID: 5765 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5765in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5765in_option0 = in_vars.id5764out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5765in_option1 = id5763out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5765x_1;

    switch((id5765in_sel.getValueAsLong())) {
      case 0l:
        id5765x_1 = id5765in_option0;
        break;
      case 1l:
        id5765x_1 = id5765in_option1;
        break;
      default:
        id5765x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5765out_result[(getCycle()+1)%2] = (id5765x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5766out_output;

  { // Node ID: 5766 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5766in_input = id5765out_result[getCycle()%2];

    id5766out_output = id5766in_input;
  }
  { // Node ID: 5768 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5768in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5768in_option0 = in_vars.id5767out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5768in_option1 = id5766out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5768x_1;

    switch((id5768in_sel.getValueAsLong())) {
      case 0l:
        id5768x_1 = id5768in_option0;
        break;
      case 1l:
        id5768x_1 = id5768in_option1;
        break;
      default:
        id5768x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5768out_result[(getCycle()+1)%2] = (id5768x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5769out_output;

  { // Node ID: 5769 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5769in_input = id5768out_result[getCycle()%2];

    id5769out_output = id5769in_input;
  }
  { // Node ID: 5771 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5771in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5771in_option0 = in_vars.id5770out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5771in_option1 = id5769out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5771x_1;

    switch((id5771in_sel.getValueAsLong())) {
      case 0l:
        id5771x_1 = id5771in_option0;
        break;
      case 1l:
        id5771x_1 = id5771in_option1;
        break;
      default:
        id5771x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5771out_result[(getCycle()+1)%2] = (id5771x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5772out_output;

  { // Node ID: 5772 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5772in_input = id5771out_result[getCycle()%2];

    id5772out_output = id5772in_input;
  }
  { // Node ID: 5774 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5774in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5774in_option0 = in_vars.id5773out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5774in_option1 = id5772out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5774x_1;

    switch((id5774in_sel.getValueAsLong())) {
      case 0l:
        id5774x_1 = id5774in_option0;
        break;
      case 1l:
        id5774x_1 = id5774in_option1;
        break;
      default:
        id5774x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5774out_result[(getCycle()+1)%2] = (id5774x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5775out_output;

  { // Node ID: 5775 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5775in_input = id5774out_result[getCycle()%2];

    id5775out_output = id5775in_input;
  }
  { // Node ID: 5777 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5777in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5777in_option0 = in_vars.id5776out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5777in_option1 = id5775out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5777x_1;

    switch((id5777in_sel.getValueAsLong())) {
      case 0l:
        id5777x_1 = id5777in_option0;
        break;
      case 1l:
        id5777x_1 = id5777in_option1;
        break;
      default:
        id5777x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5777out_result[(getCycle()+1)%2] = (id5777x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5778out_output;

  { // Node ID: 5778 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5778in_input = id5777out_result[getCycle()%2];

    id5778out_output = id5778in_input;
  }
  { // Node ID: 5780 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5780in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5780in_option0 = in_vars.id5779out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5780in_option1 = id5778out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5780x_1;

    switch((id5780in_sel.getValueAsLong())) {
      case 0l:
        id5780x_1 = id5780in_option0;
        break;
      case 1l:
        id5780x_1 = id5780in_option1;
        break;
      default:
        id5780x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5780out_result[(getCycle()+1)%2] = (id5780x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5781out_output;

  { // Node ID: 5781 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5781in_input = id5780out_result[getCycle()%2];

    id5781out_output = id5781in_input;
  }
  { // Node ID: 5783 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5783in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5783in_option0 = in_vars.id5782out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5783in_option1 = id5781out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5783x_1;

    switch((id5783in_sel.getValueAsLong())) {
      case 0l:
        id5783x_1 = id5783in_option0;
        break;
      case 1l:
        id5783x_1 = id5783in_option1;
        break;
      default:
        id5783x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5783out_result[(getCycle()+1)%2] = (id5783x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5784out_output;

  { // Node ID: 5784 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5784in_input = id5783out_result[getCycle()%2];

    id5784out_output = id5784in_input;
  }
  { // Node ID: 5786 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5786in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5786in_option0 = in_vars.id5785out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5786in_option1 = id5784out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5786x_1;

    switch((id5786in_sel.getValueAsLong())) {
      case 0l:
        id5786x_1 = id5786in_option0;
        break;
      case 1l:
        id5786x_1 = id5786in_option1;
        break;
      default:
        id5786x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5786out_result[(getCycle()+1)%2] = (id5786x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5787out_output;

  { // Node ID: 5787 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5787in_input = id5786out_result[getCycle()%2];

    id5787out_output = id5787in_input;
  }
  { // Node ID: 5789 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5789in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5789in_option0 = in_vars.id5788out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5789in_option1 = id5787out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5789x_1;

    switch((id5789in_sel.getValueAsLong())) {
      case 0l:
        id5789x_1 = id5789in_option0;
        break;
      case 1l:
        id5789x_1 = id5789in_option1;
        break;
      default:
        id5789x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5789out_result[(getCycle()+1)%2] = (id5789x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5790out_output;

  { // Node ID: 5790 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5790in_input = id5789out_result[getCycle()%2];

    id5790out_output = id5790in_input;
  }
  { // Node ID: 5792 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5792in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5792in_option0 = in_vars.id5791out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5792in_option1 = id5790out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5792x_1;

    switch((id5792in_sel.getValueAsLong())) {
      case 0l:
        id5792x_1 = id5792in_option0;
        break;
      case 1l:
        id5792x_1 = id5792in_option1;
        break;
      default:
        id5792x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5792out_result[(getCycle()+1)%2] = (id5792x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5793out_output;

  { // Node ID: 5793 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5793in_input = id5792out_result[getCycle()%2];

    id5793out_output = id5793in_input;
  }
  { // Node ID: 5795 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5795in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5795in_option0 = in_vars.id5794out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5795in_option1 = id5793out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5795x_1;

    switch((id5795in_sel.getValueAsLong())) {
      case 0l:
        id5795x_1 = id5795in_option0;
        break;
      case 1l:
        id5795x_1 = id5795in_option1;
        break;
      default:
        id5795x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5795out_result[(getCycle()+1)%2] = (id5795x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5796out_output;

  { // Node ID: 5796 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5796in_input = id5795out_result[getCycle()%2];

    id5796out_output = id5796in_input;
  }
  { // Node ID: 5798 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5798in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5798in_option0 = in_vars.id5797out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5798in_option1 = id5796out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5798x_1;

    switch((id5798in_sel.getValueAsLong())) {
      case 0l:
        id5798x_1 = id5798in_option0;
        break;
      case 1l:
        id5798x_1 = id5798in_option1;
        break;
      default:
        id5798x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5798out_result[(getCycle()+1)%2] = (id5798x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5799out_output;

  { // Node ID: 5799 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5799in_input = id5798out_result[getCycle()%2];

    id5799out_output = id5799in_input;
  }
  { // Node ID: 5801 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5801in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5801in_option0 = in_vars.id5800out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5801in_option1 = id5799out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5801x_1;

    switch((id5801in_sel.getValueAsLong())) {
      case 0l:
        id5801x_1 = id5801in_option0;
        break;
      case 1l:
        id5801x_1 = id5801in_option1;
        break;
      default:
        id5801x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5801out_result[(getCycle()+1)%2] = (id5801x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5802out_output;

  { // Node ID: 5802 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5802in_input = id5801out_result[getCycle()%2];

    id5802out_output = id5802in_input;
  }
  { // Node ID: 5804 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5804in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5804in_option0 = in_vars.id5803out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5804in_option1 = id5802out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5804x_1;

    switch((id5804in_sel.getValueAsLong())) {
      case 0l:
        id5804x_1 = id5804in_option0;
        break;
      case 1l:
        id5804x_1 = id5804in_option1;
        break;
      default:
        id5804x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5804out_result[(getCycle()+1)%2] = (id5804x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5805out_output;

  { // Node ID: 5805 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5805in_input = id5804out_result[getCycle()%2];

    id5805out_output = id5805in_input;
  }
  { // Node ID: 5807 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5807in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5807in_option0 = in_vars.id5806out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5807in_option1 = id5805out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5807x_1;

    switch((id5807in_sel.getValueAsLong())) {
      case 0l:
        id5807x_1 = id5807in_option0;
        break;
      case 1l:
        id5807x_1 = id5807in_option1;
        break;
      default:
        id5807x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5807out_result[(getCycle()+1)%2] = (id5807x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5808out_output;

  { // Node ID: 5808 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5808in_input = id5807out_result[getCycle()%2];

    id5808out_output = id5808in_input;
  }
  { // Node ID: 5810 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5810in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5810in_option0 = in_vars.id5809out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5810in_option1 = id5808out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5810x_1;

    switch((id5810in_sel.getValueAsLong())) {
      case 0l:
        id5810x_1 = id5810in_option0;
        break;
      case 1l:
        id5810x_1 = id5810in_option1;
        break;
      default:
        id5810x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5810out_result[(getCycle()+1)%2] = (id5810x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5811out_output;

  { // Node ID: 5811 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5811in_input = id5810out_result[getCycle()%2];

    id5811out_output = id5811in_input;
  }
  { // Node ID: 5813 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5813in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5813in_option0 = in_vars.id5812out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5813in_option1 = id5811out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5813x_1;

    switch((id5813in_sel.getValueAsLong())) {
      case 0l:
        id5813x_1 = id5813in_option0;
        break;
      case 1l:
        id5813x_1 = id5813in_option1;
        break;
      default:
        id5813x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5813out_result[(getCycle()+1)%2] = (id5813x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5814out_output;

  { // Node ID: 5814 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5814in_input = id5813out_result[getCycle()%2];

    id5814out_output = id5814in_input;
  }
  { // Node ID: 5816 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5816in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5816in_option0 = in_vars.id5815out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5816in_option1 = id5814out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5816x_1;

    switch((id5816in_sel.getValueAsLong())) {
      case 0l:
        id5816x_1 = id5816in_option0;
        break;
      case 1l:
        id5816x_1 = id5816in_option1;
        break;
      default:
        id5816x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5816out_result[(getCycle()+1)%2] = (id5816x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5817out_output;

  { // Node ID: 5817 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5817in_input = id5816out_result[getCycle()%2];

    id5817out_output = id5817in_input;
  }
  { // Node ID: 5819 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5819in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5819in_option0 = in_vars.id5818out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5819in_option1 = id5817out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5819x_1;

    switch((id5819in_sel.getValueAsLong())) {
      case 0l:
        id5819x_1 = id5819in_option0;
        break;
      case 1l:
        id5819x_1 = id5819in_option1;
        break;
      default:
        id5819x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5819out_result[(getCycle()+1)%2] = (id5819x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5820out_output;

  { // Node ID: 5820 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5820in_input = id5819out_result[getCycle()%2];

    id5820out_output = id5820in_input;
  }
  { // Node ID: 5822 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5822in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5822in_option0 = in_vars.id5821out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5822in_option1 = id5820out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5822x_1;

    switch((id5822in_sel.getValueAsLong())) {
      case 0l:
        id5822x_1 = id5822in_option0;
        break;
      case 1l:
        id5822x_1 = id5822in_option1;
        break;
      default:
        id5822x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5822out_result[(getCycle()+1)%2] = (id5822x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5823out_output;

  { // Node ID: 5823 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5823in_input = id5822out_result[getCycle()%2];

    id5823out_output = id5823in_input;
  }
  { // Node ID: 5825 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5825in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5825in_option0 = in_vars.id5824out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5825in_option1 = id5823out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5825x_1;

    switch((id5825in_sel.getValueAsLong())) {
      case 0l:
        id5825x_1 = id5825in_option0;
        break;
      case 1l:
        id5825x_1 = id5825in_option1;
        break;
      default:
        id5825x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5825out_result[(getCycle()+1)%2] = (id5825x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5826out_output;

  { // Node ID: 5826 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5826in_input = id5825out_result[getCycle()%2];

    id5826out_output = id5826in_input;
  }
  { // Node ID: 5828 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5828in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5828in_option0 = in_vars.id5827out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5828in_option1 = id5826out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5828x_1;

    switch((id5828in_sel.getValueAsLong())) {
      case 0l:
        id5828x_1 = id5828in_option0;
        break;
      case 1l:
        id5828x_1 = id5828in_option1;
        break;
      default:
        id5828x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5828out_result[(getCycle()+1)%2] = (id5828x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5829out_output;

  { // Node ID: 5829 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5829in_input = id5828out_result[getCycle()%2];

    id5829out_output = id5829in_input;
  }
  { // Node ID: 5831 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5831in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5831in_option0 = in_vars.id5830out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5831in_option1 = id5829out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5831x_1;

    switch((id5831in_sel.getValueAsLong())) {
      case 0l:
        id5831x_1 = id5831in_option0;
        break;
      case 1l:
        id5831x_1 = id5831in_option1;
        break;
      default:
        id5831x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5831out_result[(getCycle()+1)%2] = (id5831x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5832out_output;

  { // Node ID: 5832 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5832in_input = id5831out_result[getCycle()%2];

    id5832out_output = id5832in_input;
  }
  { // Node ID: 5834 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5834in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5834in_option0 = in_vars.id5833out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5834in_option1 = id5832out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5834x_1;

    switch((id5834in_sel.getValueAsLong())) {
      case 0l:
        id5834x_1 = id5834in_option0;
        break;
      case 1l:
        id5834x_1 = id5834in_option1;
        break;
      default:
        id5834x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5834out_result[(getCycle()+1)%2] = (id5834x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5835out_output;

  { // Node ID: 5835 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5835in_input = id5834out_result[getCycle()%2];

    id5835out_output = id5835in_input;
  }
  { // Node ID: 5837 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5837in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5837in_option0 = in_vars.id5836out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5837in_option1 = id5835out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5837x_1;

    switch((id5837in_sel.getValueAsLong())) {
      case 0l:
        id5837x_1 = id5837in_option0;
        break;
      case 1l:
        id5837x_1 = id5837in_option1;
        break;
      default:
        id5837x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5837out_result[(getCycle()+1)%2] = (id5837x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5838out_output;

  { // Node ID: 5838 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5838in_input = id5837out_result[getCycle()%2];

    id5838out_output = id5838in_input;
  }
  { // Node ID: 5840 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5840in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5840in_option0 = in_vars.id5839out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5840in_option1 = id5838out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5840x_1;

    switch((id5840in_sel.getValueAsLong())) {
      case 0l:
        id5840x_1 = id5840in_option0;
        break;
      case 1l:
        id5840x_1 = id5840in_option1;
        break;
      default:
        id5840x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5840out_result[(getCycle()+1)%2] = (id5840x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5841out_output;

  { // Node ID: 5841 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5841in_input = id5840out_result[getCycle()%2];

    id5841out_output = id5841in_input;
  }
  { // Node ID: 5843 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5843in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5843in_option0 = in_vars.id5842out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5843in_option1 = id5841out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5843x_1;

    switch((id5843in_sel.getValueAsLong())) {
      case 0l:
        id5843x_1 = id5843in_option0;
        break;
      case 1l:
        id5843x_1 = id5843in_option1;
        break;
      default:
        id5843x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5843out_result[(getCycle()+1)%2] = (id5843x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5844out_output;

  { // Node ID: 5844 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5844in_input = id5843out_result[getCycle()%2];

    id5844out_output = id5844in_input;
  }
  { // Node ID: 5846 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5846in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5846in_option0 = in_vars.id5845out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5846in_option1 = id5844out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5846x_1;

    switch((id5846in_sel.getValueAsLong())) {
      case 0l:
        id5846x_1 = id5846in_option0;
        break;
      case 1l:
        id5846x_1 = id5846in_option1;
        break;
      default:
        id5846x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5846out_result[(getCycle()+1)%2] = (id5846x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5847out_output;

  { // Node ID: 5847 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5847in_input = id5846out_result[getCycle()%2];

    id5847out_output = id5847in_input;
  }
  { // Node ID: 5849 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5849in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5849in_option0 = in_vars.id5848out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5849in_option1 = id5847out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5849x_1;

    switch((id5849in_sel.getValueAsLong())) {
      case 0l:
        id5849x_1 = id5849in_option0;
        break;
      case 1l:
        id5849x_1 = id5849in_option1;
        break;
      default:
        id5849x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5849out_result[(getCycle()+1)%2] = (id5849x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5850out_output;

  { // Node ID: 5850 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5850in_input = id5849out_result[getCycle()%2];

    id5850out_output = id5850in_input;
  }
  { // Node ID: 5852 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5852in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5852in_option0 = in_vars.id5851out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5852in_option1 = id5850out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5852x_1;

    switch((id5852in_sel.getValueAsLong())) {
      case 0l:
        id5852x_1 = id5852in_option0;
        break;
      case 1l:
        id5852x_1 = id5852in_option1;
        break;
      default:
        id5852x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5852out_result[(getCycle()+1)%2] = (id5852x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5853out_output;

  { // Node ID: 5853 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5853in_input = id5852out_result[getCycle()%2];

    id5853out_output = id5853in_input;
  }
  { // Node ID: 5855 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5855in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5855in_option0 = in_vars.id5854out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5855in_option1 = id5853out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5855x_1;

    switch((id5855in_sel.getValueAsLong())) {
      case 0l:
        id5855x_1 = id5855in_option0;
        break;
      case 1l:
        id5855x_1 = id5855in_option1;
        break;
      default:
        id5855x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5855out_result[(getCycle()+1)%2] = (id5855x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5856out_output;

  { // Node ID: 5856 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5856in_input = id5855out_result[getCycle()%2];

    id5856out_output = id5856in_input;
  }
  { // Node ID: 5858 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5858in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5858in_option0 = in_vars.id5857out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5858in_option1 = id5856out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5858x_1;

    switch((id5858in_sel.getValueAsLong())) {
      case 0l:
        id5858x_1 = id5858in_option0;
        break;
      case 1l:
        id5858x_1 = id5858in_option1;
        break;
      default:
        id5858x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5858out_result[(getCycle()+1)%2] = (id5858x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5859out_output;

  { // Node ID: 5859 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5859in_input = id5858out_result[getCycle()%2];

    id5859out_output = id5859in_input;
  }
  { // Node ID: 5861 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5861in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5861in_option0 = in_vars.id5860out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5861in_option1 = id5859out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5861x_1;

    switch((id5861in_sel.getValueAsLong())) {
      case 0l:
        id5861x_1 = id5861in_option0;
        break;
      case 1l:
        id5861x_1 = id5861in_option1;
        break;
      default:
        id5861x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5861out_result[(getCycle()+1)%2] = (id5861x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5862out_output;

  { // Node ID: 5862 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5862in_input = id5861out_result[getCycle()%2];

    id5862out_output = id5862in_input;
  }
  { // Node ID: 5864 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5864in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5864in_option0 = in_vars.id5863out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5864in_option1 = id5862out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5864x_1;

    switch((id5864in_sel.getValueAsLong())) {
      case 0l:
        id5864x_1 = id5864in_option0;
        break;
      case 1l:
        id5864x_1 = id5864in_option1;
        break;
      default:
        id5864x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5864out_result[(getCycle()+1)%2] = (id5864x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5865out_output;

  { // Node ID: 5865 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5865in_input = id5864out_result[getCycle()%2];

    id5865out_output = id5865in_input;
  }
  { // Node ID: 5867 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5867in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5867in_option0 = in_vars.id5866out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5867in_option1 = id5865out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5867x_1;

    switch((id5867in_sel.getValueAsLong())) {
      case 0l:
        id5867x_1 = id5867in_option0;
        break;
      case 1l:
        id5867x_1 = id5867in_option1;
        break;
      default:
        id5867x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5867out_result[(getCycle()+1)%2] = (id5867x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5868out_output;

  { // Node ID: 5868 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5868in_input = id5867out_result[getCycle()%2];

    id5868out_output = id5868in_input;
  }
  { // Node ID: 5870 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5870in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5870in_option0 = in_vars.id5869out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5870in_option1 = id5868out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5870x_1;

    switch((id5870in_sel.getValueAsLong())) {
      case 0l:
        id5870x_1 = id5870in_option0;
        break;
      case 1l:
        id5870x_1 = id5870in_option1;
        break;
      default:
        id5870x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5870out_result[(getCycle()+1)%2] = (id5870x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5871out_output;

  { // Node ID: 5871 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5871in_input = id5870out_result[getCycle()%2];

    id5871out_output = id5871in_input;
  }
  { // Node ID: 5873 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5873in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5873in_option0 = in_vars.id5872out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5873in_option1 = id5871out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5873x_1;

    switch((id5873in_sel.getValueAsLong())) {
      case 0l:
        id5873x_1 = id5873in_option0;
        break;
      case 1l:
        id5873x_1 = id5873in_option1;
        break;
      default:
        id5873x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5873out_result[(getCycle()+1)%2] = (id5873x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5874out_output;

  { // Node ID: 5874 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5874in_input = id5873out_result[getCycle()%2];

    id5874out_output = id5874in_input;
  }
  { // Node ID: 5876 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5876in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5876in_option0 = in_vars.id5875out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5876in_option1 = id5874out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5876x_1;

    switch((id5876in_sel.getValueAsLong())) {
      case 0l:
        id5876x_1 = id5876in_option0;
        break;
      case 1l:
        id5876x_1 = id5876in_option1;
        break;
      default:
        id5876x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5876out_result[(getCycle()+1)%2] = (id5876x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5877out_output;

  { // Node ID: 5877 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5877in_input = id5876out_result[getCycle()%2];

    id5877out_output = id5877in_input;
  }
  { // Node ID: 5879 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5879in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5879in_option0 = in_vars.id5878out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5879in_option1 = id5877out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5879x_1;

    switch((id5879in_sel.getValueAsLong())) {
      case 0l:
        id5879x_1 = id5879in_option0;
        break;
      case 1l:
        id5879x_1 = id5879in_option1;
        break;
      default:
        id5879x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5879out_result[(getCycle()+1)%2] = (id5879x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5880out_output;

  { // Node ID: 5880 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5880in_input = id5879out_result[getCycle()%2];

    id5880out_output = id5880in_input;
  }
  { // Node ID: 5882 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5882in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5882in_option0 = in_vars.id5881out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5882in_option1 = id5880out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5882x_1;

    switch((id5882in_sel.getValueAsLong())) {
      case 0l:
        id5882x_1 = id5882in_option0;
        break;
      case 1l:
        id5882x_1 = id5882in_option1;
        break;
      default:
        id5882x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5882out_result[(getCycle()+1)%2] = (id5882x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5883out_output;

  { // Node ID: 5883 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5883in_input = id5882out_result[getCycle()%2];

    id5883out_output = id5883in_input;
  }
  { // Node ID: 5885 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5885in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5885in_option0 = in_vars.id5884out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5885in_option1 = id5883out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5885x_1;

    switch((id5885in_sel.getValueAsLong())) {
      case 0l:
        id5885x_1 = id5885in_option0;
        break;
      case 1l:
        id5885x_1 = id5885in_option1;
        break;
      default:
        id5885x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5885out_result[(getCycle()+1)%2] = (id5885x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5886out_output;

  { // Node ID: 5886 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5886in_input = id5885out_result[getCycle()%2];

    id5886out_output = id5886in_input;
  }
  { // Node ID: 5888 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5888in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5888in_option0 = in_vars.id5887out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5888in_option1 = id5886out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5888x_1;

    switch((id5888in_sel.getValueAsLong())) {
      case 0l:
        id5888x_1 = id5888in_option0;
        break;
      case 1l:
        id5888x_1 = id5888in_option1;
        break;
      default:
        id5888x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5888out_result[(getCycle()+1)%2] = (id5888x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5889out_output;

  { // Node ID: 5889 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5889in_input = id5888out_result[getCycle()%2];

    id5889out_output = id5889in_input;
  }
  { // Node ID: 5891 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5891in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5891in_option0 = in_vars.id5890out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5891in_option1 = id5889out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5891x_1;

    switch((id5891in_sel.getValueAsLong())) {
      case 0l:
        id5891x_1 = id5891in_option0;
        break;
      case 1l:
        id5891x_1 = id5891in_option1;
        break;
      default:
        id5891x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5891out_result[(getCycle()+1)%2] = (id5891x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5892out_output;

  { // Node ID: 5892 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5892in_input = id5891out_result[getCycle()%2];

    id5892out_output = id5892in_input;
  }
  { // Node ID: 5894 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5894in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5894in_option0 = in_vars.id5893out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5894in_option1 = id5892out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5894x_1;

    switch((id5894in_sel.getValueAsLong())) {
      case 0l:
        id5894x_1 = id5894in_option0;
        break;
      case 1l:
        id5894x_1 = id5894in_option1;
        break;
      default:
        id5894x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5894out_result[(getCycle()+1)%2] = (id5894x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5895out_output;

  { // Node ID: 5895 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5895in_input = id5894out_result[getCycle()%2];

    id5895out_output = id5895in_input;
  }
  { // Node ID: 5897 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5897in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5897in_option0 = in_vars.id5896out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5897in_option1 = id5895out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5897x_1;

    switch((id5897in_sel.getValueAsLong())) {
      case 0l:
        id5897x_1 = id5897in_option0;
        break;
      case 1l:
        id5897x_1 = id5897in_option1;
        break;
      default:
        id5897x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5897out_result[(getCycle()+1)%2] = (id5897x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5898out_output;

  { // Node ID: 5898 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5898in_input = id5897out_result[getCycle()%2];

    id5898out_output = id5898in_input;
  }
  { // Node ID: 5900 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5900in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5900in_option0 = in_vars.id5899out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5900in_option1 = id5898out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5900x_1;

    switch((id5900in_sel.getValueAsLong())) {
      case 0l:
        id5900x_1 = id5900in_option0;
        break;
      case 1l:
        id5900x_1 = id5900in_option1;
        break;
      default:
        id5900x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5900out_result[(getCycle()+1)%2] = (id5900x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5901out_output;

  { // Node ID: 5901 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5901in_input = id5900out_result[getCycle()%2];

    id5901out_output = id5901in_input;
  }
  { // Node ID: 5903 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5903in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5903in_option0 = in_vars.id5902out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5903in_option1 = id5901out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5903x_1;

    switch((id5903in_sel.getValueAsLong())) {
      case 0l:
        id5903x_1 = id5903in_option0;
        break;
      case 1l:
        id5903x_1 = id5903in_option1;
        break;
      default:
        id5903x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5903out_result[(getCycle()+1)%2] = (id5903x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5904out_output;

  { // Node ID: 5904 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5904in_input = id5903out_result[getCycle()%2];

    id5904out_output = id5904in_input;
  }
  { // Node ID: 5906 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5906in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5906in_option0 = in_vars.id5905out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5906in_option1 = id5904out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5906x_1;

    switch((id5906in_sel.getValueAsLong())) {
      case 0l:
        id5906x_1 = id5906in_option0;
        break;
      case 1l:
        id5906x_1 = id5906in_option1;
        break;
      default:
        id5906x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5906out_result[(getCycle()+1)%2] = (id5906x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5907out_output;

  { // Node ID: 5907 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5907in_input = id5906out_result[getCycle()%2];

    id5907out_output = id5907in_input;
  }
  { // Node ID: 5909 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5909in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5909in_option0 = in_vars.id5908out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5909in_option1 = id5907out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5909x_1;

    switch((id5909in_sel.getValueAsLong())) {
      case 0l:
        id5909x_1 = id5909in_option0;
        break;
      case 1l:
        id5909x_1 = id5909in_option1;
        break;
      default:
        id5909x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5909out_result[(getCycle()+1)%2] = (id5909x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5910out_output;

  { // Node ID: 5910 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5910in_input = id5909out_result[getCycle()%2];

    id5910out_output = id5910in_input;
  }
  { // Node ID: 5912 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5912in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5912in_option0 = in_vars.id5911out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5912in_option1 = id5910out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5912x_1;

    switch((id5912in_sel.getValueAsLong())) {
      case 0l:
        id5912x_1 = id5912in_option0;
        break;
      case 1l:
        id5912x_1 = id5912in_option1;
        break;
      default:
        id5912x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5912out_result[(getCycle()+1)%2] = (id5912x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5913out_output;

  { // Node ID: 5913 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5913in_input = id5912out_result[getCycle()%2];

    id5913out_output = id5913in_input;
  }
  { // Node ID: 5915 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5915in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5915in_option0 = in_vars.id5914out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5915in_option1 = id5913out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5915x_1;

    switch((id5915in_sel.getValueAsLong())) {
      case 0l:
        id5915x_1 = id5915in_option0;
        break;
      case 1l:
        id5915x_1 = id5915in_option1;
        break;
      default:
        id5915x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5915out_result[(getCycle()+1)%2] = (id5915x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5916out_output;

  { // Node ID: 5916 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5916in_input = id5915out_result[getCycle()%2];

    id5916out_output = id5916in_input;
  }
  { // Node ID: 5918 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5918in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5918in_option0 = in_vars.id5917out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5918in_option1 = id5916out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5918x_1;

    switch((id5918in_sel.getValueAsLong())) {
      case 0l:
        id5918x_1 = id5918in_option0;
        break;
      case 1l:
        id5918x_1 = id5918in_option1;
        break;
      default:
        id5918x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5918out_result[(getCycle()+1)%2] = (id5918x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5919out_output;

  { // Node ID: 5919 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5919in_input = id5918out_result[getCycle()%2];

    id5919out_output = id5919in_input;
  }
  { // Node ID: 5921 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5921in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5921in_option0 = in_vars.id5920out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5921in_option1 = id5919out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5921x_1;

    switch((id5921in_sel.getValueAsLong())) {
      case 0l:
        id5921x_1 = id5921in_option0;
        break;
      case 1l:
        id5921x_1 = id5921in_option1;
        break;
      default:
        id5921x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5921out_result[(getCycle()+1)%2] = (id5921x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5922out_output;

  { // Node ID: 5922 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5922in_input = id5921out_result[getCycle()%2];

    id5922out_output = id5922in_input;
  }
  { // Node ID: 5924 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5924in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5924in_option0 = in_vars.id5923out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5924in_option1 = id5922out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5924x_1;

    switch((id5924in_sel.getValueAsLong())) {
      case 0l:
        id5924x_1 = id5924in_option0;
        break;
      case 1l:
        id5924x_1 = id5924in_option1;
        break;
      default:
        id5924x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5924out_result[(getCycle()+1)%2] = (id5924x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5925out_output;

  { // Node ID: 5925 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5925in_input = id5924out_result[getCycle()%2];

    id5925out_output = id5925in_input;
  }
  { // Node ID: 5927 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5927in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5927in_option0 = in_vars.id5926out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5927in_option1 = id5925out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5927x_1;

    switch((id5927in_sel.getValueAsLong())) {
      case 0l:
        id5927x_1 = id5927in_option0;
        break;
      case 1l:
        id5927x_1 = id5927in_option1;
        break;
      default:
        id5927x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5927out_result[(getCycle()+1)%2] = (id5927x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5928out_output;

  { // Node ID: 5928 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5928in_input = id5927out_result[getCycle()%2];

    id5928out_output = id5928in_input;
  }
  { // Node ID: 5930 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5930in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5930in_option0 = in_vars.id5929out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5930in_option1 = id5928out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5930x_1;

    switch((id5930in_sel.getValueAsLong())) {
      case 0l:
        id5930x_1 = id5930in_option0;
        break;
      case 1l:
        id5930x_1 = id5930in_option1;
        break;
      default:
        id5930x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5930out_result[(getCycle()+1)%2] = (id5930x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5931out_output;

  { // Node ID: 5931 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5931in_input = id5930out_result[getCycle()%2];

    id5931out_output = id5931in_input;
  }
  { // Node ID: 5933 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5933in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5933in_option0 = in_vars.id5932out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5933in_option1 = id5931out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5933x_1;

    switch((id5933in_sel.getValueAsLong())) {
      case 0l:
        id5933x_1 = id5933in_option0;
        break;
      case 1l:
        id5933x_1 = id5933in_option1;
        break;
      default:
        id5933x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5933out_result[(getCycle()+1)%2] = (id5933x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5934out_output;

  { // Node ID: 5934 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5934in_input = id5933out_result[getCycle()%2];

    id5934out_output = id5934in_input;
  }
  { // Node ID: 5936 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5936in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5936in_option0 = in_vars.id5935out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5936in_option1 = id5934out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5936x_1;

    switch((id5936in_sel.getValueAsLong())) {
      case 0l:
        id5936x_1 = id5936in_option0;
        break;
      case 1l:
        id5936x_1 = id5936in_option1;
        break;
      default:
        id5936x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5936out_result[(getCycle()+1)%2] = (id5936x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5937out_output;

  { // Node ID: 5937 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5937in_input = id5936out_result[getCycle()%2];

    id5937out_output = id5937in_input;
  }
  { // Node ID: 5939 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5939in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5939in_option0 = in_vars.id5938out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5939in_option1 = id5937out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5939x_1;

    switch((id5939in_sel.getValueAsLong())) {
      case 0l:
        id5939x_1 = id5939in_option0;
        break;
      case 1l:
        id5939x_1 = id5939in_option1;
        break;
      default:
        id5939x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5939out_result[(getCycle()+1)%2] = (id5939x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5940out_output;

  { // Node ID: 5940 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5940in_input = id5939out_result[getCycle()%2];

    id5940out_output = id5940in_input;
  }
  { // Node ID: 5942 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5942in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5942in_option0 = in_vars.id5941out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5942in_option1 = id5940out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5942x_1;

    switch((id5942in_sel.getValueAsLong())) {
      case 0l:
        id5942x_1 = id5942in_option0;
        break;
      case 1l:
        id5942x_1 = id5942in_option1;
        break;
      default:
        id5942x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5942out_result[(getCycle()+1)%2] = (id5942x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5943out_output;

  { // Node ID: 5943 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5943in_input = id5942out_result[getCycle()%2];

    id5943out_output = id5943in_input;
  }
  { // Node ID: 5945 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5945in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5945in_option0 = in_vars.id5944out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5945in_option1 = id5943out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5945x_1;

    switch((id5945in_sel.getValueAsLong())) {
      case 0l:
        id5945x_1 = id5945in_option0;
        break;
      case 1l:
        id5945x_1 = id5945in_option1;
        break;
      default:
        id5945x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5945out_result[(getCycle()+1)%2] = (id5945x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5946out_output;

  { // Node ID: 5946 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5946in_input = id5945out_result[getCycle()%2];

    id5946out_output = id5946in_input;
  }
  { // Node ID: 5948 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5948in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5948in_option0 = in_vars.id5947out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5948in_option1 = id5946out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5948x_1;

    switch((id5948in_sel.getValueAsLong())) {
      case 0l:
        id5948x_1 = id5948in_option0;
        break;
      case 1l:
        id5948x_1 = id5948in_option1;
        break;
      default:
        id5948x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5948out_result[(getCycle()+1)%2] = (id5948x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5949out_output;

  { // Node ID: 5949 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5949in_input = id5948out_result[getCycle()%2];

    id5949out_output = id5949in_input;
  }
  { // Node ID: 5951 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5951in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5951in_option0 = in_vars.id5950out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5951in_option1 = id5949out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5951x_1;

    switch((id5951in_sel.getValueAsLong())) {
      case 0l:
        id5951x_1 = id5951in_option0;
        break;
      case 1l:
        id5951x_1 = id5951in_option1;
        break;
      default:
        id5951x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5951out_result[(getCycle()+1)%2] = (id5951x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5952out_output;

  { // Node ID: 5952 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5952in_input = id5951out_result[getCycle()%2];

    id5952out_output = id5952in_input;
  }
  { // Node ID: 5954 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5954in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5954in_option0 = in_vars.id5953out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5954in_option1 = id5952out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5954x_1;

    switch((id5954in_sel.getValueAsLong())) {
      case 0l:
        id5954x_1 = id5954in_option0;
        break;
      case 1l:
        id5954x_1 = id5954in_option1;
        break;
      default:
        id5954x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5954out_result[(getCycle()+1)%2] = (id5954x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5955out_output;

  { // Node ID: 5955 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5955in_input = id5954out_result[getCycle()%2];

    id5955out_output = id5955in_input;
  }
  { // Node ID: 5957 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5957in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5957in_option0 = in_vars.id5956out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5957in_option1 = id5955out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5957x_1;

    switch((id5957in_sel.getValueAsLong())) {
      case 0l:
        id5957x_1 = id5957in_option0;
        break;
      case 1l:
        id5957x_1 = id5957in_option1;
        break;
      default:
        id5957x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5957out_result[(getCycle()+1)%2] = (id5957x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5958out_output;

  { // Node ID: 5958 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5958in_input = id5957out_result[getCycle()%2];

    id5958out_output = id5958in_input;
  }
  { // Node ID: 5960 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5960in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5960in_option0 = in_vars.id5959out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5960in_option1 = id5958out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5960x_1;

    switch((id5960in_sel.getValueAsLong())) {
      case 0l:
        id5960x_1 = id5960in_option0;
        break;
      case 1l:
        id5960x_1 = id5960in_option1;
        break;
      default:
        id5960x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5960out_result[(getCycle()+1)%2] = (id5960x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5961out_output;

  { // Node ID: 5961 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5961in_input = id5960out_result[getCycle()%2];

    id5961out_output = id5961in_input;
  }
  { // Node ID: 5963 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5963in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5963in_option0 = in_vars.id5962out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5963in_option1 = id5961out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5963x_1;

    switch((id5963in_sel.getValueAsLong())) {
      case 0l:
        id5963x_1 = id5963in_option0;
        break;
      case 1l:
        id5963x_1 = id5963in_option1;
        break;
      default:
        id5963x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5963out_result[(getCycle()+1)%2] = (id5963x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5964out_output;

  { // Node ID: 5964 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5964in_input = id5963out_result[getCycle()%2];

    id5964out_output = id5964in_input;
  }
  { // Node ID: 5966 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5966in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5966in_option0 = in_vars.id5965out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5966in_option1 = id5964out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5966x_1;

    switch((id5966in_sel.getValueAsLong())) {
      case 0l:
        id5966x_1 = id5966in_option0;
        break;
      case 1l:
        id5966x_1 = id5966in_option1;
        break;
      default:
        id5966x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5966out_result[(getCycle()+1)%2] = (id5966x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5967out_output;

  { // Node ID: 5967 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5967in_input = id5966out_result[getCycle()%2];

    id5967out_output = id5967in_input;
  }
  { // Node ID: 5969 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5969in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5969in_option0 = in_vars.id5968out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5969in_option1 = id5967out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5969x_1;

    switch((id5969in_sel.getValueAsLong())) {
      case 0l:
        id5969x_1 = id5969in_option0;
        break;
      case 1l:
        id5969x_1 = id5969in_option1;
        break;
      default:
        id5969x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5969out_result[(getCycle()+1)%2] = (id5969x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5970out_output;

  { // Node ID: 5970 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5970in_input = id5969out_result[getCycle()%2];

    id5970out_output = id5970in_input;
  }
  { // Node ID: 5972 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5972in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5972in_option0 = in_vars.id5971out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5972in_option1 = id5970out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5972x_1;

    switch((id5972in_sel.getValueAsLong())) {
      case 0l:
        id5972x_1 = id5972in_option0;
        break;
      case 1l:
        id5972x_1 = id5972in_option1;
        break;
      default:
        id5972x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5972out_result[(getCycle()+1)%2] = (id5972x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5973out_output;

  { // Node ID: 5973 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5973in_input = id5972out_result[getCycle()%2];

    id5973out_output = id5973in_input;
  }
  { // Node ID: 5975 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5975in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5975in_option0 = in_vars.id5974out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5975in_option1 = id5973out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5975x_1;

    switch((id5975in_sel.getValueAsLong())) {
      case 0l:
        id5975x_1 = id5975in_option0;
        break;
      case 1l:
        id5975x_1 = id5975in_option1;
        break;
      default:
        id5975x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5975out_result[(getCycle()+1)%2] = (id5975x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5976out_output;

  { // Node ID: 5976 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5976in_input = id5975out_result[getCycle()%2];

    id5976out_output = id5976in_input;
  }
  { // Node ID: 5978 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5978in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5978in_option0 = in_vars.id5977out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5978in_option1 = id5976out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5978x_1;

    switch((id5978in_sel.getValueAsLong())) {
      case 0l:
        id5978x_1 = id5978in_option0;
        break;
      case 1l:
        id5978x_1 = id5978in_option1;
        break;
      default:
        id5978x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5978out_result[(getCycle()+1)%2] = (id5978x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5979out_output;

  { // Node ID: 5979 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5979in_input = id5978out_result[getCycle()%2];

    id5979out_output = id5979in_input;
  }
  { // Node ID: 5981 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5981in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5981in_option0 = in_vars.id5980out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5981in_option1 = id5979out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5981x_1;

    switch((id5981in_sel.getValueAsLong())) {
      case 0l:
        id5981x_1 = id5981in_option0;
        break;
      case 1l:
        id5981x_1 = id5981in_option1;
        break;
      default:
        id5981x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5981out_result[(getCycle()+1)%2] = (id5981x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5982out_output;

  { // Node ID: 5982 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5982in_input = id5981out_result[getCycle()%2];

    id5982out_output = id5982in_input;
  }
  { // Node ID: 5984 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5984in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5984in_option0 = in_vars.id5983out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5984in_option1 = id5982out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5984x_1;

    switch((id5984in_sel.getValueAsLong())) {
      case 0l:
        id5984x_1 = id5984in_option0;
        break;
      case 1l:
        id5984x_1 = id5984in_option1;
        break;
      default:
        id5984x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5984out_result[(getCycle()+1)%2] = (id5984x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5985out_output;

  { // Node ID: 5985 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5985in_input = id5984out_result[getCycle()%2];

    id5985out_output = id5985in_input;
  }
  { // Node ID: 5987 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5987in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5987in_option0 = in_vars.id5986out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5987in_option1 = id5985out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5987x_1;

    switch((id5987in_sel.getValueAsLong())) {
      case 0l:
        id5987x_1 = id5987in_option0;
        break;
      case 1l:
        id5987x_1 = id5987in_option1;
        break;
      default:
        id5987x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5987out_result[(getCycle()+1)%2] = (id5987x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5988out_output;

  { // Node ID: 5988 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5988in_input = id5987out_result[getCycle()%2];

    id5988out_output = id5988in_input;
  }
  { // Node ID: 5990 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5990in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5990in_option0 = in_vars.id5989out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5990in_option1 = id5988out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5990x_1;

    switch((id5990in_sel.getValueAsLong())) {
      case 0l:
        id5990x_1 = id5990in_option0;
        break;
      case 1l:
        id5990x_1 = id5990in_option1;
        break;
      default:
        id5990x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5990out_result[(getCycle()+1)%2] = (id5990x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5991out_output;

  { // Node ID: 5991 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5991in_input = id5990out_result[getCycle()%2];

    id5991out_output = id5991in_input;
  }
  { // Node ID: 5993 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5993in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5993in_option0 = in_vars.id5992out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5993in_option1 = id5991out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5993x_1;

    switch((id5993in_sel.getValueAsLong())) {
      case 0l:
        id5993x_1 = id5993in_option0;
        break;
      case 1l:
        id5993x_1 = id5993in_option1;
        break;
      default:
        id5993x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5993out_result[(getCycle()+1)%2] = (id5993x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5994out_output;

  { // Node ID: 5994 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5994in_input = id5993out_result[getCycle()%2];

    id5994out_output = id5994in_input;
  }
  { // Node ID: 5996 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5996in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5996in_option0 = in_vars.id5995out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5996in_option1 = id5994out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5996x_1;

    switch((id5996in_sel.getValueAsLong())) {
      case 0l:
        id5996x_1 = id5996in_option0;
        break;
      case 1l:
        id5996x_1 = id5996in_option1;
        break;
      default:
        id5996x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5996out_result[(getCycle()+1)%2] = (id5996x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5997out_output;

  { // Node ID: 5997 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5997in_input = id5996out_result[getCycle()%2];

    id5997out_output = id5997in_input;
  }
  { // Node ID: 5999 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id5999in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5999in_option0 = in_vars.id5998out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id5999in_option1 = id5997out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id5999x_1;

    switch((id5999in_sel.getValueAsLong())) {
      case 0l:
        id5999x_1 = id5999in_option0;
        break;
      case 1l:
        id5999x_1 = id5999in_option1;
        break;
      default:
        id5999x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id5999out_result[(getCycle()+1)%2] = (id5999x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6000out_output;

  { // Node ID: 6000 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6000in_input = id5999out_result[getCycle()%2];

    id6000out_output = id6000in_input;
  }
  { // Node ID: 6002 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6002in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6002in_option0 = in_vars.id6001out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6002in_option1 = id6000out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6002x_1;

    switch((id6002in_sel.getValueAsLong())) {
      case 0l:
        id6002x_1 = id6002in_option0;
        break;
      case 1l:
        id6002x_1 = id6002in_option1;
        break;
      default:
        id6002x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6002out_result[(getCycle()+1)%2] = (id6002x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6003out_output;

  { // Node ID: 6003 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6003in_input = id6002out_result[getCycle()%2];

    id6003out_output = id6003in_input;
  }
  { // Node ID: 6005 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6005in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6005in_option0 = in_vars.id6004out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6005in_option1 = id6003out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6005x_1;

    switch((id6005in_sel.getValueAsLong())) {
      case 0l:
        id6005x_1 = id6005in_option0;
        break;
      case 1l:
        id6005x_1 = id6005in_option1;
        break;
      default:
        id6005x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6005out_result[(getCycle()+1)%2] = (id6005x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6006out_output;

  { // Node ID: 6006 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6006in_input = id6005out_result[getCycle()%2];

    id6006out_output = id6006in_input;
  }
  { // Node ID: 6008 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6008in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6008in_option0 = in_vars.id6007out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6008in_option1 = id6006out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6008x_1;

    switch((id6008in_sel.getValueAsLong())) {
      case 0l:
        id6008x_1 = id6008in_option0;
        break;
      case 1l:
        id6008x_1 = id6008in_option1;
        break;
      default:
        id6008x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6008out_result[(getCycle()+1)%2] = (id6008x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6009out_output;

  { // Node ID: 6009 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6009in_input = id6008out_result[getCycle()%2];

    id6009out_output = id6009in_input;
  }
  { // Node ID: 6011 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6011in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6011in_option0 = in_vars.id6010out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6011in_option1 = id6009out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6011x_1;

    switch((id6011in_sel.getValueAsLong())) {
      case 0l:
        id6011x_1 = id6011in_option0;
        break;
      case 1l:
        id6011x_1 = id6011in_option1;
        break;
      default:
        id6011x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6011out_result[(getCycle()+1)%2] = (id6011x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6012out_output;

  { // Node ID: 6012 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6012in_input = id6011out_result[getCycle()%2];

    id6012out_output = id6012in_input;
  }
  { // Node ID: 6014 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6014in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6014in_option0 = in_vars.id6013out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6014in_option1 = id6012out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6014x_1;

    switch((id6014in_sel.getValueAsLong())) {
      case 0l:
        id6014x_1 = id6014in_option0;
        break;
      case 1l:
        id6014x_1 = id6014in_option1;
        break;
      default:
        id6014x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6014out_result[(getCycle()+1)%2] = (id6014x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6015out_output;

  { // Node ID: 6015 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6015in_input = id6014out_result[getCycle()%2];

    id6015out_output = id6015in_input;
  }
  { // Node ID: 6017 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6017in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6017in_option0 = in_vars.id6016out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6017in_option1 = id6015out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6017x_1;

    switch((id6017in_sel.getValueAsLong())) {
      case 0l:
        id6017x_1 = id6017in_option0;
        break;
      case 1l:
        id6017x_1 = id6017in_option1;
        break;
      default:
        id6017x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6017out_result[(getCycle()+1)%2] = (id6017x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6018out_output;

  { // Node ID: 6018 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6018in_input = id6017out_result[getCycle()%2];

    id6018out_output = id6018in_input;
  }
  { // Node ID: 6020 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6020in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6020in_option0 = in_vars.id6019out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6020in_option1 = id6018out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6020x_1;

    switch((id6020in_sel.getValueAsLong())) {
      case 0l:
        id6020x_1 = id6020in_option0;
        break;
      case 1l:
        id6020x_1 = id6020in_option1;
        break;
      default:
        id6020x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6020out_result[(getCycle()+1)%2] = (id6020x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6021out_output;

  { // Node ID: 6021 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6021in_input = id6020out_result[getCycle()%2];

    id6021out_output = id6021in_input;
  }
  { // Node ID: 6023 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6023in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6023in_option0 = in_vars.id6022out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6023in_option1 = id6021out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6023x_1;

    switch((id6023in_sel.getValueAsLong())) {
      case 0l:
        id6023x_1 = id6023in_option0;
        break;
      case 1l:
        id6023x_1 = id6023in_option1;
        break;
      default:
        id6023x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6023out_result[(getCycle()+1)%2] = (id6023x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6024out_output;

  { // Node ID: 6024 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6024in_input = id6023out_result[getCycle()%2];

    id6024out_output = id6024in_input;
  }
  { // Node ID: 6026 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6026in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6026in_option0 = in_vars.id6025out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6026in_option1 = id6024out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6026x_1;

    switch((id6026in_sel.getValueAsLong())) {
      case 0l:
        id6026x_1 = id6026in_option0;
        break;
      case 1l:
        id6026x_1 = id6026in_option1;
        break;
      default:
        id6026x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6026out_result[(getCycle()+1)%2] = (id6026x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6027out_output;

  { // Node ID: 6027 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6027in_input = id6026out_result[getCycle()%2];

    id6027out_output = id6027in_input;
  }
  { // Node ID: 6029 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6029in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6029in_option0 = in_vars.id6028out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6029in_option1 = id6027out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6029x_1;

    switch((id6029in_sel.getValueAsLong())) {
      case 0l:
        id6029x_1 = id6029in_option0;
        break;
      case 1l:
        id6029x_1 = id6029in_option1;
        break;
      default:
        id6029x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6029out_result[(getCycle()+1)%2] = (id6029x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6030out_output;

  { // Node ID: 6030 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6030in_input = id6029out_result[getCycle()%2];

    id6030out_output = id6030in_input;
  }
  { // Node ID: 6032 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6032in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6032in_option0 = in_vars.id6031out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6032in_option1 = id6030out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6032x_1;

    switch((id6032in_sel.getValueAsLong())) {
      case 0l:
        id6032x_1 = id6032in_option0;
        break;
      case 1l:
        id6032x_1 = id6032in_option1;
        break;
      default:
        id6032x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6032out_result[(getCycle()+1)%2] = (id6032x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6033out_output;

  { // Node ID: 6033 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6033in_input = id6032out_result[getCycle()%2];

    id6033out_output = id6033in_input;
  }
  { // Node ID: 6035 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6035in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6035in_option0 = in_vars.id6034out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6035in_option1 = id6033out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6035x_1;

    switch((id6035in_sel.getValueAsLong())) {
      case 0l:
        id6035x_1 = id6035in_option0;
        break;
      case 1l:
        id6035x_1 = id6035in_option1;
        break;
      default:
        id6035x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6035out_result[(getCycle()+1)%2] = (id6035x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6036out_output;

  { // Node ID: 6036 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6036in_input = id6035out_result[getCycle()%2];

    id6036out_output = id6036in_input;
  }
  { // Node ID: 6038 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6038in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6038in_option0 = in_vars.id6037out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6038in_option1 = id6036out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6038x_1;

    switch((id6038in_sel.getValueAsLong())) {
      case 0l:
        id6038x_1 = id6038in_option0;
        break;
      case 1l:
        id6038x_1 = id6038in_option1;
        break;
      default:
        id6038x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6038out_result[(getCycle()+1)%2] = (id6038x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6039out_output;

  { // Node ID: 6039 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6039in_input = id6038out_result[getCycle()%2];

    id6039out_output = id6039in_input;
  }
  { // Node ID: 6041 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6041in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6041in_option0 = in_vars.id6040out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6041in_option1 = id6039out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6041x_1;

    switch((id6041in_sel.getValueAsLong())) {
      case 0l:
        id6041x_1 = id6041in_option0;
        break;
      case 1l:
        id6041x_1 = id6041in_option1;
        break;
      default:
        id6041x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6041out_result[(getCycle()+1)%2] = (id6041x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6042out_output;

  { // Node ID: 6042 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6042in_input = id6041out_result[getCycle()%2];

    id6042out_output = id6042in_input;
  }
  { // Node ID: 6044 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6044in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6044in_option0 = in_vars.id6043out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6044in_option1 = id6042out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6044x_1;

    switch((id6044in_sel.getValueAsLong())) {
      case 0l:
        id6044x_1 = id6044in_option0;
        break;
      case 1l:
        id6044x_1 = id6044in_option1;
        break;
      default:
        id6044x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6044out_result[(getCycle()+1)%2] = (id6044x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6045out_output;

  { // Node ID: 6045 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6045in_input = id6044out_result[getCycle()%2];

    id6045out_output = id6045in_input;
  }
  { // Node ID: 6047 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6047in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6047in_option0 = in_vars.id6046out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6047in_option1 = id6045out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6047x_1;

    switch((id6047in_sel.getValueAsLong())) {
      case 0l:
        id6047x_1 = id6047in_option0;
        break;
      case 1l:
        id6047x_1 = id6047in_option1;
        break;
      default:
        id6047x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6047out_result[(getCycle()+1)%2] = (id6047x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6048out_output;

  { // Node ID: 6048 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6048in_input = id6047out_result[getCycle()%2];

    id6048out_output = id6048in_input;
  }
  { // Node ID: 6050 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6050in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6050in_option0 = in_vars.id6049out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6050in_option1 = id6048out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6050x_1;

    switch((id6050in_sel.getValueAsLong())) {
      case 0l:
        id6050x_1 = id6050in_option0;
        break;
      case 1l:
        id6050x_1 = id6050in_option1;
        break;
      default:
        id6050x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6050out_result[(getCycle()+1)%2] = (id6050x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6051out_output;

  { // Node ID: 6051 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6051in_input = id6050out_result[getCycle()%2];

    id6051out_output = id6051in_input;
  }
  { // Node ID: 6053 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6053in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6053in_option0 = in_vars.id6052out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6053in_option1 = id6051out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6053x_1;

    switch((id6053in_sel.getValueAsLong())) {
      case 0l:
        id6053x_1 = id6053in_option0;
        break;
      case 1l:
        id6053x_1 = id6053in_option1;
        break;
      default:
        id6053x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6053out_result[(getCycle()+1)%2] = (id6053x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6054out_output;

  { // Node ID: 6054 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6054in_input = id6053out_result[getCycle()%2];

    id6054out_output = id6054in_input;
  }
  { // Node ID: 6056 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6056in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6056in_option0 = in_vars.id6055out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6056in_option1 = id6054out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6056x_1;

    switch((id6056in_sel.getValueAsLong())) {
      case 0l:
        id6056x_1 = id6056in_option0;
        break;
      case 1l:
        id6056x_1 = id6056in_option1;
        break;
      default:
        id6056x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6056out_result[(getCycle()+1)%2] = (id6056x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6057out_output;

  { // Node ID: 6057 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6057in_input = id6056out_result[getCycle()%2];

    id6057out_output = id6057in_input;
  }
  { // Node ID: 6059 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6059in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6059in_option0 = in_vars.id6058out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6059in_option1 = id6057out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6059x_1;

    switch((id6059in_sel.getValueAsLong())) {
      case 0l:
        id6059x_1 = id6059in_option0;
        break;
      case 1l:
        id6059x_1 = id6059in_option1;
        break;
      default:
        id6059x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6059out_result[(getCycle()+1)%2] = (id6059x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6060out_output;

  { // Node ID: 6060 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6060in_input = id6059out_result[getCycle()%2];

    id6060out_output = id6060in_input;
  }
  { // Node ID: 6062 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6062in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6062in_option0 = in_vars.id6061out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6062in_option1 = id6060out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6062x_1;

    switch((id6062in_sel.getValueAsLong())) {
      case 0l:
        id6062x_1 = id6062in_option0;
        break;
      case 1l:
        id6062x_1 = id6062in_option1;
        break;
      default:
        id6062x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6062out_result[(getCycle()+1)%2] = (id6062x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6063out_output;

  { // Node ID: 6063 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6063in_input = id6062out_result[getCycle()%2];

    id6063out_output = id6063in_input;
  }
  { // Node ID: 6065 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6065in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6065in_option0 = in_vars.id6064out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6065in_option1 = id6063out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6065x_1;

    switch((id6065in_sel.getValueAsLong())) {
      case 0l:
        id6065x_1 = id6065in_option0;
        break;
      case 1l:
        id6065x_1 = id6065in_option1;
        break;
      default:
        id6065x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6065out_result[(getCycle()+1)%2] = (id6065x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6066out_output;

  { // Node ID: 6066 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6066in_input = id6065out_result[getCycle()%2];

    id6066out_output = id6066in_input;
  }
  { // Node ID: 6068 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6068in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6068in_option0 = in_vars.id6067out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6068in_option1 = id6066out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6068x_1;

    switch((id6068in_sel.getValueAsLong())) {
      case 0l:
        id6068x_1 = id6068in_option0;
        break;
      case 1l:
        id6068x_1 = id6068in_option1;
        break;
      default:
        id6068x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6068out_result[(getCycle()+1)%2] = (id6068x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6069out_output;

  { // Node ID: 6069 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6069in_input = id6068out_result[getCycle()%2];

    id6069out_output = id6069in_input;
  }
  { // Node ID: 6071 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6071in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6071in_option0 = in_vars.id6070out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6071in_option1 = id6069out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6071x_1;

    switch((id6071in_sel.getValueAsLong())) {
      case 0l:
        id6071x_1 = id6071in_option0;
        break;
      case 1l:
        id6071x_1 = id6071in_option1;
        break;
      default:
        id6071x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6071out_result[(getCycle()+1)%2] = (id6071x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6072out_output;

  { // Node ID: 6072 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6072in_input = id6071out_result[getCycle()%2];

    id6072out_output = id6072in_input;
  }
  { // Node ID: 6074 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6074in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6074in_option0 = in_vars.id6073out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6074in_option1 = id6072out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6074x_1;

    switch((id6074in_sel.getValueAsLong())) {
      case 0l:
        id6074x_1 = id6074in_option0;
        break;
      case 1l:
        id6074x_1 = id6074in_option1;
        break;
      default:
        id6074x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6074out_result[(getCycle()+1)%2] = (id6074x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6075out_output;

  { // Node ID: 6075 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6075in_input = id6074out_result[getCycle()%2];

    id6075out_output = id6075in_input;
  }
  { // Node ID: 6077 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6077in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6077in_option0 = in_vars.id6076out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6077in_option1 = id6075out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6077x_1;

    switch((id6077in_sel.getValueAsLong())) {
      case 0l:
        id6077x_1 = id6077in_option0;
        break;
      case 1l:
        id6077x_1 = id6077in_option1;
        break;
      default:
        id6077x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6077out_result[(getCycle()+1)%2] = (id6077x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6078out_output;

  { // Node ID: 6078 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6078in_input = id6077out_result[getCycle()%2];

    id6078out_output = id6078in_input;
  }
  { // Node ID: 6080 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6080in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6080in_option0 = in_vars.id6079out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6080in_option1 = id6078out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6080x_1;

    switch((id6080in_sel.getValueAsLong())) {
      case 0l:
        id6080x_1 = id6080in_option0;
        break;
      case 1l:
        id6080x_1 = id6080in_option1;
        break;
      default:
        id6080x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6080out_result[(getCycle()+1)%2] = (id6080x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6081out_output;

  { // Node ID: 6081 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6081in_input = id6080out_result[getCycle()%2];

    id6081out_output = id6081in_input;
  }
  { // Node ID: 6083 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6083in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6083in_option0 = in_vars.id6082out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6083in_option1 = id6081out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6083x_1;

    switch((id6083in_sel.getValueAsLong())) {
      case 0l:
        id6083x_1 = id6083in_option0;
        break;
      case 1l:
        id6083x_1 = id6083in_option1;
        break;
      default:
        id6083x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6083out_result[(getCycle()+1)%2] = (id6083x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6084out_output;

  { // Node ID: 6084 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6084in_input = id6083out_result[getCycle()%2];

    id6084out_output = id6084in_input;
  }
  { // Node ID: 6086 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6086in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6086in_option0 = in_vars.id6085out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6086in_option1 = id6084out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6086x_1;

    switch((id6086in_sel.getValueAsLong())) {
      case 0l:
        id6086x_1 = id6086in_option0;
        break;
      case 1l:
        id6086x_1 = id6086in_option1;
        break;
      default:
        id6086x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6086out_result[(getCycle()+1)%2] = (id6086x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6087out_output;

  { // Node ID: 6087 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6087in_input = id6086out_result[getCycle()%2];

    id6087out_output = id6087in_input;
  }
  { // Node ID: 6089 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6089in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6089in_option0 = in_vars.id6088out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6089in_option1 = id6087out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6089x_1;

    switch((id6089in_sel.getValueAsLong())) {
      case 0l:
        id6089x_1 = id6089in_option0;
        break;
      case 1l:
        id6089x_1 = id6089in_option1;
        break;
      default:
        id6089x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6089out_result[(getCycle()+1)%2] = (id6089x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6090out_output;

  { // Node ID: 6090 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6090in_input = id6089out_result[getCycle()%2];

    id6090out_output = id6090in_input;
  }
  { // Node ID: 6092 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6092in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6092in_option0 = in_vars.id6091out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6092in_option1 = id6090out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6092x_1;

    switch((id6092in_sel.getValueAsLong())) {
      case 0l:
        id6092x_1 = id6092in_option0;
        break;
      case 1l:
        id6092x_1 = id6092in_option1;
        break;
      default:
        id6092x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6092out_result[(getCycle()+1)%2] = (id6092x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6093out_output;

  { // Node ID: 6093 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6093in_input = id6092out_result[getCycle()%2];

    id6093out_output = id6093in_input;
  }
  { // Node ID: 6095 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6095in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6095in_option0 = in_vars.id6094out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6095in_option1 = id6093out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6095x_1;

    switch((id6095in_sel.getValueAsLong())) {
      case 0l:
        id6095x_1 = id6095in_option0;
        break;
      case 1l:
        id6095x_1 = id6095in_option1;
        break;
      default:
        id6095x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6095out_result[(getCycle()+1)%2] = (id6095x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6096out_output;

  { // Node ID: 6096 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6096in_input = id6095out_result[getCycle()%2];

    id6096out_output = id6096in_input;
  }
  { // Node ID: 6098 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6098in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6098in_option0 = in_vars.id6097out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6098in_option1 = id6096out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6098x_1;

    switch((id6098in_sel.getValueAsLong())) {
      case 0l:
        id6098x_1 = id6098in_option0;
        break;
      case 1l:
        id6098x_1 = id6098in_option1;
        break;
      default:
        id6098x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6098out_result[(getCycle()+1)%2] = (id6098x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6099out_output;

  { // Node ID: 6099 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6099in_input = id6098out_result[getCycle()%2];

    id6099out_output = id6099in_input;
  }
  { // Node ID: 6101 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6101in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6101in_option0 = in_vars.id6100out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6101in_option1 = id6099out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6101x_1;

    switch((id6101in_sel.getValueAsLong())) {
      case 0l:
        id6101x_1 = id6101in_option0;
        break;
      case 1l:
        id6101x_1 = id6101in_option1;
        break;
      default:
        id6101x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6101out_result[(getCycle()+1)%2] = (id6101x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6102out_output;

  { // Node ID: 6102 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6102in_input = id6101out_result[getCycle()%2];

    id6102out_output = id6102in_input;
  }
  { // Node ID: 6104 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6104in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6104in_option0 = in_vars.id6103out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6104in_option1 = id6102out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6104x_1;

    switch((id6104in_sel.getValueAsLong())) {
      case 0l:
        id6104x_1 = id6104in_option0;
        break;
      case 1l:
        id6104x_1 = id6104in_option1;
        break;
      default:
        id6104x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6104out_result[(getCycle()+1)%2] = (id6104x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6105out_output;

  { // Node ID: 6105 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6105in_input = id6104out_result[getCycle()%2];

    id6105out_output = id6105in_input;
  }
  { // Node ID: 6107 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6107in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6107in_option0 = in_vars.id6106out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6107in_option1 = id6105out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6107x_1;

    switch((id6107in_sel.getValueAsLong())) {
      case 0l:
        id6107x_1 = id6107in_option0;
        break;
      case 1l:
        id6107x_1 = id6107in_option1;
        break;
      default:
        id6107x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6107out_result[(getCycle()+1)%2] = (id6107x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6108out_output;

  { // Node ID: 6108 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6108in_input = id6107out_result[getCycle()%2];

    id6108out_output = id6108in_input;
  }
  { // Node ID: 6110 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6110in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6110in_option0 = in_vars.id6109out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6110in_option1 = id6108out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6110x_1;

    switch((id6110in_sel.getValueAsLong())) {
      case 0l:
        id6110x_1 = id6110in_option0;
        break;
      case 1l:
        id6110x_1 = id6110in_option1;
        break;
      default:
        id6110x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6110out_result[(getCycle()+1)%2] = (id6110x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6111out_output;

  { // Node ID: 6111 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6111in_input = id6110out_result[getCycle()%2];

    id6111out_output = id6111in_input;
  }
  { // Node ID: 6113 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6113in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6113in_option0 = in_vars.id6112out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6113in_option1 = id6111out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6113x_1;

    switch((id6113in_sel.getValueAsLong())) {
      case 0l:
        id6113x_1 = id6113in_option0;
        break;
      case 1l:
        id6113x_1 = id6113in_option1;
        break;
      default:
        id6113x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6113out_result[(getCycle()+1)%2] = (id6113x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6114out_output;

  { // Node ID: 6114 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6114in_input = id6113out_result[getCycle()%2];

    id6114out_output = id6114in_input;
  }
  { // Node ID: 6116 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6116in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6116in_option0 = in_vars.id6115out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6116in_option1 = id6114out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6116x_1;

    switch((id6116in_sel.getValueAsLong())) {
      case 0l:
        id6116x_1 = id6116in_option0;
        break;
      case 1l:
        id6116x_1 = id6116in_option1;
        break;
      default:
        id6116x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6116out_result[(getCycle()+1)%2] = (id6116x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6117out_output;

  { // Node ID: 6117 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6117in_input = id6116out_result[getCycle()%2];

    id6117out_output = id6117in_input;
  }
  { // Node ID: 6119 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6119in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6119in_option0 = in_vars.id6118out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6119in_option1 = id6117out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6119x_1;

    switch((id6119in_sel.getValueAsLong())) {
      case 0l:
        id6119x_1 = id6119in_option0;
        break;
      case 1l:
        id6119x_1 = id6119in_option1;
        break;
      default:
        id6119x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6119out_result[(getCycle()+1)%2] = (id6119x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6120out_output;

  { // Node ID: 6120 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6120in_input = id6119out_result[getCycle()%2];

    id6120out_output = id6120in_input;
  }
  { // Node ID: 6122 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6122in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6122in_option0 = in_vars.id6121out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6122in_option1 = id6120out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6122x_1;

    switch((id6122in_sel.getValueAsLong())) {
      case 0l:
        id6122x_1 = id6122in_option0;
        break;
      case 1l:
        id6122x_1 = id6122in_option1;
        break;
      default:
        id6122x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6122out_result[(getCycle()+1)%2] = (id6122x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6123out_output;

  { // Node ID: 6123 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6123in_input = id6122out_result[getCycle()%2];

    id6123out_output = id6123in_input;
  }
  { // Node ID: 6125 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6125in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6125in_option0 = in_vars.id6124out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6125in_option1 = id6123out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6125x_1;

    switch((id6125in_sel.getValueAsLong())) {
      case 0l:
        id6125x_1 = id6125in_option0;
        break;
      case 1l:
        id6125x_1 = id6125in_option1;
        break;
      default:
        id6125x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6125out_result[(getCycle()+1)%2] = (id6125x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6126out_output;

  { // Node ID: 6126 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6126in_input = id6125out_result[getCycle()%2];

    id6126out_output = id6126in_input;
  }
  { // Node ID: 6128 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6128in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6128in_option0 = in_vars.id6127out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6128in_option1 = id6126out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6128x_1;

    switch((id6128in_sel.getValueAsLong())) {
      case 0l:
        id6128x_1 = id6128in_option0;
        break;
      case 1l:
        id6128x_1 = id6128in_option1;
        break;
      default:
        id6128x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6128out_result[(getCycle()+1)%2] = (id6128x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6129out_output;

  { // Node ID: 6129 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6129in_input = id6128out_result[getCycle()%2];

    id6129out_output = id6129in_input;
  }
  { // Node ID: 6131 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6131in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6131in_option0 = in_vars.id6130out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6131in_option1 = id6129out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6131x_1;

    switch((id6131in_sel.getValueAsLong())) {
      case 0l:
        id6131x_1 = id6131in_option0;
        break;
      case 1l:
        id6131x_1 = id6131in_option1;
        break;
      default:
        id6131x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6131out_result[(getCycle()+1)%2] = (id6131x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6132out_output;

  { // Node ID: 6132 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6132in_input = id6131out_result[getCycle()%2];

    id6132out_output = id6132in_input;
  }
  { // Node ID: 6134 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6134in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6134in_option0 = in_vars.id6133out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6134in_option1 = id6132out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6134x_1;

    switch((id6134in_sel.getValueAsLong())) {
      case 0l:
        id6134x_1 = id6134in_option0;
        break;
      case 1l:
        id6134x_1 = id6134in_option1;
        break;
      default:
        id6134x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6134out_result[(getCycle()+1)%2] = (id6134x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6135out_output;

  { // Node ID: 6135 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6135in_input = id6134out_result[getCycle()%2];

    id6135out_output = id6135in_input;
  }
  { // Node ID: 6137 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6137in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6137in_option0 = in_vars.id6136out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6137in_option1 = id6135out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6137x_1;

    switch((id6137in_sel.getValueAsLong())) {
      case 0l:
        id6137x_1 = id6137in_option0;
        break;
      case 1l:
        id6137x_1 = id6137in_option1;
        break;
      default:
        id6137x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6137out_result[(getCycle()+1)%2] = (id6137x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6138out_output;

  { // Node ID: 6138 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6138in_input = id6137out_result[getCycle()%2];

    id6138out_output = id6138in_input;
  }
  { // Node ID: 6140 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6140in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6140in_option0 = in_vars.id6139out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6140in_option1 = id6138out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6140x_1;

    switch((id6140in_sel.getValueAsLong())) {
      case 0l:
        id6140x_1 = id6140in_option0;
        break;
      case 1l:
        id6140x_1 = id6140in_option1;
        break;
      default:
        id6140x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6140out_result[(getCycle()+1)%2] = (id6140x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6141out_output;

  { // Node ID: 6141 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6141in_input = id6140out_result[getCycle()%2];

    id6141out_output = id6141in_input;
  }
  { // Node ID: 6143 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6143in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6143in_option0 = in_vars.id6142out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6143in_option1 = id6141out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6143x_1;

    switch((id6143in_sel.getValueAsLong())) {
      case 0l:
        id6143x_1 = id6143in_option0;
        break;
      case 1l:
        id6143x_1 = id6143in_option1;
        break;
      default:
        id6143x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6143out_result[(getCycle()+1)%2] = (id6143x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6144out_output;

  { // Node ID: 6144 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6144in_input = id6143out_result[getCycle()%2];

    id6144out_output = id6144in_input;
  }
  { // Node ID: 6146 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6146in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6146in_option0 = in_vars.id6145out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6146in_option1 = id6144out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6146x_1;

    switch((id6146in_sel.getValueAsLong())) {
      case 0l:
        id6146x_1 = id6146in_option0;
        break;
      case 1l:
        id6146x_1 = id6146in_option1;
        break;
      default:
        id6146x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6146out_result[(getCycle()+1)%2] = (id6146x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6147out_output;

  { // Node ID: 6147 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6147in_input = id6146out_result[getCycle()%2];

    id6147out_output = id6147in_input;
  }
  { // Node ID: 6149 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6149in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6149in_option0 = in_vars.id6148out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6149in_option1 = id6147out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6149x_1;

    switch((id6149in_sel.getValueAsLong())) {
      case 0l:
        id6149x_1 = id6149in_option0;
        break;
      case 1l:
        id6149x_1 = id6149in_option1;
        break;
      default:
        id6149x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6149out_result[(getCycle()+1)%2] = (id6149x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6150out_output;

  { // Node ID: 6150 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6150in_input = id6149out_result[getCycle()%2];

    id6150out_output = id6150in_input;
  }
  { // Node ID: 6152 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6152in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6152in_option0 = in_vars.id6151out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6152in_option1 = id6150out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6152x_1;

    switch((id6152in_sel.getValueAsLong())) {
      case 0l:
        id6152x_1 = id6152in_option0;
        break;
      case 1l:
        id6152x_1 = id6152in_option1;
        break;
      default:
        id6152x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6152out_result[(getCycle()+1)%2] = (id6152x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6153out_output;

  { // Node ID: 6153 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6153in_input = id6152out_result[getCycle()%2];

    id6153out_output = id6153in_input;
  }
  { // Node ID: 6155 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6155in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6155in_option0 = in_vars.id6154out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6155in_option1 = id6153out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6155x_1;

    switch((id6155in_sel.getValueAsLong())) {
      case 0l:
        id6155x_1 = id6155in_option0;
        break;
      case 1l:
        id6155x_1 = id6155in_option1;
        break;
      default:
        id6155x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6155out_result[(getCycle()+1)%2] = (id6155x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6156out_output;

  { // Node ID: 6156 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6156in_input = id6155out_result[getCycle()%2];

    id6156out_output = id6156in_input;
  }
  { // Node ID: 6158 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6158in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6158in_option0 = in_vars.id6157out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6158in_option1 = id6156out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6158x_1;

    switch((id6158in_sel.getValueAsLong())) {
      case 0l:
        id6158x_1 = id6158in_option0;
        break;
      case 1l:
        id6158x_1 = id6158in_option1;
        break;
      default:
        id6158x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6158out_result[(getCycle()+1)%2] = (id6158x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6159out_output;

  { // Node ID: 6159 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6159in_input = id6158out_result[getCycle()%2];

    id6159out_output = id6159in_input;
  }
  { // Node ID: 6161 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6161in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6161in_option0 = in_vars.id6160out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6161in_option1 = id6159out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6161x_1;

    switch((id6161in_sel.getValueAsLong())) {
      case 0l:
        id6161x_1 = id6161in_option0;
        break;
      case 1l:
        id6161x_1 = id6161in_option1;
        break;
      default:
        id6161x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6161out_result[(getCycle()+1)%2] = (id6161x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6162out_output;

  { // Node ID: 6162 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6162in_input = id6161out_result[getCycle()%2];

    id6162out_output = id6162in_input;
  }
  { // Node ID: 6164 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6164in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6164in_option0 = in_vars.id6163out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6164in_option1 = id6162out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6164x_1;

    switch((id6164in_sel.getValueAsLong())) {
      case 0l:
        id6164x_1 = id6164in_option0;
        break;
      case 1l:
        id6164x_1 = id6164in_option1;
        break;
      default:
        id6164x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6164out_result[(getCycle()+1)%2] = (id6164x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6165out_output;

  { // Node ID: 6165 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6165in_input = id6164out_result[getCycle()%2];

    id6165out_output = id6165in_input;
  }
  { // Node ID: 6167 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6167in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6167in_option0 = in_vars.id6166out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6167in_option1 = id6165out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6167x_1;

    switch((id6167in_sel.getValueAsLong())) {
      case 0l:
        id6167x_1 = id6167in_option0;
        break;
      case 1l:
        id6167x_1 = id6167in_option1;
        break;
      default:
        id6167x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6167out_result[(getCycle()+1)%2] = (id6167x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6168out_output;

  { // Node ID: 6168 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6168in_input = id6167out_result[getCycle()%2];

    id6168out_output = id6168in_input;
  }
  { // Node ID: 6170 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6170in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6170in_option0 = in_vars.id6169out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6170in_option1 = id6168out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6170x_1;

    switch((id6170in_sel.getValueAsLong())) {
      case 0l:
        id6170x_1 = id6170in_option0;
        break;
      case 1l:
        id6170x_1 = id6170in_option1;
        break;
      default:
        id6170x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6170out_result[(getCycle()+1)%2] = (id6170x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6171out_output;

  { // Node ID: 6171 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6171in_input = id6170out_result[getCycle()%2];

    id6171out_output = id6171in_input;
  }
  { // Node ID: 6173 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6173in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6173in_option0 = in_vars.id6172out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6173in_option1 = id6171out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6173x_1;

    switch((id6173in_sel.getValueAsLong())) {
      case 0l:
        id6173x_1 = id6173in_option0;
        break;
      case 1l:
        id6173x_1 = id6173in_option1;
        break;
      default:
        id6173x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6173out_result[(getCycle()+1)%2] = (id6173x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6174out_output;

  { // Node ID: 6174 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6174in_input = id6173out_result[getCycle()%2];

    id6174out_output = id6174in_input;
  }
  { // Node ID: 6176 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6176in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6176in_option0 = in_vars.id6175out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6176in_option1 = id6174out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6176x_1;

    switch((id6176in_sel.getValueAsLong())) {
      case 0l:
        id6176x_1 = id6176in_option0;
        break;
      case 1l:
        id6176x_1 = id6176in_option1;
        break;
      default:
        id6176x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6176out_result[(getCycle()+1)%2] = (id6176x_1);
  }
  HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6177out_output;

  { // Node ID: 6177 (NodeStreamOffset)
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6177in_input = id6176out_result[getCycle()%2];

    id6177out_output = id6177in_input;
  }
  { // Node ID: 6179 (NodeMux)
    const HWOffsetFix<1,0,UNSIGNED> &id6179in_sel = id7604out_output[getCycle()%12];
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6179in_option0 = in_vars.id6178out_output;
    const HWOffsetFix<32,-24,TWOSCOMPLEMENT> &id6179in_option1 = id6177out_output;

    HWOffsetFix<32,-24,TWOSCOMPLEMENT> id6179x_1;

    switch((id6179in_sel.getValueAsLong())) {
      case 0l:
        id6179x_1 = id6179in_option0;
        break;
      case 1l:
        id6179x_1 = id6179in_option1;
        break;
      default:
        id6179x_1 = (c_hw_fix_32_n24_sgn_undef);
        break;
    }
    id6179out_result[(getCycle()+1)%2] = (id6179x_1);
  }

  sliding_window10Block13Vars out_vars;
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
  return out_vars;
};

};
