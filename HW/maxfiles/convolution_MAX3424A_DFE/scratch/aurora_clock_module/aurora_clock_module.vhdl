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

--
--  CLOCK_MODULE
--
--
--
--  Description: A module provided as a convenience for desingners using 4-byte
--               lane Aurora Modules. This module takes the V5 reference clock as
--               input, and produces a divided clock on a global clock net suitable
--               for driving application logic connected to the Aurora User Interface.
--


library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;


-- synthesis translate_off
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
-- synthesis translate_on

entity aurora_clock_module is
generic
(
   constant MULT        : real    := 2.0;
   constant DIVIDE      : integer := 1;
   constant CLK_PERIOD  : real    := 3.2;
   constant OUT0_DIVIDE : real    := 4.0;
   constant OUT1_DIVIDE : integer := 2;
   constant OUT2_DIVIDE : integer := 4;
   constant OUT3_DIVIDE : integer := 2
);
    port (

            GT_CLK                 : in std_logic;
            GT_CLK_LOCKED          : in std_logic;
            USER_CLK               : out std_logic;
            SYNC_CLK               : out std_logic;
            PLL_NOT_LOCKED         : out std_logic

         );

end aurora_clock_module;


architecture MAPPED of aurora_clock_module is
  attribute core_generation_info           : string;
  attribute core_generation_info of MAPPED : architecture is "aurora_8b10b_v5_1,aurora_8b10b_v5_1,{backchannel_mode=Sidebands, c_aurora_lanes=4, c_column_used=left, c_gt_clock_1=GTXQ2, c_gt_clock_2=None, c_gt_loc_1=X, c_gt_loc_10=2, c_gt_loc_11=3, c_gt_loc_12=4, c_gt_loc_13=X, c_gt_loc_14=X, c_gt_loc_15=X, c_gt_loc_16=X, c_gt_loc_17=X, c_gt_loc_18=X, c_gt_loc_19=X, c_gt_loc_2=X, c_gt_loc_20=X, c_gt_loc_21=X, c_gt_loc_22=X, c_gt_loc_23=X, c_gt_loc_24=X, c_gt_loc_25=X, c_gt_loc_26=X, c_gt_loc_27=X, c_gt_loc_28=X, c_gt_loc_29=X, c_gt_loc_3=X, c_gt_loc_30=X, c_gt_loc_31=X, c_gt_loc_32=X, c_gt_loc_33=X, c_gt_loc_34=X, c_gt_loc_35=X, c_gt_loc_36=X, c_gt_loc_37=X, c_gt_loc_38=X, c_gt_loc_39=X, c_gt_loc_4=X, c_gt_loc_40=X, c_gt_loc_41=X, c_gt_loc_42=X, c_gt_loc_43=X, c_gt_loc_44=X, c_gt_loc_45=X, c_gt_loc_46=X, c_gt_loc_47=X, c_gt_loc_48=X, c_gt_loc_5=X, c_gt_loc_6=X, c_gt_loc_7=X, c_gt_loc_8=X, c_gt_loc_9=1, c_lane_width=4, c_line_rate=6.25, c_nfc=false, c_nfc_mode=IMM, c_refclk_frequency=250.0, c_simplex=false, c_simplex_mode=TX, c_stream=false, c_ufc=false, flow_mode=None, interface_mode=Framing, dataflow_config=Duplex,}";

-- External Register Declarations --

    signal PLL_NOT_LOCKED_Buffer    : std_logic;



-- Wire Declarations --

    signal clkfb_w                  : std_logic;
    signal clkout0_o                : std_logic;
    signal clkout1_o                : std_logic;
    signal clkout2_o                : std_logic;
    signal clkout3_o                : std_logic;
    signal locked_w                 : std_logic;
    signal reset_n                  : std_logic;

    signal   tied_to_ground_vec_i   : std_logic_vector(15 downto 0);
    signal   tied_to_ground_i       : std_logic;
    signal   tied_to_vcc_i          : std_logic;

    component BUFG

        port (

                O : out std_ulogic;
                I : in  std_ulogic

             );

    end component;

    component MMCM_ADV 

    generic (
      BANDWIDTH : string := "OPTIMIZED";
      CLKFBOUT_MULT_F : real := 1.0;
      CLKFBOUT_PHASE : real := 0.0;
      CLKFBOUT_USE_FINE_PS : boolean := FALSE;
      CLKIN1_PERIOD : real := 0.0;
      CLKIN2_PERIOD : real := 0.0;
      CLKOUT0_DIVIDE_F : real := 1.0;
      CLKOUT0_DUTY_CYCLE : real := 0.5;
      CLKOUT0_PHASE : real := 0.0;
      CLKOUT0_USE_FINE_PS : boolean := FALSE;
      CLKOUT1_DIVIDE : integer := 1;
      CLKOUT1_DUTY_CYCLE : real := 0.5;
      CLKOUT1_PHASE : real := 0.0;
      CLKOUT1_USE_FINE_PS : boolean := FALSE;
      CLKOUT2_DIVIDE : integer := 1;
      CLKOUT2_DUTY_CYCLE : real := 0.5;
      CLKOUT2_PHASE : real := 0.0;
      CLKOUT2_USE_FINE_PS : boolean := FALSE;
      CLKOUT3_DIVIDE : integer := 1;
      CLKOUT3_DUTY_CYCLE : real := 0.5;
      CLKOUT3_PHASE : real := 0.0;
      CLKOUT3_USE_FINE_PS : boolean := FALSE;
      CLKOUT4_CASCADE : boolean := FALSE;
      CLKOUT4_DIVIDE : integer := 1;
      CLKOUT4_DUTY_CYCLE : real := 0.5;
      CLKOUT4_PHASE : real := 0.0;
      CLKOUT4_USE_FINE_PS : boolean := FALSE;
      CLKOUT5_DIVIDE : integer := 1;
      CLKOUT5_DUTY_CYCLE : real := 0.5;
      CLKOUT5_PHASE : real := 0.0;
      CLKOUT5_USE_FINE_PS : boolean := FALSE;
      CLKOUT6_DIVIDE : integer := 1;
      CLKOUT6_DUTY_CYCLE : real := 0.5;
      CLKOUT6_PHASE : real := 0.0;
      CLKOUT6_USE_FINE_PS : boolean := FALSE;
      CLOCK_HOLD : boolean := FALSE;
      COMPENSATION : string := "ZHOLD";
      DIVCLK_DIVIDE : integer := 1;
      REF_JITTER1 : real := 0.0;
      REF_JITTER2 : real := 0.0;
      STARTUP_WAIT : boolean := FALSE
      );
    port (
      CLKFBOUT             : out std_ulogic := '0';
      CLKFBOUTB            : out std_ulogic := '0';
      CLKFBSTOPPED         : out std_ulogic := '0';
      CLKINSTOPPED         : out std_ulogic := '0';
      CLKOUT0              : out std_ulogic := '0';
      CLKOUT0B             : out std_ulogic := '0';
      CLKOUT1              : out std_ulogic := '0';
      CLKOUT1B             : out std_ulogic := '0';
      CLKOUT2              : out std_ulogic := '0';
      CLKOUT2B             : out std_ulogic := '0';
      CLKOUT3              : out std_ulogic := '0';
      CLKOUT3B             : out std_ulogic := '0';
      CLKOUT4              : out std_ulogic := '0';
      CLKOUT5              : out std_ulogic := '0';
      CLKOUT6              : out std_ulogic := '0';
      DO                   : out std_logic_vector (15 downto 0);
      DRDY                 : out std_ulogic := '0';
      LOCKED               : out std_ulogic := '0';
      PSDONE               : out std_ulogic := '0';
      CLKFBIN              : in std_ulogic;
      CLKIN1               : in std_ulogic;
      CLKIN2               : in std_ulogic;
      CLKINSEL             : in std_ulogic;
      DADDR                : in std_logic_vector(6 downto 0);
      DCLK                 : in std_ulogic;
      DEN                  : in std_ulogic;
      DI                   : in std_logic_vector(15 downto 0);
      DWE                  : in std_ulogic;
      PSCLK                : in std_ulogic;
      PSEN                 : in std_ulogic;
      PSINCDEC             : in std_ulogic;
      PWRDWN               : in std_ulogic;
      RST                  : in std_ulogic
     );
   end component;

begin

    --  Static signal Assigments    
    tied_to_ground_i         <= '0';
    tied_to_ground_vec_i     <= (others=>'0');
    tied_to_vcc_i            <= '1';

    PLL_NOT_LOCKED <= PLL_NOT_LOCKED_Buffer;
    reset_n        <= not GT_CLK_LOCKED; 


-- ************************Main Body of Code *************************--

    -- Instantiate a MMCM module to divide the reference clock.

    mmcm_adv_i  : MMCM_ADV
    generic map
    (
         CLKFBOUT_MULT_F  =>  MULT,
         DIVCLK_DIVIDE    =>  DIVIDE,
         CLKFBOUT_PHASE   =>  0.0,
         CLKIN1_PERIOD    =>  CLK_PERIOD,
         CLKIN2_PERIOD    =>  10.0,          -- Not used
         CLKOUT0_DIVIDE_F =>  OUT0_DIVIDE,
         CLKOUT0_PHASE    =>  0.0,
         CLKOUT1_DIVIDE   =>  OUT1_DIVIDE,
         CLKOUT1_PHASE    =>  0.0,
         CLKOUT2_DIVIDE   =>  OUT2_DIVIDE,
         CLKOUT2_PHASE    =>  0.0,
         CLKOUT3_DIVIDE   =>  OUT3_DIVIDE,
         CLKOUT3_PHASE    =>  0.0         
    )
    port map
    (
         CLKIN1          =>  GT_CLK,
         CLKIN2          =>  tied_to_ground_i,
         CLKINSEL        =>  tied_to_vcc_i,
         CLKFBIN         =>  clkfb_w,
         CLKOUT0         =>  clkout0_o,
         CLKOUT0B        =>  open,
         CLKOUT1         =>  clkout1_o,
         CLKOUT1B        =>  open,
         CLKOUT2         =>  clkout2_o,
         CLKOUT2B        =>  open,
         CLKOUT3         =>  clkout3_o,
         CLKOUT3B        =>  open,
         CLKOUT4         =>  open,
         CLKOUT5         =>  open,
         CLKOUT6         =>  open,
         CLKFBOUT        =>  clkfb_w,
         CLKFBOUTB       =>  open,
         CLKFBSTOPPED    =>  open,
         CLKINSTOPPED    =>  open,
         DO              =>  open,
         DRDY            =>  open,
         DADDR           =>  tied_to_ground_vec_i(6 downto 0),
         DCLK            =>  tied_to_ground_i,
         DEN             =>  tied_to_ground_i,
         DI              =>  tied_to_ground_vec_i(15 downto 0),
         DWE             =>  tied_to_ground_i,
         LOCKED          =>  locked_w,
         PSCLK           =>  tied_to_ground_i,
         PSEN            =>  tied_to_ground_i,        
         PSINCDEC        =>  tied_to_ground_i, 
         PSDONE          =>  open,         
         PWRDWN          =>  tied_to_ground_i,
         RST             =>  reset_n     
    );

    sync_clk_net_i : BUFG

        port map (

                    I => clkout1_o,
                    O => SYNC_CLK

                 );
    -- The User Clock is distributed on a global clock net.
    user_clk_net_i : BUFG

        port map (

                    I => clkout0_o,
                    O => USER_CLK

                 );

    -- The PLL_NOT_LOCKED signal is created by inverting the DCM's locked signal.

    PLL_NOT_LOCKED_Buffer <= not locked_w;

end MAPPED;
