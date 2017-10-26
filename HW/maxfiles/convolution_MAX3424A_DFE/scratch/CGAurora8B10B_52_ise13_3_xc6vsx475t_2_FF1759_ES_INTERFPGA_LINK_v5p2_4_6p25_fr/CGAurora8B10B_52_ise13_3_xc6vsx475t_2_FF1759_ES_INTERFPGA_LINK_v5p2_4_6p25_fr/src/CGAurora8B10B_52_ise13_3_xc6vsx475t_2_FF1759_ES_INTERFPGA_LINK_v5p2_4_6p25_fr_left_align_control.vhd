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
--  LEFT_ALIGN_CONTROL
--
--
--
--  Description: The LEFT_ALIGN_CONTROL is used to control the Left Align Muxes in
--               the RX_LL module.  Each module supports up to 8 lanes.  Modules can
--               be combined in stages to support channels with more than 8 lanes.
--
--               This module supports 8 4-byte lane designs.
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.STD_LOGIC_ARITH.all;

entity CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_LEFT_ALIGN_CONTROL is

    port (

            PREVIOUS_STAGE_VALID : in std_logic_vector(0 to 7);
            MUX_SELECT           : out std_logic_vector(0 to 23);
            VALID                : out std_logic_vector(0 to 7);
            USER_CLK             : in std_logic;
            RESET                : in std_logic

         );

end CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_LEFT_ALIGN_CONTROL;

architecture RTL of CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_LEFT_ALIGN_CONTROL is

-- Parameter Declarations --

    constant DLY : time := 1 ns;

-- External Register Declarations --

    signal MUX_SELECT_Buffer : std_logic_vector(0 to 23);
    signal VALID_Buffer      : std_logic_vector(0 to 7);

-- Internal Register Declarations --

    signal  mux_select_c : std_logic_vector(0 to 23);
    signal  valid_c      : std_logic_vector(0 to 7);

begin

    MUX_SELECT <= MUX_SELECT_Buffer;
    VALID      <= VALID_Buffer;

-- Main Body of Code --

    -- SELECT --

    -- Lane 0

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "00000001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(7,3);

            when "00000010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(6,3);

            when "00000011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(6,3);

            when "00000100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(5,3);

            when "00000101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(5,3);

            when "00000110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(5,3);

            when "00000111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(5,3);

            when "00001000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(4,3);

            when "00001001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(4,3);

            when "00001010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(4,3);

            when "00001011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(4,3);

            when "00001100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(4,3);

            when "00001101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(4,3);

            when "00001110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(4,3);

            when "00001111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(4,3);

            when "00010000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00010001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00010010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00010011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00010100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00010101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00010110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00010111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00011000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00011001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00011010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00011011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00011100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00011101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00011110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00011111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(3,3);

            when "00100000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00100001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00100010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00100011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00100100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00100101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00100110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00100111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00101000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00101001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00101010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00101011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00101100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00101101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00101110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00101111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00110000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00110001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00110010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00110011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00110100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00110101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00110110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00110111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00111000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00111001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00111010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00111011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00111100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00111101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00111110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "00111111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(2,3);

            when "01000000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01000001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01000010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01000011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01000100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01000101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01000110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01000111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01001000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01001001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01001010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01001011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01001100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01001101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01001110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01001111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01010000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01010001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01010010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01010011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01010100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01010101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01010110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01010111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01011000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01011001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01011010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01011011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01011100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01011101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01011110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01011111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01100000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01100001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01100010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01100011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01100100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01100101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01100110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01100111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01101000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01101001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01101010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01101011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01101100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01101101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01101110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01101111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01110000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01110001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01110010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01110011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01110100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01110101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01110110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01110111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01111000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01111001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01111010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01111011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01111100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01111101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01111110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "01111111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(1,3);

            when "10000000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10000001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10000010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10000011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10000100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10000101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10000110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10000111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10001000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10001001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10001010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10001011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10001100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10001101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10001110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10001111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10010000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10010001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10010010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10010011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10010100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10010101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10010110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10010111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10011000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10011001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10011010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10011011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10011100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10011101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10011110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10011111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10100000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10100001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10100010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10100011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10100100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10100101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10100110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10100111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10101000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10101001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10101010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10101011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10101100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10101101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10101110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10101111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10110000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10110001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10110010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10110011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10110100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10110101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10110110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10110111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10111000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10111001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10111010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10111011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10111100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10111101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10111110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "10111111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11000000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11000001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11000010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11000011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11000100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11000101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11000110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11000111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11001000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11001001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11001010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11001011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11001100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11001101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11001110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11001111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11010000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11010001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11010010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11010011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11010100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11010101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11010110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11010111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11011000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11011001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11011010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11011011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11011100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11011101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11011110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11011111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11100000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11100001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11100010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11100011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11100100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11100101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11100110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11100111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11101000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11101001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11101010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11101011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11101100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11101101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11101110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11101111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11110000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11110001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11110010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11110011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11110100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11110101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11110110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11110111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11111000" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11111001" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11111010" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11111011" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11111100" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11111101" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11111110" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when "11111111" =>

                mux_select_c(0 to 2) <= conv_std_logic_vector(0,3);

            when others =>

                mux_select_c(0 to 2) <= (others => '0');

        end case;

    end process;


    -- Lane 1

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "00000011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(6,3);

            when "00000101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(6,3);

            when "00000110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(5,3);

            when "00000111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(5,3);

            when "00001001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(6,3);

            when "00001010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(5,3);

            when "00001011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(5,3);

            when "00001100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "00001101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "00001110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "00001111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "00010001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(6,3);

            when "00010010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(5,3);

            when "00010011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(5,3);

            when "00010100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "00010101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "00010110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "00010111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "00011000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00011001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00011010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00011011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00011100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00011101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00011110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00011111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00100001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(6,3);

            when "00100010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(5,3);

            when "00100011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(5,3);

            when "00100100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "00100101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "00100110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "00100111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "00101000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00101001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00101010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00101011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00101100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00101101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00101110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00101111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "00110000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00110001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00110010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00110011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00110100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00110101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00110110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00110111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00111000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00111001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00111010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00111011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00111100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00111101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00111110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "00111111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01000001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(6,3);

            when "01000010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(5,3);

            when "01000011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(5,3);

            when "01000100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "01000101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "01000110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "01000111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "01001000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "01001001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "01001010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "01001011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "01001100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "01001101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "01001110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "01001111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "01010000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01010001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01010010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01010011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01010100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01010101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01010110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01010111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01011000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01011001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01011010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01011011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01011100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01011101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01011110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01011111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "01100000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01100001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01100010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01100011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01100100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01100101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01100110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01100111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01101000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01101001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01101010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01101011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01101100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01101101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01101110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01101111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01110000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01110001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01110010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01110011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01110100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01110101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01110110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01110111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01111000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01111001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01111010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01111011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01111100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01111101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01111110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "01111111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10000001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(6,3);

            when "10000010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(5,3);

            when "10000011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(5,3);

            when "10000100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "10000101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "10000110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "10000111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(4,3);

            when "10001000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "10001001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "10001010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "10001011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "10001100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "10001101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "10001110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "10001111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(3,3);

            when "10010000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10010001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10010010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10010011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10010100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10010101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10010110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10010111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10011000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10011001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10011010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10011011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10011100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10011101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10011110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10011111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(2,3);

            when "10100000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10100001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10100010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10100011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10100100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10100101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10100110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10100111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10101000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10101001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10101010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10101011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10101100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10101101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10101110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10101111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10110000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10110001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10110010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10110011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10110100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10110101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10110110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10110111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10111000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10111001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10111010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10111011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10111100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10111101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10111110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "10111111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(1,3);

            when "11000000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11000001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11000010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11000011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11000100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11000101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11000110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11000111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11001000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11001001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11001010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11001011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11001100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11001101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11001110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11001111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11010000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11010001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11010010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11010011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11010100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11010101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11010110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11010111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11011000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11011001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11011010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11011011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11011100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11011101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11011110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11011111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11100000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11100001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11100010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11100011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11100100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11100101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11100110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11100111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11101000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11101001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11101010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11101011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11101100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11101101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11101110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11101111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11110000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11110001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11110010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11110011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11110100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11110101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11110110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11110111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11111000" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11111001" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11111010" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11111011" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11111100" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11111101" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11111110" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when "11111111" =>

                mux_select_c(3 to 5) <= conv_std_logic_vector(0,3);

            when others =>

                mux_select_c(3 to 5) <= (others => '0');

        end case;

    end process;


    -- Lane 2

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "00000111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "00001011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "00001101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "00001110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "00001111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "00010011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "00010101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "00010110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "00010111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "00011001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "00011010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "00011011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "00011100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "00011101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "00011110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "00011111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "00100011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "00100101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "00100110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "00100111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "00101001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "00101010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "00101011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "00101100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "00101101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "00101110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "00101111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "00110001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "00110010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "00110011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "00110100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "00110101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "00110110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "00110111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "00111000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "00111001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "00111010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "00111011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "00111100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "00111101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "00111110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "00111111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01000011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "01000101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "01000110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "01000111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "01001001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "01001010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "01001011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "01001100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "01001101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "01001110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "01001111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "01010001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "01010010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "01010011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "01010100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "01010101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "01010110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "01010111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "01011000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01011001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01011010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01011011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01011100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01011101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01011110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01011111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01100001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "01100010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "01100011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "01100100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "01100101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "01100110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "01100111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "01101000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01101001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01101010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01101011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01101100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01101101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01101110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01101111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "01110000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01110001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01110010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01110011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01110100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01110101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01110110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01110111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01111000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01111001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01111010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01111011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01111100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01111101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01111110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "01111111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10000011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "10000101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "10000110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "10000111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "10001001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "10001010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "10001011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "10001100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "10001101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "10001110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "10001111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "10010001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "10010010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "10010011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "10010100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "10010101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "10010110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "10010111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "10011000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10011001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10011010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10011011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10011100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10011101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10011110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10011111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10100001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "10100010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "10100011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "10100100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "10100101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "10100110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "10100111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "10101000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10101001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10101010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10101011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10101100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10101101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10101110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10101111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "10110000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10110001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10110010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10110011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10110100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10110101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10110110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10110111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10111000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10111001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10111010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10111011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10111100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10111101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10111110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "10111111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11000001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(5,3);

            when "11000010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "11000011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(4,3);

            when "11000100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "11000101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "11000110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "11000111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(3,3);

            when "11001000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "11001001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "11001010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "11001011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "11001100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "11001101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "11001110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "11001111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(2,3);

            when "11010000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11010001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11010010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11010011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11010100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11010101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11010110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11010111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11011000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11011001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11011010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11011011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11011100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11011101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11011110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11011111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(1,3);

            when "11100000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11100001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11100010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11100011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11100100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11100101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11100110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11100111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11101000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11101001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11101010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11101011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11101100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11101101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11101110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11101111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11110000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11110001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11110010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11110011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11110100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11110101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11110110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11110111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11111000" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11111001" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11111010" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11111011" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11111100" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11111101" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11111110" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when "11111111" =>

                mux_select_c(6 to 8) <= conv_std_logic_vector(0,3);

            when others =>

                mux_select_c(6 to 8) <= (others => '0');

        end case;

    end process;


    -- Lane 3

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "00001111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "00010111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "00011011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "00011101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "00011110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "00011111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "00100111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "00101011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "00101101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "00101110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "00101111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "00110011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "00110101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "00110110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "00110111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "00111001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "00111010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "00111011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "00111100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "00111101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "00111110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "00111111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "01000111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "01001011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "01001101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "01001110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "01001111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "01010011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "01010101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "01010110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "01010111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "01011001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "01011010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "01011011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "01011100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "01011101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "01011110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "01011111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "01100011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "01100101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "01100110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "01100111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "01101001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "01101010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "01101011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "01101100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "01101101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "01101110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "01101111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "01110001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "01110010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "01110011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "01110100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "01110101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "01110110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "01110111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "01111000" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "01111001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "01111010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "01111011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "01111100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "01111101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "01111110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "01111111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "10000111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "10001011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "10001101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "10001110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "10001111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "10010011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "10010101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "10010110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "10010111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "10011001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "10011010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "10011011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "10011100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "10011101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "10011110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "10011111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "10100011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "10100101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "10100110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "10100111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "10101001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "10101010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "10101011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "10101100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "10101101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "10101110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "10101111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "10110001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "10110010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "10110011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "10110100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "10110101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "10110110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "10110111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "10111000" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "10111001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "10111010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "10111011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "10111100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "10111101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "10111110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "10111111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11000011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "11000101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "11000110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "11000111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "11001001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "11001010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "11001011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "11001100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "11001101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "11001110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "11001111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "11010001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "11010010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "11010011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "11010100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "11010101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "11010110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "11010111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "11011000" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11011001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11011010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11011011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11011100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11011101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11011110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11011111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11100001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(4,3);

            when "11100010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "11100011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(3,3);

            when "11100100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "11100101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "11100110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "11100111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(2,3);

            when "11101000" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11101001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11101010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11101011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11101100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11101101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11101110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11101111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(1,3);

            when "11110000" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11110001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11110010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11110011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11110100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11110101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11110110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11110111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11111000" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11111001" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11111010" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11111011" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11111100" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11111101" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11111110" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when "11111111" =>

                mux_select_c(9 to 11) <= conv_std_logic_vector(0,3);

            when others =>

                mux_select_c(9 to 11) <= (others => '0');

        end case;

    end process;


    -- Lane 4

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "00011111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "00101111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "00110111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "00111011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "00111101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "00111110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "00111111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "01001111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "01010111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "01011011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "01011101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "01011110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "01011111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "01100111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "01101011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "01101101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "01101110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "01101111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "01110011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "01110101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "01110110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "01110111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "01111001" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "01111010" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "01111011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "01111100" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "01111101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "01111110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "01111111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "10001111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "10010111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "10011011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "10011101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "10011110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "10011111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "10100111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "10101011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "10101101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "10101110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "10101111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "10110011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "10110101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "10110110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "10110111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "10111001" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "10111010" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "10111011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "10111100" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "10111101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "10111110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "10111111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "11000111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "11001011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "11001101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "11001110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "11001111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "11010011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "11010101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "11010110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "11010111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "11011001" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "11011010" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "11011011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "11011100" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "11011101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "11011110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "11011111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "11100011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "11100101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "11100110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "11100111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "11101001" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "11101010" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "11101011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "11101100" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "11101101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "11101110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "11101111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "11110001" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(3,3);

            when "11110010" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "11110011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(2,3);

            when "11110100" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "11110101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "11110110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "11110111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(1,3);

            when "11111000" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(0,3);

            when "11111001" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(0,3);

            when "11111010" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(0,3);

            when "11111011" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(0,3);

            when "11111100" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(0,3);

            when "11111101" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(0,3);

            when "11111110" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(0,3);

            when "11111111" =>

                mux_select_c(12 to 14) <= conv_std_logic_vector(0,3);

            when others =>

                mux_select_c(12 to 14) <= (others => '0');

        end case;

    end process;


    -- Lane 5

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "00111111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "01011111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "01101111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "01110111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "01111011" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "01111101" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "01111110" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(1,3);

            when "01111111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(1,3);

            when "10011111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "10101111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "10110111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "10111011" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "10111101" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "10111110" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(1,3);

            when "10111111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(1,3);

            when "11001111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "11010111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "11011011" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "11011101" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "11011110" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(1,3);

            when "11011111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(1,3);

            when "11100111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "11101011" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "11101101" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "11101110" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(1,3);

            when "11101111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(1,3);

            when "11110011" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "11110101" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "11110110" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(1,3);

            when "11110111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(1,3);

            when "11111001" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(2,3);

            when "11111010" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(1,3);

            when "11111011" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(1,3);

            when "11111100" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(0,3);

            when "11111101" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(0,3);

            when "11111110" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(0,3);

            when "11111111" =>

                mux_select_c(15 to 17) <= conv_std_logic_vector(0,3);

            when others =>

                mux_select_c(15 to 17) <= (others => '0');

        end case;

    end process;


    -- Lane 6

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "01111111" =>

                mux_select_c(18 to 20) <= conv_std_logic_vector(1,3);

            when "10111111" =>

                mux_select_c(18 to 20) <= conv_std_logic_vector(1,3);

            when "11011111" =>

                mux_select_c(18 to 20) <= conv_std_logic_vector(1,3);

            when "11101111" =>

                mux_select_c(18 to 20) <= conv_std_logic_vector(1,3);

            when "11110111" =>

                mux_select_c(18 to 20) <= conv_std_logic_vector(1,3);

            when "11111011" =>

                mux_select_c(18 to 20) <= conv_std_logic_vector(1,3);

            when "11111101" =>

                mux_select_c(18 to 20) <= conv_std_logic_vector(1,3);

            when "11111110" =>

                mux_select_c(18 to 20) <= conv_std_logic_vector(0,3);

            when "11111111" =>

                mux_select_c(18 to 20) <= conv_std_logic_vector(0,3);

            when others =>

                mux_select_c(18 to 20) <= (others => '0');

        end case;

    end process;


    -- Lane 7

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "11111111" =>

                mux_select_c(21 to 23) <= conv_std_logic_vector(0,3);

            when others =>

                mux_select_c(21 to 23) <= (others => '0');

        end case;

    end process;


    -- Register the select signals.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            MUX_SELECT_Buffer <= mux_select_c after DLY;

        end if;

    end process;


    -- VALID --

    -- Lane 0

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "00000001" =>

                valid_c(0) <= '1';

            when "00000010" =>

                valid_c(0) <= '1';

            when "00000011" =>

                valid_c(0) <= '1';

            when "00000100" =>

                valid_c(0) <= '1';

            when "00000101" =>

                valid_c(0) <= '1';

            when "00000110" =>

                valid_c(0) <= '1';

            when "00000111" =>

                valid_c(0) <= '1';

            when "00001000" =>

                valid_c(0) <= '1';

            when "00001001" =>

                valid_c(0) <= '1';

            when "00001010" =>

                valid_c(0) <= '1';

            when "00001011" =>

                valid_c(0) <= '1';

            when "00001100" =>

                valid_c(0) <= '1';

            when "00001101" =>

                valid_c(0) <= '1';

            when "00001110" =>

                valid_c(0) <= '1';

            when "00001111" =>

                valid_c(0) <= '1';

            when "00010000" =>

                valid_c(0) <= '1';

            when "00010001" =>

                valid_c(0) <= '1';

            when "00010010" =>

                valid_c(0) <= '1';

            when "00010011" =>

                valid_c(0) <= '1';

            when "00010100" =>

                valid_c(0) <= '1';

            when "00010101" =>

                valid_c(0) <= '1';

            when "00010110" =>

                valid_c(0) <= '1';

            when "00010111" =>

                valid_c(0) <= '1';

            when "00011000" =>

                valid_c(0) <= '1';

            when "00011001" =>

                valid_c(0) <= '1';

            when "00011010" =>

                valid_c(0) <= '1';

            when "00011011" =>

                valid_c(0) <= '1';

            when "00011100" =>

                valid_c(0) <= '1';

            when "00011101" =>

                valid_c(0) <= '1';

            when "00011110" =>

                valid_c(0) <= '1';

            when "00011111" =>

                valid_c(0) <= '1';

            when "00100000" =>

                valid_c(0) <= '1';

            when "00100001" =>

                valid_c(0) <= '1';

            when "00100010" =>

                valid_c(0) <= '1';

            when "00100011" =>

                valid_c(0) <= '1';

            when "00100100" =>

                valid_c(0) <= '1';

            when "00100101" =>

                valid_c(0) <= '1';

            when "00100110" =>

                valid_c(0) <= '1';

            when "00100111" =>

                valid_c(0) <= '1';

            when "00101000" =>

                valid_c(0) <= '1';

            when "00101001" =>

                valid_c(0) <= '1';

            when "00101010" =>

                valid_c(0) <= '1';

            when "00101011" =>

                valid_c(0) <= '1';

            when "00101100" =>

                valid_c(0) <= '1';

            when "00101101" =>

                valid_c(0) <= '1';

            when "00101110" =>

                valid_c(0) <= '1';

            when "00101111" =>

                valid_c(0) <= '1';

            when "00110000" =>

                valid_c(0) <= '1';

            when "00110001" =>

                valid_c(0) <= '1';

            when "00110010" =>

                valid_c(0) <= '1';

            when "00110011" =>

                valid_c(0) <= '1';

            when "00110100" =>

                valid_c(0) <= '1';

            when "00110101" =>

                valid_c(0) <= '1';

            when "00110110" =>

                valid_c(0) <= '1';

            when "00110111" =>

                valid_c(0) <= '1';

            when "00111000" =>

                valid_c(0) <= '1';

            when "00111001" =>

                valid_c(0) <= '1';

            when "00111010" =>

                valid_c(0) <= '1';

            when "00111011" =>

                valid_c(0) <= '1';

            when "00111100" =>

                valid_c(0) <= '1';

            when "00111101" =>

                valid_c(0) <= '1';

            when "00111110" =>

                valid_c(0) <= '1';

            when "00111111" =>

                valid_c(0) <= '1';

            when "01000000" =>

                valid_c(0) <= '1';

            when "01000001" =>

                valid_c(0) <= '1';

            when "01000010" =>

                valid_c(0) <= '1';

            when "01000011" =>

                valid_c(0) <= '1';

            when "01000100" =>

                valid_c(0) <= '1';

            when "01000101" =>

                valid_c(0) <= '1';

            when "01000110" =>

                valid_c(0) <= '1';

            when "01000111" =>

                valid_c(0) <= '1';

            when "01001000" =>

                valid_c(0) <= '1';

            when "01001001" =>

                valid_c(0) <= '1';

            when "01001010" =>

                valid_c(0) <= '1';

            when "01001011" =>

                valid_c(0) <= '1';

            when "01001100" =>

                valid_c(0) <= '1';

            when "01001101" =>

                valid_c(0) <= '1';

            when "01001110" =>

                valid_c(0) <= '1';

            when "01001111" =>

                valid_c(0) <= '1';

            when "01010000" =>

                valid_c(0) <= '1';

            when "01010001" =>

                valid_c(0) <= '1';

            when "01010010" =>

                valid_c(0) <= '1';

            when "01010011" =>

                valid_c(0) <= '1';

            when "01010100" =>

                valid_c(0) <= '1';

            when "01010101" =>

                valid_c(0) <= '1';

            when "01010110" =>

                valid_c(0) <= '1';

            when "01010111" =>

                valid_c(0) <= '1';

            when "01011000" =>

                valid_c(0) <= '1';

            when "01011001" =>

                valid_c(0) <= '1';

            when "01011010" =>

                valid_c(0) <= '1';

            when "01011011" =>

                valid_c(0) <= '1';

            when "01011100" =>

                valid_c(0) <= '1';

            when "01011101" =>

                valid_c(0) <= '1';

            when "01011110" =>

                valid_c(0) <= '1';

            when "01011111" =>

                valid_c(0) <= '1';

            when "01100000" =>

                valid_c(0) <= '1';

            when "01100001" =>

                valid_c(0) <= '1';

            when "01100010" =>

                valid_c(0) <= '1';

            when "01100011" =>

                valid_c(0) <= '1';

            when "01100100" =>

                valid_c(0) <= '1';

            when "01100101" =>

                valid_c(0) <= '1';

            when "01100110" =>

                valid_c(0) <= '1';

            when "01100111" =>

                valid_c(0) <= '1';

            when "01101000" =>

                valid_c(0) <= '1';

            when "01101001" =>

                valid_c(0) <= '1';

            when "01101010" =>

                valid_c(0) <= '1';

            when "01101011" =>

                valid_c(0) <= '1';

            when "01101100" =>

                valid_c(0) <= '1';

            when "01101101" =>

                valid_c(0) <= '1';

            when "01101110" =>

                valid_c(0) <= '1';

            when "01101111" =>

                valid_c(0) <= '1';

            when "01110000" =>

                valid_c(0) <= '1';

            when "01110001" =>

                valid_c(0) <= '1';

            when "01110010" =>

                valid_c(0) <= '1';

            when "01110011" =>

                valid_c(0) <= '1';

            when "01110100" =>

                valid_c(0) <= '1';

            when "01110101" =>

                valid_c(0) <= '1';

            when "01110110" =>

                valid_c(0) <= '1';

            when "01110111" =>

                valid_c(0) <= '1';

            when "01111000" =>

                valid_c(0) <= '1';

            when "01111001" =>

                valid_c(0) <= '1';

            when "01111010" =>

                valid_c(0) <= '1';

            when "01111011" =>

                valid_c(0) <= '1';

            when "01111100" =>

                valid_c(0) <= '1';

            when "01111101" =>

                valid_c(0) <= '1';

            when "01111110" =>

                valid_c(0) <= '1';

            when "01111111" =>

                valid_c(0) <= '1';

            when "10000000" =>

                valid_c(0) <= '1';

            when "10000001" =>

                valid_c(0) <= '1';

            when "10000010" =>

                valid_c(0) <= '1';

            when "10000011" =>

                valid_c(0) <= '1';

            when "10000100" =>

                valid_c(0) <= '1';

            when "10000101" =>

                valid_c(0) <= '1';

            when "10000110" =>

                valid_c(0) <= '1';

            when "10000111" =>

                valid_c(0) <= '1';

            when "10001000" =>

                valid_c(0) <= '1';

            when "10001001" =>

                valid_c(0) <= '1';

            when "10001010" =>

                valid_c(0) <= '1';

            when "10001011" =>

                valid_c(0) <= '1';

            when "10001100" =>

                valid_c(0) <= '1';

            when "10001101" =>

                valid_c(0) <= '1';

            when "10001110" =>

                valid_c(0) <= '1';

            when "10001111" =>

                valid_c(0) <= '1';

            when "10010000" =>

                valid_c(0) <= '1';

            when "10010001" =>

                valid_c(0) <= '1';

            when "10010010" =>

                valid_c(0) <= '1';

            when "10010011" =>

                valid_c(0) <= '1';

            when "10010100" =>

                valid_c(0) <= '1';

            when "10010101" =>

                valid_c(0) <= '1';

            when "10010110" =>

                valid_c(0) <= '1';

            when "10010111" =>

                valid_c(0) <= '1';

            when "10011000" =>

                valid_c(0) <= '1';

            when "10011001" =>

                valid_c(0) <= '1';

            when "10011010" =>

                valid_c(0) <= '1';

            when "10011011" =>

                valid_c(0) <= '1';

            when "10011100" =>

                valid_c(0) <= '1';

            when "10011101" =>

                valid_c(0) <= '1';

            when "10011110" =>

                valid_c(0) <= '1';

            when "10011111" =>

                valid_c(0) <= '1';

            when "10100000" =>

                valid_c(0) <= '1';

            when "10100001" =>

                valid_c(0) <= '1';

            when "10100010" =>

                valid_c(0) <= '1';

            when "10100011" =>

                valid_c(0) <= '1';

            when "10100100" =>

                valid_c(0) <= '1';

            when "10100101" =>

                valid_c(0) <= '1';

            when "10100110" =>

                valid_c(0) <= '1';

            when "10100111" =>

                valid_c(0) <= '1';

            when "10101000" =>

                valid_c(0) <= '1';

            when "10101001" =>

                valid_c(0) <= '1';

            when "10101010" =>

                valid_c(0) <= '1';

            when "10101011" =>

                valid_c(0) <= '1';

            when "10101100" =>

                valid_c(0) <= '1';

            when "10101101" =>

                valid_c(0) <= '1';

            when "10101110" =>

                valid_c(0) <= '1';

            when "10101111" =>

                valid_c(0) <= '1';

            when "10110000" =>

                valid_c(0) <= '1';

            when "10110001" =>

                valid_c(0) <= '1';

            when "10110010" =>

                valid_c(0) <= '1';

            when "10110011" =>

                valid_c(0) <= '1';

            when "10110100" =>

                valid_c(0) <= '1';

            when "10110101" =>

                valid_c(0) <= '1';

            when "10110110" =>

                valid_c(0) <= '1';

            when "10110111" =>

                valid_c(0) <= '1';

            when "10111000" =>

                valid_c(0) <= '1';

            when "10111001" =>

                valid_c(0) <= '1';

            when "10111010" =>

                valid_c(0) <= '1';

            when "10111011" =>

                valid_c(0) <= '1';

            when "10111100" =>

                valid_c(0) <= '1';

            when "10111101" =>

                valid_c(0) <= '1';

            when "10111110" =>

                valid_c(0) <= '1';

            when "10111111" =>

                valid_c(0) <= '1';

            when "11000000" =>

                valid_c(0) <= '1';

            when "11000001" =>

                valid_c(0) <= '1';

            when "11000010" =>

                valid_c(0) <= '1';

            when "11000011" =>

                valid_c(0) <= '1';

            when "11000100" =>

                valid_c(0) <= '1';

            when "11000101" =>

                valid_c(0) <= '1';

            when "11000110" =>

                valid_c(0) <= '1';

            when "11000111" =>

                valid_c(0) <= '1';

            when "11001000" =>

                valid_c(0) <= '1';

            when "11001001" =>

                valid_c(0) <= '1';

            when "11001010" =>

                valid_c(0) <= '1';

            when "11001011" =>

                valid_c(0) <= '1';

            when "11001100" =>

                valid_c(0) <= '1';

            when "11001101" =>

                valid_c(0) <= '1';

            when "11001110" =>

                valid_c(0) <= '1';

            when "11001111" =>

                valid_c(0) <= '1';

            when "11010000" =>

                valid_c(0) <= '1';

            when "11010001" =>

                valid_c(0) <= '1';

            when "11010010" =>

                valid_c(0) <= '1';

            when "11010011" =>

                valid_c(0) <= '1';

            when "11010100" =>

                valid_c(0) <= '1';

            when "11010101" =>

                valid_c(0) <= '1';

            when "11010110" =>

                valid_c(0) <= '1';

            when "11010111" =>

                valid_c(0) <= '1';

            when "11011000" =>

                valid_c(0) <= '1';

            when "11011001" =>

                valid_c(0) <= '1';

            when "11011010" =>

                valid_c(0) <= '1';

            when "11011011" =>

                valid_c(0) <= '1';

            when "11011100" =>

                valid_c(0) <= '1';

            when "11011101" =>

                valid_c(0) <= '1';

            when "11011110" =>

                valid_c(0) <= '1';

            when "11011111" =>

                valid_c(0) <= '1';

            when "11100000" =>

                valid_c(0) <= '1';

            when "11100001" =>

                valid_c(0) <= '1';

            when "11100010" =>

                valid_c(0) <= '1';

            when "11100011" =>

                valid_c(0) <= '1';

            when "11100100" =>

                valid_c(0) <= '1';

            when "11100101" =>

                valid_c(0) <= '1';

            when "11100110" =>

                valid_c(0) <= '1';

            when "11100111" =>

                valid_c(0) <= '1';

            when "11101000" =>

                valid_c(0) <= '1';

            when "11101001" =>

                valid_c(0) <= '1';

            when "11101010" =>

                valid_c(0) <= '1';

            when "11101011" =>

                valid_c(0) <= '1';

            when "11101100" =>

                valid_c(0) <= '1';

            when "11101101" =>

                valid_c(0) <= '1';

            when "11101110" =>

                valid_c(0) <= '1';

            when "11101111" =>

                valid_c(0) <= '1';

            when "11110000" =>

                valid_c(0) <= '1';

            when "11110001" =>

                valid_c(0) <= '1';

            when "11110010" =>

                valid_c(0) <= '1';

            when "11110011" =>

                valid_c(0) <= '1';

            when "11110100" =>

                valid_c(0) <= '1';

            when "11110101" =>

                valid_c(0) <= '1';

            when "11110110" =>

                valid_c(0) <= '1';

            when "11110111" =>

                valid_c(0) <= '1';

            when "11111000" =>

                valid_c(0) <= '1';

            when "11111001" =>

                valid_c(0) <= '1';

            when "11111010" =>

                valid_c(0) <= '1';

            when "11111011" =>

                valid_c(0) <= '1';

            when "11111100" =>

                valid_c(0) <= '1';

            when "11111101" =>

                valid_c(0) <= '1';

            when "11111110" =>

                valid_c(0) <= '1';

            when "11111111" =>

                valid_c(0) <= '1';

            when others =>

                valid_c(0) <= '0';

        end case;

    end process;


    -- Lane 1

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "00000011" =>

                valid_c(1) <= '1';

            when "00000101" =>

                valid_c(1) <= '1';

            when "00000110" =>

                valid_c(1) <= '1';

            when "00000111" =>

                valid_c(1) <= '1';

            when "00001001" =>

                valid_c(1) <= '1';

            when "00001010" =>

                valid_c(1) <= '1';

            when "00001011" =>

                valid_c(1) <= '1';

            when "00001100" =>

                valid_c(1) <= '1';

            when "00001101" =>

                valid_c(1) <= '1';

            when "00001110" =>

                valid_c(1) <= '1';

            when "00001111" =>

                valid_c(1) <= '1';

            when "00010001" =>

                valid_c(1) <= '1';

            when "00010010" =>

                valid_c(1) <= '1';

            when "00010011" =>

                valid_c(1) <= '1';

            when "00010100" =>

                valid_c(1) <= '1';

            when "00010101" =>

                valid_c(1) <= '1';

            when "00010110" =>

                valid_c(1) <= '1';

            when "00010111" =>

                valid_c(1) <= '1';

            when "00011000" =>

                valid_c(1) <= '1';

            when "00011001" =>

                valid_c(1) <= '1';

            when "00011010" =>

                valid_c(1) <= '1';

            when "00011011" =>

                valid_c(1) <= '1';

            when "00011100" =>

                valid_c(1) <= '1';

            when "00011101" =>

                valid_c(1) <= '1';

            when "00011110" =>

                valid_c(1) <= '1';

            when "00011111" =>

                valid_c(1) <= '1';

            when "00100001" =>

                valid_c(1) <= '1';

            when "00100010" =>

                valid_c(1) <= '1';

            when "00100011" =>

                valid_c(1) <= '1';

            when "00100100" =>

                valid_c(1) <= '1';

            when "00100101" =>

                valid_c(1) <= '1';

            when "00100110" =>

                valid_c(1) <= '1';

            when "00100111" =>

                valid_c(1) <= '1';

            when "00101000" =>

                valid_c(1) <= '1';

            when "00101001" =>

                valid_c(1) <= '1';

            when "00101010" =>

                valid_c(1) <= '1';

            when "00101011" =>

                valid_c(1) <= '1';

            when "00101100" =>

                valid_c(1) <= '1';

            when "00101101" =>

                valid_c(1) <= '1';

            when "00101110" =>

                valid_c(1) <= '1';

            when "00101111" =>

                valid_c(1) <= '1';

            when "00110000" =>

                valid_c(1) <= '1';

            when "00110001" =>

                valid_c(1) <= '1';

            when "00110010" =>

                valid_c(1) <= '1';

            when "00110011" =>

                valid_c(1) <= '1';

            when "00110100" =>

                valid_c(1) <= '1';

            when "00110101" =>

                valid_c(1) <= '1';

            when "00110110" =>

                valid_c(1) <= '1';

            when "00110111" =>

                valid_c(1) <= '1';

            when "00111000" =>

                valid_c(1) <= '1';

            when "00111001" =>

                valid_c(1) <= '1';

            when "00111010" =>

                valid_c(1) <= '1';

            when "00111011" =>

                valid_c(1) <= '1';

            when "00111100" =>

                valid_c(1) <= '1';

            when "00111101" =>

                valid_c(1) <= '1';

            when "00111110" =>

                valid_c(1) <= '1';

            when "00111111" =>

                valid_c(1) <= '1';

            when "01000001" =>

                valid_c(1) <= '1';

            when "01000010" =>

                valid_c(1) <= '1';

            when "01000011" =>

                valid_c(1) <= '1';

            when "01000100" =>

                valid_c(1) <= '1';

            when "01000101" =>

                valid_c(1) <= '1';

            when "01000110" =>

                valid_c(1) <= '1';

            when "01000111" =>

                valid_c(1) <= '1';

            when "01001000" =>

                valid_c(1) <= '1';

            when "01001001" =>

                valid_c(1) <= '1';

            when "01001010" =>

                valid_c(1) <= '1';

            when "01001011" =>

                valid_c(1) <= '1';

            when "01001100" =>

                valid_c(1) <= '1';

            when "01001101" =>

                valid_c(1) <= '1';

            when "01001110" =>

                valid_c(1) <= '1';

            when "01001111" =>

                valid_c(1) <= '1';

            when "01010000" =>

                valid_c(1) <= '1';

            when "01010001" =>

                valid_c(1) <= '1';

            when "01010010" =>

                valid_c(1) <= '1';

            when "01010011" =>

                valid_c(1) <= '1';

            when "01010100" =>

                valid_c(1) <= '1';

            when "01010101" =>

                valid_c(1) <= '1';

            when "01010110" =>

                valid_c(1) <= '1';

            when "01010111" =>

                valid_c(1) <= '1';

            when "01011000" =>

                valid_c(1) <= '1';

            when "01011001" =>

                valid_c(1) <= '1';

            when "01011010" =>

                valid_c(1) <= '1';

            when "01011011" =>

                valid_c(1) <= '1';

            when "01011100" =>

                valid_c(1) <= '1';

            when "01011101" =>

                valid_c(1) <= '1';

            when "01011110" =>

                valid_c(1) <= '1';

            when "01011111" =>

                valid_c(1) <= '1';

            when "01100000" =>

                valid_c(1) <= '1';

            when "01100001" =>

                valid_c(1) <= '1';

            when "01100010" =>

                valid_c(1) <= '1';

            when "01100011" =>

                valid_c(1) <= '1';

            when "01100100" =>

                valid_c(1) <= '1';

            when "01100101" =>

                valid_c(1) <= '1';

            when "01100110" =>

                valid_c(1) <= '1';

            when "01100111" =>

                valid_c(1) <= '1';

            when "01101000" =>

                valid_c(1) <= '1';

            when "01101001" =>

                valid_c(1) <= '1';

            when "01101010" =>

                valid_c(1) <= '1';

            when "01101011" =>

                valid_c(1) <= '1';

            when "01101100" =>

                valid_c(1) <= '1';

            when "01101101" =>

                valid_c(1) <= '1';

            when "01101110" =>

                valid_c(1) <= '1';

            when "01101111" =>

                valid_c(1) <= '1';

            when "01110000" =>

                valid_c(1) <= '1';

            when "01110001" =>

                valid_c(1) <= '1';

            when "01110010" =>

                valid_c(1) <= '1';

            when "01110011" =>

                valid_c(1) <= '1';

            when "01110100" =>

                valid_c(1) <= '1';

            when "01110101" =>

                valid_c(1) <= '1';

            when "01110110" =>

                valid_c(1) <= '1';

            when "01110111" =>

                valid_c(1) <= '1';

            when "01111000" =>

                valid_c(1) <= '1';

            when "01111001" =>

                valid_c(1) <= '1';

            when "01111010" =>

                valid_c(1) <= '1';

            when "01111011" =>

                valid_c(1) <= '1';

            when "01111100" =>

                valid_c(1) <= '1';

            when "01111101" =>

                valid_c(1) <= '1';

            when "01111110" =>

                valid_c(1) <= '1';

            when "01111111" =>

                valid_c(1) <= '1';

            when "10000001" =>

                valid_c(1) <= '1';

            when "10000010" =>

                valid_c(1) <= '1';

            when "10000011" =>

                valid_c(1) <= '1';

            when "10000100" =>

                valid_c(1) <= '1';

            when "10000101" =>

                valid_c(1) <= '1';

            when "10000110" =>

                valid_c(1) <= '1';

            when "10000111" =>

                valid_c(1) <= '1';

            when "10001000" =>

                valid_c(1) <= '1';

            when "10001001" =>

                valid_c(1) <= '1';

            when "10001010" =>

                valid_c(1) <= '1';

            when "10001011" =>

                valid_c(1) <= '1';

            when "10001100" =>

                valid_c(1) <= '1';

            when "10001101" =>

                valid_c(1) <= '1';

            when "10001110" =>

                valid_c(1) <= '1';

            when "10001111" =>

                valid_c(1) <= '1';

            when "10010000" =>

                valid_c(1) <= '1';

            when "10010001" =>

                valid_c(1) <= '1';

            when "10010010" =>

                valid_c(1) <= '1';

            when "10010011" =>

                valid_c(1) <= '1';

            when "10010100" =>

                valid_c(1) <= '1';

            when "10010101" =>

                valid_c(1) <= '1';

            when "10010110" =>

                valid_c(1) <= '1';

            when "10010111" =>

                valid_c(1) <= '1';

            when "10011000" =>

                valid_c(1) <= '1';

            when "10011001" =>

                valid_c(1) <= '1';

            when "10011010" =>

                valid_c(1) <= '1';

            when "10011011" =>

                valid_c(1) <= '1';

            when "10011100" =>

                valid_c(1) <= '1';

            when "10011101" =>

                valid_c(1) <= '1';

            when "10011110" =>

                valid_c(1) <= '1';

            when "10011111" =>

                valid_c(1) <= '1';

            when "10100000" =>

                valid_c(1) <= '1';

            when "10100001" =>

                valid_c(1) <= '1';

            when "10100010" =>

                valid_c(1) <= '1';

            when "10100011" =>

                valid_c(1) <= '1';

            when "10100100" =>

                valid_c(1) <= '1';

            when "10100101" =>

                valid_c(1) <= '1';

            when "10100110" =>

                valid_c(1) <= '1';

            when "10100111" =>

                valid_c(1) <= '1';

            when "10101000" =>

                valid_c(1) <= '1';

            when "10101001" =>

                valid_c(1) <= '1';

            when "10101010" =>

                valid_c(1) <= '1';

            when "10101011" =>

                valid_c(1) <= '1';

            when "10101100" =>

                valid_c(1) <= '1';

            when "10101101" =>

                valid_c(1) <= '1';

            when "10101110" =>

                valid_c(1) <= '1';

            when "10101111" =>

                valid_c(1) <= '1';

            when "10110000" =>

                valid_c(1) <= '1';

            when "10110001" =>

                valid_c(1) <= '1';

            when "10110010" =>

                valid_c(1) <= '1';

            when "10110011" =>

                valid_c(1) <= '1';

            when "10110100" =>

                valid_c(1) <= '1';

            when "10110101" =>

                valid_c(1) <= '1';

            when "10110110" =>

                valid_c(1) <= '1';

            when "10110111" =>

                valid_c(1) <= '1';

            when "10111000" =>

                valid_c(1) <= '1';

            when "10111001" =>

                valid_c(1) <= '1';

            when "10111010" =>

                valid_c(1) <= '1';

            when "10111011" =>

                valid_c(1) <= '1';

            when "10111100" =>

                valid_c(1) <= '1';

            when "10111101" =>

                valid_c(1) <= '1';

            when "10111110" =>

                valid_c(1) <= '1';

            when "10111111" =>

                valid_c(1) <= '1';

            when "11000000" =>

                valid_c(1) <= '1';

            when "11000001" =>

                valid_c(1) <= '1';

            when "11000010" =>

                valid_c(1) <= '1';

            when "11000011" =>

                valid_c(1) <= '1';

            when "11000100" =>

                valid_c(1) <= '1';

            when "11000101" =>

                valid_c(1) <= '1';

            when "11000110" =>

                valid_c(1) <= '1';

            when "11000111" =>

                valid_c(1) <= '1';

            when "11001000" =>

                valid_c(1) <= '1';

            when "11001001" =>

                valid_c(1) <= '1';

            when "11001010" =>

                valid_c(1) <= '1';

            when "11001011" =>

                valid_c(1) <= '1';

            when "11001100" =>

                valid_c(1) <= '1';

            when "11001101" =>

                valid_c(1) <= '1';

            when "11001110" =>

                valid_c(1) <= '1';

            when "11001111" =>

                valid_c(1) <= '1';

            when "11010000" =>

                valid_c(1) <= '1';

            when "11010001" =>

                valid_c(1) <= '1';

            when "11010010" =>

                valid_c(1) <= '1';

            when "11010011" =>

                valid_c(1) <= '1';

            when "11010100" =>

                valid_c(1) <= '1';

            when "11010101" =>

                valid_c(1) <= '1';

            when "11010110" =>

                valid_c(1) <= '1';

            when "11010111" =>

                valid_c(1) <= '1';

            when "11011000" =>

                valid_c(1) <= '1';

            when "11011001" =>

                valid_c(1) <= '1';

            when "11011010" =>

                valid_c(1) <= '1';

            when "11011011" =>

                valid_c(1) <= '1';

            when "11011100" =>

                valid_c(1) <= '1';

            when "11011101" =>

                valid_c(1) <= '1';

            when "11011110" =>

                valid_c(1) <= '1';

            when "11011111" =>

                valid_c(1) <= '1';

            when "11100000" =>

                valid_c(1) <= '1';

            when "11100001" =>

                valid_c(1) <= '1';

            when "11100010" =>

                valid_c(1) <= '1';

            when "11100011" =>

                valid_c(1) <= '1';

            when "11100100" =>

                valid_c(1) <= '1';

            when "11100101" =>

                valid_c(1) <= '1';

            when "11100110" =>

                valid_c(1) <= '1';

            when "11100111" =>

                valid_c(1) <= '1';

            when "11101000" =>

                valid_c(1) <= '1';

            when "11101001" =>

                valid_c(1) <= '1';

            when "11101010" =>

                valid_c(1) <= '1';

            when "11101011" =>

                valid_c(1) <= '1';

            when "11101100" =>

                valid_c(1) <= '1';

            when "11101101" =>

                valid_c(1) <= '1';

            when "11101110" =>

                valid_c(1) <= '1';

            when "11101111" =>

                valid_c(1) <= '1';

            when "11110000" =>

                valid_c(1) <= '1';

            when "11110001" =>

                valid_c(1) <= '1';

            when "11110010" =>

                valid_c(1) <= '1';

            when "11110011" =>

                valid_c(1) <= '1';

            when "11110100" =>

                valid_c(1) <= '1';

            when "11110101" =>

                valid_c(1) <= '1';

            when "11110110" =>

                valid_c(1) <= '1';

            when "11110111" =>

                valid_c(1) <= '1';

            when "11111000" =>

                valid_c(1) <= '1';

            when "11111001" =>

                valid_c(1) <= '1';

            when "11111010" =>

                valid_c(1) <= '1';

            when "11111011" =>

                valid_c(1) <= '1';

            when "11111100" =>

                valid_c(1) <= '1';

            when "11111101" =>

                valid_c(1) <= '1';

            when "11111110" =>

                valid_c(1) <= '1';

            when "11111111" =>

                valid_c(1) <= '1';

            when others =>

                valid_c(1) <= '0';

        end case;

    end process;


    -- Lane 2

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "00000111" =>

                valid_c(2) <= '1';

            when "00001011" =>

                valid_c(2) <= '1';

            when "00001101" =>

                valid_c(2) <= '1';

            when "00001110" =>

                valid_c(2) <= '1';

            when "00001111" =>

                valid_c(2) <= '1';

            when "00010011" =>

                valid_c(2) <= '1';

            when "00010101" =>

                valid_c(2) <= '1';

            when "00010110" =>

                valid_c(2) <= '1';

            when "00010111" =>

                valid_c(2) <= '1';

            when "00011001" =>

                valid_c(2) <= '1';

            when "00011010" =>

                valid_c(2) <= '1';

            when "00011011" =>

                valid_c(2) <= '1';

            when "00011100" =>

                valid_c(2) <= '1';

            when "00011101" =>

                valid_c(2) <= '1';

            when "00011110" =>

                valid_c(2) <= '1';

            when "00011111" =>

                valid_c(2) <= '1';

            when "00100011" =>

                valid_c(2) <= '1';

            when "00100101" =>

                valid_c(2) <= '1';

            when "00100110" =>

                valid_c(2) <= '1';

            when "00100111" =>

                valid_c(2) <= '1';

            when "00101001" =>

                valid_c(2) <= '1';

            when "00101010" =>

                valid_c(2) <= '1';

            when "00101011" =>

                valid_c(2) <= '1';

            when "00101100" =>

                valid_c(2) <= '1';

            when "00101101" =>

                valid_c(2) <= '1';

            when "00101110" =>

                valid_c(2) <= '1';

            when "00101111" =>

                valid_c(2) <= '1';

            when "00110001" =>

                valid_c(2) <= '1';

            when "00110010" =>

                valid_c(2) <= '1';

            when "00110011" =>

                valid_c(2) <= '1';

            when "00110100" =>

                valid_c(2) <= '1';

            when "00110101" =>

                valid_c(2) <= '1';

            when "00110110" =>

                valid_c(2) <= '1';

            when "00110111" =>

                valid_c(2) <= '1';

            when "00111000" =>

                valid_c(2) <= '1';

            when "00111001" =>

                valid_c(2) <= '1';

            when "00111010" =>

                valid_c(2) <= '1';

            when "00111011" =>

                valid_c(2) <= '1';

            when "00111100" =>

                valid_c(2) <= '1';

            when "00111101" =>

                valid_c(2) <= '1';

            when "00111110" =>

                valid_c(2) <= '1';

            when "00111111" =>

                valid_c(2) <= '1';

            when "01000011" =>

                valid_c(2) <= '1';

            when "01000101" =>

                valid_c(2) <= '1';

            when "01000110" =>

                valid_c(2) <= '1';

            when "01000111" =>

                valid_c(2) <= '1';

            when "01001001" =>

                valid_c(2) <= '1';

            when "01001010" =>

                valid_c(2) <= '1';

            when "01001011" =>

                valid_c(2) <= '1';

            when "01001100" =>

                valid_c(2) <= '1';

            when "01001101" =>

                valid_c(2) <= '1';

            when "01001110" =>

                valid_c(2) <= '1';

            when "01001111" =>

                valid_c(2) <= '1';

            when "01010001" =>

                valid_c(2) <= '1';

            when "01010010" =>

                valid_c(2) <= '1';

            when "01010011" =>

                valid_c(2) <= '1';

            when "01010100" =>

                valid_c(2) <= '1';

            when "01010101" =>

                valid_c(2) <= '1';

            when "01010110" =>

                valid_c(2) <= '1';

            when "01010111" =>

                valid_c(2) <= '1';

            when "01011000" =>

                valid_c(2) <= '1';

            when "01011001" =>

                valid_c(2) <= '1';

            when "01011010" =>

                valid_c(2) <= '1';

            when "01011011" =>

                valid_c(2) <= '1';

            when "01011100" =>

                valid_c(2) <= '1';

            when "01011101" =>

                valid_c(2) <= '1';

            when "01011110" =>

                valid_c(2) <= '1';

            when "01011111" =>

                valid_c(2) <= '1';

            when "01100001" =>

                valid_c(2) <= '1';

            when "01100010" =>

                valid_c(2) <= '1';

            when "01100011" =>

                valid_c(2) <= '1';

            when "01100100" =>

                valid_c(2) <= '1';

            when "01100101" =>

                valid_c(2) <= '1';

            when "01100110" =>

                valid_c(2) <= '1';

            when "01100111" =>

                valid_c(2) <= '1';

            when "01101000" =>

                valid_c(2) <= '1';

            when "01101001" =>

                valid_c(2) <= '1';

            when "01101010" =>

                valid_c(2) <= '1';

            when "01101011" =>

                valid_c(2) <= '1';

            when "01101100" =>

                valid_c(2) <= '1';

            when "01101101" =>

                valid_c(2) <= '1';

            when "01101110" =>

                valid_c(2) <= '1';

            when "01101111" =>

                valid_c(2) <= '1';

            when "01110000" =>

                valid_c(2) <= '1';

            when "01110001" =>

                valid_c(2) <= '1';

            when "01110010" =>

                valid_c(2) <= '1';

            when "01110011" =>

                valid_c(2) <= '1';

            when "01110100" =>

                valid_c(2) <= '1';

            when "01110101" =>

                valid_c(2) <= '1';

            when "01110110" =>

                valid_c(2) <= '1';

            when "01110111" =>

                valid_c(2) <= '1';

            when "01111000" =>

                valid_c(2) <= '1';

            when "01111001" =>

                valid_c(2) <= '1';

            when "01111010" =>

                valid_c(2) <= '1';

            when "01111011" =>

                valid_c(2) <= '1';

            when "01111100" =>

                valid_c(2) <= '1';

            when "01111101" =>

                valid_c(2) <= '1';

            when "01111110" =>

                valid_c(2) <= '1';

            when "01111111" =>

                valid_c(2) <= '1';

            when "10000011" =>

                valid_c(2) <= '1';

            when "10000101" =>

                valid_c(2) <= '1';

            when "10000110" =>

                valid_c(2) <= '1';

            when "10000111" =>

                valid_c(2) <= '1';

            when "10001001" =>

                valid_c(2) <= '1';

            when "10001010" =>

                valid_c(2) <= '1';

            when "10001011" =>

                valid_c(2) <= '1';

            when "10001100" =>

                valid_c(2) <= '1';

            when "10001101" =>

                valid_c(2) <= '1';

            when "10001110" =>

                valid_c(2) <= '1';

            when "10001111" =>

                valid_c(2) <= '1';

            when "10010001" =>

                valid_c(2) <= '1';

            when "10010010" =>

                valid_c(2) <= '1';

            when "10010011" =>

                valid_c(2) <= '1';

            when "10010100" =>

                valid_c(2) <= '1';

            when "10010101" =>

                valid_c(2) <= '1';

            when "10010110" =>

                valid_c(2) <= '1';

            when "10010111" =>

                valid_c(2) <= '1';

            when "10011000" =>

                valid_c(2) <= '1';

            when "10011001" =>

                valid_c(2) <= '1';

            when "10011010" =>

                valid_c(2) <= '1';

            when "10011011" =>

                valid_c(2) <= '1';

            when "10011100" =>

                valid_c(2) <= '1';

            when "10011101" =>

                valid_c(2) <= '1';

            when "10011110" =>

                valid_c(2) <= '1';

            when "10011111" =>

                valid_c(2) <= '1';

            when "10100001" =>

                valid_c(2) <= '1';

            when "10100010" =>

                valid_c(2) <= '1';

            when "10100011" =>

                valid_c(2) <= '1';

            when "10100100" =>

                valid_c(2) <= '1';

            when "10100101" =>

                valid_c(2) <= '1';

            when "10100110" =>

                valid_c(2) <= '1';

            when "10100111" =>

                valid_c(2) <= '1';

            when "10101000" =>

                valid_c(2) <= '1';

            when "10101001" =>

                valid_c(2) <= '1';

            when "10101010" =>

                valid_c(2) <= '1';

            when "10101011" =>

                valid_c(2) <= '1';

            when "10101100" =>

                valid_c(2) <= '1';

            when "10101101" =>

                valid_c(2) <= '1';

            when "10101110" =>

                valid_c(2) <= '1';

            when "10101111" =>

                valid_c(2) <= '1';

            when "10110000" =>

                valid_c(2) <= '1';

            when "10110001" =>

                valid_c(2) <= '1';

            when "10110010" =>

                valid_c(2) <= '1';

            when "10110011" =>

                valid_c(2) <= '1';

            when "10110100" =>

                valid_c(2) <= '1';

            when "10110101" =>

                valid_c(2) <= '1';

            when "10110110" =>

                valid_c(2) <= '1';

            when "10110111" =>

                valid_c(2) <= '1';

            when "10111000" =>

                valid_c(2) <= '1';

            when "10111001" =>

                valid_c(2) <= '1';

            when "10111010" =>

                valid_c(2) <= '1';

            when "10111011" =>

                valid_c(2) <= '1';

            when "10111100" =>

                valid_c(2) <= '1';

            when "10111101" =>

                valid_c(2) <= '1';

            when "10111110" =>

                valid_c(2) <= '1';

            when "10111111" =>

                valid_c(2) <= '1';

            when "11000001" =>

                valid_c(2) <= '1';

            when "11000010" =>

                valid_c(2) <= '1';

            when "11000011" =>

                valid_c(2) <= '1';

            when "11000100" =>

                valid_c(2) <= '1';

            when "11000101" =>

                valid_c(2) <= '1';

            when "11000110" =>

                valid_c(2) <= '1';

            when "11000111" =>

                valid_c(2) <= '1';

            when "11001000" =>

                valid_c(2) <= '1';

            when "11001001" =>

                valid_c(2) <= '1';

            when "11001010" =>

                valid_c(2) <= '1';

            when "11001011" =>

                valid_c(2) <= '1';

            when "11001100" =>

                valid_c(2) <= '1';

            when "11001101" =>

                valid_c(2) <= '1';

            when "11001110" =>

                valid_c(2) <= '1';

            when "11001111" =>

                valid_c(2) <= '1';

            when "11010000" =>

                valid_c(2) <= '1';

            when "11010001" =>

                valid_c(2) <= '1';

            when "11010010" =>

                valid_c(2) <= '1';

            when "11010011" =>

                valid_c(2) <= '1';

            when "11010100" =>

                valid_c(2) <= '1';

            when "11010101" =>

                valid_c(2) <= '1';

            when "11010110" =>

                valid_c(2) <= '1';

            when "11010111" =>

                valid_c(2) <= '1';

            when "11011000" =>

                valid_c(2) <= '1';

            when "11011001" =>

                valid_c(2) <= '1';

            when "11011010" =>

                valid_c(2) <= '1';

            when "11011011" =>

                valid_c(2) <= '1';

            when "11011100" =>

                valid_c(2) <= '1';

            when "11011101" =>

                valid_c(2) <= '1';

            when "11011110" =>

                valid_c(2) <= '1';

            when "11011111" =>

                valid_c(2) <= '1';

            when "11100000" =>

                valid_c(2) <= '1';

            when "11100001" =>

                valid_c(2) <= '1';

            when "11100010" =>

                valid_c(2) <= '1';

            when "11100011" =>

                valid_c(2) <= '1';

            when "11100100" =>

                valid_c(2) <= '1';

            when "11100101" =>

                valid_c(2) <= '1';

            when "11100110" =>

                valid_c(2) <= '1';

            when "11100111" =>

                valid_c(2) <= '1';

            when "11101000" =>

                valid_c(2) <= '1';

            when "11101001" =>

                valid_c(2) <= '1';

            when "11101010" =>

                valid_c(2) <= '1';

            when "11101011" =>

                valid_c(2) <= '1';

            when "11101100" =>

                valid_c(2) <= '1';

            when "11101101" =>

                valid_c(2) <= '1';

            when "11101110" =>

                valid_c(2) <= '1';

            when "11101111" =>

                valid_c(2) <= '1';

            when "11110000" =>

                valid_c(2) <= '1';

            when "11110001" =>

                valid_c(2) <= '1';

            when "11110010" =>

                valid_c(2) <= '1';

            when "11110011" =>

                valid_c(2) <= '1';

            when "11110100" =>

                valid_c(2) <= '1';

            when "11110101" =>

                valid_c(2) <= '1';

            when "11110110" =>

                valid_c(2) <= '1';

            when "11110111" =>

                valid_c(2) <= '1';

            when "11111000" =>

                valid_c(2) <= '1';

            when "11111001" =>

                valid_c(2) <= '1';

            when "11111010" =>

                valid_c(2) <= '1';

            when "11111011" =>

                valid_c(2) <= '1';

            when "11111100" =>

                valid_c(2) <= '1';

            when "11111101" =>

                valid_c(2) <= '1';

            when "11111110" =>

                valid_c(2) <= '1';

            when "11111111" =>

                valid_c(2) <= '1';

            when others =>

                valid_c(2) <= '0';

        end case;

    end process;


    -- Lane 3

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "00001111" =>

                valid_c(3) <= '1';

            when "00010111" =>

                valid_c(3) <= '1';

            when "00011011" =>

                valid_c(3) <= '1';

            when "00011101" =>

                valid_c(3) <= '1';

            when "00011110" =>

                valid_c(3) <= '1';

            when "00011111" =>

                valid_c(3) <= '1';

            when "00100111" =>

                valid_c(3) <= '1';

            when "00101011" =>

                valid_c(3) <= '1';

            when "00101101" =>

                valid_c(3) <= '1';

            when "00101110" =>

                valid_c(3) <= '1';

            when "00101111" =>

                valid_c(3) <= '1';

            when "00110011" =>

                valid_c(3) <= '1';

            when "00110101" =>

                valid_c(3) <= '1';

            when "00110110" =>

                valid_c(3) <= '1';

            when "00110111" =>

                valid_c(3) <= '1';

            when "00111001" =>

                valid_c(3) <= '1';

            when "00111010" =>

                valid_c(3) <= '1';

            when "00111011" =>

                valid_c(3) <= '1';

            when "00111100" =>

                valid_c(3) <= '1';

            when "00111101" =>

                valid_c(3) <= '1';

            when "00111110" =>

                valid_c(3) <= '1';

            when "00111111" =>

                valid_c(3) <= '1';

            when "01000111" =>

                valid_c(3) <= '1';

            when "01001011" =>

                valid_c(3) <= '1';

            when "01001101" =>

                valid_c(3) <= '1';

            when "01001110" =>

                valid_c(3) <= '1';

            when "01001111" =>

                valid_c(3) <= '1';

            when "01010011" =>

                valid_c(3) <= '1';

            when "01010101" =>

                valid_c(3) <= '1';

            when "01010110" =>

                valid_c(3) <= '1';

            when "01010111" =>

                valid_c(3) <= '1';

            when "01011001" =>

                valid_c(3) <= '1';

            when "01011010" =>

                valid_c(3) <= '1';

            when "01011011" =>

                valid_c(3) <= '1';

            when "01011100" =>

                valid_c(3) <= '1';

            when "01011101" =>

                valid_c(3) <= '1';

            when "01011110" =>

                valid_c(3) <= '1';

            when "01011111" =>

                valid_c(3) <= '1';

            when "01100011" =>

                valid_c(3) <= '1';

            when "01100101" =>

                valid_c(3) <= '1';

            when "01100110" =>

                valid_c(3) <= '1';

            when "01100111" =>

                valid_c(3) <= '1';

            when "01101001" =>

                valid_c(3) <= '1';

            when "01101010" =>

                valid_c(3) <= '1';

            when "01101011" =>

                valid_c(3) <= '1';

            when "01101100" =>

                valid_c(3) <= '1';

            when "01101101" =>

                valid_c(3) <= '1';

            when "01101110" =>

                valid_c(3) <= '1';

            when "01101111" =>

                valid_c(3) <= '1';

            when "01110001" =>

                valid_c(3) <= '1';

            when "01110010" =>

                valid_c(3) <= '1';

            when "01110011" =>

                valid_c(3) <= '1';

            when "01110100" =>

                valid_c(3) <= '1';

            when "01110101" =>

                valid_c(3) <= '1';

            when "01110110" =>

                valid_c(3) <= '1';

            when "01110111" =>

                valid_c(3) <= '1';

            when "01111000" =>

                valid_c(3) <= '1';

            when "01111001" =>

                valid_c(3) <= '1';

            when "01111010" =>

                valid_c(3) <= '1';

            when "01111011" =>

                valid_c(3) <= '1';

            when "01111100" =>

                valid_c(3) <= '1';

            when "01111101" =>

                valid_c(3) <= '1';

            when "01111110" =>

                valid_c(3) <= '1';

            when "01111111" =>

                valid_c(3) <= '1';

            when "10000111" =>

                valid_c(3) <= '1';

            when "10001011" =>

                valid_c(3) <= '1';

            when "10001101" =>

                valid_c(3) <= '1';

            when "10001110" =>

                valid_c(3) <= '1';

            when "10001111" =>

                valid_c(3) <= '1';

            when "10010011" =>

                valid_c(3) <= '1';

            when "10010101" =>

                valid_c(3) <= '1';

            when "10010110" =>

                valid_c(3) <= '1';

            when "10010111" =>

                valid_c(3) <= '1';

            when "10011001" =>

                valid_c(3) <= '1';

            when "10011010" =>

                valid_c(3) <= '1';

            when "10011011" =>

                valid_c(3) <= '1';

            when "10011100" =>

                valid_c(3) <= '1';

            when "10011101" =>

                valid_c(3) <= '1';

            when "10011110" =>

                valid_c(3) <= '1';

            when "10011111" =>

                valid_c(3) <= '1';

            when "10100011" =>

                valid_c(3) <= '1';

            when "10100101" =>

                valid_c(3) <= '1';

            when "10100110" =>

                valid_c(3) <= '1';

            when "10100111" =>

                valid_c(3) <= '1';

            when "10101001" =>

                valid_c(3) <= '1';

            when "10101010" =>

                valid_c(3) <= '1';

            when "10101011" =>

                valid_c(3) <= '1';

            when "10101100" =>

                valid_c(3) <= '1';

            when "10101101" =>

                valid_c(3) <= '1';

            when "10101110" =>

                valid_c(3) <= '1';

            when "10101111" =>

                valid_c(3) <= '1';

            when "10110001" =>

                valid_c(3) <= '1';

            when "10110010" =>

                valid_c(3) <= '1';

            when "10110011" =>

                valid_c(3) <= '1';

            when "10110100" =>

                valid_c(3) <= '1';

            when "10110101" =>

                valid_c(3) <= '1';

            when "10110110" =>

                valid_c(3) <= '1';

            when "10110111" =>

                valid_c(3) <= '1';

            when "10111000" =>

                valid_c(3) <= '1';

            when "10111001" =>

                valid_c(3) <= '1';

            when "10111010" =>

                valid_c(3) <= '1';

            when "10111011" =>

                valid_c(3) <= '1';

            when "10111100" =>

                valid_c(3) <= '1';

            when "10111101" =>

                valid_c(3) <= '1';

            when "10111110" =>

                valid_c(3) <= '1';

            when "10111111" =>

                valid_c(3) <= '1';

            when "11000011" =>

                valid_c(3) <= '1';

            when "11000101" =>

                valid_c(3) <= '1';

            when "11000110" =>

                valid_c(3) <= '1';

            when "11000111" =>

                valid_c(3) <= '1';

            when "11001001" =>

                valid_c(3) <= '1';

            when "11001010" =>

                valid_c(3) <= '1';

            when "11001011" =>

                valid_c(3) <= '1';

            when "11001100" =>

                valid_c(3) <= '1';

            when "11001101" =>

                valid_c(3) <= '1';

            when "11001110" =>

                valid_c(3) <= '1';

            when "11001111" =>

                valid_c(3) <= '1';

            when "11010001" =>

                valid_c(3) <= '1';

            when "11010010" =>

                valid_c(3) <= '1';

            when "11010011" =>

                valid_c(3) <= '1';

            when "11010100" =>

                valid_c(3) <= '1';

            when "11010101" =>

                valid_c(3) <= '1';

            when "11010110" =>

                valid_c(3) <= '1';

            when "11010111" =>

                valid_c(3) <= '1';

            when "11011000" =>

                valid_c(3) <= '1';

            when "11011001" =>

                valid_c(3) <= '1';

            when "11011010" =>

                valid_c(3) <= '1';

            when "11011011" =>

                valid_c(3) <= '1';

            when "11011100" =>

                valid_c(3) <= '1';

            when "11011101" =>

                valid_c(3) <= '1';

            when "11011110" =>

                valid_c(3) <= '1';

            when "11011111" =>

                valid_c(3) <= '1';

            when "11100001" =>

                valid_c(3) <= '1';

            when "11100010" =>

                valid_c(3) <= '1';

            when "11100011" =>

                valid_c(3) <= '1';

            when "11100100" =>

                valid_c(3) <= '1';

            when "11100101" =>

                valid_c(3) <= '1';

            when "11100110" =>

                valid_c(3) <= '1';

            when "11100111" =>

                valid_c(3) <= '1';

            when "11101000" =>

                valid_c(3) <= '1';

            when "11101001" =>

                valid_c(3) <= '1';

            when "11101010" =>

                valid_c(3) <= '1';

            when "11101011" =>

                valid_c(3) <= '1';

            when "11101100" =>

                valid_c(3) <= '1';

            when "11101101" =>

                valid_c(3) <= '1';

            when "11101110" =>

                valid_c(3) <= '1';

            when "11101111" =>

                valid_c(3) <= '1';

            when "11110000" =>

                valid_c(3) <= '1';

            when "11110001" =>

                valid_c(3) <= '1';

            when "11110010" =>

                valid_c(3) <= '1';

            when "11110011" =>

                valid_c(3) <= '1';

            when "11110100" =>

                valid_c(3) <= '1';

            when "11110101" =>

                valid_c(3) <= '1';

            when "11110110" =>

                valid_c(3) <= '1';

            when "11110111" =>

                valid_c(3) <= '1';

            when "11111000" =>

                valid_c(3) <= '1';

            when "11111001" =>

                valid_c(3) <= '1';

            when "11111010" =>

                valid_c(3) <= '1';

            when "11111011" =>

                valid_c(3) <= '1';

            when "11111100" =>

                valid_c(3) <= '1';

            when "11111101" =>

                valid_c(3) <= '1';

            when "11111110" =>

                valid_c(3) <= '1';

            when "11111111" =>

                valid_c(3) <= '1';

            when others =>

                valid_c(3) <= '0';

        end case;

    end process;


    -- Lane 4

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "00011111" =>

                valid_c(4) <= '1';

            when "00101111" =>

                valid_c(4) <= '1';

            when "00110111" =>

                valid_c(4) <= '1';

            when "00111011" =>

                valid_c(4) <= '1';

            when "00111101" =>

                valid_c(4) <= '1';

            when "00111110" =>

                valid_c(4) <= '1';

            when "00111111" =>

                valid_c(4) <= '1';

            when "01001111" =>

                valid_c(4) <= '1';

            when "01010111" =>

                valid_c(4) <= '1';

            when "01011011" =>

                valid_c(4) <= '1';

            when "01011101" =>

                valid_c(4) <= '1';

            when "01011110" =>

                valid_c(4) <= '1';

            when "01011111" =>

                valid_c(4) <= '1';

            when "01100111" =>

                valid_c(4) <= '1';

            when "01101011" =>

                valid_c(4) <= '1';

            when "01101101" =>

                valid_c(4) <= '1';

            when "01101110" =>

                valid_c(4) <= '1';

            when "01101111" =>

                valid_c(4) <= '1';

            when "01110011" =>

                valid_c(4) <= '1';

            when "01110101" =>

                valid_c(4) <= '1';

            when "01110110" =>

                valid_c(4) <= '1';

            when "01110111" =>

                valid_c(4) <= '1';

            when "01111001" =>

                valid_c(4) <= '1';

            when "01111010" =>

                valid_c(4) <= '1';

            when "01111011" =>

                valid_c(4) <= '1';

            when "01111100" =>

                valid_c(4) <= '1';

            when "01111101" =>

                valid_c(4) <= '1';

            when "01111110" =>

                valid_c(4) <= '1';

            when "01111111" =>

                valid_c(4) <= '1';

            when "10001111" =>

                valid_c(4) <= '1';

            when "10010111" =>

                valid_c(4) <= '1';

            when "10011011" =>

                valid_c(4) <= '1';

            when "10011101" =>

                valid_c(4) <= '1';

            when "10011110" =>

                valid_c(4) <= '1';

            when "10011111" =>

                valid_c(4) <= '1';

            when "10100111" =>

                valid_c(4) <= '1';

            when "10101011" =>

                valid_c(4) <= '1';

            when "10101101" =>

                valid_c(4) <= '1';

            when "10101110" =>

                valid_c(4) <= '1';

            when "10101111" =>

                valid_c(4) <= '1';

            when "10110011" =>

                valid_c(4) <= '1';

            when "10110101" =>

                valid_c(4) <= '1';

            when "10110110" =>

                valid_c(4) <= '1';

            when "10110111" =>

                valid_c(4) <= '1';

            when "10111001" =>

                valid_c(4) <= '1';

            when "10111010" =>

                valid_c(4) <= '1';

            when "10111011" =>

                valid_c(4) <= '1';

            when "10111100" =>

                valid_c(4) <= '1';

            when "10111101" =>

                valid_c(4) <= '1';

            when "10111110" =>

                valid_c(4) <= '1';

            when "10111111" =>

                valid_c(4) <= '1';

            when "11000111" =>

                valid_c(4) <= '1';

            when "11001011" =>

                valid_c(4) <= '1';

            when "11001101" =>

                valid_c(4) <= '1';

            when "11001110" =>

                valid_c(4) <= '1';

            when "11001111" =>

                valid_c(4) <= '1';

            when "11010011" =>

                valid_c(4) <= '1';

            when "11010101" =>

                valid_c(4) <= '1';

            when "11010110" =>

                valid_c(4) <= '1';

            when "11010111" =>

                valid_c(4) <= '1';

            when "11011001" =>

                valid_c(4) <= '1';

            when "11011010" =>

                valid_c(4) <= '1';

            when "11011011" =>

                valid_c(4) <= '1';

            when "11011100" =>

                valid_c(4) <= '1';

            when "11011101" =>

                valid_c(4) <= '1';

            when "11011110" =>

                valid_c(4) <= '1';

            when "11011111" =>

                valid_c(4) <= '1';

            when "11100011" =>

                valid_c(4) <= '1';

            when "11100101" =>

                valid_c(4) <= '1';

            when "11100110" =>

                valid_c(4) <= '1';

            when "11100111" =>

                valid_c(4) <= '1';

            when "11101001" =>

                valid_c(4) <= '1';

            when "11101010" =>

                valid_c(4) <= '1';

            when "11101011" =>

                valid_c(4) <= '1';

            when "11101100" =>

                valid_c(4) <= '1';

            when "11101101" =>

                valid_c(4) <= '1';

            when "11101110" =>

                valid_c(4) <= '1';

            when "11101111" =>

                valid_c(4) <= '1';

            when "11110001" =>

                valid_c(4) <= '1';

            when "11110010" =>

                valid_c(4) <= '1';

            when "11110011" =>

                valid_c(4) <= '1';

            when "11110100" =>

                valid_c(4) <= '1';

            when "11110101" =>

                valid_c(4) <= '1';

            when "11110110" =>

                valid_c(4) <= '1';

            when "11110111" =>

                valid_c(4) <= '1';

            when "11111000" =>

                valid_c(4) <= '1';

            when "11111001" =>

                valid_c(4) <= '1';

            when "11111010" =>

                valid_c(4) <= '1';

            when "11111011" =>

                valid_c(4) <= '1';

            when "11111100" =>

                valid_c(4) <= '1';

            when "11111101" =>

                valid_c(4) <= '1';

            when "11111110" =>

                valid_c(4) <= '1';

            when "11111111" =>

                valid_c(4) <= '1';

            when others =>

                valid_c(4) <= '0';

        end case;

    end process;


    -- Lane 5

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "00111111" =>

                valid_c(5) <= '1';

            when "01011111" =>

                valid_c(5) <= '1';

            when "01101111" =>

                valid_c(5) <= '1';

            when "01110111" =>

                valid_c(5) <= '1';

            when "01111011" =>

                valid_c(5) <= '1';

            when "01111101" =>

                valid_c(5) <= '1';

            when "01111110" =>

                valid_c(5) <= '1';

            when "01111111" =>

                valid_c(5) <= '1';

            when "10011111" =>

                valid_c(5) <= '1';

            when "10101111" =>

                valid_c(5) <= '1';

            when "10110111" =>

                valid_c(5) <= '1';

            when "10111011" =>

                valid_c(5) <= '1';

            when "10111101" =>

                valid_c(5) <= '1';

            when "10111110" =>

                valid_c(5) <= '1';

            when "10111111" =>

                valid_c(5) <= '1';

            when "11001111" =>

                valid_c(5) <= '1';

            when "11010111" =>

                valid_c(5) <= '1';

            when "11011011" =>

                valid_c(5) <= '1';

            when "11011101" =>

                valid_c(5) <= '1';

            when "11011110" =>

                valid_c(5) <= '1';

            when "11011111" =>

                valid_c(5) <= '1';

            when "11100111" =>

                valid_c(5) <= '1';

            when "11101011" =>

                valid_c(5) <= '1';

            when "11101101" =>

                valid_c(5) <= '1';

            when "11101110" =>

                valid_c(5) <= '1';

            when "11101111" =>

                valid_c(5) <= '1';

            when "11110011" =>

                valid_c(5) <= '1';

            when "11110101" =>

                valid_c(5) <= '1';

            when "11110110" =>

                valid_c(5) <= '1';

            when "11110111" =>

                valid_c(5) <= '1';

            when "11111001" =>

                valid_c(5) <= '1';

            when "11111010" =>

                valid_c(5) <= '1';

            when "11111011" =>

                valid_c(5) <= '1';

            when "11111100" =>

                valid_c(5) <= '1';

            when "11111101" =>

                valid_c(5) <= '1';

            when "11111110" =>

                valid_c(5) <= '1';

            when "11111111" =>

                valid_c(5) <= '1';

            when others =>

                valid_c(5) <= '0';

        end case;

    end process;


    -- Lane 6

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "01111111" =>

                valid_c(6) <= '1';

            when "10111111" =>

                valid_c(6) <= '1';

            when "11011111" =>

                valid_c(6) <= '1';

            when "11101111" =>

                valid_c(6) <= '1';

            when "11110111" =>

                valid_c(6) <= '1';

            when "11111011" =>

                valid_c(6) <= '1';

            when "11111101" =>

                valid_c(6) <= '1';

            when "11111110" =>

                valid_c(6) <= '1';

            when "11111111" =>

                valid_c(6) <= '1';

            when others =>

                valid_c(6) <= '0';

        end case;

    end process;


    -- Lane 7

    process (PREVIOUS_STAGE_VALID(0 to 7))

    begin

        case PREVIOUS_STAGE_VALID(0 to 7) is

            when "11111111" =>

                valid_c(7) <= '1';

            when others =>

                valid_c(7) <= '0';

        end case;

    end process;


    -- Register the valid signals for the next stage.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            if (RESET = '1') then

                VALID_Buffer <= (others => '0') after DLY;

            else

                VALID_Buffer <= valid_c after DLY;

            end if;

        end if;

    end process;

end RTL;
