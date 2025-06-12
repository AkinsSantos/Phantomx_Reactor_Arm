// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_workbench_msgs:msg/MX2.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX2__STRUCT_H_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MX2 in the package dynamixel_workbench_msgs.
/**
  * This message is compatible with control table of Dynamixel MX(2.0) Series (MX-12W(2.0), MX-28T/MX-28R/MX-28AT/MX-28AR(2.0))
  * If you want to specific information about control table, please follow the link (http://emanual.robotis.com/)
 */
typedef struct dynamixel_workbench_msgs__msg__MX2
{
  uint16_t model_number;
  uint8_t firmware_version;
  uint8_t model_id;
  uint8_t baud_rate;
  uint8_t return_delay_time;
  uint8_t drive_mode;
  uint8_t operating_mode;
  uint8_t secondary_id;
  uint8_t protocol_version;
  int32_t homing_offset;
  uint32_t moving_threshold;
  uint8_t temperature_limit;
  uint16_t max_voltage_limit;
  uint16_t min_voltage_limit;
  uint16_t pwm_limit;
  uint32_t acceleration_limit;
  uint32_t velocity_limit;
  uint32_t max_position_limit;
  uint32_t min_position_limit;
  uint8_t shutdown;
  uint8_t torque_enable;
  uint8_t led;
  uint8_t status_return_level;
  uint8_t registered_instruction;
  uint8_t hardware_error_status;
  uint16_t velocity_i_gain;
  uint16_t velocity_p_gain;
  uint16_t position_d_gain;
  uint16_t position_i_gain;
  uint16_t position_p_gain;
  uint16_t feedforward_2nd_gain;
  uint16_t feedforward_1st_gain;
  uint8_t bus_watchdog;
  int16_t goal_pwm;
  int32_t goal_velocity;
  uint32_t profile_acceleration;
  uint32_t profile_velocity;
  uint32_t goal_position;
  uint16_t realtime_tick;
  uint8_t moving;
  uint8_t moving_status;
  int16_t present_pwm;
  int16_t present_load;
  int32_t present_velocity;
  int32_t present_position;
  uint32_t velocity_trajectory;
  uint32_t position_trajectory;
  uint16_t present_input_voltage;
  uint8_t present_temperature;
} dynamixel_workbench_msgs__msg__MX2;

// Struct for a sequence of dynamixel_workbench_msgs__msg__MX2.
typedef struct dynamixel_workbench_msgs__msg__MX2__Sequence
{
  dynamixel_workbench_msgs__msg__MX2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_workbench_msgs__msg__MX2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__MX2__STRUCT_H_
