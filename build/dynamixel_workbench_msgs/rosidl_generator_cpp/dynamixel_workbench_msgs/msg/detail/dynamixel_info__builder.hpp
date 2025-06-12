// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelInfo.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__BUILDER_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_workbench_msgs/msg/detail/dynamixel_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_workbench_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamixelInfo_model_id
{
public:
  explicit Init_DynamixelInfo_model_id(::dynamixel_workbench_msgs::msg::DynamixelInfo & msg)
  : msg_(msg)
  {}
  ::dynamixel_workbench_msgs::msg::DynamixelInfo model_id(::dynamixel_workbench_msgs::msg::DynamixelInfo::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::DynamixelInfo msg_;
};

class Init_DynamixelInfo_model_number
{
public:
  explicit Init_DynamixelInfo_model_number(::dynamixel_workbench_msgs::msg::DynamixelInfo & msg)
  : msg_(msg)
  {}
  Init_DynamixelInfo_model_id model_number(::dynamixel_workbench_msgs::msg::DynamixelInfo::_model_number_type arg)
  {
    msg_.model_number = std::move(arg);
    return Init_DynamixelInfo_model_id(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::DynamixelInfo msg_;
};

class Init_DynamixelInfo_model_name
{
public:
  explicit Init_DynamixelInfo_model_name(::dynamixel_workbench_msgs::msg::DynamixelInfo & msg)
  : msg_(msg)
  {}
  Init_DynamixelInfo_model_number model_name(::dynamixel_workbench_msgs::msg::DynamixelInfo::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_DynamixelInfo_model_number(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::DynamixelInfo msg_;
};

class Init_DynamixelInfo_load_info
{
public:
  Init_DynamixelInfo_load_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamixelInfo_model_name load_info(::dynamixel_workbench_msgs::msg::DynamixelInfo::_load_info_type arg)
  {
    msg_.load_info = std::move(arg);
    return Init_DynamixelInfo_model_name(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::DynamixelInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_workbench_msgs::msg::DynamixelInfo>()
{
  return dynamixel_workbench_msgs::msg::builder::Init_DynamixelInfo_load_info();
}

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__BUILDER_HPP_
