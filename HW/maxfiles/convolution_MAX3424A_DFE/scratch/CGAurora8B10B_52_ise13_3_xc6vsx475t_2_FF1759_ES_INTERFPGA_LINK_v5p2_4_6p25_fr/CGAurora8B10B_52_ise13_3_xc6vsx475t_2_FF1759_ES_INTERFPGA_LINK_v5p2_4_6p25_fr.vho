
-- VHDL Instantiation Created from source file CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr.vhd -- 21:09:12 10/26/2017
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

------------- Begin Cut here for COMPONENT Declaration ------ COMP_TAG
	COMPONENT CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr
	PORT(
		TX_D : IN std_logic_vector(0 to 127);
		TX_REM : IN std_logic_vector(0 to 3);
		TX_SRC_RDY_N : IN std_logic;
		TX_SOF_N : IN std_logic;
		TX_EOF_N : IN std_logic;
		RXP : IN std_logic_vector(0 to 3);
		RXN : IN std_logic_vector(0 to 3);
		GTXQ3 : IN std_logic;
		WARN_CC : IN std_logic;
		DO_CC : IN std_logic;
		USER_CLK : IN std_logic;
		SYNC_CLK : IN std_logic;
		RESET : IN std_logic;
		POWER_DOWN : IN std_logic;
		LOOPBACK : IN std_logic_vector(2 downto 0);
		GT_RESET : IN std_logic;          
		TX_DST_RDY_N : OUT std_logic;
		RX_D : OUT std_logic_vector(0 to 127);
		RX_REM : OUT std_logic_vector(0 to 3);
		RX_SRC_RDY_N : OUT std_logic;
		RX_SOF_N : OUT std_logic;
		RX_EOF_N : OUT std_logic;
		TXP : OUT std_logic_vector(0 to 3);
		TXN : OUT std_logic_vector(0 to 3);
		HARD_ERR : OUT std_logic;
		SOFT_ERR : OUT std_logic;
		FRAME_ERR : OUT std_logic;
		CHANNEL_UP : OUT std_logic;
		LANE_UP : OUT std_logic_vector(0 to 3);
		TX_OUT_CLK : OUT std_logic;
		TX_LOCK : OUT std_logic
		);
	END COMPONENT;

-- COMP_TAG_END ------ End COMPONENT Declaration ------------
-- The following code must appear in the VHDL architecture
-- body. Substitute your own instance name and net names.
------------- Begin Cut here for INSTANTIATION Template ----- INST_TAG
	Inst_CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr: CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr PORT MAP(
		TX_D => ,
		TX_REM => ,
		TX_SRC_RDY_N => ,
		TX_SOF_N => ,
		TX_EOF_N => ,
		TX_DST_RDY_N => ,
		RX_D => ,
		RX_REM => ,
		RX_SRC_RDY_N => ,
		RX_SOF_N => ,
		RX_EOF_N => ,
		RXP => ,
		RXN => ,
		TXP => ,
		TXN => ,
		GTXQ3 => ,
		HARD_ERR => ,
		SOFT_ERR => ,
		FRAME_ERR => ,
		CHANNEL_UP => ,
		LANE_UP => ,
		WARN_CC => ,
		DO_CC => ,
		USER_CLK => ,
		SYNC_CLK => ,
		RESET => ,
		POWER_DOWN => ,
		LOOPBACK => ,
		GT_RESET => ,
		TX_OUT_CLK => ,
		TX_LOCK => 
	);



-- INST_TAG_END ------ End INSTANTIATION Template ------------

-- You must compile the wrapper file CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr.vhd when simulating
-- the core, CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr. When compiling the wrapper file, be sure to
-- reference the XilinxCoreLib VHDL simulation library. For detailed
-- instructions, please refer to the "CORE Generator Help".
