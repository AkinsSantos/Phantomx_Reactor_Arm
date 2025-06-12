// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelStateList.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE_LIST__TRAITS_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'dynamixel_state'
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state__traits.hpp"

namespace dynamixel_workbench_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynamixelStateList & msg,
  std::ostream & out)
{
  out << "{";
  // member: dynamixel_state
  {
    if (msg.dynamixel_state.size() == 0) {
      out << "dynamixel_state: []";
    } else {
      out << "dynamixel_state: [";
      size_t pending_items = msg.dynamixel_state.size();
      for (auto item : msg.dynamixel_state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamixelStateList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dynamixel_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dynamixel_state.size() == 0) {
      out << "dynamixel_state: []\n";
    } else {
      out << "dynamixel_state:\n";
      for (auto item : msg.dynamixel_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamixelStateList & msg, bool use_flow_style = false)
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
  const dynamixel_workbench_msgs::msg::DynamixelStateList & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_workbench_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_workbench_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_workbench_msgs::msg::DynamixelStateList & msg)
{
  return dynamixel_workbench_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_workbench_msgs::msg::DynamixelStateList>()
{
  return "dynamixel_workbench_msgs::msg::DynamixelStateList";
}

template<>
inline const char * name<dynamixel_workbench_msgs::msg::DynamixelStateList>()
{
  return "dynamixel_workbench_msgs/msg/DynamixelStateList";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::msg::DynamixelStateList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::msg::DynamixelStateList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamixel_workbench_msgs::msg::DynamixelStateList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE_LIST__TRAITS_HPP_
