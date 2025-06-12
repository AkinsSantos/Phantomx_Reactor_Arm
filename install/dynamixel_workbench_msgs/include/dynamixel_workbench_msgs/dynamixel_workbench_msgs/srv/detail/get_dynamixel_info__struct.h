// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_workbench_msgs:srv/GetDynamixelInfo.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__GET_DYNAMIXEL_INFO__STRUCT_H_
#define DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__GET_DYNAMIXEL_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetDynamixelInfo in the package dynamixel_workbench_msgs.
typedef struct dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request
{
  uint8_t structure_needs_at_least_one_member;
} dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request;

// Struct for a sequence of dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request.
typedef struct dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence
{
  dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'dynamixel_info'
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_info__struct.h"

/// Struct defined in srv/GetDynamixelInfo in the package dynamixel_workbench_msgs.
typedef struct dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response
{
  dynamixel_workbench_msgs__msg__DynamixelInfo dynamixel_info;
} dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response;

// Struct for a sequence of dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response.
typedef struct dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence
{
  dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__GET_DYNAMIXEL_INFO__STRUCT_H_
