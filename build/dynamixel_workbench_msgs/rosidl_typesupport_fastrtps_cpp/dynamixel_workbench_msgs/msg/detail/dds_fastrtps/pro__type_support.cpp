// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dynamixel_workbench_msgs:msg/PRO.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/msg/detail/pro__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dynamixel_workbench_msgs/msg/detail/pro__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dynamixel_workbench_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
cdr_serialize(
  const dynamixel_workbench_msgs::msg::PRO & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: model_number
  cdr << ros_message.model_number;
  // Member: firmware_version
  cdr << ros_message.firmware_version;
  // Member: model_id
  cdr << ros_message.model_id;
  // Member: baud_rate
  cdr << ros_message.baud_rate;
  // Member: return_delay_time
  cdr << ros_message.return_delay_time;
  // Member: operating_mode
  cdr << ros_message.operating_mode;
  // Member: moving_threshold
  cdr << ros_message.moving_threshold;
  // Member: temperature_limit
  cdr << ros_message.temperature_limit;
  // Member: max_voltage_limit
  cdr << ros_message.max_voltage_limit;
  // Member: min_voltage_limit
  cdr << ros_message.min_voltage_limit;
  // Member: acceleration_limit
  cdr << ros_message.acceleration_limit;
  // Member: torque_limit
  cdr << ros_message.torque_limit;
  // Member: velocity_limit
  cdr << ros_message.velocity_limit;
  // Member: max_position_limit
  cdr << ros_message.max_position_limit;
  // Member: min_position_limit
  cdr << ros_message.min_position_limit;
  // Member: external_port_mode_1
  cdr << ros_message.external_port_mode_1;
  // Member: external_port_mode_2
  cdr << ros_message.external_port_mode_2;
  // Member: external_port_mode_3
  cdr << ros_message.external_port_mode_3;
  // Member: external_port_mode_4
  cdr << ros_message.external_port_mode_4;
  // Member: shutdown
  cdr << ros_message.shutdown;
  // Member: torque_enable
  cdr << ros_message.torque_enable;
  // Member: led_red
  cdr << ros_message.led_red;
  // Member: led_green
  cdr << ros_message.led_green;
  // Member: led_blue
  cdr << ros_message.led_blue;
  // Member: velocity_i_gain
  cdr << ros_message.velocity_i_gain;
  // Member: velocity_p_gain
  cdr << ros_message.velocity_p_gain;
  // Member: position_p_gain
  cdr << ros_message.position_p_gain;
  // Member: goal_position
  cdr << ros_message.goal_position;
  // Member: goal_velocity
  cdr << ros_message.goal_velocity;
  // Member: goal_torque
  cdr << ros_message.goal_torque;
  // Member: goal_acceleration
  cdr << ros_message.goal_acceleration;
  // Member: moving
  cdr << ros_message.moving;
  // Member: present_position
  cdr << ros_message.present_position;
  // Member: present_velocity
  cdr << ros_message.present_velocity;
  // Member: present_current
  cdr << ros_message.present_current;
  // Member: present_input_voltage
  cdr << ros_message.present_input_voltage;
  // Member: present_temperature
  cdr << ros_message.present_temperature;
  // Member: registered_instruction
  cdr << ros_message.registered_instruction;
  // Member: status_return_level
  cdr << ros_message.status_return_level;
  // Member: hardware_error_status
  cdr << ros_message.hardware_error_status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dynamixel_workbench_msgs::msg::PRO & ros_message)
{
  // Member: model_number
  cdr >> ros_message.model_number;

  // Member: firmware_version
  cdr >> ros_message.firmware_version;

  // Member: model_id
  cdr >> ros_message.model_id;

  // Member: baud_rate
  cdr >> ros_message.baud_rate;

  // Member: return_delay_time
  cdr >> ros_message.return_delay_time;

  // Member: operating_mode
  cdr >> ros_message.operating_mode;

  // Member: moving_threshold
  cdr >> ros_message.moving_threshold;

  // Member: temperature_limit
  cdr >> ros_message.temperature_limit;

  // Member: max_voltage_limit
  cdr >> ros_message.max_voltage_limit;

  // Member: min_voltage_limit
  cdr >> ros_message.min_voltage_limit;

  // Member: acceleration_limit
  cdr >> ros_message.acceleration_limit;

  // Member: torque_limit
  cdr >> ros_message.torque_limit;

  // Member: velocity_limit
  cdr >> ros_message.velocity_limit;

  // Member: max_position_limit
  cdr >> ros_message.max_position_limit;

  // Member: min_position_limit
  cdr >> ros_message.min_position_limit;

  // Member: external_port_mode_1
  cdr >> ros_message.external_port_mode_1;

  // Member: external_port_mode_2
  cdr >> ros_message.external_port_mode_2;

  // Member: external_port_mode_3
  cdr >> ros_message.external_port_mode_3;

  // Member: external_port_mode_4
  cdr >> ros_message.external_port_mode_4;

  // Member: shutdown
  cdr >> ros_message.shutdown;

  // Member: torque_enable
  cdr >> ros_message.torque_enable;

  // Member: led_red
  cdr >> ros_message.led_red;

  // Member: led_green
  cdr >> ros_message.led_green;

  // Member: led_blue
  cdr >> ros_message.led_blue;

  // Member: velocity_i_gain
  cdr >> ros_message.velocity_i_gain;

  // Member: velocity_p_gain
  cdr >> ros_message.velocity_p_gain;

  // Member: position_p_gain
  cdr >> ros_message.position_p_gain;

  // Member: goal_position
  cdr >> ros_message.goal_position;

  // Member: goal_velocity
  cdr >> ros_message.goal_velocity;

  // Member: goal_torque
  cdr >> ros_message.goal_torque;

  // Member: goal_acceleration
  cdr >> ros_message.goal_acceleration;

  // Member: moving
  cdr >> ros_message.moving;

  // Member: present_position
  cdr >> ros_message.present_position;

  // Member: present_velocity
  cdr >> ros_message.present_velocity;

  // Member: present_current
  cdr >> ros_message.present_current;

  // Member: present_input_voltage
  cdr >> ros_message.present_input_voltage;

  // Member: present_temperature
  cdr >> ros_message.present_temperature;

  // Member: registered_instruction
  cdr >> ros_message.registered_instruction;

  // Member: status_return_level
  cdr >> ros_message.status_return_level;

  // Member: hardware_error_status
  cdr >> ros_message.hardware_error_status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
get_serialized_size(
  const dynamixel_workbench_msgs::msg::PRO & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: model_number
  {
    size_t item_size = sizeof(ros_message.model_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: firmware_version
  {
    size_t item_size = sizeof(ros_message.firmware_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: model_id
  {
    size_t item_size = sizeof(ros_message.model_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: baud_rate
  {
    size_t item_size = sizeof(ros_message.baud_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: return_delay_time
  {
    size_t item_size = sizeof(ros_message.return_delay_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: operating_mode
  {
    size_t item_size = sizeof(ros_message.operating_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: moving_threshold
  {
    size_t item_size = sizeof(ros_message.moving_threshold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature_limit
  {
    size_t item_size = sizeof(ros_message.temperature_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_voltage_limit
  {
    size_t item_size = sizeof(ros_message.max_voltage_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_voltage_limit
  {
    size_t item_size = sizeof(ros_message.min_voltage_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acceleration_limit
  {
    size_t item_size = sizeof(ros_message.acceleration_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torque_limit
  {
    size_t item_size = sizeof(ros_message.torque_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_limit
  {
    size_t item_size = sizeof(ros_message.velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_position_limit
  {
    size_t item_size = sizeof(ros_message.max_position_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_position_limit
  {
    size_t item_size = sizeof(ros_message.min_position_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: external_port_mode_1
  {
    size_t item_size = sizeof(ros_message.external_port_mode_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: external_port_mode_2
  {
    size_t item_size = sizeof(ros_message.external_port_mode_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: external_port_mode_3
  {
    size_t item_size = sizeof(ros_message.external_port_mode_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: external_port_mode_4
  {
    size_t item_size = sizeof(ros_message.external_port_mode_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shutdown
  {
    size_t item_size = sizeof(ros_message.shutdown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torque_enable
  {
    size_t item_size = sizeof(ros_message.torque_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: led_red
  {
    size_t item_size = sizeof(ros_message.led_red);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: led_green
  {
    size_t item_size = sizeof(ros_message.led_green);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: led_blue
  {
    size_t item_size = sizeof(ros_message.led_blue);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_i_gain
  {
    size_t item_size = sizeof(ros_message.velocity_i_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_p_gain
  {
    size_t item_size = sizeof(ros_message.velocity_p_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_p_gain
  {
    size_t item_size = sizeof(ros_message.position_p_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goal_position
  {
    size_t item_size = sizeof(ros_message.goal_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goal_velocity
  {
    size_t item_size = sizeof(ros_message.goal_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goal_torque
  {
    size_t item_size = sizeof(ros_message.goal_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goal_acceleration
  {
    size_t item_size = sizeof(ros_message.goal_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: moving
  {
    size_t item_size = sizeof(ros_message.moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: present_position
  {
    size_t item_size = sizeof(ros_message.present_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: present_velocity
  {
    size_t item_size = sizeof(ros_message.present_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: present_current
  {
    size_t item_size = sizeof(ros_message.present_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: present_input_voltage
  {
    size_t item_size = sizeof(ros_message.present_input_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: present_temperature
  {
    size_t item_size = sizeof(ros_message.present_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: registered_instruction
  {
    size_t item_size = sizeof(ros_message.registered_instruction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_return_level
  {
    size_t item_size = sizeof(ros_message.status_return_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hardware_error_status
  {
    size_t item_size = sizeof(ros_message.hardware_error_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
max_serialized_size_PRO(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: model_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: firmware_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: model_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: baud_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: return_delay_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: operating_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: moving_threshold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temperature_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_voltage_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: min_voltage_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: acceleration_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: torque_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: velocity_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_position_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_position_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: external_port_mode_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: external_port_mode_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: external_port_mode_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: external_port_mode_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: shutdown
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: torque_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: led_red
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: led_green
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: led_blue
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: velocity_i_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: velocity_p_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: position_p_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: goal_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: goal_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: goal_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: goal_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: moving
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: present_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: present_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: present_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: present_input_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: present_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: registered_instruction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_return_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hardware_error_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dynamixel_workbench_msgs::msg::PRO;
    is_plain =
      (
      offsetof(DataType, hardware_error_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PRO__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dynamixel_workbench_msgs::msg::PRO *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PRO__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dynamixel_workbench_msgs::msg::PRO *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PRO__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dynamixel_workbench_msgs::msg::PRO *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PRO__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PRO(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PRO__callbacks = {
  "dynamixel_workbench_msgs::msg",
  "PRO",
  _PRO__cdr_serialize,
  _PRO__cdr_deserialize,
  _PRO__get_serialized_size,
  _PRO__max_serialized_size
};

static rosidl_message_type_support_t _PRO__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PRO__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dynamixel_workbench_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dynamixel_workbench_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_workbench_msgs::msg::PRO>()
{
  return &dynamixel_workbench_msgs::msg::typesupport_fastrtps_cpp::_PRO__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_workbench_msgs, msg, PRO)() {
  return &dynamixel_workbench_msgs::msg::typesupport_fastrtps_cpp::_PRO__handle;
}

#ifdef __cplusplus
}
#endif
