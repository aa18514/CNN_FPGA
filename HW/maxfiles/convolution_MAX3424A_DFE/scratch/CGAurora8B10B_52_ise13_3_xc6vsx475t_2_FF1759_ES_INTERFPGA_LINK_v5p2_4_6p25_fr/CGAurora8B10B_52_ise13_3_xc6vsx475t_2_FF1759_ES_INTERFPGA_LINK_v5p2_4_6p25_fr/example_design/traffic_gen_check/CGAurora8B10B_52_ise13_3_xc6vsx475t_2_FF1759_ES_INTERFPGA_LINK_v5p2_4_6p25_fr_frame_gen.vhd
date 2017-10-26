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
--  FRAME GEN
--
--
--
--  Description: This module is a pattern generator to test the Aurora
--               designs in hardware. It generates data and passes it 
--               through the Aurora channel. If connected to a framing 
--               interface, it generates frames of varying size and 
--               separation. The data it generates on each cycle is 
--               a word of all zeros, except for one high bit which 
--               is shifted right each cycle. REM is always set to 
--               the maximum value.


library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;
use IEEE.STD_LOGIC_ARITH.all;
use IEEE.STD_LOGIC_UNSIGNED.all;
use WORK.AURORA_PKG.all; 

-- synthesis translate_off
library UNISIM;
use UNISIM.all;
-- synthesis translate_on


entity CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_FRAME_GEN is
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
end CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_FRAME_GEN;


architecture RTL of CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_FRAME_GEN is


--***********************************Parameter Declarations***************************

    constant DLY             : time      := 1 ns;

--***************************Internal Register Declarations*************************** 

    signal  reset_c                     :   std_logic;    
    signal  data_lfsr_r                 :   std_logic_vector(0 to 15);    
    signal  frame_size_r                :   std_logic_vector(0 to 7);
    signal  bytes_sent_r                :   std_logic_vector(0 to 7);
    signal  ifg_size_r                  :   std_logic_vector(0 to 3);
    
    --State registers for one-hot state machine
    signal  idle_r                      :   std_logic;
    signal  single_cycle_frame_r        :   std_logic;
    signal  sof_r                       :   std_logic;
    signal  data_cycle_r                :   std_logic;
    signal  eof_r                       :   std_logic;    


 
--*********************************Wire Declarations**********************************
   
    signal  ifg_done_c                  :   std_logic;
    
    --Next state signals for one-hot state machine
    signal  next_idle_c                 :   std_logic;
    signal  next_single_cycle_frame_c   :   std_logic;
    signal  next_sof_c                  :   std_logic;
    signal  next_data_cycle_c           :   std_logic;
    signal  next_eof_c                  :   std_logic;
    
    



begin
--*********************************Main Body of Code**********************************

  --Generate RESET signal when Aurora channel is not ready
  reset_c <= RESET or not CHANNEL_UP;

    --______________________________ Transmit Data  __________________________________    
    --Transmit data when TX_DST_RDY_N is asserted and not in an IFG
    process(USER_CLK)
    begin
        if(USER_CLK'event and USER_CLK='1') then
            if(reset_c = '1') then
                data_lfsr_r     <=  X"ABCD" after DLY;  --random seed value
            elsif( (not TX_DST_RDY_N and not idle_r)='1' ) then
                data_lfsr_r <= (not(data_lfsr_r(3) xor data_lfsr_r(12) xor data_lfsr_r(14) xor data_lfsr_r(15)) & 
                                data_lfsr_r(0 to 14)) after DLY;
            end if;
        end if;
    end process;   


    --Connect TX_D to the DATA LFSR register
    TX_D    <= (data_lfsr_r & data_lfsr_r & data_lfsr_r & data_lfsr_r & data_lfsr_r & data_lfsr_r & data_lfsr_r & data_lfsr_r);
    
   
    
    --Tie REM to indicate all words valid
    TX_REM  <=  data_lfsr_r(0 to 3);
   
   

    --Use a counter to determine the size of the next frame to send
    process(USER_CLK)
    begin
        if(USER_CLK'event and USER_CLK = '1') then
            if(reset_c = '1') then
                frame_size_r    <=  (others => '0') after DLY;
            elsif( (single_cycle_frame_r or eof_r)='1' ) then
                frame_size_r    <=  frame_size_r + 1 after DLY;
            end if;
        end if;
    end process;
            
    --Use a second counter to determine how many bytes of the frame have already been sent
    process(USER_CLK)
    begin
        if(USER_CLK'event and USER_CLK = '1') then
            if(reset_c = '1') then
                bytes_sent_r    <=  (others => '0') after DLY;
            elsif( sof_r = '1' ) then
                bytes_sent_r    <=  "00000001" after DLY;
            elsif( (not TX_DST_RDY_N and not idle_r)='1' ) then
                bytes_sent_r    <=  bytes_sent_r + 1 after DLY;
            end if;
        end if;
    end process;

    
    --Use a freerunning counter to determine the IFG
    process(USER_CLK)
    begin
        if(USER_CLK'event and USER_CLK = '1') then
            if(reset_c = '1') then
                ifg_size_r  <=  (others => '0') after DLY;
            else
                ifg_size_r  <=  ifg_size_r + 1 after DLY;
            end if;
        end if;
    end process;
            
    
    --IFG is done when ifg_size register is 0
    ifg_done_c  <=   std_bool(ifg_size_r = "0000");
    
    
    --_____________________________ Framing State machine______________________________ 
    --Use a state machine to determine whether to start a frame, end a frame, send
    --data or send nothing
    
    --State registers for 1-hot state machine
    process(USER_CLK)
    begin
        if(USER_CLK'event and USER_CLK = '1') then
            if(reset_c = '1') then
                idle_r                  <=  '1' after DLY;
                single_cycle_frame_r    <=  '0' after DLY;
                sof_r                   <=  '0' after DLY;
                data_cycle_r            <=  '0' after DLY;
                eof_r                   <=  '0' after DLY;
            elsif( (not TX_DST_RDY_N)= '1' ) then
                idle_r                  <=  next_idle_c after DLY;
                single_cycle_frame_r    <=  next_single_cycle_frame_c after DLY;
                sof_r                   <=  next_sof_c after DLY;
                data_cycle_r            <=  next_data_cycle_c after DLY;
                eof_r                   <=  next_eof_c after DLY;
            end if;
        end if;
    end process;
        
        
    --Nextstate logic for 1-hot state machine
    next_idle_c                 <=   not ifg_done_c and
                                     (single_cycle_frame_r or eof_r or idle_r);
    
    next_single_cycle_frame_c   <=   (ifg_done_c and std_bool(frame_size_r = "00000000")) and
                                     (idle_r or single_cycle_frame_r or eof_r);
                                    
    next_sof_c                  <=   (ifg_done_c and std_bool(frame_size_r /= "00000000")) and
                                     (idle_r or single_cycle_frame_r or eof_r);
                                    
    next_data_cycle_c           <=   std_bool(frame_size_r /= bytes_sent_r) and
                                     (sof_r or data_cycle_r);
                                    
    next_eof_c                  <=   std_bool(frame_size_r = bytes_sent_r) and
                                     (sof_r or data_cycle_r);
    
    
    --Output logic for 1-hot state machine
    process(USER_CLK)
    begin
        if(USER_CLK'event and USER_CLK = '1') then
            if(reset_c = '1') then
                TX_SOF_N        <=  '1' after DLY;
                TX_EOF_N        <=  '1' after DLY;
                TX_SRC_RDY_N    <=  '1' after DLY;       
            elsif( (not TX_DST_RDY_N)='1' ) then
                TX_SOF_N        <=  not (sof_r or single_cycle_frame_r) after DLY;
                TX_EOF_N        <=  not (eof_r or single_cycle_frame_r) after DLY;
                TX_SRC_RDY_N    <=  idle_r after DLY;
            end if;
        end if;
    end process;

                                

end RTL;
