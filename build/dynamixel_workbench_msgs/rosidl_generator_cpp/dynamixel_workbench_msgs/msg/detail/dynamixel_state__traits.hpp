// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelState.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__TRAITS_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamixel_workbench_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynamixelState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: present_position
  {
    out << "present_position: ";
    rosidl_generator_traits::value_to_yaml(msg.present_position, out);
    out << ", ";
  }

  // member: present_velocity
  {
    out << "present_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.present_velocity, out);
    out << ", ";
  }

  // member: present_current
  {
    out << "present_current: ";
    rosidl_generator_traits::value_to_yaml(msg.present_current, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamixelState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: present_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present_position: ";
    rosidl_generator_traits::value_to_yaml(msg.present_position, out);
    out << "\n";
  }

  // member: present_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.present_velocity, out);
    out << "\n";
  }

  // member: present_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present_current: ";
    rosidl_generator_traits::value_to_yaml(msg.present_current, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamixelState & msg, bool use_flow_style = false)
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
  const dynamixel_workbench_msgs::msg::DynamixelState & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_workbench_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_workbench_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_workbench_msgs::msg::DynamixelState & msg)
{
  return dynamixel_workbench_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_workbench_msgs::msg::DynamixelState>()
{
  return "dynamixel_workbench_msgs::msg::DynamixelState";
}

template<>
inline const char * name<dynamixel_workbench_msgs::msg::DynamixelState>()
{
  return "dynamixel_workbench_msgs/msg/DynamixelState";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::msg::DynamixelState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::msg::DynamixelState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamixel_workbench_msgs::msg::DynamixelState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__TRAITS_HPP_
