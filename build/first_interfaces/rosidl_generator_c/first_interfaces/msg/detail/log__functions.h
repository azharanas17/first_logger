// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from first_interfaces:msg/Log.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__LOG__FUNCTIONS_H_
#define FIRST_INTERFACES__MSG__DETAIL__LOG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "first_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "first_interfaces/msg/detail/log__struct.h"

/// Initialize msg/Log message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_interfaces__msg__Log
 * )) before or use
 * first_interfaces__msg__Log__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
bool
first_interfaces__msg__Log__init(first_interfaces__msg__Log * msg);

/// Finalize msg/Log message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
void
first_interfaces__msg__Log__fini(first_interfaces__msg__Log * msg);

/// Create msg/Log message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_interfaces__msg__Log__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
first_interfaces__msg__Log *
first_interfaces__msg__Log__create();

/// Destroy msg/Log message.
/**
 * It calls
 * first_interfaces__msg__Log__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
void
first_interfaces__msg__Log__destroy(first_interfaces__msg__Log * msg);


/// Initialize array of msg/Log messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_interfaces__msg__Log__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
bool
first_interfaces__msg__Log__Sequence__init(first_interfaces__msg__Log__Sequence * array, size_t size);

/// Finalize array of msg/Log messages.
/**
 * It calls
 * first_interfaces__msg__Log__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
void
first_interfaces__msg__Log__Sequence__fini(first_interfaces__msg__Log__Sequence * array);

/// Create array of msg/Log messages.
/**
 * It allocates the memory for the array and calls
 * first_interfaces__msg__Log__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
first_interfaces__msg__Log__Sequence *
first_interfaces__msg__Log__Sequence__create(size_t size);

/// Destroy array of msg/Log messages.
/**
 * It calls
 * first_interfaces__msg__Log__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
void
first_interfaces__msg__Log__Sequence__destroy(first_interfaces__msg__Log__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // FIRST_INTERFACES__MSG__DETAIL__LOG__FUNCTIONS_H_
