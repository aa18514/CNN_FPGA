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
--  STORAGE_MUX
--
--
--
--  Description: The STORAGE_MUX has a set of 16 bit muxes to control the
--               flow of data.  Every output position has its own N:1 mux.
--
--               This module supports 8 4-byte lane designs.
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.STD_LOGIC_ARITH.all;

entity CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_STORAGE_MUX is

    port (

            RAW_DATA     : in std_logic_vector(0 to 127);
            MUX_SELECT   : in std_logic_vector(0 to 39);
            STORAGE_CE   : in std_logic_vector(0 to 7);
            USER_CLK     : in std_logic;
            STORAGE_DATA : out std_logic_vector(0 to 127)

         );

end CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_STORAGE_MUX;

architecture RTL of CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_STORAGE_MUX is

-- Parameter Declarations --

    constant DLY : time := 1 ns;

-- External Register Declarations --

    signal STORAGE_DATA_Buffer : std_logic_vector(0 to 127);

-- Internal Register Declarations --

    signal storage_data_c : std_logic_vector(0 to 127);

begin

    STORAGE_DATA <= STORAGE_DATA_Buffer;

-- Main Body of Code --

    -- Each lane has a set of 16 N:1 muxes connected to all the raw data lanes.

    -- Muxes for Lane 0

    process (MUX_SELECT(0 to 4), RAW_DATA)

    begin

        case MUX_SELECT(0 to 4) is

            when "00000" =>

                storage_data_c(0 to 15) <= RAW_DATA(0 to 15);

            when "00001" =>

                storage_data_c(0 to 15) <= RAW_DATA(16 to 31);

            when "00010" =>

                storage_data_c(0 to 15) <= RAW_DATA(32 to 47);

            when "00011" =>

                storage_data_c(0 to 15) <= RAW_DATA(48 to 63);

            when "00100" =>

                storage_data_c(0 to 15) <= RAW_DATA(64 to 79);

            when "00101" =>

                storage_data_c(0 to 15) <= RAW_DATA(80 to 95);

            when "00110" =>

                storage_data_c(0 to 15) <= RAW_DATA(96 to 111);

            when "00111" =>

                storage_data_c(0 to 15) <= RAW_DATA(112 to 127);

            when others =>

                storage_data_c(0 to 15) <= (others => '0');

        end case;

    end process;


    -- Muxes for Lane 1

    process (MUX_SELECT(5 to 9), RAW_DATA)

    begin

        case MUX_SELECT(5 to 9) is

            when "00000" =>

                storage_data_c(16 to 31) <= RAW_DATA(0 to 15);

            when "00001" =>

                storage_data_c(16 to 31) <= RAW_DATA(16 to 31);

            when "00010" =>

                storage_data_c(16 to 31) <= RAW_DATA(32 to 47);

            when "00011" =>

                storage_data_c(16 to 31) <= RAW_DATA(48 to 63);

            when "00100" =>

                storage_data_c(16 to 31) <= RAW_DATA(64 to 79);

            when "00101" =>

                storage_data_c(16 to 31) <= RAW_DATA(80 to 95);

            when "00110" =>

                storage_data_c(16 to 31) <= RAW_DATA(96 to 111);

            when "00111" =>

                storage_data_c(16 to 31) <= RAW_DATA(112 to 127);

            when others =>

                storage_data_c(16 to 31) <= (others => '0');

        end case;

    end process;


    -- Muxes for Lane 2

    process (MUX_SELECT(10 to 14), RAW_DATA)

    begin

        case MUX_SELECT(10 to 14) is

            when "00000" =>

                storage_data_c(32 to 47) <= RAW_DATA(0 to 15);

            when "00001" =>

                storage_data_c(32 to 47) <= RAW_DATA(16 to 31);

            when "00010" =>

                storage_data_c(32 to 47) <= RAW_DATA(32 to 47);

            when "00011" =>

                storage_data_c(32 to 47) <= RAW_DATA(48 to 63);

            when "00100" =>

                storage_data_c(32 to 47) <= RAW_DATA(64 to 79);

            when "00101" =>

                storage_data_c(32 to 47) <= RAW_DATA(80 to 95);

            when "00110" =>

                storage_data_c(32 to 47) <= RAW_DATA(96 to 111);

            when "00111" =>

                storage_data_c(32 to 47) <= RAW_DATA(112 to 127);

            when others =>

                storage_data_c(32 to 47) <= (others => '0');

        end case;

    end process;


    -- Muxes for Lane 3

    process (MUX_SELECT(15 to 19), RAW_DATA)

    begin

        case MUX_SELECT(15 to 19) is

            when "00000" =>

                storage_data_c(48 to 63) <= RAW_DATA(0 to 15);

            when "00001" =>

                storage_data_c(48 to 63) <= RAW_DATA(16 to 31);

            when "00010" =>

                storage_data_c(48 to 63) <= RAW_DATA(32 to 47);

            when "00011" =>

                storage_data_c(48 to 63) <= RAW_DATA(48 to 63);

            when "00100" =>

                storage_data_c(48 to 63) <= RAW_DATA(64 to 79);

            when "00101" =>

                storage_data_c(48 to 63) <= RAW_DATA(80 to 95);

            when "00110" =>

                storage_data_c(48 to 63) <= RAW_DATA(96 to 111);

            when "00111" =>

                storage_data_c(48 to 63) <= RAW_DATA(112 to 127);

            when others =>

                storage_data_c(48 to 63) <= (others => '0');

        end case;

    end process;


    -- Muxes for Lane 4

    process (MUX_SELECT(20 to 24), RAW_DATA)

    begin

        case MUX_SELECT(20 to 24) is

            when "00000" =>

                storage_data_c(64 to 79) <= RAW_DATA(0 to 15);

            when "00001" =>

                storage_data_c(64 to 79) <= RAW_DATA(16 to 31);

            when "00010" =>

                storage_data_c(64 to 79) <= RAW_DATA(32 to 47);

            when "00011" =>

                storage_data_c(64 to 79) <= RAW_DATA(48 to 63);

            when "00100" =>

                storage_data_c(64 to 79) <= RAW_DATA(64 to 79);

            when "00101" =>

                storage_data_c(64 to 79) <= RAW_DATA(80 to 95);

            when "00110" =>

                storage_data_c(64 to 79) <= RAW_DATA(96 to 111);

            when "00111" =>

                storage_data_c(64 to 79) <= RAW_DATA(112 to 127);

            when others =>

                storage_data_c(64 to 79) <= (others => '0');

        end case;

    end process;


    -- Muxes for Lane 5

    process (MUX_SELECT(25 to 29), RAW_DATA)

    begin

        case MUX_SELECT(25 to 29) is

            when "00000" =>

                storage_data_c(80 to 95) <= RAW_DATA(0 to 15);

            when "00001" =>

                storage_data_c(80 to 95) <= RAW_DATA(16 to 31);

            when "00010" =>

                storage_data_c(80 to 95) <= RAW_DATA(32 to 47);

            when "00011" =>

                storage_data_c(80 to 95) <= RAW_DATA(48 to 63);

            when "00100" =>

                storage_data_c(80 to 95) <= RAW_DATA(64 to 79);

            when "00101" =>

                storage_data_c(80 to 95) <= RAW_DATA(80 to 95);

            when "00110" =>

                storage_data_c(80 to 95) <= RAW_DATA(96 to 111);

            when "00111" =>

                storage_data_c(80 to 95) <= RAW_DATA(112 to 127);

            when others =>

                storage_data_c(80 to 95) <= (others => '0');

        end case;

    end process;


    -- Muxes for Lane 6

    process (MUX_SELECT(30 to 34), RAW_DATA)

    begin

        case MUX_SELECT(30 to 34) is

            when "00000" =>

                storage_data_c(96 to 111) <= RAW_DATA(0 to 15);

            when "00001" =>

                storage_data_c(96 to 111) <= RAW_DATA(16 to 31);

            when "00010" =>

                storage_data_c(96 to 111) <= RAW_DATA(32 to 47);

            when "00011" =>

                storage_data_c(96 to 111) <= RAW_DATA(48 to 63);

            when "00100" =>

                storage_data_c(96 to 111) <= RAW_DATA(64 to 79);

            when "00101" =>

                storage_data_c(96 to 111) <= RAW_DATA(80 to 95);

            when "00110" =>

                storage_data_c(96 to 111) <= RAW_DATA(96 to 111);

            when "00111" =>

                storage_data_c(96 to 111) <= RAW_DATA(112 to 127);

            when others =>

                storage_data_c(96 to 111) <= (others => '0');

        end case;

    end process;


    -- Muxes for Lane 7

    process (MUX_SELECT(35 to 39), RAW_DATA)

    begin

        case MUX_SELECT(35 to 39) is

            when "00000" =>

                storage_data_c(112 to 127) <= RAW_DATA(0 to 15);

            when "00001" =>

                storage_data_c(112 to 127) <= RAW_DATA(16 to 31);

            when "00010" =>

                storage_data_c(112 to 127) <= RAW_DATA(32 to 47);

            when "00011" =>

                storage_data_c(112 to 127) <= RAW_DATA(48 to 63);

            when "00100" =>

                storage_data_c(112 to 127) <= RAW_DATA(64 to 79);

            when "00101" =>

                storage_data_c(112 to 127) <= RAW_DATA(80 to 95);

            when "00110" =>

                storage_data_c(112 to 127) <= RAW_DATA(96 to 111);

            when "00111" =>

                storage_data_c(112 to 127) <= RAW_DATA(112 to 127);

            when others =>

                storage_data_c(112 to 127) <= (others => '0');

        end case;

    end process;


    -- Register the stored data.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            if (STORAGE_CE(0) = '1') then

                STORAGE_DATA_Buffer(0 to 15) <= storage_data_c(0 to 15) after DLY;

            end if;

            if (STORAGE_CE(1) = '1') then

                STORAGE_DATA_Buffer(16 to 31) <= storage_data_c(16 to 31) after DLY;

            end if;

            if (STORAGE_CE(2) = '1') then

                STORAGE_DATA_Buffer(32 to 47) <= storage_data_c(32 to 47) after DLY;

            end if;

            if (STORAGE_CE(3) = '1') then

                STORAGE_DATA_Buffer(48 to 63) <= storage_data_c(48 to 63) after DLY;

            end if;

            if (STORAGE_CE(4) = '1') then

                STORAGE_DATA_Buffer(64 to 79) <= storage_data_c(64 to 79) after DLY;

            end if;

            if (STORAGE_CE(5) = '1') then

                STORAGE_DATA_Buffer(80 to 95) <= storage_data_c(80 to 95) after DLY;

            end if;

            if (STORAGE_CE(6) = '1') then

                STORAGE_DATA_Buffer(96 to 111) <= storage_data_c(96 to 111) after DLY;

            end if;

            if (STORAGE_CE(7) = '1') then

                STORAGE_DATA_Buffer(112 to 127) <= storage_data_c(112 to 127) after DLY;

            end if;

        end if;

    end process;

end RTL;
