#include "stdsimheader.h"
#include "sliding_window00.h"

namespace maxcompilersim {

sliding_window00::sliding_window00(const std::string &instance_name) : 
  ManagerBlockSync(instance_name),
  KernelManagerBlockSync(instance_name, 18, 2, 0, 0, "",1)
, c_hw_fix_1_0_uns_bits((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x1l))))
, c_hw_fix_33_0_uns_bits((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000cccl))))
, c_hw_fix_33_0_uns_bits_1((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000000l))))
, c_hw_fix_33_0_uns_bits_2((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000001l))))
, c_hw_fix_32_0_uns_bits((HWOffsetFix<32,0,UNSIGNED>(varint_u<32>(0x0000008bl))))
, c_hw_fix_17_0_uns_bits((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00001l))))
, c_hw_fix_17_0_uns_bits_1((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00000l))))
, c_hw_fix_16_0_uns_bits((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0000l))))
, c_hw_fix_17_0_uns_bits_2((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00004l))))
, c_hw_fix_16_0_uns_bits_1((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0001l))))
, c_hw_fix_1_0_uns_undef((HWOffsetFix<1,0,UNSIGNED>()))
, c_hw_fix_32_0_uns_bits_1((HWOffsetFix<32,0,UNSIGNED>(varint_u<32>(0x0000008cl))))
, c_hw_fix_32_0_uns_bits_2((HWOffsetFix<32,0,UNSIGNED>(varint_u<32>(0x00000a9cl))))
, c_hw_fix_1_0_uns_bits_1((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x0l))))
, c_hw_bit_32_undef((HWRawBits<32>()))
, c_hw_fix_32_n24_sgn_undef((HWOffsetFix<32,-24,TWOSCOMPLEMENT>()))
, c_hw_fix_49_0_uns_bits((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x1000000000000l))))
, c_hw_fix_49_0_uns_bits_1((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000000l))))
, c_hw_fix_49_0_uns_bits_2((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000001l))))
{
  { // Node ID: 1360 (NodeConstantRawBits)
    id1360out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 1359 (NodeConstantRawBits)
    id1359out_value = (c_hw_fix_33_0_uns_bits);
  }
  { // Node ID: 1358 (NodeConstantRawBits)
    id1358out_value = (c_hw_fix_32_0_uns_bits);
  }
  { // Node ID: 1357 (NodeConstantRawBits)
    id1357out_value = (c_hw_fix_17_0_uns_bits);
  }
  { // Node ID: 1356 (NodeConstantRawBits)
    id1356out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 1355 (NodeConstantRawBits)
    id1355out_value = (c_hw_fix_17_0_uns_bits_2);
  }
  { // Node ID: 1354 (NodeConstantRawBits)
    id1354out_value = (c_hw_fix_17_0_uns_bits);
  }
  { // Node ID: 1353 (NodeConstantRawBits)
    id1353out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 1352 (NodeConstantRawBits)
    id1352out_value = (c_hw_fix_16_0_uns_bits_1);
  }
  { // Node ID: 1351 (NodeConstantRawBits)
    id1351out_value = (c_hw_fix_32_0_uns_bits);
  }
  { // Node ID: 487 (NodeInputMappedReg)
    registerMappedRegister("io_y01_force_disabled", Data(1));
  }
  { // Node ID: 1350 (NodeConstantRawBits)
    id1350out_value = (c_hw_fix_32_0_uns_bits_1);
  }
  { // Node ID: 1349 (NodeConstantRawBits)
    id1349out_value = (c_hw_fix_32_0_uns_bits_2);
  }
  { // Node ID: 1348 (NodeConstantRawBits)
    id1348out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 1347 (NodeConstantRawBits)
    id1347out_value = (c_hw_fix_16_0_uns_bits_1);
  }
  { // Node ID: 1346 (NodeConstantRawBits)
    id1346out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 36 (NodeInputMappedReg)
    registerMappedRegister("io_x01_force_disabled", Data(1));
  }
  { // Node ID: 39 (NodeInput)
     m_x01 =  registerInput("x01",0,5);
  }
  { // Node ID: 490 (NodeOutput)
    m_y01 = registerOutput("y01",0 );
  }
  { // Node ID: 991 (NodeInputMappedReg)
    registerMappedRegister("io_y11_force_disabled", Data(1));
  }
  { // Node ID: 540 (NodeInputMappedReg)
    registerMappedRegister("io_x11_force_disabled", Data(1));
  }
  { // Node ID: 543 (NodeInput)
     m_x11 =  registerInput("x11",1,5);
  }
  { // Node ID: 994 (NodeOutput)
    m_y11 = registerOutput("y11",1 );
  }
  { // Node ID: 1048 (NodeConstantRawBits)
    id1048out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 1345 (NodeConstantRawBits)
    id1345out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 1045 (NodeConstantRawBits)
    id1045out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 1049 (NodeOutputMappedReg)
    registerMappedRegister("current_run_cycle_count", Data(48), true);
  }
  { // Node ID: 1344 (NodeConstantRawBits)
    id1344out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 1051 (NodeConstantRawBits)
    id1051out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 1054 (NodeInputMappedReg)
    registerMappedRegister("run_cycle_count", Data(48));
  }
}

void sliding_window00::resetComputation() {
  resetComputationAfterFlush();
}

void sliding_window00::resetComputationAfterFlush() {
  { // Node ID: 2 (NodeCounterV1)

    (id2st_count) = (c_hw_fix_33_0_uns_bits_1);
  }
  { // Node ID: 6 (NodeCounterV1)

    (id6st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 8 (NodeCounterV1)

    (id8st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 10 (NodeCounterV1)

    (id10st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 1056 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1056out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1057 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id1057out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1058 (NodeFIFO)

    for(int i=0; i<14; i++)
    {
      id1058out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 487 (NodeInputMappedReg)
    id487out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 1062 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id1062out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1059 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1059out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1060 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1060out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1061 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id1061out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1063 (NodeFIFO)

    for(int i=0; i<12; i++)
    {
      id1063out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 36 (NodeInputMappedReg)
    id36out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 39 (NodeInput)

    (id39st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id39st_last_read_value) = (c_hw_bit_32_undef);
  }
  { // Node ID: 991 (NodeInputMappedReg)
    id991out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 540 (NodeInputMappedReg)
    id540out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 543 (NodeInput)

    (id543st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id543st_last_read_value) = (c_hw_bit_32_undef);
  }
  { // Node ID: 1046 (NodeCounterV1)

    (id1046st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 1052 (NodeCounterV1)

    (id1052st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 1054 (NodeInputMappedReg)
    id1054out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void sliding_window00::updateState() {
  { // Node ID: 487 (NodeInputMappedReg)
    id487out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 36 (NodeInputMappedReg)
    id36out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 991 (NodeInputMappedReg)
    id991out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 540 (NodeInputMappedReg)
    id540out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 1054 (NodeInputMappedReg)
    id1054out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void sliding_window00::preExecute() {
  { // Node ID: 39 (NodeInput)
    if(((needsToReadInput(m_x01))&(((getFlushLevel())<((6l)+(5)))|(!(isFlushingActive()))))) {
      (id39st_last_read_value) = (readInput<HWRawBits<32> >(m_x01));
    }
    id39out_data = (id39st_last_read_value);
  }
  { // Node ID: 543 (NodeInput)
    if(((needsToReadInput(m_x11))&(((getFlushLevel())<((6l)+(5)))|(!(isFlushingActive()))))) {
      (id543st_last_read_value) = (readInput<HWRawBits<32> >(m_x11));
    }
    id543out_data = (id543st_last_read_value);
  }
}

void sliding_window00::runComputationCycle() {
  if (m_mappedElementsChanged) {
    m_mappedElementsChanged = false;
    updateState();
    std::cout << "sliding_window00: Mapped Elements Changed: Reloaded" << std::endl;
  }
  preExecute();
  sliding_window00Block1Vars blk1 = execute0();
  execute1(blk1);
  execute2();
}

int sliding_window00::getFlushLevelStart() {
  return ((1l)+(3l));
}

}
