// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dynamixel_workbench_msgs:msg/MX2Ext.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX2_EXT__FUNCTIONS_H_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX2_EXT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dynamixel_workbench_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dynamixel_workbench_msgs/msg/detail/mx2_ext__struct.h"

/// Initialize msg/MX2Ext message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dynamixel_workbench_msgs__msg__MX2Ext
 * )) before or use
 * dynamixel_workbench_msgs__msg__MX2Ext__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__msg__MX2Ext__init(dynamixel_workbench_msgs__msg__MX2Ext * msg);

/// Finalize msg/MX2Ext message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__msg__MX2Ext__fini(dynamixel_workbench_msgs__msg__MX2Ext * msg);

/// Create msg/MX2Ext message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dynamixel_workbench_msgs__msg__MX2Ext__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
dynamixel_workbench_msgs__msg__MX2Ext *
dynamixel_workbench_msgs__msg__MX2Ext__create();

/// Destroy msg/MX2Ext message.
/**
 * It calls
 * dynamixel_workbench_msgs__msg__MX2Ext__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__msg__MX2Ext__destroy(dynamixel_workbench_msgs__msg__MX2Ext * msg);

/// Check for msg/MX2Ext message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__msg__MX2Ext__are_equal(const dynamixel_workbench_msgs__msg__MX2Ext * lhs, const dynamixel_workbench_msgs__msg__MX2Ext * rhs);

/// Copy a msg/MX2Ext message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__msg__MX2Ext__copy(
  const dynamixel_workbench_msgs__msg__MX2Ext * input,
  dynamixel_workbench_msgs__msg__MX2Ext * output);

/// Initialize array of msg/MX2Ext messages.
/**
 * It allocates the memory for the number of elements and calls
 * dynamixel_workbench_msgs__msg__MX2Ext__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__msg__MX2Ext__Sequence__init(dynamixel_workbench_msgs__msg__MX2Ext__Sequence * array, size_t size);

/// Finalize array of msg/MX2Ext messages.
/**
 * It calls
 * dynamixel_workbench_msgs__msg__MX2Ext__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__msg__MX2Ext__Sequence__fini(dynamixel_workbench_msgs__msg__MX2Ext__Sequence * array);

/// Create array of msg/MX2Ext messages.
/**
 * It allocates the memory for the array and calls
 * dynamixel_workbench_msgs__msg__MX2Ext__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
dynamixel_workbench_msgs__msg__MX2Ext__Sequence *
dynamixel_workbench_msgs__msg__MX2Ext__Sequence__create(size_t size);

/// Destroy array of msg/MX2Ext messages.
/**
 * It calls
 * dynamixel_workbench_msgs__msg__MX2Ext__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__msg__MX2Ext__Sequence__destroy(dynamixel_workbench_msgs__msg__MX2Ext__Sequence * array);

/// Check for msg/MX2Ext message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__msg__MX2Ext__Sequence__are_equal(const dynamixel_workbench_msgs__msg__MX2Ext__Sequence * lhs, const dynamixel_workbench_msgs__msg__MX2Ext__Sequence * rhs);

/// Copy an array of msg/MX2Ext messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__msg__MX2Ext__Sequence__copy(
  const dynamixel_workbench_msgs__msg__MX2Ext__Sequence * input,
  dynamixel_workbench_msgs__msg__MX2Ext__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX2_EXT__FUNCTIONS_H_
