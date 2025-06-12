// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamixel_workbench_msgs:msg/PROExt.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/msg/detail/pro_ext__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dynamixel_workbench_msgs__msg__PROExt__init(dynamixel_workbench_msgs__msg__PROExt * msg)
{
  if (!msg) {
    return false;
  }
  // model_number
  // firmware_version
  // model_id
  // baud_rate
  // return_delay_time
  // operating_mode
  // homing_offset
  // moving_threshold
  // temperature_limit
  // max_voltage_limit
  // min_voltage_limit
  // acceleration_limit
  // torque_limit
  // velocity_limit
  // max_position_limit
  // min_position_limit
  // external_port_mode_1
  // external_port_mode_2
  // external_port_mode_3
  // external_port_mode_4
  // shutdown
  // torque_enable
  // led_red
  // led_green
  // led_blue
  // velocity_i_gain
  // velocity_p_gain
  // position_p_gain
  // goal_position
  // goal_velocity
  // goal_torque
  // goal_acceleration
  // moving
  // present_position
  // present_velocity
  // present_current
  // present_input_voltage
  // present_temperature
  // registered_instruction
  // status_return_level
  // hardware_error_status
  return true;
}

void
dynamixel_workbench_msgs__msg__PROExt__fini(dynamixel_workbench_msgs__msg__PROExt * msg)
{
  if (!msg) {
    return;
  }
  // model_number
  // firmware_version
  // model_id
  // baud_rate
  // return_delay_time
  // operating_mode
  // homing_offset
  // moving_threshold
  // temperature_limit
  // max_voltage_limit
  // min_voltage_limit
  // acceleration_limit
  // torque_limit
  // velocity_limit
  // max_position_limit
  // min_position_limit
  // external_port_mode_1
  // external_port_mode_2
  // external_port_mode_3
  // external_port_mode_4
  // shutdown
  // torque_enable
  // led_red
  // led_green
  // led_blue
  // velocity_i_gain
  // velocity_p_gain
  // position_p_gain
  // goal_position
  // goal_velocity
  // goal_torque
  // goal_acceleration
  // moving
  // present_position
  // present_velocity
  // present_current
  // present_input_voltage
  // present_temperature
  // registered_instruction
  // status_return_level
  // hardware_error_status
}

bool
dynamixel_workbench_msgs__msg__PROExt__are_equal(const dynamixel_workbench_msgs__msg__PROExt * lhs, const dynamixel_workbench_msgs__msg__PROExt * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // model_number
  if (lhs->model_number != rhs->model_number) {
    return false;
  }
  // firmware_version
  if (lhs->firmware_version != rhs->firmware_version) {
    return false;
  }
  // model_id
  if (lhs->model_id != rhs->model_id) {
    return false;
  }
  // baud_rate
  if (lhs->baud_rate != rhs->baud_rate) {
    return false;
  }
  // return_delay_time
  if (lhs->return_delay_time != rhs->return_delay_time) {
    return false;
  }
  // operating_mode
  if (lhs->operating_mode != rhs->operating_mode) {
    return false;
  }
  // homing_offset
  if (lhs->homing_offset != rhs->homing_offset) {
    return false;
  }
  // moving_threshold
  if (lhs->moving_threshold != rhs->moving_threshold) {
    return false;
  }
  // temperature_limit
  if (lhs->temperature_limit != rhs->temperature_limit) {
    return false;
  }
  // max_voltage_limit
  if (lhs->max_voltage_limit != rhs->max_voltage_limit) {
    return false;
  }
  // min_voltage_limit
  if (lhs->min_voltage_limit != rhs->min_voltage_limit) {
    return false;
  }
  // acceleration_limit
  if (lhs->acceleration_limit != rhs->acceleration_limit) {
    return false;
  }
  // torque_limit
  if (lhs->torque_limit != rhs->torque_limit) {
    return false;
  }
  // velocity_limit
  if (lhs->velocity_limit != rhs->velocity_limit) {
    return false;
  }
  // max_position_limit
  if (lhs->max_position_limit != rhs->max_position_limit) {
    return false;
  }
  // min_position_limit
  if (lhs->min_position_limit != rhs->min_position_limit) {
    return false;
  }
  // external_port_mode_1
  if (lhs->external_port_mode_1 != rhs->external_port_mode_1) {
    return false;
  }
  // external_port_mode_2
  if (lhs->external_port_mode_2 != rhs->external_port_mode_2) {
    return false;
  }
  // external_port_mode_3
  if (lhs->external_port_mode_3 != rhs->external_port_mode_3) {
    return false;
  }
  // external_port_mode_4
  if (lhs->external_port_mode_4 != rhs->external_port_mode_4) {
    return false;
  }
  // shutdown
  if (lhs->shutdown != rhs->shutdown) {
    return false;
  }
  // torque_enable
  if (lhs->torque_enable != rhs->torque_enable) {
    return false;
  }
  // led_red
  if (lhs->led_red != rhs->led_red) {
    return false;
  }
  // led_green
  if (lhs->led_green != rhs->led_green) {
    return false;
  }
  // led_blue
  if (lhs->led_blue != rhs->led_blue) {
    return false;
  }
  // velocity_i_gain
  if (lhs->velocity_i_gain != rhs->velocity_i_gain) {
    return false;
  }
  // velocity_p_gain
  if (lhs->velocity_p_gain != rhs->velocity_p_gain) {
    return false;
  }
  // position_p_gain
  if (lhs->position_p_gain != rhs->position_p_gain) {
    return false;
  }
  // goal_position
  if (lhs->goal_position != rhs->goal_position) {
    return false;
  }
  // goal_velocity
  if (lhs->goal_velocity != rhs->goal_velocity) {
    return false;
  }
  // goal_torque
  if (lhs->goal_torque != rhs->goal_torque) {
    return false;
  }
  // goal_acceleration
  if (lhs->goal_acceleration != rhs->goal_acceleration) {
    return false;
  }
  // moving
  if (lhs->moving != rhs->moving) {
    return false;
  }
  // present_position
  if (lhs->present_position != rhs->present_position) {
    return false;
  }
  // present_velocity
  if (lhs->present_velocity != rhs->present_velocity) {
    return false;
  }
  // present_current
  if (lhs->present_current != rhs->present_current) {
    return false;
  }
  // present_input_voltage
  if (lhs->present_input_voltage != rhs->present_input_voltage) {
    return false;
  }
  // present_temperature
  if (lhs->present_temperature != rhs->present_temperature) {
    return false;
  }
  // registered_instruction
  if (lhs->registered_instruction != rhs->registered_instruction) {
    return false;
  }
  // status_return_level
  if (lhs->status_return_level != rhs->status_return_level) {
    return false;
  }
  // hardware_error_status
  if (lhs->hardware_error_status != rhs->hardware_error_status) {
    return false;
  }
  return true;
}

bool
dynamixel_workbench_msgs__msg__PROExt__copy(
  const dynamixel_workbench_msgs__msg__PROExt * input,
  dynamixel_workbench_msgs__msg__PROExt * output)
{
  if (!input || !output) {
    return false;
  }
  // model_number
  output->model_number = input->model_number;
  // firmware_version
  output->firmware_version = input->firmware_version;
  // model_id
  output->model_id = input->model_id;
  // baud_rate
  output->baud_rate = input->baud_rate;
  // return_delay_time
  output->return_delay_time = input->return_delay_time;
  // operating_mode
  output->operating_mode = input->operating_mode;
  // homing_offset
  output->homing_offset = input->homing_offset;
  // moving_threshold
  output->moving_threshold = input->moving_threshold;
  // temperature_limit
  output->temperature_limit = input->temperature_limit;
  // max_voltage_limit
  output->max_voltage_limit = input->max_voltage_limit;
  // min_voltage_limit
  output->min_voltage_limit = input->min_voltage_limit;
  // acceleration_limit
  output->acceleration_limit = input->acceleration_limit;
  // torque_limit
  output->torque_limit = input->torque_limit;
  // velocity_limit
  output->velocity_limit = input->velocity_limit;
  // max_position_limit
  output->max_position_limit = input->max_position_limit;
  // min_position_limit
  output->min_position_limit = input->min_position_limit;
  // external_port_mode_1
  output->external_port_mode_1 = input->external_port_mode_1;
  // external_port_mode_2
  output->external_port_mode_2 = input->external_port_mode_2;
  // external_port_mode_3
  output->external_port_mode_3 = input->external_port_mode_3;
  // external_port_mode_4
  output->external_port_mode_4 = input->external_port_mode_4;
  // shutdown
  output->shutdown = input->shutdown;
  // torque_enable
  output->torque_enable = input->torque_enable;
  // led_red
  output->led_red = input->led_red;
  // led_green
  output->led_green = input->led_green;
  // led_blue
  output->led_blue = input->led_blue;
  // velocity_i_gain
  output->velocity_i_gain = input->velocity_i_gain;
  // velocity_p_gain
  output->velocity_p_gain = input->velocity_p_gain;
  // position_p_gain
  output->position_p_gain = input->position_p_gain;
  // goal_position
  output->goal_position = input->goal_position;
  // goal_velocity
  output->goal_velocity = input->goal_velocity;
  // goal_torque
  output->goal_torque = input->goal_torque;
  // goal_acceleration
  output->goal_acceleration = input->goal_acceleration;
  // moving
  output->moving = input->moving;
  // present_position
  output->present_position = input->present_position;
  // present_velocity
  output->present_velocity = input->present_velocity;
  // present_current
  output->present_current = input->present_current;
  // present_input_voltage
  output->present_input_voltage = input->present_input_voltage;
  // present_temperature
  output->present_temperature = input->present_temperature;
  // registered_instruction
  output->registered_instruction = input->registered_instruction;
  // status_return_level
  output->status_return_level = input->status_return_level;
  // hardware_error_status
  output->hardware_error_status = input->hardware_error_status;
  return true;
}

dynamixel_workbench_msgs__msg__PROExt *
dynamixel_workbench_msgs__msg__PROExt__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__PROExt * msg = (dynamixel_workbench_msgs__msg__PROExt *)allocator.allocate(sizeof(dynamixel_workbench_msgs__msg__PROExt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_workbench_msgs__msg__PROExt));
  bool success = dynamixel_workbench_msgs__msg__PROExt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_workbench_msgs__msg__PROExt__destroy(dynamixel_workbench_msgs__msg__PROExt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_workbench_msgs__msg__PROExt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_workbench_msgs__msg__PROExt__Sequence__init(dynamixel_workbench_msgs__msg__PROExt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__PROExt * data = NULL;

  if (size) {
    data = (dynamixel_workbench_msgs__msg__PROExt *)allocator.zero_allocate(size, sizeof(dynamixel_workbench_msgs__msg__PROExt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_workbench_msgs__msg__PROExt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_workbench_msgs__msg__PROExt__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dynamixel_workbench_msgs__msg__PROExt__Sequence__fini(dynamixel_workbench_msgs__msg__PROExt__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dynamixel_workbench_msgs__msg__PROExt__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dynamixel_workbench_msgs__msg__PROExt__Sequence *
dynamixel_workbench_msgs__msg__PROExt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__PROExt__Sequence * array = (dynamixel_workbench_msgs__msg__PROExt__Sequence *)allocator.allocate(sizeof(dynamixel_workbench_msgs__msg__PROExt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_workbench_msgs__msg__PROExt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_workbench_msgs__msg__PROExt__Sequence__destroy(dynamixel_workbench_msgs__msg__PROExt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_workbench_msgs__msg__PROExt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_workbench_msgs__msg__PROExt__Sequence__are_equal(const dynamixel_workbench_msgs__msg__PROExt__Sequence * lhs, const dynamixel_workbench_msgs__msg__PROExt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_workbench_msgs__msg__PROExt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_workbench_msgs__msg__PROExt__Sequence__copy(
  const dynamixel_workbench_msgs__msg__PROExt__Sequence * input,
  dynamixel_workbench_msgs__msg__PROExt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_workbench_msgs__msg__PROExt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_workbench_msgs__msg__PROExt * data =
      (dynamixel_workbench_msgs__msg__PROExt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_workbench_msgs__msg__PROExt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_workbench_msgs__msg__PROExt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_workbench_msgs__msg__PROExt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
