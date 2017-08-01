/**\file */
#ifndef SLIC_DECLARATIONS_convolution_H
#define SLIC_DECLARATIONS_convolution_H
#include "MaxSLiCInterface.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define convolution_PCIE_ALIGNMENT (16)
#define convolution_fold_constant (5)
#define convolution_N (28)


/*----------------------------------------------------------------------------*/
/*---------------------------- Interface default -----------------------------*/
/*----------------------------------------------------------------------------*/




/**
 * \brief Basic static function for the interface 'default'.
 * 
 * \param [in] ticks_convolutionKernel00 The number of ticks for which kernel "convolutionKernel00" will run.
 * \param [in] ticks_convolutionKernel10 The number of ticks for which kernel "convolutionKernel10" will run.
 * \param [in] ticks_fully_connected The number of ticks for which kernel "fully_connected" will run.
 * \param [in] ticks_fully_connected2 The number of ticks for which kernel "fully_connected2" will run.
 * \param [in] ticks_maxpooling The number of ticks for which kernel "maxpooling" will run.
 * \param [in] ticks_maxpooling1 The number of ticks for which kernel "maxpooling1" will run.
 * \param [in] ticks_sliding_window The number of ticks for which kernel "sliding_window" will run.
 * \param [in] ticks_sliding_window1 The number of ticks for which kernel "sliding_window1" will run.
 * \param [in] instream_x01 Stream "x01".
 * \param [in] instream_size_x01 The size of the stream instream_x01 in bytes.
 * \param [in] instream_x11 Stream "x11".
 * \param [in] instream_size_x11 The size of the stream instream_x11 in bytes.
 * \param [out] outstream_y01 Stream "y01".
 * \param [in] outstream_size_y01 The size of the stream outstream_y01 in bytes.
 * \param [out] outstream_y11 Stream "y11".
 * \param [in] outstream_size_y11 The size of the stream outstream_y11 in bytes.
 * \param [in] inmem_convolutionKernel00_mappedRom00 Mapped ROM inmem_convolutionKernel00_mappedRom00, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom10 Mapped ROM inmem_convolutionKernel00_mappedRom10, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom100 Mapped ROM inmem_convolutionKernel00_mappedRom100, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom110 Mapped ROM inmem_convolutionKernel00_mappedRom110, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom120 Mapped ROM inmem_convolutionKernel00_mappedRom120, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom130 Mapped ROM inmem_convolutionKernel00_mappedRom130, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom140 Mapped ROM inmem_convolutionKernel00_mappedRom140, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom150 Mapped ROM inmem_convolutionKernel00_mappedRom150, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom160 Mapped ROM inmem_convolutionKernel00_mappedRom160, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom170 Mapped ROM inmem_convolutionKernel00_mappedRom170, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom180 Mapped ROM inmem_convolutionKernel00_mappedRom180, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom190 Mapped ROM inmem_convolutionKernel00_mappedRom190, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom20 Mapped ROM inmem_convolutionKernel00_mappedRom20, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom30 Mapped ROM inmem_convolutionKernel00_mappedRom30, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom40 Mapped ROM inmem_convolutionKernel00_mappedRom40, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom50 Mapped ROM inmem_convolutionKernel00_mappedRom50, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom60 Mapped ROM inmem_convolutionKernel00_mappedRom60, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom70 Mapped ROM inmem_convolutionKernel00_mappedRom70, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom80 Mapped ROM inmem_convolutionKernel00_mappedRom80, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom90 Mapped ROM inmem_convolutionKernel00_mappedRom90, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom00 Mapped ROM inmem_convolutionKernel10_mappedRom00, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom01 Mapped ROM inmem_convolutionKernel10_mappedRom01, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom010 Mapped ROM inmem_convolutionKernel10_mappedRom010, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom011 Mapped ROM inmem_convolutionKernel10_mappedRom011, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom012 Mapped ROM inmem_convolutionKernel10_mappedRom012, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom013 Mapped ROM inmem_convolutionKernel10_mappedRom013, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom014 Mapped ROM inmem_convolutionKernel10_mappedRom014, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom015 Mapped ROM inmem_convolutionKernel10_mappedRom015, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom016 Mapped ROM inmem_convolutionKernel10_mappedRom016, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom017 Mapped ROM inmem_convolutionKernel10_mappedRom017, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom018 Mapped ROM inmem_convolutionKernel10_mappedRom018, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom019 Mapped ROM inmem_convolutionKernel10_mappedRom019, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom02 Mapped ROM inmem_convolutionKernel10_mappedRom02, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom03 Mapped ROM inmem_convolutionKernel10_mappedRom03, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom04 Mapped ROM inmem_convolutionKernel10_mappedRom04, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom05 Mapped ROM inmem_convolutionKernel10_mappedRom05, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom06 Mapped ROM inmem_convolutionKernel10_mappedRom06, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom07 Mapped ROM inmem_convolutionKernel10_mappedRom07, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom08 Mapped ROM inmem_convolutionKernel10_mappedRom08, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom09 Mapped ROM inmem_convolutionKernel10_mappedRom09, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_fully_connected_fully_connected_bias Mapped ROM inmem_fully_connected_fully_connected_bias, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom0 Mapped ROM inmem_fully_connected_mappedRom0, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom1 Mapped ROM inmem_fully_connected_mappedRom1, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom10 Mapped ROM inmem_fully_connected_mappedRom10, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom11 Mapped ROM inmem_fully_connected_mappedRom11, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom12 Mapped ROM inmem_fully_connected_mappedRom12, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom13 Mapped ROM inmem_fully_connected_mappedRom13, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom14 Mapped ROM inmem_fully_connected_mappedRom14, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom15 Mapped ROM inmem_fully_connected_mappedRom15, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom16 Mapped ROM inmem_fully_connected_mappedRom16, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom17 Mapped ROM inmem_fully_connected_mappedRom17, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom18 Mapped ROM inmem_fully_connected_mappedRom18, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom19 Mapped ROM inmem_fully_connected_mappedRom19, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom2 Mapped ROM inmem_fully_connected_mappedRom2, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom20 Mapped ROM inmem_fully_connected_mappedRom20, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom21 Mapped ROM inmem_fully_connected_mappedRom21, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom22 Mapped ROM inmem_fully_connected_mappedRom22, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom23 Mapped ROM inmem_fully_connected_mappedRom23, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom24 Mapped ROM inmem_fully_connected_mappedRom24, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom25 Mapped ROM inmem_fully_connected_mappedRom25, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom26 Mapped ROM inmem_fully_connected_mappedRom26, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom27 Mapped ROM inmem_fully_connected_mappedRom27, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom28 Mapped ROM inmem_fully_connected_mappedRom28, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom29 Mapped ROM inmem_fully_connected_mappedRom29, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom3 Mapped ROM inmem_fully_connected_mappedRom3, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom30 Mapped ROM inmem_fully_connected_mappedRom30, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom31 Mapped ROM inmem_fully_connected_mappedRom31, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom32 Mapped ROM inmem_fully_connected_mappedRom32, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom33 Mapped ROM inmem_fully_connected_mappedRom33, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom34 Mapped ROM inmem_fully_connected_mappedRom34, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom35 Mapped ROM inmem_fully_connected_mappedRom35, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom36 Mapped ROM inmem_fully_connected_mappedRom36, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom37 Mapped ROM inmem_fully_connected_mappedRom37, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom38 Mapped ROM inmem_fully_connected_mappedRom38, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom39 Mapped ROM inmem_fully_connected_mappedRom39, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom4 Mapped ROM inmem_fully_connected_mappedRom4, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom40 Mapped ROM inmem_fully_connected_mappedRom40, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom41 Mapped ROM inmem_fully_connected_mappedRom41, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom42 Mapped ROM inmem_fully_connected_mappedRom42, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom43 Mapped ROM inmem_fully_connected_mappedRom43, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom44 Mapped ROM inmem_fully_connected_mappedRom44, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom45 Mapped ROM inmem_fully_connected_mappedRom45, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom46 Mapped ROM inmem_fully_connected_mappedRom46, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom47 Mapped ROM inmem_fully_connected_mappedRom47, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom48 Mapped ROM inmem_fully_connected_mappedRom48, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom49 Mapped ROM inmem_fully_connected_mappedRom49, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom5 Mapped ROM inmem_fully_connected_mappedRom5, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom6 Mapped ROM inmem_fully_connected_mappedRom6, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom7 Mapped ROM inmem_fully_connected_mappedRom7, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom8 Mapped ROM inmem_fully_connected_mappedRom8, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom9 Mapped ROM inmem_fully_connected_mappedRom9, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected2_bias Mapped ROM inmem_fully_connected2_bias, should be of size (10 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom0 Mapped ROM inmem_fully_connected2_mappedRom0, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom1 Mapped ROM inmem_fully_connected2_mappedRom1, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom10 Mapped ROM inmem_fully_connected2_mappedRom10, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom11 Mapped ROM inmem_fully_connected2_mappedRom11, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom12 Mapped ROM inmem_fully_connected2_mappedRom12, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom13 Mapped ROM inmem_fully_connected2_mappedRom13, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom14 Mapped ROM inmem_fully_connected2_mappedRom14, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom15 Mapped ROM inmem_fully_connected2_mappedRom15, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom16 Mapped ROM inmem_fully_connected2_mappedRom16, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom17 Mapped ROM inmem_fully_connected2_mappedRom17, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom18 Mapped ROM inmem_fully_connected2_mappedRom18, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom19 Mapped ROM inmem_fully_connected2_mappedRom19, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom2 Mapped ROM inmem_fully_connected2_mappedRom2, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom20 Mapped ROM inmem_fully_connected2_mappedRom20, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom21 Mapped ROM inmem_fully_connected2_mappedRom21, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom22 Mapped ROM inmem_fully_connected2_mappedRom22, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom23 Mapped ROM inmem_fully_connected2_mappedRom23, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom24 Mapped ROM inmem_fully_connected2_mappedRom24, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom25 Mapped ROM inmem_fully_connected2_mappedRom25, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom26 Mapped ROM inmem_fully_connected2_mappedRom26, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom27 Mapped ROM inmem_fully_connected2_mappedRom27, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom28 Mapped ROM inmem_fully_connected2_mappedRom28, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom29 Mapped ROM inmem_fully_connected2_mappedRom29, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom3 Mapped ROM inmem_fully_connected2_mappedRom3, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom30 Mapped ROM inmem_fully_connected2_mappedRom30, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom31 Mapped ROM inmem_fully_connected2_mappedRom31, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom32 Mapped ROM inmem_fully_connected2_mappedRom32, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom33 Mapped ROM inmem_fully_connected2_mappedRom33, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom34 Mapped ROM inmem_fully_connected2_mappedRom34, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom35 Mapped ROM inmem_fully_connected2_mappedRom35, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom36 Mapped ROM inmem_fully_connected2_mappedRom36, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom37 Mapped ROM inmem_fully_connected2_mappedRom37, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom38 Mapped ROM inmem_fully_connected2_mappedRom38, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom39 Mapped ROM inmem_fully_connected2_mappedRom39, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom4 Mapped ROM inmem_fully_connected2_mappedRom4, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom40 Mapped ROM inmem_fully_connected2_mappedRom40, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom41 Mapped ROM inmem_fully_connected2_mappedRom41, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom42 Mapped ROM inmem_fully_connected2_mappedRom42, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom43 Mapped ROM inmem_fully_connected2_mappedRom43, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom44 Mapped ROM inmem_fully_connected2_mappedRom44, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom45 Mapped ROM inmem_fully_connected2_mappedRom45, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom46 Mapped ROM inmem_fully_connected2_mappedRom46, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom47 Mapped ROM inmem_fully_connected2_mappedRom47, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom48 Mapped ROM inmem_fully_connected2_mappedRom48, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom49 Mapped ROM inmem_fully_connected2_mappedRom49, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom5 Mapped ROM inmem_fully_connected2_mappedRom5, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom6 Mapped ROM inmem_fully_connected2_mappedRom6, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom7 Mapped ROM inmem_fully_connected2_mappedRom7, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom8 Mapped ROM inmem_fully_connected2_mappedRom8, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom9 Mapped ROM inmem_fully_connected2_mappedRom9, should be of size (100 * sizeof(double)).
 */
void convolution(
	uint64_t ticks_convolutionKernel00,
	uint64_t ticks_convolutionKernel10,
	uint64_t ticks_fully_connected,
	uint64_t ticks_fully_connected2,
	uint64_t ticks_maxpooling,
	uint64_t ticks_maxpooling1,
	uint64_t ticks_sliding_window,
	uint64_t ticks_sliding_window1,
	const void *instream_x01,
	size_t instream_size_x01,
	const void *instream_x11,
	size_t instream_size_x11,
	void *outstream_y01,
	size_t outstream_size_y01,
	void *outstream_y11,
	size_t outstream_size_y11,
	const double *inmem_convolutionKernel00_mappedRom00,
	const double *inmem_convolutionKernel00_mappedRom10,
	const double *inmem_convolutionKernel00_mappedRom100,
	const double *inmem_convolutionKernel00_mappedRom110,
	const double *inmem_convolutionKernel00_mappedRom120,
	const double *inmem_convolutionKernel00_mappedRom130,
	const double *inmem_convolutionKernel00_mappedRom140,
	const double *inmem_convolutionKernel00_mappedRom150,
	const double *inmem_convolutionKernel00_mappedRom160,
	const double *inmem_convolutionKernel00_mappedRom170,
	const double *inmem_convolutionKernel00_mappedRom180,
	const double *inmem_convolutionKernel00_mappedRom190,
	const double *inmem_convolutionKernel00_mappedRom20,
	const double *inmem_convolutionKernel00_mappedRom30,
	const double *inmem_convolutionKernel00_mappedRom40,
	const double *inmem_convolutionKernel00_mappedRom50,
	const double *inmem_convolutionKernel00_mappedRom60,
	const double *inmem_convolutionKernel00_mappedRom70,
	const double *inmem_convolutionKernel00_mappedRom80,
	const double *inmem_convolutionKernel00_mappedRom90,
	const double *inmem_convolutionKernel10_mappedRom00,
	const double *inmem_convolutionKernel10_mappedRom01,
	const double *inmem_convolutionKernel10_mappedRom010,
	const double *inmem_convolutionKernel10_mappedRom011,
	const double *inmem_convolutionKernel10_mappedRom012,
	const double *inmem_convolutionKernel10_mappedRom013,
	const double *inmem_convolutionKernel10_mappedRom014,
	const double *inmem_convolutionKernel10_mappedRom015,
	const double *inmem_convolutionKernel10_mappedRom016,
	const double *inmem_convolutionKernel10_mappedRom017,
	const double *inmem_convolutionKernel10_mappedRom018,
	const double *inmem_convolutionKernel10_mappedRom019,
	const double *inmem_convolutionKernel10_mappedRom02,
	const double *inmem_convolutionKernel10_mappedRom03,
	const double *inmem_convolutionKernel10_mappedRom04,
	const double *inmem_convolutionKernel10_mappedRom05,
	const double *inmem_convolutionKernel10_mappedRom06,
	const double *inmem_convolutionKernel10_mappedRom07,
	const double *inmem_convolutionKernel10_mappedRom08,
	const double *inmem_convolutionKernel10_mappedRom09,
	const double *inmem_fully_connected_fully_connected_bias,
	const double *inmem_fully_connected_mappedRom0,
	const double *inmem_fully_connected_mappedRom1,
	const double *inmem_fully_connected_mappedRom10,
	const double *inmem_fully_connected_mappedRom11,
	const double *inmem_fully_connected_mappedRom12,
	const double *inmem_fully_connected_mappedRom13,
	const double *inmem_fully_connected_mappedRom14,
	const double *inmem_fully_connected_mappedRom15,
	const double *inmem_fully_connected_mappedRom16,
	const double *inmem_fully_connected_mappedRom17,
	const double *inmem_fully_connected_mappedRom18,
	const double *inmem_fully_connected_mappedRom19,
	const double *inmem_fully_connected_mappedRom2,
	const double *inmem_fully_connected_mappedRom20,
	const double *inmem_fully_connected_mappedRom21,
	const double *inmem_fully_connected_mappedRom22,
	const double *inmem_fully_connected_mappedRom23,
	const double *inmem_fully_connected_mappedRom24,
	const double *inmem_fully_connected_mappedRom25,
	const double *inmem_fully_connected_mappedRom26,
	const double *inmem_fully_connected_mappedRom27,
	const double *inmem_fully_connected_mappedRom28,
	const double *inmem_fully_connected_mappedRom29,
	const double *inmem_fully_connected_mappedRom3,
	const double *inmem_fully_connected_mappedRom30,
	const double *inmem_fully_connected_mappedRom31,
	const double *inmem_fully_connected_mappedRom32,
	const double *inmem_fully_connected_mappedRom33,
	const double *inmem_fully_connected_mappedRom34,
	const double *inmem_fully_connected_mappedRom35,
	const double *inmem_fully_connected_mappedRom36,
	const double *inmem_fully_connected_mappedRom37,
	const double *inmem_fully_connected_mappedRom38,
	const double *inmem_fully_connected_mappedRom39,
	const double *inmem_fully_connected_mappedRom4,
	const double *inmem_fully_connected_mappedRom40,
	const double *inmem_fully_connected_mappedRom41,
	const double *inmem_fully_connected_mappedRom42,
	const double *inmem_fully_connected_mappedRom43,
	const double *inmem_fully_connected_mappedRom44,
	const double *inmem_fully_connected_mappedRom45,
	const double *inmem_fully_connected_mappedRom46,
	const double *inmem_fully_connected_mappedRom47,
	const double *inmem_fully_connected_mappedRom48,
	const double *inmem_fully_connected_mappedRom49,
	const double *inmem_fully_connected_mappedRom5,
	const double *inmem_fully_connected_mappedRom6,
	const double *inmem_fully_connected_mappedRom7,
	const double *inmem_fully_connected_mappedRom8,
	const double *inmem_fully_connected_mappedRom9,
	const double *inmem_fully_connected2_bias,
	const double *inmem_fully_connected2_mappedRom0,
	const double *inmem_fully_connected2_mappedRom1,
	const double *inmem_fully_connected2_mappedRom10,
	const double *inmem_fully_connected2_mappedRom11,
	const double *inmem_fully_connected2_mappedRom12,
	const double *inmem_fully_connected2_mappedRom13,
	const double *inmem_fully_connected2_mappedRom14,
	const double *inmem_fully_connected2_mappedRom15,
	const double *inmem_fully_connected2_mappedRom16,
	const double *inmem_fully_connected2_mappedRom17,
	const double *inmem_fully_connected2_mappedRom18,
	const double *inmem_fully_connected2_mappedRom19,
	const double *inmem_fully_connected2_mappedRom2,
	const double *inmem_fully_connected2_mappedRom20,
	const double *inmem_fully_connected2_mappedRom21,
	const double *inmem_fully_connected2_mappedRom22,
	const double *inmem_fully_connected2_mappedRom23,
	const double *inmem_fully_connected2_mappedRom24,
	const double *inmem_fully_connected2_mappedRom25,
	const double *inmem_fully_connected2_mappedRom26,
	const double *inmem_fully_connected2_mappedRom27,
	const double *inmem_fully_connected2_mappedRom28,
	const double *inmem_fully_connected2_mappedRom29,
	const double *inmem_fully_connected2_mappedRom3,
	const double *inmem_fully_connected2_mappedRom30,
	const double *inmem_fully_connected2_mappedRom31,
	const double *inmem_fully_connected2_mappedRom32,
	const double *inmem_fully_connected2_mappedRom33,
	const double *inmem_fully_connected2_mappedRom34,
	const double *inmem_fully_connected2_mappedRom35,
	const double *inmem_fully_connected2_mappedRom36,
	const double *inmem_fully_connected2_mappedRom37,
	const double *inmem_fully_connected2_mappedRom38,
	const double *inmem_fully_connected2_mappedRom39,
	const double *inmem_fully_connected2_mappedRom4,
	const double *inmem_fully_connected2_mappedRom40,
	const double *inmem_fully_connected2_mappedRom41,
	const double *inmem_fully_connected2_mappedRom42,
	const double *inmem_fully_connected2_mappedRom43,
	const double *inmem_fully_connected2_mappedRom44,
	const double *inmem_fully_connected2_mappedRom45,
	const double *inmem_fully_connected2_mappedRom46,
	const double *inmem_fully_connected2_mappedRom47,
	const double *inmem_fully_connected2_mappedRom48,
	const double *inmem_fully_connected2_mappedRom49,
	const double *inmem_fully_connected2_mappedRom5,
	const double *inmem_fully_connected2_mappedRom6,
	const double *inmem_fully_connected2_mappedRom7,
	const double *inmem_fully_connected2_mappedRom8,
	const double *inmem_fully_connected2_mappedRom9);

/**
 * \brief Basic static non-blocking function for the interface 'default'.
 * 
 * Schedule to run on an engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 * 
 * 
 * \param [in] ticks_convolutionKernel00 The number of ticks for which kernel "convolutionKernel00" will run.
 * \param [in] ticks_convolutionKernel10 The number of ticks for which kernel "convolutionKernel10" will run.
 * \param [in] ticks_fully_connected The number of ticks for which kernel "fully_connected" will run.
 * \param [in] ticks_fully_connected2 The number of ticks for which kernel "fully_connected2" will run.
 * \param [in] ticks_maxpooling The number of ticks for which kernel "maxpooling" will run.
 * \param [in] ticks_maxpooling1 The number of ticks for which kernel "maxpooling1" will run.
 * \param [in] ticks_sliding_window The number of ticks for which kernel "sliding_window" will run.
 * \param [in] ticks_sliding_window1 The number of ticks for which kernel "sliding_window1" will run.
 * \param [in] instream_x01 Stream "x01".
 * \param [in] instream_size_x01 The size of the stream instream_x01 in bytes.
 * \param [in] instream_x11 Stream "x11".
 * \param [in] instream_size_x11 The size of the stream instream_x11 in bytes.
 * \param [out] outstream_y01 Stream "y01".
 * \param [in] outstream_size_y01 The size of the stream outstream_y01 in bytes.
 * \param [out] outstream_y11 Stream "y11".
 * \param [in] outstream_size_y11 The size of the stream outstream_y11 in bytes.
 * \param [in] inmem_convolutionKernel00_mappedRom00 Mapped ROM inmem_convolutionKernel00_mappedRom00, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom10 Mapped ROM inmem_convolutionKernel00_mappedRom10, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom100 Mapped ROM inmem_convolutionKernel00_mappedRom100, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom110 Mapped ROM inmem_convolutionKernel00_mappedRom110, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom120 Mapped ROM inmem_convolutionKernel00_mappedRom120, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom130 Mapped ROM inmem_convolutionKernel00_mappedRom130, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom140 Mapped ROM inmem_convolutionKernel00_mappedRom140, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom150 Mapped ROM inmem_convolutionKernel00_mappedRom150, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom160 Mapped ROM inmem_convolutionKernel00_mappedRom160, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom170 Mapped ROM inmem_convolutionKernel00_mappedRom170, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom180 Mapped ROM inmem_convolutionKernel00_mappedRom180, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom190 Mapped ROM inmem_convolutionKernel00_mappedRom190, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom20 Mapped ROM inmem_convolutionKernel00_mappedRom20, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom30 Mapped ROM inmem_convolutionKernel00_mappedRom30, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom40 Mapped ROM inmem_convolutionKernel00_mappedRom40, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom50 Mapped ROM inmem_convolutionKernel00_mappedRom50, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom60 Mapped ROM inmem_convolutionKernel00_mappedRom60, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom70 Mapped ROM inmem_convolutionKernel00_mappedRom70, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom80 Mapped ROM inmem_convolutionKernel00_mappedRom80, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom90 Mapped ROM inmem_convolutionKernel00_mappedRom90, should be of size (25 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom00 Mapped ROM inmem_convolutionKernel10_mappedRom00, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom01 Mapped ROM inmem_convolutionKernel10_mappedRom01, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom010 Mapped ROM inmem_convolutionKernel10_mappedRom010, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom011 Mapped ROM inmem_convolutionKernel10_mappedRom011, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom012 Mapped ROM inmem_convolutionKernel10_mappedRom012, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom013 Mapped ROM inmem_convolutionKernel10_mappedRom013, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom014 Mapped ROM inmem_convolutionKernel10_mappedRom014, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom015 Mapped ROM inmem_convolutionKernel10_mappedRom015, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom016 Mapped ROM inmem_convolutionKernel10_mappedRom016, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom017 Mapped ROM inmem_convolutionKernel10_mappedRom017, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom018 Mapped ROM inmem_convolutionKernel10_mappedRom018, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom019 Mapped ROM inmem_convolutionKernel10_mappedRom019, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom02 Mapped ROM inmem_convolutionKernel10_mappedRom02, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom03 Mapped ROM inmem_convolutionKernel10_mappedRom03, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom04 Mapped ROM inmem_convolutionKernel10_mappedRom04, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom05 Mapped ROM inmem_convolutionKernel10_mappedRom05, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom06 Mapped ROM inmem_convolutionKernel10_mappedRom06, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom07 Mapped ROM inmem_convolutionKernel10_mappedRom07, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom08 Mapped ROM inmem_convolutionKernel10_mappedRom08, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom09 Mapped ROM inmem_convolutionKernel10_mappedRom09, should be of size (1250 * sizeof(double)).
 * \param [in] inmem_fully_connected_fully_connected_bias Mapped ROM inmem_fully_connected_fully_connected_bias, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom0 Mapped ROM inmem_fully_connected_mappedRom0, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom1 Mapped ROM inmem_fully_connected_mappedRom1, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom10 Mapped ROM inmem_fully_connected_mappedRom10, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom11 Mapped ROM inmem_fully_connected_mappedRom11, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom12 Mapped ROM inmem_fully_connected_mappedRom12, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom13 Mapped ROM inmem_fully_connected_mappedRom13, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom14 Mapped ROM inmem_fully_connected_mappedRom14, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom15 Mapped ROM inmem_fully_connected_mappedRom15, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom16 Mapped ROM inmem_fully_connected_mappedRom16, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom17 Mapped ROM inmem_fully_connected_mappedRom17, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom18 Mapped ROM inmem_fully_connected_mappedRom18, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom19 Mapped ROM inmem_fully_connected_mappedRom19, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom2 Mapped ROM inmem_fully_connected_mappedRom2, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom20 Mapped ROM inmem_fully_connected_mappedRom20, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom21 Mapped ROM inmem_fully_connected_mappedRom21, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom22 Mapped ROM inmem_fully_connected_mappedRom22, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom23 Mapped ROM inmem_fully_connected_mappedRom23, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom24 Mapped ROM inmem_fully_connected_mappedRom24, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom25 Mapped ROM inmem_fully_connected_mappedRom25, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom26 Mapped ROM inmem_fully_connected_mappedRom26, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom27 Mapped ROM inmem_fully_connected_mappedRom27, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom28 Mapped ROM inmem_fully_connected_mappedRom28, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom29 Mapped ROM inmem_fully_connected_mappedRom29, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom3 Mapped ROM inmem_fully_connected_mappedRom3, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom30 Mapped ROM inmem_fully_connected_mappedRom30, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom31 Mapped ROM inmem_fully_connected_mappedRom31, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom32 Mapped ROM inmem_fully_connected_mappedRom32, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom33 Mapped ROM inmem_fully_connected_mappedRom33, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom34 Mapped ROM inmem_fully_connected_mappedRom34, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom35 Mapped ROM inmem_fully_connected_mappedRom35, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom36 Mapped ROM inmem_fully_connected_mappedRom36, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom37 Mapped ROM inmem_fully_connected_mappedRom37, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom38 Mapped ROM inmem_fully_connected_mappedRom38, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom39 Mapped ROM inmem_fully_connected_mappedRom39, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom4 Mapped ROM inmem_fully_connected_mappedRom4, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom40 Mapped ROM inmem_fully_connected_mappedRom40, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom41 Mapped ROM inmem_fully_connected_mappedRom41, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom42 Mapped ROM inmem_fully_connected_mappedRom42, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom43 Mapped ROM inmem_fully_connected_mappedRom43, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom44 Mapped ROM inmem_fully_connected_mappedRom44, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom45 Mapped ROM inmem_fully_connected_mappedRom45, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom46 Mapped ROM inmem_fully_connected_mappedRom46, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom47 Mapped ROM inmem_fully_connected_mappedRom47, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom48 Mapped ROM inmem_fully_connected_mappedRom48, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom49 Mapped ROM inmem_fully_connected_mappedRom49, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom5 Mapped ROM inmem_fully_connected_mappedRom5, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom6 Mapped ROM inmem_fully_connected_mappedRom6, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom7 Mapped ROM inmem_fully_connected_mappedRom7, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom8 Mapped ROM inmem_fully_connected_mappedRom8, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected_mappedRom9 Mapped ROM inmem_fully_connected_mappedRom9, should be of size (8000 * sizeof(double)).
 * \param [in] inmem_fully_connected2_bias Mapped ROM inmem_fully_connected2_bias, should be of size (10 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom0 Mapped ROM inmem_fully_connected2_mappedRom0, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom1 Mapped ROM inmem_fully_connected2_mappedRom1, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom10 Mapped ROM inmem_fully_connected2_mappedRom10, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom11 Mapped ROM inmem_fully_connected2_mappedRom11, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom12 Mapped ROM inmem_fully_connected2_mappedRom12, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom13 Mapped ROM inmem_fully_connected2_mappedRom13, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom14 Mapped ROM inmem_fully_connected2_mappedRom14, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom15 Mapped ROM inmem_fully_connected2_mappedRom15, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom16 Mapped ROM inmem_fully_connected2_mappedRom16, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom17 Mapped ROM inmem_fully_connected2_mappedRom17, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom18 Mapped ROM inmem_fully_connected2_mappedRom18, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom19 Mapped ROM inmem_fully_connected2_mappedRom19, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom2 Mapped ROM inmem_fully_connected2_mappedRom2, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom20 Mapped ROM inmem_fully_connected2_mappedRom20, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom21 Mapped ROM inmem_fully_connected2_mappedRom21, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom22 Mapped ROM inmem_fully_connected2_mappedRom22, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom23 Mapped ROM inmem_fully_connected2_mappedRom23, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom24 Mapped ROM inmem_fully_connected2_mappedRom24, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom25 Mapped ROM inmem_fully_connected2_mappedRom25, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom26 Mapped ROM inmem_fully_connected2_mappedRom26, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom27 Mapped ROM inmem_fully_connected2_mappedRom27, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom28 Mapped ROM inmem_fully_connected2_mappedRom28, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom29 Mapped ROM inmem_fully_connected2_mappedRom29, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom3 Mapped ROM inmem_fully_connected2_mappedRom3, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom30 Mapped ROM inmem_fully_connected2_mappedRom30, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom31 Mapped ROM inmem_fully_connected2_mappedRom31, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom32 Mapped ROM inmem_fully_connected2_mappedRom32, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom33 Mapped ROM inmem_fully_connected2_mappedRom33, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom34 Mapped ROM inmem_fully_connected2_mappedRom34, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom35 Mapped ROM inmem_fully_connected2_mappedRom35, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom36 Mapped ROM inmem_fully_connected2_mappedRom36, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom37 Mapped ROM inmem_fully_connected2_mappedRom37, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom38 Mapped ROM inmem_fully_connected2_mappedRom38, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom39 Mapped ROM inmem_fully_connected2_mappedRom39, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom4 Mapped ROM inmem_fully_connected2_mappedRom4, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom40 Mapped ROM inmem_fully_connected2_mappedRom40, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom41 Mapped ROM inmem_fully_connected2_mappedRom41, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom42 Mapped ROM inmem_fully_connected2_mappedRom42, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom43 Mapped ROM inmem_fully_connected2_mappedRom43, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom44 Mapped ROM inmem_fully_connected2_mappedRom44, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom45 Mapped ROM inmem_fully_connected2_mappedRom45, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom46 Mapped ROM inmem_fully_connected2_mappedRom46, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom47 Mapped ROM inmem_fully_connected2_mappedRom47, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom48 Mapped ROM inmem_fully_connected2_mappedRom48, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom49 Mapped ROM inmem_fully_connected2_mappedRom49, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom5 Mapped ROM inmem_fully_connected2_mappedRom5, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom6 Mapped ROM inmem_fully_connected2_mappedRom6, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom7 Mapped ROM inmem_fully_connected2_mappedRom7, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom8 Mapped ROM inmem_fully_connected2_mappedRom8, should be of size (100 * sizeof(double)).
 * \param [in] inmem_fully_connected2_mappedRom9 Mapped ROM inmem_fully_connected2_mappedRom9, should be of size (100 * sizeof(double)).
 * \return A handle on the execution status, or NULL in case of error.
 */
max_run_t *convolution_nonblock(
	uint64_t ticks_convolutionKernel00,
	uint64_t ticks_convolutionKernel10,
	uint64_t ticks_fully_connected,
	uint64_t ticks_fully_connected2,
	uint64_t ticks_maxpooling,
	uint64_t ticks_maxpooling1,
	uint64_t ticks_sliding_window,
	uint64_t ticks_sliding_window1,
	const void *instream_x01,
	size_t instream_size_x01,
	const void *instream_x11,
	size_t instream_size_x11,
	void *outstream_y01,
	size_t outstream_size_y01,
	void *outstream_y11,
	size_t outstream_size_y11,
	const double *inmem_convolutionKernel00_mappedRom00,
	const double *inmem_convolutionKernel00_mappedRom10,
	const double *inmem_convolutionKernel00_mappedRom100,
	const double *inmem_convolutionKernel00_mappedRom110,
	const double *inmem_convolutionKernel00_mappedRom120,
	const double *inmem_convolutionKernel00_mappedRom130,
	const double *inmem_convolutionKernel00_mappedRom140,
	const double *inmem_convolutionKernel00_mappedRom150,
	const double *inmem_convolutionKernel00_mappedRom160,
	const double *inmem_convolutionKernel00_mappedRom170,
	const double *inmem_convolutionKernel00_mappedRom180,
	const double *inmem_convolutionKernel00_mappedRom190,
	const double *inmem_convolutionKernel00_mappedRom20,
	const double *inmem_convolutionKernel00_mappedRom30,
	const double *inmem_convolutionKernel00_mappedRom40,
	const double *inmem_convolutionKernel00_mappedRom50,
	const double *inmem_convolutionKernel00_mappedRom60,
	const double *inmem_convolutionKernel00_mappedRom70,
	const double *inmem_convolutionKernel00_mappedRom80,
	const double *inmem_convolutionKernel00_mappedRom90,
	const double *inmem_convolutionKernel10_mappedRom00,
	const double *inmem_convolutionKernel10_mappedRom01,
	const double *inmem_convolutionKernel10_mappedRom010,
	const double *inmem_convolutionKernel10_mappedRom011,
	const double *inmem_convolutionKernel10_mappedRom012,
	const double *inmem_convolutionKernel10_mappedRom013,
	const double *inmem_convolutionKernel10_mappedRom014,
	const double *inmem_convolutionKernel10_mappedRom015,
	const double *inmem_convolutionKernel10_mappedRom016,
	const double *inmem_convolutionKernel10_mappedRom017,
	const double *inmem_convolutionKernel10_mappedRom018,
	const double *inmem_convolutionKernel10_mappedRom019,
	const double *inmem_convolutionKernel10_mappedRom02,
	const double *inmem_convolutionKernel10_mappedRom03,
	const double *inmem_convolutionKernel10_mappedRom04,
	const double *inmem_convolutionKernel10_mappedRom05,
	const double *inmem_convolutionKernel10_mappedRom06,
	const double *inmem_convolutionKernel10_mappedRom07,
	const double *inmem_convolutionKernel10_mappedRom08,
	const double *inmem_convolutionKernel10_mappedRom09,
	const double *inmem_fully_connected_fully_connected_bias,
	const double *inmem_fully_connected_mappedRom0,
	const double *inmem_fully_connected_mappedRom1,
	const double *inmem_fully_connected_mappedRom10,
	const double *inmem_fully_connected_mappedRom11,
	const double *inmem_fully_connected_mappedRom12,
	const double *inmem_fully_connected_mappedRom13,
	const double *inmem_fully_connected_mappedRom14,
	const double *inmem_fully_connected_mappedRom15,
	const double *inmem_fully_connected_mappedRom16,
	const double *inmem_fully_connected_mappedRom17,
	const double *inmem_fully_connected_mappedRom18,
	const double *inmem_fully_connected_mappedRom19,
	const double *inmem_fully_connected_mappedRom2,
	const double *inmem_fully_connected_mappedRom20,
	const double *inmem_fully_connected_mappedRom21,
	const double *inmem_fully_connected_mappedRom22,
	const double *inmem_fully_connected_mappedRom23,
	const double *inmem_fully_connected_mappedRom24,
	const double *inmem_fully_connected_mappedRom25,
	const double *inmem_fully_connected_mappedRom26,
	const double *inmem_fully_connected_mappedRom27,
	const double *inmem_fully_connected_mappedRom28,
	const double *inmem_fully_connected_mappedRom29,
	const double *inmem_fully_connected_mappedRom3,
	const double *inmem_fully_connected_mappedRom30,
	const double *inmem_fully_connected_mappedRom31,
	const double *inmem_fully_connected_mappedRom32,
	const double *inmem_fully_connected_mappedRom33,
	const double *inmem_fully_connected_mappedRom34,
	const double *inmem_fully_connected_mappedRom35,
	const double *inmem_fully_connected_mappedRom36,
	const double *inmem_fully_connected_mappedRom37,
	const double *inmem_fully_connected_mappedRom38,
	const double *inmem_fully_connected_mappedRom39,
	const double *inmem_fully_connected_mappedRom4,
	const double *inmem_fully_connected_mappedRom40,
	const double *inmem_fully_connected_mappedRom41,
	const double *inmem_fully_connected_mappedRom42,
	const double *inmem_fully_connected_mappedRom43,
	const double *inmem_fully_connected_mappedRom44,
	const double *inmem_fully_connected_mappedRom45,
	const double *inmem_fully_connected_mappedRom46,
	const double *inmem_fully_connected_mappedRom47,
	const double *inmem_fully_connected_mappedRom48,
	const double *inmem_fully_connected_mappedRom49,
	const double *inmem_fully_connected_mappedRom5,
	const double *inmem_fully_connected_mappedRom6,
	const double *inmem_fully_connected_mappedRom7,
	const double *inmem_fully_connected_mappedRom8,
	const double *inmem_fully_connected_mappedRom9,
	const double *inmem_fully_connected2_bias,
	const double *inmem_fully_connected2_mappedRom0,
	const double *inmem_fully_connected2_mappedRom1,
	const double *inmem_fully_connected2_mappedRom10,
	const double *inmem_fully_connected2_mappedRom11,
	const double *inmem_fully_connected2_mappedRom12,
	const double *inmem_fully_connected2_mappedRom13,
	const double *inmem_fully_connected2_mappedRom14,
	const double *inmem_fully_connected2_mappedRom15,
	const double *inmem_fully_connected2_mappedRom16,
	const double *inmem_fully_connected2_mappedRom17,
	const double *inmem_fully_connected2_mappedRom18,
	const double *inmem_fully_connected2_mappedRom19,
	const double *inmem_fully_connected2_mappedRom2,
	const double *inmem_fully_connected2_mappedRom20,
	const double *inmem_fully_connected2_mappedRom21,
	const double *inmem_fully_connected2_mappedRom22,
	const double *inmem_fully_connected2_mappedRom23,
	const double *inmem_fully_connected2_mappedRom24,
	const double *inmem_fully_connected2_mappedRom25,
	const double *inmem_fully_connected2_mappedRom26,
	const double *inmem_fully_connected2_mappedRom27,
	const double *inmem_fully_connected2_mappedRom28,
	const double *inmem_fully_connected2_mappedRom29,
	const double *inmem_fully_connected2_mappedRom3,
	const double *inmem_fully_connected2_mappedRom30,
	const double *inmem_fully_connected2_mappedRom31,
	const double *inmem_fully_connected2_mappedRom32,
	const double *inmem_fully_connected2_mappedRom33,
	const double *inmem_fully_connected2_mappedRom34,
	const double *inmem_fully_connected2_mappedRom35,
	const double *inmem_fully_connected2_mappedRom36,
	const double *inmem_fully_connected2_mappedRom37,
	const double *inmem_fully_connected2_mappedRom38,
	const double *inmem_fully_connected2_mappedRom39,
	const double *inmem_fully_connected2_mappedRom4,
	const double *inmem_fully_connected2_mappedRom40,
	const double *inmem_fully_connected2_mappedRom41,
	const double *inmem_fully_connected2_mappedRom42,
	const double *inmem_fully_connected2_mappedRom43,
	const double *inmem_fully_connected2_mappedRom44,
	const double *inmem_fully_connected2_mappedRom45,
	const double *inmem_fully_connected2_mappedRom46,
	const double *inmem_fully_connected2_mappedRom47,
	const double *inmem_fully_connected2_mappedRom48,
	const double *inmem_fully_connected2_mappedRom49,
	const double *inmem_fully_connected2_mappedRom5,
	const double *inmem_fully_connected2_mappedRom6,
	const double *inmem_fully_connected2_mappedRom7,
	const double *inmem_fully_connected2_mappedRom8,
	const double *inmem_fully_connected2_mappedRom9);

/**
 * \brief Advanced static interface, structure for the engine interface 'default'
 * 
 */
typedef struct { 
	uint64_t ticks_convolutionKernel00; /**<  [in] The number of ticks for which kernel "convolutionKernel00" will run. */
	uint64_t ticks_convolutionKernel10; /**<  [in] The number of ticks for which kernel "convolutionKernel10" will run. */
	uint64_t ticks_fully_connected; /**<  [in] The number of ticks for which kernel "fully_connected" will run. */
	uint64_t ticks_fully_connected2; /**<  [in] The number of ticks for which kernel "fully_connected2" will run. */
	uint64_t ticks_maxpooling; /**<  [in] The number of ticks for which kernel "maxpooling" will run. */
	uint64_t ticks_maxpooling1; /**<  [in] The number of ticks for which kernel "maxpooling1" will run. */
	uint64_t ticks_sliding_window; /**<  [in] The number of ticks for which kernel "sliding_window" will run. */
	uint64_t ticks_sliding_window1; /**<  [in] The number of ticks for which kernel "sliding_window1" will run. */
	const void *instream_x01; /**<  [in] Stream "x01". */
	size_t instream_size_x01; /**<  [in] The size of the stream instream_x01 in bytes. */
	const void *instream_x11; /**<  [in] Stream "x11". */
	size_t instream_size_x11; /**<  [in] The size of the stream instream_x11 in bytes. */
	void *outstream_y01; /**<  [out] Stream "y01". */
	size_t outstream_size_y01; /**<  [in] The size of the stream outstream_y01 in bytes. */
	void *outstream_y11; /**<  [out] Stream "y11". */
	size_t outstream_size_y11; /**<  [in] The size of the stream outstream_y11 in bytes. */
	const double *inmem_convolutionKernel00_mappedRom00; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom00, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom10; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom10, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom100; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom100, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom110; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom110, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom120; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom120, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom130; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom130, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom140; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom140, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom150; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom150, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom160; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom160, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom170; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom170, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom180; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom180, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom190; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom190, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom20; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom20, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom30; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom30, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom40; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom40, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom50; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom50, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom60; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom60, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom70; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom70, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom80; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom80, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel00_mappedRom90; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom90, should be of size (25 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom00; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom00, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom01; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom01, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom010; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom010, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom011; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom011, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom012; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom012, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom013; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom013, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom014; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom014, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom015; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom015, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom016; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom016, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom017; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom017, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom018; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom018, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom019; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom019, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom02; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom02, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom03; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom03, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom04; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom04, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom05; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom05, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom06; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom06, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom07; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom07, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom08; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom08, should be of size (1250 * sizeof(double)). */
	const double *inmem_convolutionKernel10_mappedRom09; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom09, should be of size (1250 * sizeof(double)). */
	const double *inmem_fully_connected_fully_connected_bias; /**<  [in] Mapped ROM inmem_fully_connected_fully_connected_bias, should be of size (500 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom0; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom0, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom1; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom1, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom10; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom10, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom11; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom11, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom12; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom12, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom13; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom13, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom14; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom14, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom15; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom15, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom16; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom16, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom17; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom17, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom18; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom18, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom19; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom19, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom2; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom2, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom20; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom20, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom21; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom21, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom22; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom22, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom23; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom23, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom24; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom24, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom25; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom25, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom26; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom26, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom27; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom27, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom28; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom28, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom29; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom29, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom3; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom3, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom30; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom30, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom31; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom31, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom32; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom32, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom33; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom33, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom34; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom34, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom35; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom35, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom36; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom36, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom37; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom37, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom38; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom38, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom39; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom39, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom4; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom4, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom40; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom40, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom41; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom41, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom42; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom42, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom43; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom43, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom44; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom44, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom45; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom45, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom46; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom46, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom47; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom47, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom48; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom48, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom49; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom49, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom5; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom5, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom6; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom6, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom7; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom7, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom8; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom8, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected_mappedRom9; /**<  [in] Mapped ROM inmem_fully_connected_mappedRom9, should be of size (8000 * sizeof(double)). */
	const double *inmem_fully_connected2_bias; /**<  [in] Mapped ROM inmem_fully_connected2_bias, should be of size (10 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom0; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom0, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom1; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom1, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom10; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom10, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom11; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom11, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom12; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom12, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom13; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom13, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom14; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom14, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom15; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom15, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom16; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom16, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom17; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom17, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom18; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom18, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom19; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom19, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom2; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom2, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom20; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom20, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom21; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom21, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom22; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom22, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom23; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom23, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom24; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom24, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom25; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom25, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom26; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom26, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom27; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom27, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom28; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom28, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom29; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom29, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom3; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom3, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom30; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom30, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom31; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom31, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom32; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom32, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom33; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom33, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom34; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom34, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom35; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom35, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom36; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom36, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom37; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom37, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom38; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom38, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom39; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom39, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom4; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom4, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom40; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom40, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom41; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom41, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom42; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom42, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom43; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom43, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom44; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom44, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom45; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom45, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom46; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom46, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom47; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom47, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom48; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom48, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom49; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom49, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom5; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom5, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom6; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom6, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom7; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom7, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom8; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom8, should be of size (100 * sizeof(double)). */
	const double *inmem_fully_connected2_mappedRom9; /**<  [in] Mapped ROM inmem_fully_connected2_mappedRom9, should be of size (100 * sizeof(double)). */
} convolution_actions_t;

/**
 * \brief Advanced static function for the interface 'default'.
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in,out] interface_actions Actions to be executed.
 */
void convolution_run(
	max_engine_t *engine,
	convolution_actions_t *interface_actions);

/**
 * \brief Advanced static non-blocking function for the interface 'default'.
 *
 * Schedule the actions to run on the engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in] interface_actions Actions to be executed.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *convolution_run_nonblock(
	max_engine_t *engine,
	convolution_actions_t *interface_actions);

/**
 * \brief Group run advanced static function for the interface 'default'.
 * 
 * \param [in] group Group to use.
 * \param [in,out] interface_actions Actions to run.
 *
 * Run the actions on the first device available in the group.
 */
void convolution_run_group(max_group_t *group, convolution_actions_t *interface_actions);

/**
 * \brief Group run advanced static non-blocking function for the interface 'default'.
 * 
 *
 * Schedule the actions to run on the first device available in the group and return immediately.
 * The status of the run must be checked with ::max_wait. 
 * Note that use of ::max_nowait is prohibited with non-blocking running on groups:
 * see the ::max_run_group_nonblock documentation for more explanation.
 *
 * \param [in] group Group to use.
 * \param [in] interface_actions Actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *convolution_run_group_nonblock(max_group_t *group, convolution_actions_t *interface_actions);

/**
 * \brief Array run advanced static function for the interface 'default'.
 * 
 * \param [in] engarray The array of devices to use.
 * \param [in,out] interface_actions The array of actions to run.
 *
 * Run the array of actions on the array of engines.  The length of interface_actions
 * must match the size of engarray.
 */
void convolution_run_array(max_engarray_t *engarray, convolution_actions_t *interface_actions[]);

/**
 * \brief Array run advanced static non-blocking function for the interface 'default'.
 * 
 *
 * Schedule to run the array of actions on the array of engines, and return immediately.
 * The length of interface_actions must match the size of engarray.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * \param [in] engarray The array of devices to use.
 * \param [in] interface_actions The array of actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *convolution_run_array_nonblock(max_engarray_t *engarray, convolution_actions_t *interface_actions[]);

/**
 * \brief Converts a static-interface action struct into a dynamic-interface max_actions_t struct.
 *
 * Note that this is an internal utility function used by other functions in the static interface.
 *
 * \param [in] maxfile The maxfile to use.
 * \param [in] interface_actions The interface-specific actions to run.
 * \return The dynamic-interface actions to run, or NULL in case of error.
 */
max_actions_t* convolution_convert(max_file_t *maxfile, convolution_actions_t *interface_actions);

/**
 * \brief Initialise a maxfile.
 */
max_file_t* convolution_init(void);

/* Error handling functions */
int convolution_has_errors(void);
const char* convolution_get_errors(void);
void convolution_clear_errors(void);
/* Free statically allocated maxfile data */
void convolution_free(void);
/* returns: -1 = error running command; 0 = no error reported */
int convolution_simulator_start(void);
/* returns: -1 = error running command; 0 = no error reported */
int convolution_simulator_stop(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* SLIC_DECLARATIONS_convolution_H */

