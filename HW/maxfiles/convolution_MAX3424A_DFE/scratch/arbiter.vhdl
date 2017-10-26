library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;

entity arbiter is
	port (
		clk_pcie: in std_logic;
		rst_pcie_n: in std_logic;
		requests: in std_logic_vector(15 downto 0);
		rst_sync: in std_logic;
		req_done: in std_logic;
		selects: out std_logic_vector(15 downto 0);
		ready: out std_logic
	);
end arbiter;

architecture MaxDC of arbiter is
	-- Utility functions
	
	function vec_to_bit(v: in std_logic_vector) return std_logic is
	begin
		assert v'length = 1
		report "vec_to_bit: vector must be single bit!"
		severity FAILURE;
		return v(v'left);
	end;
	function bit_to_vec(b: in std_logic) return std_logic_vector is
		variable v: std_logic_vector(0 downto 0);
	begin
		v(0) := b;
		return v;
	end;
	function bool_to_vec(b: in boolean) return std_logic_vector is
		variable v: std_logic_vector(0 downto 0);
	begin
		if b = true then
			v(0) := '1';
		else
			v(0) := '0';
		end if;
		return v;
	end;
	function sanitise_ascendingvec(i : std_logic_vector) return std_logic_vector is
		variable v: std_logic_vector((i'length - 1) downto 0);
	begin
		for j in 0 to (i'length - 1) loop
			v(j) := i(i'high - j);
		end loop;
		return v;
	end;
	function slice(i : std_logic_vector; base : integer; size : integer) return std_logic_vector is
		variable v: std_logic_vector(size - 1 downto 0);
		variable z: std_logic_vector(i'length - 1 downto 0);
	begin
		assert i'length >= (base + size)
		report "vslice: slice out of range."
		severity FAILURE;
		if i'ascending = true then
			z := sanitise_ascendingvec(i);
		else
			z := i;
		end if;
		v(size - 1 downto 0) := z((size + base - 1) downto base);
		return v;
	end;
	function slv_to_slv(v : std_logic_vector) return std_logic_vector is
	begin
		return v;
	end;
	function slv_to_signed(ARG: STD_LOGIC_VECTOR; SIZE: INTEGER) return SIGNED is
		variable result: SIGNED (SIZE-1 downto 0);
	begin
		for i in 0 to SIZE-1 loop
			result(i) := ARG(i);
		end loop;
		return result;
	end;
	
	-- Component declarations
	
	attribute box_type : string;
	component FastRequestArbiter_req16 is
		port (
			clk_pcie: in std_logic;
			rst_pcie_n: in std_logic;
			requests: in std_logic_vector(15 downto 0);
			rst_sync: in std_logic;
			req_done: in std_logic;
			selects: out std_logic_vector(15 downto 0);
			ready: out std_logic
		);
	end component;
	
	-- Signal declarations
	
	signal wrapped_fastrequestarbiter_req16_selects : std_logic_vector(15 downto 0);
	signal wrapped_fastrequestarbiter_req16_ready : std_logic_vector(0 downto 0);
	
	-- Attribute type declarations
	
	
	-- Attribute declarations
	
begin
	
	-- Assignments
	
	selects <= wrapped_fastrequestarbiter_req16_selects;
	ready <= vec_to_bit(wrapped_fastrequestarbiter_req16_ready);
	
	-- Registers
	
	
	-- Entity instances
	
	wrapped_FastRequestArbiter_req16 : FastRequestArbiter_req16
		port map (
			selects => wrapped_fastrequestarbiter_req16_selects, -- 16 bits (out)
			ready => wrapped_fastrequestarbiter_req16_ready(0), -- 1 bits (out)
			clk_pcie => clk_pcie, -- 1 bits (in)
			rst_pcie_n => rst_pcie_n, -- 1 bits (in)
			requests => requests, -- 16 bits (in)
			rst_sync => rst_sync, -- 1 bits (in)
			req_done => req_done -- 1 bits (in)
		);
end MaxDC;
