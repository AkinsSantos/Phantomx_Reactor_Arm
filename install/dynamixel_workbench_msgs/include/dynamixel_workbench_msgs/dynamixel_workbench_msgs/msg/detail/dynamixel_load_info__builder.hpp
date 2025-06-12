// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelLoadInfo.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_LOAD_INFO__BUILDER_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_LOAD_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_workbench_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamixelLoadInfo_protocol_version
{
public:
  explicit Init_DynamixelLoadInfo_protocol_version(::dynamixel_workbench_msgs::msg::DynamixelLoadInfo & msg)
  : msg_(msg)
  {}
  ::dynamixel_workbench_msgs::msg::DynamixelLoadInfo protocol_version(::dynamixel_workbench_msgs::msg::DynamixelLoadInfo::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::DynamixelLoadInfo msg_;
};

class Init_DynamixelLoadInfo_baud_rate
{
public:
  explicit Init_DynamixelLoadInfo_baud_rate(::dynamixel_workbench_msgs::msg::DynamixelLoadInfo & msg)
  : msg_(msg)
  {}
  Init_DynamixelLoadInfo_protocol_version baud_rate(::dynamixel_workbench_msgs::msg::DynamixelLoadInfo::_baud_rate_type arg)
  {
    msg_.baud_rate = std::move(arg);
    return Init_DynamixelLoadInfo_protocol_version(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::DynamixelLoadInfo msg_;
};

class Init_DynamixelLoadInfo_device_name
{
public:
  Init_DynamixelLoadInfo_device_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamixelLoadInfo_baud_rate device_name(::dynamixel_workbench_msgs::msg::DynamixelLoadInfo::_device_name_type arg)
  {
    msg_.device_name = std::move(arg);
    return Init_DynamixelLoadInfo_baud_rate(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::DynamixelLoadInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_workbench_msgs::msg::DynamixelLoadInfo>()
{
  return dynamixel_workbench_msgs::msg::builder::Init_DynamixelLoadInfo_device_name();
}

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_LOAD_INFO__BUILDER_HPP_
