// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_workbench_msgs:msg/MXExt.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX_EXT__STRUCT_H_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX_EXT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MXExt in the package dynamixel_workbench_msgs.
/**
  * This message is compatible with control table of Dynamixel MX Series (MX-64T/MX64-R/MX-64AT/MX-64AR, MX-106T/MX-106R)
  * If you want to specific information about control table, please follow the link (http://emanual.robotis.com/)
 */
typedef struct dynamixel_workbench_msgs__msg__MXExt
{
  uint16_t model_number;
  uint8_t firmware_version;
  uint8_t model_id;
  uint8_t baud_rate;
  uint8_t return_delay_time;
  uint16_t cw_angle_limit;
  uint16_t ccw_angle_limit;
  uint8_t temperature_limit;
  uint8_t min_voltage_limit;
  uint8_t max_voltage_limit;
  uint16_t max_torque;
  uint8_t status_return_level;
  uint8_t alarm_led;
  uint8_t shutdown;
  uint16_t multi_turn_offset;
  uint8_t resolution_divider;
  uint8_t torque_enable;
  uint8_t led;
  uint8_t d_gain;
  uint8_t i_gain;
  uint8_t p_gain;
  uint16_t goal_position;
  uint16_t moving_speed;
  uint16_t torque_limit;
  uint16_t present_position;
  uint16_t present_speed;
  uint16_t present_load;
  uint8_t present_voltage;
  uint8_t present_temperature;
  uint8_t registered;
  uint8_t moving;
  uint8_t lock;
  uint16_t punch;
  uint16_t current;
  uint8_t torque_control_mode_enable;
  uint16_t goal_torque;
  uint8_t goal_acceleration;
} dynamixel_workbench_msgs__msg__MXExt;

// Struct for a sequence of dynamixel_workbench_msgs__msg__MXExt.
typedef struct dynamixel_workbench_msgs__msg__MXExt__Sequence
{
  dynamixel_workbench_msgs__msg__MXExt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_workbench_msgs__msg__MXExt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX_EXT__STRUCT_H_
