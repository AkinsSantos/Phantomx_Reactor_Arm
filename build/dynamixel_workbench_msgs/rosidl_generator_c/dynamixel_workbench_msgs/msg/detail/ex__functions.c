// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamixel_workbench_msgs:msg/EX.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/msg/detail/ex__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dynamixel_workbench_msgs__msg__EX__init(dynamixel_workbench_msgs__msg__EX * msg)
{
  if (!msg) {
    return false;
  }
  // model_number
  // firmware_version
  // model_id
  // baud_rate
  // return_delay_time
  // cw_angle_limit
  // ccw_angle_limit
  // drive_mode
  // temperature_limit
  // min_voltage_limit
  // max_voltage_limit
  // max_torque
  // status_return_level
  // alarm_led
  // shutdown
  // torque_enable
  // led
  // cw_compliance_margin
  // ccw_compliance_margin
  // cw_compliance_slope
  // ccw_compliance_slope
  // goal_position
  // moving_speed
  // torque_limit
  // present_position
  // present_speed
  // present_load
  // present_voltage
  // present_temperature
  // registered
  // moving
  // lock
  // punch
  // sensored_current
  return true;
}

void
dynamixel_workbench_msgs__msg__EX__fini(dynamixel_workbench_msgs__msg__EX * msg)
{
  if (!msg) {
    return;
  }
  // model_number
  // firmware_version
  // model_id
  // baud_rate
  // return_delay_time
  // cw_angle_limit
  // ccw_angle_limit
  // drive_mode
  // temperature_limit
  // min_voltage_limit
  // max_voltage_limit
  // max_torque
  // status_return_level
  // alarm_led
  // shutdown
  // torque_enable
  // led
  // cw_compliance_margin
  // ccw_compliance_margin
  // cw_compliance_slope
  // ccw_compliance_slope
  // goal_position
  // moving_speed
  // torque_limit
  // present_position
  // present_speed
  // present_load
  // present_voltage
  // present_temperature
  // registered
  // moving
  // lock
  // punch
  // sensored_current
}

bool
dynamixel_workbench_msgs__msg__EX__are_equal(const dynamixel_workbench_msgs__msg__EX * lhs, const dynamixel_workbench_msgs__msg__EX * rhs)
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
  // cw_angle_limit
  if (lhs->cw_angle_limit != rhs->cw_angle_limit) {
    return false;
  }
  // ccw_angle_limit
  if (lhs->ccw_angle_limit != rhs->ccw_angle_limit) {
    return false;
  }
  // drive_mode
  if (lhs->drive_mode != rhs->drive_mode) {
    return false;
  }
  // temperature_limit
  if (lhs->temperature_limit != rhs->temperature_limit) {
    return false;
  }
  // min_voltage_limit
  if (lhs->min_voltage_limit != rhs->min_voltage_limit) {
    return false;
  }
  // max_voltage_limit
  if (lhs->max_voltage_limit != rhs->max_voltage_limit) {
    return false;
  }
  // max_torque
  if (lhs->max_torque != rhs->max_torque) {
    return false;
  }
  // status_return_level
  if (lhs->status_return_level != rhs->status_return_level) {
    return false;
  }
  // alarm_led
  if (lhs->alarm_led != rhs->alarm_led) {
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
  // led
  if (lhs->led != rhs->led) {
    return false;
  }
  // cw_compliance_margin
  if (lhs->cw_compliance_margin != rhs->cw_compliance_margin) {
    return false;
  }
  // ccw_compliance_margin
  if (lhs->ccw_compliance_margin != rhs->ccw_compliance_margin) {
    return false;
  }
  // cw_compliance_slope
  if (lhs->cw_compliance_slope != rhs->cw_compliance_slope) {
    return false;
  }
  // ccw_compliance_slope
  if (lhs->ccw_compliance_slope != rhs->ccw_compliance_slope) {
    return false;
  }
  // goal_position
  if (lhs->goal_position != rhs->goal_position) {
    return false;
  }
  // moving_speed
  if (lhs->moving_speed != rhs->moving_speed) {
    return false;
  }
  // torque_limit
  if (lhs->torque_limit != rhs->torque_limit) {
    return false;
  }
  // present_position
  if (lhs->present_position != rhs->present_position) {
    return false;
  }
  // present_speed
  if (lhs->present_speed != rhs->present_speed) {
    return false;
  }
  // present_load
  if (lhs->present_load != rhs->present_load) {
    return false;
  }
  // present_voltage
  if (lhs->present_voltage != rhs->present_voltage) {
    return false;
  }
  // present_temperature
  if (lhs->present_temperature != rhs->present_temperature) {
    return false;
  }
  // registered
  if (lhs->registered != rhs->registered) {
    return false;
  }
  // moving
  if (lhs->moving != rhs->moving) {
    return false;
  }
  // lock
  if (lhs->lock != rhs->lock) {
    return false;
  }
  // punch
  if (lhs->punch != rhs->punch) {
    return false;
  }
  // sensored_current
  if (lhs->sensored_current != rhs->sensored_current) {
    return false;
  }
  return true;
}

bool
dynamixel_workbench_msgs__msg__EX__copy(
  const dynamixel_workbench_msgs__msg__EX * input,
  dynamixel_workbench_msgs__msg__EX * output)
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
  // cw_angle_limit
  output->cw_angle_limit = input->cw_angle_limit;
  // ccw_angle_limit
  output->ccw_angle_limit = input->ccw_angle_limit;
  // drive_mode
  output->drive_mode = input->drive_mode;
  // temperature_limit
  output->temperature_limit = input->temperature_limit;
  // min_voltage_limit
  output->min_voltage_limit = input->min_voltage_limit;
  // max_voltage_limit
  output->max_voltage_limit = input->max_voltage_limit;
  // max_torque
  output->max_torque = input->max_torque;
  // status_return_level
  output->status_return_level = input->status_return_level;
  // alarm_led
  output->alarm_led = input->alarm_led;
  // shutdown
  output->shutdown = input->shutdown;
  // torque_enable
  output->torque_enable = input->torque_enable;
  // led
  output->led = input->led;
  // cw_compliance_margin
  output->cw_compliance_margin = input->cw_compliance_margin;
  // ccw_compliance_margin
  output->ccw_compliance_margin = input->ccw_compliance_margin;
  // cw_compliance_slope
  output->cw_compliance_slope = input->cw_compliance_slope;
  // ccw_compliance_slope
  output->ccw_compliance_slope = input->ccw_compliance_slope;
  // goal_position
  output->goal_position = input->goal_position;
  // moving_speed
  output->moving_speed = input->moving_speed;
  // torque_limit
  output->torque_limit = input->torque_limit;
  // present_position
  output->present_position = input->present_position;
  // present_speed
  output->present_speed = input->present_speed;
  // present_load
  output->present_load = input->present_load;
  // present_voltage
  output->present_voltage = input->present_voltage;
  // present_temperature
  output->present_temperature = input->present_temperature;
  // registered
  output->registered = input->registered;
  // moving
  output->moving = input->moving;
  // lock
  output->lock = input->lock;
  // punch
  output->punch = input->punch;
  // sensored_current
  output->sensored_current = input->sensored_current;
  return true;
}

dynamixel_workbench_msgs__msg__EX *
dynamixel_workbench_msgs__msg__EX__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__EX * msg = (dynamixel_workbench_msgs__msg__EX *)allocator.allocate(sizeof(dynamixel_workbench_msgs__msg__EX), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_workbench_msgs__msg__EX));
  bool success = dynamixel_workbench_msgs__msg__EX__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_workbench_msgs__msg__EX__destroy(dynamixel_workbench_msgs__msg__EX * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_workbench_msgs__msg__EX__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_workbench_msgs__msg__EX__Sequence__init(dynamixel_workbench_msgs__msg__EX__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__EX * data = NULL;

  if (size) {
    data = (dynamixel_workbench_msgs__msg__EX *)allocator.zero_allocate(size, sizeof(dynamixel_workbench_msgs__msg__EX), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_workbench_msgs__msg__EX__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_workbench_msgs__msg__EX__fini(&data[i - 1]);
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
dynamixel_workbench_msgs__msg__EX__Sequence__fini(dynamixel_workbench_msgs__msg__EX__Sequence * array)
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
      dynamixel_workbench_msgs__msg__EX__fini(&array->data[i]);
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

dynamixel_workbench_msgs__msg__EX__Sequence *
dynamixel_workbench_msgs__msg__EX__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__EX__Sequence * array = (dynamixel_workbench_msgs__msg__EX__Sequence *)allocator.allocate(sizeof(dynamixel_workbench_msgs__msg__EX__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_workbench_msgs__msg__EX__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_workbench_msgs__msg__EX__Sequence__destroy(dynamixel_workbench_msgs__msg__EX__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_workbench_msgs__msg__EX__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_workbench_msgs__msg__EX__Sequence__are_equal(const dynamixel_workbench_msgs__msg__EX__Sequence * lhs, const dynamixel_workbench_msgs__msg__EX__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_workbench_msgs__msg__EX__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_workbench_msgs__msg__EX__Sequence__copy(
  const dynamixel_workbench_msgs__msg__EX__Sequence * input,
  dynamixel_workbench_msgs__msg__EX__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_workbench_msgs__msg__EX);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_workbench_msgs__msg__EX * data =
      (dynamixel_workbench_msgs__msg__EX *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_workbench_msgs__msg__EX__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_workbench_msgs__msg__EX__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_workbench_msgs__msg__EX__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
