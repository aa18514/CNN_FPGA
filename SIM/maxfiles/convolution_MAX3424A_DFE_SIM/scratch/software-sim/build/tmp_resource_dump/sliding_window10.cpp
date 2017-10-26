#include "stdsimheader.h"
#include "sliding_window10.h"

namespace maxcompilersim {

sliding_window10::sliding_window10(const std::string &instance_name) : 
  ManagerBlockSync(instance_name),
  KernelManagerBlockSync(instance_name, 18, 2, 0, 0, "",1)
, c_hw_fix_1_0_uns_bits((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x1l))))
, c_hw_fix_33_0_uns_bits((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x0000469b0l))))
, c_hw_fix_33_0_uns_bits_1((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000000l))))
, c_hw_fix_33_0_uns_bits_2((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000001l))))
, c_hw_fix_32_0_uns_bits((HWOffsetFix<32,0,UNSIGNED>(varint_u<32>(0x000004afl))))
, c_hw_fix_17_0_uns_bits((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00032l))))
, c_hw_fix_17_0_uns_bits_1((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00000l))))
, c_hw_fix_17_0_uns_bits_2((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00001l))))
, c_hw_fix_16_0_uns_bits((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0000l))))
, c_hw_fix_1_0_uns_undef((HWOffsetFix<1,0,UNSIGNED>()))
, c_hw_fix_17_0_uns_bits_3((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00014l))))
, c_hw_fix_17_0_uns_bits_4((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00002l))))
, c_hw_fix_16_0_uns_bits_1((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0014l))))
, c_hw_bit_32_bits((HWRawBits<32>(varint_u<32>(0x00000000l))))
, c_hw_fix_32_0_uns_bits_1((HWOffsetFix<32,0,UNSIGNED>(varint_u<32>(0x000004b0l))))
, c_hw_fix_32_0_uns_bits_2((HWOffsetFix<32,0,UNSIGNED>(varint_u<32>(0x000294f0l))))
, c_hw_fix_1_0_uns_bits_1((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x0l))))
, c_hw_bit_32_undef((HWRawBits<32>()))
, c_hw_fix_32_n24_sgn_undef((HWOffsetFix<32,-24,TWOSCOMPLEMENT>()))
, c_hw_fix_49_0_uns_bits((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x1000000000000l))))
, c_hw_fix_49_0_uns_bits_1((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000000l))))
, c_hw_fix_49_0_uns_bits_2((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000001l))))
{
  { // Node ID: 10021 (NodeConstantRawBits)
    id10021out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 10020 (NodeConstantRawBits)
    id10020out_value = (c_hw_fix_33_0_uns_bits);
  }
  { // Node ID: 10019 (NodeConstantRawBits)
    id10019out_value = (c_hw_fix_32_0_uns_bits);
  }
  { // Node ID: 10018 (NodeConstantRawBits)
    id10018out_value = (c_hw_fix_17_0_uns_bits);
  }
  { // Node ID: 10017 (NodeConstantRawBits)
    id10017out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 10016 (NodeConstantRawBits)
    id10016out_value = (c_hw_fix_17_0_uns_bits_3);
  }
  { // Node ID: 10015 (NodeConstantRawBits)
    id10015out_value = (c_hw_fix_17_0_uns_bits_4);
  }
  { // Node ID: 10014 (NodeConstantRawBits)
    id10014out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 10013 (NodeConstantRawBits)
    id10013out_value = (c_hw_fix_16_0_uns_bits_1);
  }
  { // Node ID: 10012 (NodeConstantRawBits)
    id10012out_value = (c_hw_fix_32_0_uns_bits);
  }
  { // Node ID: 3697 (NodeInputMappedReg)
    registerMappedRegister("io_y01_force_disabled", Data(1));
  }
  { // Node ID: 7537 (NodeConstantRawBits)
    id7537out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7539 (NodeConstantRawBits)
    id7539out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7541 (NodeConstantRawBits)
    id7541out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7543 (NodeConstantRawBits)
    id7543out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7545 (NodeConstantRawBits)
    id7545out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7547 (NodeConstantRawBits)
    id7547out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7549 (NodeConstantRawBits)
    id7549out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7551 (NodeConstantRawBits)
    id7551out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7553 (NodeConstantRawBits)
    id7553out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7555 (NodeConstantRawBits)
    id7555out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7557 (NodeConstantRawBits)
    id7557out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7559 (NodeConstantRawBits)
    id7559out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7561 (NodeConstantRawBits)
    id7561out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7563 (NodeConstantRawBits)
    id7563out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7565 (NodeConstantRawBits)
    id7565out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 10011 (NodeConstantRawBits)
    id10011out_value = (c_hw_fix_32_0_uns_bits_1);
  }
  { // Node ID: 10010 (NodeConstantRawBits)
    id10010out_value = (c_hw_fix_32_0_uns_bits_2);
  }
  { // Node ID: 10009 (NodeConstantRawBits)
    id10009out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 10008 (NodeConstantRawBits)
    id10008out_value = (c_hw_fix_16_0_uns_bits_1);
  }
  { // Node ID: 10007 (NodeConstantRawBits)
    id10007out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 36 (NodeInputMappedReg)
    registerMappedRegister("io_x01_force_disabled", Data(1));
  }
  { // Node ID: 39 (NodeInput)
     m_x01 =  registerInput("x01",0,5);
  }
  { // Node ID: 3700 (NodeOutput)
    m_y01 = registerOutput("y01",0 );
  }
  { // Node ID: 7441 (NodeInputMappedReg)
    registerMappedRegister("io_y11_force_disabled", Data(1));
  }
  { // Node ID: 7567 (NodeConstantRawBits)
    id7567out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7569 (NodeConstantRawBits)
    id7569out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7571 (NodeConstantRawBits)
    id7571out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7573 (NodeConstantRawBits)
    id7573out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7575 (NodeConstantRawBits)
    id7575out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7577 (NodeConstantRawBits)
    id7577out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7579 (NodeConstantRawBits)
    id7579out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7581 (NodeConstantRawBits)
    id7581out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7583 (NodeConstantRawBits)
    id7583out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7585 (NodeConstantRawBits)
    id7585out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7587 (NodeConstantRawBits)
    id7587out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7589 (NodeConstantRawBits)
    id7589out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7591 (NodeConstantRawBits)
    id7591out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7593 (NodeConstantRawBits)
    id7593out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 7595 (NodeConstantRawBits)
    id7595out_value = (c_hw_bit_32_bits);
  }
  { // Node ID: 3780 (NodeInputMappedReg)
    registerMappedRegister("io_x11_force_disabled", Data(1));
  }
  { // Node ID: 3783 (NodeInput)
     m_x11 =  registerInput("x11",1,5);
  }
  { // Node ID: 7444 (NodeOutput)
    m_y11 = registerOutput("y11",1 );
  }
  { // Node ID: 7528 (NodeConstantRawBits)
    id7528out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 10006 (NodeConstantRawBits)
    id10006out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 7525 (NodeConstantRawBits)
    id7525out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 7529 (NodeOutputMappedReg)
    registerMappedRegister("current_run_cycle_count", Data(48), true);
  }
  { // Node ID: 10005 (NodeConstantRawBits)
    id10005out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 7531 (NodeConstantRawBits)
    id7531out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 7534 (NodeInputMappedReg)
    registerMappedRegister("run_cycle_count", Data(48));
  }
}

void sliding_window10::resetComputation() {
  resetComputationAfterFlush();
}

void sliding_window10::resetComputationAfterFlush() {
  { // Node ID: 2 (NodeCounterV1)

    (id2st_count) = (c_hw_fix_33_0_uns_bits_1);
  }
  { // Node ID: 6 (NodeCounterV1)

    (id6st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 7597 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id7597out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 7596 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id7596out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 8 (NodeCounterV1)

    (id8st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 10 (NodeCounterV1)

    (id10st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 7598 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id7598out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 7599 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id7599out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 7600 (NodeFIFO)

    for(int i=0; i<13; i++)
    {
      id7600out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 3697 (NodeInputMappedReg)
    id3697out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 7603 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id7603out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 7601 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id7601out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 7602 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id7602out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 7604 (NodeFIFO)

    for(int i=0; i<12; i++)
    {
      id7604out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 36 (NodeInputMappedReg)
    id36out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 39 (NodeInput)

    (id39st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id39st_last_read_value) = (c_hw_bit_32_undef);
  }
  { // Node ID: 7441 (NodeInputMappedReg)
    id7441out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 3780 (NodeInputMappedReg)
    id3780out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 3783 (NodeInput)

    (id3783st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id3783st_last_read_value) = (c_hw_bit_32_undef);
  }
  { // Node ID: 7526 (NodeCounterV1)

    (id7526st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 7532 (NodeCounterV1)

    (id7532st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 7534 (NodeInputMappedReg)
    id7534out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void sliding_window10::updateState() {
  { // Node ID: 3697 (NodeInputMappedReg)
    id3697out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 36 (NodeInputMappedReg)
    id36out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 7441 (NodeInputMappedReg)
    id7441out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 3780 (NodeInputMappedReg)
    id3780out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 7534 (NodeInputMappedReg)
    id7534out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void sliding_window10::preExecute() {
  { // Node ID: 39 (NodeInput)
    if(((needsToReadInput(m_x01))&(((getFlushLevel())<((6l)+(5)))|(!(isFlushingActive()))))) {
      (id39st_last_read_value) = (readInput<HWRawBits<32> >(m_x01));
    }
    id39out_data = (id39st_last_read_value);
  }
  { // Node ID: 3783 (NodeInput)
    if(((needsToReadInput(m_x11))&(((getFlushLevel())<((6l)+(5)))|(!(isFlushingActive()))))) {
      (id3783st_last_read_value) = (readInput<HWRawBits<32> >(m_x11));
    }
    id3783out_data = (id3783st_last_read_value);
  }
}

void sliding_window10::runComputationCycle() {
  if (m_mappedElementsChanged) {
    m_mappedElementsChanged = false;
    updateState();
    std::cout << "sliding_window10: Mapped Elements Changed: Reloaded" << std::endl;
  }
  preExecute();
  sliding_window10Block1Vars blk1 = execute0();
  sliding_window10Block2Vars blk2 = execute1(blk1);
  sliding_window10Block3Vars blk3 = execute2(blk2);
  sliding_window10Block4Vars blk4 = execute3(blk3);
  sliding_window10Block5Vars blk5 = execute4(blk4);
  sliding_window10Block6Vars blk6 = execute5(blk5);
  sliding_window10Block7Vars blk7 = execute6(blk6);
  sliding_window10Block8Vars blk8 = execute7(blk7);
  sliding_window10Block9Vars blk9 = execute8(blk8);
  sliding_window10Block10Vars blk10 = execute9(blk9);
  sliding_window10Block11Vars blk11 = execute10(blk10);
  sliding_window10Block12Vars blk12 = execute11(blk11);
  sliding_window10Block13Vars blk13 = execute12(blk12);
  sliding_window10Block14Vars blk14 = execute13(blk13);
  execute14(blk14);
}

int sliding_window10::getFlushLevelStart() {
  return ((1l)+(3l));
}

}
