#include "stdsimheader.h"
#include "convolutionKernel00.h"

namespace maxcompilersim {

convolutionKernel00::convolutionKernel00(const std::string &instance_name) : 
  ManagerBlockSync(instance_name),
  KernelManagerBlockSync(instance_name, 25, 2, 0, 0, "",1)
, c_hw_fix_1_0_uns_bits((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x1l))))
, c_hw_fix_17_0_uns_bits((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00001l))))
, c_hw_fix_17_0_uns_bits_1((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00000l))))
, c_hw_fix_17_0_uns_bits_2((HWOffsetFix<17,0,UNSIGNED>(varint_u<17>(0x00004l))))
, c_hw_fix_16_0_uns_undef((HWOffsetFix<16,0,UNSIGNED>()))
, c_hw_fix_16_0_uns_bits((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0000l))))
, c_hw_fix_1_0_uns_undef((HWOffsetFix<1,0,UNSIGNED>()))
, c_hw_fix_2_0_uns_undef((HWOffsetFix<2,0,UNSIGNED>()))
, c_hw_fix_64_0_sgn_undef((HWOffsetFix<64,0,TWOSCOMPLEMENT>()))
, c_hw_fix_16_0_uns_bits_1((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0001l))))
, c_hw_fix_1_0_uns_bits_1((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x0l))))
, c_hw_bit_800_undef((HWRawBits<800>()))
, c_hw_bit_32_undef((HWRawBits<32>()))
, c_hw_fix_32_n24_sgn_undef((HWOffsetFix<32,-24,TWOSCOMPLEMENT>()))
, c_hw_fix_16_0_uns_bits_2((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0004l))))
, c_hw_fix_16_0_uns_bits_3((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0003l))))
, c_hw_fix_16_0_uns_bits_4((HWOffsetFix<16,0,UNSIGNED>(varint_u<16>(0x0002l))))
, c_hw_fix_5_0_uns_undef((HWOffsetFix<5,0,UNSIGNED>()))
, c_hw_fix_49_0_uns_bits((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x1000000000000l))))
, c_hw_fix_49_0_uns_bits_1((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000000l))))
, c_hw_fix_49_0_uns_bits_2((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000001l))))
{
  { // Node ID: 1832 (NodeConstantRawBits)
    id1832out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 1831 (NodeConstantRawBits)
    id1831out_value = (c_hw_fix_17_0_uns_bits);
  }
  { // Node ID: 1830 (NodeConstantRawBits)
    id1830out_value = (c_hw_fix_17_0_uns_bits_2);
  }
  { // Node ID: 1829 (NodeConstantRawBits)
    id1829out_value = (c_hw_fix_17_0_uns_bits);
  }
  { // Node ID: 1828 (NodeConstantRawBits)
    id1828out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 1827 (NodeConstantRawBits)
    id1827out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 1826 (NodeConstantRawBits)
    id1826out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 1404 (NodeInputMappedReg)
    registerMappedRegister("io_y01_force_disabled", Data(1));
  }
  { // Node ID: 1469 (NodeMappedRom)
    registerMappedMemory("mappedRom34", 64, 4);
  }
  { // Node ID: 1825 (NodeConstantRawBits)
    id1825out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 1824 (NodeConstantRawBits)
    id1824out_value = (c_hw_fix_16_0_uns_bits_1);
  }
  { // Node ID: 1823 (NodeConstantRawBits)
    id1823out_value = (c_hw_fix_16_0_uns_bits);
  }
  { // Node ID: 15 (NodeInputMappedReg)
    registerMappedRegister("io_x01_force_disabled", Data(1));
  }
  { // Node ID: 18 (NodeInput)
     m_x01 =  registerInput("x01",0,5);
  }
  { // Node ID: 1467 (NodeMappedRom)
    registerMappedMemory("mappedRom32", 64, 4);
  }
  { // Node ID: 1468 (NodeMappedRom)
    registerMappedMemory("mappedRom33", 64, 4);
  }
  { // Node ID: 1463 (NodeMappedRom)
    registerMappedMemory("mappedRom28", 64, 4);
  }
  { // Node ID: 1464 (NodeMappedRom)
    registerMappedMemory("mappedRom29", 64, 4);
  }
  { // Node ID: 1465 (NodeMappedRom)
    registerMappedMemory("mappedRom30", 64, 4);
  }
  { // Node ID: 1466 (NodeMappedRom)
    registerMappedMemory("mappedRom31", 64, 4);
  }
  { // Node ID: 1822 (NodeConstantRawBits)
    id1822out_value = (c_hw_fix_16_0_uns_bits_2);
  }
  { // Node ID: 1821 (NodeConstantRawBits)
    id1821out_value = (c_hw_fix_16_0_uns_bits_2);
  }
  { // Node ID: 1434 (NodeMappedRom)
    registerMappedMemory("replicated_mem_4_bias", 32, 20);
  }
  { // Node ID: 1462 (NodeMappedRom)
    registerMappedMemory("mappedRom27", 64, 4);
  }
  { // Node ID: 1460 (NodeMappedRom)
    registerMappedMemory("mappedRom25", 64, 4);
  }
  { // Node ID: 1461 (NodeMappedRom)
    registerMappedMemory("mappedRom26", 64, 4);
  }
  { // Node ID: 1456 (NodeMappedRom)
    registerMappedMemory("mappedRom21", 64, 4);
  }
  { // Node ID: 1457 (NodeMappedRom)
    registerMappedMemory("mappedRom22", 64, 4);
  }
  { // Node ID: 1458 (NodeMappedRom)
    registerMappedMemory("mappedRom23", 64, 4);
  }
  { // Node ID: 1459 (NodeMappedRom)
    registerMappedMemory("mappedRom24", 64, 4);
  }
  { // Node ID: 1820 (NodeConstantRawBits)
    id1820out_value = (c_hw_fix_16_0_uns_bits_3);
  }
  { // Node ID: 1819 (NodeConstantRawBits)
    id1819out_value = (c_hw_fix_16_0_uns_bits_3);
  }
  { // Node ID: 1433 (NodeMappedRom)
    registerMappedMemory("replicated_mem_3_bias", 32, 20);
  }
  { // Node ID: 1455 (NodeMappedRom)
    registerMappedMemory("mappedRom20", 64, 4);
  }
  { // Node ID: 1453 (NodeMappedRom)
    registerMappedMemory("mappedRom18", 64, 4);
  }
  { // Node ID: 1454 (NodeMappedRom)
    registerMappedMemory("mappedRom19", 64, 4);
  }
  { // Node ID: 1449 (NodeMappedRom)
    registerMappedMemory("mappedRom14", 64, 4);
  }
  { // Node ID: 1450 (NodeMappedRom)
    registerMappedMemory("mappedRom15", 64, 4);
  }
  { // Node ID: 1451 (NodeMappedRom)
    registerMappedMemory("mappedRom16", 64, 4);
  }
  { // Node ID: 1452 (NodeMappedRom)
    registerMappedMemory("mappedRom17", 64, 4);
  }
  { // Node ID: 1818 (NodeConstantRawBits)
    id1818out_value = (c_hw_fix_16_0_uns_bits_4);
  }
  { // Node ID: 1817 (NodeConstantRawBits)
    id1817out_value = (c_hw_fix_16_0_uns_bits_4);
  }
  { // Node ID: 1432 (NodeMappedRom)
    registerMappedMemory("replicated_mem_2_bias", 32, 20);
  }
  { // Node ID: 1448 (NodeMappedRom)
    registerMappedMemory("mappedRom13", 64, 4);
  }
  { // Node ID: 1446 (NodeMappedRom)
    registerMappedMemory("mappedRom11", 64, 4);
  }
  { // Node ID: 1447 (NodeMappedRom)
    registerMappedMemory("mappedRom12", 64, 4);
  }
  { // Node ID: 1442 (NodeMappedRom)
    registerMappedMemory("mappedRom7", 64, 4);
  }
  { // Node ID: 1443 (NodeMappedRom)
    registerMappedMemory("mappedRom8", 64, 4);
  }
  { // Node ID: 1444 (NodeMappedRom)
    registerMappedMemory("mappedRom9", 64, 4);
  }
  { // Node ID: 1445 (NodeMappedRom)
    registerMappedMemory("mappedRom10", 64, 4);
  }
  { // Node ID: 1816 (NodeConstantRawBits)
    id1816out_value = (c_hw_fix_16_0_uns_bits_1);
  }
  { // Node ID: 1815 (NodeConstantRawBits)
    id1815out_value = (c_hw_fix_16_0_uns_bits_1);
  }
  { // Node ID: 1431 (NodeMappedRom)
    registerMappedMemory("replicated_mem_1_bias", 32, 20);
  }
  { // Node ID: 1441 (NodeMappedRom)
    registerMappedMemory("mappedRom6", 64, 4);
  }
  { // Node ID: 1439 (NodeMappedRom)
    registerMappedMemory("mappedRom4", 64, 4);
  }
  { // Node ID: 1440 (NodeMappedRom)
    registerMappedMemory("mappedRom5", 64, 4);
  }
  { // Node ID: 1435 (NodeMappedRom)
    registerMappedMemory("mappedRom0", 64, 4);
  }
  { // Node ID: 1436 (NodeMappedRom)
    registerMappedMemory("mappedRom1", 64, 4);
  }
  { // Node ID: 1437 (NodeMappedRom)
    registerMappedMemory("mappedRom2", 64, 4);
  }
  { // Node ID: 1438 (NodeMappedRom)
    registerMappedMemory("mappedRom3", 64, 4);
  }
  { // Node ID: 1430 (NodeMappedRom)
    registerMappedMemory("replicated_mem_0_bias", 32, 20);
  }
  { // Node ID: 1407 (NodeOutput)
    m_y01 = registerOutput("y01",0 );
  }
  { // Node ID: 1417 (NodeInputMappedReg)
    registerMappedRegister("io_y11_force_disabled", Data(1));
  }
  { // Node ID: 69 (NodeInputMappedReg)
    registerMappedRegister("io_x11_force_disabled", Data(1));
  }
  { // Node ID: 72 (NodeInput)
     m_x11 =  registerInput("x11",1,5);
  }
  { // Node ID: 1420 (NodeOutput)
    m_y11 = registerOutput("y11",1 );
  }
  { // Node ID: 1474 (NodeConstantRawBits)
    id1474out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 1814 (NodeConstantRawBits)
    id1814out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 1471 (NodeConstantRawBits)
    id1471out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 1475 (NodeOutputMappedReg)
    registerMappedRegister("current_run_cycle_count", Data(48), true);
  }
  { // Node ID: 1813 (NodeConstantRawBits)
    id1813out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 1477 (NodeConstantRawBits)
    id1477out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 1480 (NodeInputMappedReg)
    registerMappedRegister("run_cycle_count", Data(48));
  }
}

void convolutionKernel00::resetComputation() {
  resetComputationAfterFlush();
}

void convolutionKernel00::resetComputationAfterFlush() {
  { // Node ID: 2 (NodeCounterV1)

    (id2st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 4 (NodeCounterV1)

    (id4st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 6 (NodeCounterV1)

    (id6st_count) = (c_hw_fix_17_0_uns_bits_1);
  }
  { // Node ID: 1712 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id1712out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 1713 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id1713out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 1723 (NodeFIFO)

    for(int i=0; i<16; i++)
    {
      id1723out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1812 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id1812out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 1404 (NodeInputMappedReg)
    id1404out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 1810 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1810out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 1718 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id1718out_output[i] = (c_hw_fix_2_0_uns_undef);
    }
  }
  { // Node ID: 1719 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1719out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 15 (NodeInputMappedReg)
    id15out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 18 (NodeInput)

    (id18st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id18st_last_read_value) = (c_hw_bit_800_undef);
  }
  { // Node ID: 1720 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id1720out_output[i] = (c_hw_bit_32_undef);
    }
  }
  { // Node ID: 1721 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1721out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1722 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id1722out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1724 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1724out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1811 (NodeFIFO)

    for(int i=0; i<14; i++)
    {
      id1811out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 1809 (NodeFIFO)

    for(int i=0; i<18; i++)
    {
      id1809out_output[i] = (c_hw_fix_16_0_uns_undef);
    }
  }
  { // Node ID: 1733 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id1733out_output[i] = (c_hw_fix_2_0_uns_undef);
    }
  }
  { // Node ID: 1734 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1734out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1735 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id1735out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1737 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1737out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1746 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id1746out_output[i] = (c_hw_fix_2_0_uns_undef);
    }
  }
  { // Node ID: 1747 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1747out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1748 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id1748out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1750 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1750out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1759 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id1759out_output[i] = (c_hw_fix_2_0_uns_undef);
    }
  }
  { // Node ID: 1760 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1760out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1761 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id1761out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1763 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1763out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1772 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id1772out_output[i] = (c_hw_fix_2_0_uns_undef);
    }
  }
  { // Node ID: 1773 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1773out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1774 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id1774out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1776 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1776out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1785 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1785out_output[i] = (c_hw_fix_5_0_uns_undef);
    }
  }
  { // Node ID: 1786 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1786out_output[i] = (c_hw_fix_5_0_uns_undef);
    }
  }
  { // Node ID: 1417 (NodeInputMappedReg)
    id1417out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 69 (NodeInputMappedReg)
    id69out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 72 (NodeInput)

    (id72st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id72st_last_read_value) = (c_hw_bit_800_undef);
  }
  { // Node ID: 1788 (NodeFIFO)

    for(int i=0; i<6; i++)
    {
      id1788out_output[i] = (c_hw_bit_32_undef);
    }
  }
  { // Node ID: 1789 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1789out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1790 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id1790out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1792 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1792out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1793 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1793out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1794 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id1794out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1796 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1796out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1797 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1797out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1798 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id1798out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1800 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1800out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1801 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1801out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1802 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id1802out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1804 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1804out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1805 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1805out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1806 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id1806out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1808 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id1808out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 1472 (NodeCounterV1)

    (id1472st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 1478 (NodeCounterV1)

    (id1478st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 1480 (NodeInputMappedReg)
    id1480out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void convolutionKernel00::updateState() {
  { // Node ID: 1404 (NodeInputMappedReg)
    id1404out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 15 (NodeInputMappedReg)
    id15out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 1417 (NodeInputMappedReg)
    id1417out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 69 (NodeInputMappedReg)
    id69out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 1480 (NodeInputMappedReg)
    id1480out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void convolutionKernel00::preExecute() {
  { // Node ID: 18 (NodeInput)
    if(((needsToReadInput(m_x01))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id18st_last_read_value) = (readInput<HWRawBits<800> >(m_x01));
    }
    id18out_data = (id18st_last_read_value);
  }
  { // Node ID: 72 (NodeInput)
    if(((needsToReadInput(m_x11))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id72st_last_read_value) = (readInput<HWRawBits<800> >(m_x11));
    }
    id72out_data = (id72st_last_read_value);
  }
}

void convolutionKernel00::runComputationCycle() {
  if (m_mappedElementsChanged) {
    m_mappedElementsChanged = false;
    updateState();
    std::cout << "convolutionKernel00: Mapped Elements Changed: Reloaded" << std::endl;
  }
  preExecute();
  convolutionKernel00Block1Vars blk1 = execute0();
  convolutionKernel00Block2Vars blk2 = execute1(blk1);
  execute2(blk2);
}

int convolutionKernel00::getFlushLevelStart() {
  return ((1l)+(3l));
}

}
