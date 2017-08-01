/**\file */
#ifndef SLIC_DECLARATIONS_convolution_H
#define SLIC_DECLARATIONS_convolution_H
#include "MaxSLiCInterface.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define convolution_N (28)
#define convolution_PCIE_ALIGNMENT (16)
#define convolution_fold_constant (5)


/*----------------------------------------------------------------------------*/
/*---------------------------- Interface readLMem ----------------------------*/
/*----------------------------------------------------------------------------*/




/**
 * \brief Basic static function for the interface 'readLMem'.
 * 
 * \param [in] param_size_bytes Interface Parameter "size_bytes".
 * \param [in] param_start_bytes Interface Parameter "start_bytes".
 * \param [in] ticks_buffering The number of ticks for which kernel "buffering" will run.
 * \param [in] ticks_convolutionKernel The number of ticks for which kernel "convolutionKernel" will run.
 * \param [in] ticks_convolutionKernel1 The number of ticks for which kernel "convolutionKernel1" will run.
 * \param [in] ticks_maxpooling The number of ticks for which kernel "maxpooling" will run.
 * \param [in] ticks_maxpooling2 The number of ticks for which kernel "maxpooling2" will run.
 * \param [in] ticks_second_layer The number of ticks for which kernel "second_layer" will run.
 * \param [in] inscalar_convolutionKernel_horizontal_captures Input scalar parameter "convolutionKernel.horizontal_captures".
 * \param [in] inscalar_convolutionKernel_horizontal_stride Input scalar parameter "convolutionKernel.horizontal_stride".
 * \param [in] inscalar_convolutionKernel_image_dimension Input scalar parameter "convolutionKernel.image_dimension".
 * \param [in] inscalar_convolutionKernel_kernel_dimension Input scalar parameter "convolutionKernel.kernel_dimension".
 * \param [in] inscalar_convolutionKernel_vertical_captures Input scalar parameter "convolutionKernel.vertical_captures".
 * \param [in] inscalar_convolutionKernel_vertical_stride Input scalar parameter "convolutionKernel.vertical_stride".
 * \param [in] inscalar_convolutionKernel1_horizontal_captures Input scalar parameter "convolutionKernel1.horizontal_captures".
 * \param [in] inscalar_convolutionKernel1_horizontal_stride Input scalar parameter "convolutionKernel1.horizontal_stride".
 * \param [in] inscalar_convolutionKernel1_image_dimension Input scalar parameter "convolutionKernel1.image_dimension".
 * \param [in] inscalar_convolutionKernel1_kernel_dimension Input scalar parameter "convolutionKernel1.kernel_dimension".
 * \param [in] inscalar_convolutionKernel1_vertical_captures Input scalar parameter "convolutionKernel1.vertical_captures".
 * \param [in] inscalar_convolutionKernel1_vertical_stride Input scalar parameter "convolutionKernel1.vertical_stride".
 * \param [in] instream_x01 Stream "x01".
 * \param [in] instream_size_x01 The size of the stream instream_x01 in bytes.
 * \param [in] instream_x11 Stream "x11".
 * \param [in] instream_size_x11 The size of the stream instream_x11 in bytes.
 * \param [out] outstream_toCpu The stream should be of size (param_size_bytes * 4) bytes.
 * \param [out] outstream_toCpu01 Stream "toCpu01".
 * \param [in] outstream_size_toCpu01 The size of the stream outstream_toCpu01 in bytes.
 * \param [out] outstream_toCpu11 Stream "toCpu11".
 * \param [in] outstream_size_toCpu11 The size of the stream outstream_toCpu11 in bytes.
 * \param [in] inmem_convolutionKernel_mappedRom Mapped ROM inmem_convolutionKernel_mappedRom, should be of size (500 * sizeof(double)).
 * \param [in] inmem_convolutionKernel1_mappedRom Mapped ROM inmem_convolutionKernel1_mappedRom, should be of size (500 * sizeof(double)).
 * \param [in] inmem_second_layer_mappedRom Mapped ROM inmem_second_layer_mappedRom, should be of size (25000 * sizeof(double)).
 * \param [in] lmem_address_dram_to_kernel0 Linear LMem control for "dram_to_kernel0" stream: base address, in bytes.
 * \param [in] lmem_arr_size_dram_to_kernel0 Linear LMem control for "dram_to_kernel0" stream: array size, in bytes.
 * \param [in] lmem_address_dram_to_kernel1 Linear LMem control for "dram_to_kernel1" stream: base address, in bytes.
 * \param [in] lmem_arr_size_dram_to_kernel1 Linear LMem control for "dram_to_kernel1" stream: array size, in bytes.
 * \param [in] lmem_address_host_to_dram0 Linear LMem control for "host_to_dram0" stream: base address, in bytes.
 * \param [in] lmem_arr_size_host_to_dram0 Linear LMem control for "host_to_dram0" stream: array size, in bytes.
 * \param [in] lmem_address_host_to_dram1 Linear LMem control for "host_to_dram1" stream: base address, in bytes.
 * \param [in] lmem_arr_size_host_to_dram1 Linear LMem control for "host_to_dram1" stream: array size, in bytes.
 */
void convolution_readLMem(
	int32_t param_size_bytes,
	int32_t param_start_bytes,
	uint64_t ticks_buffering,
	uint64_t ticks_convolutionKernel,
	uint64_t ticks_convolutionKernel1,
	uint64_t ticks_maxpooling,
	uint64_t ticks_maxpooling2,
	uint64_t ticks_second_layer,
	uint64_t inscalar_convolutionKernel_horizontal_captures,
	uint64_t inscalar_convolutionKernel_horizontal_stride,
	uint64_t inscalar_convolutionKernel_image_dimension,
	uint64_t inscalar_convolutionKernel_kernel_dimension,
	uint64_t inscalar_convolutionKernel_vertical_captures,
	uint64_t inscalar_convolutionKernel_vertical_stride,
	uint64_t inscalar_convolutionKernel1_horizontal_captures,
	uint64_t inscalar_convolutionKernel1_horizontal_stride,
	uint64_t inscalar_convolutionKernel1_image_dimension,
	uint64_t inscalar_convolutionKernel1_kernel_dimension,
	uint64_t inscalar_convolutionKernel1_vertical_captures,
	uint64_t inscalar_convolutionKernel1_vertical_stride,
	const void *instream_x01,
	size_t instream_size_x01,
	const void *instream_x11,
	size_t instream_size_x11,
	float *outstream_toCpu,
	void *outstream_toCpu01,
	size_t outstream_size_toCpu01,
	void *outstream_toCpu11,
	size_t outstream_size_toCpu11,
	const double *inmem_convolutionKernel_mappedRom,
	const double *inmem_convolutionKernel1_mappedRom,
	const double *inmem_second_layer_mappedRom,
	size_t lmem_address_dram_to_kernel0,
	size_t lmem_arr_size_dram_to_kernel0,
	size_t lmem_address_dram_to_kernel1,
	size_t lmem_arr_size_dram_to_kernel1,
	size_t lmem_address_host_to_dram0,
	size_t lmem_arr_size_host_to_dram0,
	size_t lmem_address_host_to_dram1,
	size_t lmem_arr_size_host_to_dram1);

/**
 * \brief Basic static non-blocking function for the interface 'readLMem'.
 * 
 * Schedule to run on an engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 * 
 * 
 * \param [in] param_size_bytes Interface Parameter "size_bytes".
 * \param [in] param_start_bytes Interface Parameter "start_bytes".
 * \param [in] ticks_buffering The number of ticks for which kernel "buffering" will run.
 * \param [in] ticks_convolutionKernel The number of ticks for which kernel "convolutionKernel" will run.
 * \param [in] ticks_convolutionKernel1 The number of ticks for which kernel "convolutionKernel1" will run.
 * \param [in] ticks_maxpooling The number of ticks for which kernel "maxpooling" will run.
 * \param [in] ticks_maxpooling2 The number of ticks for which kernel "maxpooling2" will run.
 * \param [in] ticks_second_layer The number of ticks for which kernel "second_layer" will run.
 * \param [in] inscalar_convolutionKernel_horizontal_captures Input scalar parameter "convolutionKernel.horizontal_captures".
 * \param [in] inscalar_convolutionKernel_horizontal_stride Input scalar parameter "convolutionKernel.horizontal_stride".
 * \param [in] inscalar_convolutionKernel_image_dimension Input scalar parameter "convolutionKernel.image_dimension".
 * \param [in] inscalar_convolutionKernel_kernel_dimension Input scalar parameter "convolutionKernel.kernel_dimension".
 * \param [in] inscalar_convolutionKernel_vertical_captures Input scalar parameter "convolutionKernel.vertical_captures".
 * \param [in] inscalar_convolutionKernel_vertical_stride Input scalar parameter "convolutionKernel.vertical_stride".
 * \param [in] inscalar_convolutionKernel1_horizontal_captures Input scalar parameter "convolutionKernel1.horizontal_captures".
 * \param [in] inscalar_convolutionKernel1_horizontal_stride Input scalar parameter "convolutionKernel1.horizontal_stride".
 * \param [in] inscalar_convolutionKernel1_image_dimension Input scalar parameter "convolutionKernel1.image_dimension".
 * \param [in] inscalar_convolutionKernel1_kernel_dimension Input scalar parameter "convolutionKernel1.kernel_dimension".
 * \param [in] inscalar_convolutionKernel1_vertical_captures Input scalar parameter "convolutionKernel1.vertical_captures".
 * \param [in] inscalar_convolutionKernel1_vertical_stride Input scalar parameter "convolutionKernel1.vertical_stride".
 * \param [in] instream_x01 Stream "x01".
 * \param [in] instream_size_x01 The size of the stream instream_x01 in bytes.
 * \param [in] instream_x11 Stream "x11".
 * \param [in] instream_size_x11 The size of the stream instream_x11 in bytes.
 * \param [out] outstream_toCpu The stream should be of size (param_size_bytes * 4) bytes.
 * \param [out] outstream_toCpu01 Stream "toCpu01".
 * \param [in] outstream_size_toCpu01 The size of the stream outstream_toCpu01 in bytes.
 * \param [out] outstream_toCpu11 Stream "toCpu11".
 * \param [in] outstream_size_toCpu11 The size of the stream outstream_toCpu11 in bytes.
 * \param [in] inmem_convolutionKernel_mappedRom Mapped ROM inmem_convolutionKernel_mappedRom, should be of size (500 * sizeof(double)).
 * \param [in] inmem_convolutionKernel1_mappedRom Mapped ROM inmem_convolutionKernel1_mappedRom, should be of size (500 * sizeof(double)).
 * \param [in] inmem_second_layer_mappedRom Mapped ROM inmem_second_layer_mappedRom, should be of size (25000 * sizeof(double)).
 * \param [in] lmem_address_dram_to_kernel0 Linear LMem control for "dram_to_kernel0" stream: base address, in bytes.
 * \param [in] lmem_arr_size_dram_to_kernel0 Linear LMem control for "dram_to_kernel0" stream: array size, in bytes.
 * \param [in] lmem_address_dram_to_kernel1 Linear LMem control for "dram_to_kernel1" stream: base address, in bytes.
 * \param [in] lmem_arr_size_dram_to_kernel1 Linear LMem control for "dram_to_kernel1" stream: array size, in bytes.
 * \param [in] lmem_address_host_to_dram0 Linear LMem control for "host_to_dram0" stream: base address, in bytes.
 * \param [in] lmem_arr_size_host_to_dram0 Linear LMem control for "host_to_dram0" stream: array size, in bytes.
 * \param [in] lmem_address_host_to_dram1 Linear LMem control for "host_to_dram1" stream: base address, in bytes.
 * \param [in] lmem_arr_size_host_to_dram1 Linear LMem control for "host_to_dram1" stream: array size, in bytes.
 * \return A handle on the execution status, or NULL in case of error.
 */
max_run_t *convolution_readLMem_nonblock(
	int32_t param_size_bytes,
	int32_t param_start_bytes,
	uint64_t ticks_buffering,
	uint64_t ticks_convolutionKernel,
	uint64_t ticks_convolutionKernel1,
	uint64_t ticks_maxpooling,
	uint64_t ticks_maxpooling2,
	uint64_t ticks_second_layer,
	uint64_t inscalar_convolutionKernel_horizontal_captures,
	uint64_t inscalar_convolutionKernel_horizontal_stride,
	uint64_t inscalar_convolutionKernel_image_dimension,
	uint64_t inscalar_convolutionKernel_kernel_dimension,
	uint64_t inscalar_convolutionKernel_vertical_captures,
	uint64_t inscalar_convolutionKernel_vertical_stride,
	uint64_t inscalar_convolutionKernel1_horizontal_captures,
	uint64_t inscalar_convolutionKernel1_horizontal_stride,
	uint64_t inscalar_convolutionKernel1_image_dimension,
	uint64_t inscalar_convolutionKernel1_kernel_dimension,
	uint64_t inscalar_convolutionKernel1_vertical_captures,
	uint64_t inscalar_convolutionKernel1_vertical_stride,
	const void *instream_x01,
	size_t instream_size_x01,
	const void *instream_x11,
	size_t instream_size_x11,
	float *outstream_toCpu,
	void *outstream_toCpu01,
	size_t outstream_size_toCpu01,
	void *outstream_toCpu11,
	size_t outstream_size_toCpu11,
	const double *inmem_convolutionKernel_mappedRom,
	const double *inmem_convolutionKernel1_mappedRom,
	const double *inmem_second_layer_mappedRom,
	size_t lmem_address_dram_to_kernel0,
	size_t lmem_arr_size_dram_to_kernel0,
	size_t lmem_address_dram_to_kernel1,
	size_t lmem_arr_size_dram_to_kernel1,
	size_t lmem_address_host_to_dram0,
	size_t lmem_arr_size_host_to_dram0,
	size_t lmem_address_host_to_dram1,
	size_t lmem_arr_size_host_to_dram1);

/**
 * \brief Advanced static interface, structure for the engine interface 'readLMem'
 * 
 */
typedef struct { 
	int32_t param_size_bytes; /**<  [in] Interface Parameter "size_bytes". */
	int32_t param_start_bytes; /**<  [in] Interface Parameter "start_bytes". */
	uint64_t ticks_buffering; /**<  [in] The number of ticks for which kernel "buffering" will run. */
	uint64_t ticks_convolutionKernel; /**<  [in] The number of ticks for which kernel "convolutionKernel" will run. */
	uint64_t ticks_convolutionKernel1; /**<  [in] The number of ticks for which kernel "convolutionKernel1" will run. */
	uint64_t ticks_maxpooling; /**<  [in] The number of ticks for which kernel "maxpooling" will run. */
	uint64_t ticks_maxpooling2; /**<  [in] The number of ticks for which kernel "maxpooling2" will run. */
	uint64_t ticks_second_layer; /**<  [in] The number of ticks for which kernel "second_layer" will run. */
	uint64_t inscalar_convolutionKernel_horizontal_captures; /**<  [in] Input scalar parameter "convolutionKernel.horizontal_captures". */
	uint64_t inscalar_convolutionKernel_horizontal_stride; /**<  [in] Input scalar parameter "convolutionKernel.horizontal_stride". */
	uint64_t inscalar_convolutionKernel_image_dimension; /**<  [in] Input scalar parameter "convolutionKernel.image_dimension". */
	uint64_t inscalar_convolutionKernel_kernel_dimension; /**<  [in] Input scalar parameter "convolutionKernel.kernel_dimension". */
	uint64_t inscalar_convolutionKernel_vertical_captures; /**<  [in] Input scalar parameter "convolutionKernel.vertical_captures". */
	uint64_t inscalar_convolutionKernel_vertical_stride; /**<  [in] Input scalar parameter "convolutionKernel.vertical_stride". */
	uint64_t inscalar_convolutionKernel1_horizontal_captures; /**<  [in] Input scalar parameter "convolutionKernel1.horizontal_captures". */
	uint64_t inscalar_convolutionKernel1_horizontal_stride; /**<  [in] Input scalar parameter "convolutionKernel1.horizontal_stride". */
	uint64_t inscalar_convolutionKernel1_image_dimension; /**<  [in] Input scalar parameter "convolutionKernel1.image_dimension". */
	uint64_t inscalar_convolutionKernel1_kernel_dimension; /**<  [in] Input scalar parameter "convolutionKernel1.kernel_dimension". */
	uint64_t inscalar_convolutionKernel1_vertical_captures; /**<  [in] Input scalar parameter "convolutionKernel1.vertical_captures". */
	uint64_t inscalar_convolutionKernel1_vertical_stride; /**<  [in] Input scalar parameter "convolutionKernel1.vertical_stride". */
	const void *instream_x01; /**<  [in] Stream "x01". */
	size_t instream_size_x01; /**<  [in] The size of the stream instream_x01 in bytes. */
	const void *instream_x11; /**<  [in] Stream "x11". */
	size_t instream_size_x11; /**<  [in] The size of the stream instream_x11 in bytes. */
	float *outstream_toCpu; /**<  [out] The stream should be of size (param_size_bytes * 4) bytes. */
	void *outstream_toCpu01; /**<  [out] Stream "toCpu01". */
	size_t outstream_size_toCpu01; /**<  [in] The size of the stream outstream_toCpu01 in bytes. */
	void *outstream_toCpu11; /**<  [out] Stream "toCpu11". */
	size_t outstream_size_toCpu11; /**<  [in] The size of the stream outstream_toCpu11 in bytes. */
	const double *inmem_convolutionKernel_mappedRom; /**<  [in] Mapped ROM inmem_convolutionKernel_mappedRom, should be of size (500 * sizeof(double)). */
	const double *inmem_convolutionKernel1_mappedRom; /**<  [in] Mapped ROM inmem_convolutionKernel1_mappedRom, should be of size (500 * sizeof(double)). */
	const double *inmem_second_layer_mappedRom; /**<  [in] Mapped ROM inmem_second_layer_mappedRom, should be of size (25000 * sizeof(double)). */
	size_t lmem_address_dram_to_kernel0; /**<  [in] Linear LMem control for "dram_to_kernel0" stream: base address, in bytes. */
	size_t lmem_arr_size_dram_to_kernel0; /**<  [in] Linear LMem control for "dram_to_kernel0" stream: array size, in bytes. */
	size_t lmem_address_dram_to_kernel1; /**<  [in] Linear LMem control for "dram_to_kernel1" stream: base address, in bytes. */
	size_t lmem_arr_size_dram_to_kernel1; /**<  [in] Linear LMem control for "dram_to_kernel1" stream: array size, in bytes. */
	size_t lmem_address_host_to_dram0; /**<  [in] Linear LMem control for "host_to_dram0" stream: base address, in bytes. */
	size_t lmem_arr_size_host_to_dram0; /**<  [in] Linear LMem control for "host_to_dram0" stream: array size, in bytes. */
	size_t lmem_address_host_to_dram1; /**<  [in] Linear LMem control for "host_to_dram1" stream: base address, in bytes. */
	size_t lmem_arr_size_host_to_dram1; /**<  [in] Linear LMem control for "host_to_dram1" stream: array size, in bytes. */
} convolution_readLMem_actions_t;

/**
 * \brief Advanced static function for the interface 'readLMem'.
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in,out] interface_actions Actions to be executed.
 */
void convolution_readLMem_run(
	max_engine_t *engine,
	convolution_readLMem_actions_t *interface_actions);

/**
 * \brief Advanced static non-blocking function for the interface 'readLMem'.
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
max_run_t *convolution_readLMem_run_nonblock(
	max_engine_t *engine,
	convolution_readLMem_actions_t *interface_actions);

/**
 * \brief Group run advanced static function for the interface 'readLMem'.
 * 
 * \param [in] group Group to use.
 * \param [in,out] interface_actions Actions to run.
 *
 * Run the actions on the first device available in the group.
 */
void convolution_readLMem_run_group(max_group_t *group, convolution_readLMem_actions_t *interface_actions);

/**
 * \brief Group run advanced static non-blocking function for the interface 'readLMem'.
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
max_run_t *convolution_readLMem_run_group_nonblock(max_group_t *group, convolution_readLMem_actions_t *interface_actions);

/**
 * \brief Array run advanced static function for the interface 'readLMem'.
 * 
 * \param [in] engarray The array of devices to use.
 * \param [in,out] interface_actions The array of actions to run.
 *
 * Run the array of actions on the array of engines.  The length of interface_actions
 * must match the size of engarray.
 */
void convolution_readLMem_run_array(max_engarray_t *engarray, convolution_readLMem_actions_t *interface_actions[]);

/**
 * \brief Array run advanced static non-blocking function for the interface 'readLMem'.
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
max_run_t *convolution_readLMem_run_array_nonblock(max_engarray_t *engarray, convolution_readLMem_actions_t *interface_actions[]);

/**
 * \brief Converts a static-interface action struct into a dynamic-interface max_actions_t struct.
 *
 * Note that this is an internal utility function used by other functions in the static interface.
 *
 * \param [in] maxfile The maxfile to use.
 * \param [in] interface_actions The interface-specific actions to run.
 * \return The dynamic-interface actions to run, or NULL in case of error.
 */
max_actions_t* convolution_readLMem_convert(max_file_t *maxfile, convolution_readLMem_actions_t *interface_actions);



/*----------------------------------------------------------------------------*/
/*-------------------------- Interface second_layer --------------------------*/
/*----------------------------------------------------------------------------*/




/**
 * \brief Basic static function for the interface 'second_layer'.
 * 
 * \param [in] param_size_bytes Interface Parameter "size_bytes".
 * \param [in] param_start_bytes Interface Parameter "start_bytes".
 * \param [in] ticks_buffering The number of ticks for which kernel "buffering" will run.
 * \param [in] ticks_convolutionKernel The number of ticks for which kernel "convolutionKernel" will run.
 * \param [in] ticks_convolutionKernel1 The number of ticks for which kernel "convolutionKernel1" will run.
 * \param [in] ticks_maxpooling The number of ticks for which kernel "maxpooling" will run.
 * \param [in] ticks_maxpooling2 The number of ticks for which kernel "maxpooling2" will run.
 * \param [in] ticks_second_layer The number of ticks for which kernel "second_layer" will run.
 * \param [in] inscalar_convolutionKernel_horizontal_captures Input scalar parameter "convolutionKernel.horizontal_captures".
 * \param [in] inscalar_convolutionKernel_horizontal_stride Input scalar parameter "convolutionKernel.horizontal_stride".
 * \param [in] inscalar_convolutionKernel_image_dimension Input scalar parameter "convolutionKernel.image_dimension".
 * \param [in] inscalar_convolutionKernel_kernel_dimension Input scalar parameter "convolutionKernel.kernel_dimension".
 * \param [in] inscalar_convolutionKernel_vertical_captures Input scalar parameter "convolutionKernel.vertical_captures".
 * \param [in] inscalar_convolutionKernel_vertical_stride Input scalar parameter "convolutionKernel.vertical_stride".
 * \param [in] inscalar_convolutionKernel1_horizontal_captures Input scalar parameter "convolutionKernel1.horizontal_captures".
 * \param [in] inscalar_convolutionKernel1_horizontal_stride Input scalar parameter "convolutionKernel1.horizontal_stride".
 * \param [in] inscalar_convolutionKernel1_image_dimension Input scalar parameter "convolutionKernel1.image_dimension".
 * \param [in] inscalar_convolutionKernel1_kernel_dimension Input scalar parameter "convolutionKernel1.kernel_dimension".
 * \param [in] inscalar_convolutionKernel1_vertical_captures Input scalar parameter "convolutionKernel1.vertical_captures".
 * \param [in] inscalar_convolutionKernel1_vertical_stride Input scalar parameter "convolutionKernel1.vertical_stride".
 * \param [in] instream_x01 Stream "x01".
 * \param [in] instream_size_x01 The size of the stream instream_x01 in bytes.
 * \param [in] instream_x11 Stream "x11".
 * \param [in] instream_size_x11 The size of the stream instream_x11 in bytes.
 * \param [out] outstream_toCpu Stream "toCpu".
 * \param [in] outstream_size_toCpu The size of the stream outstream_toCpu in bytes.
 * \param [out] outstream_toCpu01 Stream "toCpu01".
 * \param [in] outstream_size_toCpu01 The size of the stream outstream_toCpu01 in bytes.
 * \param [out] outstream_toCpu11 Stream "toCpu11".
 * \param [in] outstream_size_toCpu11 The size of the stream outstream_toCpu11 in bytes.
 * \param [in] inmem_convolutionKernel_mappedRom Mapped ROM inmem_convolutionKernel_mappedRom, should be of size (500 * sizeof(double)).
 * \param [in] inmem_convolutionKernel1_mappedRom Mapped ROM inmem_convolutionKernel1_mappedRom, should be of size (500 * sizeof(double)).
 * \param [in] inmem_second_layer_mappedRom Mapped ROM inmem_second_layer_mappedRom, should be of size (25000 * sizeof(double)).
 * \param [in] lmem_address_dram_to_host Linear LMem control for "dram_to_host" stream: base address, in bytes.
 * \param [in] lmem_arr_size_dram_to_host Linear LMem control for "dram_to_host" stream: array size, in bytes.
 * \param [in] lmem_address_host_to_dram0 Linear LMem control for "host_to_dram0" stream: base address, in bytes.
 * \param [in] lmem_arr_size_host_to_dram0 Linear LMem control for "host_to_dram0" stream: array size, in bytes.
 * \param [in] lmem_address_host_to_dram1 Linear LMem control for "host_to_dram1" stream: base address, in bytes.
 * \param [in] lmem_arr_size_host_to_dram1 Linear LMem control for "host_to_dram1" stream: array size, in bytes.
 */
void convolution_second_layer(
	int32_t param_size_bytes,
	int32_t param_start_bytes,
	uint64_t ticks_buffering,
	uint64_t ticks_convolutionKernel,
	uint64_t ticks_convolutionKernel1,
	uint64_t ticks_maxpooling,
	uint64_t ticks_maxpooling2,
	uint64_t ticks_second_layer,
	uint64_t inscalar_convolutionKernel_horizontal_captures,
	uint64_t inscalar_convolutionKernel_horizontal_stride,
	uint64_t inscalar_convolutionKernel_image_dimension,
	uint64_t inscalar_convolutionKernel_kernel_dimension,
	uint64_t inscalar_convolutionKernel_vertical_captures,
	uint64_t inscalar_convolutionKernel_vertical_stride,
	uint64_t inscalar_convolutionKernel1_horizontal_captures,
	uint64_t inscalar_convolutionKernel1_horizontal_stride,
	uint64_t inscalar_convolutionKernel1_image_dimension,
	uint64_t inscalar_convolutionKernel1_kernel_dimension,
	uint64_t inscalar_convolutionKernel1_vertical_captures,
	uint64_t inscalar_convolutionKernel1_vertical_stride,
	const void *instream_x01,
	size_t instream_size_x01,
	const void *instream_x11,
	size_t instream_size_x11,
	void *outstream_toCpu,
	size_t outstream_size_toCpu,
	void *outstream_toCpu01,
	size_t outstream_size_toCpu01,
	void *outstream_toCpu11,
	size_t outstream_size_toCpu11,
	const double *inmem_convolutionKernel_mappedRom,
	const double *inmem_convolutionKernel1_mappedRom,
	const double *inmem_second_layer_mappedRom,
	size_t lmem_address_dram_to_host,
	size_t lmem_arr_size_dram_to_host,
	size_t lmem_address_host_to_dram0,
	size_t lmem_arr_size_host_to_dram0,
	size_t lmem_address_host_to_dram1,
	size_t lmem_arr_size_host_to_dram1);

/**
 * \brief Basic static non-blocking function for the interface 'second_layer'.
 * 
 * Schedule to run on an engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 * 
 * 
 * \param [in] param_size_bytes Interface Parameter "size_bytes".
 * \param [in] param_start_bytes Interface Parameter "start_bytes".
 * \param [in] ticks_buffering The number of ticks for which kernel "buffering" will run.
 * \param [in] ticks_convolutionKernel The number of ticks for which kernel "convolutionKernel" will run.
 * \param [in] ticks_convolutionKernel1 The number of ticks for which kernel "convolutionKernel1" will run.
 * \param [in] ticks_maxpooling The number of ticks for which kernel "maxpooling" will run.
 * \param [in] ticks_maxpooling2 The number of ticks for which kernel "maxpooling2" will run.
 * \param [in] ticks_second_layer The number of ticks for which kernel "second_layer" will run.
 * \param [in] inscalar_convolutionKernel_horizontal_captures Input scalar parameter "convolutionKernel.horizontal_captures".
 * \param [in] inscalar_convolutionKernel_horizontal_stride Input scalar parameter "convolutionKernel.horizontal_stride".
 * \param [in] inscalar_convolutionKernel_image_dimension Input scalar parameter "convolutionKernel.image_dimension".
 * \param [in] inscalar_convolutionKernel_kernel_dimension Input scalar parameter "convolutionKernel.kernel_dimension".
 * \param [in] inscalar_convolutionKernel_vertical_captures Input scalar parameter "convolutionKernel.vertical_captures".
 * \param [in] inscalar_convolutionKernel_vertical_stride Input scalar parameter "convolutionKernel.vertical_stride".
 * \param [in] inscalar_convolutionKernel1_horizontal_captures Input scalar parameter "convolutionKernel1.horizontal_captures".
 * \param [in] inscalar_convolutionKernel1_horizontal_stride Input scalar parameter "convolutionKernel1.horizontal_stride".
 * \param [in] inscalar_convolutionKernel1_image_dimension Input scalar parameter "convolutionKernel1.image_dimension".
 * \param [in] inscalar_convolutionKernel1_kernel_dimension Input scalar parameter "convolutionKernel1.kernel_dimension".
 * \param [in] inscalar_convolutionKernel1_vertical_captures Input scalar parameter "convolutionKernel1.vertical_captures".
 * \param [in] inscalar_convolutionKernel1_vertical_stride Input scalar parameter "convolutionKernel1.vertical_stride".
 * \param [in] instream_x01 Stream "x01".
 * \param [in] instream_size_x01 The size of the stream instream_x01 in bytes.
 * \param [in] instream_x11 Stream "x11".
 * \param [in] instream_size_x11 The size of the stream instream_x11 in bytes.
 * \param [out] outstream_toCpu Stream "toCpu".
 * \param [in] outstream_size_toCpu The size of the stream outstream_toCpu in bytes.
 * \param [out] outstream_toCpu01 Stream "toCpu01".
 * \param [in] outstream_size_toCpu01 The size of the stream outstream_toCpu01 in bytes.
 * \param [out] outstream_toCpu11 Stream "toCpu11".
 * \param [in] outstream_size_toCpu11 The size of the stream outstream_toCpu11 in bytes.
 * \param [in] inmem_convolutionKernel_mappedRom Mapped ROM inmem_convolutionKernel_mappedRom, should be of size (500 * sizeof(double)).
 * \param [in] inmem_convolutionKernel1_mappedRom Mapped ROM inmem_convolutionKernel1_mappedRom, should be of size (500 * sizeof(double)).
 * \param [in] inmem_second_layer_mappedRom Mapped ROM inmem_second_layer_mappedRom, should be of size (25000 * sizeof(double)).
 * \param [in] lmem_address_dram_to_host Linear LMem control for "dram_to_host" stream: base address, in bytes.
 * \param [in] lmem_arr_size_dram_to_host Linear LMem control for "dram_to_host" stream: array size, in bytes.
 * \param [in] lmem_address_host_to_dram0 Linear LMem control for "host_to_dram0" stream: base address, in bytes.
 * \param [in] lmem_arr_size_host_to_dram0 Linear LMem control for "host_to_dram0" stream: array size, in bytes.
 * \param [in] lmem_address_host_to_dram1 Linear LMem control for "host_to_dram1" stream: base address, in bytes.
 * \param [in] lmem_arr_size_host_to_dram1 Linear LMem control for "host_to_dram1" stream: array size, in bytes.
 * \return A handle on the execution status, or NULL in case of error.
 */
max_run_t *convolution_second_layer_nonblock(
	int32_t param_size_bytes,
	int32_t param_start_bytes,
	uint64_t ticks_buffering,
	uint64_t ticks_convolutionKernel,
	uint64_t ticks_convolutionKernel1,
	uint64_t ticks_maxpooling,
	uint64_t ticks_maxpooling2,
	uint64_t ticks_second_layer,
	uint64_t inscalar_convolutionKernel_horizontal_captures,
	uint64_t inscalar_convolutionKernel_horizontal_stride,
	uint64_t inscalar_convolutionKernel_image_dimension,
	uint64_t inscalar_convolutionKernel_kernel_dimension,
	uint64_t inscalar_convolutionKernel_vertical_captures,
	uint64_t inscalar_convolutionKernel_vertical_stride,
	uint64_t inscalar_convolutionKernel1_horizontal_captures,
	uint64_t inscalar_convolutionKernel1_horizontal_stride,
	uint64_t inscalar_convolutionKernel1_image_dimension,
	uint64_t inscalar_convolutionKernel1_kernel_dimension,
	uint64_t inscalar_convolutionKernel1_vertical_captures,
	uint64_t inscalar_convolutionKernel1_vertical_stride,
	const void *instream_x01,
	size_t instream_size_x01,
	const void *instream_x11,
	size_t instream_size_x11,
	void *outstream_toCpu,
	size_t outstream_size_toCpu,
	void *outstream_toCpu01,
	size_t outstream_size_toCpu01,
	void *outstream_toCpu11,
	size_t outstream_size_toCpu11,
	const double *inmem_convolutionKernel_mappedRom,
	const double *inmem_convolutionKernel1_mappedRom,
	const double *inmem_second_layer_mappedRom,
	size_t lmem_address_dram_to_host,
	size_t lmem_arr_size_dram_to_host,
	size_t lmem_address_host_to_dram0,
	size_t lmem_arr_size_host_to_dram0,
	size_t lmem_address_host_to_dram1,
	size_t lmem_arr_size_host_to_dram1);

/**
 * \brief Advanced static interface, structure for the engine interface 'second_layer'
 * 
 */
typedef struct { 
	int32_t param_size_bytes; /**<  [in] Interface Parameter "size_bytes". */
	int32_t param_start_bytes; /**<  [in] Interface Parameter "start_bytes". */
	uint64_t ticks_buffering; /**<  [in] The number of ticks for which kernel "buffering" will run. */
	uint64_t ticks_convolutionKernel; /**<  [in] The number of ticks for which kernel "convolutionKernel" will run. */
	uint64_t ticks_convolutionKernel1; /**<  [in] The number of ticks for which kernel "convolutionKernel1" will run. */
	uint64_t ticks_maxpooling; /**<  [in] The number of ticks for which kernel "maxpooling" will run. */
	uint64_t ticks_maxpooling2; /**<  [in] The number of ticks for which kernel "maxpooling2" will run. */
	uint64_t ticks_second_layer; /**<  [in] The number of ticks for which kernel "second_layer" will run. */
	uint64_t inscalar_convolutionKernel_horizontal_captures; /**<  [in] Input scalar parameter "convolutionKernel.horizontal_captures". */
	uint64_t inscalar_convolutionKernel_horizontal_stride; /**<  [in] Input scalar parameter "convolutionKernel.horizontal_stride". */
	uint64_t inscalar_convolutionKernel_image_dimension; /**<  [in] Input scalar parameter "convolutionKernel.image_dimension". */
	uint64_t inscalar_convolutionKernel_kernel_dimension; /**<  [in] Input scalar parameter "convolutionKernel.kernel_dimension". */
	uint64_t inscalar_convolutionKernel_vertical_captures; /**<  [in] Input scalar parameter "convolutionKernel.vertical_captures". */
	uint64_t inscalar_convolutionKernel_vertical_stride; /**<  [in] Input scalar parameter "convolutionKernel.vertical_stride". */
	uint64_t inscalar_convolutionKernel1_horizontal_captures; /**<  [in] Input scalar parameter "convolutionKernel1.horizontal_captures". */
	uint64_t inscalar_convolutionKernel1_horizontal_stride; /**<  [in] Input scalar parameter "convolutionKernel1.horizontal_stride". */
	uint64_t inscalar_convolutionKernel1_image_dimension; /**<  [in] Input scalar parameter "convolutionKernel1.image_dimension". */
	uint64_t inscalar_convolutionKernel1_kernel_dimension; /**<  [in] Input scalar parameter "convolutionKernel1.kernel_dimension". */
	uint64_t inscalar_convolutionKernel1_vertical_captures; /**<  [in] Input scalar parameter "convolutionKernel1.vertical_captures". */
	uint64_t inscalar_convolutionKernel1_vertical_stride; /**<  [in] Input scalar parameter "convolutionKernel1.vertical_stride". */
	const void *instream_x01; /**<  [in] Stream "x01". */
	size_t instream_size_x01; /**<  [in] The size of the stream instream_x01 in bytes. */
	const void *instream_x11; /**<  [in] Stream "x11". */
	size_t instream_size_x11; /**<  [in] The size of the stream instream_x11 in bytes. */
	void *outstream_toCpu; /**<  [out] Stream "toCpu". */
	size_t outstream_size_toCpu; /**<  [in] The size of the stream outstream_toCpu in bytes. */
	void *outstream_toCpu01; /**<  [out] Stream "toCpu01". */
	size_t outstream_size_toCpu01; /**<  [in] The size of the stream outstream_toCpu01 in bytes. */
	void *outstream_toCpu11; /**<  [out] Stream "toCpu11". */
	size_t outstream_size_toCpu11; /**<  [in] The size of the stream outstream_toCpu11 in bytes. */
	const double *inmem_convolutionKernel_mappedRom; /**<  [in] Mapped ROM inmem_convolutionKernel_mappedRom, should be of size (500 * sizeof(double)). */
	const double *inmem_convolutionKernel1_mappedRom; /**<  [in] Mapped ROM inmem_convolutionKernel1_mappedRom, should be of size (500 * sizeof(double)). */
	const double *inmem_second_layer_mappedRom; /**<  [in] Mapped ROM inmem_second_layer_mappedRom, should be of size (25000 * sizeof(double)). */
	size_t lmem_address_dram_to_host; /**<  [in] Linear LMem control for "dram_to_host" stream: base address, in bytes. */
	size_t lmem_arr_size_dram_to_host; /**<  [in] Linear LMem control for "dram_to_host" stream: array size, in bytes. */
	size_t lmem_address_host_to_dram0; /**<  [in] Linear LMem control for "host_to_dram0" stream: base address, in bytes. */
	size_t lmem_arr_size_host_to_dram0; /**<  [in] Linear LMem control for "host_to_dram0" stream: array size, in bytes. */
	size_t lmem_address_host_to_dram1; /**<  [in] Linear LMem control for "host_to_dram1" stream: base address, in bytes. */
	size_t lmem_arr_size_host_to_dram1; /**<  [in] Linear LMem control for "host_to_dram1" stream: array size, in bytes. */
} convolution_second_layer_actions_t;

/**
 * \brief Advanced static function for the interface 'second_layer'.
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in,out] interface_actions Actions to be executed.
 */
void convolution_second_layer_run(
	max_engine_t *engine,
	convolution_second_layer_actions_t *interface_actions);

/**
 * \brief Advanced static non-blocking function for the interface 'second_layer'.
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
max_run_t *convolution_second_layer_run_nonblock(
	max_engine_t *engine,
	convolution_second_layer_actions_t *interface_actions);

/**
 * \brief Group run advanced static function for the interface 'second_layer'.
 * 
 * \param [in] group Group to use.
 * \param [in,out] interface_actions Actions to run.
 *
 * Run the actions on the first device available in the group.
 */
void convolution_second_layer_run_group(max_group_t *group, convolution_second_layer_actions_t *interface_actions);

/**
 * \brief Group run advanced static non-blocking function for the interface 'second_layer'.
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
max_run_t *convolution_second_layer_run_group_nonblock(max_group_t *group, convolution_second_layer_actions_t *interface_actions);

/**
 * \brief Array run advanced static function for the interface 'second_layer'.
 * 
 * \param [in] engarray The array of devices to use.
 * \param [in,out] interface_actions The array of actions to run.
 *
 * Run the array of actions on the array of engines.  The length of interface_actions
 * must match the size of engarray.
 */
void convolution_second_layer_run_array(max_engarray_t *engarray, convolution_second_layer_actions_t *interface_actions[]);

/**
 * \brief Array run advanced static non-blocking function for the interface 'second_layer'.
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
max_run_t *convolution_second_layer_run_array_nonblock(max_engarray_t *engarray, convolution_second_layer_actions_t *interface_actions[]);

/**
 * \brief Converts a static-interface action struct into a dynamic-interface max_actions_t struct.
 *
 * Note that this is an internal utility function used by other functions in the static interface.
 *
 * \param [in] maxfile The maxfile to use.
 * \param [in] interface_actions The interface-specific actions to run.
 * \return The dynamic-interface actions to run, or NULL in case of error.
 */
max_actions_t* convolution_second_layer_convert(max_file_t *maxfile, convolution_second_layer_actions_t *interface_actions);



/*----------------------------------------------------------------------------*/
/*---------------------------- Interface default -----------------------------*/
/*----------------------------------------------------------------------------*/




/**
 * \brief Basic static function for the interface 'default'.
 * 
 * \param [in] param_horizontal_captures Interface Parameter "horizontal_captures".
 * \param [in] param_horizontal_stride Interface Parameter "horizontal_stride".
 * \param [in] param_image_dimension Interface Parameter "image_dimension".
 * \param [in] param_kernel_dimension Interface Parameter "kernel_dimension".
 * \param [in] param_size_bytes Interface Parameter "size_bytes".
 * \param [in] param_start_bytes Interface Parameter "start_bytes".
 * \param [in] param_vertical_captures Interface Parameter "vertical_captures".
 * \param [in] param_vertical_stride Interface Parameter "vertical_stride".
 * \param [in] ticks_buffering The number of ticks for which kernel "buffering" will run.
 * \param [in] ticks_convolutionKernel The number of ticks for which kernel "convolutionKernel" will run.
 * \param [in] ticks_convolutionKernel1 The number of ticks for which kernel "convolutionKernel1" will run.
 * \param [in] ticks_maxpooling The number of ticks for which kernel "maxpooling" will run.
 * \param [in] ticks_maxpooling2 The number of ticks for which kernel "maxpooling2" will run.
 * \param [in] ticks_second_layer The number of ticks for which kernel "second_layer" will run.
 * \param [in] inscalar_convolutionKernel1_horizontal_captures Input scalar parameter "convolutionKernel1.horizontal_captures".
 * \param [in] inscalar_convolutionKernel1_horizontal_stride Input scalar parameter "convolutionKernel1.horizontal_stride".
 * \param [in] inscalar_convolutionKernel1_image_dimension Input scalar parameter "convolutionKernel1.image_dimension".
 * \param [in] inscalar_convolutionKernel1_kernel_dimension Input scalar parameter "convolutionKernel1.kernel_dimension".
 * \param [in] inscalar_convolutionKernel1_vertical_captures Input scalar parameter "convolutionKernel1.vertical_captures".
 * \param [in] inscalar_convolutionKernel1_vertical_stride Input scalar parameter "convolutionKernel1.vertical_stride".
 * \param [in] instream_x01 Stream "x01".
 * \param [in] instream_size_x01 The size of the stream instream_x01 in bytes.
 * \param [in] instream_x11 Stream "x11".
 * \param [in] instream_size_x11 The size of the stream instream_x11 in bytes.
 * \param [out] outstream_toCpu Stream "toCpu".
 * \param [in] outstream_size_toCpu The size of the stream outstream_toCpu in bytes.
 * \param [out] outstream_toCpu01 Stream "toCpu01".
 * \param [in] outstream_size_toCpu01 The size of the stream outstream_toCpu01 in bytes.
 * \param [out] outstream_toCpu11 Stream "toCpu11".
 * \param [in] outstream_size_toCpu11 The size of the stream outstream_toCpu11 in bytes.
 * \param [in] inmem_convolutionKernel_mappedRom Mapped ROM inmem_convolutionKernel_mappedRom, should be of size (500 * sizeof(double)).
 * \param [in] inmem_convolutionKernel1_mappedRom Mapped ROM inmem_convolutionKernel1_mappedRom, should be of size (500 * sizeof(double)).
 * \param [in] inmem_second_layer_mappedRom Mapped ROM inmem_second_layer_mappedRom, should be of size (25000 * sizeof(double)).
 * \param [in] lmem_address_dram_to_host Linear LMem control for "dram_to_host" stream: base address, in bytes.
 * \param [in] lmem_arr_size_dram_to_host Linear LMem control for "dram_to_host" stream: array size, in bytes.
 * \param [in] lmem_address_dram_to_kernel0 Linear LMem control for "dram_to_kernel0" stream: base address, in bytes.
 * \param [in] lmem_arr_size_dram_to_kernel0 Linear LMem control for "dram_to_kernel0" stream: array size, in bytes.
 * \param [in] lmem_address_dram_to_kernel1 Linear LMem control for "dram_to_kernel1" stream: base address, in bytes.
 * \param [in] lmem_arr_size_dram_to_kernel1 Linear LMem control for "dram_to_kernel1" stream: array size, in bytes.
 */
void convolution(
	int8_t param_horizontal_captures,
	int8_t param_horizontal_stride,
	int8_t param_image_dimension,
	int8_t param_kernel_dimension,
	int32_t param_size_bytes,
	int32_t param_start_bytes,
	int8_t param_vertical_captures,
	int8_t param_vertical_stride,
	uint64_t ticks_buffering,
	uint64_t ticks_convolutionKernel,
	uint64_t ticks_convolutionKernel1,
	uint64_t ticks_maxpooling,
	uint64_t ticks_maxpooling2,
	uint64_t ticks_second_layer,
	uint64_t inscalar_convolutionKernel1_horizontal_captures,
	uint64_t inscalar_convolutionKernel1_horizontal_stride,
	uint64_t inscalar_convolutionKernel1_image_dimension,
	uint64_t inscalar_convolutionKernel1_kernel_dimension,
	uint64_t inscalar_convolutionKernel1_vertical_captures,
	uint64_t inscalar_convolutionKernel1_vertical_stride,
	const void *instream_x01,
	size_t instream_size_x01,
	const void *instream_x11,
	size_t instream_size_x11,
	void *outstream_toCpu,
	size_t outstream_size_toCpu,
	void *outstream_toCpu01,
	size_t outstream_size_toCpu01,
	void *outstream_toCpu11,
	size_t outstream_size_toCpu11,
	const double *inmem_convolutionKernel_mappedRom,
	const double *inmem_convolutionKernel1_mappedRom,
	const double *inmem_second_layer_mappedRom,
	size_t lmem_address_dram_to_host,
	size_t lmem_arr_size_dram_to_host,
	size_t lmem_address_dram_to_kernel0,
	size_t lmem_arr_size_dram_to_kernel0,
	size_t lmem_address_dram_to_kernel1,
	size_t lmem_arr_size_dram_to_kernel1);

/**
 * \brief Basic static non-blocking function for the interface 'default'.
 * 
 * Schedule to run on an engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 * 
 * 
 * \param [in] param_horizontal_captures Interface Parameter "horizontal_captures".
 * \param [in] param_horizontal_stride Interface Parameter "horizontal_stride".
 * \param [in] param_image_dimension Interface Parameter "image_dimension".
 * \param [in] param_kernel_dimension Interface Parameter "kernel_dimension".
 * \param [in] param_size_bytes Interface Parameter "size_bytes".
 * \param [in] param_start_bytes Interface Parameter "start_bytes".
 * \param [in] param_vertical_captures Interface Parameter "vertical_captures".
 * \param [in] param_vertical_stride Interface Parameter "vertical_stride".
 * \param [in] ticks_buffering The number of ticks for which kernel "buffering" will run.
 * \param [in] ticks_convolutionKernel The number of ticks for which kernel "convolutionKernel" will run.
 * \param [in] ticks_convolutionKernel1 The number of ticks for which kernel "convolutionKernel1" will run.
 * \param [in] ticks_maxpooling The number of ticks for which kernel "maxpooling" will run.
 * \param [in] ticks_maxpooling2 The number of ticks for which kernel "maxpooling2" will run.
 * \param [in] ticks_second_layer The number of ticks for which kernel "second_layer" will run.
 * \param [in] inscalar_convolutionKernel1_horizontal_captures Input scalar parameter "convolutionKernel1.horizontal_captures".
 * \param [in] inscalar_convolutionKernel1_horizontal_stride Input scalar parameter "convolutionKernel1.horizontal_stride".
 * \param [in] inscalar_convolutionKernel1_image_dimension Input scalar parameter "convolutionKernel1.image_dimension".
 * \param [in] inscalar_convolutionKernel1_kernel_dimension Input scalar parameter "convolutionKernel1.kernel_dimension".
 * \param [in] inscalar_convolutionKernel1_vertical_captures Input scalar parameter "convolutionKernel1.vertical_captures".
 * \param [in] inscalar_convolutionKernel1_vertical_stride Input scalar parameter "convolutionKernel1.vertical_stride".
 * \param [in] instream_x01 Stream "x01".
 * \param [in] instream_size_x01 The size of the stream instream_x01 in bytes.
 * \param [in] instream_x11 Stream "x11".
 * \param [in] instream_size_x11 The size of the stream instream_x11 in bytes.
 * \param [out] outstream_toCpu Stream "toCpu".
 * \param [in] outstream_size_toCpu The size of the stream outstream_toCpu in bytes.
 * \param [out] outstream_toCpu01 Stream "toCpu01".
 * \param [in] outstream_size_toCpu01 The size of the stream outstream_toCpu01 in bytes.
 * \param [out] outstream_toCpu11 Stream "toCpu11".
 * \param [in] outstream_size_toCpu11 The size of the stream outstream_toCpu11 in bytes.
 * \param [in] inmem_convolutionKernel_mappedRom Mapped ROM inmem_convolutionKernel_mappedRom, should be of size (500 * sizeof(double)).
 * \param [in] inmem_convolutionKernel1_mappedRom Mapped ROM inmem_convolutionKernel1_mappedRom, should be of size (500 * sizeof(double)).
 * \param [in] inmem_second_layer_mappedRom Mapped ROM inmem_second_layer_mappedRom, should be of size (25000 * sizeof(double)).
 * \param [in] lmem_address_dram_to_host Linear LMem control for "dram_to_host" stream: base address, in bytes.
 * \param [in] lmem_arr_size_dram_to_host Linear LMem control for "dram_to_host" stream: array size, in bytes.
 * \param [in] lmem_address_dram_to_kernel0 Linear LMem control for "dram_to_kernel0" stream: base address, in bytes.
 * \param [in] lmem_arr_size_dram_to_kernel0 Linear LMem control for "dram_to_kernel0" stream: array size, in bytes.
 * \param [in] lmem_address_dram_to_kernel1 Linear LMem control for "dram_to_kernel1" stream: base address, in bytes.
 * \param [in] lmem_arr_size_dram_to_kernel1 Linear LMem control for "dram_to_kernel1" stream: array size, in bytes.
 * \return A handle on the execution status, or NULL in case of error.
 */
max_run_t *convolution_nonblock(
	int8_t param_horizontal_captures,
	int8_t param_horizontal_stride,
	int8_t param_image_dimension,
	int8_t param_kernel_dimension,
	int32_t param_size_bytes,
	int32_t param_start_bytes,
	int8_t param_vertical_captures,
	int8_t param_vertical_stride,
	uint64_t ticks_buffering,
	uint64_t ticks_convolutionKernel,
	uint64_t ticks_convolutionKernel1,
	uint64_t ticks_maxpooling,
	uint64_t ticks_maxpooling2,
	uint64_t ticks_second_layer,
	uint64_t inscalar_convolutionKernel1_horizontal_captures,
	uint64_t inscalar_convolutionKernel1_horizontal_stride,
	uint64_t inscalar_convolutionKernel1_image_dimension,
	uint64_t inscalar_convolutionKernel1_kernel_dimension,
	uint64_t inscalar_convolutionKernel1_vertical_captures,
	uint64_t inscalar_convolutionKernel1_vertical_stride,
	const void *instream_x01,
	size_t instream_size_x01,
	const void *instream_x11,
	size_t instream_size_x11,
	void *outstream_toCpu,
	size_t outstream_size_toCpu,
	void *outstream_toCpu01,
	size_t outstream_size_toCpu01,
	void *outstream_toCpu11,
	size_t outstream_size_toCpu11,
	const double *inmem_convolutionKernel_mappedRom,
	const double *inmem_convolutionKernel1_mappedRom,
	const double *inmem_second_layer_mappedRom,
	size_t lmem_address_dram_to_host,
	size_t lmem_arr_size_dram_to_host,
	size_t lmem_address_dram_to_kernel0,
	size_t lmem_arr_size_dram_to_kernel0,
	size_t lmem_address_dram_to_kernel1,
	size_t lmem_arr_size_dram_to_kernel1);

/**
 * \brief Advanced static interface, structure for the engine interface 'default'
 * 
 */
typedef struct { 
	int8_t param_horizontal_captures; /**<  [in] Interface Parameter "horizontal_captures". */
	int8_t param_horizontal_stride; /**<  [in] Interface Parameter "horizontal_stride". */
	int8_t param_image_dimension; /**<  [in] Interface Parameter "image_dimension". */
	int8_t param_kernel_dimension; /**<  [in] Interface Parameter "kernel_dimension". */
	int32_t param_size_bytes; /**<  [in] Interface Parameter "size_bytes". */
	int32_t param_start_bytes; /**<  [in] Interface Parameter "start_bytes". */
	int8_t param_vertical_captures; /**<  [in] Interface Parameter "vertical_captures". */
	int8_t param_vertical_stride; /**<  [in] Interface Parameter "vertical_stride". */
	uint64_t ticks_buffering; /**<  [in] The number of ticks for which kernel "buffering" will run. */
	uint64_t ticks_convolutionKernel; /**<  [in] The number of ticks for which kernel "convolutionKernel" will run. */
	uint64_t ticks_convolutionKernel1; /**<  [in] The number of ticks for which kernel "convolutionKernel1" will run. */
	uint64_t ticks_maxpooling; /**<  [in] The number of ticks for which kernel "maxpooling" will run. */
	uint64_t ticks_maxpooling2; /**<  [in] The number of ticks for which kernel "maxpooling2" will run. */
	uint64_t ticks_second_layer; /**<  [in] The number of ticks for which kernel "second_layer" will run. */
	uint64_t inscalar_convolutionKernel1_horizontal_captures; /**<  [in] Input scalar parameter "convolutionKernel1.horizontal_captures". */
	uint64_t inscalar_convolutionKernel1_horizontal_stride; /**<  [in] Input scalar parameter "convolutionKernel1.horizontal_stride". */
	uint64_t inscalar_convolutionKernel1_image_dimension; /**<  [in] Input scalar parameter "convolutionKernel1.image_dimension". */
	uint64_t inscalar_convolutionKernel1_kernel_dimension; /**<  [in] Input scalar parameter "convolutionKernel1.kernel_dimension". */
	uint64_t inscalar_convolutionKernel1_vertical_captures; /**<  [in] Input scalar parameter "convolutionKernel1.vertical_captures". */
	uint64_t inscalar_convolutionKernel1_vertical_stride; /**<  [in] Input scalar parameter "convolutionKernel1.vertical_stride". */
	const void *instream_x01; /**<  [in] Stream "x01". */
	size_t instream_size_x01; /**<  [in] The size of the stream instream_x01 in bytes. */
	const void *instream_x11; /**<  [in] Stream "x11". */
	size_t instream_size_x11; /**<  [in] The size of the stream instream_x11 in bytes. */
	void *outstream_toCpu; /**<  [out] Stream "toCpu". */
	size_t outstream_size_toCpu; /**<  [in] The size of the stream outstream_toCpu in bytes. */
	void *outstream_toCpu01; /**<  [out] Stream "toCpu01". */
	size_t outstream_size_toCpu01; /**<  [in] The size of the stream outstream_toCpu01 in bytes. */
	void *outstream_toCpu11; /**<  [out] Stream "toCpu11". */
	size_t outstream_size_toCpu11; /**<  [in] The size of the stream outstream_toCpu11 in bytes. */
	const double *inmem_convolutionKernel_mappedRom; /**<  [in] Mapped ROM inmem_convolutionKernel_mappedRom, should be of size (500 * sizeof(double)). */
	const double *inmem_convolutionKernel1_mappedRom; /**<  [in] Mapped ROM inmem_convolutionKernel1_mappedRom, should be of size (500 * sizeof(double)). */
	const double *inmem_second_layer_mappedRom; /**<  [in] Mapped ROM inmem_second_layer_mappedRom, should be of size (25000 * sizeof(double)). */
	size_t lmem_address_dram_to_host; /**<  [in] Linear LMem control for "dram_to_host" stream: base address, in bytes. */
	size_t lmem_arr_size_dram_to_host; /**<  [in] Linear LMem control for "dram_to_host" stream: array size, in bytes. */
	size_t lmem_address_dram_to_kernel0; /**<  [in] Linear LMem control for "dram_to_kernel0" stream: base address, in bytes. */
	size_t lmem_arr_size_dram_to_kernel0; /**<  [in] Linear LMem control for "dram_to_kernel0" stream: array size, in bytes. */
	size_t lmem_address_dram_to_kernel1; /**<  [in] Linear LMem control for "dram_to_kernel1" stream: base address, in bytes. */
	size_t lmem_arr_size_dram_to_kernel1; /**<  [in] Linear LMem control for "dram_to_kernel1" stream: array size, in bytes. */
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

