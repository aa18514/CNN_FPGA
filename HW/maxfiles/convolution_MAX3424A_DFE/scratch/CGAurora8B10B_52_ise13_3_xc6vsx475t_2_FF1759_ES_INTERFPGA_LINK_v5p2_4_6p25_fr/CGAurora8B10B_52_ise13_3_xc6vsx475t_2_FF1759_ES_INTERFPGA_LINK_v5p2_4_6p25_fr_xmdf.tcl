# The package naming convention is <core_name>_xmdf
package provide CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_xmdf 1.0

# This includes some utilities that support common XMDF operations
package require utilities_xmdf

# Define a namespace for this package. The name of the name space
# is <core_name>_xmdf
namespace eval ::CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_xmdf {
# Use this to define any statics
}

# Function called by client to rebuild the params and port arrays
# Optional when the use context does not require the param or ports
# arrays to be available.
proc ::CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_xmdf::xmdfInit { instance } {
# Variable containg name of library into which module is compiled
# Recommendation: <module_name>
# Required
utilities_xmdf::xmdfSetData $instance Module Attributes Name CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr
}
# ::CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_xmdf::xmdfInit

# Function called by client to fill in all the xmdf* data variables
# based on the current settings of the parameters
proc ::CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_xmdf::xmdfApplyParams { instance } {

set fcount 0
# Array containing libraries that are assumed to exist
# Examples include unisim and xilinxcorelib
# Optional
# In this example, we assume that the unisim library will
# be magically
# available to the simulation and synthesis tool
utilities_xmdf::xmdfSetData $instance FileSet $fcount type logical_library
utilities_xmdf::xmdfSetData $instance FileSet $fcount logical_library unisim
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
utilities_xmdf::xmdfSetData $instance FileSet $fcount toplevel true
incr fcount



utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_xmdf.tcl
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_aurora_lane_4byte.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount



utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_aurora_lane_4byte.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount




utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_aurora_lane_4byte.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount




utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_aurora_pkg.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
utilities_xmdf::xmdfSetData $instance FileSet $fcount toplevel true
incr fcount
















utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/testbench/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_sample_tb.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount

utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/testbench/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_sample_tb.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount

utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/ucf/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_aurora_sample.ucf
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/ucf/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_aurora_sample.ucf
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount

utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/example_design/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_aurora_sample.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount

utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/example_design/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_aurora_sample.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount





































utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/ucf/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr.ucf
utilities_xmdf::xmdfSetData $instance FileSet $fcount type ucf
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
utilities_xmdf::xmdfSetData $instance FileSet $fcount toplevel true
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/ucf/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr.ucf
utilities_xmdf::xmdfSetData $instance FileSet $fcount type ucf
incr fcount




utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_channel_err_detect.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_channel_init_sm.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_chbond_count_dec_4byte.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount



utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_chbond_count_dec_4byte.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount







utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/clock_correction.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount






utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/clock_module/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_clock_module.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount

utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/implement/config.csh
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_err_detect_4byte.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount



utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_err_detect_4byte.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount




utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_err_detect_4byte.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount





utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/example_design/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_frame_check.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/example_design/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_frame_gen.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_global_logic.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_idle_and_ver_gen.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount





utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_lane_init_sm_4byte.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount

utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_lane_init_sm_4byte.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount





utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_lane_init_sm_4byte.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount





utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_left_align_control.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_left_align_mux.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount



utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_v5_wrapper.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount






utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_output_mux.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_output_switch_control.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_phase_align.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount



utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/readme.txt
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount














































utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_rx_ll_deframer.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount





utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_rx_ll_pdu_datapath.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount



utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_rx_ll.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount



utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/implement/sample_test.do
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_sideband_output.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount

utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/testbench/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_sim_reset_on_config.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/cc_manager/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_standard_cc_module.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_storage_ce_control.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_storage_count_control.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_storage_mux.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_storage_switch_control.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


























utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_sym_dec_4byte.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount




utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_sym_gen_4byte.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount




utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/testbench/test_vectors2.vec
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount

utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/testbench/test_vectors.vec
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount



























utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_tx_ll_control.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_tx_ll_datapath.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount


utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_tx_ll.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount

utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/testbench/abfm_tx_nfc_frames.dat
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount



utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/testbench/abfm_tx_ufc_frames.dat
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount

utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/testbench/abfm_tx_pdu_frames.dat
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount





















utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/src/CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr_valid_data_counter.vhd
utilities_xmdf::xmdfSetData $instance FileSet $fcount type vhdl
incr fcount

utilities_xmdf::xmdfSetData $instance FileSet $fcount relative_path CGAurora8B10B_52_ise13_3_xc6vsx475t_2_FF1759_ES_INTERFPGA_LINK_v5p2_4_6p25_fr/implement/sample_wave.do
utilities_xmdf::xmdfSetData $instance FileSet $fcount type Ignore
incr fcount



}

# ::gen_comp_name_xmdf::xmdfApplyParams
