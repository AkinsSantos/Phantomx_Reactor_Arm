// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dynamixel_workbench_msgs:msg/PROExt.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/msg/detail/pro_ext__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dynamixel_workbench_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dynamixel_workbench_msgs/msg/detail/pro_ext__struct.h"
#include "dynamixel_workbench_msgs/msg/detail/pro_ext__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PROExt__ros_msg_type = dynamixel_workbench_msgs__msg__PROExt;

static bool _PROExt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PROExt__ros_msg_type * ros_message = static_cast<const _PROExt__ros_msg_type *>(untyped_ros_message);
  // Field name: model_number
  {
    cdr << ros_message->model_number;
  }

  // Field name: firmware_version
  {
    cdr << ros_message->firmware_version;
  }

  // Field name: model_id
  {
    cdr << ros_message->model_id;
  }

  // Field name: baud_rate
  {
    cdr << ros_message->baud_rate;
  }

  // Field name: return_delay_time
  {
    cdr << ros_message->return_delay_time;
  }

  // Field name: operating_mode
  {
    cdr << ros_message->operating_mode;
  }

  // Field name: homing_offset
  {
    cdr << ros_message->homing_offset;
  }

  // Field name: moving_threshold
  {
    cdr << ros_message->moving_threshold;
  }

  // Field name: temperature_limit
  {
    cdr << ros_message->temperature_limit;
  }

  // Field name: max_voltage_limit
  {
    cdr << ros_message->max_voltage_limit;
  }

  // Field name: min_voltage_limit
  {
    cdr << ros_message->min_voltage_limit;
  }

  // Field name: acceleration_limit
  {
    cdr << ros_message->acceleration_limit;
  }

  // Field name: torque_limit
  {
    cdr << ros_message->torque_limit;
  }

  // Field name: velocity_limit
  {
    cdr << ros_message->velocity_limit;
  }

  // Field name: max_position_limit
  {
    cdr << ros_message->max_position_limit;
  }

  // Field name: min_position_limit
  {
    cdr << ros_message->min_position_limit;
  }

  // Field name: external_port_mode_1
  {
    cdr << ros_message->external_port_mode_1;
  }

  // Field name: external_port_mode_2
  {
    cdr << ros_message->external_port_mode_2;
  }

  // Field name: external_port_mode_3
  {
    cdr << ros_message->external_port_mode_3;
  }

  // Field name: external_port_mode_4
  {
    cdr << ros_message->external_port_mode_4;
  }

  // Field name: shutdown
  {
    cdr << ros_message->shutdown;
  }

  // Field name: torque_enable
  {
    cdr << ros_message->torque_enable;
  }

  // Field name: led_red
  {
    cdr << ros_message->led_red;
  }

  // Field name: led_green
  {
    cdr << ros_message->led_green;
  }

  // Field name: led_blue
  {
    cdr << ros_message->led_blue;
  }

  // Field name: velocity_i_gain
  {
    cdr << ros_message->velocity_i_gain;
  }

  // Field name: velocity_p_gain
  {
    cdr << ros_message->velocity_p_gain;
  }

  // Field name: position_p_gain
  {
    cdr << ros_message->position_p_gain;
  }

  // Field name: goal_position
  {
    cdr << ros_message->goal_position;
  }

  // Field name: goal_velocity
  {
    cdr << ros_message->goal_velocity;
  }

  // Field name: goal_torque
  {
    cdr << ros_message->goal_torque;
  }

  // Field name: goal_acceleration
  {
    cdr << ros_message->goal_acceleration;
  }

  // Field name: moving
  {
    cdr << ros_message->moving;
  }

  // Field name: present_position
  {
    cdr << ros_message->present_position;
  }

  // Field name: present_velocity
  {
    cdr << ros_message->present_velocity;
  }

  // Field name: present_current
  {
    cdr << ros_message->present_current;
  }

  // Field name: present_input_voltage
  {
    cdr << ros_message->present_input_voltage;
  }

  // Field name: present_temperature
  {
    cdr << ros_message->present_temperature;
  }

  // Field name: registered_instruction
  {
    cdr << ros_message->registered_instruction;
  }

  // Field name: status_return_level
  {
    cdr << ros_message->status_return_level;
  }

  // Field name: hardware_error_status
  {
    cdr << ros_message->hardware_error_status;
  }

  return true;
}

static bool _PROExt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PROExt__ros_msg_type * ros_message = static_cast<_PROExt__ros_msg_type *>(untyped_ros_message);
  // Field name: model_number
  {
    cdr >> ros_message->model_number;
  }

  // Field name: firmware_version
  {
    cdr >> ros_message->firmware_version;
  }

  // Field name: model_id
  {
    cdr >> ros_message->model_id;
  }

  // Field name: baud_rate
  {
    cdr >> ros_message->baud_rate;
  }

  // Field name: return_delay_time
  {
    cdr >> ros_message->return_delay_time;
  }

  // Field name: operating_mode
  {
    cdr >> ros_message->operating_mode;
  }

  // Field name: homing_offset
  {
    cdr >> ros_message->homing_offset;
  }

  // Field name: moving_threshold
  {
    cdr >> ros_message->moving_threshold;
  }

  // Field name: temperature_limit
  {
    cdr >> ros_message->temperature_limit;
  }

  // Field name: max_voltage_limit
  {
    cdr >> ros_message->max_voltage_limit;
  }

  // Field name: min_voltage_limit
  {
    cdr >> ros_message->min_voltage_limit;
  }

  // Field name: acceleration_limit
  {
    cdr >> ros_message->acceleration_limit;
  }

  // Field name: torque_limit
  {
    cdr >> ros_message->torque_limit;
  }

  // Field name: velocity_limit
  {
    cdr >> ros_message->velocity_limit;
  }

  // Field name: max_position_limit
  {
    cdr >> ros_message->max_position_limit;
  }

  // Field name: min_position_limit
  {
    cdr >> ros_message->min_position_limit;
  }

  // Field name: external_port_mode_1
  {
    cdr >> ros_message->external_port_mode_1;
  }

  // Field name: external_port_mode_2
  {
    cdr >> ros_message->external_port_mode_2;
  }

  // Field name: external_port_mode_3
  {
    cdr >> ros_message->external_port_mode_3;
  }

  // Field name: external_port_mode_4
  {
    cdr >> ros_message->external_port_mode_4;
  }

  // Field name: shutdown
  {
    cdr >> ros_message->shutdown;
  }

  // Field name: torque_enable
  {
    cdr >> ros_message->torque_enable;
  }

  // Field name: led_red
  {
    cdr >> ros_message->led_red;
  }

  // Field name: led_green
  {
    cdr >> ros_message->led_green;
  }

  // Field name: led_blue
  {
    cdr >> ros_message->led_blue;
  }

  // Field name: velocity_i_gain
  {
    cdr >> ros_message->velocity_i_gain;
  }

  // Field name: velocity_p_gain
  {
    cdr >> ros_message->velocity_p_gain;
  }

  // Field name: position_p_gain
  {
    cdr >> ros_message->position_p_gain;
  }

  // Field name: goal_position
  {
    cdr >> ros_message->goal_position;
  }

  // Field name: goal_velocity
  {
    cdr >> ros_message->goal_velocity;
  }

  // Field name: goal_torque
  {
    cdr >> ros_message->goal_torque;
  }

  // Field name: goal_acceleration
  {
    cdr >> ros_message->goal_acceleration;
  }

  // Field name: moving
  {
    cdr >> ros_message->moving;
  }

  // Field name: present_position
  {
    cdr >> ros_message->present_position;
  }

  // Field name: present_velocity
  {
    cdr >> ros_message->present_velocity;
  }

  // Field name: present_current
  {
    cdr >> ros_message->present_current;
  }

  // Field name: present_input_voltage
  {
    cdr >> ros_message->present_input_voltage;
  }

  // Field name: present_temperature
  {
    cdr >> ros_message->present_temperature;
  }

  // Field name: registered_instruction
  {
    cdr >> ros_message->registered_instruction;
  }

  // Field name: status_return_level
  {
    cdr >> ros_message->status_return_level;
  }

  // Field name: hardware_error_status
  {
    cdr >> ros_message->hardware_error_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamixel_workbench_msgs
size_t get_serialized_size_dynamixel_workbench_msgs__msg__PROExt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PROExt__ros_msg_type * ros_message = static_cast<const _PROExt__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name model_number
  {
    size_t item_size = sizeof(ros_message->model_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name firmware_version
  {
    size_t item_size = sizeof(ros_message->firmware_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name model_id
  {
    size_t item_size = sizeof(ros_message->model_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baud_rate
  {
    size_t item_size = sizeof(ros_message->baud_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name return_delay_time
  {
    size_t item_size = sizeof(ros_message->return_delay_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name operating_mode
  {
    size_t item_size = sizeof(ros_message->operating_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name homing_offset
  {
    size_t item_size = sizeof(ros_message->homing_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name moving_threshold
  {
    size_t item_size = sizeof(ros_message->moving_threshold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_limit
  {
    size_t item_size = sizeof(ros_message->temperature_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_voltage_limit
  {
    size_t item_size = sizeof(ros_message->max_voltage_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_voltage_limit
  {
    size_t item_size = sizeof(ros_message->min_voltage_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration_limit
  {
    size_t item_size = sizeof(ros_message->acceleration_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_limit
  {
    size_t item_size = sizeof(ros_message->torque_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_limit
  {
    size_t item_size = sizeof(ros_message->velocity_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_position_limit
  {
    size_t item_size = sizeof(ros_message->max_position_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_position_limit
  {
    size_t item_size = sizeof(ros_message->min_position_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name external_port_mode_1
  {
    size_t item_size = sizeof(ros_message->external_port_mode_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name external_port_mode_2
  {
    size_t item_size = sizeof(ros_message->external_port_mode_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name external_port_mode_3
  {
    size_t item_size = sizeof(ros_message->external_port_mode_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name external_port_mode_4
  {
    size_t item_size = sizeof(ros_message->external_port_mode_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shutdown
  {
    size_t item_size = sizeof(ros_message->shutdown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_enable
  {
    size_t item_size = sizeof(ros_message->torque_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name led_red
  {
    size_t item_size = sizeof(ros_message->led_red);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name led_green
  {
    size_t item_size = sizeof(ros_message->led_green);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name led_blue
  {
    size_t item_size = sizeof(ros_message->led_blue);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_i_gain
  {
    size_t item_size = sizeof(ros_message->velocity_i_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_p_gain
  {
    size_t item_size = sizeof(ros_message->velocity_p_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_p_gain
  {
    size_t item_size = sizeof(ros_message->position_p_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_position
  {
    size_t item_size = sizeof(ros_message->goal_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_velocity
  {
    size_t item_size = sizeof(ros_message->goal_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_torque
  {
    size_t item_size = sizeof(ros_message->goal_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_acceleration
  {
    size_t item_size = sizeof(ros_message->goal_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name moving
  {
    size_t item_size = sizeof(ros_message->moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name present_position
  {
    size_t item_size = sizeof(ros_message->present_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name present_velocity
  {
    size_t item_size = sizeof(ros_message->present_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name present_current
  {
    size_t item_size = sizeof(ros_message->present_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name present_input_voltage
  {
    size_t item_size = sizeof(ros_message->present_input_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name present_temperature
  {
    size_t item_size = sizeof(ros_message->present_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name registered_instruction
  {
    size_t item_size = sizeof(ros_message->registered_instruction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_return_level
  {
    size_t item_size = sizeof(ros_message->status_return_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hardware_error_status
  {
    size_t item_size = sizeof(ros_message->hardware_error_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PROExt__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dynamixel_workbench_msgs__msg__PROExt(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamixel_workbench_msgs
size_t max_serialized_size_dynamixel_workbench_msgs__msg__PROExt(
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

  // member: model_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: firmware_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: model_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: baud_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: return_delay_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: operating_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: homing_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: moving_threshold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_voltage_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: min_voltage_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: acceleration_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torque_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: velocity_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_position_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_position_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: external_port_mode_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: external_port_mode_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: external_port_mode_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: external_port_mode_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: shutdown
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: torque_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: led_red
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: led_green
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: led_blue
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: velocity_i_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: velocity_p_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: position_p_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: goal_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: goal_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: goal_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: goal_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: moving
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: present_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: present_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: present_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: present_input_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: present_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: registered_instruction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_return_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hardware_error_status
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
    using DataType = dynamixel_workbench_msgs__msg__PROExt;
    is_plain =
      (
      offsetof(DataType, hardware_error_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PROExt__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dynamixel_workbench_msgs__msg__PROExt(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PROExt = {
  "dynamixel_workbench_msgs::msg",
  "PROExt",
  _PROExt__cdr_serialize,
  _PROExt__cdr_deserialize,
  _PROExt__get_serialized_size,
  _PROExt__max_serialized_size
};

static rosidl_message_type_support_t _PROExt__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PROExt,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_workbench_msgs, msg, PROExt)() {
  return &_PROExt__type_support;
}

#if defined(__cplusplus)
}
#endif
