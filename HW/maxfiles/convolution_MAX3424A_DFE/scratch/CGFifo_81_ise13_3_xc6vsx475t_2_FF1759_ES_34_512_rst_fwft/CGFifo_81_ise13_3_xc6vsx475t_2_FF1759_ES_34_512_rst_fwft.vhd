--------------------------------------------------------------------------------
-- Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: O.76xd
--  \   \         Application: netgen
--  /   /         Filename: CGFifo_81_ise13_3_xc6vsx475t_2_FF1759_ES_34_512_rst_fwft.vhd
-- /___/   /\     Timestamp: Thu Oct 26 21:08:28 2017
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -w -sim -ofmt vhdl /mnt/data/cccad3/aa18514/latest_conv_net/full1/final/HW/maxfiles/convolution_MAX3424A_DFE/scratch/CGFifo_81_ise13_3_xc6vsx475t_2_FF1759_ES_34_512_rst_fwft/tmp/_cg/CGFifo_81_ise13_3_xc6vsx475t_2_FF1759_ES_34_512_rst_fwft.ngc /mnt/data/cccad3/aa18514/latest_conv_net/full1/final/HW/maxfiles/convolution_MAX3424A_DFE/scratch/CGFifo_81_ise13_3_xc6vsx475t_2_FF1759_ES_34_512_rst_fwft/tmp/_cg/CGFifo_81_ise13_3_xc6vsx475t_2_FF1759_ES_34_512_rst_fwft.vhd 
-- Device	: 6vsx475tff1759-2
-- Input file	: /mnt/data/cccad3/aa18514/latest_conv_net/full1/final/HW/maxfiles/convolution_MAX3424A_DFE/scratch/CGFifo_81_ise13_3_xc6vsx475t_2_FF1759_ES_34_512_rst_fwft/tmp/_cg/CGFifo_81_ise13_3_xc6vsx475t_2_FF1759_ES_34_512_rst_fwft.ngc
-- Output file	: /mnt/data/cccad3/aa18514/latest_conv_net/full1/final/HW/maxfiles/convolution_MAX3424A_DFE/scratch/CGFifo_81_ise13_3_xc6vsx475t_2_FF1759_ES_34_512_rst_fwft/tmp/_cg/CGFifo_81_ise13_3_xc6vsx475t_2_FF1759_ES_34_512_rst_fwft.vhd
-- # of Entities	: 1
-- Design Name	: CGFifo_81_ise13_3_xc6vsx475t_2_FF1759_ES_34_512_rst_fwft
-- Xilinx	: /vol/cc/opt/Xilinx/13.3/ISE_DS/ISE/
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------


-- synthesis translate_off
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
use UNISIM.VPKG.ALL;

entity CGFifo_81_ise13_3_xc6vsx475t_2_FF1759_ES_34_512_rst_fwft is
  port (
    clk : in STD_LOGIC := 'X'; 
    rst : in STD_LOGIC := 'X'; 
    wr_en : in STD_LOGIC := 'X'; 
    rd_en : in STD_LOGIC := 'X'; 
    full : out STD_LOGIC; 
    empty : out STD_LOGIC; 
    din : in STD_LOGIC_VECTOR ( 33 downto 0 ); 
    dout : out STD_LOGIC_VECTOR ( 33 downto 0 ) 
  );
end CGFifo_81_ise13_3_xc6vsx475t_2_FF1759_ES_34_512_rst_fwft;

architecture STRUCTURE of CGFifo_81_ise13_3_xc6vsx475t_2_FF1759_ES_34_512_rst_fwft is
  signal N1 : STD_LOGIC; 
  signal NlwRenamedSig_OI_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_user : STD_LOGIC;
 
  signal U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_reg_76 : STD_LOGIC; 
  signal U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_fifo : STD_LOGIC; 
  signal U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_q_84 : STD_LOGIC; 
  signal U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_rden_fifo : STD_LOGIC; 
  signal U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_user_rstpot_86 : STD_LOGIC; 
  signal N2 : STD_LOGIC; 
  signal U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_Mshreg_power_on_wr_rst_0_88 : STD_LOGIC; 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_ALMOSTEMPTY_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_ALMOSTFULL_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDERR_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRERR_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_DOP_3_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_DOP_2_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_11_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_10_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_9_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_8_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_7_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_6_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_5_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_4_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_3_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_2_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_1_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_0_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_11_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_10_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_9_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_8_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_7_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_6_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_5_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_4_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_3_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_2_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_1_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_0_UNCONNECTED : STD_LOGIC;
 
  signal NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_Mshreg_power_on_wr_rst_0_Q15_UNCONNECTED : STD_LOGIC; 
  signal U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rd_rst_i : STD_LOGIC_VECTOR ( 0 downto 0 ); 
  signal U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_power_on_wr_rst : STD_LOGIC_VECTOR ( 0 downto 0 ); 
  signal U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb : STD_LOGIC_VECTOR ( 4 downto 0 ); 
begin
  empty <= NlwRenamedSig_OI_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_user;
  XST_GND : GND
    port map (
      G => N1
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb_4 : FD
    generic map(
      INIT => '0'
    )
    port map (
      C => clk,
      D => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_reg_76,
      Q => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb(4)
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb_3 : FD
    generic map(
      INIT => '0'
    )
    port map (
      C => clk,
      D => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb(4),
      Q => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb(3)
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb_2 : FD
    generic map(
      INIT => '0'
    )
    port map (
      C => clk,
      D => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb(3),
      Q => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb(2)
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb_1 : FD
    generic map(
      INIT => '0'
    )
    port map (
      C => clk,
      D => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb(2),
      Q => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb(1)
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb_0 : FD
    generic map(
      INIT => '0'
    )
    port map (
      C => clk,
      D => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb(1),
      Q => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb(0)
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_reg : FDPE
    generic map(
      INIT => '0'
    )
    port map (
      C => clk,
      CE => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_fb(0),
      D => N1,
      PRE => rst,
      Q => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_reg_76
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_q : FDP
    generic map(
      INIT => '1'
    )
    port map (
      C => clk,
      D => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_fifo,
      PRE => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rd_rst_i(0),
      Q => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_q_84
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1 : FIFO18E1
    generic map(
      ALMOST_EMPTY_OFFSET => X"0003",
      ALMOST_FULL_OFFSET => X"0001",
      DATA_WIDTH => 36,
      DO_REG => 0,
      EN_SYN => TRUE,
      FIFO_MODE => "FIFO18_36",
      FIRST_WORD_FALL_THROUGH => FALSE,
      INIT => X"000000000",
      SIM_DEVICE => "VIRTEX6",
      SRVAL => X"000000000"
    )
    port map (
      ALMOSTEMPTY => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_ALMOSTEMPTY_UNCONNECTED
,
      ALMOSTFULL => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_ALMOSTFULL_UNCONNECTED
,
      EMPTY => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_fifo,
      FULL => full,
      RDCLK => clk,
      RDEN => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_rden_fifo,
      RDERR => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDERR_UNCONNECTED,
      REGCE => N1,
      RST => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rd_rst_i(0),
      RSTREG => N1,
      WRCLK => clk,
      WREN => wr_en,
      WRERR => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRERR_UNCONNECTED,
      DI(31) => din(33),
      DI(30) => din(32),
      DI(29) => din(31),
      DI(28) => din(30),
      DI(27) => din(29),
      DI(26) => din(28),
      DI(25) => din(27),
      DI(24) => din(26),
      DI(23) => din(25),
      DI(22) => din(24),
      DI(21) => din(23),
      DI(20) => din(22),
      DI(19) => din(21),
      DI(18) => din(20),
      DI(17) => din(19),
      DI(16) => din(18),
      DI(15) => din(15),
      DI(14) => din(14),
      DI(13) => din(13),
      DI(12) => din(12),
      DI(11) => din(11),
      DI(10) => din(10),
      DI(9) => din(9),
      DI(8) => din(8),
      DI(7) => din(7),
      DI(6) => din(6),
      DI(5) => din(5),
      DI(4) => din(4),
      DI(3) => din(3),
      DI(2) => din(2),
      DI(1) => din(1),
      DI(0) => din(0),
      DIP(3) => N1,
      DIP(2) => N1,
      DIP(1) => din(17),
      DIP(0) => din(16),
      DO(31) => dout(33),
      DO(30) => dout(32),
      DO(29) => dout(31),
      DO(28) => dout(30),
      DO(27) => dout(29),
      DO(26) => dout(28),
      DO(25) => dout(27),
      DO(24) => dout(26),
      DO(23) => dout(25),
      DO(22) => dout(24),
      DO(21) => dout(23),
      DO(20) => dout(22),
      DO(19) => dout(21),
      DO(18) => dout(20),
      DO(17) => dout(19),
      DO(16) => dout(18),
      DO(15) => dout(15),
      DO(14) => dout(14),
      DO(13) => dout(13),
      DO(12) => dout(12),
      DO(11) => dout(11),
      DO(10) => dout(10),
      DO(9) => dout(9),
      DO(8) => dout(8),
      DO(7) => dout(7),
      DO(6) => dout(6),
      DO(5) => dout(5),
      DO(4) => dout(4),
      DO(3) => dout(3),
      DO(2) => dout(2),
      DO(1) => dout(1),
      DO(0) => dout(0),
      DOP(3) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_DOP_3_UNCONNECTED,
      DOP(2) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_DOP_2_UNCONNECTED,
      DOP(1) => dout(17),
      DOP(0) => dout(16),
      RDCOUNT(11) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_11_UNCONNECTED
,
      RDCOUNT(10) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_10_UNCONNECTED
,
      RDCOUNT(9) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_9_UNCONNECTED
,
      RDCOUNT(8) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_8_UNCONNECTED
,
      RDCOUNT(7) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_7_UNCONNECTED
,
      RDCOUNT(6) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_6_UNCONNECTED
,
      RDCOUNT(5) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_5_UNCONNECTED
,
      RDCOUNT(4) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_4_UNCONNECTED
,
      RDCOUNT(3) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_3_UNCONNECTED
,
      RDCOUNT(2) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_2_UNCONNECTED
,
      RDCOUNT(1) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_1_UNCONNECTED
,
      RDCOUNT(0) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_RDCOUNT_0_UNCONNECTED
,
      WRCOUNT(11) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_11_UNCONNECTED
,
      WRCOUNT(10) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_10_UNCONNECTED
,
      WRCOUNT(9) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_9_UNCONNECTED
,
      WRCOUNT(8) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_8_UNCONNECTED
,
      WRCOUNT(7) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_7_UNCONNECTED
,
      WRCOUNT(6) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_6_UNCONNECTED
,
      WRCOUNT(5) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_5_UNCONNECTED
,
      WRCOUNT(4) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_4_UNCONNECTED
,
      WRCOUNT(3) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_3_UNCONNECTED
,
      WRCOUNT(2) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_2_UNCONNECTED
,
      WRCOUNT(1) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_1_UNCONNECTED
,
      WRCOUNT(0) => 
NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_gf18e1_inst_sngfifo18e1_WRCOUNT_0_UNCONNECTED
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_WR_RST_I_0_1 : LUT2
    generic map(
      INIT => X"E"
    )
    port map (
      I0 => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_wr_rst_reg_76,
      I1 => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_power_on_wr_rst(0),
      O => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rd_rst_i(0)
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_rden_fifo1 : LUT4
    generic map(
      INIT => X"FF08"
    )
    port map (
      I0 => NlwRenamedSig_OI_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_user,
      I1 => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_q_84,
      I2 => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_fifo,
      I3 => rd_en,
      O => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_rden_fifo
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_user : FDP
    generic map(
      INIT => '1'
    )
    port map (
      C => clk,
      D => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_user_rstpot_86,
      PRE => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rd_rst_i(0),
      Q => NlwRenamedSig_OI_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_user
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_user_rstpot : LUT4
    generic map(
      INIT => X"A8AC"
    )
    port map (
      I0 => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_fifo,
      I1 => NlwRenamedSig_OI_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_user,
      I2 => rd_en,
      I3 => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_q_84,
      O => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_v6_fifo_fblk_gextw_1_gnll_fifo_inst_extd_gonep_inst_prim_empty_user_rstpot_86
    );
  XST_VCC : VCC
    port map (
      P => N2
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_Mshreg_power_on_wr_rst_0 : SRLC16E
    generic map(
      INIT => X"001F"
    )
    port map (
      A0 => N1,
      A1 => N1,
      A2 => N2,
      A3 => N1,
      CE => N2,
      CLK => clk,
      D => N1,
      Q => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_Mshreg_power_on_wr_rst_0_88,
      Q15 => NLW_U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_Mshreg_power_on_wr_rst_0_Q15_UNCONNECTED
    );
  U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_power_on_wr_rst_0 : FDE
    generic map(
      INIT => '1'
    )
    port map (
      C => clk,
      CE => N2,
      D => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_Mshreg_power_on_wr_rst_0_88,
      Q => U0_xst_fifo_generator_gconvfifo_rf_gbiv5_bi_rstbt_power_on_wr_rst(0)
    );

end STRUCTURE;

-- synthesis translate_on
