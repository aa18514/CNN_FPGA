#include "stdsimheader.h"
#include "maxpooling00.h"

namespace maxcompilersim {

maxpooling00::maxpooling00(const std::string &instance_name) : 
  ManagerBlockSync(instance_name),
  KernelManagerBlockSync(instance_name, 130, 2, 0, 0, "",1)
, c_hw_fix_1_0_uns_bits((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x1l))))
, c_hw_fix_33_0_uns_bits((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000004l))))
, c_hw_fix_33_0_uns_bits_1((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000000l))))
, c_hw_fix_33_0_uns_bits_2((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000001l))))
, c_hw_fix_33_0_uns_bits_3((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x000000002l))))
, c_hw_fix_33_0_uns_bits_4((HWOffsetFix<33,0,UNSIGNED>(varint_u<33>(0x00000000el))))
, c_hw_fix_32_0_uns_bits((HWOffsetFix<32,0,UNSIGNED>(varint_u<32>(0x00000000l))))
, c_hw_fix_32_0_uns_bits_1((HWOffsetFix<32,0,UNSIGNED>(varint_u<32>(0x0000000dl))))
, c_hw_fix_1_0_uns_undef((HWOffsetFix<1,0,UNSIGNED>()))
, c_hw_fix_1_0_uns_bits_1((HWOffsetFix<1,0,UNSIGNED>(varint_u<1>(0x0l))))
, c_hw_bit_160_undef((HWRawBits<160>()))
, c_hw_fix_32_n24_sgn_undef((HWOffsetFix<32,-24,TWOSCOMPLEMENT>()))
, c_hw_fix_32_n24_sgn_bits((HWOffsetFix<32,-24,TWOSCOMPLEMENT>(varint_u<32>(0x00000000l))))
, c_hw_fix_49_0_uns_bits((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x1000000000000l))))
, c_hw_fix_49_0_uns_bits_1((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000000l))))
, c_hw_fix_49_0_uns_bits_2((HWOffsetFix<49,0,UNSIGNED>(varint_u<49>(0x0000000000001l))))
{
  { // Node ID: 519 (NodeConstantRawBits)
    id519out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 518 (NodeConstantRawBits)
    id518out_value = (c_hw_fix_33_0_uns_bits);
  }
  { // Node ID: 517 (NodeConstantRawBits)
    id517out_value = (c_hw_fix_33_0_uns_bits_3);
  }
  { // Node ID: 516 (NodeConstantRawBits)
    id516out_value = (c_hw_fix_33_0_uns_bits_4);
  }
  { // Node ID: 515 (NodeConstantRawBits)
    id515out_value = (c_hw_fix_33_0_uns_bits_3);
  }
  { // Node ID: 514 (NodeConstantRawBits)
    id514out_value = (c_hw_fix_33_0_uns_bits_4);
  }
  { // Node ID: 513 (NodeConstantRawBits)
    id513out_value = (c_hw_fix_32_0_uns_bits);
  }
  { // Node ID: 512 (NodeConstantRawBits)
    id512out_value = (c_hw_fix_32_0_uns_bits);
  }
  { // Node ID: 511 (NodeConstantRawBits)
    id511out_value = (c_hw_fix_32_0_uns_bits_1);
  }
  { // Node ID: 510 (NodeConstantRawBits)
    id510out_value = (c_hw_fix_32_0_uns_bits_1);
  }
  { // Node ID: 509 (NodeConstantRawBits)
    id509out_value = (c_hw_fix_32_0_uns_bits);
  }
  { // Node ID: 508 (NodeConstantRawBits)
    id508out_value = (c_hw_fix_32_0_uns_bits);
  }
  { // Node ID: 156 (NodeInputMappedReg)
    registerMappedRegister("io_y01_force_disabled", Data(1));
  }
  { // Node ID: 28 (NodeInputMappedReg)
    registerMappedRegister("io_x01_force_disabled", Data(1));
  }
  { // Node ID: 30 (NodeInput)
     m_x01 =  registerInput("x01",0,5);
  }
  { // Node ID: 507 (NodeConstantRawBits)
    id507out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 506 (NodeConstantRawBits)
    id506out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 505 (NodeConstantRawBits)
    id505out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 504 (NodeConstantRawBits)
    id504out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 503 (NodeConstantRawBits)
    id503out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 502 (NodeConstantRawBits)
    id502out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 501 (NodeConstantRawBits)
    id501out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 500 (NodeConstantRawBits)
    id500out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 499 (NodeConstantRawBits)
    id499out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 498 (NodeConstantRawBits)
    id498out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 159 (NodeOutput)
    m_y01 = registerOutput("y01",0 );
  }
  { // Node ID: 297 (NodeInputMappedReg)
    registerMappedRegister("io_y11_force_disabled", Data(1));
  }
  { // Node ID: 169 (NodeInputMappedReg)
    registerMappedRegister("io_x11_force_disabled", Data(1));
  }
  { // Node ID: 171 (NodeInput)
     m_x11 =  registerInput("x11",1,5);
  }
  { // Node ID: 497 (NodeConstantRawBits)
    id497out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 496 (NodeConstantRawBits)
    id496out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 495 (NodeConstantRawBits)
    id495out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 494 (NodeConstantRawBits)
    id494out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 493 (NodeConstantRawBits)
    id493out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 492 (NodeConstantRawBits)
    id492out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 491 (NodeConstantRawBits)
    id491out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 490 (NodeConstantRawBits)
    id490out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 489 (NodeConstantRawBits)
    id489out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 488 (NodeConstantRawBits)
    id488out_value = (c_hw_fix_32_n24_sgn_bits);
  }
  { // Node ID: 300 (NodeOutput)
    m_y11 = registerOutput("y11",1 );
  }
  { // Node ID: 314 (NodeConstantRawBits)
    id314out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 487 (NodeConstantRawBits)
    id487out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 311 (NodeConstantRawBits)
    id311out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 315 (NodeOutputMappedReg)
    registerMappedRegister("current_run_cycle_count", Data(48), true);
  }
  { // Node ID: 486 (NodeConstantRawBits)
    id486out_value = (c_hw_fix_1_0_uns_bits);
  }
  { // Node ID: 317 (NodeConstantRawBits)
    id317out_value = (c_hw_fix_49_0_uns_bits);
  }
  { // Node ID: 320 (NodeInputMappedReg)
    registerMappedRegister("run_cycle_count", Data(48));
  }
}

void maxpooling00::resetComputation() {
  resetComputationAfterFlush();
}

void maxpooling00::resetComputationAfterFlush() {
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
  { // Node ID: 322 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id322out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 323 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id323out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 324 (NodeFIFO)

    for(int i=0; i<4; i++)
    {
      id324out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 325 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id325out_output[i] = (c_hw_fix_1_0_uns_undef);
    }
  }
  { // Node ID: 156 (NodeInputMappedReg)
    id156out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 28 (NodeInputMappedReg)
    id28out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 30 (NodeInput)

    (id30st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id30st_last_read_value) = (c_hw_bit_160_undef);
  }
  { // Node ID: 326 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id326out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 328 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id328out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 456 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id456out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 330 (NodeFIFO)

    for(int i=0; i<106; i++)
    {
      id330out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 457 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id457out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 333 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id333out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 334 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id334out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 458 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id458out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 337 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id337out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 338 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id338out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 339 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id339out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 341 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id341out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 459 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id459out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 343 (NodeFIFO)

    for(int i=0; i<106; i++)
    {
      id343out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 460 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id460out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 346 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id346out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 347 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id347out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 461 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id461out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 350 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id350out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 351 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id351out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 352 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id352out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 354 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id354out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 462 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id462out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 356 (NodeFIFO)

    for(int i=0; i<106; i++)
    {
      id356out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 463 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id463out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 359 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id359out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 360 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id360out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 464 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id464out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 363 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id363out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 364 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id364out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 365 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id365out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 367 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id367out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 465 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id465out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 369 (NodeFIFO)

    for(int i=0; i<106; i++)
    {
      id369out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 466 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id466out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 372 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id372out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 373 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id373out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 467 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id467out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 376 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id376out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 377 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id377out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 378 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id378out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 380 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id380out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 468 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id468out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 382 (NodeFIFO)

    for(int i=0; i<106; i++)
    {
      id382out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 469 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id469out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 385 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id385out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 386 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id386out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 470 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id470out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 389 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id389out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 390 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id390out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 297 (NodeInputMappedReg)
    id297out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 169 (NodeInputMappedReg)
    id169out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 171 (NodeInput)

    (id171st_read_next_cycle) = (c_hw_fix_1_0_uns_bits_1);
    (id171st_last_read_value) = (c_hw_bit_160_undef);
  }
  { // Node ID: 391 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id391out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 393 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id393out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 471 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id471out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 395 (NodeFIFO)

    for(int i=0; i<106; i++)
    {
      id395out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 472 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id472out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 398 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id398out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 399 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id399out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 473 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id473out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 402 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id402out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 403 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id403out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 404 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id404out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 406 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id406out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 474 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id474out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 408 (NodeFIFO)

    for(int i=0; i<106; i++)
    {
      id408out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 475 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id475out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 411 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id411out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 412 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id412out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 476 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id476out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 415 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id415out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 416 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id416out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 417 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id417out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 419 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id419out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 477 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id477out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 421 (NodeFIFO)

    for(int i=0; i<106; i++)
    {
      id421out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 478 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id478out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 424 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id424out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 425 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id425out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 479 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id479out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 428 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id428out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 429 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id429out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 430 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id430out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 432 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id432out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 480 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id480out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 434 (NodeFIFO)

    for(int i=0; i<106; i++)
    {
      id434out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 481 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id481out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 437 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id437out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 438 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id438out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 482 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id482out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 441 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id441out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 442 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id442out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 443 (NodeFIFO)

    for(int i=0; i<5; i++)
    {
      id443out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 445 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id445out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 483 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id483out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 447 (NodeFIFO)

    for(int i=0; i<106; i++)
    {
      id447out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 484 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id484out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 450 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id450out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 451 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id451out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 485 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id485out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 454 (NodeFIFO)

    for(int i=0; i<3; i++)
    {
      id454out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 455 (NodeFIFO)

    for(int i=0; i<2; i++)
    {
      id455out_output[i] = (c_hw_fix_32_n24_sgn_undef);
    }
  }
  { // Node ID: 312 (NodeCounterV1)

    (id312st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 318 (NodeCounterV1)

    (id318st_count) = (c_hw_fix_49_0_uns_bits_1);
  }
  { // Node ID: 320 (NodeInputMappedReg)
    id320out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void maxpooling00::updateState() {
  { // Node ID: 156 (NodeInputMappedReg)
    id156out_io_y01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y01_force_disabled");
  }
  { // Node ID: 28 (NodeInputMappedReg)
    id28out_io_x01_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x01_force_disabled");
  }
  { // Node ID: 297 (NodeInputMappedReg)
    id297out_io_y11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_y11_force_disabled");
  }
  { // Node ID: 169 (NodeInputMappedReg)
    id169out_io_x11_force_disabled = getMappedRegValue<HWOffsetFix<1,0,UNSIGNED> >("io_x11_force_disabled");
  }
  { // Node ID: 320 (NodeInputMappedReg)
    id320out_run_cycle_count = getMappedRegValue<HWOffsetFix<48,0,UNSIGNED> >("run_cycle_count");
  }
}

void maxpooling00::preExecute() {
  { // Node ID: 30 (NodeInput)
    if(((needsToReadInput(m_x01))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id30st_last_read_value) = (readInput<HWRawBits<160> >(m_x01));
    }
    id30out_data = (id30st_last_read_value);
  }
  { // Node ID: 171 (NodeInput)
    if(((needsToReadInput(m_x11))&(((getFlushLevel())<((4l)+(5)))|(!(isFlushingActive()))))) {
      (id171st_last_read_value) = (readInput<HWRawBits<160> >(m_x11));
    }
    id171out_data = (id171st_last_read_value);
  }
}

void maxpooling00::runComputationCycle() {
  if (m_mappedElementsChanged) {
    m_mappedElementsChanged = false;
    updateState();
    std::cout << "maxpooling00: Mapped Elements Changed: Reloaded" << std::endl;
  }
  preExecute();
  execute0();
}

int maxpooling00::getFlushLevelStart() {
  return ((1l)+(3l));
}

}
