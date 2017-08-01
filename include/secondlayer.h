/**\file */
#ifndef SLIC_DECLARATIONS_secondlayer_H
#define SLIC_DECLARATIONS_secondlayer_H
#include "MaxSLiCInterface.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define secondlayer_PCIE_ALIGNMENT (16)


/*----------------------------------------------------------------------------*/
/*---------------------------- Interface default -----------------------------*/
/*----------------------------------------------------------------------------*/




/**
 * \brief Basic static function for the interface 'default'.
 * 
 * \param [out] outstream_toCpu1 Stream "toCpu1".
 * \param [in] outstream_size_toCpu1 The size of the stream outstream_toCpu1 in bytes.
 * \param [in] lmem_address_kernel_to_dram Linear LMem control for "kernel_to_dram" stream: base address, in bytes.
 * \param [in] lmem_arr_size_kernel_to_dram Linear LMem control for "kernel_to_dram" stream: array size, in bytes.
 */
void secondlayer(
	void *outstream_toCpu1,
	size_t outstream_size_toCpu1,
	size_t lmem_address_kernel_to_dram,
	size_t lmem_arr_size_kernel_to_dram);

/**
 * \brief Basic static non-blocking function for the interface 'default'.
 * 
 * Schedule to run on an engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 * 
 * 
 * \param [out] outstream_toCpu1 Stream "toCpu1".
 * \param [in] outstream_size_toCpu1 The size of the stream outstream_toCpu1 in bytes.
 * \param [in] lmem_address_kernel_to_dram Linear LMem control for "kernel_to_dram" stream: base address, in bytes.
 * \param [in] lmem_arr_size_kernel_to_dram Linear LMem control for "kernel_to_dram" stream: array size, in bytes.
 * \return A handle on the execution status, or NULL in case of error.
 */
max_run_t *secondlayer_nonblock(
	void *outstream_toCpu1,
	size_t outstream_size_toCpu1,
	size_t lmem_address_kernel_to_dram,
	size_t lmem_arr_size_kernel_to_dram);

/**
 * \brief Advanced static interface, structure for the engine interface 'default'
 * 
 */
typedef struct { 
	void *outstream_toCpu1; /**<  [out] Stream "toCpu1". */
	size_t outstream_size_toCpu1; /**<  [in] The size of the stream outstream_toCpu1 in bytes. */
	size_t lmem_address_kernel_to_dram; /**<  [in] Linear LMem control for "kernel_to_dram" stream: base address, in bytes. */
	size_t lmem_arr_size_kernel_to_dram; /**<  [in] Linear LMem control for "kernel_to_dram" stream: array size, in bytes. */
} secondlayer_actions_t;

/**
 * \brief Advanced static function for the interface 'default'.
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in,out] interface_actions Actions to be executed.
 */
void secondlayer_run(
	max_engine_t *engine,
	secondlayer_actions_t *interface_actions);

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
max_run_t *secondlayer_run_nonblock(
	max_engine_t *engine,
	secondlayer_actions_t *interface_actions);

/**
 * \brief Group run advanced static function for the interface 'default'.
 * 
 * \param [in] group Group to use.
 * \param [in,out] interface_actions Actions to run.
 *
 * Run the actions on the first device available in the group.
 */
void secondlayer_run_group(max_group_t *group, secondlayer_actions_t *interface_actions);

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
max_run_t *secondlayer_run_group_nonblock(max_group_t *group, secondlayer_actions_t *interface_actions);

/**
 * \brief Array run advanced static function for the interface 'default'.
 * 
 * \param [in] engarray The array of devices to use.
 * \param [in,out] interface_actions The array of actions to run.
 *
 * Run the array of actions on the array of engines.  The length of interface_actions
 * must match the size of engarray.
 */
void secondlayer_run_array(max_engarray_t *engarray, secondlayer_actions_t *interface_actions[]);

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
max_run_t *secondlayer_run_array_nonblock(max_engarray_t *engarray, secondlayer_actions_t *interface_actions[]);

/**
 * \brief Converts a static-interface action struct into a dynamic-interface max_actions_t struct.
 *
 * Note that this is an internal utility function used by other functions in the static interface.
 *
 * \param [in] maxfile The maxfile to use.
 * \param [in] interface_actions The interface-specific actions to run.
 * \return The dynamic-interface actions to run, or NULL in case of error.
 */
max_actions_t* secondlayer_convert(max_file_t *maxfile, secondlayer_actions_t *interface_actions);

/**
 * \brief Initialise a maxfile.
 */
max_file_t* secondlayer_init(void);

/* Error handling functions */
int secondlayer_has_errors(void);
const char* secondlayer_get_errors(void);
void secondlayer_clear_errors(void);
/* Free statically allocated maxfile data */
void secondlayer_free(void);
/* returns: -1 = error running command; 0 = no error reported */
int secondlayer_simulator_start(void);
/* returns: -1 = error running command; 0 = no error reported */
int secondlayer_simulator_stop(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* SLIC_DECLARATIONS_secondlayer_H */

