// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelLoadInfo.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dynamixel_workbench_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
cdr_serialize(
  const dynamixel_workbench_msgs::msg::DynamixelLoadInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: device_name
  cdr << ros_message.device_name;
  // Member: baud_rate
  cdr << ros_message.baud_rate;
  // Member: protocol_version
  cdr << ros_message.protocol_version;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dynamixel_workbench_msgs::msg::DynamixelLoadInfo & ros_message)
{
  // Member: device_name
  cdr >> ros_message.device_name;

  // Member: baud_rate
  cdr >> ros_message.baud_rate;

  // Member: protocol_version
  cdr >> ros_message.protocol_version;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
get_serialized_size(
  const dynamixel_workbench_msgs::msg::DynamixelLoadInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: device_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.device_name.size() + 1);
  // Member: baud_rate
  {
    size_t item_size = sizeof(ros_message.baud_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: protocol_version
  {
    size_t item_size = sizeof(ros_message.protocol_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
max_serialized_size_DynamixelLoadInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: device_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: baud_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: protocol_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dynamixel_workbench_msgs::msg::DynamixelLoadInfo;
    is_plain =
      (
      offsetof(DataType, protocol_version) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DynamixelLoadInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dynamixel_workbench_msgs::msg::DynamixelLoadInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DynamixelLoadInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dynamixel_workbench_msgs::msg::DynamixelLoadInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DynamixelLoadInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dynamixel_workbench_msgs::msg::DynamixelLoadInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DynamixelLoadInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DynamixelLoadInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DynamixelLoadInfo__callbacks = {
  "dynamixel_workbench_msgs::msg",
  "DynamixelLoadInfo",
  _DynamixelLoadInfo__cdr_serialize,
  _DynamixelLoadInfo__cdr_deserialize,
  _DynamixelLoadInfo__get_serialized_size,
  _DynamixelLoadInfo__max_serialized_size
};

static rosidl_message_type_support_t _DynamixelLoadInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DynamixelLoadInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dynamixel_workbench_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dynamixel_workbench_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_workbench_msgs::msg::DynamixelLoadInfo>()
{
  return &dynamixel_workbench_msgs::msg::typesupport_fastrtps_cpp::_DynamixelLoadInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_workbench_msgs, msg, DynamixelLoadInfo)() {
  return &dynamixel_workbench_msgs::msg::typesupport_fastrtps_cpp::_DynamixelLoadInfo__handle;
}

#ifdef __cplusplus
}
#endif
