// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelLoadInfo.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_LOAD_INFO__TRAITS_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_LOAD_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamixel_workbench_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynamixelLoadInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: device_name
  {
    out << "device_name: ";
    rosidl_generator_traits::value_to_yaml(msg.device_name, out);
    out << ", ";
  }

  // member: baud_rate
  {
    out << "baud_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.baud_rate, out);
    out << ", ";
  }

  // member: protocol_version
  {
    out << "protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamixelLoadInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_name: ";
    rosidl_generator_traits::value_to_yaml(msg.device_name, out);
    out << "\n";
  }

  // member: baud_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baud_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.baud_rate, out);
    out << "\n";
  }

  // member: protocol_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamixelLoadInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dynamixel_workbench_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_workbench_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_workbench_msgs::msg::DynamixelLoadInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_workbench_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_workbench_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_workbench_msgs::msg::DynamixelLoadInfo & msg)
{
  return dynamixel_workbench_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_workbench_msgs::msg::DynamixelLoadInfo>()
{
  return "dynamixel_workbench_msgs::msg::DynamixelLoadInfo";
}

template<>
inline const char * name<dynamixel_workbench_msgs::msg::DynamixelLoadInfo>()
{
  return "dynamixel_workbench_msgs/msg/DynamixelLoadInfo";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::msg::DynamixelLoadInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::msg::DynamixelLoadInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamixel_workbench_msgs::msg::DynamixelLoadInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_LOAD_INFO__TRAITS_HPP_
