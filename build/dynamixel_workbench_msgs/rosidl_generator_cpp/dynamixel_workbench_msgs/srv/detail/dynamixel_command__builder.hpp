// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_workbench_msgs:srv/DynamixelCommand.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__BUILDER_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_workbench_msgs/srv/detail/dynamixel_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_workbench_msgs
{

namespace srv
{

namespace builder
{

class Init_DynamixelCommand_Request_value
{
public:
  explicit Init_DynamixelCommand_Request_value(::dynamixel_workbench_msgs::srv::DynamixelCommand_Request & msg)
  : msg_(msg)
  {}
  ::dynamixel_workbench_msgs::srv::DynamixelCommand_Request value(::dynamixel_workbench_msgs::srv::DynamixelCommand_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_workbench_msgs::srv::DynamixelCommand_Request msg_;
};

class Init_DynamixelCommand_Request_addr_name
{
public:
  explicit Init_DynamixelCommand_Request_addr_name(::dynamixel_workbench_msgs::srv::DynamixelCommand_Request & msg)
  : msg_(msg)
  {}
  Init_DynamixelCommand_Request_value addr_name(::dynamixel_workbench_msgs::srv::DynamixelCommand_Request::_addr_name_type arg)
  {
    msg_.addr_name = std::move(arg);
    return Init_DynamixelCommand_Request_value(msg_);
  }

private:
  ::dynamixel_workbench_msgs::srv::DynamixelCommand_Request msg_;
};

class Init_DynamixelCommand_Request_id
{
public:
  explicit Init_DynamixelCommand_Request_id(::dynamixel_workbench_msgs::srv::DynamixelCommand_Request & msg)
  : msg_(msg)
  {}
  Init_DynamixelCommand_Request_addr_name id(::dynamixel_workbench_msgs::srv::DynamixelCommand_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DynamixelCommand_Request_addr_name(msg_);
  }

private:
  ::dynamixel_workbench_msgs::srv::DynamixelCommand_Request msg_;
};

class Init_DynamixelCommand_Request_command
{
public:
  Init_DynamixelCommand_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamixelCommand_Request_id command(::dynamixel_workbench_msgs::srv::DynamixelCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_DynamixelCommand_Request_id(msg_);
  }

private:
  ::dynamixel_workbench_msgs::srv::DynamixelCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_workbench_msgs::srv::DynamixelCommand_Request>()
{
  return dynamixel_workbench_msgs::srv::builder::Init_DynamixelCommand_Request_command();
}

}  // namespace dynamixel_workbench_msgs


namespace dynamixel_workbench_msgs
{

namespace srv
{

namespace builder
{

class Init_DynamixelCommand_Response_comm_result
{
public:
  Init_DynamixelCommand_Response_comm_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_workbench_msgs::srv::DynamixelCommand_Response comm_result(::dynamixel_workbench_msgs::srv::DynamixelCommand_Response::_comm_result_type arg)
  {
    msg_.comm_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_workbench_msgs::srv::DynamixelCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_workbench_msgs::srv::DynamixelCommand_Response>()
{
  return dynamixel_workbench_msgs::srv::builder::Init_DynamixelCommand_Response_comm_result();
}

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__BUILDER_HPP_
