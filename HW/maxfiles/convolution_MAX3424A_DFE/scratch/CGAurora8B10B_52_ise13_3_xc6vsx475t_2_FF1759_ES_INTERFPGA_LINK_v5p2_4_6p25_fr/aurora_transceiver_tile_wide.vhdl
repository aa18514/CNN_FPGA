------------------------------------------------------------------------------/
-- (c) Copyright 2008 Xilinx, Inc. All rights reserved.
--
-- This file contains confidential and proprietary information
-- of Xilinx, Inc. and is protected under U.S. and
-- international copyright and other intellectual property
-- laws.
--
-- DISCLAIMER
-- This disclaimer is not a license and does not grant any
-- rights to the materials distributed herewith. Except as
-- otherwise provided in a valid license issued to you by
-- Xilinx, and to the maximum extent permitted by applicable
-- law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
-- WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
-- AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
-- BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
-- INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
-- (2) Xilinx shall not be liable (whether in contract or tort,
-- including negligence, or under any other theory of
-- liability) for any loss or damage of any kind or nature
-- related to, arising under or in connection with these
-- materials, including for any direct, or any indirect,
-- special, incidental, or consequential loss or damage
-- (including loss of data, profits, goodwill, or any type of
-- loss or damage suffered as a result of any action brought
-- by a third party) even if such damage or loss was
-- reasonably foreseeable or Xilinx had been advised of the
-- possibility of the same.
--
-- CRITICAL APPLICATIONS
-- Xilinx products are not designed or intended to be fail-
-- safe, or for use in any application requiring fail-safe
-- performance, such as life-support or safety devices or
-- systems, Class III medical devices, nuclear facilities,
-- applications related to the deployment of airbags, or any
-- other applications that could lead to death, personal
-- injury, or severe property or environmental damage
-- (individually and collectively, "Critical
-- Applications"). Customer assumes the sole risk and
-- liability of any use of Xilinx products in Critical
-- Applications, subject only to applicable laws and
-- regulations governing limitations on product liability.
--
-- THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
-- PART OF THIS FILE AT ALL TIMES.
-- 
-- 
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 11.1
--  \   \         Application : 
--  /   /         Filename : aurora_8b10b_v5_1_tile.vhd
-- /___/   /\     Timestamp : 03/26/2008 10:19:02
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: 
--Design Name: AURORA_8B10B_V5_1_TILE
--
-- Module AURORA_8B10B_V5_1_TILE
-- Written for synthesis tool: XST
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;

--***************************** Entity Declaration ****************************

entity <SIGNATURE>_GTXE1 is
generic
(
    -- Simulation attributes
    GTX_SIM_TXREFCLK_SOURCE     : bit_vector := "000";
    GTX_SIM_RXREFCLK_SOURCE     : bit_vector := "000";
    GTX_SIM_GTXRESET_SPEEDUP    : integer    := 0; -- Set to 1 to speed up sim reset
    
    -- Share RX PLL parameter
    GTX_TX_CLK_SOURCE           : string     := "TXPLL";
    -- Save power parameter
    GTX_POWER_SAVE              : bit_vector := "0000110100"
);

port 
(
    ------------------------ Loopback and Powerdown Ports ----------------------
    LOOPBACK_IN                             : in   std_logic_vector(2 downto 0);
    RXPOWERDOWN_IN                          : in   std_logic_vector(1 downto 0);
    TXPOWERDOWN_IN                          : in   std_logic_vector(1 downto 0);
    ----------------------- Receive Ports - 8b10b Decoder ----------------------
    RXCHARISCOMMA_OUT                       : out  std_logic_vector(3 downto 0);
    RXCHARISK_OUT                           : out  std_logic_vector(3 downto 0);
    RXDISPERR_OUT                           : out  std_logic_vector(3 downto 0);
    RXNOTINTABLE_OUT                        : out  std_logic_vector(3 downto 0);
    ------------------- Receive Ports - Channel Bonding Ports ------------------
    <SINGLELANE>RXCHBONDI_IN                            : in   std_logic_vector(3 downto 0);
    <SINGLELANE>RXCHBONDLEVEL_IN                        : in   std_logic_vector(2 downto 0);
    <SINGLELANE>RXCHBONDMASTER_IN                       : in   std_logic;
    <SINGLELANE>RXCHBONDO_OUT                           : out  std_logic_vector(3 downto 0);
    <SINGLELANE>RXCHBONDSLAVE_IN                        : in   std_logic;
    <SINGLELANE>RXENCHANSYNC_IN                         : in   std_logic;
    ------------------- Receive Ports - Clock Correction Ports -----------------
    RXCLKCORCNT_OUT                         : out  std_logic_vector(2 downto 0);
    --------------- Receive Ports - Comma Detection and Alignment --------------
    RXBYTEREALIGN_OUT                       : out  std_logic;
    RXENMCOMMAALIGN_IN                      : in   std_logic;
    RXENPCOMMAALIGN_IN                      : in   std_logic;
    ------------------- Receive Ports - RX Data Path interface -----------------
    RXDATA_OUT                              : out  std_logic_vector(31 downto 0);
    RXRECCLK_OUT                            : out  std_logic;
    RXRESET_IN                              : in   std_logic;
    RXUSRCLK_IN                             : in   std_logic;
    RXUSRCLK2_IN                            : in   std_logic;
    ------- Receive Ports - RX Driver,OOB signalling,Coupling and Eq.,CDR ------
    RXCDRRESET_IN                           : in   std_logic;
    RXN_IN                                  : in   std_logic;
    RXP_IN                                  : in   std_logic;
    -------- Receive Ports - RX Elastic Buffer and Phase Alignment Ports -------
    RXBUFSTATUS_OUT                         : out  std_logic_vector(2 downto 0);
    RXCHANISALIGNED_OUT                     : out  std_logic;
    ------------------------ Receive Ports - RX PLL Ports ----------------------
    GREFCLKRX_IN                            : in   std_logic;
    GTXRXRESET_IN                           : in   std_logic;
    MGTREFCLKRX_IN                          : in   std_logic_vector(1 downto 0);
    NORTHREFCLKRX_IN                        : in   std_logic_vector(1 downto 0);
    PERFCLKRX_IN                            : in   std_logic;
    PLLRXRESET_IN                           : in   std_logic;
    RXPLLLKDET_OUT                          : out  std_logic;
    RXRESETDONE_OUT                         : out  std_logic;
    SOUTHREFCLKRX_IN                        : in   std_logic_vector(1 downto 0);
    ----------------- Receive Ports - RX Polarity Control Ports ----------------
    RXPOLARITY_IN                           : in   std_logic;
    ---------------- Transmit Ports - 8b10b Encoder Control Ports --------------
    TXCHARISK_IN                            : in   std_logic_vector(3 downto 0);
    ------------------ Transmit Ports - TX Data Path interface -----------------
    TXDATA_IN                               : in   std_logic_vector(31 downto 0);
    TXOUTCLK_OUT                            : out  std_logic;
    TXRESET_IN                              : in   std_logic;
    TXUSRCLK_IN                             : in   std_logic;
    TXUSRCLK2_IN                            : in   std_logic;
    ---------------- Transmit Ports - TX Driver and OOB signaling --------------
    TXN_OUT                                 : out  std_logic;
    TXP_OUT                                 : out  std_logic;
    ----------- Transmit Ports - TX Elastic Buffer and Phase Alignment ---------
    TXBUFSTATUS_OUT                         : out  std_logic_vector(1 downto 0);
    ----------------------- Transmit Ports - TX PLL Ports ----------------------
    GREFCLKTX_IN                            : in   std_logic;
    GTXTXRESET_IN                           : in   std_logic;
    MGTREFCLKTX_IN                          : in   std_logic_vector(1 downto 0);
    NORTHREFCLKTX_IN                        : in   std_logic_vector(1 downto 0);
    PERFCLKTX_IN                            : in   std_logic;
    PLLTXRESET_IN                           : in   std_logic;
    SOUTHREFCLKTX_IN                        : in   std_logic_vector(1 downto 0);
    TXPLLLKDET_OUT                          : out  std_logic;
    TXRESETDONE_OUT                         : out  std_logic

);

end <SIGNATURE>_GTXE1;

architecture RTL of <SIGNATURE>_GTXE1 is

  attribute core_generation_info        : string;
  attribute core_generation_info of RTL : architecture is "aurora_8b10b_v5_1,aurora_8b10b_v5_1,{backchannel_mode=Sidebands, c_aurora_lanes=4, c_column_used=left, c_gt_clock_1=GTXQ2, c_gt_clock_2=None, c_gt_loc_1=X, c_gt_loc_10=2, c_gt_loc_11=3, c_gt_loc_12=4, c_gt_loc_13=X, c_gt_loc_14=X, c_gt_loc_15=X, c_gt_loc_16=X, c_gt_loc_17=X, c_gt_loc_18=X, c_gt_loc_19=X, c_gt_loc_2=X, c_gt_loc_20=X, c_gt_loc_21=X, c_gt_loc_22=X, c_gt_loc_23=X, c_gt_loc_24=X, c_gt_loc_25=X, c_gt_loc_26=X, c_gt_loc_27=X, c_gt_loc_28=X, c_gt_loc_29=X, c_gt_loc_3=X, c_gt_loc_30=X, c_gt_loc_31=X, c_gt_loc_32=X, c_gt_loc_33=X, c_gt_loc_34=X, c_gt_loc_35=X, c_gt_loc_36=X, c_gt_loc_37=X, c_gt_loc_38=X, c_gt_loc_39=X, c_gt_loc_4=X, c_gt_loc_40=X, c_gt_loc_41=X, c_gt_loc_42=X, c_gt_loc_43=X, c_gt_loc_44=X, c_gt_loc_45=X, c_gt_loc_46=X, c_gt_loc_47=X, c_gt_loc_48=X, c_gt_loc_5=X, c_gt_loc_6=X, c_gt_loc_7=X, c_gt_loc_8=X, c_gt_loc_9=1, c_lane_width=4, c_line_rate=6.25, c_nfc=false, c_nfc_mode=IMM, c_refclk_frequency=250.0, c_simplex=false, c_simplex_mode=TX, c_stream=false, c_ufc=false, flow_mode=None, interface_mode=Framing, dataflow_config=Duplex,}";
--***************************** Wire Declarations *****************************
    -- ground and vcc signals
   signal  tied_to_ground_i                :   std_logic;
   signal  tied_to_ground_vec_i            :   std_logic_vector(63 downto 0);
   signal  tied_to_vcc_i                   :   std_logic;

    --RX Datapath signals
    signal rxdata_i                        :   std_logic_vector(31 downto 0);  
    --TX Datapath signals
    signal txdata_i                        :   std_logic_vector(31 downto 0);

begin
--********************************* Main Body of Code**************************
    ---------------------------  Static signal Assignments ---------------------
                                                                                                                                                                                              
    tied_to_ground_i                    <= '0';
    tied_to_ground_vec_i(63 downto 0)   <= (others => '0');
    tied_to_vcc_i                       <= '1';

    -------------------  GTX Datapath byte mapping  -----------------

    -- The GTX provides little endian data (first byte received on RXDATA(7 downto 0))    
    RXDATA_OUT    <=   rxdata_i;

    -- The GTX transmits little endian data (TXDATA(7 downto 0) transmitted first)
    txdata_i    <=   TXDATA_IN;

    --------------------------- GTX Instantiations  --------------------------
    gtxe1_i : GTXE1
    generic map
    (
        --_______________________ Simulation-Only Attributes ___________________

        SIM_RECEIVER_DETECT_PASS   =>      (TRUE),
        
        SIM_GTXRESET_SPEEDUP       =>      (<IS_SIMULATION>),

        SIM_TX_ELEC_IDLE_LEVEL     =>      ("X"),

        SIM_VERSION                =>      ("2.0"),
        SIM_TXREFCLK_SOURCE        =>      (GTX_SIM_TXREFCLK_SOURCE),
        SIM_RXREFCLK_SOURCE        =>      (GTX_SIM_RXREFCLK_SOURCE),

       ----------------------------TX PLL----------------------------
        TX_CLK_SOURCE                           =>     (GTX_TX_CLK_SOURCE),
        TX_OVERSAMPLE_MODE                      =>     (FALSE),
        TXPLL_COM_CFG                           =>     (x"21680a"),
        TXPLL_CP_CFG                            =>     (<PLL_CP_CFG>),  
        TXPLL_DIVSEL_FB                         =>     (<PLL_DIVSEL_FB>),
        TXPLL_DIVSEL_OUT                        =>     (<PLL_DIVSEL_OUT>),
        TXPLL_DIVSEL_REF                        =>     (<PLL_DIVSEL_REF>),
        TXPLL_DIVSEL45_FB                       =>     (5),
        TXPLL_LKDET_CFG                         =>     ("111"),
        TX_CLK25_DIVIDER                        =>     (10),
        TXPLL_SATA                              =>     ("00"),
        TX_TDCC_CFG                             =>     (<TDCC_CFG>),
        PMA_CAS_CLK_EN                          =>     (FALSE),
        POWER_SAVE                              =>     (GTX_POWER_SAVE),

       -------------------------TX Interface-------------------------
        GEN_TXUSRCLK                            =>     (FALSE),
        TX_DATA_WIDTH                           =>     (40),
        TX_USRCLK_CFG                           =>     (x"00"),
        TXOUTCLK_CTRL                           =>     ("TXOUTCLKPMA_DIV2"),
        TXOUTCLK_DLY                            =>     ("0000000000"),

       --------------TX Buffering and Phase Alignment----------------
        <NOSIM>TX_PMADATA_OPT                          =>     ('0'),
        PMA_TX_CFG                              =>     (x"80082"),
        TX_BUFFER_USE                           =>     (TRUE),
        TX_BYTECLK_CFG                          =>     (x"00"),
        TX_EN_RATE_RESET_BUF                    =>     (TRUE),
        TX_XCLK_SEL                             =>     ("TXOUT"),
        TX_DLYALIGN_CTRINC                      =>     ("0100"),
        TX_DLYALIGN_LPFINC                      =>     ("0110"),
        TX_DLYALIGN_MONSEL                      =>     ("000"),
        TX_DLYALIGN_OVRDSETTING                 =>     ("10000000"),

       -------------------------TX Gearbox---------------------------
        GEARBOX_ENDEC                           =>     ("000"),
        TXGEARBOX_USE                           =>     (FALSE),

       ----------------TX Driver and OOB Signalling------------------
        TX_DRIVE_MODE                           =>     ("DIRECT"),
        TX_IDLE_ASSERT_DELAY                    =>     ("101"),
        TX_IDLE_DEASSERT_DELAY                  =>     ("011"),
        TXDRIVE_LOOPBACK_HIZ                    =>     (FALSE),
        TXDRIVE_LOOPBACK_PD                     =>     (FALSE),

       --------------TX Pipe Control for PCI Express/SATA------------
        COM_BURST_VAL                           =>     ("1111"),

       ------------------TX Attributes for PCI Express---------------
        TX_DEEMPH_0                             =>     ("11010"),
        TX_DEEMPH_1                             =>     ("10000"),
        TX_MARGIN_FULL_0                        =>     ("1001110"),
        TX_MARGIN_FULL_1                        =>     ("1001001"),
        TX_MARGIN_FULL_2                        =>     ("1000101"),
        TX_MARGIN_FULL_3                        =>     ("1000010"),
        TX_MARGIN_FULL_4                        =>     ("1000000"),
        TX_MARGIN_LOW_0                         =>     ("1000110"),
        TX_MARGIN_LOW_1                         =>     ("1000100"),
        TX_MARGIN_LOW_2                         =>     ("1000010"),
        TX_MARGIN_LOW_3                         =>     ("1000000"),
        TX_MARGIN_LOW_4                         =>     ("1000000"),

       ----------------------------RX PLL----------------------------
        RX_OVERSAMPLE_MODE                      =>     (FALSE),
        RXPLL_COM_CFG                           =>     (x"21680a"),
        RXPLL_CP_CFG                            =>     (<PLL_CP_CFG>),  
        RXPLL_DIVSEL_FB                         =>     (<PLL_DIVSEL_FB>),
        RXPLL_DIVSEL_OUT                        =>     (<PLL_DIVSEL_OUT>),
        RXPLL_DIVSEL_REF                        =>     (<PLL_DIVSEL_REF>),
        RXPLL_DIVSEL45_FB                       =>     (5),
        RXPLL_LKDET_CFG                         =>     ("111"),
        RX_CLK25_DIVIDER                        =>     (10),

       -------------------------RX Interface-------------------------
        GEN_RXUSRCLK                            =>     (FALSE),
        RX_DATA_WIDTH                           =>     (40),
        RXRECCLK_CTRL                           =>     ("RXRECCLKPMA_DIV2"),
        RXRECCLK_DLY                            =>     ("0000000000"),
        RXUSRCLK_DLY                            =>     (x"0000"),

       ----------RX Driver,OOB signalling,Coupling and Eq.,CDR-------
        AC_CAP_DIS                              =>     (TRUE),
        CDR_PH_ADJ_TIME                         =>     ("10100"),
        OOBDETECT_THRESHOLD                     =>     ("011"),
        PMA_CDR_SCAN                            =>     (x"640404C"),
        PMA_RX_CFG                              =>     (x"05ce048"),
        RCV_TERM_GND                            =>     (FALSE),
        RCV_TERM_VTTRX                          =>     (FALSE),
        RX_EN_IDLE_HOLD_CDR                     =>     (FALSE),
        RX_EN_IDLE_RESET_FR                     =>     (TRUE),
        RX_EN_IDLE_RESET_PH                     =>     (TRUE),
        TX_DETECT_RX_CFG                        =>     (x"1832"),
        TERMINATION_CTRL                        =>     ("00000"),
        TERMINATION_OVRD                        =>     (FALSE),
        CM_TRIM                                 =>     ("01"),
        PMA_RXSYNC_CFG                          =>     (x"00"),
        PMA_CFG                                 =>     (x"0040000040000000003"),
        BGTEST_CFG                              =>     ("00"),
        BIAS_CFG                                =>     (x"00000"),

       --------------RX Decision Feedback Equalizer(DFE)-------------
        DFE_CAL_TIME                            =>     ("01100"),
        DFE_CFG                                 =>     ("00011011"),
        RX_EN_IDLE_HOLD_DFE                     =>     (TRUE),
        RX_EYE_OFFSET                           =>     (x"4C"),
        RX_EYE_SCANMODE                         =>     ("00"),

       -------------------------PRBS Detection-----------------------
        <NOSIM>RXPRBSERR_LOOPBACK                      =>     ('0'),

       ------------------Comma Detection and Alignment---------------
        ALIGN_COMMA_WORD                        =>     (2),
        COMMA_10B_ENABLE                        =>     ("1111111111"),
        COMMA_DOUBLE                            =>     (FALSE),
        DEC_MCOMMA_DETECT                       =>     (TRUE),
        DEC_PCOMMA_DETECT                       =>     (TRUE),
        DEC_VALID_COMMA_ONLY                    =>     (FALSE),
        MCOMMA_10B_VALUE                        =>     ("1010000011"),
        MCOMMA_DETECT                           =>     (TRUE),
        PCOMMA_10B_VALUE                        =>     ("0101111100"),
        PCOMMA_DETECT                           =>     (TRUE),
        RX_DECODE_SEQ_MATCH                     =>     (TRUE),
        RX_SLIDE_AUTO_WAIT                      =>     (5),
        RX_SLIDE_MODE                           =>     ("OFF"),
        SHOW_REALIGN_COMMA                      =>     (FALSE),

       -----------------RX Loss-of-sync State Machine----------------
        RX_LOS_INVALID_INCR                     =>     (8),
        RX_LOS_THRESHOLD                        =>     (128),
        RX_LOSS_OF_SYNC_FSM                     =>     (FALSE),

       -------------------------RX Gearbox---------------------------
        RXGEARBOX_USE                           =>     (FALSE),

       -------------RX Elastic Buffer and Phase alignment------------
        RX_BUFFER_USE                           =>     (TRUE),
        RX_EN_IDLE_RESET_BUF                    =>     (TRUE),
        RX_EN_MODE_RESET_BUF                    =>     (TRUE),
        RX_EN_RATE_RESET_BUF                    =>     (TRUE),
        RX_EN_REALIGN_RESET_BUF                 =>     (FALSE),
        RX_EN_REALIGN_RESET_BUF2                =>     (FALSE),
        RX_FIFO_ADDR_MODE                       =>     ("FULL"),
        RX_IDLE_HI_CNT                          =>     ("1000"),
        RX_IDLE_LO_CNT                          =>     ("0000"),
        RX_XCLK_SEL                             =>     ("RXREC"),
        RX_DLYALIGN_CTRINC                      =>     ("0100"),
        RX_DLYALIGN_EDGESET                     =>     ("00010"),
        RX_DLYALIGN_LPFINC                      =>     ("0110"),
        RX_DLYALIGN_MONSEL                      =>     ("000"),
        RX_DLYALIGN_OVRDSETTING                 =>     ("10000000"),

       ------------------------Clock Correction----------------------
        CLK_COR_ADJ_LEN                         =>     (4),
        CLK_COR_DET_LEN                         =>     (4),
        CLK_COR_INSERT_IDLE_FLAG                =>     (FALSE),
        CLK_COR_KEEP_IDLE                       =>     (FALSE),
        CLK_COR_MAX_LAT                         =>     (32),
        CLK_COR_MIN_LAT                         =>     (27),
        CLK_COR_PRECEDENCE                      =>     (TRUE),
        CLK_COR_REPEAT_WAIT                     =>     (0),
        CLK_COR_SEQ_1_1                         =>     ("0111110111"),
        CLK_COR_SEQ_1_2                         =>     ("0111110111"),
        CLK_COR_SEQ_1_3                         =>     ("0111110111"),
        CLK_COR_SEQ_1_4                         =>     ("0111110111"),
        CLK_COR_SEQ_1_ENABLE                    =>     ("1111"),
        CLK_COR_SEQ_2_1                         =>     ("0000000000"),
        CLK_COR_SEQ_2_2                         =>     ("0000000000"),
        CLK_COR_SEQ_2_3                         =>     ("0000000000"),
        CLK_COR_SEQ_2_4                         =>     ("0000000000"),
        CLK_COR_SEQ_2_ENABLE                    =>     ("0000"),
        CLK_COR_SEQ_2_USE                       =>     (FALSE),
        CLK_CORRECT_USE                         =>     (TRUE),

       ------------------------Channel Bonding----------------------
        CHAN_BOND_1_MAX_SKEW                    =>     (7),
        CHAN_BOND_2_MAX_SKEW                    =>     (7),
        CHAN_BOND_KEEP_ALIGN                    =>     (FALSE),
        CHAN_BOND_SEQ_1_1                       =>     ("0101111100"),
        CHAN_BOND_SEQ_1_2                       =>     ("0000000000"),
        CHAN_BOND_SEQ_1_3                       =>     ("0000000000"),
        CHAN_BOND_SEQ_1_4                       =>     ("0000000000"),
        CHAN_BOND_SEQ_1_ENABLE                  =>     ("0001"),
        CHAN_BOND_SEQ_2_1                       =>     ("0000000000"),
        CHAN_BOND_SEQ_2_2                       =>     ("0000000000"),
        CHAN_BOND_SEQ_2_3                       =>     ("0000000000"),
        CHAN_BOND_SEQ_2_4                       =>     ("0000000000"),
        CHAN_BOND_SEQ_2_CFG                     =>     ("00000"),
        CHAN_BOND_SEQ_2_ENABLE                  =>     ("0000"),
        CHAN_BOND_SEQ_2_USE                     =>     (FALSE),
        CHAN_BOND_SEQ_LEN                       =>     (1),
        PCI_EXPRESS_MODE                        =>     (FALSE),

       -------------RX Attributes for PCI Express/SATA/SAS----------
        SAS_MAX_COMSAS                          =>     (52),
        SAS_MIN_COMSAS                          =>     (40),
        SATA_BURST_VAL                          =>     ("100"),
        SATA_IDLE_VAL                           =>     ("100"),
        SATA_MAX_BURST                          =>     (7),
        SATA_MAX_INIT                           =>     (22),
        SATA_MAX_WAKE                           =>     (7),
        SATA_MIN_BURST                          =>     (4),
        SATA_MIN_INIT                           =>     (12),
        SATA_MIN_WAKE                           =>     (4),
        TRANS_TIME_FROM_P2                      =>     (x"03c"),
        TRANS_TIME_NON_P2                       =>     (x"19"),
        TRANS_TIME_RATE                         =>     (x"ff"),
        TRANS_TIME_TO_P2                        =>     (x"064")


     )
     port map
     (
        
        ------------------------ Loopback and Powerdown Ports ----------------------
        LOOPBACK                        =>      LOOPBACK_IN,
        RXPOWERDOWN                     =>      RXPOWERDOWN_IN,
        TXPOWERDOWN                     =>      TXPOWERDOWN_IN,
        -------------- Receive Ports - 64b66b and 64b67b Gearbox Ports -------------
        RXDATAVALID                     =>      open,
        RXGEARBOXSLIP                   =>      tied_to_ground_i,
        RXHEADER                        =>      open,
        RXHEADERVALID                   =>      open,
        RXSTARTOFSEQ                    =>      open,
        ----------------------- Receive Ports - 8b10b Decoder ----------------------
        RXCHARISCOMMA                   =>      RXCHARISCOMMA_OUT,
        RXCHARISK                       =>      RXCHARISK_OUT,
        RXDEC8B10BUSE                   =>      tied_to_vcc_i,
        RXDISPERR                       =>      RXDISPERR_OUT,
        RXNOTINTABLE                    =>      RXNOTINTABLE_OUT,
        RXRUNDISP                       =>      open,
        USRCODEERR                      =>      tied_to_ground_i,
        ------------------- Receive Ports - Channel Bonding Ports ------------------
        RXCHANBONDSEQ                   =>      open,
        RXCHBONDI                       =>      <RXCHBONDI>,
        RXCHBONDLEVEL                   =>      <RXCHBONDLEVEL>,
        RXCHBONDMASTER                  =>      <RXCHBONDMASTER>,
        RXCHBONDO                       =>      <RXCHBONDO>,
        RXCHBONDSLAVE                   =>      <RXCHBONDSLAVE>,
        RXENCHANSYNC                    =>      <RXENCHANSYNC>,
        ------------------- Receive Ports - Clock Correction Ports -----------------
        RXCLKCORCNT                     =>      RXCLKCORCNT_OUT,
        --------------- Receive Ports - Comma Detection and Alignment --------------
        RXBYTEISALIGNED                 =>      open,
        RXBYTEREALIGN                   =>      RXBYTEREALIGN_OUT,
        RXCOMMADET                      =>      open,
        RXCOMMADETUSE                   =>      tied_to_vcc_i,
        RXENMCOMMAALIGN                 =>      RXENMCOMMAALIGN_IN,
        RXENPCOMMAALIGN                 =>      RXENPCOMMAALIGN_IN,
        RXSLIDE                         =>      tied_to_ground_i,
        ----------------------- Receive Ports - PRBS Detection ---------------------
        PRBSCNTRESET                    =>      tied_to_ground_i,
        RXENPRBSTST                     =>      tied_to_ground_vec_i(2 downto 0),
        RXPRBSERR                       =>      open,
        ------------------- Receive Ports - RX Data Path interface -----------------
        RXDATA                          =>      rxdata_i,
        RXRECCLK                        =>      RXRECCLK_OUT,
        RXRECCLKPCS                     =>      open,
        RXRESET                         =>      RXRESET_IN,
        RXUSRCLK                        =>      RXUSRCLK_IN,
        RXUSRCLK2                       =>      RXUSRCLK2_IN,
        ------------ Receive Ports - RX Decision Feedback Equalizer(DFE) -----------
        DFECLKDLYADJ                    =>      tied_to_ground_vec_i(5 downto 0),
        DFECLKDLYADJMON                 =>      open,
        DFEDLYOVRD                      =>      tied_to_vcc_i,
        DFEEYEDACMON                    =>      open,
        DFESENSCAL                      =>      open,
        DFETAP1                         =>      tied_to_ground_vec_i(4 downto 0),
        DFETAP1MONITOR                  =>      open,
        DFETAP2                         =>      tied_to_ground_vec_i(4 downto 0),
        DFETAP2MONITOR                  =>      open,
        DFETAP3                         =>      tied_to_ground_vec_i(3 downto 0),
        DFETAP3MONITOR                  =>      open,
        DFETAP4                         =>      tied_to_ground_vec_i(3 downto 0),
        DFETAP4MONITOR                  =>      open,
        DFETAPOVRD                      =>      tied_to_vcc_i,
        ------- Receive Ports - RX Driver,OOB signalling,Coupling and Eq.,CDR ------
        GATERXELECIDLE                  =>      tied_to_ground_i,
        IGNORESIGDET                    =>      tied_to_ground_i,
        RXCDRRESET                      =>      RXCDRRESET_IN,
        RXELECIDLE                      =>      open,
        RXEQMIX                         =>      "0000000111",
        RXN                             =>      RXN_IN,
        RXP                             =>      RXP_IN,
        -------- Receive Ports - RX Elastic Buffer and Phase Alignment Ports -------
        RXBUFRESET                      =>      tied_to_ground_i,
        RXBUFSTATUS                     =>      RXBUFSTATUS_OUT,
        RXCHANISALIGNED                 =>      RXCHANISALIGNED_OUT,
        RXCHANREALIGN                   =>      open,
        RXDLYALIGNDISABLE               =>      tied_to_vcc_i,
        <NOSIM>RXDLYALIGNMONENB                =>      tied_to_ground_i,
        RXDLYALIGNMONITOR               =>      open,
        RXDLYALIGNOVERRIDE              =>      tied_to_ground_i,
        RXDLYALIGNRESET                 =>      tied_to_ground_i,
        RXDLYALIGNSWPPRECURB            =>      tied_to_vcc_i,
        RXDLYALIGNUPDSW                 =>      tied_to_ground_i,
        RXENPMAPHASEALIGN               =>      tied_to_ground_i,
        RXPMASETPHASE                   =>      tied_to_ground_i,
        RXSTATUS                        =>      open,
        --------------- Receive Ports - RX Loss-of-sync State Machine --------------
        RXLOSSOFSYNC                    =>      open,
        ---------------------- Receive Ports - RX Oversampling ---------------------
        RXENSAMPLEALIGN                 =>      tied_to_ground_i,
        RXOVERSAMPLEERR                 =>      open,
        ------------------------ Receive Ports - RX PLL Ports ----------------------
        GREFCLKRX                       =>      GREFCLKRX_IN,
        GTXRXRESET                      =>      GTXRXRESET_IN,
        MGTREFCLKRX                     =>      MGTREFCLKRX_IN,
        NORTHREFCLKRX                   =>      NORTHREFCLKRX_IN,
        PERFCLKRX                       =>      PERFCLKRX_IN,
        PLLRXRESET                      =>      PLLRXRESET_IN,
        RXPLLLKDET                      =>      RXPLLLKDET_OUT,
        RXPLLLKDETEN                    =>      tied_to_vcc_i,
        RXPLLPOWERDOWN                  =>      tied_to_ground_i,
        RXPLLREFSELDY                   =>      tied_to_ground_vec_i(2 downto 0),
        RXRATE                          =>      tied_to_ground_vec_i(1 downto 0),
        RXRATEDONE                      =>      open,
        RXRESETDONE                     =>      RXRESETDONE_OUT,
        SOUTHREFCLKRX                   =>      SOUTHREFCLKRX_IN,
        -------------- Receive Ports - RX Pipe Control for PCI Express -------------
        PHYSTATUS                       =>      open,
        RXVALID                         =>      open,
        ----------------- Receive Ports - RX Polarity Control Ports ----------------
        RXPOLARITY                      =>      RXPOLARITY_IN,
        --------------------- Receive Ports - RX Ports for SATA --------------------
        COMINITDET                      =>      open,
        COMSASDET                       =>      open,
        COMWAKEDET                      =>      open,
        ------------- Shared Ports - Dynamic Reconfiguration Port (DRP) ------------
        DADDR                           =>      tied_to_ground_vec_i(7 downto 0),
        DCLK                            =>      tied_to_ground_i,
        DEN                             =>      tied_to_ground_i,
        DI                              =>      tied_to_ground_vec_i(15 downto 0),
        DRDY                            =>      open,
        DRPDO                           =>      open,
        DWE                             =>      tied_to_ground_i,
        -------------- Transmit Ports - 64b66b and 64b67b Gearbox Ports ------------
        TXGEARBOXREADY                  =>      open,
        TXHEADER                        =>      tied_to_ground_vec_i(2 downto 0),
        TXSEQUENCE                      =>      tied_to_ground_vec_i(6 downto 0),
        TXSTARTSEQ                      =>      tied_to_ground_i,
        ---------------- Transmit Ports - 8b10b Encoder Control Ports --------------
        TXBYPASS8B10B                   =>      tied_to_ground_vec_i(3 downto 0),
        TXCHARDISPMODE                  =>      tied_to_ground_vec_i(3 downto 0),
        TXCHARDISPVAL                   =>      tied_to_ground_vec_i(3 downto 0),
        TXCHARISK                       =>      TXCHARISK_IN,
        TXENC8B10BUSE                   =>      tied_to_vcc_i,
        TXKERR                          =>      open,
        TXRUNDISP                       =>      open,
        ------------------------- Transmit Ports - GTX Ports -----------------------
        GTXTEST                         =>      "1000000000000",
        MGTREFCLKFAB                    =>      open,
        TSTCLK0                         =>      tied_to_ground_i,
        TSTCLK1                         =>      tied_to_ground_i,
        TSTIN                           =>      "11111111111111111111",
        TSTOUT                          =>      open,
        ------------------ Transmit Ports - TX Data Path interface -----------------
        TXDATA                          =>      txdata_i,
        TXOUTCLK                        =>      TXOUTCLK_OUT,
        TXOUTCLKPCS                     =>      open,
        TXRESET                         =>      TXRESET_IN,
        TXUSRCLK                        =>      TXUSRCLK_IN,
        TXUSRCLK2                       =>      TXUSRCLK2_IN,
        ---------------- Transmit Ports - TX Driver and OOB signaling --------------
        TXBUFDIFFCTRL                   =>      "100",
        TXDIFFCTRL                      =>      "<TXDIFFCTRL>",
        TXINHIBIT                       =>      tied_to_ground_i,
        TXN                             =>      TXN_OUT,
        TXP                             =>      TXP_OUT,
        TXPOSTEMPHASIS                  =>      "<TXPOSTEMPHASIS>",
        --------------- Transmit Ports - TX Driver and OOB signalling --------------
        TXPREEMPHASIS                   =>      "<TXPREEMPHASIS>",
        ----------- Transmit Ports - TX Elastic Buffer and Phase Alignment ---------
        TXBUFSTATUS                     =>      TXBUFSTATUS_OUT,
        -------- Transmit Ports - TX Elastic Buffer and Phase Alignment Ports ------
        TXDLYALIGNDISABLE               =>      tied_to_vcc_i,
        <NOSIM>TXDLYALIGNMONENB                =>      tied_to_ground_i,
        TXDLYALIGNMONITOR               =>      open,
        TXDLYALIGNOVERRIDE              =>      tied_to_ground_i,
        TXDLYALIGNRESET                 =>      tied_to_ground_i,
        TXDLYALIGNUPDSW                 =>      tied_to_vcc_i,
        TXENPMAPHASEALIGN               =>      tied_to_ground_i,
        TXPMASETPHASE                   =>      tied_to_ground_i,
        ----------------------- Transmit Ports - TX PLL Ports ----------------------
        GREFCLKTX                       =>      GREFCLKTX_IN,
        GTXTXRESET                      =>      GTXTXRESET_IN,
        MGTREFCLKTX                     =>      MGTREFCLKTX_IN,
        NORTHREFCLKTX                   =>      NORTHREFCLKTX_IN,
        PERFCLKTX                       =>      PERFCLKTX_IN,
        PLLTXRESET                      =>      PLLTXRESET_IN,
        SOUTHREFCLKTX                   =>      SOUTHREFCLKTX_IN,
        TXPLLLKDET                      =>      TXPLLLKDET_OUT,
        TXPLLLKDETEN                    =>      tied_to_vcc_i,
        TXPLLPOWERDOWN                  =>      tied_to_ground_i,
        TXPLLREFSELDY                   =>      tied_to_ground_vec_i(2 downto 0),
        TXRATE                          =>      tied_to_ground_vec_i(1 downto 0),
        TXRATEDONE                      =>      open,
        TXRESETDONE                     =>      TXRESETDONE_OUT,
        --------------------- Transmit Ports - TX PRBS Generator -------------------
        TXENPRBSTST                     =>      tied_to_ground_vec_i(2 downto 0),
        TXPRBSFORCEERR                  =>      tied_to_ground_i,
        -------------------- Transmit Ports - TX Polarity Control ------------------
        TXPOLARITY                      =>      tied_to_ground_i,
        ----------------- Transmit Ports - TX Ports for PCI Express ----------------
        TXDEEMPH                        =>      tied_to_ground_i,
        TXDETECTRX                      =>      tied_to_ground_i,
        TXELECIDLE                      =>      tied_to_ground_i,
        TXMARGIN                        =>      tied_to_ground_vec_i(2 downto 0),
        TXPDOWNASYNCH                   =>      tied_to_ground_i,
        TXSWING                         =>      tied_to_ground_i,
        --------------------- Transmit Ports - TX Ports for SATA -------------------
        COMFINISH                       =>      open,
        TXCOMINIT                       =>      tied_to_ground_i,
        TXCOMSAS                        =>      tied_to_ground_i,
        TXCOMWAKE                       =>      tied_to_ground_i

     );

end RTL;  
