/**\file */
#ifndef SLIC_DECLARATIONS_convolution_H
#define SLIC_DECLARATIONS_convolution_H
#include "MaxSLiCInterface.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */



/*----------------------------------------------------------------------------*/
/*---------------------------- Interface default -----------------------------*/
/*----------------------------------------------------------------------------*/




/**
 * \brief Basic static function for the interface 'default'.
 * 
 * \param [in] ticks_convolutionKernel00 The number of ticks for which kernel "convolutionKernel00" will run.
 * \param [in] ticks_convolutionKernel10 The number of ticks for which kernel "convolutionKernel10" will run.
 * \param [in] ticks_fully_connected01 The number of ticks for which kernel "fully_connected01" will run.
 * \param [in] ticks_fully_connected11 The number of ticks for which kernel "fully_connected11" will run.
 * \param [in] ticks_maxpooling00 The number of ticks for which kernel "maxpooling00" will run.
 * \param [in] ticks_maxpooling10 The number of ticks for which kernel "maxpooling10" will run.
 * \param [in] ticks_sliding_window00 The number of ticks for which kernel "sliding_window00" will run.
 * \param [in] ticks_sliding_window10 The number of ticks for which kernel "sliding_window10" will run.
 * \param [in] instream_x01 Stream "x01".
 * \param [in] instream_size_x01 The size of the stream instream_x01 in bytes.
 * \param [in] instream_x11 Stream "x11".
 * \param [in] instream_size_x11 The size of the stream instream_x11 in bytes.
 * \param [out] outstream_y01 Stream "y01".
 * \param [in] outstream_size_y01 The size of the stream outstream_y01 in bytes.
 * \param [out] outstream_y11 Stream "y11".
 * \param [in] outstream_size_y11 The size of the stream outstream_y11 in bytes.
 * \param [in] inmem_convolutionKernel00_bias Mapped ROM inmem_convolutionKernel00_bias, should be of size (20 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom0 Mapped ROM inmem_convolutionKernel00_mappedRom0, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom1 Mapped ROM inmem_convolutionKernel00_mappedRom1, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom10 Mapped ROM inmem_convolutionKernel00_mappedRom10, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom11 Mapped ROM inmem_convolutionKernel00_mappedRom11, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom12 Mapped ROM inmem_convolutionKernel00_mappedRom12, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom13 Mapped ROM inmem_convolutionKernel00_mappedRom13, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom14 Mapped ROM inmem_convolutionKernel00_mappedRom14, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom15 Mapped ROM inmem_convolutionKernel00_mappedRom15, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom16 Mapped ROM inmem_convolutionKernel00_mappedRom16, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom17 Mapped ROM inmem_convolutionKernel00_mappedRom17, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom18 Mapped ROM inmem_convolutionKernel00_mappedRom18, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom19 Mapped ROM inmem_convolutionKernel00_mappedRom19, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom2 Mapped ROM inmem_convolutionKernel00_mappedRom2, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom20 Mapped ROM inmem_convolutionKernel00_mappedRom20, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom21 Mapped ROM inmem_convolutionKernel00_mappedRom21, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom22 Mapped ROM inmem_convolutionKernel00_mappedRom22, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom23 Mapped ROM inmem_convolutionKernel00_mappedRom23, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom24 Mapped ROM inmem_convolutionKernel00_mappedRom24, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom25 Mapped ROM inmem_convolutionKernel00_mappedRom25, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom26 Mapped ROM inmem_convolutionKernel00_mappedRom26, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom27 Mapped ROM inmem_convolutionKernel00_mappedRom27, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom28 Mapped ROM inmem_convolutionKernel00_mappedRom28, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom29 Mapped ROM inmem_convolutionKernel00_mappedRom29, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom3 Mapped ROM inmem_convolutionKernel00_mappedRom3, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom30 Mapped ROM inmem_convolutionKernel00_mappedRom30, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom31 Mapped ROM inmem_convolutionKernel00_mappedRom31, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom32 Mapped ROM inmem_convolutionKernel00_mappedRom32, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom33 Mapped ROM inmem_convolutionKernel00_mappedRom33, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom34 Mapped ROM inmem_convolutionKernel00_mappedRom34, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom4 Mapped ROM inmem_convolutionKernel00_mappedRom4, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom5 Mapped ROM inmem_convolutionKernel00_mappedRom5, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom6 Mapped ROM inmem_convolutionKernel00_mappedRom6, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom7 Mapped ROM inmem_convolutionKernel00_mappedRom7, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom8 Mapped ROM inmem_convolutionKernel00_mappedRom8, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom9 Mapped ROM inmem_convolutionKernel00_mappedRom9, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel10_bias Mapped ROM inmem_convolutionKernel10_bias, should be of size (1000 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom0 Mapped ROM inmem_convolutionKernel10_mappedRom0, should be of size (2000 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel10_mappedRom1 Mapped ROM inmem_convolutionKernel10_mappedRom1, should be of size (2000 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel10_mappedRom2 Mapped ROM inmem_convolutionKernel10_mappedRom2, should be of size (2000 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel10_mappedRom3 Mapped ROM inmem_convolutionKernel10_mappedRom3, should be of size (2000 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel10_mappedRom4 Mapped ROM inmem_convolutionKernel10_mappedRom4, should be of size (2000 * sizeof(uint64_t)).
 * \param [in] inmem_fully_connected01_fully_connected_bias Mapped ROM inmem_fully_connected01_fully_connected_bias, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom0 Mapped ROM inmem_fully_connected01_mappedRom0, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom1 Mapped ROM inmem_fully_connected01_mappedRom1, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom2 Mapped ROM inmem_fully_connected01_mappedRom2, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom3 Mapped ROM inmem_fully_connected01_mappedRom3, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom4 Mapped ROM inmem_fully_connected01_mappedRom4, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom5 Mapped ROM inmem_fully_connected01_mappedRom5, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom6 Mapped ROM inmem_fully_connected01_mappedRom6, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom7 Mapped ROM inmem_fully_connected01_mappedRom7, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom8 Mapped ROM inmem_fully_connected01_mappedRom8, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom9 Mapped ROM inmem_fully_connected01_mappedRom9, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected11_fully_connected_bias Mapped ROM inmem_fully_connected11_fully_connected_bias, should be of size (10 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom0 Mapped ROM inmem_fully_connected11_mappedRom0, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom1 Mapped ROM inmem_fully_connected11_mappedRom1, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom2 Mapped ROM inmem_fully_connected11_mappedRom2, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom3 Mapped ROM inmem_fully_connected11_mappedRom3, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom4 Mapped ROM inmem_fully_connected11_mappedRom4, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom5 Mapped ROM inmem_fully_connected11_mappedRom5, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom6 Mapped ROM inmem_fully_connected11_mappedRom6, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom7 Mapped ROM inmem_fully_connected11_mappedRom7, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom8 Mapped ROM inmem_fully_connected11_mappedRom8, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom9 Mapped ROM inmem_fully_connected11_mappedRom9, should be of size (500 * sizeof(double)).
 */
void convolution(
	uint64_t ticks_convolutionKernel00,
	uint64_t ticks_convolutionKernel10,
	uint64_t ticks_fully_connected01,
	uint64_t ticks_fully_connected11,
	uint64_t ticks_maxpooling00,
	uint64_t ticks_maxpooling10,
	uint64_t ticks_sliding_window00,
	uint64_t ticks_sliding_window10,
	const void *instream_x01,
	size_t instream_size_x01,
	const void *instream_x11,
	size_t instream_size_x11,
	void *outstream_y01,
	size_t outstream_size_y01,
	void *outstream_y11,
	size_t outstream_size_y11,
	const double *inmem_convolutionKernel00_bias,
	const uint64_t *inmem_convolutionKernel00_mappedRom0,
	const uint64_t *inmem_convolutionKernel00_mappedRom1,
	const uint64_t *inmem_convolutionKernel00_mappedRom10,
	const uint64_t *inmem_convolutionKernel00_mappedRom11,
	const uint64_t *inmem_convolutionKernel00_mappedRom12,
	const uint64_t *inmem_convolutionKernel00_mappedRom13,
	const uint64_t *inmem_convolutionKernel00_mappedRom14,
	const uint64_t *inmem_convolutionKernel00_mappedRom15,
	const uint64_t *inmem_convolutionKernel00_mappedRom16,
	const uint64_t *inmem_convolutionKernel00_mappedRom17,
	const uint64_t *inmem_convolutionKernel00_mappedRom18,
	const uint64_t *inmem_convolutionKernel00_mappedRom19,
	const uint64_t *inmem_convolutionKernel00_mappedRom2,
	const uint64_t *inmem_convolutionKernel00_mappedRom20,
	const uint64_t *inmem_convolutionKernel00_mappedRom21,
	const uint64_t *inmem_convolutionKernel00_mappedRom22,
	const uint64_t *inmem_convolutionKernel00_mappedRom23,
	const uint64_t *inmem_convolutionKernel00_mappedRom24,
	const uint64_t *inmem_convolutionKernel00_mappedRom25,
	const uint64_t *inmem_convolutionKernel00_mappedRom26,
	const uint64_t *inmem_convolutionKernel00_mappedRom27,
	const uint64_t *inmem_convolutionKernel00_mappedRom28,
	const uint64_t *inmem_convolutionKernel00_mappedRom29,
	const uint64_t *inmem_convolutionKernel00_mappedRom3,
	const uint64_t *inmem_convolutionKernel00_mappedRom30,
	const uint64_t *inmem_convolutionKernel00_mappedRom31,
	const uint64_t *inmem_convolutionKernel00_mappedRom32,
	const uint64_t *inmem_convolutionKernel00_mappedRom33,
	const uint64_t *inmem_convolutionKernel00_mappedRom34,
	const uint64_t *inmem_convolutionKernel00_mappedRom4,
	const uint64_t *inmem_convolutionKernel00_mappedRom5,
	const uint64_t *inmem_convolutionKernel00_mappedRom6,
	const uint64_t *inmem_convolutionKernel00_mappedRom7,
	const uint64_t *inmem_convolutionKernel00_mappedRom8,
	const uint64_t *inmem_convolutionKernel00_mappedRom9,
	const double *inmem_convolutionKernel10_bias,
	const uint64_t *inmem_convolutionKernel10_mappedRom0,
	const uint64_t *inmem_convolutionKernel10_mappedRom1,
	const uint64_t *inmem_convolutionKernel10_mappedRom2,
	const uint64_t *inmem_convolutionKernel10_mappedRom3,
	const uint64_t *inmem_convolutionKernel10_mappedRom4,
	const double *inmem_fully_connected01_fully_connected_bias,
	const double *inmem_fully_connected01_mappedRom0,
	const double *inmem_fully_connected01_mappedRom1,
	const double *inmem_fully_connected01_mappedRom2,
	const double *inmem_fully_connected01_mappedRom3,
	const double *inmem_fully_connected01_mappedRom4,
	const double *inmem_fully_connected01_mappedRom5,
	const double *inmem_fully_connected01_mappedRom6,
	const double *inmem_fully_connected01_mappedRom7,
	const double *inmem_fully_connected01_mappedRom8,
	const double *inmem_fully_connected01_mappedRom9,
	const double *inmem_fully_connected11_fully_connected_bias,
	const double *inmem_fully_connected11_mappedRom0,
	const double *inmem_fully_connected11_mappedRom1,
	const double *inmem_fully_connected11_mappedRom2,
	const double *inmem_fully_connected11_mappedRom3,
	const double *inmem_fully_connected11_mappedRom4,
	const double *inmem_fully_connected11_mappedRom5,
	const double *inmem_fully_connected11_mappedRom6,
	const double *inmem_fully_connected11_mappedRom7,
	const double *inmem_fully_connected11_mappedRom8,
	const double *inmem_fully_connected11_mappedRom9);

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
 * \param [in] ticks_fully_connected01 The number of ticks for which kernel "fully_connected01" will run.
 * \param [in] ticks_fully_connected11 The number of ticks for which kernel "fully_connected11" will run.
 * \param [in] ticks_maxpooling00 The number of ticks for which kernel "maxpooling00" will run.
 * \param [in] ticks_maxpooling10 The number of ticks for which kernel "maxpooling10" will run.
 * \param [in] ticks_sliding_window00 The number of ticks for which kernel "sliding_window00" will run.
 * \param [in] ticks_sliding_window10 The number of ticks for which kernel "sliding_window10" will run.
 * \param [in] instream_x01 Stream "x01".
 * \param [in] instream_size_x01 The size of the stream instream_x01 in bytes.
 * \param [in] instream_x11 Stream "x11".
 * \param [in] instream_size_x11 The size of the stream instream_x11 in bytes.
 * \param [out] outstream_y01 Stream "y01".
 * \param [in] outstream_size_y01 The size of the stream outstream_y01 in bytes.
 * \param [out] outstream_y11 Stream "y11".
 * \param [in] outstream_size_y11 The size of the stream outstream_y11 in bytes.
 * \param [in] inmem_convolutionKernel00_bias Mapped ROM inmem_convolutionKernel00_bias, should be of size (20 * sizeof(double)).
 * \param [in] inmem_convolutionKernel00_mappedRom0 Mapped ROM inmem_convolutionKernel00_mappedRom0, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom1 Mapped ROM inmem_convolutionKernel00_mappedRom1, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom10 Mapped ROM inmem_convolutionKernel00_mappedRom10, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom11 Mapped ROM inmem_convolutionKernel00_mappedRom11, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom12 Mapped ROM inmem_convolutionKernel00_mappedRom12, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom13 Mapped ROM inmem_convolutionKernel00_mappedRom13, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom14 Mapped ROM inmem_convolutionKernel00_mappedRom14, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom15 Mapped ROM inmem_convolutionKernel00_mappedRom15, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom16 Mapped ROM inmem_convolutionKernel00_mappedRom16, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom17 Mapped ROM inmem_convolutionKernel00_mappedRom17, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom18 Mapped ROM inmem_convolutionKernel00_mappedRom18, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom19 Mapped ROM inmem_convolutionKernel00_mappedRom19, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom2 Mapped ROM inmem_convolutionKernel00_mappedRom2, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom20 Mapped ROM inmem_convolutionKernel00_mappedRom20, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom21 Mapped ROM inmem_convolutionKernel00_mappedRom21, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom22 Mapped ROM inmem_convolutionKernel00_mappedRom22, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom23 Mapped ROM inmem_convolutionKernel00_mappedRom23, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom24 Mapped ROM inmem_convolutionKernel00_mappedRom24, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom25 Mapped ROM inmem_convolutionKernel00_mappedRom25, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom26 Mapped ROM inmem_convolutionKernel00_mappedRom26, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom27 Mapped ROM inmem_convolutionKernel00_mappedRom27, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom28 Mapped ROM inmem_convolutionKernel00_mappedRom28, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom29 Mapped ROM inmem_convolutionKernel00_mappedRom29, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom3 Mapped ROM inmem_convolutionKernel00_mappedRom3, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom30 Mapped ROM inmem_convolutionKernel00_mappedRom30, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom31 Mapped ROM inmem_convolutionKernel00_mappedRom31, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom32 Mapped ROM inmem_convolutionKernel00_mappedRom32, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom33 Mapped ROM inmem_convolutionKernel00_mappedRom33, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom34 Mapped ROM inmem_convolutionKernel00_mappedRom34, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom4 Mapped ROM inmem_convolutionKernel00_mappedRom4, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom5 Mapped ROM inmem_convolutionKernel00_mappedRom5, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom6 Mapped ROM inmem_convolutionKernel00_mappedRom6, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom7 Mapped ROM inmem_convolutionKernel00_mappedRom7, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom8 Mapped ROM inmem_convolutionKernel00_mappedRom8, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel00_mappedRom9 Mapped ROM inmem_convolutionKernel00_mappedRom9, should be of size (4 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel10_bias Mapped ROM inmem_convolutionKernel10_bias, should be of size (1000 * sizeof(double)).
 * \param [in] inmem_convolutionKernel10_mappedRom0 Mapped ROM inmem_convolutionKernel10_mappedRom0, should be of size (2000 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel10_mappedRom1 Mapped ROM inmem_convolutionKernel10_mappedRom1, should be of size (2000 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel10_mappedRom2 Mapped ROM inmem_convolutionKernel10_mappedRom2, should be of size (2000 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel10_mappedRom3 Mapped ROM inmem_convolutionKernel10_mappedRom3, should be of size (2000 * sizeof(uint64_t)).
 * \param [in] inmem_convolutionKernel10_mappedRom4 Mapped ROM inmem_convolutionKernel10_mappedRom4, should be of size (2000 * sizeof(uint64_t)).
 * \param [in] inmem_fully_connected01_fully_connected_bias Mapped ROM inmem_fully_connected01_fully_connected_bias, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom0 Mapped ROM inmem_fully_connected01_mappedRom0, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom1 Mapped ROM inmem_fully_connected01_mappedRom1, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom2 Mapped ROM inmem_fully_connected01_mappedRom2, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom3 Mapped ROM inmem_fully_connected01_mappedRom3, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom4 Mapped ROM inmem_fully_connected01_mappedRom4, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom5 Mapped ROM inmem_fully_connected01_mappedRom5, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom6 Mapped ROM inmem_fully_connected01_mappedRom6, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom7 Mapped ROM inmem_fully_connected01_mappedRom7, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom8 Mapped ROM inmem_fully_connected01_mappedRom8, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected01_mappedRom9 Mapped ROM inmem_fully_connected01_mappedRom9, should be of size (40000 * sizeof(double)).
 * \param [in] inmem_fully_connected11_fully_connected_bias Mapped ROM inmem_fully_connected11_fully_connected_bias, should be of size (10 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom0 Mapped ROM inmem_fully_connected11_mappedRom0, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom1 Mapped ROM inmem_fully_connected11_mappedRom1, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom2 Mapped ROM inmem_fully_connected11_mappedRom2, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom3 Mapped ROM inmem_fully_connected11_mappedRom3, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom4 Mapped ROM inmem_fully_connected11_mappedRom4, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom5 Mapped ROM inmem_fully_connected11_mappedRom5, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom6 Mapped ROM inmem_fully_connected11_mappedRom6, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom7 Mapped ROM inmem_fully_connected11_mappedRom7, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom8 Mapped ROM inmem_fully_connected11_mappedRom8, should be of size (500 * sizeof(double)).
 * \param [in] inmem_fully_connected11_mappedRom9 Mapped ROM inmem_fully_connected11_mappedRom9, should be of size (500 * sizeof(double)).
 * \return A handle on the execution status, or NULL in case of error.
 */
max_run_t *convolution_nonblock(
	uint64_t ticks_convolutionKernel00,
	uint64_t ticks_convolutionKernel10,
	uint64_t ticks_fully_connected01,
	uint64_t ticks_fully_connected11,
	uint64_t ticks_maxpooling00,
	uint64_t ticks_maxpooling10,
	uint64_t ticks_sliding_window00,
	uint64_t ticks_sliding_window10,
	const void *instream_x01,
	size_t instream_size_x01,
	const void *instream_x11,
	size_t instream_size_x11,
	void *outstream_y01,
	size_t outstream_size_y01,
	void *outstream_y11,
	size_t outstream_size_y11,
	const double *inmem_convolutionKernel00_bias,
	const uint64_t *inmem_convolutionKernel00_mappedRom0,
	const uint64_t *inmem_convolutionKernel00_mappedRom1,
	const uint64_t *inmem_convolutionKernel00_mappedRom10,
	const uint64_t *inmem_convolutionKernel00_mappedRom11,
	const uint64_t *inmem_convolutionKernel00_mappedRom12,
	const uint64_t *inmem_convolutionKernel00_mappedRom13,
	const uint64_t *inmem_convolutionKernel00_mappedRom14,
	const uint64_t *inmem_convolutionKernel00_mappedRom15,
	const uint64_t *inmem_convolutionKernel00_mappedRom16,
	const uint64_t *inmem_convolutionKernel00_mappedRom17,
	const uint64_t *inmem_convolutionKernel00_mappedRom18,
	const uint64_t *inmem_convolutionKernel00_mappedRom19,
	const uint64_t *inmem_convolutionKernel00_mappedRom2,
	const uint64_t *inmem_convolutionKernel00_mappedRom20,
	const uint64_t *inmem_convolutionKernel00_mappedRom21,
	const uint64_t *inmem_convolutionKernel00_mappedRom22,
	const uint64_t *inmem_convolutionKernel00_mappedRom23,
	const uint64_t *inmem_convolutionKernel00_mappedRom24,
	const uint64_t *inmem_convolutionKernel00_mappedRom25,
	const uint64_t *inmem_convolutionKernel00_mappedRom26,
	const uint64_t *inmem_convolutionKernel00_mappedRom27,
	const uint64_t *inmem_convolutionKernel00_mappedRom28,
	const uint64_t *inmem_convolutionKernel00_mappedRom29,
	const uint64_t *inmem_convolutionKernel00_mappedRom3,
	const uint64_t *inmem_convolutionKernel00_mappedRom30,
	const uint64_t *inmem_convolutionKernel00_mappedRom31,
	const uint64_t *inmem_convolutionKernel00_mappedRom32,
	const uint64_t *inmem_convolutionKernel00_mappedRom33,
	const uint64_t *inmem_convolutionKernel00_mappedRom34,
	const uint64_t *inmem_convolutionKernel00_mappedRom4,
	const uint64_t *inmem_convolutionKernel00_mappedRom5,
	const uint64_t *inmem_convolutionKernel00_mappedRom6,
	const uint64_t *inmem_convolutionKernel00_mappedRom7,
	const uint64_t *inmem_convolutionKernel00_mappedRom8,
	const uint64_t *inmem_convolutionKernel00_mappedRom9,
	const double *inmem_convolutionKernel10_bias,
	const uint64_t *inmem_convolutionKernel10_mappedRom0,
	const uint64_t *inmem_convolutionKernel10_mappedRom1,
	const uint64_t *inmem_convolutionKernel10_mappedRom2,
	const uint64_t *inmem_convolutionKernel10_mappedRom3,
	const uint64_t *inmem_convolutionKernel10_mappedRom4,
	const double *inmem_fully_connected01_fully_connected_bias,
	const double *inmem_fully_connected01_mappedRom0,
	const double *inmem_fully_connected01_mappedRom1,
	const double *inmem_fully_connected01_mappedRom2,
	const double *inmem_fully_connected01_mappedRom3,
	const double *inmem_fully_connected01_mappedRom4,
	const double *inmem_fully_connected01_mappedRom5,
	const double *inmem_fully_connected01_mappedRom6,
	const double *inmem_fully_connected01_mappedRom7,
	const double *inmem_fully_connected01_mappedRom8,
	const double *inmem_fully_connected01_mappedRom9,
	const double *inmem_fully_connected11_fully_connected_bias,
	const double *inmem_fully_connected11_mappedRom0,
	const double *inmem_fully_connected11_mappedRom1,
	const double *inmem_fully_connected11_mappedRom2,
	const double *inmem_fully_connected11_mappedRom3,
	const double *inmem_fully_connected11_mappedRom4,
	const double *inmem_fully_connected11_mappedRom5,
	const double *inmem_fully_connected11_mappedRom6,
	const double *inmem_fully_connected11_mappedRom7,
	const double *inmem_fully_connected11_mappedRom8,
	const double *inmem_fully_connected11_mappedRom9);

/**
 * \brief Advanced static interface, structure for the engine interface 'default'
 * 
 */
typedef struct { 
	uint64_t ticks_convolutionKernel00; /**<  [in] The number of ticks for which kernel "convolutionKernel00" will run. */
	uint64_t ticks_convolutionKernel10; /**<  [in] The number of ticks for which kernel "convolutionKernel10" will run. */
	uint64_t ticks_fully_connected01; /**<  [in] The number of ticks for which kernel "fully_connected01" will run. */
	uint64_t ticks_fully_connected11; /**<  [in] The number of ticks for which kernel "fully_connected11" will run. */
	uint64_t ticks_maxpooling00; /**<  [in] The number of ticks for which kernel "maxpooling00" will run. */
	uint64_t ticks_maxpooling10; /**<  [in] The number of ticks for which kernel "maxpooling10" will run. */
	uint64_t ticks_sliding_window00; /**<  [in] The number of ticks for which kernel "sliding_window00" will run. */
	uint64_t ticks_sliding_window10; /**<  [in] The number of ticks for which kernel "sliding_window10" will run. */
	const void *instream_x01; /**<  [in] Stream "x01". */
	size_t instream_size_x01; /**<  [in] The size of the stream instream_x01 in bytes. */
	const void *instream_x11; /**<  [in] Stream "x11". */
	size_t instream_size_x11; /**<  [in] The size of the stream instream_x11 in bytes. */
	void *outstream_y01; /**<  [out] Stream "y01". */
	size_t outstream_size_y01; /**<  [in] The size of the stream outstream_y01 in bytes. */
	void *outstream_y11; /**<  [out] Stream "y11". */
	size_t outstream_size_y11; /**<  [in] The size of the stream outstream_y11 in bytes. */
	const double *inmem_convolutionKernel00_bias; /**<  [in] Mapped ROM inmem_convolutionKernel00_bias, should be of size (20 * sizeof(double)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom0; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom0, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom1; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom1, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom10; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom10, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom11; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom11, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom12; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom12, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom13; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom13, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom14; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom14, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom15; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom15, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom16; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom16, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom17; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom17, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom18; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom18, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom19; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom19, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom2; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom2, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom20; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom20, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom21; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom21, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom22; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom22, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom23; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom23, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom24; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom24, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom25; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom25, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom26; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom26, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom27; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom27, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom28; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom28, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom29; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom29, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom3; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom3, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom30; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom30, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom31; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom31, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom32; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom32, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom33; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom33, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom34; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom34, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom4; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom4, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom5; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom5, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom6; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom6, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom7; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom7, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom8; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom8, should be of size (4 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel00_mappedRom9; /**<  [in] Mapped ROM inmem_convolutionKernel00_mappedRom9, should be of size (4 * sizeof(uint64_t)). */
	const double *inmem_convolutionKernel10_bias; /**<  [in] Mapped ROM inmem_convolutionKernel10_bias, should be of size (1000 * sizeof(double)). */
	const uint64_t *inmem_convolutionKernel10_mappedRom0; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom0, should be of size (2000 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel10_mappedRom1; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom1, should be of size (2000 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel10_mappedRom2; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom2, should be of size (2000 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel10_mappedRom3; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom3, should be of size (2000 * sizeof(uint64_t)). */
	const uint64_t *inmem_convolutionKernel10_mappedRom4; /**<  [in] Mapped ROM inmem_convolutionKernel10_mappedRom4, should be of size (2000 * sizeof(uint64_t)). */
	const double *inmem_fully_connected01_fully_connected_bias; /**<  [in] Mapped ROM inmem_fully_connected01_fully_connected_bias, should be of size (500 * sizeof(double)). */
	const double *inmem_fully_connected01_mappedRom0; /**<  [in] Mapped ROM inmem_fully_connected01_mappedRom0, should be of size (40000 * sizeof(double)). */
	const double *inmem_fully_connected01_mappedRom1; /**<  [in] Mapped ROM inmem_fully_connected01_mappedRom1, should be of size (40000 * sizeof(double)). */
	const double *inmem_fully_connected01_mappedRom2; /**<  [in] Mapped ROM inmem_fully_connected01_mappedRom2, should be of size (40000 * sizeof(double)). */
	const double *inmem_fully_connected01_mappedRom3; /**<  [in] Mapped ROM inmem_fully_connected01_mappedRom3, should be of size (40000 * sizeof(double)). */
	const double *inmem_fully_connected01_mappedRom4; /**<  [in] Mapped ROM inmem_fully_connected01_mappedRom4, should be of size (40000 * sizeof(double)). */
	const double *inmem_fully_connected01_mappedRom5; /**<  [in] Mapped ROM inmem_fully_connected01_mappedRom5, should be of size (40000 * sizeof(double)). */
	const double *inmem_fully_connected01_mappedRom6; /**<  [in] Mapped ROM inmem_fully_connected01_mappedRom6, should be of size (40000 * sizeof(double)). */
	const double *inmem_fully_connected01_mappedRom7; /**<  [in] Mapped ROM inmem_fully_connected01_mappedRom7, should be of size (40000 * sizeof(double)). */
	const double *inmem_fully_connected01_mappedRom8; /**<  [in] Mapped ROM inmem_fully_connected01_mappedRom8, should be of size (40000 * sizeof(double)). */
	const double *inmem_fully_connected01_mappedRom9; /**<  [in] Mapped ROM inmem_fully_connected01_mappedRom9, should be of size (40000 * sizeof(double)). */
	const double *inmem_fully_connected11_fully_connected_bias; /**<  [in] Mapped ROM inmem_fully_connected11_fully_connected_bias, should be of size (10 * sizeof(double)). */
	const double *inmem_fully_connected11_mappedRom0; /**<  [in] Mapped ROM inmem_fully_connected11_mappedRom0, should be of size (500 * sizeof(double)). */
	const double *inmem_fully_connected11_mappedRom1; /**<  [in] Mapped ROM inmem_fully_connected11_mappedRom1, should be of size (500 * sizeof(double)). */
	const double *inmem_fully_connected11_mappedRom2; /**<  [in] Mapped ROM inmem_fully_connected11_mappedRom2, should be of size (500 * sizeof(double)). */
	const double *inmem_fully_connected11_mappedRom3; /**<  [in] Mapped ROM inmem_fully_connected11_mappedRom3, should be of size (500 * sizeof(double)). */
	const double *inmem_fully_connected11_mappedRom4; /**<  [in] Mapped ROM inmem_fully_connected11_mappedRom4, should be of size (500 * sizeof(double)). */
	const double *inmem_fully_connected11_mappedRom5; /**<  [in] Mapped ROM inmem_fully_connected11_mappedRom5, should be of size (500 * sizeof(double)). */
	const double *inmem_fully_connected11_mappedRom6; /**<  [in] Mapped ROM inmem_fully_connected11_mappedRom6, should be of size (500 * sizeof(double)). */
	const double *inmem_fully_connected11_mappedRom7; /**<  [in] Mapped ROM inmem_fully_connected11_mappedRom7, should be of size (500 * sizeof(double)). */
	const double *inmem_fully_connected11_mappedRom8; /**<  [in] Mapped ROM inmem_fully_connected11_mappedRom8, should be of size (500 * sizeof(double)). */
	const double *inmem_fully_connected11_mappedRom9; /**<  [in] Mapped ROM inmem_fully_connected11_mappedRom9, should be of size (500 * sizeof(double)). */
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
/* These are dummy functions for hardware builds. */
int convolution_simulator_start(void);
int convolution_simulator_stop(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* SLIC_DECLARATIONS_convolution_H */

