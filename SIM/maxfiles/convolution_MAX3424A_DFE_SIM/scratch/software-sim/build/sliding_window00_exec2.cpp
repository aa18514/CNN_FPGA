#include "stdsimheader.h"
//#define BOOST_NO_STD_LOCALE
//#include <boost/format.hpp>

//#include "sliding_window00.h"

namespace maxcompilersim {

void sliding_window00::execute2() {
  { // Node ID: 1048 (NodeConstantRawBits)
  }
  { // Node ID: 1345 (NodeConstantRawBits)
  }
  { // Node ID: 1045 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (3l)))
  { // Node ID: 1046 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id1046in_enable = id1345out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id1046in_max = id1045out_value;

    HWOffsetFix<49,0,UNSIGNED> id1046x_1;
    HWOffsetFix<1,0,UNSIGNED> id1046x_2;
    HWOffsetFix<1,0,UNSIGNED> id1046x_3;
    HWOffsetFix<49,0,UNSIGNED> id1046x_4t_1e_1;

    id1046out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id1046st_count)));
    (id1046x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id1046st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id1046x_2) = (gte_fixed((id1046x_1),id1046in_max));
    (id1046x_3) = (and_fixed((id1046x_2),id1046in_enable));
    id1046out_wrap = (id1046x_3);
    if((id1046in_enable.getValueAsBool())) {
      if(((id1046x_3).getValueAsBool())) {
        (id1046st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id1046x_4t_1e_1) = (id1046x_1);
        (id1046st_count) = (id1046x_4t_1e_1);
      }
    }
    else {
    }
  }
  HWOffsetFix<48,0,UNSIGNED> id1047out_output;

  { // Node ID: 1047 (NodeStreamOffset)
    const HWOffsetFix<48,0,UNSIGNED> &id1047in_input = id1046out_count;

    id1047out_output = id1047in_input;
  }
  if ( (getFillLevel() >= (4l)) && (getFlushLevel() < (4l)|| !isFlushingActive() ))
  { // Node ID: 1049 (NodeOutputMappedReg)
    const HWOffsetFix<1,0,UNSIGNED> &id1049in_load = id1048out_value;
    const HWOffsetFix<48,0,UNSIGNED> &id1049in_data = id1047out_output;

    bool id1049x_1;

    (id1049x_1) = ((id1049in_load.getValueAsBool())&(!(((getFlushLevel())>=(4l))&(isFlushingActive()))));
    if((id1049x_1)) {
      setMappedRegValue("current_run_cycle_count", id1049in_data);
    }
  }
  { // Node ID: 1344 (NodeConstantRawBits)
  }
  { // Node ID: 1051 (NodeConstantRawBits)
  }
  if ( (getFillLevel() >= (0l)))
  { // Node ID: 1052 (NodeCounterV1)
    const HWOffsetFix<1,0,UNSIGNED> &id1052in_enable = id1344out_value;
    const HWOffsetFix<49,0,UNSIGNED> &id1052in_max = id1051out_value;

    HWOffsetFix<49,0,UNSIGNED> id1052x_1;
    HWOffsetFix<1,0,UNSIGNED> id1052x_2;
    HWOffsetFix<1,0,UNSIGNED> id1052x_3;
    HWOffsetFix<49,0,UNSIGNED> id1052x_4t_1e_1;

    id1052out_count = (cast_fixed2fixed<48,0,UNSIGNED,TRUNCATE>((id1052st_count)));
    (id1052x_1) = (add_fixed<49,0,UNSIGNED,TRUNCATE>((id1052st_count),(c_hw_fix_49_0_uns_bits_2)));
    (id1052x_2) = (gte_fixed((id1052x_1),id1052in_max));
    (id1052x_3) = (and_fixed((id1052x_2),id1052in_enable));
    id1052out_wrap = (id1052x_3);
    if((id1052in_enable.getValueAsBool())) {
      if(((id1052x_3).getValueAsBool())) {
        (id1052st_count) = (c_hw_fix_49_0_uns_bits_1);
      }
      else {
        (id1052x_4t_1e_1) = (id1052x_1);
        (id1052st_count) = (id1052x_4t_1e_1);
      }
    }
    else {
    }
  }
  { // Node ID: 1054 (NodeInputMappedReg)
  }
  { // Node ID: 1055 (NodeEq)
    const HWOffsetFix<48,0,UNSIGNED> &id1055in_a = id1052out_count;
    const HWOffsetFix<48,0,UNSIGNED> &id1055in_b = id1054out_run_cycle_count;

    id1055out_result[(getCycle()+1)%2] = (eq_fixed(id1055in_a,id1055in_b));
  }
  if ( (getFillLevel() >= (1l)))
  { // Node ID: 1053 (NodeFlush)
    const HWOffsetFix<1,0,UNSIGNED> &id1053in_start = id1055out_result[getCycle()%2];

    if((id1053in_start.getValueAsBool())) {
      startFlushing();
    }
  }
};

};
