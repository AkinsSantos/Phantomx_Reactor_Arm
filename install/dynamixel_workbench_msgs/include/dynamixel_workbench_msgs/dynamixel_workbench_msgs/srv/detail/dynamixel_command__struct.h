// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_workbench_msgs:srv/DynamixelCommand.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__STRUCT_H_
#define DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'addr_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DynamixelCommand in the package dynamixel_workbench_msgs.
typedef struct dynamixel_workbench_msgs__srv__DynamixelCommand_Request
{
  rosidl_runtime_c__String command;
  uint8_t id;
  rosidl_runtime_c__String addr_name;
  int32_t value;
} dynamixel_workbench_msgs__srv__DynamixelCommand_Request;

// Struct for a sequence of dynamixel_workbench_msgs__srv__DynamixelCommand_Request.
typedef struct dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence
{
  dynamixel_workbench_msgs__srv__DynamixelCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_workbench_msgs__srv__DynamixelCommand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/DynamixelCommand in the package dynamixel_workbench_msgs.
typedef struct dynamixel_workbench_msgs__srv__DynamixelCommand_Response
{
  bool comm_result;
} dynamixel_workbench_msgs__srv__DynamixelCommand_Response;

// Struct for a sequence of dynamixel_workbench_msgs__srv__DynamixelCommand_Response.
typedef struct dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence
{
  dynamixel_workbench_msgs__srv__DynamixelCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_workbench_msgs__srv__DynamixelCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__STRUCT_H_
