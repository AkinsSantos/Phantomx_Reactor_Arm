// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_workbench_msgs:srv/GetDynamixelInfo.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__GET_DYNAMIXEL_INFO__BUILDER_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__GET_DYNAMIXEL_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_workbench_msgs/srv/detail/get_dynamixel_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_workbench_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request>()
{
  return ::dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace dynamixel_workbench_msgs


namespace dynamixel_workbench_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDynamixelInfo_Response_dynamixel_info
{
public:
  Init_GetDynamixelInfo_Response_dynamixel_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response dynamixel_info(::dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response::_dynamixel_info_type arg)
  {
    msg_.dynamixel_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response>()
{
  return dynamixel_workbench_msgs::srv::builder::Init_GetDynamixelInfo_Response_dynamixel_info();
}

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__GET_DYNAMIXEL_INFO__BUILDER_HPP_
