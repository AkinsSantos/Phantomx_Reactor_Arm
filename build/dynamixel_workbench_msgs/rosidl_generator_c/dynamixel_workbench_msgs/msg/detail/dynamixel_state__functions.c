// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamixel_workbench_msgs:msg/DynamixelState.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
dynamixel_workbench_msgs__msg__DynamixelState__init(dynamixel_workbench_msgs__msg__DynamixelState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    dynamixel_workbench_msgs__msg__DynamixelState__fini(msg);
    return false;
  }
  // id
  // present_position
  // present_velocity
  // present_current
  return true;
}

void
dynamixel_workbench_msgs__msg__DynamixelState__fini(dynamixel_workbench_msgs__msg__DynamixelState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // id
  // present_position
  // present_velocity
  // present_current
}

bool
dynamixel_workbench_msgs__msg__DynamixelState__are_equal(const dynamixel_workbench_msgs__msg__DynamixelState * lhs, const dynamixel_workbench_msgs__msg__DynamixelState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
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
  return true;
}

bool
dynamixel_workbench_msgs__msg__DynamixelState__copy(
  const dynamixel_workbench_msgs__msg__DynamixelState * input,
  dynamixel_workbench_msgs__msg__DynamixelState * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // present_position
  output->present_position = input->present_position;
  // present_velocity
  output->present_velocity = input->present_velocity;
  // present_current
  output->present_current = input->present_current;
  return true;
}

dynamixel_workbench_msgs__msg__DynamixelState *
dynamixel_workbench_msgs__msg__DynamixelState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__DynamixelState * msg = (dynamixel_workbench_msgs__msg__DynamixelState *)allocator.allocate(sizeof(dynamixel_workbench_msgs__msg__DynamixelState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_workbench_msgs__msg__DynamixelState));
  bool success = dynamixel_workbench_msgs__msg__DynamixelState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_workbench_msgs__msg__DynamixelState__destroy(dynamixel_workbench_msgs__msg__DynamixelState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_workbench_msgs__msg__DynamixelState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_workbench_msgs__msg__DynamixelState__Sequence__init(dynamixel_workbench_msgs__msg__DynamixelState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__DynamixelState * data = NULL;

  if (size) {
    data = (dynamixel_workbench_msgs__msg__DynamixelState *)allocator.zero_allocate(size, sizeof(dynamixel_workbench_msgs__msg__DynamixelState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_workbench_msgs__msg__DynamixelState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_workbench_msgs__msg__DynamixelState__fini(&data[i - 1]);
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
dynamixel_workbench_msgs__msg__DynamixelState__Sequence__fini(dynamixel_workbench_msgs__msg__DynamixelState__Sequence * array)
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
      dynamixel_workbench_msgs__msg__DynamixelState__fini(&array->data[i]);
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

dynamixel_workbench_msgs__msg__DynamixelState__Sequence *
dynamixel_workbench_msgs__msg__DynamixelState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__DynamixelState__Sequence * array = (dynamixel_workbench_msgs__msg__DynamixelState__Sequence *)allocator.allocate(sizeof(dynamixel_workbench_msgs__msg__DynamixelState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_workbench_msgs__msg__DynamixelState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_workbench_msgs__msg__DynamixelState__Sequence__destroy(dynamixel_workbench_msgs__msg__DynamixelState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_workbench_msgs__msg__DynamixelState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_workbench_msgs__msg__DynamixelState__Sequence__are_equal(const dynamixel_workbench_msgs__msg__DynamixelState__Sequence * lhs, const dynamixel_workbench_msgs__msg__DynamixelState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_workbench_msgs__msg__DynamixelState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_workbench_msgs__msg__DynamixelState__Sequence__copy(
  const dynamixel_workbench_msgs__msg__DynamixelState__Sequence * input,
  dynamixel_workbench_msgs__msg__DynamixelState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_workbench_msgs__msg__DynamixelState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_workbench_msgs__msg__DynamixelState * data =
      (dynamixel_workbench_msgs__msg__DynamixelState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_workbench_msgs__msg__DynamixelState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_workbench_msgs__msg__DynamixelState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_workbench_msgs__msg__DynamixelState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
