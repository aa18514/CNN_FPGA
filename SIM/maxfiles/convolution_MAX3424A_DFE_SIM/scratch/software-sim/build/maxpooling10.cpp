#include "stdsimheader.h"
#include "maxpooling10.h"

namespace maxcompilersim {

maxpooling10::maxpooling10(const std::string &instance_name) : 
  ManagerBlockSync(instance_name),
  KernelManagerBlockSync(instance_name, 664, 2, 0, 0, "",1)
, c_hw_fix_1_0_uns_bits((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x1l))))
, c_hw_fix_33_0_uns_bits((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000032l))))
, c_hw_fix_33_0_uns_bits_1((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000000l))))
, c_hw_fix_33_0_uns_bits_2((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000001l))))
, c_hw_fix_33_0_uns_bits_3((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000002l))))
, c_hw_fix_33_0_uns_bits_4((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000006l))))
, c_hw_fix_32_0_uns_bits((HWOffsetFix<32,0,UNSIGNED>(varint_u<32>(0x00000000l))))
, c_hw_fix_32_0_uns_bits_1((HWOffsetFix<32,0,UNSIGNED>(varint_u<32>(0x00000005l))))
, c_hw_fix_1_0_uns_undef((HWOffsetFix<1,0,UNSIGNED>()))
, c_hw_fix_1_0_uns_bits_1((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x0l))))
, c_hw_bit_32_undef((HWRawBits<32>()))
, c_hw_fix_32_n24_sgn_undef((HWOffsetFix<32,-24,TWOSCOMPLEMENT>()))
, c_hw_fix_32_n24_sgn_bits((HWOffsetFix<32,-24,TWOSCOMPLEMENT>(varint_u<32>(0x00000000l))))
, c_hw_fix_49_0_uns_bits((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x1000000000000l))))
, c_hw_fix_49_0_uns_bits_1((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000000l))))
, c_hw_fix_49_0_uns_bits_2((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000001l))))
{
  { // Node ID: 159 (NodeConstantRawBits)
    id159out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 158 (NodeConstantRawBits)
    id158out_value = (c_hw_fix_33_0_uns_bits);
  }
  { // Node ID: 157 (NodeConstantRawBits)
    id157out_value = (c_hw_fix_33_0_uns_bits_3);
  }
  { // Node ID: 156 (NodeConstantRawBits)
    id156out_value = (c_hw_fix_33_0_uns_bits_4);
  }
  { // Node ID: 155 (NodeConstantRawBits)
    id155out_value = (c_hw_fix_33_0_uns_bits_3);
  }
  { // Node ID: 154 (NodeConstantRawBits)
    id154out_value = (c_hw_fix_33_0_uns_bits_4);
  }
  { // Node ID: 153 (NodeConstantRawBits)
    id153out_value = (c_hw_fix_32_0_uns_bits);
  }
  { // Node ID: 152 (NodeConstantRawBits)
    id152out_value = (c_hw_fix_32_0_uns_bits);
  }
  { // Node ID: 151 (NodeConstantRawBits)
    id151out_value = (c_hw_fix_32_0_uns_bits_1);
  }
  { // Node ID: 150 (NodeConstantRawBits)
    id150out_value = (c_hw_fix_32_0_uns_bits_1);
  }
  { // Node ID: 149 (NodeConstantRawBits)
    id149out_value = (c_hw_fix_32_0_uns_bits);
  }
  { // Node ID: 148 (NodeConstantRawBits)
    id148out_value = (c_hw_fix_32_0_uns_bits);
  }
  { // Node ID: 56 (NodeInputMappedReg)
    registerMappedRegister("io_y01_force_disabled", Data(1));
  }
  { // Node ID: 28 (NodeInputMappedReg)
    registerMappedRegister("io_x01_force_disabled", Data(1));
  }
  { // Node ID: 30 (NodeInput)
     m_x01 =  registerInput("x01",0,5);
  }
  { // Node ID: 147 (NodeConstantRawBits)
    id147out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 146 (NodeConstantRawBits)
    id146out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 59 (NodeOutput)
    m_y01 = registerOutput("y01",0 );
  }
  { // Node ID: 89 (NodeInputMappedReg)
    registerMappedRegister("io_y11_force_disabled", Data(1));
  }
  { // Node ID: 61 (NodeInputMappedReg)
    registerMappedRegister("io_x11_force_disabled", Data(1));
  }
  { // Node ID: 63 (NodeInput)
     m_x11 =  registerInput("x11",1,5);
  }
  { // Node ID: 145 (NodeConstantRawBits)
    id145out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 144 (NodeConstantRawBits)
    id144out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 92 (NodeOutput)
    m_y11 = registerOutput("y11",1 );
  }
  { // Node ID: 98 (NodeConstantRawBits)
    id98out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 143 (NodeConstantRawBits)
    id143out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 95 (NodeConstantRawBits)
    id95out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 99 (NodeOutputMappedReg)
    registerMappedRegister("current_run_cycle_count", Data(48), true);
  }
  { // Node ID: 142 (NodeConstantRawBits)
    id142out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 101 (NodeConstantRawBits)
    id101out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 104 (NodeInputMappedReg)
    registerMappedRegister("run_cycle_count", Data(48));
  }
}

void maxpooling10::resetComputation() {
  resetComputationAfterFlush();
}

void maxpooling10::resetComputationAfterFlush() {
  { // Node ID: 2 (NodeCounterV1)

    (id2st_count) = (c_hw_fix_33_0_uns_bits_1);
  }
  { // Node ID: 4 (NodeCounterV1)

    (id4st_count) = (c_hw_fix_33_0_uns_bits_1);
  }
  { // Node ID: 6 (NodeCounterV1)

    (id6st_count) = (c_hw_fix_33_0_uns_bits_1);
  }
  { // Node ID: 8 (NodeCounterV1)

    (id8st_count) = (c_hw_fix_33_0_uns_bits_1);
  }
  { // Node ID: 10 (NodeCounterV1)

    (id10st_count) = (c_hw_fix_33_0_uns_bits_1);
  }
  { // Node ID: 106 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id106out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 107 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id107out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 108 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id108out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 109 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id109out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 56 (NodeInputMappedReg)
    id56out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 28 (NodeInputMappedReg)
    id28out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 30 (NodeInput)

    (id30st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id30st_last_read_value) = (c_hw_bit_32_undef);
  }
  { // Node ID: 110 (NodeFIFO)

    for(int i=0; i<51; i++)
    {
      id110out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 112 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id112out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 136 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id136out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 114 (NodeFIFO)

    for(int i=0; i<548; i++)
    {
      id114out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 137 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id137out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 117 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id117out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 118 (NodeFIFO)

    for(int i=0; i<48; i++)
    {
      id118out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 138 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id138out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 121 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id121out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 122 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id122out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 89 (NodeInputMappedReg)
    id89out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 61 (NodeInputMappedReg)
    id61out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 63 (NodeInput)

    (id63st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id63st_last_read_value) = (c_hw_bit_32_undef);
  }
  { // Node ID: 123 (NodeFIFO)

    for(int i=0; i<51; i++)
    {
      id123out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 125 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id125out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 139 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id139out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 127 (NodeFIFO)

    for(int i=0; i<548; i++)
    {
      id127out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 140 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id140out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 130 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id130out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 131 (NodeFIFO)

    for(int i=0; i<48; i++)
    {
      id131out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 141 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id141out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 134 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id134out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 135 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id135out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 96 (NodeCounterV1)

    (id96st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 102 (NodeCounterV1)

    (id102st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 104 (NodeInputMappedReg)
    id104out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void maxpooling10::updateState() {
  { // Node ID: 56 (NodeInputMappedReg)
    id56out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 28 (NodeInputMappedReg)
    id28out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 89 (NodeInputMappedReg)
    id89out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 61 (NodeInputMappedReg)
    id61out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 104 (NodeInputMappedReg)
    id104out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void maxpooling10::preExecute() {
  { // Node ID: 30 (NodeInput)
    if(((needsToReadInput(m_x01))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id30st_last_read_value) = (readInput<HWRawBits<32> >(m_x01));
    }
    id30out_data = (id30st_last_read_value);
  }
  { // Node ID: 63 (NodeInput)
    if(((needsToReadInput(m_x11))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id63st_last_read_value) = (readInput<HWRawBits<32> >(m_x11));
    }
    id63out_data = (id63st_last_read_value);
  }
}

void maxpooling10::runComputationCycle() {
  if (m_mappedElementsChanged) {
    m_mappedElementsChanged = false;
    updateState();
    std::cout << "maxpooling10: Mapped Elements Changed: Reloaded" << std::endl;
  }
  preExecute();
  execute0();
}

int maxpooling10::getFlushLevelStart() {
  return ((1l)+(3l));
}

}
