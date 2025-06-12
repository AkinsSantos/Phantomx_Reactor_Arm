// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_workbench_msgs:msg/XH.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XH__BUILDER_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_workbench_msgs/msg/detail/xh__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_workbench_msgs
{

namespace msg
{

namespace builder
{

class Init_XH_present_temperature
{
public:
  explicit Init_XH_present_temperature(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  ::dynamixel_workbench_msgs::msg::XH present_temperature(::dynamixel_workbench_msgs::msg::XH::_present_temperature_type arg)
  {
    msg_.present_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_present_input_voltage
{
public:
  explicit Init_XH_present_input_voltage(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_present_temperature present_input_voltage(::dynamixel_workbench_msgs::msg::XH::_present_input_voltage_type arg)
  {
    msg_.present_input_voltage = std::move(arg);
    return Init_XH_present_temperature(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_position_trajectory
{
public:
  explicit Init_XH_position_trajectory(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_present_input_voltage position_trajectory(::dynamixel_workbench_msgs::msg::XH::_position_trajectory_type arg)
  {
    msg_.position_trajectory = std::move(arg);
    return Init_XH_present_input_voltage(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_velocity_trajectory
{
public:
  explicit Init_XH_velocity_trajectory(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_position_trajectory velocity_trajectory(::dynamixel_workbench_msgs::msg::XH::_velocity_trajectory_type arg)
  {
    msg_.velocity_trajectory = std::move(arg);
    return Init_XH_position_trajectory(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_present_position
{
public:
  explicit Init_XH_present_position(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_velocity_trajectory present_position(::dynamixel_workbench_msgs::msg::XH::_present_position_type arg)
  {
    msg_.present_position = std::move(arg);
    return Init_XH_velocity_trajectory(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_present_velocity
{
public:
  explicit Init_XH_present_velocity(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_present_position present_velocity(::dynamixel_workbench_msgs::msg::XH::_present_velocity_type arg)
  {
    msg_.present_velocity = std::move(arg);
    return Init_XH_present_position(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_present_current
{
public:
  explicit Init_XH_present_current(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_present_velocity present_current(::dynamixel_workbench_msgs::msg::XH::_present_current_type arg)
  {
    msg_.present_current = std::move(arg);
    return Init_XH_present_velocity(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_present_pwm
{
public:
  explicit Init_XH_present_pwm(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_present_current present_pwm(::dynamixel_workbench_msgs::msg::XH::_present_pwm_type arg)
  {
    msg_.present_pwm = std::move(arg);
    return Init_XH_present_current(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_moving_status
{
public:
  explicit Init_XH_moving_status(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_present_pwm moving_status(::dynamixel_workbench_msgs::msg::XH::_moving_status_type arg)
  {
    msg_.moving_status = std::move(arg);
    return Init_XH_present_pwm(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_moving
{
public:
  explicit Init_XH_moving(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_moving_status moving(::dynamixel_workbench_msgs::msg::XH::_moving_type arg)
  {
    msg_.moving = std::move(arg);
    return Init_XH_moving_status(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_realtime_tick
{
public:
  explicit Init_XH_realtime_tick(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_moving realtime_tick(::dynamixel_workbench_msgs::msg::XH::_realtime_tick_type arg)
  {
    msg_.realtime_tick = std::move(arg);
    return Init_XH_moving(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_goal_position
{
public:
  explicit Init_XH_goal_position(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_realtime_tick goal_position(::dynamixel_workbench_msgs::msg::XH::_goal_position_type arg)
  {
    msg_.goal_position = std::move(arg);
    return Init_XH_realtime_tick(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_profile_velocity
{
public:
  explicit Init_XH_profile_velocity(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_goal_position profile_velocity(::dynamixel_workbench_msgs::msg::XH::_profile_velocity_type arg)
  {
    msg_.profile_velocity = std::move(arg);
    return Init_XH_goal_position(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_profile_acceleration
{
public:
  explicit Init_XH_profile_acceleration(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_profile_velocity profile_acceleration(::dynamixel_workbench_msgs::msg::XH::_profile_acceleration_type arg)
  {
    msg_.profile_acceleration = std::move(arg);
    return Init_XH_profile_velocity(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_goal_velocity
{
public:
  explicit Init_XH_goal_velocity(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_profile_acceleration goal_velocity(::dynamixel_workbench_msgs::msg::XH::_goal_velocity_type arg)
  {
    msg_.goal_velocity = std::move(arg);
    return Init_XH_profile_acceleration(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_goal_current
{
public:
  explicit Init_XH_goal_current(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_goal_velocity goal_current(::dynamixel_workbench_msgs::msg::XH::_goal_current_type arg)
  {
    msg_.goal_current = std::move(arg);
    return Init_XH_goal_velocity(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_goal_pwm
{
public:
  explicit Init_XH_goal_pwm(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_goal_current goal_pwm(::dynamixel_workbench_msgs::msg::XH::_goal_pwm_type arg)
  {
    msg_.goal_pwm = std::move(arg);
    return Init_XH_goal_current(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_bus_watchdog
{
public:
  explicit Init_XH_bus_watchdog(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_goal_pwm bus_watchdog(::dynamixel_workbench_msgs::msg::XH::_bus_watchdog_type arg)
  {
    msg_.bus_watchdog = std::move(arg);
    return Init_XH_goal_pwm(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_feedforward_1st_gain
{
public:
  explicit Init_XH_feedforward_1st_gain(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_bus_watchdog feedforward_1st_gain(::dynamixel_workbench_msgs::msg::XH::_feedforward_1st_gain_type arg)
  {
    msg_.feedforward_1st_gain = std::move(arg);
    return Init_XH_bus_watchdog(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_feedforward_2nd_gain
{
public:
  explicit Init_XH_feedforward_2nd_gain(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_feedforward_1st_gain feedforward_2nd_gain(::dynamixel_workbench_msgs::msg::XH::_feedforward_2nd_gain_type arg)
  {
    msg_.feedforward_2nd_gain = std::move(arg);
    return Init_XH_feedforward_1st_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_position_p_gain
{
public:
  explicit Init_XH_position_p_gain(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_feedforward_2nd_gain position_p_gain(::dynamixel_workbench_msgs::msg::XH::_position_p_gain_type arg)
  {
    msg_.position_p_gain = std::move(arg);
    return Init_XH_feedforward_2nd_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_position_i_gain
{
public:
  explicit Init_XH_position_i_gain(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_position_p_gain position_i_gain(::dynamixel_workbench_msgs::msg::XH::_position_i_gain_type arg)
  {
    msg_.position_i_gain = std::move(arg);
    return Init_XH_position_p_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_position_d_gain
{
public:
  explicit Init_XH_position_d_gain(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_position_i_gain position_d_gain(::dynamixel_workbench_msgs::msg::XH::_position_d_gain_type arg)
  {
    msg_.position_d_gain = std::move(arg);
    return Init_XH_position_i_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_velocity_p_gain
{
public:
  explicit Init_XH_velocity_p_gain(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_position_d_gain velocity_p_gain(::dynamixel_workbench_msgs::msg::XH::_velocity_p_gain_type arg)
  {
    msg_.velocity_p_gain = std::move(arg);
    return Init_XH_position_d_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_velocity_i_gain
{
public:
  explicit Init_XH_velocity_i_gain(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_velocity_p_gain velocity_i_gain(::dynamixel_workbench_msgs::msg::XH::_velocity_i_gain_type arg)
  {
    msg_.velocity_i_gain = std::move(arg);
    return Init_XH_velocity_p_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_hardware_error_status
{
public:
  explicit Init_XH_hardware_error_status(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_velocity_i_gain hardware_error_status(::dynamixel_workbench_msgs::msg::XH::_hardware_error_status_type arg)
  {
    msg_.hardware_error_status = std::move(arg);
    return Init_XH_velocity_i_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_registered_instruction
{
public:
  explicit Init_XH_registered_instruction(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_hardware_error_status registered_instruction(::dynamixel_workbench_msgs::msg::XH::_registered_instruction_type arg)
  {
    msg_.registered_instruction = std::move(arg);
    return Init_XH_hardware_error_status(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_status_return_level
{
public:
  explicit Init_XH_status_return_level(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_registered_instruction status_return_level(::dynamixel_workbench_msgs::msg::XH::_status_return_level_type arg)
  {
    msg_.status_return_level = std::move(arg);
    return Init_XH_registered_instruction(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_led
{
public:
  explicit Init_XH_led(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_status_return_level led(::dynamixel_workbench_msgs::msg::XH::_led_type arg)
  {
    msg_.led = std::move(arg);
    return Init_XH_status_return_level(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_torque_enable
{
public:
  explicit Init_XH_torque_enable(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_led torque_enable(::dynamixel_workbench_msgs::msg::XH::_torque_enable_type arg)
  {
    msg_.torque_enable = std::move(arg);
    return Init_XH_led(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_shutdown
{
public:
  explicit Init_XH_shutdown(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_torque_enable shutdown(::dynamixel_workbench_msgs::msg::XH::_shutdown_type arg)
  {
    msg_.shutdown = std::move(arg);
    return Init_XH_torque_enable(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_min_position_limit
{
public:
  explicit Init_XH_min_position_limit(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_shutdown min_position_limit(::dynamixel_workbench_msgs::msg::XH::_min_position_limit_type arg)
  {
    msg_.min_position_limit = std::move(arg);
    return Init_XH_shutdown(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_max_position_limit
{
public:
  explicit Init_XH_max_position_limit(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_min_position_limit max_position_limit(::dynamixel_workbench_msgs::msg::XH::_max_position_limit_type arg)
  {
    msg_.max_position_limit = std::move(arg);
    return Init_XH_min_position_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_velocity_limit
{
public:
  explicit Init_XH_velocity_limit(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_max_position_limit velocity_limit(::dynamixel_workbench_msgs::msg::XH::_velocity_limit_type arg)
  {
    msg_.velocity_limit = std::move(arg);
    return Init_XH_max_position_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_acceleration_limit
{
public:
  explicit Init_XH_acceleration_limit(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_velocity_limit acceleration_limit(::dynamixel_workbench_msgs::msg::XH::_acceleration_limit_type arg)
  {
    msg_.acceleration_limit = std::move(arg);
    return Init_XH_velocity_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_current_limit
{
public:
  explicit Init_XH_current_limit(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_acceleration_limit current_limit(::dynamixel_workbench_msgs::msg::XH::_current_limit_type arg)
  {
    msg_.current_limit = std::move(arg);
    return Init_XH_acceleration_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_pwm_limit
{
public:
  explicit Init_XH_pwm_limit(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_current_limit pwm_limit(::dynamixel_workbench_msgs::msg::XH::_pwm_limit_type arg)
  {
    msg_.pwm_limit = std::move(arg);
    return Init_XH_current_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_min_voltage_limit
{
public:
  explicit Init_XH_min_voltage_limit(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_pwm_limit min_voltage_limit(::dynamixel_workbench_msgs::msg::XH::_min_voltage_limit_type arg)
  {
    msg_.min_voltage_limit = std::move(arg);
    return Init_XH_pwm_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_max_voltage_limit
{
public:
  explicit Init_XH_max_voltage_limit(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_min_voltage_limit max_voltage_limit(::dynamixel_workbench_msgs::msg::XH::_max_voltage_limit_type arg)
  {
    msg_.max_voltage_limit = std::move(arg);
    return Init_XH_min_voltage_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_temperature_limit
{
public:
  explicit Init_XH_temperature_limit(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_max_voltage_limit temperature_limit(::dynamixel_workbench_msgs::msg::XH::_temperature_limit_type arg)
  {
    msg_.temperature_limit = std::move(arg);
    return Init_XH_max_voltage_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_moving_threshold
{
public:
  explicit Init_XH_moving_threshold(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_temperature_limit moving_threshold(::dynamixel_workbench_msgs::msg::XH::_moving_threshold_type arg)
  {
    msg_.moving_threshold = std::move(arg);
    return Init_XH_temperature_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_homing_offset
{
public:
  explicit Init_XH_homing_offset(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_moving_threshold homing_offset(::dynamixel_workbench_msgs::msg::XH::_homing_offset_type arg)
  {
    msg_.homing_offset = std::move(arg);
    return Init_XH_moving_threshold(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_protocol_version
{
public:
  explicit Init_XH_protocol_version(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_homing_offset protocol_version(::dynamixel_workbench_msgs::msg::XH::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_XH_homing_offset(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_secondary_id
{
public:
  explicit Init_XH_secondary_id(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_protocol_version secondary_id(::dynamixel_workbench_msgs::msg::XH::_secondary_id_type arg)
  {
    msg_.secondary_id = std::move(arg);
    return Init_XH_protocol_version(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_operating_mode
{
public:
  explicit Init_XH_operating_mode(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_secondary_id operating_mode(::dynamixel_workbench_msgs::msg::XH::_operating_mode_type arg)
  {
    msg_.operating_mode = std::move(arg);
    return Init_XH_secondary_id(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_drive_mode
{
public:
  explicit Init_XH_drive_mode(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_operating_mode drive_mode(::dynamixel_workbench_msgs::msg::XH::_drive_mode_type arg)
  {
    msg_.drive_mode = std::move(arg);
    return Init_XH_operating_mode(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_return_delay_time
{
public:
  explicit Init_XH_return_delay_time(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_drive_mode return_delay_time(::dynamixel_workbench_msgs::msg::XH::_return_delay_time_type arg)
  {
    msg_.return_delay_time = std::move(arg);
    return Init_XH_drive_mode(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_baud_rate
{
public:
  explicit Init_XH_baud_rate(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_return_delay_time baud_rate(::dynamixel_workbench_msgs::msg::XH::_baud_rate_type arg)
  {
    msg_.baud_rate = std::move(arg);
    return Init_XH_return_delay_time(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_model_id
{
public:
  explicit Init_XH_model_id(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_baud_rate model_id(::dynamixel_workbench_msgs::msg::XH::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_XH_baud_rate(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_firmware_version
{
public:
  explicit Init_XH_firmware_version(::dynamixel_workbench_msgs::msg::XH & msg)
  : msg_(msg)
  {}
  Init_XH_model_id firmware_version(::dynamixel_workbench_msgs::msg::XH::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_XH_model_id(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

class Init_XH_model_number
{
public:
  Init_XH_model_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_XH_firmware_version model_number(::dynamixel_workbench_msgs::msg::XH::_model_number_type arg)
  {
    msg_.model_number = std::move(arg);
    return Init_XH_firmware_version(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::XH msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_workbench_msgs::msg::XH>()
{
  return dynamixel_workbench_msgs::msg::builder::Init_XH_model_number();
}

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XH__BUILDER_HPP_
