// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynamixel_workbench_msgs:msg/DynamixelInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_info__rosidl_typesupport_introspection_c.h"
#include "dynamixel_workbench_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_info__functions.h"
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_info__struct.h"


// Include directives for member types
// Member `load_info`
#include "dynamixel_workbench_msgs/msg/dynamixel_load_info.h"
// Member `load_info`
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__rosidl_typesupport_introspection_c.h"
// Member `model_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynamixel_workbench_msgs__msg__DynamixelInfo__rosidl_typesupport_introspection_c__DynamixelInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamixel_workbench_msgs__msg__DynamixelInfo__init(message_memory);
}

void dynamixel_workbench_msgs__msg__DynamixelInfo__rosidl_typesupport_introspection_c__DynamixelInfo_fini_function(void * message_memory)
{
  dynamixel_workbench_msgs__msg__DynamixelInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dynamixel_workbench_msgs__msg__DynamixelInfo__rosidl_typesupport_introspection_c__DynamixelInfo_message_member_array[4] = {
  {
    "load_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_workbench_msgs__msg__DynamixelInfo, load_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_workbench_msgs__msg__DynamixelInfo, model_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_workbench_msgs__msg__DynamixelInfo, model_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_workbench_msgs__msg__DynamixelInfo, model_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamixel_workbench_msgs__msg__DynamixelInfo__rosidl_typesupport_introspection_c__DynamixelInfo_message_members = {
  "dynamixel_workbench_msgs__msg",  // message namespace
  "DynamixelInfo",  // message name
  4,  // number of fields
  sizeof(dynamixel_workbench_msgs__msg__DynamixelInfo),
  dynamixel_workbench_msgs__msg__DynamixelInfo__rosidl_typesupport_introspection_c__DynamixelInfo_message_member_array,  // message members
  dynamixel_workbench_msgs__msg__DynamixelInfo__rosidl_typesupport_introspection_c__DynamixelInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamixel_workbench_msgs__msg__DynamixelInfo__rosidl_typesupport_introspection_c__DynamixelInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamixel_workbench_msgs__msg__DynamixelInfo__rosidl_typesupport_introspection_c__DynamixelInfo_message_type_support_handle = {
  0,
  &dynamixel_workbench_msgs__msg__DynamixelInfo__rosidl_typesupport_introspection_c__DynamixelInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamixel_workbench_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_workbench_msgs, msg, DynamixelInfo)() {
  dynamixel_workbench_msgs__msg__DynamixelInfo__rosidl_typesupport_introspection_c__DynamixelInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_workbench_msgs, msg, DynamixelLoadInfo)();
  if (!dynamixel_workbench_msgs__msg__DynamixelInfo__rosidl_typesupport_introspection_c__DynamixelInfo_message_type_support_handle.typesupport_identifier) {
    dynamixel_workbench_msgs__msg__DynamixelInfo__rosidl_typesupport_introspection_c__DynamixelInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamixel_workbench_msgs__msg__DynamixelInfo__rosidl_typesupport_introspection_c__DynamixelInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
