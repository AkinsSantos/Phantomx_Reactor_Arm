// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_workbench_msgs:msg/DynamixelInfo.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__STRUCT_H_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'load_info'
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__struct.h"
// Member 'model_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DynamixelInfo in the package dynamixel_workbench_msgs.
/**
  * This message includes information of dynamixel's basic parameter
 */
typedef struct dynamixel_workbench_msgs__msg__DynamixelInfo
{
  dynamixel_workbench_msgs__msg__DynamixelLoadInfo load_info;
  rosidl_runtime_c__String model_name;
  uint16_t model_number;
  uint8_t model_id;
} dynamixel_workbench_msgs__msg__DynamixelInfo;

// Struct for a sequence of dynamixel_workbench_msgs__msg__DynamixelInfo.
typedef struct dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence
{
  dynamixel_workbench_msgs__msg__DynamixelInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__STRUCT_H_
