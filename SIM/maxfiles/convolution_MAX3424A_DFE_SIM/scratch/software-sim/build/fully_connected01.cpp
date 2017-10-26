#include "stdsimheader.h"
#include "fully_connected01.h"

namespace maxcompilersim {

fully_connected01::fully_connected01(const std::string &instance_name) : 
  ManagerBlockSync(instance_name),
  KernelManagerBlockSync(instance_name, 24, 2, 0, 0, "",1)
, c_hw_fix_1_0_uns_bits((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x1l))))
, c_hw_fix_17_0_uns_bits((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x001f4l))))
, c_hw_fix_17_0_uns_bits_1((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00000l))))
, c_hw_fix_17_0_uns_bits_2((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00001l))))
, c_hw_fix_1_0_uns_undef((HWOffsetFix<1,0,UNSIGNED>()))
, c_hw_fix_17_0_uns_bits_3((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00050l))))
, c_hw_fix_16_0_uns_bits((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x004fl))))
, c_hw_fix_16_0_uns_undef((HWOffsetFix<16,0,UNSIGNED>()))
, c_hw_fix_16_0_uns_bits_1((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0000l))))
, c_hw_fix_32_n24_sgn_undef((HWOffsetFix<32,-24,TWOSCOMPLEMENT>()))
, c_hw_fix_32_n24_sgn_bits((HWOffsetFix<32,-24,TWOSCOMPLEMENT>(varint_u<32>(0x00000000l))))
, c_hw_fix_1_0_uns_bits_1((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x0l))))
, c_hw_bit_320_undef((HWRawBits<320>()))
, c_hw_fix_49_0_uns_bits((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x1000000000000l))))
, c_hw_fix_49_0_uns_bits_1((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000000l))))
, c_hw_fix_49_0_uns_bits_2((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000001l))))
{
  { // Node ID: 287 (NodeConstantRawBits)
    id287out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 286 (NodeConstantRawBits)
    id286out_value = (c_hw_fix_17_0_uns_bits);
  }
  { // Node ID: 285 (NodeConstantRawBits)
    id285out_value = (c_hw_fix_17_0_uns_bits_3);
  }
  { // Node ID: 284 (NodeConstantRawBits)
    id284out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 134 (NodeInputMappedReg)
    registerMappedRegister("io_y01_force_disabled", Data(1));
  }
  { // Node ID: 283 (NodeConstantRawBits)
    id283out_value = (c_hw_fix_16_0_uns_bits_1);
  }
  { // Node ID: 282 (NodeConstantRawBits)
    id282out_value = (c_hw_fix_16_0_uns_bits_1);
  }
  { // Node ID: 197 (NodeConstantRawBits)
    id197out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 183 (NodeMappedRom)
    registerMappedMemory("mappedRom8", 32, 40000);
  }
  { // Node ID: 281 (NodeConstantRawBits)
    id281out_value = (c_hw_fix_16_0_uns_bits_1);
  }
  { // Node ID: 7 (NodeInputMappedReg)
    registerMappedRegister("io_x01_force_disabled", Data(1));
  }
  { // Node ID: 10 (NodeInput)
     m_x01 =  registerInput("x01",0,5);
  }
  { // Node ID: 184 (NodeMappedRom)
    registerMappedMemory("mappedRom9", 32, 40000);
  }
  { // Node ID: 175 (NodeMappedRom)
    registerMappedMemory("mappedRom0", 32, 40000);
  }
  { // Node ID: 176 (NodeMappedRom)
    registerMappedMemory("mappedRom1", 32, 40000);
  }
  { // Node ID: 177 (NodeMappedRom)
    registerMappedMemory("mappedRom2", 32, 40000);
  }
  { // Node ID: 178 (NodeMappedRom)
    registerMappedMemory("mappedRom3", 32, 40000);
  }
  { // Node ID: 179 (NodeMappedRom)
    registerMappedMemory("mappedRom4", 32, 40000);
  }
  { // Node ID: 180 (NodeMappedRom)
    registerMappedMemory("mappedRom5", 32, 40000);
  }
  { // Node ID: 181 (NodeMappedRom)
    registerMappedMemory("mappedRom6", 32, 40000);
  }
  { // Node ID: 182 (NodeMappedRom)
    registerMappedMemory("mappedRom7", 32, 40000);
  }
  { // Node ID: 174 (NodeMappedRom)
    registerMappedMemory("fully_connected_bias", 32, 500);
  }
  { // Node ID: 280 (NodeConstantRawBits)
    id280out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 279 (NodeConstantRawBits)
    id279out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 137 (NodeOutput)
    m_y01 = registerOutput("y01",0 );
  }
  { // Node ID: 170 (NodeInputMappedReg)
    registerMappedRegister("io_y11_force_disabled", Data(1));
  }
  { // Node ID: 198 (NodeConstantRawBits)
    id198out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 31 (NodeInputMappedReg)
    registerMappedRegister("io_x11_force_disabled", Data(1));
  }
  { // Node ID: 34 (NodeInput)
     m_x11 =  registerInput("x11",1,5);
  }
  { // Node ID: 278 (NodeConstantRawBits)
    id278out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 277 (NodeConstantRawBits)
    id277out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 173 (NodeOutput)
    m_y11 = registerOutput("y11",1 );
  }
  { // Node ID: 189 (NodeConstantRawBits)
    id189out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 276 (NodeConstantRawBits)
    id276out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 186 (NodeConstantRawBits)
    id186out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 190 (NodeOutputMappedReg)
    registerMappedRegister("current_run_cycle_count", Data(48), true);
  }
  { // Node ID: 275 (NodeConstantRawBits)
    id275out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 192 (NodeConstantRawBits)
    id192out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 195 (NodeInputMappedReg)
    registerMappedRegister("run_cycle_count", Data(48));
  }
}

void fully_connected01::resetComputation() {
  resetComputationAfterFlush();
}

void fully_connected01::resetComputationAfterFlush() {
  { // Node ID: 2 (NodeCounterV1)

    (id2st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 239 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id239out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 4 (NodeCounterV1)

    (id4st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 240 (NodeFIFO)

    for(int i=0; i<18; i++)
    {
      id240out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 134 (NodeInputMappedReg)
    id134out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 243 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id243out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 273 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id273out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 242 (NodeFIFO)

    for(int i=0; i<488; i++)
    {
      id242out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 264 (NodeFIFO)

    for(int i=0; i<12; i++)
    {
      id264out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 7 (NodeInputMappedReg)
    id7out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 10 (NodeInput)

    (id10st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id10st_last_read_value) = (c_hw_bit_320_undef);
  }
  { // Node ID: 263 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id263out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 274 (NodeFIFO)

    for(int i=0; i<14; i++)
    {
      id274out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 267 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id267out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 170 (NodeInputMappedReg)
    id170out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 269 (NodeFIFO)

    for(int i=0; i<488; i++)
    {
      id269out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 271 (NodeFIFO)

    for(int i=0; i<12; i++)
    {
      id271out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 31 (NodeInputMappedReg)
    id31out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 34 (NodeInput)

    (id34st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id34st_last_read_value) = (c_hw_bit_320_undef);
  }
  { // Node ID: 270 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id270out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 272 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id272out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 187 (NodeCounterV1)

    (id187st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 193 (NodeCounterV1)

    (id193st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 195 (NodeInputMappedReg)
    id195out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void fully_connected01::updateState() {
  { // Node ID: 134 (NodeInputMappedReg)
    id134out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 7 (NodeInputMappedReg)
    id7out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 170 (NodeInputMappedReg)
    id170out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 31 (NodeInputMappedReg)
    id31out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 195 (NodeInputMappedReg)
    id195out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void fully_connected01::preExecute() {
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

void fully_connected01::runComputationCycle() {
  if (m_mappedElementsChanged) {
    m_mappedElementsChanged = false;
    updateState();
    std::cout << "fully_connected01: Mapped Elements Changed: Reloaded" << std::endl;
  }
  preExecute();
  execute0();
}

int fully_connected01::getFlushLevelStart() {
  return ((1l)+(3l));
}

}
