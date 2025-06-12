// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_workbench_msgs:msg/MX.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX__BUILDER_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_workbench_msgs/msg/detail/mx__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_workbench_msgs
{

namespace msg
{

namespace builder
{

class Init_MX_goal_acceleration
{
public:
  explicit Init_MX_goal_acceleration(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  ::dynamixel_workbench_msgs::msg::MX goal_acceleration(::dynamixel_workbench_msgs::msg::MX::_goal_acceleration_type arg)
  {
    msg_.goal_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_punch
{
public:
  explicit Init_MX_punch(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_goal_acceleration punch(::dynamixel_workbench_msgs::msg::MX::_punch_type arg)
  {
    msg_.punch = std::move(arg);
    return Init_MX_goal_acceleration(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_lock
{
public:
  explicit Init_MX_lock(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_punch lock(::dynamixel_workbench_msgs::msg::MX::_lock_type arg)
  {
    msg_.lock = std::move(arg);
    return Init_MX_punch(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_moving
{
public:
  explicit Init_MX_moving(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_lock moving(::dynamixel_workbench_msgs::msg::MX::_moving_type arg)
  {
    msg_.moving = std::move(arg);
    return Init_MX_lock(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_registered
{
public:
  explicit Init_MX_registered(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_moving registered(::dynamixel_workbench_msgs::msg::MX::_registered_type arg)
  {
    msg_.registered = std::move(arg);
    return Init_MX_moving(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_present_temperature
{
public:
  explicit Init_MX_present_temperature(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_registered present_temperature(::dynamixel_workbench_msgs::msg::MX::_present_temperature_type arg)
  {
    msg_.present_temperature = std::move(arg);
    return Init_MX_registered(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_present_voltage
{
public:
  explicit Init_MX_present_voltage(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_present_temperature present_voltage(::dynamixel_workbench_msgs::msg::MX::_present_voltage_type arg)
  {
    msg_.present_voltage = std::move(arg);
    return Init_MX_present_temperature(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_present_load
{
public:
  explicit Init_MX_present_load(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_present_voltage present_load(::dynamixel_workbench_msgs::msg::MX::_present_load_type arg)
  {
    msg_.present_load = std::move(arg);
    return Init_MX_present_voltage(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_present_speed
{
public:
  explicit Init_MX_present_speed(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_present_load present_speed(::dynamixel_workbench_msgs::msg::MX::_present_speed_type arg)
  {
    msg_.present_speed = std::move(arg);
    return Init_MX_present_load(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_present_position
{
public:
  explicit Init_MX_present_position(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_present_speed present_position(::dynamixel_workbench_msgs::msg::MX::_present_position_type arg)
  {
    msg_.present_position = std::move(arg);
    return Init_MX_present_speed(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_torque_limit
{
public:
  explicit Init_MX_torque_limit(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_present_position torque_limit(::dynamixel_workbench_msgs::msg::MX::_torque_limit_type arg)
  {
    msg_.torque_limit = std::move(arg);
    return Init_MX_present_position(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_moving_speed
{
public:
  explicit Init_MX_moving_speed(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_torque_limit moving_speed(::dynamixel_workbench_msgs::msg::MX::_moving_speed_type arg)
  {
    msg_.moving_speed = std::move(arg);
    return Init_MX_torque_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_goal_position
{
public:
  explicit Init_MX_goal_position(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_moving_speed goal_position(::dynamixel_workbench_msgs::msg::MX::_goal_position_type arg)
  {
    msg_.goal_position = std::move(arg);
    return Init_MX_moving_speed(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_p_gain
{
public:
  explicit Init_MX_p_gain(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_goal_position p_gain(::dynamixel_workbench_msgs::msg::MX::_p_gain_type arg)
  {
    msg_.p_gain = std::move(arg);
    return Init_MX_goal_position(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_i_gain
{
public:
  explicit Init_MX_i_gain(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_p_gain i_gain(::dynamixel_workbench_msgs::msg::MX::_i_gain_type arg)
  {
    msg_.i_gain = std::move(arg);
    return Init_MX_p_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_d_gain
{
public:
  explicit Init_MX_d_gain(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_i_gain d_gain(::dynamixel_workbench_msgs::msg::MX::_d_gain_type arg)
  {
    msg_.d_gain = std::move(arg);
    return Init_MX_i_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_led
{
public:
  explicit Init_MX_led(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_d_gain led(::dynamixel_workbench_msgs::msg::MX::_led_type arg)
  {
    msg_.led = std::move(arg);
    return Init_MX_d_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_torque_enable
{
public:
  explicit Init_MX_torque_enable(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_led torque_enable(::dynamixel_workbench_msgs::msg::MX::_torque_enable_type arg)
  {
    msg_.torque_enable = std::move(arg);
    return Init_MX_led(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_resolution_divider
{
public:
  explicit Init_MX_resolution_divider(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_torque_enable resolution_divider(::dynamixel_workbench_msgs::msg::MX::_resolution_divider_type arg)
  {
    msg_.resolution_divider = std::move(arg);
    return Init_MX_torque_enable(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_multi_turn_offset
{
public:
  explicit Init_MX_multi_turn_offset(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_resolution_divider multi_turn_offset(::dynamixel_workbench_msgs::msg::MX::_multi_turn_offset_type arg)
  {
    msg_.multi_turn_offset = std::move(arg);
    return Init_MX_resolution_divider(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_shutdown
{
public:
  explicit Init_MX_shutdown(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_multi_turn_offset shutdown(::dynamixel_workbench_msgs::msg::MX::_shutdown_type arg)
  {
    msg_.shutdown = std::move(arg);
    return Init_MX_multi_turn_offset(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_alarm_led
{
public:
  explicit Init_MX_alarm_led(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_shutdown alarm_led(::dynamixel_workbench_msgs::msg::MX::_alarm_led_type arg)
  {
    msg_.alarm_led = std::move(arg);
    return Init_MX_shutdown(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_status_return_level
{
public:
  explicit Init_MX_status_return_level(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_alarm_led status_return_level(::dynamixel_workbench_msgs::msg::MX::_status_return_level_type arg)
  {
    msg_.status_return_level = std::move(arg);
    return Init_MX_alarm_led(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_max_torque
{
public:
  explicit Init_MX_max_torque(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_status_return_level max_torque(::dynamixel_workbench_msgs::msg::MX::_max_torque_type arg)
  {
    msg_.max_torque = std::move(arg);
    return Init_MX_status_return_level(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_max_voltage_limit
{
public:
  explicit Init_MX_max_voltage_limit(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_max_torque max_voltage_limit(::dynamixel_workbench_msgs::msg::MX::_max_voltage_limit_type arg)
  {
    msg_.max_voltage_limit = std::move(arg);
    return Init_MX_max_torque(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_min_voltage_limit
{
public:
  explicit Init_MX_min_voltage_limit(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_max_voltage_limit min_voltage_limit(::dynamixel_workbench_msgs::msg::MX::_min_voltage_limit_type arg)
  {
    msg_.min_voltage_limit = std::move(arg);
    return Init_MX_max_voltage_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_temperature_limit
{
public:
  explicit Init_MX_temperature_limit(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_min_voltage_limit temperature_limit(::dynamixel_workbench_msgs::msg::MX::_temperature_limit_type arg)
  {
    msg_.temperature_limit = std::move(arg);
    return Init_MX_min_voltage_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_ccw_angle_limit
{
public:
  explicit Init_MX_ccw_angle_limit(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_temperature_limit ccw_angle_limit(::dynamixel_workbench_msgs::msg::MX::_ccw_angle_limit_type arg)
  {
    msg_.ccw_angle_limit = std::move(arg);
    return Init_MX_temperature_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_cw_angle_limit
{
public:
  explicit Init_MX_cw_angle_limit(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_ccw_angle_limit cw_angle_limit(::dynamixel_workbench_msgs::msg::MX::_cw_angle_limit_type arg)
  {
    msg_.cw_angle_limit = std::move(arg);
    return Init_MX_ccw_angle_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_return_delay_time
{
public:
  explicit Init_MX_return_delay_time(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_cw_angle_limit return_delay_time(::dynamixel_workbench_msgs::msg::MX::_return_delay_time_type arg)
  {
    msg_.return_delay_time = std::move(arg);
    return Init_MX_cw_angle_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_baud_rate
{
public:
  explicit Init_MX_baud_rate(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_return_delay_time baud_rate(::dynamixel_workbench_msgs::msg::MX::_baud_rate_type arg)
  {
    msg_.baud_rate = std::move(arg);
    return Init_MX_return_delay_time(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_model_id
{
public:
  explicit Init_MX_model_id(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_baud_rate model_id(::dynamixel_workbench_msgs::msg::MX::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_MX_baud_rate(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_firmware_version
{
public:
  explicit Init_MX_firmware_version(::dynamixel_workbench_msgs::msg::MX & msg)
  : msg_(msg)
  {}
  Init_MX_model_id firmware_version(::dynamixel_workbench_msgs::msg::MX::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_MX_model_id(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

class Init_MX_model_number
{
public:
  Init_MX_model_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MX_firmware_version model_number(::dynamixel_workbench_msgs::msg::MX::_model_number_type arg)
  {
    msg_.model_number = std::move(arg);
    return Init_MX_firmware_version(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MX msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_workbench_msgs::msg::MX>()
{
  return dynamixel_workbench_msgs::msg::builder::Init_MX_model_number();
}

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX__BUILDER_HPP_
