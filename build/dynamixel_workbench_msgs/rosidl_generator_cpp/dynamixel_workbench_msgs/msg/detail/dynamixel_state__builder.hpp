// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelState.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__BUILDER_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_workbench_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamixelState_present_current
{
public:
  explicit Init_DynamixelState_present_current(::dynamixel_workbench_msgs::msg::DynamixelState & msg)
  : msg_(msg)
  {}
  ::dynamixel_workbench_msgs::msg::DynamixelState present_current(::dynamixel_workbench_msgs::msg::DynamixelState::_present_current_type arg)
  {
    msg_.present_current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::DynamixelState msg_;
};

class Init_DynamixelState_present_velocity
{
public:
  explicit Init_DynamixelState_present_velocity(::dynamixel_workbench_msgs::msg::DynamixelState & msg)
  : msg_(msg)
  {}
  Init_DynamixelState_present_current present_velocity(::dynamixel_workbench_msgs::msg::DynamixelState::_present_velocity_type arg)
  {
    msg_.present_velocity = std::move(arg);
    return Init_DynamixelState_present_current(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::DynamixelState msg_;
};

class Init_DynamixelState_present_position
{
public:
  explicit Init_DynamixelState_present_position(::dynamixel_workbench_msgs::msg::DynamixelState & msg)
  : msg_(msg)
  {}
  Init_DynamixelState_present_velocity present_position(::dynamixel_workbench_msgs::msg::DynamixelState::_present_position_type arg)
  {
    msg_.present_position = std::move(arg);
    return Init_DynamixelState_present_velocity(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::DynamixelState msg_;
};

class Init_DynamixelState_id
{
public:
  explicit Init_DynamixelState_id(::dynamixel_workbench_msgs::msg::DynamixelState & msg)
  : msg_(msg)
  {}
  Init_DynamixelState_present_position id(::dynamixel_workbench_msgs::msg::DynamixelState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DynamixelState_present_position(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::DynamixelState msg_;
};

class Init_DynamixelState_name
{
public:
  Init_DynamixelState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamixelState_id name(::dynamixel_workbench_msgs::msg::DynamixelState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DynamixelState_id(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::DynamixelState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_workbench_msgs::msg::DynamixelState>()
{
  return dynamixel_workbench_msgs::msg::builder::Init_DynamixelState_name();
}

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__BUILDER_HPP_
