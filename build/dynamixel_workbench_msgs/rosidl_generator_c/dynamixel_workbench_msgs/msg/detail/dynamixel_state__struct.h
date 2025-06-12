// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_workbench_msgs:msg/DynamixelState.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__STRUCT_H_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DynamixelState in the package dynamixel_workbench_msgs.
/**
  * This message includes basic data of dynamixel
 */
typedef struct dynamixel_workbench_msgs__msg__DynamixelState
{
  rosidl_runtime_c__String name;
  uint8_t id;
  int32_t present_position;
  int32_t present_velocity;
  int16_t present_current;
} dynamixel_workbench_msgs__msg__DynamixelState;

// Struct for a sequence of dynamixel_workbench_msgs__msg__DynamixelState.
typedef struct dynamixel_workbench_msgs__msg__DynamixelState__Sequence
{
  dynamixel_workbench_msgs__msg__DynamixelState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_workbench_msgs__msg__DynamixelState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__STRUCT_H_
