// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_workbench_msgs:msg/RX.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__RX__TRAITS_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__RX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_workbench_msgs/msg/detail/rx__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamixel_workbench_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RX & msg,
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

  // member: cw_angle_limit
  {
    out << "cw_angle_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.cw_angle_limit, out);
    out << ", ";
  }

  // member: ccw_angle_limit
  {
    out << "ccw_angle_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.ccw_angle_limit, out);
    out << ", ";
  }

  // member: temperature_limit
  {
    out << "temperature_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_limit, out);
    out << ", ";
  }

  // member: min_voltage_limit
  {
    out << "min_voltage_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.min_voltage_limit, out);
    out << ", ";
  }

  // member: max_voltage_limit
  {
    out << "max_voltage_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.max_voltage_limit, out);
    out << ", ";
  }

  // member: max_torque
  {
    out << "max_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque, out);
    out << ", ";
  }

  // member: status_return_level
  {
    out << "status_return_level: ";
    rosidl_generator_traits::value_to_yaml(msg.status_return_level, out);
    out << ", ";
  }

  // member: alarm_led
  {
    out << "alarm_led: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_led, out);
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

  // member: led
  {
    out << "led: ";
    rosidl_generator_traits::value_to_yaml(msg.led, out);
    out << ", ";
  }

  // member: cw_compliance_margin
  {
    out << "cw_compliance_margin: ";
    rosidl_generator_traits::value_to_yaml(msg.cw_compliance_margin, out);
    out << ", ";
  }

  // member: ccw_compliance_margin
  {
    out << "ccw_compliance_margin: ";
    rosidl_generator_traits::value_to_yaml(msg.ccw_compliance_margin, out);
    out << ", ";
  }

  // member: cw_compliance_slope
  {
    out << "cw_compliance_slope: ";
    rosidl_generator_traits::value_to_yaml(msg.cw_compliance_slope, out);
    out << ", ";
  }

  // member: ccw_compliance_slope
  {
    out << "ccw_compliance_slope: ";
    rosidl_generator_traits::value_to_yaml(msg.ccw_compliance_slope, out);
    out << ", ";
  }

  // member: goal_position
  {
    out << "goal_position: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_position, out);
    out << ", ";
  }

  // member: moving_speed
  {
    out << "moving_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_speed, out);
    out << ", ";
  }

  // member: torque_limit
  {
    out << "torque_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_limit, out);
    out << ", ";
  }

  // member: present_position
  {
    out << "present_position: ";
    rosidl_generator_traits::value_to_yaml(msg.present_position, out);
    out << ", ";
  }

  // member: present_speed
  {
    out << "present_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.present_speed, out);
    out << ", ";
  }

  // member: present_load
  {
    out << "present_load: ";
    rosidl_generator_traits::value_to_yaml(msg.present_load, out);
    out << ", ";
  }

  // member: present_voltage
  {
    out << "present_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.present_voltage, out);
    out << ", ";
  }

  // member: present_temperature
  {
    out << "present_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.present_temperature, out);
    out << ", ";
  }

  // member: registered
  {
    out << "registered: ";
    rosidl_generator_traits::value_to_yaml(msg.registered, out);
    out << ", ";
  }

  // member: moving
  {
    out << "moving: ";
    rosidl_generator_traits::value_to_yaml(msg.moving, out);
    out << ", ";
  }

  // member: lock
  {
    out << "lock: ";
    rosidl_generator_traits::value_to_yaml(msg.lock, out);
    out << ", ";
  }

  // member: punch
  {
    out << "punch: ";
    rosidl_generator_traits::value_to_yaml(msg.punch, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RX & msg,
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

  // member: cw_angle_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cw_angle_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.cw_angle_limit, out);
    out << "\n";
  }

  // member: ccw_angle_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ccw_angle_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.ccw_angle_limit, out);
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

  // member: min_voltage_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_voltage_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.min_voltage_limit, out);
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

  // member: max_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.max_torque, out);
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

  // member: alarm_led
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm_led: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm_led, out);
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

  // member: led
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led: ";
    rosidl_generator_traits::value_to_yaml(msg.led, out);
    out << "\n";
  }

  // member: cw_compliance_margin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cw_compliance_margin: ";
    rosidl_generator_traits::value_to_yaml(msg.cw_compliance_margin, out);
    out << "\n";
  }

  // member: ccw_compliance_margin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ccw_compliance_margin: ";
    rosidl_generator_traits::value_to_yaml(msg.ccw_compliance_margin, out);
    out << "\n";
  }

  // member: cw_compliance_slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cw_compliance_slope: ";
    rosidl_generator_traits::value_to_yaml(msg.cw_compliance_slope, out);
    out << "\n";
  }

  // member: ccw_compliance_slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ccw_compliance_slope: ";
    rosidl_generator_traits::value_to_yaml(msg.ccw_compliance_slope, out);
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

  // member: moving_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_speed, out);
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

  // member: present_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present_position: ";
    rosidl_generator_traits::value_to_yaml(msg.present_position, out);
    out << "\n";
  }

  // member: present_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.present_speed, out);
    out << "\n";
  }

  // member: present_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present_load: ";
    rosidl_generator_traits::value_to_yaml(msg.present_load, out);
    out << "\n";
  }

  // member: present_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.present_voltage, out);
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

  // member: registered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "registered: ";
    rosidl_generator_traits::value_to_yaml(msg.registered, out);
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

  // member: lock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lock: ";
    rosidl_generator_traits::value_to_yaml(msg.lock, out);
    out << "\n";
  }

  // member: punch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "punch: ";
    rosidl_generator_traits::value_to_yaml(msg.punch, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RX & msg, bool use_flow_style = false)
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
  const dynamixel_workbench_msgs::msg::RX & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_workbench_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_workbench_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_workbench_msgs::msg::RX & msg)
{
  return dynamixel_workbench_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_workbench_msgs::msg::RX>()
{
  return "dynamixel_workbench_msgs::msg::RX";
}

template<>
inline const char * name<dynamixel_workbench_msgs::msg::RX>()
{
  return "dynamixel_workbench_msgs/msg/RX";
}

template<>
struct has_fixed_size<dynamixel_workbench_msgs::msg::RX>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamixel_workbench_msgs::msg::RX>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_workbench_msgs::msg::RX>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__RX__TRAITS_HPP_
