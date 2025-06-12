// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dynamixel_workbench_msgs:msg/MX2.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX2__FUNCTIONS_H_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX2__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dynamixel_workbench_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dynamixel_workbench_msgs/msg/detail/mx2__struct.h"

/// Initialize msg/MX2 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dynamixel_workbench_msgs__msg__MX2
 * )) before or use
 * dynamixel_workbench_msgs__msg__MX2__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__msg__MX2__init(dynamixel_workbench_msgs__msg__MX2 * msg);

/// Finalize msg/MX2 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__msg__MX2__fini(dynamixel_workbench_msgs__msg__MX2 * msg);

/// Create msg/MX2 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dynamixel_workbench_msgs__msg__MX2__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
dynamixel_workbench_msgs__msg__MX2 *
dynamixel_workbench_msgs__msg__MX2__create();

/// Destroy msg/MX2 message.
/**
 * It calls
 * dynamixel_workbench_msgs__msg__MX2__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__msg__MX2__destroy(dynamixel_workbench_msgs__msg__MX2 * msg);

/// Check for msg/MX2 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__msg__MX2__are_equal(const dynamixel_workbench_msgs__msg__MX2 * lhs, const dynamixel_workbench_msgs__msg__MX2 * rhs);

/// Copy a msg/MX2 message.
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
dynamixel_workbench_msgs__msg__MX2__copy(
  const dynamixel_workbench_msgs__msg__MX2 * input,
  dynamixel_workbench_msgs__msg__MX2 * output);

/// Initialize array of msg/MX2 messages.
/**
 * It allocates the memory for the number of elements and calls
 * dynamixel_workbench_msgs__msg__MX2__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__msg__MX2__Sequence__init(dynamixel_workbench_msgs__msg__MX2__Sequence * array, size_t size);

/// Finalize array of msg/MX2 messages.
/**
 * It calls
 * dynamixel_workbench_msgs__msg__MX2__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__msg__MX2__Sequence__fini(dynamixel_workbench_msgs__msg__MX2__Sequence * array);

/// Create array of msg/MX2 messages.
/**
 * It allocates the memory for the array and calls
 * dynamixel_workbench_msgs__msg__MX2__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
dynamixel_workbench_msgs__msg__MX2__Sequence *
dynamixel_workbench_msgs__msg__MX2__Sequence__create(size_t size);

/// Destroy array of msg/MX2 messages.
/**
 * It calls
 * dynamixel_workbench_msgs__msg__MX2__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__msg__MX2__Sequence__destroy(dynamixel_workbench_msgs__msg__MX2__Sequence * array);

/// Check for msg/MX2 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__msg__MX2__Sequence__are_equal(const dynamixel_workbench_msgs__msg__MX2__Sequence * lhs, const dynamixel_workbench_msgs__msg__MX2__Sequence * rhs);

/// Copy an array of msg/MX2 messages.
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
dynamixel_workbench_msgs__msg__MX2__Sequence__copy(
  const dynamixel_workbench_msgs__msg__MX2__Sequence * input,
  dynamixel_workbench_msgs__msg__MX2__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX2__FUNCTIONS_H_
