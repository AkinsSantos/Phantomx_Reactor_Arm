// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_workbench_msgs:msg/DynamixelStateList.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE_LIST__STRUCT_H_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dynamixel_state'
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state__struct.h"

/// Struct defined in msg/DynamixelStateList in the package dynamixel_workbench_msgs.
/**
  * DynamixelState List
 */
typedef struct dynamixel_workbench_msgs__msg__DynamixelStateList
{
  dynamixel_workbench_msgs__msg__DynamixelState__Sequence dynamixel_state;
} dynamixel_workbench_msgs__msg__DynamixelStateList;

// Struct for a sequence of dynamixel_workbench_msgs__msg__DynamixelStateList.
typedef struct dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence
{
  dynamixel_workbench_msgs__msg__DynamixelStateList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE_LIST__STRUCT_H_
