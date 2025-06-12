// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_workbench_msgs:msg/PROExt.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__PRO_EXT__TRAITS_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__PRO_EXT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_workbench_msgs/msg/detail/pro_ext__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamixel_workbench_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PROExt & msg,
  std::ostream & out)
{
  out << "{";
  // member: model_number
  {
    out << "model_number: ";
    rosidl_generator_traits::value_to_yaml(msg.model_number, out);
    out << ", ";
  }

  // member: firmware_version
  {
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << ", ";
  }

  // member: model_id
  {
    out << "model_id: ";
    rosidl_generator_traits::value_to_yaml(msg.model_id, out);
    out << ", ";
  }

  // member: baud_rate
  {
    out << "baud_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.baud_rate, out);
    out << ", ";
  }

  // member: return_delay_time
  {
    out << "return_delay_time: ";
    rosidl_generator_traits::value_to_yaml(msg.return_delay_time, out);
    out << ", ";
  }

  // member: operating_mode
  {
    out << "operating_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operating_mode, out);
    out << ", ";
  }

  // member: homing_offset
  {
    out << "homing_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.homing_offset, out);
    out << ", ";
  }

  // member: moving_threshold
  {
    out << "moving_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_threshold, out);
    out << ", ";
  }

  // member: temperature_limit
  {
    out << "temperature_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_limit, out);
    out << ", ";
  }

  // member: max_voltage_limit
  {
    out << "max_voltage_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.max_voltage_limit, out);
    out << ", ";
  }

  // member: min_voltage_limit
  {
    out << "min_voltage_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.min_voltage_limit, out);
    out << ", ";
  }

  // member: acceleration_limit
  {
    out << "acceleration_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_limit, out);
    out << ", ";
  }

  // member: torque_limit
  {
    out << "torque_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_limit, out);
    out << ", ";
  }

  // member: velocity_limit
  {
    out << "velocity_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_limit, out);
    out << ", ";
  }

  // member: max_position_limit
  {
    out << "max_position_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.max_position_limit, out);
    out << ", ";
  }

  // member: min_position_limit
  {
    out << "min_position_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.min_position_limit, out);
    out << ", ";
  }

  // member: external_port_mode_1
  {
    out << "external_port_mode_1: ";
    rosidl_generator_traits::value_to_yaml(msg.external_port_mode_1, out);
    out << ", ";
  }

  // member: external_port_mode_2
  {
    out << "external_port_mode_2: ";
    rosidl_generator_traits::value_to_yaml(msg.external_port_mode_2, out);
    out << ", ";
  }

  // member: external_port_mode_3
  {
    out << "external_port_mode_3: ";
    rosidl_generator_traits::value_to_yaml(msg.external_port_mode_3, out);
    out << ", ";
  }

  // member: external_port_mode_4
  {
    out << "external_port_mode_4: ";
    rosidl_generator_traits::value_to_yaml(msg.external_port_mode_4, out);
    out << ", ";
  }

  // member: shutdown
  {
    out << "shutdown: ";
    rosidl_generator_traits::value_to_yaml(msg.shutdown, out);
    out << ", ";
  }

  // member: torque_enable
  {
    out << "torque_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_enable, out);
    out << ", ";
  }

  // member: led_red
  {
    out << "led_red: ";
    rosidl_generator_traits::value_to_yaml(msg.led_red, out);
    out << ", ";
  }

  // member: led_green
  {
    out << "led_green: ";
    rosidl_generator_traits::value_to_yaml(msg.led_green, out);
    out << ", ";
  }

  // member: led_blue
  {
    out << "led_blue: ";
    rosidl_generator_traits::value_to_yaml(msg.led_blue, out);
    out << ", ";
  }

  // member: velocity_i_gain
  {
    out << "velocity_i_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_i_gain, out);
    out << ", ";
  }

  // member: velocity_p_gain
  {
    out << "velocity_p_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_p_gain, out);
    out << ", ";
  }

  // member: position_p_gain
  {
    out << "position_p_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.position_p_gain, out);
    out << ", ";
  }

  // member: goal_position
  {
    out << "goal_position: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_position, out);
    out << ", ";
  }

  // member: goal_velocity
  {
    out << "goal_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_velocity, out);
    out << ", ";
  }

  // member: goal_torque
  {
    out << "goal_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_torque, out);
    out << ", ";
  }

  // member: goal_acceleration
  {
    out << "goal_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_acceleration, out);
    out << ", ";
  }

  // member: moving
  {
    out << "moving: ";
    rosidl_generator_traits::value_to_yaml(msg.moving, out);
    out << ", ";
  }

  // member: present_position
  {
    out << "present_position: ";
    rosidl_generator_traits::value_to_yaml(msg.present_position, out);
    out << ", ";
  }

  // member: present_velocity
  {
    out << "present_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.present_velocity, out);
    out << ", ";
  }

  // member: present_current
  {
    out << "present_current: ";
    rosidl_generator_traits::value_to_yaml(msg.present_current, out);
    out << ", ";
  }

  // member: present_input_voltage
  {
    out << "present_input_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.present_input_voltage, out);
    out << ", ";
  }

  // member: present_temperature
  {
    out << "present_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.present_temperature, out);
    out << ", ";
  }

  // member: registered_instruction
  {
    out << "registered_instruction: ";
    rosidl_generator_traits::value_to_yaml(msg.registered_instruction, out);
    out << ", ";
  }

  // member: status_return_level
  {
    out << "status_return_level: ";
    rosidl_generator_traits::value_to_yaml(msg.status_return_level, out);
    out << ", ";
  }

  // member: hardware_error_status
  {
    out << "hardware_error_status: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_error_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PROExt & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: model_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_number: ";
    rosidl_generator_traits::value_to_yaml(msg.model_number, out);
    out << "\n";
  }

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }

  // member: model_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_id: ";
    rosidl_generator_traits::value_to_yaml(msg.model_id, out);
    out << "\n";
  }

  // member: baud_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baud_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.baud_rate, out);
    out << "\n";
  }

  // member: return_delay_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_delay_time: ";
    rosidl_generator_traits::value_to_yaml(msg.return_delay_time, out);
    out << "\n";
  }

  // member: operating_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operating_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operating_mode, out);
    out << "\n";
  }

  // member: homing_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "homing_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.homing_offset, out);
    out << "\n";
  }

  // member: moving_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_threshold, out);
    out << "\n";
  }

  // member: temperature_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_limit, out);
    out << "\n";
  }

  // member: max_voltage_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_voltage_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.max_voltage_limit, out);
    out << "\n";
  }

  // member: min_voltage_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_voltage_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.min_voltage_limit, out);
    out << "\n";
  }

  // member: acceleration_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_limit, out);
    out << "\n";
  }

  // member: torque_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_limit, out);
    out << "\n";
  }

  // member: velocity_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_limit, out);
    out << "\n";
  }

  // member: max_position_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_position_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.max_position_limit, out);
    out << "\n";
  }

  // member: min_position_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_position_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.min_position_limit, out);
    out << "\n";
  }

  // member: external_port_mode_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "external_port_mode_1: ";
    rosidl_generator_traits::value_to_yaml(msg.external_port_mode_1, out);
    out << "\n";
  }

  // member: external_port_mode_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "external_port_mode_2: ";
    rosidl_generator_traits::value_to_yaml(msg.external_port_mode_2, out);
    out << "\n";
  }

  // member: external_port_mode_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "external_port_mode_3: ";
    rosidl_generator_traits::value_to_yaml(msg.external_port_mode_3, out);
    out << "\n";
  }

  // member: external_port_mode_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "external_port_mode_4: ";
    rosidl_generator_traits::value_to_yaml(msg.external_port_mode_4, out);
    out << "\n";
  }

  // member: shutdown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shutdown: ";
    rosidl_generator_traits::value_to_yaml(msg.shutdown, out);
    out << "\n";
  }

  // member: torque_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_enable, out);
    out << "\n";
  }

  // member: led_red
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_red: ";
    rosidl_generator_traits::value_to_yaml(msg.led_red, out);
    out << "\n";
  }

  // member: led_green
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_green: ";
    rosidl_generator_traits::value_to_yaml(msg.led_green, out);
    out << "\n";
  }

  // member: led_blue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_blue: ";
    rosidl_generator_traits::value_to_yaml(msg.led_blue, out);
    out << "\n";
  }

  // member: velocity_i_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_i_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_i_gain, out);
    out << "\n";
  }

  // member: velocity_p_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_p_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_p_gain, out);
    out << "\n";
  }

  // member: position_p_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_p_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.position_p_gain, out);
    out << "\n";
  }

  // member: goal_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_position: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_position, out);
    out << "\n";
  }

  // member: goal_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_velocity, out);
    out << "\n";
  }

  // member: goal_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_torque, out);
    out << "\n";
  }

  // member: goal_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_acceleration, out);
    out << "\n";
  }

  // member: moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving: ";
    rosidl_generator_traits::value_to_yaml(msg.moving, out);
    out << "\n";
  }

  // member: present_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present_position: ";
    rosidl_generator_traits::value_to_yaml(msg.present_position, out);
    out << "\n";
  }

  // member: present_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.present_velocity, out);
    out << "\n";
  }

  // member: present_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present_current: ";
    rosidl_generator_traits::value_to_yaml(msg.present_current, out);
    out << "\n";
  }

  // member: present_input_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present_input_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.present_input_voltage, out);
    out << "\n";
  }

  // member: present_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.present_temperature, out);
    out << "\n";
  }

  // member: registered_instruction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "registered_instruction: ";
    rosidl_generator_traits::value_to_yaml(msg.registered_instruction, out);
    out << "\n";
  }

  // member: status_return_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_return_level: ";
    rosidl_generator_traits::value_to_yaml(msg.status_return_level, out);
    out << "\n";
  }

  // member: hardware_error_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_error_status: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_error_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PROExt & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dynamixel_workbench_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_workbench_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_workbench_msgs::msg::PROExt & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_workbench_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_workbench_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_workbench_msgs::msg::PROExt & msg)
{
  return dynamixel_workbench_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_workbench_msgs::msg::PROExt>()
{
  return "dynamixel_workbench_msgs::msg::PROExt";
}

template<>
inline const char * name<dynamixel_workbench_msgs::msg::PROExt>()
{
  return "dynamixel_workbench_msgs/msg/PROExt";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::msg::PROExt>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::msg::PROExt>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_workbench_msgs::msg::PROExt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__PRO_EXT__TRAITS_HPP_
