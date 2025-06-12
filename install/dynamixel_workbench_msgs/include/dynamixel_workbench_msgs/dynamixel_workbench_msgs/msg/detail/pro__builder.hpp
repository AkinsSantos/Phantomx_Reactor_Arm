// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_workbench_msgs:msg/PRO.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__PRO__BUILDER_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__PRO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_workbench_msgs/msg/detail/pro__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_workbench_msgs
{

namespace msg
{

namespace builder
{

class Init_PRO_hardware_error_status
{
public:
  explicit Init_PRO_hardware_error_status(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  ::dynamixel_workbench_msgs::msg::PRO hardware_error_status(::dynamixel_workbench_msgs::msg::PRO::_hardware_error_status_type arg)
  {
    msg_.hardware_error_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_status_return_level
{
public:
  explicit Init_PRO_status_return_level(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_hardware_error_status status_return_level(::dynamixel_workbench_msgs::msg::PRO::_status_return_level_type arg)
  {
    msg_.status_return_level = std::move(arg);
    return Init_PRO_hardware_error_status(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_registered_instruction
{
public:
  explicit Init_PRO_registered_instruction(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_status_return_level registered_instruction(::dynamixel_workbench_msgs::msg::PRO::_registered_instruction_type arg)
  {
    msg_.registered_instruction = std::move(arg);
    return Init_PRO_status_return_level(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_present_temperature
{
public:
  explicit Init_PRO_present_temperature(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_registered_instruction present_temperature(::dynamixel_workbench_msgs::msg::PRO::_present_temperature_type arg)
  {
    msg_.present_temperature = std::move(arg);
    return Init_PRO_registered_instruction(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_present_input_voltage
{
public:
  explicit Init_PRO_present_input_voltage(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_present_temperature present_input_voltage(::dynamixel_workbench_msgs::msg::PRO::_present_input_voltage_type arg)
  {
    msg_.present_input_voltage = std::move(arg);
    return Init_PRO_present_temperature(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_present_current
{
public:
  explicit Init_PRO_present_current(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_present_input_voltage present_current(::dynamixel_workbench_msgs::msg::PRO::_present_current_type arg)
  {
    msg_.present_current = std::move(arg);
    return Init_PRO_present_input_voltage(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_present_velocity
{
public:
  explicit Init_PRO_present_velocity(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_present_current present_velocity(::dynamixel_workbench_msgs::msg::PRO::_present_velocity_type arg)
  {
    msg_.present_velocity = std::move(arg);
    return Init_PRO_present_current(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_present_position
{
public:
  explicit Init_PRO_present_position(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_present_velocity present_position(::dynamixel_workbench_msgs::msg::PRO::_present_position_type arg)
  {
    msg_.present_position = std::move(arg);
    return Init_PRO_present_velocity(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_moving
{
public:
  explicit Init_PRO_moving(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_present_position moving(::dynamixel_workbench_msgs::msg::PRO::_moving_type arg)
  {
    msg_.moving = std::move(arg);
    return Init_PRO_present_position(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_goal_acceleration
{
public:
  explicit Init_PRO_goal_acceleration(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_moving goal_acceleration(::dynamixel_workbench_msgs::msg::PRO::_goal_acceleration_type arg)
  {
    msg_.goal_acceleration = std::move(arg);
    return Init_PRO_moving(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_goal_torque
{
public:
  explicit Init_PRO_goal_torque(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_goal_acceleration goal_torque(::dynamixel_workbench_msgs::msg::PRO::_goal_torque_type arg)
  {
    msg_.goal_torque = std::move(arg);
    return Init_PRO_goal_acceleration(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_goal_velocity
{
public:
  explicit Init_PRO_goal_velocity(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_goal_torque goal_velocity(::dynamixel_workbench_msgs::msg::PRO::_goal_velocity_type arg)
  {
    msg_.goal_velocity = std::move(arg);
    return Init_PRO_goal_torque(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_goal_position
{
public:
  explicit Init_PRO_goal_position(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_goal_velocity goal_position(::dynamixel_workbench_msgs::msg::PRO::_goal_position_type arg)
  {
    msg_.goal_position = std::move(arg);
    return Init_PRO_goal_velocity(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_position_p_gain
{
public:
  explicit Init_PRO_position_p_gain(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_goal_position position_p_gain(::dynamixel_workbench_msgs::msg::PRO::_position_p_gain_type arg)
  {
    msg_.position_p_gain = std::move(arg);
    return Init_PRO_goal_position(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_velocity_p_gain
{
public:
  explicit Init_PRO_velocity_p_gain(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_position_p_gain velocity_p_gain(::dynamixel_workbench_msgs::msg::PRO::_velocity_p_gain_type arg)
  {
    msg_.velocity_p_gain = std::move(arg);
    return Init_PRO_position_p_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_velocity_i_gain
{
public:
  explicit Init_PRO_velocity_i_gain(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_velocity_p_gain velocity_i_gain(::dynamixel_workbench_msgs::msg::PRO::_velocity_i_gain_type arg)
  {
    msg_.velocity_i_gain = std::move(arg);
    return Init_PRO_velocity_p_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_led_blue
{
public:
  explicit Init_PRO_led_blue(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_velocity_i_gain led_blue(::dynamixel_workbench_msgs::msg::PRO::_led_blue_type arg)
  {
    msg_.led_blue = std::move(arg);
    return Init_PRO_velocity_i_gain(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_led_green
{
public:
  explicit Init_PRO_led_green(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_led_blue led_green(::dynamixel_workbench_msgs::msg::PRO::_led_green_type arg)
  {
    msg_.led_green = std::move(arg);
    return Init_PRO_led_blue(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_led_red
{
public:
  explicit Init_PRO_led_red(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_led_green led_red(::dynamixel_workbench_msgs::msg::PRO::_led_red_type arg)
  {
    msg_.led_red = std::move(arg);
    return Init_PRO_led_green(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_torque_enable
{
public:
  explicit Init_PRO_torque_enable(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_led_red torque_enable(::dynamixel_workbench_msgs::msg::PRO::_torque_enable_type arg)
  {
    msg_.torque_enable = std::move(arg);
    return Init_PRO_led_red(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_shutdown
{
public:
  explicit Init_PRO_shutdown(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_torque_enable shutdown(::dynamixel_workbench_msgs::msg::PRO::_shutdown_type arg)
  {
    msg_.shutdown = std::move(arg);
    return Init_PRO_torque_enable(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_external_port_mode_4
{
public:
  explicit Init_PRO_external_port_mode_4(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_shutdown external_port_mode_4(::dynamixel_workbench_msgs::msg::PRO::_external_port_mode_4_type arg)
  {
    msg_.external_port_mode_4 = std::move(arg);
    return Init_PRO_shutdown(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_external_port_mode_3
{
public:
  explicit Init_PRO_external_port_mode_3(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_external_port_mode_4 external_port_mode_3(::dynamixel_workbench_msgs::msg::PRO::_external_port_mode_3_type arg)
  {
    msg_.external_port_mode_3 = std::move(arg);
    return Init_PRO_external_port_mode_4(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_external_port_mode_2
{
public:
  explicit Init_PRO_external_port_mode_2(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_external_port_mode_3 external_port_mode_2(::dynamixel_workbench_msgs::msg::PRO::_external_port_mode_2_type arg)
  {
    msg_.external_port_mode_2 = std::move(arg);
    return Init_PRO_external_port_mode_3(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_external_port_mode_1
{
public:
  explicit Init_PRO_external_port_mode_1(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_external_port_mode_2 external_port_mode_1(::dynamixel_workbench_msgs::msg::PRO::_external_port_mode_1_type arg)
  {
    msg_.external_port_mode_1 = std::move(arg);
    return Init_PRO_external_port_mode_2(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_min_position_limit
{
public:
  explicit Init_PRO_min_position_limit(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_external_port_mode_1 min_position_limit(::dynamixel_workbench_msgs::msg::PRO::_min_position_limit_type arg)
  {
    msg_.min_position_limit = std::move(arg);
    return Init_PRO_external_port_mode_1(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_max_position_limit
{
public:
  explicit Init_PRO_max_position_limit(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_min_position_limit max_position_limit(::dynamixel_workbench_msgs::msg::PRO::_max_position_limit_type arg)
  {
    msg_.max_position_limit = std::move(arg);
    return Init_PRO_min_position_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_velocity_limit
{
public:
  explicit Init_PRO_velocity_limit(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_max_position_limit velocity_limit(::dynamixel_workbench_msgs::msg::PRO::_velocity_limit_type arg)
  {
    msg_.velocity_limit = std::move(arg);
    return Init_PRO_max_position_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_torque_limit
{
public:
  explicit Init_PRO_torque_limit(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_velocity_limit torque_limit(::dynamixel_workbench_msgs::msg::PRO::_torque_limit_type arg)
  {
    msg_.torque_limit = std::move(arg);
    return Init_PRO_velocity_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_acceleration_limit
{
public:
  explicit Init_PRO_acceleration_limit(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_torque_limit acceleration_limit(::dynamixel_workbench_msgs::msg::PRO::_acceleration_limit_type arg)
  {
    msg_.acceleration_limit = std::move(arg);
    return Init_PRO_torque_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_min_voltage_limit
{
public:
  explicit Init_PRO_min_voltage_limit(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_acceleration_limit min_voltage_limit(::dynamixel_workbench_msgs::msg::PRO::_min_voltage_limit_type arg)
  {
    msg_.min_voltage_limit = std::move(arg);
    return Init_PRO_acceleration_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_max_voltage_limit
{
public:
  explicit Init_PRO_max_voltage_limit(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_min_voltage_limit max_voltage_limit(::dynamixel_workbench_msgs::msg::PRO::_max_voltage_limit_type arg)
  {
    msg_.max_voltage_limit = std::move(arg);
    return Init_PRO_min_voltage_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_temperature_limit
{
public:
  explicit Init_PRO_temperature_limit(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_max_voltage_limit temperature_limit(::dynamixel_workbench_msgs::msg::PRO::_temperature_limit_type arg)
  {
    msg_.temperature_limit = std::move(arg);
    return Init_PRO_max_voltage_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_moving_threshold
{
public:
  explicit Init_PRO_moving_threshold(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_temperature_limit moving_threshold(::dynamixel_workbench_msgs::msg::PRO::_moving_threshold_type arg)
  {
    msg_.moving_threshold = std::move(arg);
    return Init_PRO_temperature_limit(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_operating_mode
{
public:
  explicit Init_PRO_operating_mode(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_moving_threshold operating_mode(::dynamixel_workbench_msgs::msg::PRO::_operating_mode_type arg)
  {
    msg_.operating_mode = std::move(arg);
    return Init_PRO_moving_threshold(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_return_delay_time
{
public:
  explicit Init_PRO_return_delay_time(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_operating_mode return_delay_time(::dynamixel_workbench_msgs::msg::PRO::_return_delay_time_type arg)
  {
    msg_.return_delay_time = std::move(arg);
    return Init_PRO_operating_mode(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_baud_rate
{
public:
  explicit Init_PRO_baud_rate(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_return_delay_time baud_rate(::dynamixel_workbench_msgs::msg::PRO::_baud_rate_type arg)
  {
    msg_.baud_rate = std::move(arg);
    return Init_PRO_return_delay_time(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_model_id
{
public:
  explicit Init_PRO_model_id(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_baud_rate model_id(::dynamixel_workbench_msgs::msg::PRO::_model_id_type arg)
  {
    msg_.model_id = std::move(arg);
    return Init_PRO_baud_rate(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_firmware_version
{
public:
  explicit Init_PRO_firmware_version(::dynamixel_workbench_msgs::msg::PRO & msg)
  : msg_(msg)
  {}
  Init_PRO_model_id firmware_version(::dynamixel_workbench_msgs::msg::PRO::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_PRO_model_id(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

class Init_PRO_model_number
{
public:
  Init_PRO_model_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PRO_firmware_version model_number(::dynamixel_workbench_msgs::msg::PRO::_model_number_type arg)
  {
    msg_.model_number = std::move(arg);
    return Init_PRO_firmware_version(msg_);
  }

private:
  ::dynamixel_workbench_msgs::msg::PRO msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_workbench_msgs::msg::PRO>()
{
  return dynamixel_workbench_msgs::msg::builder::Init_PRO_model_number();
}

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__PRO__BUILDER_HPP_
