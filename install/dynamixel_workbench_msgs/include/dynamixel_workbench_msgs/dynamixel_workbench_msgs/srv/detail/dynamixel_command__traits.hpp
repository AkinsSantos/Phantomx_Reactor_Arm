// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_workbench_msgs:srv/DynamixelCommand.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__TRAITS_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_workbench_msgs/srv/detail/dynamixel_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamixel_workbench_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DynamixelCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: addr_name
  {
    out << "addr_name: ";
    rosidl_generator_traits::value_to_yaml(msg.addr_name, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamixelCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
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

  // member: addr_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "addr_name: ";
    rosidl_generator_traits::value_to_yaml(msg.addr_name, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamixelCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamixel_workbench_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_workbench_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_workbench_msgs::srv::DynamixelCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_workbench_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_workbench_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_workbench_msgs::srv::DynamixelCommand_Request & msg)
{
  return dynamixel_workbench_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>()
{
  return "dynamixel_workbench_msgs::srv::DynamixelCommand_Request";
}

template<>
inline const char * name<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>()
{
  return "dynamixel_workbench_msgs/srv/DynamixelCommand_Request";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dynamixel_workbench_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DynamixelCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: comm_result
  {
    out << "comm_result: ";
    rosidl_generator_traits::value_to_yaml(msg.comm_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamixelCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: comm_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comm_result: ";
    rosidl_generator_traits::value_to_yaml(msg.comm_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamixelCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamixel_workbench_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_workbench_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_workbench_msgs::srv::DynamixelCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_workbench_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_workbench_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_workbench_msgs::srv::DynamixelCommand_Response & msg)
{
  return dynamixel_workbench_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>()
{
  return "dynamixel_workbench_msgs::srv::DynamixelCommand_Response";
}

template<>
inline const char * name<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>()
{
  return "dynamixel_workbench_msgs/srv/DynamixelCommand_Response";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamixel_workbench_msgs::srv::DynamixelCommand>()
{
  return "dynamixel_workbench_msgs::srv::DynamixelCommand";
}

template<>
inline const char * name<dynamixel_workbench_msgs::srv::DynamixelCommand>()
{
  return "dynamixel_workbench_msgs/srv/DynamixelCommand";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::srv::DynamixelCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>::value &&
    has_fixed_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::srv::DynamixelCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>::value &&
    has_bounded_size<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>::value
  >
{
};

template<>
struct is_service<dynamixel_workbench_msgs::srv::DynamixelCommand>
  : std::true_type
{
};

template<>
struct is_service_request<dynamixel_workbench_msgs::srv::DynamixelCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynamixel_workbench_msgs::srv::DynamixelCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__TRAITS_HPP_
