                Core name: Xilinx LogiCORE Aurora 8B10B
                Version: 5.2
                Release Date: July 23, 2010


================================================================================

This document contains the following sections:

1. Introduction
2. New Features
3. Supported Devices
4. Resolved Issues
5. Known Issues
6. Technical Support
7. Other Information
8. Core Release History
9. Legal Disclaimer

================================================================================


1. INTRODUCTION

For the most recent updates to the IP installation instructions for this
core, please go to:

   http://www.xilinx.com/ipcenter/coregen/ip_update_install_instructions.htm

For system requirements:

   http://www.xilinx.com/ipcenter/coregen/ip_update_system_requirements.htm

This file contains release notes for the Xilinx LogiCORE IP Aurora 8B10B v5.2
solution. For the latest core updates, see the product page at:

   http://www.xilinx.com/aurora

2. NEW FEATURES

- ISE 12.2 software support
- Addition of Use ChipScope Pro Analyzer checkbox in GUI to include
  ChipScope cores as part of example design
- Virtex-6 LXT/SXT/HXT line rate incresed from 6.5 Gbps to 6.6 Gbps
- Virtex-6 CXT -1 speed grade device line rate incresed from 3.125 Gbps to 
  3.75 Gbps 
- Virtex-6 HXT (GTX transceivers) support 
- Virtex-5 Qpro devices support 
- Virtex-6 Qpro devices support 
- Spartan-6 Qpro devices support
- Automotive Spartan-6 devices support

3. SUPPORTED DEVICES

Virtex-6 XC CXT/LXT/SXT/HXT
Virtex-6 XQ LXT/SXT
Virtex-6 -1L XC LXT/SXT

Spartan-6 XC LXT
Spartan-6 XA
Spartan-6 XQ LXT

Virtex-5 XC LXT/SXT/FXT/TXT
Virtex-5 XQ LXT/SXT/FXT

4. RESOLVED ISSUES

- Virtex-6 Aurora: default value for TXDIFFCTRL is too low
  Core uses 4'b0000 as default value and it changed to 4'b1000
  Refer UG366 for more details on TXDIFFCTRL values
  CR number 561723

- Update Spartan-6 PMA_RX_CFG settings
  Based on latest charaterization data PMA_RX_CFG attribute updated for Spartan-6
  CR number 563542

- Updated the min PLL range from 1.5 to 1.48 for Virtex-5/Virtex-5Q GTX
  CR number 560012
  This update is from latest DS202 (v5.3)

- Generating Aurora 8B10B v5.1 for S6 with line rate 3.125/ refclk 78.13 
  gives unknown error
  CR number 555870

- Change the "CLK_COR_SEQ_1_1_0/1" attribute from 10'b0000000000 to 
  10'b0100000000 when clock correction is disabled
  CR number 555432

- Spartan-6 Aurora 8b/10b v5.1 instantiates IBUFDS_GTXE1
  CR number 555780

- Simplex RX should also have timer option enabled in the GUI
  CR number 523323
  
- Update default setting for PMA_COM_CFG_WEST[13:12] attribute for production silicon
  CR number 558556
  PMA_COM_CFG_WEST[13:12] got updated to 2'b10.

- The value of CHAN_BOND_LEVEL_0 and CHAN_BOND_LEVEL_1 parameters is incorrectly set
  CR number 538515
  CHAN_BOND_LEVEL_0 and CHAN_BOND_LEVEL_1 paramters were set in hexadecimal.
  This has been updated as integers as per UG198.

- Fixed min line rate for Virtex-6 and Virtex-6 low power family
  Virtex-6 CXT devices has 0.675 Gb/s as min line rate
  Virtex-6 LXT/SXT/HXT and Virtex-6 -1L LXT/SXT has 0.6 Gb/s as min line rate 
  CR number 559154

- Fixed misleading license warning message during core generation.
  Aurora 8B10B core is made as free IP core and doesn't require any license 
  for core generation.
  CR number 536603

- Removed -t switch from par command in the implemention scripts 
  CR number 551312 

- Update MMCM VCO frequncy range from 400MHz to 600MHz 
  CR number 543847 

- De-feature GTX PLL feedback divider /1 for Virtex-6 & Virtex-6 -1L family 
  production silicon 
  CR number 544243

- Update charge pump attributes for Virtex-6 & Virtex-6 -1L family GTX 
  CR number 544242

- Appendix D of UG353 does not match up with RocketIO GTP Wizard Selection Step 3
  CR number 550641
  Appendix D of UG353 explains the procedure for Virtex-5 GTP/GTX. This 
  procedure doesn't hold true for other transceiver wizrads like Virtex-6 GTX 
  or Spartan-6. Appendix D has ben rewritten completely for each of the wizard 
  wrapper generation. 

For a list of all known issues with the Aurora 8B10B core, please refer to
the AR listing of the core found at

http://www.xilinx.com/support/documentation/user_guides/xtp025.pdf


5. KNOWN ISSUES

The following are known issues for v5.2 of this core at time of release:

- Timing errors observed for designs with transceivers selected noncontinuously. 
  Refer Appendix B in LogiCORE IP Aurora 8B10B v5.2 
  User Guide - UG353 for more details.
  CR Number 532828
   
The most recent information, including known issues, workarounds, and
resolutions for this version is provided in the IP Release Notes Guide
located at

   www.xilinx.com/support/documentation/user_guides/xtp025.pdf


6. TECHNICAL SUPPORT

To obtain technical support, create a WebCase at www.xilinx.com/support.
Questions are routed to a team with expertise using this product.

Xilinx provides technical support for use of this product when used
according to the guidelines described in the core documentation, and
cannot guarantee timing, functionality, or support of this product for
designs that do not follow specified guidelines.


7. OTHER INFORMATION

7.1 Quick start recommendations
---------------------------
After generating an Aurora module, you may want to do one of the
following:

(a) Build an Aurora module to try the flow and see it working in
    simulation

(b) Integrate the Aurora module with your own design

(c) Remember to set pin constraints in <component_name>_aurora_example.ucf
    file before using the aurora_example design

The User Guide explains the Aurora module in detail to help you connect it 
to your design and use it in your system.
  
7.2 Troubleshooting Guide
---------------------
This section presents some common problems you may encounter with
the Aurora 8B/10B design.

(a) Lanes and Channel do not come up in simulation

- The quickest way to debug these problems is to view the signals from
  one of the GT instances that are not working.

- Make sure that the GT reference clock and user clocks are all toggling.
  Note that only one of the reference clocks should be toggling, 
  the rest will be tied low.

- Check to see that TXOUTCLK from GT wrapper is toggling.
  If they are not toggling, you may have to wait longer for the PMA to
  finish locking. You should typically wait about 6-9 us for lane up 
  and channel up. Need to wait longer for simplex designs. 

- Make sure that TXN and TXP are toggling. If they are not, make sure
  you've waited long enough (see the previous bullet) and make sure 
  you are not driving the TX signal with another signal.

- Check the PLL_NOT_LOCKED signal and the RESET signals on your
  design. If these are being held active, your Aurora module 
  will not be able to initialize.

- Be sure you do not have the POWER_DOWN signal asserted

- Make sure the TXN and TXP signals from each GT are connected to the
  appropriate RXN and RXP signals from the corresponding GT on 
  the other side of the channel

- If you are simulating Verilog, you will need to instantiate the
  "glbl" module and use it to drive the power_up reset at the 
  beginning of the simulation to simulate the reset that occurs
  after configuration. You should hold this reset for a few cycles.
  The code below can be used an example:

  //Simulate the global reset that occurs after configuration at
  //the beginning
  //of the simulation.
  assign glbl.GSR = gsr_r;
  assign glbl.GTS = gts_r;

  initial
    begin
      gts_r = 1'b0;
      gsr_r = 1'b1;
      #(16*CLOCKPERIOD_1);
      gsr_r = 1'b0;
    end

- If you are using a multilane channel, make sure all the GT on
  each side of the channel are connected in the correct order

(b) Channel comes up in simulation but TX_DST_RDY_N is never asserted
    (never goes low)

- If your module includes flow control but you are not using it, make
  sure the request signals are not currently driven low. 
  NFC_REQ_N and UFC_TX_REQ_N are active low: if they are low,
  TX_DST_RDY_N will stay high because the channel will be allocated
  for flow control

- Make sure WARN_CC and DO_CC are not being driven high continuously. 
  Whenever DO_CC is high on a positive clock edge, the channel is used 
  to send clock correction characters, so TX_DST_RDY_N is deasserted

- If you have NFC enabled, make sure the design on the other side of
  the channel did not send an NFC XOFF message. This will cut off 
  the channel for normal data until the other side sends
  an NFC XON message to turn the flow on again. See ug353.pdf for more
  details


(c) Bytes and words are being lost as they travel through the Aurora
    channel

- If you are using the LocalLink interface, make sure you are writing
  data correctly. The most common mistake is to assume words are written
  without looking at TX_DST_RDY_N. Also remember that all signals
  ending in _N are active low, and that the REM signal must be used to
  indicate which bytes are valid when TX_EOF_N is asserted.

- Make sure you are reading correctly from the RX interface. Data and
  framing signals are only valid when RX_SRC_RDY_N is asserted.


(d) Problems while compiling the design

- Make sure you include all the files from the src directory when
  compiling

- If you are using VHDL, make sure to include the aurora_pkg.vhd file 
  in your synthesis
 
7.3 Links to useful resources
-------------------------
You may find the following resources useful:

Virtex-5 GTP Transceiver User Guide: UG196.pdf
http://www.xilinx.com/support/documentation/user_guides/ug196.pdf 

Virtex-5 GTX Transceiver User Guide: UG198.pdf
http://www.xilinx.com/support/documentation/user_guides/ug198.pdf 

Virtex-6 GTX Transceiver User Guide: UG366.pdf
http://www.xilinx.com/support/documentation/user_guides/ug366.pdf 

Spartan-6 GTP Transceiver User Guide: UG386.pdf
http://www.xilinx.com/support/documentation/user_guides/ug386.pdf 

LocalLink Interface Specification: SP006.pdf
http://www.xilinx.com/products/design_resources/conn_central/locallink_member/sp006.pdf

Aurora 8B/10B Protocol Specification: SP002.pdf
http://www.xilinx.com/support/documentation/ip_documentation/aurora_8b10b_protocol_spec_sp002.pdf

Multi-Gigabit Signaling Resources:
http://www.xilinx.com/products/design_resources/highspeed_design

Xilinx on Board:
http://www.xilinx.com/products/devkits/boardsearch.htm
(Search for Development boards)

Xilinx Support:                    
http://www.support.xilinx.com


8. CORE RELEASE HISTORY

Date        By            Version      Description
================================================================================
07/23/2010  Xilinx, Inc.  5.2          ISE 12.2 support
                                       Virtex-5Q/Virtex-6Q/Spartan-6Q family support
                                       Automotive Spartan-6 family support
                                       Virtex-6 HXT (GTX Transceivers) support     
04/19/2010  Xilinx, Inc.  5.1 rev 2    implemention scripts update
03/09/2010  Xilinx, Inc.  5.1 rev 1    ISE 11.5 support,
                                       MMCM update, Charge pump attributes update, 
                                       Defeaturing feedback divider 1 for Virtex-6 and
                                       Virtex-6 -1L family GTX
12/02/2009  Xilinx, Inc.  5.1          ISE 11.4 support,
                                       Virtex-6 -1L family support,
                                       Spartan-6 LXT family support and
                                       GUI restructuring       
06/24/2009  Xilinx, Inc.  4.2          ISE 11.2 support,
                                       Timer based Simplex Designs and
                                       Virtex-6 family support 
04/24/2009  Xilinx, Inc.  4.1          ISE 11.1 support,
                                       Improved directory structure,
                                       Multiple GT REFCLK and 
                                       Virtex-5 TXT support
================================================================================


9. Legal Disclaimer

(c) Copyright 2009 - 2010 Xilinx, Inc. All rights reserved.

This file contains confidential and proprietary information
of Xilinx, Inc. and is protected under U.S. and
international copyright and other intellectual property
laws.

DISCLAIMER
This disclaimer is not a license and does not grant any
rights to the materials distributed herewith. Except as
otherwise provided in a valid license issued to you by
Xilinx, and to the maximum extent permitted by applicable
law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
(2) Xilinx shall not be liable (whether in contract or tort,
including negligence, or under any other theory of
liability) for any loss or damage of any kind or nature
related to, arising under or in connection with these
materials, including for any direct, or any indirect,
special, incidental, or consequential loss or damage
(including loss of data, profits, goodwill, or any type of
loss or damage suffered as a result of any action brought
by a third party) even if such damage or loss was
reasonably foreseeable or Xilinx had been advised of the
possibility of the same.

CRITICAL APPLICATIONS
Xilinx products are not designed or intended to be fail-
safe, or for use in any application requiring fail-safe
performance, such as life-support or safety devices or
systems, Class III medical devices, nuclear facilities,
applications related to the deployment of airbags, or any
other applications that could lead to death, personal
injury, or severe property or environmental damage
(individually and collectively, "Critical
Applications"). Customer assumes the sole risk and
liability of any use of Xilinx products in Critical
Applications, subject only to applicable laws and
regulations governing limitations on product liability.

THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
PART OF THIS FILE AT ALL TIMES.
