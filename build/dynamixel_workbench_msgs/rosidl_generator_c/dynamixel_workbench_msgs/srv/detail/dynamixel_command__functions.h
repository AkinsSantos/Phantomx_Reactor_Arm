// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dynamixel_workbench_msgs:srv/DynamixelCommand.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__FUNCTIONS_H_
#define DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dynamixel_workbench_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dynamixel_workbench_msgs/srv/detail/dynamixel_command__struct.h"

/// Initialize srv/DynamixelCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Request
 * )) before or use
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__srv__DynamixelCommand_Request__init(dynamixel_workbench_msgs__srv__DynamixelCommand_Request * msg);

/// Finalize srv/DynamixelCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__srv__DynamixelCommand_Request__fini(dynamixel_workbench_msgs__srv__DynamixelCommand_Request * msg);

/// Create srv/DynamixelCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
dynamixel_workbench_msgs__srv__DynamixelCommand_Request *
dynamixel_workbench_msgs__srv__DynamixelCommand_Request__create();

/// Destroy srv/DynamixelCommand message.
/**
 * It calls
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__srv__DynamixelCommand_Request__destroy(dynamixel_workbench_msgs__srv__DynamixelCommand_Request * msg);

/// Check for srv/DynamixelCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__srv__DynamixelCommand_Request__are_equal(const dynamixel_workbench_msgs__srv__DynamixelCommand_Request * lhs, const dynamixel_workbench_msgs__srv__DynamixelCommand_Request * rhs);

/// Copy a srv/DynamixelCommand message.
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
dynamixel_workbench_msgs__srv__DynamixelCommand_Request__copy(
  const dynamixel_workbench_msgs__srv__DynamixelCommand_Request * input,
  dynamixel_workbench_msgs__srv__DynamixelCommand_Request * output);

/// Initialize array of srv/DynamixelCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence__init(dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence * array, size_t size);

/// Finalize array of srv/DynamixelCommand messages.
/**
 * It calls
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence__fini(dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence * array);

/// Create array of srv/DynamixelCommand messages.
/**
 * It allocates the memory for the array and calls
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence *
dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence__create(size_t size);

/// Destroy array of srv/DynamixelCommand messages.
/**
 * It calls
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence__destroy(dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence * array);

/// Check for srv/DynamixelCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence__are_equal(const dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence * lhs, const dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence * rhs);

/// Copy an array of srv/DynamixelCommand messages.
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
dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence__copy(
  const dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence * input,
  dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence * output);

/// Initialize srv/DynamixelCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Response
 * )) before or use
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__srv__DynamixelCommand_Response__init(dynamixel_workbench_msgs__srv__DynamixelCommand_Response * msg);

/// Finalize srv/DynamixelCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__srv__DynamixelCommand_Response__fini(dynamixel_workbench_msgs__srv__DynamixelCommand_Response * msg);

/// Create srv/DynamixelCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
dynamixel_workbench_msgs__srv__DynamixelCommand_Response *
dynamixel_workbench_msgs__srv__DynamixelCommand_Response__create();

/// Destroy srv/DynamixelCommand message.
/**
 * It calls
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__srv__DynamixelCommand_Response__destroy(dynamixel_workbench_msgs__srv__DynamixelCommand_Response * msg);

/// Check for srv/DynamixelCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__srv__DynamixelCommand_Response__are_equal(const dynamixel_workbench_msgs__srv__DynamixelCommand_Response * lhs, const dynamixel_workbench_msgs__srv__DynamixelCommand_Response * rhs);

/// Copy a srv/DynamixelCommand message.
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
dynamixel_workbench_msgs__srv__DynamixelCommand_Response__copy(
  const dynamixel_workbench_msgs__srv__DynamixelCommand_Response * input,
  dynamixel_workbench_msgs__srv__DynamixelCommand_Response * output);

/// Initialize array of srv/DynamixelCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence__init(dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence * array, size_t size);

/// Finalize array of srv/DynamixelCommand messages.
/**
 * It calls
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence__fini(dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence * array);

/// Create array of srv/DynamixelCommand messages.
/**
 * It allocates the memory for the array and calls
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence *
dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence__create(size_t size);

/// Destroy array of srv/DynamixelCommand messages.
/**
 * It calls
 * dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
void
dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence__destroy(dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence * array);

/// Check for srv/DynamixelCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dynamixel_workbench_msgs
bool
dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence__are_equal(const dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence * lhs, const dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence * rhs);

/// Copy an array of srv/DynamixelCommand messages.
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
dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence__copy(
  const dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence * input,
  dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__FUNCTIONS_H_
