/**\file */
#ifndef SLIC_DECLARATIONS_convolution_H
#define SLIC_DECLARATIONS_convolution_H
#include "MaxSLiCInterface.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define convolution_PCIE_ALIGNMENT (16)
#define convolution_fold_constant (3)
#define convolution_N (28)


/*----------------------------------------------------------------------------*/
/*---------------------------- Interface default -----------------------------*/
/*----------------------------------------------------------------------------*/




/**
 * \brief Basic static function for the interface 'default'.
 * 
 * \param [in] inscalar_convolutionKernel_fine_grained_folding_factor Input scalar parameter "convolutionKernel.fine_grained_folding_factor".
 * \param [in] inscalar_convolutionKernel_image_width Input scalar parameter "convolutionKernel.image_width".
 * \param [in] inscalar_convolutionKernel_number_of_filters Input scalar parameter "convolutionKernel.number_of_filters".
 * \param [in] instream_x The stream should be of size 3136 bytes.
 * \param [out] outstream_y The stream should be of size 3136 bytes.
 * \param [out] outstream_y1 The stream should be of size 3136 bytes.
 * \param [in] inmem_convolutionKernel_mappedRom Mapped ROM inmem_convolutionKernel_mappedRom, should be of size (25 * sizeof(double)).
 */
void convolution(
	double inscalar_convolutionKernel_fine_grained_folding_factor,
	double inscalar_convolutionKernel_image_width,
	double inscalar_convolutionKernel_number_of_filters,
	const float *instream_x,
	float *outstream_y,
	float *outstream_y1,
	const double *inmem_convolutionKernel_mappedRom);

/**
 * \brief Basic static non-blocking function for the interface 'default'.
 * 
 * Schedule to run on an engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 * 
 * 
 * \param [in] inscalar_convolutionKernel_fine_grained_folding_factor Input scalar parameter "convolutionKernel.fine_grained_folding_factor".
 * \param [in] inscalar_convolutionKernel_image_width Input scalar parameter "convolutionKernel.image_width".
 * \param [in] inscalar_convolutionKernel_number_of_filters Input scalar parameter "convolutionKernel.number_of_filters".
 * \param [in] instream_x The stream should be of size 3136 bytes.
 * \param [out] outstream_y The stream should be of size 3136 bytes.
 * \param [out] outstream_y1 The stream should be of size 3136 bytes.
 * \param [in] inmem_convolutionKernel_mappedRom Mapped ROM inmem_convolutionKernel_mappedRom, should be of size (25 * sizeof(double)).
 * \return A handle on the execution status, or NULL in case of error.
 */
max_run_t *convolution_nonblock(
	double inscalar_convolutionKernel_fine_grained_folding_factor,
	double inscalar_convolutionKernel_image_width,
	double inscalar_convolutionKernel_number_of_filters,
	const float *instream_x,
	float *outstream_y,
	float *outstream_y1,
	const double *inmem_convolutionKernel_mappedRom);

/**
 * \brief Advanced static interface, structure for the engine interface 'default'
 * 
 */
typedef struct { 
	double inscalar_convolutionKernel_fine_grained_folding_factor; /**<  [in] Input scalar parameter "convolutionKernel.fine_grained_folding_factor". */
	double inscalar_convolutionKernel_image_width; /**<  [in] Input scalar parameter "convolutionKernel.image_width". */
	double inscalar_convolutionKernel_number_of_filters; /**<  [in] Input scalar parameter "convolutionKernel.number_of_filters". */
	const float *instream_x; /**<  [in] The stream should be of size 3136 bytes. */
	float *outstream_y; /**<  [out] The stream should be of size 3136 bytes. */
	float *outstream_y1; /**<  [out] The stream should be of size 3136 bytes. */
	const double *inmem_convolutionKernel_mappedRom; /**<  [in] Mapped ROM inmem_convolutionKernel_mappedRom, should be of size (25 * sizeof(double)). */
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

