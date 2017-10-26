--------------------------------------------------------------
-- Assert a reset for a number of cycles after an asynchronous reset
--------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity start_of_day_reset is
  generic (
  LOG2_RESET_CYCLES : integer := 5  -- MUST be >= 4
  );
  port (
  rst_n             : in std_logic;
  reset_clk         : in std_logic;
  reset_out         : out std_logic
  ); 
end start_of_day_reset;

architecture rtl of start_of_day_reset is
    
   signal reset_count       : std_logic_vector(LOG2_RESET_CYCLES-1 downto 0) := (others => '0');

begin
   
GENRESET : 
   process(rst_n, reset_clk)
   begin
      if (rst_n='0') then
         reset_count <= (others => '0');
         reset_out   <= '1';
      elsif rising_edge(reset_clk) then  
         reset_out   <= '1';

         if reset_count(LOG2_RESET_CYCLES-1) = '0' then
            reset_count <= std_logic_vector(unsigned(reset_count) + 1);
         else
            reset_out <= '0';
         end if;
      end if;
   end process;
   
end rtl;