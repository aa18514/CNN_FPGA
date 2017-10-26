library ieee;
use ieee.std_logic_1164.all;
--use ieee.std_logic_arith.all;
--use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;

entity perf_monitor is
  generic (
    MODULE_VERSION     : integer := 0;  -- Module version (readable at address 0)
    -- Max value in the counter: 67.108.864, for clock frequency of 200MHz, refreshed every 335ms
    SHORT_COUNTER_MAX  : integer := 127;
    SHORT_COUNTER_BITS : integer := 7;
    LONG_COUNTER_MAX   : integer := 511;
    LONG_COUNTER_BITS  : integer := 9
    );
  port (
    clk : in std_logic;
    rst : in std_logic;

    -- Activity signal, logical OR of the individual active output of each individual kernel
    in_active : in std_logic;

    -- ECC functions
    in_ecc_flags     : in std_logic_vector(1 downto 0);
    in_ecc_parity    : in std_logic_vector(31 downto 0);
    in_ecc_corrected : in std_logic_vector(31 downto 0);

    Mem_Data_time1 : in std_logic_vector(31 downto 0);
    Mem_Data_time2 : in std_logic_vector(31 downto 0);
    Mem_Idle_time1 : in std_logic_vector(31 downto 0);
    Mem_Idle_time2 : in std_logic_vector(31 downto 0);
    perf_update    : in std_logic;

    -- Mapped memory port (read-only so data_in and wr_en will be ignored)
    mem_data_in  : in  std_logic_vector(35 downto 0);
    mem_data_out : out std_logic_vector(35 downto 0);
    mem_addr     : in  std_logic_vector(13 downto 0);
    mem_addr_en  : in  std_logic;
    mem_wr_en    : in  std_logic;
    mem_rd_en    : in  std_logic;
    mem_ack      : out std_logic;

    -- Additional status bits
    in_ddr_phy_init_done : in std_logic;
    in_qdr_phy_init_done : in std_logic;
    in_ifpga0_up         : in std_logic;
    in_ifpga1_up         : in std_logic;
    in_ifpga2_up         : in std_logic;
    in_ifpga3_up         : in std_logic;
    in_ifpga4_up         : in std_logic
    );
end perf_monitor;

architecture rtl of perf_monitor is
  -- this port is not used and is optimised away by XST but we need to
  -- keep it to avoid NGDBuild failing (there are timing constraints on
  -- the mapped memory bus)
  attribute keep                : string;
  attribute keep of mem_data_in : signal is "true";

  signal short_count           : unsigned(SHORT_COUNTER_BITS-1 downto 0)         := (others => '0');
  signal short_activecount     : unsigned(SHORT_COUNTER_BITS-1 downto 0)         := (others => '0');
  signal short_activecount_reg : std_logic_vector(SHORT_COUNTER_BITS-1 downto 0) := (others => '0');

  signal long_count           : unsigned(LONG_COUNTER_BITS-1 downto 0)         := (others => '0');
  signal long_active_count    : unsigned(LONG_COUNTER_BITS-1 downto 0)         := (others => '0');
  signal long_activecount_reg : std_logic_vector(LONG_COUNTER_BITS-1 downto 0) := (others => '0');

  signal addr_reg   : std_logic_vector(13 downto 0);
  signal read_mem   : std_logic;
  signal addr_ready : std_logic := '0';

  signal in_ecc_parity_r        : std_logic_vector(31 downto 0);
  signal in_ecc_corrected_r     : std_logic_vector(31 downto 0);
  signal Mem_Data_time1_r       : std_logic_vector(31 downto 0);
  signal Mem_Data_time2_r       : std_logic_vector(31 downto 0);
  signal Mem_Idle_time1_r       : std_logic_vector(31 downto 0);
  signal Mem_Idle_time2_r       : std_logic_vector(31 downto 0);
  signal in_ddr_phy_init_done_r : std_logic;
  signal in_qdr_phy_init_done_r : std_logic;

  -- Extra layer of registering
  signal mem_data_addr_00 : std_logic_vector(35 downto 0) := (others => '0');
  signal mem_data_addr_01 : std_logic_vector(35 downto 0) := (others => '0');
  signal mem_data_addr_02 : std_logic_vector(35 downto 0) := (others => '0');
  signal mem_data_addr_03 : std_logic_vector(35 downto 0) := (others => '0');

  signal mem_data_addr_04 : std_logic_vector(35 downto 0) := (others => '0');
  signal mem_data_addr_05 : std_logic_vector(35 downto 0) := (others => '0');
  signal mem_data_addr_06 : std_logic_vector(35 downto 0) := (others => '0');
  signal mem_data_addr_07 : std_logic_vector(35 downto 0) := (others => '0');

  signal mem_data_addr_08 : std_logic_vector(35 downto 0) := (others => '0');
  signal mem_data_addr_09 : std_logic_vector(35 downto 0) := (others => '0');
  signal mem_data_addr_10 : std_logic_vector(35 downto 0) := (others => '0');
  signal mem_data_addr_11 : std_logic_vector(35 downto 0) := (others => '0');

  signal mem_data_addr_12 : std_logic_vector(35 downto 0) := (others => '0');
  signal mem_data_addr_XX : std_logic_vector(35 downto 0) := (others => '0');
  
  attribute preserve : boolean;
  attribute preserve of mem_data_addr_00: signal is true;
  attribute preserve of mem_data_addr_01: signal is true;
  attribute preserve of mem_data_addr_02: signal is true;
  attribute preserve of mem_data_addr_03: signal is true;
  attribute preserve of mem_data_addr_04: signal is true;
  attribute preserve of mem_data_addr_05: signal is true;
  attribute preserve of mem_data_addr_06: signal is true;
  attribute preserve of mem_data_addr_07: signal is true;
  attribute preserve of mem_data_addr_08: signal is true;
  attribute preserve of mem_data_addr_09: signal is true;
  attribute preserve of mem_data_addr_10: signal is true;
  attribute preserve of mem_data_addr_11: signal is true;
  attribute preserve of mem_data_addr_12: signal is true;
  attribute preserve of mem_data_addr_XX: signal is true;
  
  
  
begin
  
  reg_in_mem_stats :
  process (clk)
  begin
    if rising_edge(clk) then
      if (perf_update = '1') then
        in_ecc_parity_r    <= in_ecc_parity;
        in_ecc_corrected_r <= in_ecc_corrected;
        Mem_Data_time1_r   <= Mem_Data_time1;
        Mem_Data_time2_r   <= Mem_Data_time2;
        Mem_Idle_time1_r   <= Mem_Idle_time1;
        Mem_Idle_time2_r   <= Mem_Idle_time2;
      end if;
      in_ddr_phy_init_done_r <= in_ddr_phy_init_done;
      in_qdr_phy_init_done_r <= in_qdr_phy_init_done;

      -- Registering
      mem_data_addr_00 <= std_logic_vector(to_unsigned(MODULE_VERSION, mem_data_out'length));
      mem_data_addr_01 <= std_logic_vector(RESIZE(to_unsigned(SHORT_COUNTER_MAX, SHORT_COUNTER_BITS), mem_data_out'length));
      mem_data_addr_02 <= (35 downto SHORT_COUNTER_BITS => '0') & short_activecount_reg;
      mem_data_addr_03 <= (35 downto 2                  => '0') & in_ecc_flags(1 downto 0);
      mem_data_addr_04 <= "0000" & in_ecc_parity_r;
      mem_data_addr_05 <= "0000" & in_ecc_corrected_r;
      mem_data_addr_06 <= (35 downto 7                  => '1') & in_ifpga4_up & in_qdr_phy_init_done_r & in_ifpga3_up & in_ifpga2_up & in_ifpga1_up & in_ifpga0_up & in_ddr_phy_init_done_r;
      mem_data_addr_07 <= std_logic_vector(RESIZE(to_unsigned(LONG_COUNTER_MAX, LONG_COUNTER_BITS), mem_data_out'length));
      mem_data_addr_08 <= (35 downto LONG_COUNTER_BITS  => '0') & long_activecount_reg;
      mem_data_addr_09 <= "0000" & Mem_Data_time1_r;
      mem_data_addr_10 <= "0000" & Mem_Idle_time1_r;
      mem_data_addr_11 <= "0000" & Mem_Data_time2_r;
      mem_data_addr_12 <= "0000" & Mem_Idle_time2_r;
      mem_data_addr_XX <= (others => '0');
      
    end if;
  end process;


  read_mem <= mem_rd_en and mem_addr_en;

  short_counter :
  process (clk)
  begin
    if rising_edge(clk) then
      if rst = '1' then
        short_count       <= (others => '0');
        short_activecount <= (others => '0');
      else
        short_count <= short_count + 1;
        if short_count = to_unsigned(SHORT_COUNTER_MAX, SHORT_COUNTER_BITS) then
          short_activecount     <= to_unsigned(0, SHORT_COUNTER_BITS);
          short_count           <= to_unsigned(0, SHORT_COUNTER_BITS);
          short_activecount_reg <= std_logic_vector(short_activecount);
        elsif in_active = '1' then
          short_activecount <= short_activecount + 1;
        end if;
      end if;
    end if;
  end process;

  long_counter :
  process (clk)
  begin
    if rising_edge(clk) then
      if rst = '1' then
        long_count        <= (others => '0');
        long_active_count <= (others => '0');
      else
        long_count <= long_count + 1;
        if long_count = to_unsigned(LONG_COUNTER_MAX, LONG_COUNTER_BITS) then
          long_active_count    <= to_unsigned(0, LONG_COUNTER_BITS);
          long_count           <= to_unsigned(0, LONG_COUNTER_BITS);
          long_activecount_reg <= std_logic_vector(long_active_count);
        elsif in_active = '1' then
          long_active_count <= long_active_count + 1;
        end if;
      end if;
    end if;
  end process;

  -- Read-only memory emulation, latch address (two lsb only since we implement only 3 (4) addresses)
  process (clk)
  begin
    if rising_edge(clk) then
      if addr_ready = '0' then
        if read_mem = '1' then
          addr_reg   <= mem_addr;
          addr_ready <= '1';
        end if;
      else
        if (read_mem = '0') then
          -- Bring addr_ready back to 0 at the next cycle
          addr_ready <= '0';
        end if;
      end if;
    end if;
  end process;

  process (clk)
  begin
    if rising_edge(clk) then
      -- data output mux
      if addr_ready = '1' then
        case addr_reg is
          when "00000000000000" => mem_data_out <= mem_data_addr_00;  -- Present the module version
                                     -- Short counter, max value possible
          when "00000000000001" => mem_data_out <= mem_data_addr_01;
                                    -- Short counter, last activity value latched
          when "00000000000010" => mem_data_out <= mem_data_addr_02;
                                     -- ECC flags (1 downto 0: ECC enabled, Parity Enabled)
          when "00000000000011" => mem_data_out <= mem_data_addr_03;
                                     -- if ECC is enabled, non-corrected errors count, otherwise, number of parity errors
          when "00000000000100" => mem_data_out <= mem_data_addr_04;
                                    -- if ECC is enabled, corrected errors count, otherwise not valid
          when "00000000000101" => mem_data_out <= mem_data_addr_05;
                                    -- Status signals useful for the arbiter
          when "00000000000110" => mem_data_out <= mem_data_addr_06;
                                    -- Long counter, max value possible
          when "00000000000111" => mem_data_out <= mem_data_addr_07;
                                    -- Long counter, last activity value latched
          when "00000000001000" => mem_data_out <= mem_data_addr_08;

                                    -- memory stats
          when "00000000001001" => mem_data_out <= mem_data_addr_09;
          when "00000000001010" => mem_data_out <= mem_data_addr_10;
          when "00000000001011" => mem_data_out <= mem_data_addr_11;
          when "00000000001100" => mem_data_out <= mem_data_addr_12;

          when others => mem_data_out <= mem_data_addr_XX;
        end case;
        -- indicate data is ready to the requestor
        mem_ack <= '1';
      else
        mem_data_out <= (others => '0');
        mem_ack      <= '0';
      end if;
    end if;
  end process;
  
  
end rtl;
