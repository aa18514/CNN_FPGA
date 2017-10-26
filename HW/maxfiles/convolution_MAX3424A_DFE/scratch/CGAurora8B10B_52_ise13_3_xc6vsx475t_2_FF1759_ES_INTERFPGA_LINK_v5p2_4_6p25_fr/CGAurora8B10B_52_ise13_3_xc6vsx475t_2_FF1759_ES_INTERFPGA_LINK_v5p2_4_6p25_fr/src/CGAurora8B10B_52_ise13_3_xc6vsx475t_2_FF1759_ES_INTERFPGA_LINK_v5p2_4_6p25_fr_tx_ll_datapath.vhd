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
--  TX_LL_DATAPATH
--
--
--  Description: This module pipelines the data path while handling the PAD
--               character placement and valid data flags.
--
--               This module supports 8 4-byte lane designs
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_TX_LL_DATAPATH is

    port (

    -- LocalLink PDU Interface

            TX_D         : in std_logic_vector(0 to 127);
            TX_REM       : in std_logic_vector(0 to 3);
            TX_SRC_RDY_N : in std_logic;
            TX_SOF_N     : in std_logic;
            TX_EOF_N     : in std_logic;

    -- Aurora Lane Interface

            TX_PE_DATA_V : out std_logic_vector(0 to 7);
            GEN_PAD      : out std_logic_vector(0 to 7);
            TX_PE_DATA   : out std_logic_vector(0 to 127);

    -- TX_LL Control Module Interface

            HALT_C       : in std_logic;
            TX_DST_RDY_N : in std_logic;

    -- System Interface

            CHANNEL_UP   : in std_logic;
            USER_CLK     : in std_logic

         );

end CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_TX_LL_DATAPATH;

architecture RTL of CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_TX_LL_DATAPATH is

-- Parameter Declarations --

    constant DLY : time := 1 ns;

-- External Register Declarations --

    signal TX_PE_DATA_V_Buffer : std_logic_vector(0 to 7);
    signal GEN_PAD_Buffer      : std_logic_vector(0 to 7);
    signal TX_PE_DATA_Buffer   : std_logic_vector(0 to 127);

-- Internal Register Declarations --

    signal in_frame_r              : std_logic;
    signal storage_r               : std_logic_vector(0 to 15);
    signal storage_v_r             : std_logic;
    signal storage_pad_r           : std_logic;
    signal tx_pe_data_r            : std_logic_vector(0 to 127);
    signal valid_c                 : std_logic_vector(0 to 7);
    signal tx_pe_data_v_r          : std_logic_vector(0 to 7);
    signal gen_pad_c               : std_logic_vector(0 to 7);
    signal gen_pad_r               : std_logic_vector(0 to 7);
    signal tx_d_pipeline_r         : std_logic_vector(0 to 127);
    signal tx_rem_pipeline_r       : std_logic_vector(0 to 3);
    signal tx_src_rdy_n_pipeline_r : std_logic;
    signal tx_sof_n_pipeline_r     : std_logic;
    signal tx_eof_n_pipeline_r     : std_logic;
    signal halt_c_pipeline_r       : std_logic;
    signal tx_dst_rdy_n_pipeline_r : std_logic;

-- Internal Wire Declarations --
    
    signal ll_valid_c              : std_logic;
    signal in_frame_c              : std_logic;

begin

    TX_PE_DATA_V <= TX_PE_DATA_V_Buffer;
    GEN_PAD      <= GEN_PAD_Buffer;
    TX_PE_DATA   <= TX_PE_DATA_Buffer;

-- Main Body of Code --

    -- Pipeline all inputs.  This creates 'travelling registers',
    -- which makes it easier for par to place blocks to reduce congestion while
    -- meeting all timing constriants.

    -- First we pipeline the control signals.  Some of these signals are used
    -- many times in the datapath.  The sythesis tool will replicate these
    -- registers to keep fanout low and preserve timing.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            if(CHANNEL_UP = '0') then

                tx_src_rdy_n_pipeline_r <= '1' after DLY;
                tx_sof_n_pipeline_r     <= '1' after DLY;
                tx_eof_n_pipeline_r     <= '1' after DLY;
                halt_c_pipeline_r       <= '0' after DLY;
                tx_dst_rdy_n_pipeline_r <= '1' after DLY;

            else

                tx_src_rdy_n_pipeline_r <= TX_SRC_RDY_N after DLY;
                tx_sof_n_pipeline_r     <= TX_SOF_N     after DLY;
                tx_eof_n_pipeline_r     <= TX_EOF_N     after DLY;
                halt_c_pipeline_r       <= HALT_C       after DLY;
                tx_dst_rdy_n_pipeline_r <= TX_DST_RDY_N after DLY;

            end if;

        end if;

    end process;


    -- We pipeline the data and REM seperately from the control signals: we
    -- use no reset because the routing is expensive, and the signals are
    -- all qualified by the control signals.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            tx_d_pipeline_r   <= TX_D   after DLY;
            tx_rem_pipeline_r <= TX_REM after DLY;

        end if;

    end process;



    -- LocalLink input is only valid when TX_SRC_RDY_N and TX_DST_RDY_N are both asserted
    ll_valid_c    <=   not tx_src_rdy_n_pipeline_r and not tx_dst_rdy_n_pipeline_r;


    -- Data must only be read if it is within a frame. If a frame will last multiple cycles
    -- we assert in_frame_r as long as the frame is open.
    process(USER_CLK)
    begin
        if(USER_CLK'event and USER_CLK = '1') then
            if(CHANNEL_UP = '0') then
                in_frame_r  <=  '0' after DLY;
            elsif(ll_valid_c = '1') then
                if( (tx_sof_n_pipeline_r = '0') and (tx_eof_n_pipeline_r = '1') ) then
                    in_frame_r  <=  '1' after DLY;
                elsif(tx_eof_n_pipeline_r = '0') then
                    in_frame_r  <=  '0' after DLY;
                end if;
            end if;
        end if;
    end process;
    
        
    in_frame_c   <=   ll_valid_c and (in_frame_r  or not tx_sof_n_pipeline_r);






    -- The last 2 bytes of data from the LocalLink interface must be stored
    -- for the next cycle to make room for the SCP character that must be
    -- placed at the beginning of the lane.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            if (halt_c_pipeline_r = '0') then

                storage_r <= tx_d_pipeline_r(112 to 127) after DLY;

            end if;

        end if;

    end process;


    -- All of the remaining bytes (except the last two) must be shifted
    -- and registered to be sent to the Channel.  The stored bytes go
    -- into the first position.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            if (halt_c_pipeline_r = '0') then

                tx_pe_data_r <= storage_r & tx_d_pipeline_r(0 to 111) after DLY;

            end if;

        end if;

    end process;


    -- We generate the valid_c signal based on the REM signal and the EOF signal.

    process (tx_eof_n_pipeline_r, tx_rem_pipeline_r)

    begin

        if (tx_eof_n_pipeline_r = '1') then

            valid_c <= "11111111";

        else

            case tx_rem_pipeline_r(0 to 3) is

                when "0000" => valid_c <= "10000000";
                when "0001" => valid_c <= "10000000";
                when "0010" => valid_c <= "11000000";
                when "0011" => valid_c <= "11000000";
                when "0100" => valid_c <= "11100000";
                when "0101" => valid_c <= "11100000";
                when "0110" => valid_c <= "11110000";
                when "0111" => valid_c <= "11110000";
                when "1000" => valid_c <= "11111000";
                when "1001" => valid_c <= "11111000";
                when "1010" => valid_c <= "11111100";
                when "1011" => valid_c <= "11111100";
                when "1100" => valid_c <= "11111110";
                when "1101" => valid_c <= "11111110";
                when "1110" => valid_c <= "11111111";
                when "1111" => valid_c <= "11111111";
                when others => valid_c <= "11111111";

            end case;

        end if;

    end process;


    -- If the last 2 bytes in the word are valid, they are placed in the storage register and
    -- storage_v_r is asserted to indicate the data is valid.  Note that data is only moved to
    -- storage if the PDU datapath is not halted, the data is valid and both TX_SRC_RDY_N
    -- and TX_DST_RDY_N (as indicated by DATA_VALID) are asserted.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            if (halt_c_pipeline_r = '0') then

                storage_v_r <= valid_c(7)  and in_frame_c after DLY;

            end if;

        end if;

    end process;


    -- The tx_pe_data_v_r registers track valid data in the TX_PE_DATA register.  The data is valid
    -- if it was valid in the previous stage.  Since the first 2 bytes come from storage, validity is
    -- determined from the storage_v_r signal.  The remaining bytes are valid if their valid signal
    -- is asserted, and both TX_SRC_RDY_N and TX_DST_RDY_N (as indicated by DATA_VALID) are asserted.
    -- Note that pdu data movement can be frozen by the halt signal.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            if (halt_c_pipeline_r = '0') then

                tx_pe_data_v_r(0) <= storage_v_r after DLY;

                tx_pe_data_v_r(1) <= valid_c(0) and in_frame_c after DLY;

                tx_pe_data_v_r(2) <= valid_c(1) and in_frame_c after DLY;

                tx_pe_data_v_r(3) <= valid_c(2) and in_frame_c after DLY;

                tx_pe_data_v_r(4) <= valid_c(3) and in_frame_c after DLY;

                tx_pe_data_v_r(5) <= valid_c(4) and in_frame_c after DLY;

                tx_pe_data_v_r(6) <= valid_c(5) and in_frame_c after DLY;

                tx_pe_data_v_r(7) <= valid_c(6) and in_frame_c after DLY;

            end if;

        end if;

    end process;




    -- We generate the gen_pad_c signal based on the REM signal and the EOF signal.

    process (tx_eof_n_pipeline_r, tx_rem_pipeline_r)

    begin

        if (tx_eof_n_pipeline_r = '1') then

            gen_pad_c <= "00000000";

        else

            case tx_rem_pipeline_r(0 to 3) is

                when "0000" => gen_pad_c <= "10000000";
                when "0001" => gen_pad_c <= "00000000";
                when "0010" => gen_pad_c <= "01000000";
                when "0011" => gen_pad_c <= "00000000";
                when "0100" => gen_pad_c <= "00100000";
                when "0101" => gen_pad_c <= "00000000";
                when "0110" => gen_pad_c <= "00010000";
                when "0111" => gen_pad_c <= "00000000";
                when "1000" => gen_pad_c <= "00001000";
                when "1001" => gen_pad_c <= "00000000";
                when "1010" => gen_pad_c <= "00000100";
                when "1011" => gen_pad_c <= "00000000";
                when "1100" => gen_pad_c <= "00000010";
                when "1101" => gen_pad_c <= "00000000";
                when "1110" => gen_pad_c <= "00000001";
                when "1111" => gen_pad_c <= "00000000";
                when others => gen_pad_c <= "00000000";

            end case;

        end if;

    end process;


    -- Store a padded byte pair if it's padded, TX_SRC_RDY_N is asserted, and data is valid.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            if (halt_c_pipeline_r = '0') then

                storage_pad_r <= gen_pad_c(7) and in_frame_c after DLY;

            end if;

        end if;

    end process;


    -- Register the gen_pad_r signals.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            if (halt_c_pipeline_r = '0') then

                gen_pad_r(0) <= storage_pad_r after DLY;

                gen_pad_r(1) <= gen_pad_c(0) and in_frame_c after DLY;

                gen_pad_r(2) <= gen_pad_c(1) and in_frame_c after DLY;

                gen_pad_r(3) <= gen_pad_c(2) and in_frame_c after DLY;

                gen_pad_r(4) <= gen_pad_c(3) and in_frame_c after DLY;

                gen_pad_r(5) <= gen_pad_c(4) and in_frame_c after DLY;

                gen_pad_r(6) <= gen_pad_c(5) and in_frame_c after DLY;

                gen_pad_r(7) <= gen_pad_c(6) and in_frame_c after DLY;

            end if;

        end if;

    end process;


    -- Implement the data out register.

    process (USER_CLK)

    begin

        if (USER_CLK 'event and USER_CLK = '1') then

            TX_PE_DATA_Buffer      <= tx_pe_data_r after DLY;
            TX_PE_DATA_V_Buffer(0) <= tx_pe_data_v_r(0) and not halt_c_pipeline_r after DLY;
            TX_PE_DATA_V_Buffer(1) <= tx_pe_data_v_r(1) and not halt_c_pipeline_r after DLY;
            TX_PE_DATA_V_Buffer(2) <= tx_pe_data_v_r(2) and not halt_c_pipeline_r after DLY;
            TX_PE_DATA_V_Buffer(3) <= tx_pe_data_v_r(3) and not halt_c_pipeline_r after DLY;
            TX_PE_DATA_V_Buffer(4) <= tx_pe_data_v_r(4) and not halt_c_pipeline_r after DLY;
            TX_PE_DATA_V_Buffer(5) <= tx_pe_data_v_r(5) and not halt_c_pipeline_r after DLY;
            TX_PE_DATA_V_Buffer(6) <= tx_pe_data_v_r(6) and not halt_c_pipeline_r after DLY;
            TX_PE_DATA_V_Buffer(7) <= tx_pe_data_v_r(7) and not halt_c_pipeline_r after DLY;
            GEN_PAD_Buffer(0)      <= gen_pad_r(0) and not halt_c_pipeline_r after DLY;
            GEN_PAD_Buffer(1)      <= gen_pad_r(1) and not halt_c_pipeline_r after DLY;
            GEN_PAD_Buffer(2)      <= gen_pad_r(2) and not halt_c_pipeline_r after DLY;
            GEN_PAD_Buffer(3)      <= gen_pad_r(3) and not halt_c_pipeline_r after DLY;
            GEN_PAD_Buffer(4)      <= gen_pad_r(4) and not halt_c_pipeline_r after DLY;
            GEN_PAD_Buffer(5)      <= gen_pad_r(5) and not halt_c_pipeline_r after DLY;
            GEN_PAD_Buffer(6)      <= gen_pad_r(6) and not halt_c_pipeline_r after DLY;
            GEN_PAD_Buffer(7)      <= gen_pad_r(7) and not halt_c_pipeline_r after DLY;

        end if;

    end process;


end RTL;
