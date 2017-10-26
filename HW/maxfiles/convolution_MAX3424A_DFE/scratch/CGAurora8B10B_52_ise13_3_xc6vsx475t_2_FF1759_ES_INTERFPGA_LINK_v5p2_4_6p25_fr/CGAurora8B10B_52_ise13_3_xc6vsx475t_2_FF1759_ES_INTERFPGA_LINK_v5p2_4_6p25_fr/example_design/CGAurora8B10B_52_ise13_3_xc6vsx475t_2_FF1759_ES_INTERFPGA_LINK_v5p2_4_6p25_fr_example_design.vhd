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
---------------------------------------------------------------------------------------------
--  AURORA_EXAMPLE
--
--  Aurora Generator
--
--
--
--  Description: Sample Instantiation of a 4 4-byte lane module.
--               Only tests initialization in hardware.
--
--         

library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.STD_LOGIC_MISC.all;
use WORK.AURORA_PKG.all;

-- synthesis translate_off
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
-- synthesis translate_on

entity CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_example_design is
   generic(
           USE_CHIPSCOPE          : integer :=   0;
           SIM_GTXRESET_SPEEDUP   : integer :=   1      --Set to 1 to speed up sim reset
         );
    port (

    -- User I/O

            RESET             : in std_logic;
            HARD_ERR          : out std_logic;
            SOFT_ERR          : out std_logic;
            FRAME_ERR         : out std_logic;
            ERR_COUNT         : out std_logic_vector(0 to 7);
            LANE_UP           : out std_logic_vector(0 to 3);
            CHANNEL_UP        : out std_logic;
           INIT_CLK_P         : in std_logic;
           INIT_CLK_N         : in std_logic;
            GT_RESET_IN       : in  std_logic;

    -- Clocks

           GTXQ3_P    : in  std_logic;
           GTXQ3_N    : in  std_logic;

   -- V5 I/O

            RXP               : in std_logic_vector(0 to 3);
            RXN               : in std_logic_vector(0 to 3);
            TXP               : out std_logic_vector(0 to 3);
            TXN               : out std_logic_vector(0 to 3)

         );

end CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_example_design;

architecture MAPPED of CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_example_design is
  attribute core_generation_info           : string;
  attribute core_generation_info of MAPPED : architecture is "CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr,aurora_8b10b_v5_2,{backchannel_mode=Sidebands, c_aurora_lanes=4, c_column_used=left, c_gt_clock_1=GTXQ3, c_gt_clock_2=None, c_gt_loc_1=X, c_gt_loc_10=X, c_gt_loc_11=X, c_gt_loc_12=X, c_gt_loc_13=1, c_gt_loc_14=2, c_gt_loc_15=3, c_gt_loc_16=4, c_gt_loc_17=X, c_gt_loc_18=X, c_gt_loc_19=X, c_gt_loc_2=X, c_gt_loc_20=X, c_gt_loc_21=X, c_gt_loc_22=X, c_gt_loc_23=X, c_gt_loc_24=X, c_gt_loc_25=X, c_gt_loc_26=X, c_gt_loc_27=X, c_gt_loc_28=X, c_gt_loc_29=X, c_gt_loc_3=X, c_gt_loc_30=X, c_gt_loc_31=X, c_gt_loc_32=X, c_gt_loc_33=X, c_gt_loc_34=X, c_gt_loc_35=X, c_gt_loc_36=X, c_gt_loc_37=X, c_gt_loc_38=X, c_gt_loc_39=X, c_gt_loc_4=X, c_gt_loc_40=X, c_gt_loc_41=X, c_gt_loc_42=X, c_gt_loc_43=X, c_gt_loc_44=X, c_gt_loc_45=X, c_gt_loc_46=X, c_gt_loc_47=X, c_gt_loc_48=X, c_gt_loc_5=X, c_gt_loc_6=X, c_gt_loc_7=X, c_gt_loc_8=X, c_gt_loc_9=X, c_lane_width=4, c_line_rate=6.25, c_nfc=false, c_nfc_mode=IMM, c_refclk_frequency=250.0, c_simplex=false, c_simplex_mode=TX, c_stream=false, c_ufc=false, flow_mode=None, interface_mode=Framing, dataflow_config=Duplex}";

-- Parameter Declarations --

    constant DLY : time := 1 ns;

-- External Register Declarations --

    signal HARD_ERR_Buffer    : std_logic;
    signal SOFT_ERR_Buffer    : std_logic;
    signal FRAME_ERR_Buffer   : std_logic;
    signal LANE_UP_Buffer     : std_logic_vector(0 to 3);
    signal CHANNEL_UP_Buffer  : std_logic;
    signal TXP_Buffer         : std_logic_vector(0 to 3);
    signal TXN_Buffer         : std_logic_vector(0 to 3);

-- Internal Register Declarations --

    signal gt_reset_i         : std_logic; 
    signal system_reset_i     : std_logic;
 
-- Wire Declarations --

    -- LocalLink TX Interface

    signal tx_d_i             : std_logic_vector(0 to 127);
    signal tx_rem_i           : std_logic_vector(0 to 3);
    signal tx_src_rdy_n_i     : std_logic;
    signal tx_sof_n_i         : std_logic;
    signal tx_eof_n_i         : std_logic;

    signal tx_dst_rdy_n_i     : std_logic;

    -- LocalLink RX Interface

    signal rx_d_i             : std_logic_vector(0 to 127);
    signal rx_rem_i           : std_logic_vector(0 to 3);
    signal rx_src_rdy_n_i     : std_logic;
    signal rx_sof_n_i         : std_logic;
    signal rx_eof_n_i         : std_logic;


    -- V5 Reference Clock Interface
    signal GTXQ3_left_i      : std_logic;

    -- Error Detection Interface

    signal hard_err_i       : std_logic;
    signal soft_err_i       : std_logic;
    signal frame_err_i      : std_logic;

    -- Status

    signal channel_up_i       : std_logic;
    signal lane_up_i          : std_logic_vector(0 to 3);

    -- Clock Compensation Control Interface

    signal warn_cc_i          : std_logic;
    signal do_cc_i            : std_logic;

    -- System Interface

    signal pll_not_locked_i   : std_logic;
    signal user_clk_i         : std_logic;
    signal sync_clk_i         : std_logic;
    signal reset_i            : std_logic;
    signal power_down_i       : std_logic;
    signal loopback_i         : std_logic_vector(2 downto 0);
    signal tx_lock_i          : std_logic;
    signal tx_out_clk_i       : std_logic;
    --Frame check signals
    signal err_count_i      : std_logic_vector(0 to 7);
    signal ERR_COUNT_Buffer : std_logic_vector(0 to 7);

-- VIO Signals
   signal icon_to_vio_i       : std_logic_vector (35 downto 0);
   signal sync_in_i           : std_logic_vector (0 to 63);
   signal sync_out_i          : std_logic_vector (0 to 15);


   signal lane_up_i_i  	      : std_logic;
   signal tx_lock_i_i  	      : std_logic;
   signal lane_up_reduce_i    : std_logic;
   attribute ASYNC_REG        : string;
   attribute ASYNC_REG of tx_lock_i  : signal is "TRUE";

-- Component Declarations --

    component IBUFDS_GTXE1

    generic(

      CLKCM_CFG	    : boolean       := TRUE;
      CLKRCV_TRST   : boolean       := TRUE;
      REFCLKOUT_DLY : bit_vector    := b"0000000000"
      );

    port(
      O       : out std_ulogic;
      ODIV2   : out std_ulogic;

      CEB     : in  std_ulogic;
      I       : in  std_ulogic;
      IB      : in  std_ulogic
       );

    end component; 
    component IBUFDS
        port (

                O : out std_ulogic;
                I : in std_ulogic;
                IB : in std_ulogic);

    end component;

    component IBUFG

        port (

                O : out std_ulogic;
                I : in  std_ulogic

             );
    
    end component;


    component CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_CLOCK_MODULE
        port (
                GT_CLK                  : in std_logic;
                GT_CLK_LOCKED           : in std_logic;
                USER_CLK                : out std_logic;
                SYNC_CLK                : out std_logic;
                PLL_NOT_LOCKED          : out std_logic
             );
    end component;

    component CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_RESET_LOGIC
        port (
                RESET                  : in std_logic;
                USER_CLK               : in std_logic;
                INIT_CLK_P             : in std_logic;
                INIT_CLK_N             : in std_logic;
                GT_RESET_IN            : in std_logic;
                TX_LOCK_IN             : in std_logic;
                PLL_NOT_LOCKED         : in std_logic;

                SYSTEM_RESET           : out std_logic;
                GT_RESET_OUT           : out std_logic
             );
    end component;

    component CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr
        generic(
                 SIM_GTXRESET_SPEEDUP :integer := 1
               );
        port   (
        -- LocalLink TX Interface

                TX_D             : in std_logic_vector(0 to 127);
                TX_REM           : in std_logic_vector(0 to 3);
                TX_SRC_RDY_N     : in std_logic;
                TX_SOF_N         : in std_logic;
                TX_EOF_N         : in std_logic;
                TX_DST_RDY_N     : out std_logic;

        -- LocalLink RX Interface

                RX_D             : out std_logic_vector(0 to 127);
                RX_REM           : out std_logic_vector(0 to 3);
                RX_SRC_RDY_N     : out std_logic;
                RX_SOF_N         : out std_logic;
                RX_EOF_N         : out std_logic;
        -- V5 Serial I/O

                RXP              : in std_logic_vector(0 to 3);
                RXN              : in std_logic_vector(0 to 3);

                TXP              : out std_logic_vector(0 to 3);
                TXN              : out std_logic_vector(0 to 3);

        -- V5 Reference Clock Interface

                GTXQ3    : in std_logic;
        -- Error Detection Interface

                HARD_ERR       : out std_logic;
                SOFT_ERR       : out std_logic;
                
                FRAME_ERR      : out std_logic;

        -- Status

                CHANNEL_UP       : out std_logic;
                LANE_UP          : out std_logic_vector(0 to 3);

        -- Clock Compensation Control Interface

                WARN_CC          : in std_logic;
                DO_CC            : in std_logic;

        -- System Interface

                USER_CLK         : in std_logic;
                SYNC_CLK         : in std_logic;
                GT_RESET         : in std_logic;
                RESET            : in std_logic;
                POWER_DOWN       : in std_logic;
                LOOPBACK         : in std_logic_vector(2 downto 0);
                TX_OUT_CLK       : out std_logic;
                TX_LOCK          : out std_logic
            );

    end component;


    component CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_STANDARD_CC_MODULE

        port (

        -- Clock Compensation Control Interface

                WARN_CC        : out std_logic;
                DO_CC          : out std_logic;

        -- System Interface

                PLL_NOT_LOCKED : in std_logic;
                USER_CLK       : in std_logic;
                RESET          : in std_logic

             );

    end component;
    
 
    component CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_FRAME_GEN
    port
    (
        -- User Interface
        TX_D            : out  std_logic_vector(0 to 127); 
        TX_REM          : out  std_logic_vector(0 to 3);     
        TX_SOF_N        : out  std_logic;
        TX_EOF_N        : out  std_logic;
        TX_SRC_RDY_N    : out  std_logic;
        TX_DST_RDY_N    : in   std_logic;  
  

        -- System Interface
        USER_CLK        : in  std_logic;   
        RESET           : in  std_logic;
        CHANNEL_UP      : in  std_logic
    ); 
    end component;
 
 
    component CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_FRAME_CHECK
    port
    (
        -- User Interface
        RX_D            : in  std_logic_vector(0 to 127); 
        RX_REM          : in  std_logic_vector(0 to 3);     
        RX_SOF_N        : in  std_logic;
        RX_EOF_N        : in  std_logic;
        RX_SRC_RDY_N    : in  std_logic; 


        -- System Interface
        USER_CLK        : in  std_logic;   
        RESET           : in  std_logic;
        CHANNEL_UP      : in  std_logic;
        ERR_COUNT       : out std_logic_vector(0 to 7)
  
    );
    end component;

  -------------------------------------------------------------------
  --  ICON core component declaration
  -------------------------------------------------------------------
  component v6_icon
  
    port
    (
      control0    :   out std_logic_vector(35 downto 0)
    );
  end component;

  -------------------------------------------------------------------
  --  VIO core component declaration
  -------------------------------------------------------------------
  component v6_vio
  
    port
    (
      control     : in    std_logic_vector(35 downto 0);
      clk         : in    std_logic;
      sync_in     : in    std_logic_vector(63 downto 0);
      sync_out    : out   std_logic_vector(15 downto 0)
    );
  end component;
                                                                                
begin
    lane_up_reduce_i    <=  AND_REDUCE(lane_up_i);

    HARD_ERR  <= HARD_ERR_Buffer;
    SOFT_ERR  <= SOFT_ERR_Buffer;
    FRAME_ERR <= FRAME_ERR_Buffer;
    ERR_COUNT   <= ERR_COUNT_Buffer;
    LANE_UP     <= LANE_UP_Buffer;
    CHANNEL_UP  <= CHANNEL_UP_Buffer;
    TXP         <= TXP_Buffer;
    TXN         <= TXN_Buffer;

    -- ___________________________Clock Buffers________________________
      IBUFDS_i :  IBUFDS_GTXE1
      port map (
           I     => GTXQ3_P,
           IB    => GTXQ3_N,
           CEB   => '0',
           O     => GTXQ3_left_i,
           ODIV2 => OPEN);

    -- Instantiate a clock module for clock division

    clock_module_i : CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_CLOCK_MODULE
        port map (

                    GT_CLK              => tx_out_clk_i,
                    GT_CLK_LOCKED       => tx_lock_i,
                    USER_CLK            => user_clk_i,
                    SYNC_CLK            => sync_clk_i,
                    PLL_NOT_LOCKED      => pll_not_locked_i
                 );

    -- Register User I/O --

    -- Register User Outputs from core.

    process (user_clk_i)

    begin

        if (user_clk_i 'event and user_clk_i = '1') then

            HARD_ERR_Buffer  <= hard_err_i;
            SOFT_ERR_Buffer  <= soft_err_i;
            FRAME_ERR_Buffer <= frame_err_i;
            ERR_COUNT_Buffer <= err_count_i;
            LANE_UP_Buffer     <= lane_up_i;
            CHANNEL_UP_Buffer  <= channel_up_i;

        end if;

    end process;

    -- System Interface

    power_down_i     <= '0';
    loopback_i       <= "000";


    -- _______________________________ Module Instantiations ________________________--

    --Connect a frame checker to the user interface
    frame_check_i : CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_FRAME_CHECK
    port map
    (
        -- User Interface
        RX_D            =>  rx_d_i, 
        RX_REM          =>  rx_rem_i,
        RX_SOF_N        =>  rx_sof_n_i,
        RX_EOF_N        =>  rx_eof_n_i,
        RX_SRC_RDY_N    =>  rx_src_rdy_n_i,  

        -- System Interface
        USER_CLK        =>  user_clk_i,   
        RESET           =>  reset_i,
        CHANNEL_UP      =>  channel_up_i,
        ERR_COUNT       =>  err_count_i
  
    );


    --Connect a frame generator to the user interface
    frame_gen_i : CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_FRAME_GEN
    port map
    (
        -- User Interface
        TX_D            =>  tx_d_i,
            TX_REM          =>  tx_rem_i,
        TX_SOF_N        =>  tx_sof_n_i,
        TX_EOF_N        =>  tx_eof_n_i,
            TX_SRC_RDY_N    =>  tx_src_rdy_n_i,
        TX_DST_RDY_N    =>  tx_dst_rdy_n_i,    


        -- System Interface
        USER_CLK        =>  user_clk_i,
        RESET           =>  reset_i,
        CHANNEL_UP      =>  channel_up_i
    ); 




    -- Module Instantiations --

    aurora_module_i : CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr
        generic map(
                    SIM_GTXRESET_SPEEDUP => SIM_GTXRESET_SPEEDUP
                   )
        port map   (
        -- LocalLink TX Interface

                    TX_D             => tx_d_i,
                    TX_REM           => tx_rem_i,
                    TX_SRC_RDY_N     => tx_src_rdy_n_i,
                    TX_SOF_N         => tx_sof_n_i,
                    TX_EOF_N         => tx_eof_n_i,
                    TX_DST_RDY_N     => tx_dst_rdy_n_i,

        -- LocalLink RX Interface

                    RX_D             => rx_d_i,
                    RX_REM           => rx_rem_i,
                    RX_SRC_RDY_N     => rx_src_rdy_n_i,
                    RX_SOF_N         => rx_sof_n_i,
                    RX_EOF_N         => rx_eof_n_i,

        -- V5 Serial I/O

                    RXP              => RXP,
                    RXN              => RXN,
                    TXP              => TXP_Buffer,
                    TXN              => TXN_Buffer,

        -- V5 Reference Clock Interface
                   GTXQ3    => GTXQ3_left_i,

        -- Error Detection Interface

                    HARD_ERR       => hard_err_i,
                    SOFT_ERR       => soft_err_i,
                    FRAME_ERR      => frame_err_i,

        -- Status

                    CHANNEL_UP       => channel_up_i,
                    LANE_UP          => lane_up_i,

        -- Clock Compensation Control Interface

                    WARN_CC          => warn_cc_i,
                    DO_CC            => do_cc_i,

        -- System Interface

                    USER_CLK         => user_clk_i,
                    SYNC_CLK         => sync_clk_i,
                    RESET            => reset_i,
                    POWER_DOWN       => power_down_i,
                    LOOPBACK         => loopback_i,
                    GT_RESET         => gt_reset_i,
                    TX_OUT_CLK       => tx_out_clk_i,
                    TX_LOCK          => tx_lock_i
                 );

    standard_cc_module_i : CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_STANDARD_CC_MODULE

        port map (

        -- Clock Compensation Control Interface

                    WARN_CC        => warn_cc_i,
                    DO_CC          => do_cc_i,

        -- System Interface

                    PLL_NOT_LOCKED => pll_not_locked_i,
                    USER_CLK       => user_clk_i,
                    RESET          => lane_up_reduce_i

                 );

    reset_logic_i : CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_RESET_LOGIC
        port map (
                    RESET            => RESET,
                    USER_CLK         => user_clk_i,
                    INIT_CLK_P       => INIT_CLK_P,
                    INIT_CLK_N       => INIT_CLK_N,
                    GT_RESET_IN      => GT_RESET_IN,
                    TX_LOCK_IN       => tx_lock_i,
                    PLL_NOT_LOCKED   => pll_not_locked_i,

                    SYSTEM_RESET     => system_reset_i,
                    GT_RESET_OUT     => gt_reset_i
                 );

 chipscope1 : if USE_CHIPSCOPE = 1 generate

   lane_up_i_i    <=  AND_REDUCE(lane_up_i);
   tx_lock_i_i    <= '1'  and tx_lock_i;

  --Shared VIO Inputs
   sync_in_i(0 to 15)  <= tx_d_i(0 to 15);
   sync_in_i(16 to 31) <= rx_d_i(0 to 15);
   sync_in_i(32 to 39) <= err_count_i;
   sync_in_i(57)       <= frame_err_i;
   sync_in_i(58)       <= soft_err_i;
   sync_in_i(59)       <= hard_err_i;
   sync_in_i(60)       <= tx_lock_i_i;
   sync_in_i(61)       <= pll_not_locked_i;
   sync_in_i(62)       <= lane_up_i_i;
   sync_in_i(63)       <= channel_up_i;

  -------------------------------------------------------------------
  --  ICON core instance
  -------------------------------------------------------------------
  i_icon : v6_icon
  
    port map
    (
      control0    => icon_to_vio_i
    );

  -------------------------------------------------------------------
  --  VIO core instance
  -------------------------------------------------------------------
  i_vio : v6_vio
  
    port map
    (
      control   => icon_to_vio_i,
      clk       => user_clk_i,
      sync_in   => sync_in_i,
      sync_out  => sync_out_i
    );
end generate chipscope1;

no_chipscope1 : if USE_CHIPSCOPE = 0 generate
   sync_in_i  <= (others=>'0');
end generate no_chipscope1;

chipscope2 : if USE_CHIPSCOPE = 1 generate
 -- Shared VIO Outputs
    reset_i <= system_reset_i or sync_out_i(0);
end generate chipscope2;

no_chipscope2 : if USE_CHIPSCOPE = 0 generate
 -- Shared VIO Outputs
    reset_i <= system_reset_i;
end generate no_chipscope2;

end MAPPED;
