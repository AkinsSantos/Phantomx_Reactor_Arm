// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dynamixel_workbench_msgs:msg/RX.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/msg/detail/rx__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dynamixel_workbench_msgs/msg/detail/rx__struct.hpp"

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
  const dynamixel_workbench_msgs::msg::RX & ros_message,
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
  // Member: cw_angle_limit
  cdr << ros_message.cw_angle_limit;
  // Member: ccw_angle_limit
  cdr << ros_message.ccw_angle_limit;
  // Member: temperature_limit
  cdr << ros_message.temperature_limit;
  // Member: min_voltage_limit
  cdr << ros_message.min_voltage_limit;
  // Member: max_voltage_limit
  cdr << ros_message.max_voltage_limit;
  // Member: max_torque
  cdr << ros_message.max_torque;
  // Member: status_return_level
  cdr << ros_message.status_return_level;
  // Member: alarm_led
  cdr << ros_message.alarm_led;
  // Member: shutdown
  cdr << ros_message.shutdown;
  // Member: torque_enable
  cdr << ros_message.torque_enable;
  // Member: led
  cdr << ros_message.led;
  // Member: cw_compliance_margin
  cdr << ros_message.cw_compliance_margin;
  // Member: ccw_compliance_margin
  cdr << ros_message.ccw_compliance_margin;
  // Member: cw_compliance_slope
  cdr << ros_message.cw_compliance_slope;
  // Member: ccw_compliance_slope
  cdr << ros_message.ccw_compliance_slope;
  // Member: goal_position
  cdr << ros_message.goal_position;
  // Member: moving_speed
  cdr << ros_message.moving_speed;
  // Member: torque_limit
  cdr << ros_message.torque_limit;
  // Member: present_position
  cdr << ros_message.present_position;
  // Member: present_speed
  cdr << ros_message.present_speed;
  // Member: present_load
  cdr << ros_message.present_load;
  // Member: present_voltage
  cdr << ros_message.present_voltage;
  // Member: present_temperature
  cdr << ros_message.present_temperature;
  // Member: registered
  cdr << ros_message.registered;
  // Member: moving
  cdr << ros_message.moving;
  // Member: lock
  cdr << ros_message.lock;
  // Member: punch
  cdr << ros_message.punch;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dynamixel_workbench_msgs::msg::RX & ros_message)
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

  // Member: cw_angle_limit
  cdr >> ros_message.cw_angle_limit;

  // Member: ccw_angle_limit
  cdr >> ros_message.ccw_angle_limit;

  // Member: temperature_limit
  cdr >> ros_message.temperature_limit;

  // Member: min_voltage_limit
  cdr >> ros_message.min_voltage_limit;

  // Member: max_voltage_limit
  cdr >> ros_message.max_voltage_limit;

  // Member: max_torque
  cdr >> ros_message.max_torque;

  // Member: status_return_level
  cdr >> ros_message.status_return_level;

  // Member: alarm_led
  cdr >> ros_message.alarm_led;

  // Member: shutdown
  cdr >> ros_message.shutdown;

  // Member: torque_enable
  cdr >> ros_message.torque_enable;

  // Member: led
  cdr >> ros_message.led;

  // Member: cw_compliance_margin
  cdr >> ros_message.cw_compliance_margin;

  // Member: ccw_compliance_margin
  cdr >> ros_message.ccw_compliance_margin;

  // Member: cw_compliance_slope
  cdr >> ros_message.cw_compliance_slope;

  // Member: ccw_compliance_slope
  cdr >> ros_message.ccw_compliance_slope;

  // Member: goal_position
  cdr >> ros_message.goal_position;

  // Member: moving_speed
  cdr >> ros_message.moving_speed;

  // Member: torque_limit
  cdr >> ros_message.torque_limit;

  // Member: present_position
  cdr >> ros_message.present_position;

  // Member: present_speed
  cdr >> ros_message.present_speed;

  // Member: present_load
  cdr >> ros_message.present_load;

  // Member: present_voltage
  cdr >> ros_message.present_voltage;

  // Member: present_temperature
  cdr >> ros_message.present_temperature;

  // Member: registered
  cdr >> ros_message.registered;

  // Member: moving
  cdr >> ros_message.moving;

  // Member: lock
  cdr >> ros_message.lock;

  // Member: punch
  cdr >> ros_message.punch;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
get_serialized_size(
  const dynamixel_workbench_msgs::msg::RX & ros_message,
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
  // Member: cw_angle_limit
  {
    size_t item_size = sizeof(ros_message.cw_angle_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ccw_angle_limit
  {
    size_t item_size = sizeof(ros_message.ccw_angle_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature_limit
  {
    size_t item_size = sizeof(ros_message.temperature_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_voltage_limit
  {
    size_t item_size = sizeof(ros_message.min_voltage_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_voltage_limit
  {
    size_t item_size = sizeof(ros_message.max_voltage_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_torque
  {
    size_t item_size = sizeof(ros_message.max_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_return_level
  {
    size_t item_size = sizeof(ros_message.status_return_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alarm_led
  {
    size_t item_size = sizeof(ros_message.alarm_led);
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
  // Member: led
  {
    size_t item_size = sizeof(ros_message.led);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cw_compliance_margin
  {
    size_t item_size = sizeof(ros_message.cw_compliance_margin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ccw_compliance_margin
  {
    size_t item_size = sizeof(ros_message.ccw_compliance_margin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cw_compliance_slope
  {
    size_t item_size = sizeof(ros_message.cw_compliance_slope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ccw_compliance_slope
  {
    size_t item_size = sizeof(ros_message.ccw_compliance_slope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goal_position
  {
    size_t item_size = sizeof(ros_message.goal_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: moving_speed
  {
    size_t item_size = sizeof(ros_message.moving_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torque_limit
  {
    size_t item_size = sizeof(ros_message.torque_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: present_position
  {
    size_t item_size = sizeof(ros_message.present_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: present_speed
  {
    size_t item_size = sizeof(ros_message.present_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: present_load
  {
    size_t item_size = sizeof(ros_message.present_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: present_voltage
  {
    size_t item_size = sizeof(ros_message.present_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: present_temperature
  {
    size_t item_size = sizeof(ros_message.present_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: registered
  {
    size_t item_size = sizeof(ros_message.registered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: moving
  {
    size_t item_size = sizeof(ros_message.moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lock
  {
    size_t item_size = sizeof(ros_message.lock);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: punch
  {
    size_t item_size = sizeof(ros_message.punch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_workbench_msgs
max_serialized_size_RX(
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

  // Member: cw_angle_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ccw_angle_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: temperature_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: min_voltage_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_voltage_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: status_return_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: alarm_led
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

  // Member: led
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cw_compliance_margin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ccw_compliance_margin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cw_compliance_slope
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ccw_compliance_slope
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: goal_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: moving_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: torque_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: present_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: present_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: present_load
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: present_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: present_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: registered
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: moving
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lock
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: punch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dynamixel_workbench_msgs::msg::RX;
    is_plain =
      (
      offsetof(DataType, punch) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RX__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dynamixel_workbench_msgs::msg::RX *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RX__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dynamixel_workbench_msgs::msg::RX *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RX__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dynamixel_workbench_msgs::msg::RX *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RX__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RX(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RX__callbacks = {
  "dynamixel_workbench_msgs::msg",
  "RX",
  _RX__cdr_serialize,
  _RX__cdr_deserialize,
  _RX__get_serialized_size,
  _RX__max_serialized_size
};

static rosidl_message_type_support_t _RX__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RX__callbacks,
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
get_message_type_support_handle<dynamixel_workbench_msgs::msg::RX>()
{
  return &dynamixel_workbench_msgs::msg::typesupport_fastrtps_cpp::_RX__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_workbench_msgs, msg, RX)() {
  return &dynamixel_workbench_msgs::msg::typesupport_fastrtps_cpp::_RX__handle;
}

#ifdef __cplusplus
}
#endif
