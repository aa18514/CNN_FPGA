library ieee;
use ieee.std_logic_1164.all;

package cross_clock_pkg is

component toggle_to_strobe
generic (
  WIDTH : natural := 1
);
port (
  clk_src : in std_logic;
  clk_dst : in std_logic;
  toggle : in std_logic_vector(WIDTH-1 downto 0);
  strobe : out std_logic_vector(WIDTH-1 downto 0)
); 
end component toggle_to_strobe;

component strobe_to_strobe
generic (
--  AREA_APPEND : string := "";
  WIDTH : natural := 1
);
port (
  clk_src : in std_logic;
  clk_dst : in std_logic;
  strobe_src : in std_logic_vector(WIDTH-1 downto 0);
  strobe_dst : out std_logic_vector(WIDTH-1 downto 0)
); 
end component strobe_to_strobe;

component toggle_to_toggle
generic (
--  AREA_APPEND : string := "";
  WIDTH : natural := 1
);
port (
  clk_src : in std_logic;
  clk_dst : in std_logic;
  strobe_src : in std_logic_vector(WIDTH-1 downto 0);
  strobe_dst : out std_logic_vector(WIDTH-1 downto 0)
); 
end component toggle_to_toggle;

component level_synchroniser
generic (
  IS_VIRTEX6  : boolean := false;
  WIDTH : natural := 1
);
port (
  clk_src : in std_logic;
  clk_dst : in std_logic;
  level_src : in std_logic_vector(WIDTH-1 downto 0);
  level_dst : out std_logic_vector(WIDTH-1 downto 0)
); 
end component level_synchroniser;

component level_synchroniser_reset
generic (
  IS_VIRTEX6  : boolean := false;
  RESET_VAL : natural := 0;
  WIDTH : natural := 1
);
port (
  arst : in std_logic;
  clk_src : in std_logic;
  clk_dst : in std_logic;
  level_src : in std_logic_vector(WIDTH-1 downto 0);
  level_dst : out std_logic_vector(WIDTH-1 downto 0)
); 
end component level_synchroniser_reset;


type TStr10 is array (0 to 9) of string(1 to 1);
 
function itoa( x : integer ) return string;

end package;

package body cross_clock_pkg is

--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- Integer to Char function & typing. Used to
-- modify strings for HU_SET defines.
-- Whenever instantiating multiple synchroniser
-- instances in the same VHDL level, set the
-- generic HU_NUM to a unique number for each
-- component of the same synchroniser type to avoid
-- build errors during MAP.
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
constant Str10: TStr10 :=
    ("0","1","2","3","4","5","6","7","8","9");

function itoa( x : integer ) return string is
  variable n: integer := x; -- needed by some compilers
begin
  if n < 0 then return "-" & itoa(-n);
  elsif n < 10 then return Str10(n);
  else return itoa(n/10) & Str10(n rem 10);
  end if;
end function itoa;

end package body;
