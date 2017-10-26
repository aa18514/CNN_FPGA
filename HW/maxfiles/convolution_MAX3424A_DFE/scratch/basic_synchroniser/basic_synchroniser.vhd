--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
--   Basic Synchroniser
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- Maxeler Technologies Inc
-- Copyright 2009. All rights reserved.
-- Author: C.E.D.
-- Library: Maxeleros IP
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- Description:
--   Level synchroniser without source clock register stage. 
-- Accepts a toggle (multi-cycle pulse) input on the source clock 
-- domain and generates a re-timed toggle in the output clock 
-- domain with the following latency: Tsrc_clk + 2*Tdst_clk.
--
-- Limitations: 
--   Input toggles should be a minimum of 2*Tdst_clk periods
-- apart to ensure all toggles are detected on the output.
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
--   Single primitive implemented at technology level
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;

entity basic_synchroniser_prim is
generic (
 WIDTH : natural := 1
);
port (
  clk_dst : in std_logic;
  level_src : in std_logic_vector(WIDTH-1 downto 0);
  level_dst : out std_logic_vector(WIDTH-1 downto 0)
); 
  attribute use_rloc : string;
  attribute use_rloc of basic_synchroniser_prim : entity is "TRUE";
end basic_synchroniser_prim;

architecture xilinx_virtex5 of basic_synchroniser_prim is

  component dff_ce_asyncsr
  generic (
    INIT : bit := '0'
  );
  port (
	D   : in  std_logic;
	C   : in  std_logic;
	CLR : in  std_logic;
	PRE : in  std_logic;
	CE  : in  std_logic;
	Q   : out std_logic
  );
  end component dff_ce_asyncsr;

  signal level_dst_sync0 : std_logic_vector(WIDTH-1 downto 0);

  attribute bel : string;
  attribute rloc : string;
  attribute area_group : string;

  type TStrBelFF is array (0 to 3) of string(1 to 1);
  constant StrBelFF: TStrBelFF :=
    ("A","B","C","D");

  function itoa( x : integer ) return string is
    variable n: integer := x; 
  begin
    return StrBelFF(n rem 4);
  end function itoa;

begin

  --~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  -- For vectors we pack each slice with up to
  -- two vector elements.
  --~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  g_slice_packing : for i in 0 to WIDTH-1 generate
    --attribute area_group  of i_sync0  : label is "SYNC_TOGGLE";
    --attribute area_group  of i_sync1  : label is "SYNC_TOGGLE";

    -- ... same rloc
    attribute rloc of i_sync0 : label is "X0Y0";
    attribute rloc of i_sync1 : label is "X0Y0";
    -- ... choose which bel to lock
    constant bel_str0 : string := "FF" & itoa(2*i);
    constant bel_str1 : string := "FF" & itoa(2*i+1);
    attribute bel of i_sync0 : label is bel_str0;
    attribute bel of i_sync1 : label is bel_str1;
  begin

    i_sync0 : dff_ce_asyncsr
    generic map (
      INIT => '0') -- Initial value of register ('0' or '1')
    port map (
      Q => level_dst_sync0(i), -- Data output
      C => clk_dst, -- Clock input
      CE => '1', -- Clock enable input
      CLR => '0', -- Asynchronous clear input
      D => level_src(i), -- Data input
      PRE => '0' -- Asynchronous set input
    );
  
    i_sync1 : dff_ce_asyncsr
    generic map (
      INIT => '0') -- Initial value of register ('0' or '1')
    port map (
      Q => level_dst(i), -- Data output
      C => clk_dst, -- Clock input
      CE => '1', -- Clock enable input
      CLR => '0', -- Asynchronous clear input
      D => level_dst_sync0(i), -- Data input
      PRE => '0' -- Asynchronous set input
    );

  end generate;

end xilinx_virtex5;

--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
--   Top level with generic configurable width
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;

entity basic_synchroniser is
generic (
  WIDTH : natural := 1
);
port (
  clk_dst : in std_logic;
  level_src : in std_logic_vector(WIDTH-1 downto 0);
  level_dst : out std_logic_vector(WIDTH-1 downto 0)
); 
end basic_synchroniser;

architecture rtl of basic_synchroniser is

  component basic_synchroniser_prim
  generic (
    WIDTH : natural := 1
  );
  port (
    clk_dst : in std_logic;
    level_src : in std_logic_vector(WIDTH-1 downto 0);
    level_dst : out std_logic_vector(WIDTH-1 downto 0)
  );
  end component basic_synchroniser_prim;

  function ceil(x : natural) return natural is
  begin
    return x/2 + (x rem 2);
  end function ceil;

  function last(x, y, width : natural) return natural is
  begin
    if x = y then
      if (width mod 2) = 1 then return 1;
      elsif x = 0 then return 1;
      else return 0;
      end if;
    else return 0;
    end if;
  end function last;

begin

  g_wide : for i in 0 to ceil(WIDTH)-1 generate
  begin
    g_width2 : if last(i, ceil(WIDTH)-1, WIDTH) = 0 generate
      sync_level_src : basic_synchroniser_prim
        generic map (
          WIDTH => 2
        )
        port map (
          clk_dst => clk_dst,
          level_src => level_src(2*i+1 downto 2*i),
          level_dst => level_dst(2*i+1 downto 2*i)
        );
    end generate;

    g_width1 : if last(i, ceil(WIDTH)-1, WIDTH) = 1 generate
      sync_level_src : basic_synchroniser_prim
        generic map (
          WIDTH => 1
        )
        port map (
          clk_dst => clk_dst,
          level_src(0) => level_src(2*i),
          level_dst(0) => level_dst(2*i)
        );
    end generate;
  end generate;

end rtl;

