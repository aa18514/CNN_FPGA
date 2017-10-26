#include "stdsimheader.h"
#include "convolutionKernel10.h"

namespace maxcompilersim {

convolutionKernel10::convolutionKernel10(const std::string &instance_name) : 
  ManagerBlockSync(instance_name),
  KernelManagerBlockSync(instance_name, 25, 2, 0, 0, "",1)
, c_hw_fix_1_0_uns_bits((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x1l))))
, c_hw_fix_17_0_uns_bits((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00032l))))
, c_hw_fix_17_0_uns_bits_1((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00000l))))
, c_hw_fix_17_0_uns_bits_2((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00001l))))
, c_hw_fix_17_0_uns_bits_3((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00014l))))
, c_hw_fix_17_0_uns_bits_4((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00002l))))
, c_hw_fix_16_0_uns_bits((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0000l))))
, c_hw_fix_1_0_uns_undef((HWOffsetFix<1,0,UNSIGNED>()))
, c_hw_fix_16_0_uns_bits_1((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0013l))))
, c_hw_fix_16_0_uns_bits_2((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0001l))))
, c_hw_fix_16_0_uns_undef((HWOffsetFix<16,0,UNSIGNED>()))
, c_hw_fix_64_0_sgn_undef((HWOffsetFix<64,0,TWOSCOMPLEMENT>()))
, c_hw_fix_16_0_uns_bits_3((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0014l))))
, c_hw_fix_1_0_uns_bits_1((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x0l))))
, c_hw_bit_1280_undef((HWRawBits<1280>()))
, c_hw_fix_32_n24_sgn_undef((HWOffsetFix<32,-24,TWOSCOMPLEMENT>()))
, c_hw_fix_10_0_uns_undef((HWOffsetFix<10,0,UNSIGNED>()))
, c_hw_fix_49_0_uns_bits((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x1000000000000l))))
, c_hw_fix_49_0_uns_bits_1((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000000l))))
, c_hw_fix_49_0_uns_bits_2((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000001l))))
{
  { // Node ID: 678 (NodeConstantRawBits)
    id678out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 677 (NodeConstantRawBits)
    id677out_value = (c_hw_fix_17_0_uns_bits);
  }
  { // Node ID: 676 (NodeConstantRawBits)
    id676out_value = (c_hw_fix_17_0_uns_bits_3);
  }
  { // Node ID: 675 (NodeConstantRawBits)
    id675out_value = (c_hw_fix_17_0_uns_bits_4);
  }
  { // Node ID: 674 (NodeConstantRawBits)
    id674out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 673 (NodeConstantRawBits)
    id673out_value = (c_hw_fix_16_0_uns_bits_1);
  }
  { // Node ID: 672 (NodeConstantRawBits)
    id672out_value = (c_hw_fix_16_0_uns_bits_1);
  }
  { // Node ID: 528 (NodeInputMappedReg)
    registerMappedRegister("io_y01_force_disabled", Data(1));
  }
  { // Node ID: 671 (NodeConstantRawBits)
    id671out_value = (c_hw_fix_16_0_uns_bits_2);
  }
  { // Node ID: 543 (NodeMappedRom)
    registerMappedMemory("mappedRom4", 64, 2000);
  }
  { // Node ID: 670 (NodeConstantRawBits)
    id670out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 669 (NodeConstantRawBits)
    id669out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 668 (NodeConstantRawBits)
    id668out_value = (c_hw_fix_16_0_uns_bits_3);
  }
  { // Node ID: 667 (NodeConstantRawBits)
    id667out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 15 (NodeInputMappedReg)
    registerMappedRegister("io_x01_force_disabled", Data(1));
  }
  { // Node ID: 18 (NodeInput)
     m_x01 =  registerInput("x01",0,5);
  }
  { // Node ID: 539 (NodeMappedRom)
    registerMappedMemory("mappedRom0", 64, 2000);
  }
  { // Node ID: 540 (NodeMappedRom)
    registerMappedMemory("mappedRom1", 64, 2000);
  }
  { // Node ID: 541 (NodeMappedRom)
    registerMappedMemory("mappedRom2", 64, 2000);
  }
  { // Node ID: 542 (NodeMappedRom)
    registerMappedMemory("mappedRom3", 64, 2000);
  }
  { // Node ID: 538 (NodeMappedRom)
    registerMappedMemory("bias", 32, 1000);
  }
  { // Node ID: 531 (NodeOutput)
    m_y01 = registerOutput("y01",0 );
  }
  { // Node ID: 533 (NodeInputMappedReg)
    registerMappedRegister("io_y11_force_disabled", Data(1));
  }
  { // Node ID: 99 (NodeInputMappedReg)
    registerMappedRegister("io_x11_force_disabled", Data(1));
  }
  { // Node ID: 102 (NodeInput)
     m_x11 =  registerInput("x11",1,5);
  }
  { // Node ID: 536 (NodeOutput)
    m_y11 = registerOutput("y11",1 );
  }
  { // Node ID: 548 (NodeConstantRawBits)
    id548out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 666 (NodeConstantRawBits)
    id666out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 545 (NodeConstantRawBits)
    id545out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 549 (NodeOutputMappedReg)
    registerMappedRegister("current_run_cycle_count", Data(48), true);
  }
  { // Node ID: 665 (NodeConstantRawBits)
    id665out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 551 (NodeConstantRawBits)
    id551out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 554 (NodeInputMappedReg)
    registerMappedRegister("run_cycle_count", Data(48));
  }
}

void convolutionKernel10::resetComputation() {
  resetComputationAfterFlush();
}

void convolutionKernel10::resetComputationAfterFlush() {
  { // Node ID: 2 (NodeCounterV1)

    (id2st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 4 (NodeCounterV1)

    (id4st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 6 (NodeCounterV1)

    (id6st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 595 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id595out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 628 (NodeFIFO)

    for(int i=0; i<20; i++)
    {
      id628out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 664 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id664out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 528 (NodeInputMappedReg)
    id528out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 597 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id597out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 598 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id598out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 600 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id600out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 602 (NodeFIFO)

    for(int i=0; i<8; i++)
    {
      id602out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 15 (NodeInputMappedReg)
    id15out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 18 (NodeInput)

    (id18st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id18st_last_read_value) = (c_hw_bit_1280_undef);
  }
  { // Node ID: 626 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id626out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 627 (NodeFIFO)

    for(int i=0; i<99; i++)
    {
      id627out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 629 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id629out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 663 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id663out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 636 (NodeFIFO)

    for(int i=0; i<19; i++)
    {
      id636out_output[i] = (c_hw_fix_10_0_uns_undef);
    }
  }
  { // Node ID: 637 (NodeFIFO)

    for(int i=0; i<19; i++)
    {
      id637out_output[i] = (c_hw_fix_10_0_uns_undef);
    }
  }
  { // Node ID: 533 (NodeInputMappedReg)
    id533out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 99 (NodeInputMappedReg)
    id99out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 102 (NodeInput)

    (id102st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id102st_last_read_value) = (c_hw_bit_1280_undef);
  }
  { // Node ID: 659 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id659out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 660 (NodeFIFO)

    for(int i=0; i<99; i++)
    {
      id660out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 662 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id662out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 546 (NodeCounterV1)

    (id546st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 552 (NodeCounterV1)

    (id552st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 554 (NodeInputMappedReg)
    id554out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void convolutionKernel10::updateState() {
  { // Node ID: 528 (NodeInputMappedReg)
    id528out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 15 (NodeInputMappedReg)
    id15out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 533 (NodeInputMappedReg)
    id533out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 99 (NodeInputMappedReg)
    id99out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 554 (NodeInputMappedReg)
    id554out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void convolutionKernel10::preExecute() {
  { // Node ID: 18 (NodeInput)
    if(((needsToReadInput(m_x01))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id18st_last_read_value) = (readInput<HWRawBits<1280> >(m_x01));
    }
    id18out_data = (id18st_last_read_value);
  }
  { // Node ID: 102 (NodeInput)
    if(((needsToReadInput(m_x11))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id102st_last_read_value) = (readInput<HWRawBits<1280> >(m_x11));
    }
    id102out_data = (id102st_last_read_value);
  }
}

void convolutionKernel10::runComputationCycle() {
  if (m_mappedElementsChanged) {
    m_mappedElementsChanged = false;
    updateState();
    std::cout << "convolutionKernel10: Mapped Elements Changed: Reloaded" << std::endl;
  }
  preExecute();
  execute0();
}

int convolutionKernel10::getFlushLevelStart() {
  return ((1l)+(3l));
}

}
