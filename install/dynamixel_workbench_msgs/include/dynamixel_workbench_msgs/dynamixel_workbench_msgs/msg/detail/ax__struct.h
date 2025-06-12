// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_workbench_msgs:msg/AX.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__AX__STRUCT_H_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__AX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AX in the package dynamixel_workbench_msgs.
/**
  * This message is compatible with control table of Dynamixel AX Series (AX-12W, AX-12/AX-12+/AX-12A, AX-18F/AX-18A)
  * If you want to specific information about control table, please follow the link (http://emanual.robotis.com/)
 */
typedef struct dynamixel_workbench_msgs__msg__AX
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
  uint8_t torque_enable;
  uint8_t led;
  uint8_t cw_compliance_margin;
  uint8_t ccw_compliance_margin;
  uint8_t cw_compliance_slope;
  uint8_t ccw_compliance_slope;
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
} dynamixel_workbench_msgs__msg__AX;

// Struct for a sequence of dynamixel_workbench_msgs__msg__AX.
typedef struct dynamixel_workbench_msgs__msg__AX__Sequence
{
  dynamixel_workbench_msgs__msg__AX * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_workbench_msgs__msg__AX__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__AX__STRUCT_H_
