// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_workbench_msgs:msg/XL320.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XL320__BUILDER_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XL320__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_workbench_msgs/msg/detail/xl320__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_workbench_msgs
{

namespace msg
{

namespace builder
{

class Init_XL320_punch
{
public:
  explicit Init_XL320_punch(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  ::dynamixel_workbench_msgs::msg::XL320 punch(::dynamixel_workbench_msgs::msg::XL320::_punch_type arg)
  {
    msg_.punch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_hardware_error_status
{
public:
  explicit Init_XL320_hardware_error_status(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_punch hardware_error_status(::dynamixel_workbench_msgs::msg::XL320::_hardware_error_status_type arg)
  {
    msg_.hardware_error_status = std::move(arg);
    return Init_XL320_punch(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_moving
{
public:
  explicit Init_XL320_moving(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_hardware_error_status moving(::dynamixel_workbench_msgs::msg::XL320::_moving_type arg)
  {
    msg_.moving = std::move(arg);
    return Init_XL320_hardware_error_status(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_registered
{
public:
  explicit Init_XL320_registered(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_moving registered(::dynamixel_workbench_msgs::msg::XL320::_registered_type arg)
  {
    msg_.registered = std::move(arg);
    return Init_XL320_moving(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_present_temperature
{
public:
  explicit Init_XL320_present_temperature(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_registered present_temperature(::dynamixel_workbench_msgs::msg::XL320::_present_temperature_type arg)
  {
    msg_.present_temperature = std::move(arg);
    return Init_XL320_registered(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_present_voltage
{
public:
  explicit Init_XL320_present_voltage(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_present_temperature present_voltage(::dynamixel_workbench_msgs::msg::XL320::_present_voltage_type arg)
  {
    msg_.present_voltage = std::move(arg);
    return Init_XL320_present_temperature(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_present_load
{
public:
  explicit Init_XL320_present_load(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_present_voltage present_load(::dynamixel_workbench_msgs::msg::XL320::_present_load_type arg)
  {
    msg_.present_load = std::move(arg);
    return Init_XL320_present_voltage(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_present_speed
{
public:
  explicit Init_XL320_present_speed(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_present_load present_speed(::dynamixel_workbench_msgs::msg::XL320::_present_speed_type arg)
  {
    msg_.present_speed = std::move(arg);
    return Init_XL320_present_load(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_present_position
{
public:
  explicit Init_XL320_present_position(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_present_speed present_position(::dynamixel_workbench_msgs::msg::XL320::_present_position_type arg)
  {
    msg_.present_position = std::move(arg);
    return Init_XL320_present_speed(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_torque_limit
{
public:
  explicit Init_XL320_torque_limit(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_present_position torque_limit(::dynamixel_workbench_msgs::msg::XL320::_torque_limit_type arg)
  {
    msg_.torque_limit = std::move(arg);
    return Init_XL320_present_position(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_moving_speed
{
public:
  explicit Init_XL320_moving_speed(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_torque_limit moving_speed(::dynamixel_workbench_msgs::msg::XL320::_moving_speed_type arg)
  {
    msg_.moving_speed = std::move(arg);
    return Init_XL320_torque_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_goal_position
{
public:
  explicit Init_XL320_goal_position(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_moving_speed goal_position(::dynamixel_workbench_msgs::msg::XL320::_goal_position_type arg)
  {
    msg_.goal_position = std::move(arg);
    return Init_XL320_moving_speed(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_p_gain
{
public:
  explicit Init_XL320_p_gain(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_goal_position p_gain(::dynamixel_workbench_msgs::msg::XL320::_p_gain_type arg)
  {
    msg_.p_gain = std::move(arg);
    return Init_XL320_goal_position(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_i_gain
{
public:
  explicit Init_XL320_i_gain(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_p_gain i_gain(::dynamixel_workbench_msgs::msg::XL320::_i_gain_type arg)
  {
    msg_.i_gain = std::move(arg);
    return Init_XL320_p_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_d_gain
{
public:
  explicit Init_XL320_d_gain(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_i_gain d_gain(::dynamixel_workbench_msgs::msg::XL320::_d_gain_type arg)
  {
    msg_.d_gain = std::move(arg);
    return Init_XL320_i_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_led
{
public:
  explicit Init_XL320_led(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_d_gain led(::dynamixel_workbench_msgs::msg::XL320::_led_type arg)
  {
    msg_.led = std::move(arg);
    return Init_XL320_d_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_torque_enable
{
public:
  explicit Init_XL320_torque_enable(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_led torque_enable(::dynamixel_workbench_msgs::msg::XL320::_torque_enable_type arg)
  {
    msg_.torque_enable = std::move(arg);
    return Init_XL320_led(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_shutdown
{
public:
  explicit Init_XL320_shutdown(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_torque_enable shutdown(::dynamixel_workbench_msgs::msg::XL320::_shutdown_type arg)
  {
    msg_.shutdown = std::move(arg);
    return Init_XL320_torque_enable(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_status_return_level
{
public:
  explicit Init_XL320_status_return_level(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_shutdown status_return_level(::dynamixel_workbench_msgs::msg::XL320::_status_return_level_type arg)
  {
    msg_.status_return_level = std::move(arg);
    return Init_XL320_shutdown(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_max_torque
{
public:
  explicit Init_XL320_max_torque(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_status_return_level max_torque(::dynamixel_workbench_msgs::msg::XL320::_max_torque_type arg)
  {
    msg_.max_torque = std::move(arg);
    return Init_XL320_status_return_level(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_max_voltage_limit
{
public:
  explicit Init_XL320_max_voltage_limit(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_max_torque max_voltage_limit(::dynamixel_workbench_msgs::msg::XL320::_max_voltage_limit_type arg)
  {
    msg_.max_voltage_limit = std::move(arg);
    return Init_XL320_max_torque(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_min_voltage_limit
{
public:
  explicit Init_XL320_min_voltage_limit(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_max_voltage_limit min_voltage_limit(::dynamixel_workbench_msgs::msg::XL320::_min_voltage_limit_type arg)
  {
    msg_.min_voltage_limit = std::move(arg);
    return Init_XL320_max_voltage_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_temperature_limit
{
public:
  explicit Init_XL320_temperature_limit(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_min_voltage_limit temperature_limit(::dynamixel_workbench_msgs::msg::XL320::_temperature_limit_type arg)
  {
    msg_.temperature_limit = std::move(arg);
    return Init_XL320_min_voltage_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_control_mode
{
public:
  explicit Init_XL320_control_mode(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_temperature_limit control_mode(::dynamixel_workbench_msgs::msg::XL320::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_XL320_temperature_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_ccw_angle_limit
{
public:
  explicit Init_XL320_ccw_angle_limit(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_control_mode ccw_angle_limit(::dynamixel_workbench_msgs::msg::XL320::_ccw_angle_limit_type arg)
  {
    msg_.ccw_angle_limit = std::move(arg);
    return Init_XL320_control_mode(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_cw_angle_limit
{
public:
  explicit Init_XL320_cw_angle_limit(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_ccw_angle_limit cw_angle_limit(::dynamixel_workbench_msgs::msg::XL320::_cw_angle_limit_type arg)
  {
    msg_.cw_angle_limit = std::move(arg);
    return Init_XL320_ccw_angle_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_return_delay_time
{
public:
  explicit Init_XL320_return_delay_time(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_cw_angle_limit return_delay_time(::dynamixel_workbench_msgs::msg::XL320::_return_delay_time_type arg)
  {
    msg_.return_delay_time = std::move(arg);
    return Init_XL320_cw_angle_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_baud_rate
{
public:
  explicit Init_XL320_baud_rate(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_return_delay_time baud_rate(::dynamixel_workbench_msgs::msg::XL320::_baud_rate_type arg)
  {
    msg_.baud_rate = std::move(arg);
    return Init_XL320_return_delay_time(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_model_id
{
public:
  explicit Init_XL320_model_id(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_baud_rate model_id(::dynamixel_workbench_msgs::msg::XL320::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_XL320_baud_rate(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_firmware_version
{
public:
  explicit Init_XL320_firmware_version(::dynamixel_workbench_msgs::msg::XL320 & msg)
  : msg_(msg)
  {}
  Init_XL320_model_id firmware_version(::dynamixel_workbench_msgs::msg::XL320::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_XL320_model_id(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

class Init_XL320_model_number
{
public:
  Init_XL320_model_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_XL320_firmware_version model_number(::dynamixel_workbench_msgs::msg::XL320::_model_number_type arg)
  {
    msg_.model_number = std::move(arg);
    return Init_XL320_firmware_version(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XL320 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_workbench_msgs::msg::XL320>()
{
  return dynamixel_workbench_msgs::msg::builder::Init_XL320_model_number();
}

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XL320__BUILDER_HPP_
