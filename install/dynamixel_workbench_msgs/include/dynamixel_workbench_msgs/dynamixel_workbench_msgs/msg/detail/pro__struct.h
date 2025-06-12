// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_workbench_msgs:msg/PRO.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__PRO__STRUCT_H_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__PRO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PRO in the package dynamixel_workbench_msgs.
/**
  * This message is compatible with control table of Dynamixel PRO L42-10-S300-R
  * If you want to specific information about control table, please follow the link (http://emanual.robotis.com/)
 */
typedef struct dynamixel_workbench_msgs__msg__PRO
{
  uint16_t model_number;
  uint8_t firmware_version;
  uint8_t model_id;
  uint8_t baud_rate;
  uint8_t return_delay_time;
  uint8_t operating_mode;
  uint32_t moving_threshold;
  uint8_t temperature_limit;
  uint16_t max_voltage_limit;
  uint16_t min_voltage_limit;
  uint32_t acceleration_limit;
  uint16_t torque_limit;
  uint32_t velocity_limit;
  int32_t max_position_limit;
  int32_t min_position_limit;
  uint8_t external_port_mode_1;
  uint8_t external_port_mode_2;
  uint8_t external_port_mode_3;
  uint8_t external_port_mode_4;
  uint8_t shutdown;
  uint8_t torque_enable;
  uint8_t led_red;
  uint8_t led_green;
  uint8_t led_blue;
  uint16_t velocity_i_gain;
  uint16_t velocity_p_gain;
  uint16_t position_p_gain;
  int32_t goal_position;
  uint32_t goal_velocity;
  uint16_t goal_torque;
  int32_t goal_acceleration;
  uint8_t moving;
  int32_t present_position;
  uint32_t present_velocity;
  uint16_t present_current;
  uint16_t present_input_voltage;
  uint8_t present_temperature;
  uint8_t registered_instruction;
  uint8_t status_return_level;
  uint8_t hardware_error_status;
} dynamixel_workbench_msgs__msg__PRO;

// Struct for a sequence of dynamixel_workbench_msgs__msg__PRO.
typedef struct dynamixel_workbench_msgs__msg__PRO__Sequence
{
  dynamixel_workbench_msgs__msg__PRO * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_workbench_msgs__msg__PRO__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__PRO__STRUCT_H_
