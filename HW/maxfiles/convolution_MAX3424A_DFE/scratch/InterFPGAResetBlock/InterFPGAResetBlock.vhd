library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;


entity InterFPGAResetBlock is
	generic (
		LOG2_NUM_CYCLES : integer := 2
	);
	port (
		reset : in std_logic; -- global async reset
		link_clk : in std_logic;
		pll_not_locked : in std_logic;
		sync_reset : out std_logic; -- aurora syncronous reset
		gt_reset : out std_logic -- aurora asynchronous gt reset
	);
end entity;

architecture rtl of InterFPGAResetBlock is
	signal locked_count : std_logic_vector(LOG2_NUM_CYCLES downto 0);
	signal async_rst : std_logic;
begin
	gt_reset <= reset;

	async_rst <= pll_not_locked or reset;

	process(async_rst, link_clk)
	begin
		if (async_rst = '1') then
			sync_reset <= '1';
			locked_count <= (others => '0');
		elsif rising_edge(link_clk) then
			if (locked_count(LOG2_NUM_CYCLES) = '1') then
				sync_reset <= '0';			
			else
				sync_reset <= '1';
				locked_count <= std_logic_vector(unsigned(locked_count) + 1);
			end if;
		end if;
	end process;
end rtl;
