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
--  RX_LL_DEFRAMER
--
--
--
--  Description: The RX_LL_DEFRAMER extracts framing information from incoming channel
--               data beats.  It detects the start and end of frames, invalidates data
--               that is outside of a frame, and generates signals that go to the Output
--               and Storage blocks to indicate when the end of a frame has been detected.
--
--               This module supports 8 4-byte lane designs.
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.STD_LOGIC_ARITH.all;

-- synthesis translate_off
library UNISIM;
use UNISIM.all;
-- synthesis translate_on


entity CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_RX_LL_DEFRAMER is

    port (

            PDU_DATA_V      : in std_logic_vector(0 to 7);
            PDU_SCP         : in std_logic_vector(0 to 7);
            PDU_ECP         : in std_logic_vector(0 to 7);
            USER_CLK        : in std_logic;
            RESET           : in std_logic;
            DEFRAMED_DATA_V : out std_logic_vector(0 to 7);
            IN_FRAME        : out std_logic_vector(0 to 7);
            AFTER_SCP       : out std_logic_vector(0 to 7)

         );

end CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_RX_LL_DEFRAMER;

architecture RTL of CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_RX_LL_DEFRAMER is

-- Parameter Declarations --

    constant DLY : time := 1 ns;

-- External Register Declarations --

    signal DEFRAMED_DATA_V_Buffer : std_logic_vector(0 to 7);
    signal IN_FRAME_Buffer        : std_logic_vector(0 to 7);
    signal AFTER_SCP_Buffer       : std_logic_vector(0 to 7);

-- Internal Register Declarations --

    signal  in_frame_r : std_logic;
    signal  tied_gnd   : std_logic;
    signal  tied_vcc   : std_logic;

-- Wire Declarations --

    signal  carry_select_c     : std_logic_vector(0 to 7);
    signal  after_scp_select_c : std_logic_vector(0 to 7);
    signal  in_frame_c         : std_logic_vector(0 to 7);
    signal  after_scp_c        : std_logic_vector(0 to 7);

    component MUXCY

        port (

                O  : out std_logic;
                CI : in std_logic;
                DI : in std_logic;
                S  : in std_logic

             );

    end component;

begin

    DEFRAMED_DATA_V <= DEFRAMED_DATA_V_Buffer;
    IN_FRAME        <= IN_FRAME_Buffer;
    AFTER_SCP       <= AFTER_SCP_Buffer;

    tied_gnd <= '0';
    tied_vcc <= '1';

-- Main Body of Code --

    -- Mask Invalid data --

    -- Keep track of inframe status between clock cycles.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            if(RESET = '1') then

                in_frame_r <= '0' after DLY;

            else

                in_frame_r <= in_frame_c(7) after DLY;

            end if;

        end if;

    end process;


    -- Combinatorial inframe detect for lane 0.

    carry_select_c(0) <= not PDU_ECP(0) and not PDU_SCP(0);

    in_frame_muxcy_0 : MUXCY

        port map (

                    O  => in_frame_c(0),
                    CI => in_frame_r,
                    DI => PDU_SCP(0),
                    S  => carry_select_c(0)

                 );


    -- Combinatorial inframe detect for 2-byte chunk 1.

    carry_select_c(1) <= not PDU_ECP(1) and not PDU_SCP(1);

    in_frame_muxcy_1 : MUXCY

        port map (

                    O  => in_frame_c(1),
                    CI => in_frame_c(0),
                    DI => PDU_SCP(1),
                    S  => carry_select_c(1)

                 );


    -- Combinatorial inframe detect for 2-byte chunk 2.

    carry_select_c(2) <= not PDU_ECP(2) and not PDU_SCP(2);

    in_frame_muxcy_2 : MUXCY

        port map (

                    O  => in_frame_c(2),
                    CI => in_frame_c(1),
                    DI => PDU_SCP(2),
                    S  => carry_select_c(2)

                 );


    -- Combinatorial inframe detect for 2-byte chunk 3.

    carry_select_c(3) <= not PDU_ECP(3) and not PDU_SCP(3);

    in_frame_muxcy_3 : MUXCY

        port map (

                    O  => in_frame_c(3),
                    CI => in_frame_c(2),
                    DI => PDU_SCP(3),
                    S  => carry_select_c(3)

                 );


    -- Combinatorial inframe detect for 2-byte chunk 4.

    carry_select_c(4) <= not PDU_ECP(4) and not PDU_SCP(4);

    in_frame_muxcy_4 : MUXCY

        port map (

                    O  => in_frame_c(4),
                    CI => in_frame_c(3),
                    DI => PDU_SCP(4),
                    S  => carry_select_c(4)

                 );


    -- Combinatorial inframe detect for 2-byte chunk 5.

    carry_select_c(5) <= not PDU_ECP(5) and not PDU_SCP(5);

    in_frame_muxcy_5 : MUXCY

        port map (

                    O  => in_frame_c(5),
                    CI => in_frame_c(4),
                    DI => PDU_SCP(5),
                    S  => carry_select_c(5)

                 );


    -- Combinatorial inframe detect for 2-byte chunk 6.

    carry_select_c(6) <= not PDU_ECP(6) and not PDU_SCP(6);

    in_frame_muxcy_6 : MUXCY

        port map (

                    O  => in_frame_c(6),
                    CI => in_frame_c(5),
                    DI => PDU_SCP(6),
                    S  => carry_select_c(6)

                 );


    -- Combinatorial inframe detect for 2-byte chunk 7.

    carry_select_c(7) <= not PDU_ECP(7) and not PDU_SCP(7);

    in_frame_muxcy_7 : MUXCY

        port map (

                    O  => in_frame_c(7),
                    CI => in_frame_c(6),
                    DI => PDU_SCP(7),
                    S  => carry_select_c(7)

                 );


    -- The data from a lane is valid if its valid signal is asserted and it is
    -- inside a frame.  Note the use of Bitwise AND.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            if (RESET = '1') then

                DEFRAMED_DATA_V_Buffer <= (others => '0') after DLY;

            else

                DEFRAMED_DATA_V_Buffer <= in_frame_c and PDU_DATA_V;

            end if;

        end if;

    end process;


    -- Register the inframe status.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            if (RESET = '1') then

                IN_FRAME_Buffer <= conv_std_logic_vector(0,8) after DLY;

            else

                IN_FRAME_Buffer <= in_frame_r & in_frame_c(0 to 6) after DLY;

            end if;

        end if;

    end process;


    -- Mark lanes that could contain data that occurs after an SCP. --

    -- Combinatorial data after start detect for lane 0.

    after_scp_select_c(0) <= not PDU_SCP(0);

    data_after_start_muxcy_0:MUXCY

        port map (

                    O  => after_scp_c(0),
                    CI => tied_gnd,
                    DI => tied_vcc,
                    S  => after_scp_select_c(0)

                 );


    -- Combinatorial data after start detect for lane1.

    after_scp_select_c(1) <= not PDU_SCP(1);

    data_after_start_muxcy_1:MUXCY

        port map (

                    O  => after_scp_c(1),
                    CI => after_scp_c(0),
                    DI => tied_vcc,
                    S  => after_scp_select_c(1)
                 );


    -- Combinatorial data after start detect for lane2.

    after_scp_select_c(2) <= not PDU_SCP(2);

    data_after_start_muxcy_2:MUXCY

        port map (

                    O  => after_scp_c(2),
                    CI => after_scp_c(1),
                    DI => tied_vcc,
                    S  => after_scp_select_c(2)
                 );


    -- Combinatorial data after start detect for lane3.

    after_scp_select_c(3) <= not PDU_SCP(3);

    data_after_start_muxcy_3:MUXCY

        port map (

                    O  => after_scp_c(3),
                    CI => after_scp_c(2),
                    DI => tied_vcc,
                    S  => after_scp_select_c(3)
                 );


    -- Combinatorial data after start detect for lane4.

    after_scp_select_c(4) <= not PDU_SCP(4);

    data_after_start_muxcy_4:MUXCY

        port map (

                    O  => after_scp_c(4),
                    CI => after_scp_c(3),
                    DI => tied_vcc,
                    S  => after_scp_select_c(4)
                 );


    -- Combinatorial data after start detect for lane5.

    after_scp_select_c(5) <= not PDU_SCP(5);

    data_after_start_muxcy_5:MUXCY

        port map (

                    O  => after_scp_c(5),
                    CI => after_scp_c(4),
                    DI => tied_vcc,
                    S  => after_scp_select_c(5)
                 );


    -- Combinatorial data after start detect for lane6.

    after_scp_select_c(6) <= not PDU_SCP(6);

    data_after_start_muxcy_6:MUXCY

        port map (

                    O  => after_scp_c(6),
                    CI => after_scp_c(5),
                    DI => tied_vcc,
                    S  => after_scp_select_c(6)
                 );


    -- Combinatorial data after start detect for lane7.

    after_scp_select_c(7) <= not PDU_SCP(7);

    data_after_start_muxcy_7:MUXCY

        port map (

                    O  => after_scp_c(7),
                    CI => after_scp_c(6),
                    DI => tied_vcc,
                    S  => after_scp_select_c(7)
                 );


    -- Register the output.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            if (RESET = '1') then

                AFTER_SCP_Buffer <= (others => '0');

            else

                AFTER_SCP_Buffer <= after_scp_c;

            end if;

        end if;

    end process;

end RTL;
