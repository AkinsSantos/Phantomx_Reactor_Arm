// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_workbench_msgs:msg/DynamixelLoadInfo.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_LOAD_INFO__STRUCT_H_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_LOAD_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'device_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DynamixelLoadInfo in the package dynamixel_workbench_msgs.
/**
  * This message includes dynamixel's load information
 */
typedef struct dynamixel_workbench_msgs__msg__DynamixelLoadInfo
{
  rosidl_runtime_c__String device_name;
  uint64_t baud_rate;
  float protocol_version;
} dynamixel_workbench_msgs__msg__DynamixelLoadInfo;

// Struct for a sequence of dynamixel_workbench_msgs__msg__DynamixelLoadInfo.
typedef struct dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence
{
  dynamixel_workbench_msgs__msg__DynamixelLoadInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_LOAD_INFO__STRUCT_H_
