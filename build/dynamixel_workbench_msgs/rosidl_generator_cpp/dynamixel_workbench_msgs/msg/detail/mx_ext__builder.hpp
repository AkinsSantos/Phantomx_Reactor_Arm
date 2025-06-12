// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_workbench_msgs:msg/MXExt.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX_EXT__BUILDER_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX_EXT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_workbench_msgs/msg/detail/mx_ext__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_workbench_msgs
{

namespace msg
{

namespace builder
{

class Init_MXExt_goal_acceleration
{
public:
  explicit Init_MXExt_goal_acceleration(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  ::dynamixel_workbench_msgs::msg::MXExt goal_acceleration(::dynamixel_workbench_msgs::msg::MXExt::_goal_acceleration_type arg)
  {
    msg_.goal_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_goal_torque
{
public:
  explicit Init_MXExt_goal_torque(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_goal_acceleration goal_torque(::dynamixel_workbench_msgs::msg::MXExt::_goal_torque_type arg)
  {
    msg_.goal_torque = std::move(arg);
    return Init_MXExt_goal_acceleration(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_torque_control_mode_enable
{
public:
  explicit Init_MXExt_torque_control_mode_enable(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_goal_torque torque_control_mode_enable(::dynamixel_workbench_msgs::msg::MXExt::_torque_control_mode_enable_type arg)
  {
    msg_.torque_control_mode_enable = std::move(arg);
    return Init_MXExt_goal_torque(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_current
{
public:
  explicit Init_MXExt_current(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_torque_control_mode_enable current(::dynamixel_workbench_msgs::msg::MXExt::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_MXExt_torque_control_mode_enable(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_punch
{
public:
  explicit Init_MXExt_punch(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_current punch(::dynamixel_workbench_msgs::msg::MXExt::_punch_type arg)
  {
    msg_.punch = std::move(arg);
    return Init_MXExt_current(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_lock
{
public:
  explicit Init_MXExt_lock(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_punch lock(::dynamixel_workbench_msgs::msg::MXExt::_lock_type arg)
  {
    msg_.lock = std::move(arg);
    return Init_MXExt_punch(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_moving
{
public:
  explicit Init_MXExt_moving(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_lock moving(::dynamixel_workbench_msgs::msg::MXExt::_moving_type arg)
  {
    msg_.moving = std::move(arg);
    return Init_MXExt_lock(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_registered
{
public:
  explicit Init_MXExt_registered(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_moving registered(::dynamixel_workbench_msgs::msg::MXExt::_registered_type arg)
  {
    msg_.registered = std::move(arg);
    return Init_MXExt_moving(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_present_temperature
{
public:
  explicit Init_MXExt_present_temperature(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_registered present_temperature(::dynamixel_workbench_msgs::msg::MXExt::_present_temperature_type arg)
  {
    msg_.present_temperature = std::move(arg);
    return Init_MXExt_registered(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_present_voltage
{
public:
  explicit Init_MXExt_present_voltage(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_present_temperature present_voltage(::dynamixel_workbench_msgs::msg::MXExt::_present_voltage_type arg)
  {
    msg_.present_voltage = std::move(arg);
    return Init_MXExt_present_temperature(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_present_load
{
public:
  explicit Init_MXExt_present_load(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_present_voltage present_load(::dynamixel_workbench_msgs::msg::MXExt::_present_load_type arg)
  {
    msg_.present_load = std::move(arg);
    return Init_MXExt_present_voltage(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_present_speed
{
public:
  explicit Init_MXExt_present_speed(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_present_load present_speed(::dynamixel_workbench_msgs::msg::MXExt::_present_speed_type arg)
  {
    msg_.present_speed = std::move(arg);
    return Init_MXExt_present_load(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_present_position
{
public:
  explicit Init_MXExt_present_position(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_present_speed present_position(::dynamixel_workbench_msgs::msg::MXExt::_present_position_type arg)
  {
    msg_.present_position = std::move(arg);
    return Init_MXExt_present_speed(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_torque_limit
{
public:
  explicit Init_MXExt_torque_limit(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_present_position torque_limit(::dynamixel_workbench_msgs::msg::MXExt::_torque_limit_type arg)
  {
    msg_.torque_limit = std::move(arg);
    return Init_MXExt_present_position(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_moving_speed
{
public:
  explicit Init_MXExt_moving_speed(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_torque_limit moving_speed(::dynamixel_workbench_msgs::msg::MXExt::_moving_speed_type arg)
  {
    msg_.moving_speed = std::move(arg);
    return Init_MXExt_torque_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_goal_position
{
public:
  explicit Init_MXExt_goal_position(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_moving_speed goal_position(::dynamixel_workbench_msgs::msg::MXExt::_goal_position_type arg)
  {
    msg_.goal_position = std::move(arg);
    return Init_MXExt_moving_speed(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_p_gain
{
public:
  explicit Init_MXExt_p_gain(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_goal_position p_gain(::dynamixel_workbench_msgs::msg::MXExt::_p_gain_type arg)
  {
    msg_.p_gain = std::move(arg);
    return Init_MXExt_goal_position(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_i_gain
{
public:
  explicit Init_MXExt_i_gain(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_p_gain i_gain(::dynamixel_workbench_msgs::msg::MXExt::_i_gain_type arg)
  {
    msg_.i_gain = std::move(arg);
    return Init_MXExt_p_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_d_gain
{
public:
  explicit Init_MXExt_d_gain(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_i_gain d_gain(::dynamixel_workbench_msgs::msg::MXExt::_d_gain_type arg)
  {
    msg_.d_gain = std::move(arg);
    return Init_MXExt_i_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_led
{
public:
  explicit Init_MXExt_led(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_d_gain led(::dynamixel_workbench_msgs::msg::MXExt::_led_type arg)
  {
    msg_.led = std::move(arg);
    return Init_MXExt_d_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_torque_enable
{
public:
  explicit Init_MXExt_torque_enable(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_led torque_enable(::dynamixel_workbench_msgs::msg::MXExt::_torque_enable_type arg)
  {
    msg_.torque_enable = std::move(arg);
    return Init_MXExt_led(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_resolution_divider
{
public:
  explicit Init_MXExt_resolution_divider(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_torque_enable resolution_divider(::dynamixel_workbench_msgs::msg::MXExt::_resolution_divider_type arg)
  {
    msg_.resolution_divider = std::move(arg);
    return Init_MXExt_torque_enable(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_multi_turn_offset
{
public:
  explicit Init_MXExt_multi_turn_offset(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_resolution_divider multi_turn_offset(::dynamixel_workbench_msgs::msg::MXExt::_multi_turn_offset_type arg)
  {
    msg_.multi_turn_offset = std::move(arg);
    return Init_MXExt_resolution_divider(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_shutdown
{
public:
  explicit Init_MXExt_shutdown(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_multi_turn_offset shutdown(::dynamixel_workbench_msgs::msg::MXExt::_shutdown_type arg)
  {
    msg_.shutdown = std::move(arg);
    return Init_MXExt_multi_turn_offset(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_alarm_led
{
public:
  explicit Init_MXExt_alarm_led(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_shutdown alarm_led(::dynamixel_workbench_msgs::msg::MXExt::_alarm_led_type arg)
  {
    msg_.alarm_led = std::move(arg);
    return Init_MXExt_shutdown(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_status_return_level
{
public:
  explicit Init_MXExt_status_return_level(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_alarm_led status_return_level(::dynamixel_workbench_msgs::msg::MXExt::_status_return_level_type arg)
  {
    msg_.status_return_level = std::move(arg);
    return Init_MXExt_alarm_led(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_max_torque
{
public:
  explicit Init_MXExt_max_torque(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_status_return_level max_torque(::dynamixel_workbench_msgs::msg::MXExt::_max_torque_type arg)
  {
    msg_.max_torque = std::move(arg);
    return Init_MXExt_status_return_level(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_max_voltage_limit
{
public:
  explicit Init_MXExt_max_voltage_limit(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_max_torque max_voltage_limit(::dynamixel_workbench_msgs::msg::MXExt::_max_voltage_limit_type arg)
  {
    msg_.max_voltage_limit = std::move(arg);
    return Init_MXExt_max_torque(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_min_voltage_limit
{
public:
  explicit Init_MXExt_min_voltage_limit(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_max_voltage_limit min_voltage_limit(::dynamixel_workbench_msgs::msg::MXExt::_min_voltage_limit_type arg)
  {
    msg_.min_voltage_limit = std::move(arg);
    return Init_MXExt_max_voltage_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_temperature_limit
{
public:
  explicit Init_MXExt_temperature_limit(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_min_voltage_limit temperature_limit(::dynamixel_workbench_msgs::msg::MXExt::_temperature_limit_type arg)
  {
    msg_.temperature_limit = std::move(arg);
    return Init_MXExt_min_voltage_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_ccw_angle_limit
{
public:
  explicit Init_MXExt_ccw_angle_limit(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_temperature_limit ccw_angle_limit(::dynamixel_workbench_msgs::msg::MXExt::_ccw_angle_limit_type arg)
  {
    msg_.ccw_angle_limit = std::move(arg);
    return Init_MXExt_temperature_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_cw_angle_limit
{
public:
  explicit Init_MXExt_cw_angle_limit(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_ccw_angle_limit cw_angle_limit(::dynamixel_workbench_msgs::msg::MXExt::_cw_angle_limit_type arg)
  {
    msg_.cw_angle_limit = std::move(arg);
    return Init_MXExt_ccw_angle_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_return_delay_time
{
public:
  explicit Init_MXExt_return_delay_time(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_cw_angle_limit return_delay_time(::dynamixel_workbench_msgs::msg::MXExt::_return_delay_time_type arg)
  {
    msg_.return_delay_time = std::move(arg);
    return Init_MXExt_cw_angle_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_baud_rate
{
public:
  explicit Init_MXExt_baud_rate(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_return_delay_time baud_rate(::dynamixel_workbench_msgs::msg::MXExt::_baud_rate_type arg)
  {
    msg_.baud_rate = std::move(arg);
    return Init_MXExt_return_delay_time(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_model_id
{
public:
  explicit Init_MXExt_model_id(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_baud_rate model_id(::dynamixel_workbench_msgs::msg::MXExt::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_MXExt_baud_rate(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_firmware_version
{
public:
  explicit Init_MXExt_firmware_version(::dynamixel_workbench_msgs::msg::MXExt & msg)
  : msg_(msg)
  {}
  Init_MXExt_model_id firmware_version(::dynamixel_workbench_msgs::msg::MXExt::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_MXExt_model_id(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

class Init_MXExt_model_number
{
public:
  Init_MXExt_model_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MXExt_firmware_version model_number(::dynamixel_workbench_msgs::msg::MXExt::_model_number_type arg)
  {
    msg_.model_number = std::move(arg);
    return Init_MXExt_firmware_version(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::MXExt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_workbench_msgs::msg::MXExt>()
{
  return dynamixel_workbench_msgs::msg::builder::Init_MXExt_model_number();
}

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX_EXT__BUILDER_HPP_
