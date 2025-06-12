// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelLoadInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamixel_workbench_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DynamixelLoadInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamixel_workbench_msgs::msg::DynamixelLoadInfo(_init);
}

void DynamixelLoadInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamixel_workbench_msgs::msg::DynamixelLoadInfo *>(message_memory);
  typed_message->~DynamixelLoadInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DynamixelLoadInfo_message_member_array[3] = {
  {
    "device_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_workbench_msgs::msg::DynamixelLoadInfo, device_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "baud_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_workbench_msgs::msg::DynamixelLoadInfo, baud_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "protocol_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_workbench_msgs::msg::DynamixelLoadInfo, protocol_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DynamixelLoadInfo_message_members = {
  "dynamixel_workbench_msgs::msg",  // message namespace
  "DynamixelLoadInfo",  // message name
  3,  // number of fields
  sizeof(dynamixel_workbench_msgs::msg::DynamixelLoadInfo),
  DynamixelLoadInfo_message_member_array,  // message members
  DynamixelLoadInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamixelLoadInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DynamixelLoadInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DynamixelLoadInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dynamixel_workbench_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_workbench_msgs::msg::DynamixelLoadInfo>()
{
  return &::dynamixel_workbench_msgs::msg::rosidl_typesupport_introspection_cpp::DynamixelLoadInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_workbench_msgs, msg, DynamixelLoadInfo)() {
  return &::dynamixel_workbench_msgs::msg::rosidl_typesupport_introspection_cpp::DynamixelLoadInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
