--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
--   Level Synchroniser with Asynchronous Reset
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- Maxeler Technologies Inc
-- Copyright 2009. All rights reserved.
-- Author: C.E.D.
-- Library: Maxeleros IP
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- Description:
--   Level synchroniser. Accepts a toggle (multi-cycle 
-- pulse) input on the source clock domain and 
-- generates a re-timed toggle in the output clock 
-- domain with the following latency: Tsrc_clk + 2*Tdst_clk.
-- Asynchronous reset will clear the output to 0.
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

library unisim;
use unisim.vcomponents.all;

entity level_synchroniser_reset_prim is
generic (
 RESET_VAL : natural := 0;
 WIDTH : natural := 1
);
port (
  arst  : in std_logic; -- asynchronous reset
  clk_src : in std_logic; -- source clock
  clk_dst : in std_logic; -- destination clock
  level_src : in std_logic_vector(WIDTH-1 downto 0); -- source domain level input
  level_dst : out std_logic_vector(WIDTH-1 downto 0) -- destination domain level output
); 
  attribute use_rloc : string;
  attribute use_rloc of level_synchroniser_reset_prim : entity is "TRUE";
end level_synchroniser_reset_prim;

architecture xilinx_virtex5 of level_synchroniser_reset_prim is

  signal level_dst_sync0 : std_logic_vector(WIDTH-1 downto 0);
  signal level_src_async : std_logic_vector(WIDTH-1 downto 0);

  attribute bel : string;
  attribute rloc : string;
  attribute area_group : string;

  attribute keep_hierarchy : string;
  attribute keep_hierarchy of xilinx_virtex5: architecture is "TRUE";

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
  begin

    g_clr : if RESET_VAL = 0 generate
      attribute area_group  of i_src  : label is "SYNC_TOGGLE";
      attribute area_group  of i_sync0  : label is "SYNC_TOGGLE";
      attribute area_group  of i_sync1  : label is "SYNC_TOGGLE";
  
      -- ... same rloc
      attribute rloc of i_src : label is "X0Y0";
      attribute rloc of i_sync0 : label is "X1Y0";
      attribute rloc of i_sync1 : label is "X1Y0";
      -- ... choose which bel to lock
      constant bel_str0 : string := "FF" & itoa(2*i);
      constant bel_str1 : string := "FF" & itoa(2*i+1);
      attribute bel of i_src : label is bel_str0;
      attribute bel of i_sync0 : label is bel_str0;
      attribute bel of i_sync1 : label is bel_str1;

    begin
      i_src : FDCPE
      generic map (
        INIT => '0') -- Initial value of register ('0' or '1')
      port map (
        Q => level_src_async(i), -- Data output
        C => clk_src, -- Clock input
        CE => '1', -- Clock enable input
        CLR => arst, -- Asynchronous clear input
        D => level_src(i), -- Data input
        PRE => '0' -- Asynchronous set input
      );
  
      i_sync0 : FDCPE
      generic map (
        INIT => '0') -- Initial value of register ('0' or '1')
      port map (
        Q => level_dst_sync0(i), -- Data output
        C => clk_dst, -- Clock input
        CE => '1', -- Clock enable input
        CLR => arst, -- Asynchronous clear input
        D => level_src_async(i), -- Data input
        PRE => '0' -- Asynchronous set input
      );
    
      i_sync1 : FDCPE
      generic map (
        INIT => '0') -- Initial value of register ('0' or '1')
      port map (
        Q => level_dst(i), -- Data output
        C => clk_dst, -- Clock input
        CE => '1', -- Clock enable input
        CLR => arst, -- Asynchronous clear input
        D => level_dst_sync0(i), -- Data input
        PRE => '0' -- Asynchronous set input
      );
    end generate;

    g_pre : if RESET_VAL = 1 generate
 --     attribute area_group  of i_src  : label is "SYNC_TOGGLE";
 --     attribute area_group  of i_sync0  : label is "SYNC_TOGGLE";
 --     attribute area_group  of i_sync1  : label is "SYNC_TOGGLE";
  
      -- ... same rloc
      attribute rloc of i_src : label is "X0Y0";
      attribute rloc of i_sync0 : label is "X1Y0";
      attribute rloc of i_sync1 : label is "X1Y0";
      -- ... choose which bel to lock
      constant bel_str0 : string := "FF" & itoa(2*i);
      constant bel_str1 : string := "FF" & itoa(2*i+1);
      attribute bel of i_src : label is bel_str0;
      attribute bel of i_sync0 : label is bel_str0;
      attribute bel of i_sync1 : label is bel_str1;

    begin
      i_src : FDCPE
      generic map (
        INIT => '1') -- Initial value of register ('0' or '1')
      port map (
        Q => level_src_async(i), -- Data output
        C => clk_src, -- Clock input
        CE => '1', -- Clock enable input
        CLR => '0', -- Asynchronous clear input
        D => level_src(i), -- Data input
        PRE => arst -- Asynchronous set input
      );
  
      i_sync0 : FDCPE
      generic map (
        INIT => '1') -- Initial value of register ('0' or '1')
      port map (
        Q => level_dst_sync0(i), -- Data output
        C => clk_dst, -- Clock input
        CE => '1', -- Clock enable input
        CLR => '0', -- Asynchronous clear input
        D => level_src_async(i), -- Data input
        PRE => arst -- Asynchronous set input
      );
    
      i_sync1 : FDCPE
      generic map (
        INIT => '1') -- Initial value of register ('0' or '1')
      port map (
        Q => level_dst(i), -- Data output
        C => clk_dst, -- Clock input
        CE => '1', -- Clock enable input
        CLR => '0', -- Asynchronous clear input
        D => level_dst_sync0(i), -- Data input
        PRE => arst -- Asynchronous set input
      );
    end generate;

  end generate;

end xilinx_virtex5;



library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
library unisim;
use unisim.vcomponents.all;
entity level_synchroniser_reset_prim_virtex6 is
generic (
 RESET_VAL : natural := 0;
 WIDTH : natural := 1
);
port (
  arst  : in std_logic; -- asynchronous reset
  clk_src : in std_logic; -- source clock
  clk_dst : in std_logic; -- destination clock
  level_src : in std_logic_vector(WIDTH-1 downto 0); -- source domain level input
  level_dst : out std_logic_vector(WIDTH-1 downto 0) -- destination domain level output
); 
  attribute use_rloc : string;
  attribute use_rloc of level_synchroniser_reset_prim_virtex6 : entity is "TRUE";
end level_synchroniser_reset_prim_virtex6;

architecture xilinx_virtex6 of level_synchroniser_reset_prim_virtex6 is

  signal level_dst_sync0 : std_logic_vector(WIDTH-1 downto 0);
  signal level_src_async : std_logic_vector(WIDTH-1 downto 0);

  attribute bel : string;
  attribute rloc : string;
  attribute area_group : string;

  attribute keep_hierarchy : string;
  attribute keep_hierarchy of xilinx_virtex6: architecture is "TRUE";

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
  begin

    g_clr : if RESET_VAL = 0 generate
      attribute area_group  of i_src  : label is "SYNC_TOGGLE";
      attribute area_group  of i_sync0  : label is "SYNC_TOGGLE";
      attribute area_group  of i_sync1  : label is "SYNC_TOGGLE";
  
      -- ... same rloc
      attribute rloc of i_src : label is "X0Y0";
      attribute rloc of i_sync0 : label is "X1Y0";
      attribute rloc of i_sync1 : label is "X1Y0";
      -- ... choose which bel to lock
      constant bel_str0 : string := itoa(i) & "FF";
      constant bel_str1 : string := itoa(i) & "5FF";
      attribute bel of i_src : label is bel_str0;   -- xFF flip-flop
      attribute bel of i_sync0 : label is bel_str1; -- x5FF flip-flop
      attribute bel of i_sync1 : label is bel_str0; -- xFF flip-flop

    begin
      i_src : FDCPE
      generic map (
        INIT => '0') -- Initial value of register ('0' or '1')
      port map (
        Q => level_src_async(i), -- Data output
        C => clk_src, -- Clock input
        CE => '1', -- Clock enable input
        CLR => arst, -- Asynchronous clear input
        D => level_src(i), -- Data input
        PRE => '0' -- Asynchronous set input
      );
  
      i_sync0 : FDCPE
      generic map (
        INIT => '0') -- Initial value of register ('0' or '1')
      port map (
        Q => level_dst_sync0(i), -- Data output
        C => clk_dst, -- Clock input
        CE => '1', -- Clock enable input
        CLR => arst, -- Asynchronous clear input
        D => level_src_async(i), -- Data input
        PRE => '0' -- Asynchronous set input
      );
    
      i_sync1 : FDCPE
      generic map (
        INIT => '0') -- Initial value of register ('0' or '1')
      port map (
        Q => level_dst(i), -- Data output
        C => clk_dst, -- Clock input
        CE => '1', -- Clock enable input
        CLR => arst, -- Asynchronous clear input
        D => level_dst_sync0(i), -- Data input
        PRE => '0' -- Asynchronous set input
      );
    end generate;

    g_pre : if RESET_VAL = 1 generate
 --     attribute area_group  of i_src  : label is "SYNC_TOGGLE";
 --     attribute area_group  of i_sync0  : label is "SYNC_TOGGLE";
 --     attribute area_group  of i_sync1  : label is "SYNC_TOGGLE";
  
      -- ... same rloc
      attribute rloc of i_src : label is "X0Y0";
      attribute rloc of i_sync0 : label is "X1Y0";
      attribute rloc of i_sync1 : label is "X1Y0";
      -- ... choose which bel to lock
      constant bel_str0 : string := itoa(i) & "FF";
      constant bel_str1 : string := itoa(i) & "5FF";
      attribute bel of i_src : label is bel_str0;   -- xFF flip-flop
      attribute bel of i_sync0 : label is bel_str1; -- x5FF flip-flop
      attribute bel of i_sync1 : label is bel_str0; -- xFF flip-flop

    begin
      i_src : FDCPE
      generic map (
        INIT => '1') -- Initial value of register ('0' or '1')
      port map (
        Q => level_src_async(i), -- Data output
        C => clk_src, -- Clock input
        CE => '1', -- Clock enable input
        CLR => '0', -- Asynchronous clear input
        D => level_src(i), -- Data input
        PRE => arst -- Asynchronous set input
      );
  
      i_sync0 : FDCPE
      generic map (
        INIT => '1') -- Initial value of register ('0' or '1')
      port map (
        Q => level_dst_sync0(i), -- Data output
        C => clk_dst, -- Clock input
        CE => '1', -- Clock enable input
        CLR => '0', -- Asynchronous clear input
        D => level_src_async(i), -- Data input
        PRE => arst -- Asynchronous set input
      );
    
      i_sync1 : FDCPE
      generic map (
        INIT => '1') -- Initial value of register ('0' or '1')
      port map (
        Q => level_dst(i), -- Data output
        C => clk_dst, -- Clock input
        CE => '1', -- Clock enable input
        CLR => '0', -- Asynchronous clear input
        D => level_dst_sync0(i), -- Data input
        PRE => arst -- Asynchronous set input
      );
    end generate;

  end generate;

end xilinx_virtex6;









--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
--   Top level with generic configurable width
--~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;

entity level_synchroniser_reset is
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
end level_synchroniser_reset;

architecture rtl of level_synchroniser_reset is

  component level_synchroniser_reset_prim
  generic (
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
  end component level_synchroniser_reset_prim;

  component level_synchroniser_reset_prim_virtex6
  generic (
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
  end component level_synchroniser_reset_prim_virtex6;

  function ceil(x : natural) return natural is
  begin
    return x/2 + (x rem 2);
  end function ceil;

  function last(x, y, width : natural) return natural is
  begin
    if x = y then
      if (width mod 2) = 1 then return 1;
      else return 0;
      end if;
    else return 0;
    end if;
  end function last;

begin

  g_virtex6 : if IS_VIRTEX6=true generate
  begin
    g_width4: for i in 0 to (WIDTH / 4) - 1 generate
      sync_level_src : level_synchroniser_reset_prim_virtex6
          generic map (
            RESET_VAL => RESET_VAL,
            WIDTH => 4
          )
          port map (
            arst => arst,
            clk_src => clk_src,
            clk_dst => clk_dst,
            level_src => level_src(4*i+3 downto 4*i),
            level_dst => level_dst(4*i+3 downto 4*i)
          );
    end generate;

    g_width_rem : if (WIDTH mod 4) /= 0 generate
      sync_level_src : level_synchroniser_reset_prim_virtex6
          generic map (
            RESET_VAL => RESET_VAL,
            WIDTH => (WIDTH mod 4)
          )
          port map (
            arst => arst,
            clk_src => clk_src,
            clk_dst => clk_dst,
            level_src => level_src(4*(WIDTH/4)+(WIDTH mod 4)-1 downto 4*(WIDTH/4)),
            level_dst => level_dst(4*(WIDTH/4)+(WIDTH mod 4)-1 downto 4*(WIDTH/4))
          );
    end generate;
  end generate;

  g_virtex5 : if IS_VIRTEX6=false generate
    g_wide : for i in 0 to ceil(WIDTH)-1 generate
    begin
      g_width2 : if last(i, ceil(WIDTH)-1, WIDTH) = 0 generate
        sync_level_src : level_synchroniser_reset_prim
          generic map (
            RESET_VAL => RESET_VAL,
            WIDTH => 2
          )
          port map (
            arst => arst,
            clk_src => clk_src,
            clk_dst => clk_dst,
            level_src => level_src(2*i+1 downto 2*i),
            level_dst => level_dst(2*i+1 downto 2*i)
          );
      end generate;

      g_width1 : if last(i, ceil(WIDTH)-1, WIDTH) = 1 generate
        sync_level_src : level_synchroniser_reset_prim
          generic map (
            RESET_VAL => RESET_VAL,
            WIDTH => 1
          )
          port map (
            arst => arst,
            clk_src => clk_src,
            clk_dst => clk_dst,
            level_src(0) => level_src(2*i),
            level_dst(0) => level_dst(2*i)
          );
      end generate;
    end generate;
  end generate;

end rtl;

