// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelInfo.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__TRAITS_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_workbench_msgs/msg/detail/dynamixel_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'load_info'
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__traits.hpp"

namespace dynamixel_workbench_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynamixelInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: load_info
  {
    out << "load_info: ";
    to_flow_style_yaml(msg.load_info, out);
    out << ", ";
  }

  // member: model_name
  {
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << ", ";
  }

  // member: model_number
  {
    out << "model_number: ";
    rosidl_generator_traits::value_to_yaml(msg.model_number, out);
    out << ", ";
  }

  // member: model_id
  {
    out << "model_id: ";
    rosidl_generator_traits::value_to_yaml(msg.model_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamixelInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: load_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_info:\n";
    to_block_style_yaml(msg.load_info, out, indentation + 2);
  }

  // member: model_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << "\n";
  }

  // member: model_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_number: ";
    rosidl_generator_traits::value_to_yaml(msg.model_number, out);
    out << "\n";
  }

  // member: model_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_id: ";
    rosidl_generator_traits::value_to_yaml(msg.model_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamixelInfo & msg, bool use_flow_style = false)
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
  const dynamixel_workbench_msgs::msg::DynamixelInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_workbench_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_workbench_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_workbench_msgs::msg::DynamixelInfo & msg)
{
  return dynamixel_workbench_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_workbench_msgs::msg::DynamixelInfo>()
{
  return "dynamixel_workbench_msgs::msg::DynamixelInfo";
}

template<>
inline const char * name<dynamixel_workbench_msgs::msg::DynamixelInfo>()
{
  return "dynamixel_workbench_msgs/msg/DynamixelInfo";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::msg::DynamixelInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::msg::DynamixelInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamixel_workbench_msgs::msg::DynamixelInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__TRAITS_HPP_
