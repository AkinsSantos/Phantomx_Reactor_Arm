// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dynamixel_workbench_msgs:msg/MXExt.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/msg/detail/mx_ext__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dynamixel_workbench_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dynamixel_workbench_msgs/msg/detail/mx_ext__struct.h"
#include "dynamixel_workbench_msgs/msg/detail/mx_ext__functions.h"
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


using _MXExt__ros_msg_type = dynamixel_workbench_msgs__msg__MXExt;

static bool _MXExt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MXExt__ros_msg_type * ros_message = static_cast<const _MXExt__ros_msg_type *>(untyped_ros_message);
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

  // Field name: cw_angle_limit
  {
    cdr << ros_message->cw_angle_limit;
  }

  // Field name: ccw_angle_limit
  {
    cdr << ros_message->ccw_angle_limit;
  }

  // Field name: temperature_limit
  {
    cdr << ros_message->temperature_limit;
  }

  // Field name: min_voltage_limit
  {
    cdr << ros_message->min_voltage_limit;
  }

  // Field name: max_voltage_limit
  {
    cdr << ros_message->max_voltage_limit;
  }

  // Field name: max_torque
  {
    cdr << ros_message->max_torque;
  }

  // Field name: status_return_level
  {
    cdr << ros_message->status_return_level;
  }

  // Field name: alarm_led
  {
    cdr << ros_message->alarm_led;
  }

  // Field name: shutdown
  {
    cdr << ros_message->shutdown;
  }

  // Field name: multi_turn_offset
  {
    cdr << ros_message->multi_turn_offset;
  }

  // Field name: resolution_divider
  {
    cdr << ros_message->resolution_divider;
  }

  // Field name: torque_enable
  {
    cdr << ros_message->torque_enable;
  }

  // Field name: led
  {
    cdr << ros_message->led;
  }

  // Field name: d_gain
  {
    cdr << ros_message->d_gain;
  }

  // Field name: i_gain
  {
    cdr << ros_message->i_gain;
  }

  // Field name: p_gain
  {
    cdr << ros_message->p_gain;
  }

  // Field name: goal_position
  {
    cdr << ros_message->goal_position;
  }

  // Field name: moving_speed
  {
    cdr << ros_message->moving_speed;
  }

  // Field name: torque_limit
  {
    cdr << ros_message->torque_limit;
  }

  // Field name: present_position
  {
    cdr << ros_message->present_position;
  }

  // Field name: present_speed
  {
    cdr << ros_message->present_speed;
  }

  // Field name: present_load
  {
    cdr << ros_message->present_load;
  }

  // Field name: present_voltage
  {
    cdr << ros_message->present_voltage;
  }

  // Field name: present_temperature
  {
    cdr << ros_message->present_temperature;
  }

  // Field name: registered
  {
    cdr << ros_message->registered;
  }

  // Field name: moving
  {
    cdr << ros_message->moving;
  }

  // Field name: lock
  {
    cdr << ros_message->lock;
  }

  // Field name: punch
  {
    cdr << ros_message->punch;
  }

  // Field name: current
  {
    cdr << ros_message->current;
  }

  // Field name: torque_control_mode_enable
  {
    cdr << ros_message->torque_control_mode_enable;
  }

  // Field name: goal_torque
  {
    cdr << ros_message->goal_torque;
  }

  // Field name: goal_acceleration
  {
    cdr << ros_message->goal_acceleration;
  }

  return true;
}

static bool _MXExt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MXExt__ros_msg_type * ros_message = static_cast<_MXExt__ros_msg_type *>(untyped_ros_message);
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

  // Field name: cw_angle_limit
  {
    cdr >> ros_message->cw_angle_limit;
  }

  // Field name: ccw_angle_limit
  {
    cdr >> ros_message->ccw_angle_limit;
  }

  // Field name: temperature_limit
  {
    cdr >> ros_message->temperature_limit;
  }

  // Field name: min_voltage_limit
  {
    cdr >> ros_message->min_voltage_limit;
  }

  // Field name: max_voltage_limit
  {
    cdr >> ros_message->max_voltage_limit;
  }

  // Field name: max_torque
  {
    cdr >> ros_message->max_torque;
  }

  // Field name: status_return_level
  {
    cdr >> ros_message->status_return_level;
  }

  // Field name: alarm_led
  {
    cdr >> ros_message->alarm_led;
  }

  // Field name: shutdown
  {
    cdr >> ros_message->shutdown;
  }

  // Field name: multi_turn_offset
  {
    cdr >> ros_message->multi_turn_offset;
  }

  // Field name: resolution_divider
  {
    cdr >> ros_message->resolution_divider;
  }

  // Field name: torque_enable
  {
    cdr >> ros_message->torque_enable;
  }

  // Field name: led
  {
    cdr >> ros_message->led;
  }

  // Field name: d_gain
  {
    cdr >> ros_message->d_gain;
  }

  // Field name: i_gain
  {
    cdr >> ros_message->i_gain;
  }

  // Field name: p_gain
  {
    cdr >> ros_message->p_gain;
  }

  // Field name: goal_position
  {
    cdr >> ros_message->goal_position;
  }

  // Field name: moving_speed
  {
    cdr >> ros_message->moving_speed;
  }

  // Field name: torque_limit
  {
    cdr >> ros_message->torque_limit;
  }

  // Field name: present_position
  {
    cdr >> ros_message->present_position;
  }

  // Field name: present_speed
  {
    cdr >> ros_message->present_speed;
  }

  // Field name: present_load
  {
    cdr >> ros_message->present_load;
  }

  // Field name: present_voltage
  {
    cdr >> ros_message->present_voltage;
  }

  // Field name: present_temperature
  {
    cdr >> ros_message->present_temperature;
  }

  // Field name: registered
  {
    cdr >> ros_message->registered;
  }

  // Field name: moving
  {
    cdr >> ros_message->moving;
  }

  // Field name: lock
  {
    cdr >> ros_message->lock;
  }

  // Field name: punch
  {
    cdr >> ros_message->punch;
  }

  // Field name: current
  {
    cdr >> ros_message->current;
  }

  // Field name: torque_control_mode_enable
  {
    cdr >> ros_message->torque_control_mode_enable;
  }

  // Field name: goal_torque
  {
    cdr >> ros_message->goal_torque;
  }

  // Field name: goal_acceleration
  {
    cdr >> ros_message->goal_acceleration;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamixel_workbench_msgs
size_t get_serialized_size_dynamixel_workbench_msgs__msg__MXExt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MXExt__ros_msg_type * ros_message = static_cast<const _MXExt__ros_msg_type *>(untyped_ros_message);
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
  // field.name cw_angle_limit
  {
    size_t item_size = sizeof(ros_message->cw_angle_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ccw_angle_limit
  {
    size_t item_size = sizeof(ros_message->ccw_angle_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_limit
  {
    size_t item_size = sizeof(ros_message->temperature_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_voltage_limit
  {
    size_t item_size = sizeof(ros_message->min_voltage_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_voltage_limit
  {
    size_t item_size = sizeof(ros_message->max_voltage_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_torque
  {
    size_t item_size = sizeof(ros_message->max_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_return_level
  {
    size_t item_size = sizeof(ros_message->status_return_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm_led
  {
    size_t item_size = sizeof(ros_message->alarm_led);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shutdown
  {
    size_t item_size = sizeof(ros_message->shutdown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name multi_turn_offset
  {
    size_t item_size = sizeof(ros_message->multi_turn_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name resolution_divider
  {
    size_t item_size = sizeof(ros_message->resolution_divider);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_enable
  {
    size_t item_size = sizeof(ros_message->torque_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name led
  {
    size_t item_size = sizeof(ros_message->led);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_gain
  {
    size_t item_size = sizeof(ros_message->d_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i_gain
  {
    size_t item_size = sizeof(ros_message->i_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_gain
  {
    size_t item_size = sizeof(ros_message->p_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_position
  {
    size_t item_size = sizeof(ros_message->goal_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name moving_speed
  {
    size_t item_size = sizeof(ros_message->moving_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_limit
  {
    size_t item_size = sizeof(ros_message->torque_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name present_position
  {
    size_t item_size = sizeof(ros_message->present_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name present_speed
  {
    size_t item_size = sizeof(ros_message->present_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name present_load
  {
    size_t item_size = sizeof(ros_message->present_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name present_voltage
  {
    size_t item_size = sizeof(ros_message->present_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name present_temperature
  {
    size_t item_size = sizeof(ros_message->present_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name registered
  {
    size_t item_size = sizeof(ros_message->registered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name moving
  {
    size_t item_size = sizeof(ros_message->moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lock
  {
    size_t item_size = sizeof(ros_message->lock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name punch
  {
    size_t item_size = sizeof(ros_message->punch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current
  {
    size_t item_size = sizeof(ros_message->current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque_control_mode_enable
  {
    size_t item_size = sizeof(ros_message->torque_control_mode_enable);
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

  return current_alignment - initial_alignment;
}

static uint32_t _MXExt__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dynamixel_workbench_msgs__msg__MXExt(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamixel_workbench_msgs
size_t max_serialized_size_dynamixel_workbench_msgs__msg__MXExt(
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
  // member: cw_angle_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ccw_angle_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: temperature_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: min_voltage_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_voltage_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: status_return_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alarm_led
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
  // member: multi_turn_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: resolution_divider
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
  // member: led
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: d_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: i_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: p_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: goal_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: moving_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: torque_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: present_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: present_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: present_load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: present_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: present_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: registered
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: moving
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lock
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: punch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: torque_control_mode_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
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

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dynamixel_workbench_msgs__msg__MXExt;
    is_plain =
      (
      offsetof(DataType, goal_acceleration) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MXExt__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dynamixel_workbench_msgs__msg__MXExt(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MXExt = {
  "dynamixel_workbench_msgs::msg",
  "MXExt",
  _MXExt__cdr_serialize,
  _MXExt__cdr_deserialize,
  _MXExt__get_serialized_size,
  _MXExt__max_serialized_size
};

static rosidl_message_type_support_t _MXExt__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MXExt,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_workbench_msgs, msg, MXExt)() {
  return &_MXExt__type_support;
}

#if defined(__cplusplus)
}
#endif
