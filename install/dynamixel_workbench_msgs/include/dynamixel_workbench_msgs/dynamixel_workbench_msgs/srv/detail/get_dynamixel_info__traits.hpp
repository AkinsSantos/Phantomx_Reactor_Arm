// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_workbench_msgs:srv/GetDynamixelInfo.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__GET_DYNAMIXEL_INFO__TRAITS_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__GET_DYNAMIXEL_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_workbench_msgs/srv/detail/get_dynamixel_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamixel_workbench_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDynamixelInfo_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDynamixelInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDynamixelInfo_Request & msg, bool use_flow_style = false)
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
  const dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_workbench_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_workbench_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request & msg)
{
  return dynamixel_workbench_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request>()
{
  return "dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request";
}

template<>
inline const char * name<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request>()
{
  return "dynamixel_workbench_msgs/srv/GetDynamixelInfo_Request";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'dynamixel_info'
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_info__traits.hpp"

namespace dynamixel_workbench_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDynamixelInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: dynamixel_info
  {
    out << "dynamixel_info: ";
    to_flow_style_yaml(msg.dynamixel_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDynamixelInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dynamixel_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynamixel_info:\n";
    to_block_style_yaml(msg.dynamixel_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDynamixelInfo_Response & msg, bool use_flow_style = false)
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
  const dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_workbench_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_workbench_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response & msg)
{
  return dynamixel_workbench_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response>()
{
  return "dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response";
}

template<>
inline const char * name<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response>()
{
  return "dynamixel_workbench_msgs/srv/GetDynamixelInfo_Response";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response>
  : std::integral_constant<bool, has_fixed_size<dynamixel_workbench_msgs::msg::DynamixelInfo>::value> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response>
  : std::integral_constant<bool, has_bounded_size<dynamixel_workbench_msgs::msg::DynamixelInfo>::value> {};

template<>
struct is_message<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamixel_workbench_msgs::srv::GetDynamixelInfo>()
{
  return "dynamixel_workbench_msgs::srv::GetDynamixelInfo";
}

template<>
inline const char * name<dynamixel_workbench_msgs::srv::GetDynamixelInfo>()
{
  return "dynamixel_workbench_msgs/srv/GetDynamixelInfo";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::srv::GetDynamixelInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request>::value &&
    has_fixed_size<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::srv::GetDynamixelInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request>::value &&
    has_bounded_size<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response>::value
  >
{
};

template<>
struct is_service<dynamixel_workbench_msgs::srv::GetDynamixelInfo>
  : std::true_type
{
};

template<>
struct is_service_request<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__GET_DYNAMIXEL_INFO__TRAITS_HPP_
