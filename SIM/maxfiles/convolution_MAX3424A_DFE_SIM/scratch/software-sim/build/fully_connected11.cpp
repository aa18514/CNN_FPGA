#include "stdsimheader.h"
#include "fully_connected11.h"

namespace maxcompilersim {

fully_connected11::fully_connected11(const std::string &instance_name) : 
  ManagerBlockSync(instance_name),
  KernelManagerBlockSync(instance_name, 31, 2, 0, 0, "",1)
, c_hw_fix_1_0_uns_bits((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x1l))))
, c_hw_fix_17_0_uns_bits((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x0000al))))
, c_hw_fix_17_0_uns_bits_1((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00000l))))
, c_hw_fix_17_0_uns_bits_2((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00001l))))
, c_hw_fix_1_0_uns_undef((HWOffsetFix<1,0,UNSIGNED>()))
, c_hw_fix_17_0_uns_bits_3((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00032l))))
, c_hw_fix_16_0_uns_bits((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0030l))))
, c_hw_fix_16_0_uns_bits_1((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0031l))))
, c_hw_fix_16_0_uns_undef((HWOffsetFix<16,0,UNSIGNED>()))
, c_hw_fix_16_0_uns_bits_2((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0000l))))
, c_hw_fix_32_n24_sgn_bits((HWOffsetFix<32,-24,TWOSCOMPLEMENT>(varint_u<32>(0x00000000l))))
, c_hw_fix_32_n24_sgn_undef((HWOffsetFix<32,-24,TWOSCOMPLEMENT>()))
, c_hw_fix_1_0_uns_bits_1((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x0l))))
, c_hw_bit_320_undef((HWRawBits<320>()))
, c_hw_fix_4_0_uns_undef((HWOffsetFix<4,0,UNSIGNED>()))
, c_hw_flt_8_24_bits((HWFloat<8,24>(varint_u<32>(0x00000000l))))
, c_hw_flt_8_24_undef((HWFloat<8,24>()))
, c_hw_fix_49_0_uns_bits((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x1000000000000l))))
, c_hw_fix_49_0_uns_bits_1((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000000l))))
, c_hw_fix_49_0_uns_bits_2((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000001l))))
{
  { // Node ID: 323 (NodeConstantRawBits)
    id323out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 322 (NodeConstantRawBits)
    id322out_value = (c_hw_fix_17_0_uns_bits);
  }
  { // Node ID: 321 (NodeConstantRawBits)
    id321out_value = (c_hw_fix_17_0_uns_bits_3);
  }
  { // Node ID: 320 (NodeConstantRawBits)
    id320out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 319 (NodeConstantRawBits)
    id319out_value = (c_hw_fix_16_0_uns_bits_1);
  }
  { // Node ID: 137 (NodeInputMappedReg)
    registerMappedRegister("io_y01_force_disabled", Data(1));
  }
  { // Node ID: 318 (NodeConstantRawBits)
    id318out_value = (c_hw_fix_16_0_uns_bits_2);
  }
  { // Node ID: 317 (NodeConstantRawBits)
    id317out_value = (c_hw_fix_16_0_uns_bits_2);
  }
  { // Node ID: 200 (NodeConstantRawBits)
    id200out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 186 (NodeMappedRom)
    registerMappedMemory("mappedRom8", 32, 500);
  }
  { // Node ID: 316 (NodeConstantRawBits)
    id316out_value = (c_hw_fix_16_0_uns_bits_2);
  }
  { // Node ID: 7 (NodeInputMappedReg)
    registerMappedRegister("io_x01_force_disabled", Data(1));
  }
  { // Node ID: 10 (NodeInput)
     m_x01 =  registerInput("x01",0,5);
  }
  { // Node ID: 187 (NodeMappedRom)
    registerMappedMemory("mappedRom9", 32, 500);
  }
  { // Node ID: 178 (NodeMappedRom)
    registerMappedMemory("mappedRom0", 32, 500);
  }
  { // Node ID: 179 (NodeMappedRom)
    registerMappedMemory("mappedRom1", 32, 500);
  }
  { // Node ID: 180 (NodeMappedRom)
    registerMappedMemory("mappedRom2", 32, 500);
  }
  { // Node ID: 181 (NodeMappedRom)
    registerMappedMemory("mappedRom3", 32, 500);
  }
  { // Node ID: 182 (NodeMappedRom)
    registerMappedMemory("mappedRom4", 32, 500);
  }
  { // Node ID: 183 (NodeMappedRom)
    registerMappedMemory("mappedRom5", 32, 500);
  }
  { // Node ID: 184 (NodeMappedRom)
    registerMappedMemory("mappedRom6", 32, 500);
  }
  { // Node ID: 185 (NodeMappedRom)
    registerMappedMemory("mappedRom7", 32, 500);
  }
  { // Node ID: 177 (NodeMappedRom)
    registerMappedMemory("fully_connected_bias", 32, 10);
  }
  { // Node ID: 315 (NodeConstantRawBits)
    id315out_value = (c_hw_flt_8_24_bits);
  }
  { // Node ID: 314 (NodeConstantRawBits)
    id314out_value = (c_hw_flt_8_24_bits);
  }
  { // Node ID: 140 (NodeOutput)
    m_y01 = registerOutput("y01",0 );
  }
  { // Node ID: 173 (NodeInputMappedReg)
    registerMappedRegister("io_y11_force_disabled", Data(1));
  }
  { // Node ID: 201 (NodeConstantRawBits)
    id201out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 31 (NodeInputMappedReg)
    registerMappedRegister("io_x11_force_disabled", Data(1));
  }
  { // Node ID: 34 (NodeInput)
     m_x11 =  registerInput("x11",1,5);
  }
  { // Node ID: 313 (NodeConstantRawBits)
    id313out_value = (c_hw_flt_8_24_bits);
  }
  { // Node ID: 312 (NodeConstantRawBits)
    id312out_value = (c_hw_flt_8_24_bits);
  }
  { // Node ID: 176 (NodeOutput)
    m_y11 = registerOutput("y11",1 );
  }
  { // Node ID: 192 (NodeConstantRawBits)
    id192out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 311 (NodeConstantRawBits)
    id311out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 189 (NodeConstantRawBits)
    id189out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 193 (NodeOutputMappedReg)
    registerMappedRegister("current_run_cycle_count", Data(48), true);
  }
  { // Node ID: 310 (NodeConstantRawBits)
    id310out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 195 (NodeConstantRawBits)
    id195out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 198 (NodeInputMappedReg)
    registerMappedRegister("run_cycle_count", Data(48));
  }
}

void fully_connected11::resetComputation() {
  resetComputationAfterFlush();
}

void fully_connected11::resetComputationAfterFlush() {
  { // Node ID: 2 (NodeCounterV1)

    (id2st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 262 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id262out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 4 (NodeCounterV1)

    (id4st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 263 (NodeFIFO)

    for(int i=0; i<24; i++)
    {
      id263out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 137 (NodeInputMappedReg)
    id137out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 267 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id267out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 309 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id309out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 265 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id265out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 266 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id266out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 298 (NodeFIFO)

    for(int i=0; i<9; i++)
    {
      id298out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 7 (NodeInputMappedReg)
    id7out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 10 (NodeInput)

    (id10st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id10st_last_read_value) = (c_hw_bit_320_undef);
  }
  { // Node ID: 297 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id297out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 301 (NodeFIFO)

    for(int i=0; i<15; i++)
    {
      id301out_output[i] = (c_hw_fix_4_0_uns_undef);
    }
  }
  { // Node ID: 302 (NodeFIFO)

    for(int i=0; i<15; i++)
    {
      id302out_output[i] = (c_hw_fix_4_0_uns_undef);
    }
  }
  { // Node ID: 303 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id303out_output[i] = (c_hw_flt_8_24_undef);
    }
  }
  { // Node ID: 173 (NodeInputMappedReg)
    id173out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 307 (NodeFIFO)

    for(int i=0; i<9; i++)
    {
      id307out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 31 (NodeInputMappedReg)
    id31out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 34 (NodeInput)

    (id34st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id34st_last_read_value) = (c_hw_bit_320_undef);
  }
  { // Node ID: 306 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id306out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 308 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id308out_output[i] = (c_hw_flt_8_24_undef);
    }
  }
  { // Node ID: 190 (NodeCounterV1)

    (id190st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 196 (NodeCounterV1)

    (id196st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 198 (NodeInputMappedReg)
    id198out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void fully_connected11::updateState() {
  { // Node ID: 137 (NodeInputMappedReg)
    id137out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 7 (NodeInputMappedReg)
    id7out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 173 (NodeInputMappedReg)
    id173out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 31 (NodeInputMappedReg)
    id31out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 198 (NodeInputMappedReg)
    id198out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void fully_connected11::preExecute() {
  { // Node ID: 10 (NodeInput)
    if(((needsToReadInput(m_x01))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id10st_last_read_value) = (readInput<HWRawBits<320> >(m_x01));
    }
    id10out_data = (id10st_last_read_value);
  }
  { // Node ID: 34 (NodeInput)
    if(((needsToReadInput(m_x11))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id34st_last_read_value) = (readInput<HWRawBits<320> >(m_x11));
    }
    id34out_data = (id34st_last_read_value);
  }
}

void fully_connected11::runComputationCycle() {
  if (m_mappedElementsChanged) {
    m_mappedElementsChanged = false;
    updateState();
    std::cout << "fully_connected11: Mapped Elements Changed: Reloaded" << std::endl;
  }
  preExecute();
  execute0();
}

int fully_connected11::getFlushLevelStart() {
  return ((1l)+(3l));
}

}
