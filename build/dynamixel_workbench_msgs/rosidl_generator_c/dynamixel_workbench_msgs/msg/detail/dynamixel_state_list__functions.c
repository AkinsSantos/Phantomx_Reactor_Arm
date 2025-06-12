// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamixel_workbench_msgs:msg/DynamixelStateList.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `dynamixel_state`
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state__functions.h"

bool
dynamixel_workbench_msgs__msg__DynamixelStateList__init(dynamixel_workbench_msgs__msg__DynamixelStateList * msg)
{
  if (!msg) {
    return false;
  }
  // dynamixel_state
  if (!dynamixel_workbench_msgs__msg__DynamixelState__Sequence__init(&msg->dynamixel_state, 0)) {
    dynamixel_workbench_msgs__msg__DynamixelStateList__fini(msg);
    return false;
  }
  return true;
}

void
dynamixel_workbench_msgs__msg__DynamixelStateList__fini(dynamixel_workbench_msgs__msg__DynamixelStateList * msg)
{
  if (!msg) {
    return;
  }
  // dynamixel_state
  dynamixel_workbench_msgs__msg__DynamixelState__Sequence__fini(&msg->dynamixel_state);
}

bool
dynamixel_workbench_msgs__msg__DynamixelStateList__are_equal(const dynamixel_workbench_msgs__msg__DynamixelStateList * lhs, const dynamixel_workbench_msgs__msg__DynamixelStateList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dynamixel_state
  if (!dynamixel_workbench_msgs__msg__DynamixelState__Sequence__are_equal(
      &(lhs->dynamixel_state), &(rhs->dynamixel_state)))
  {
    return false;
  }
  return true;
}

bool
dynamixel_workbench_msgs__msg__DynamixelStateList__copy(
  const dynamixel_workbench_msgs__msg__DynamixelStateList * input,
  dynamixel_workbench_msgs__msg__DynamixelStateList * output)
{
  if (!input || !output) {
    return false;
  }
  // dynamixel_state
  if (!dynamixel_workbench_msgs__msg__DynamixelState__Sequence__copy(
      &(input->dynamixel_state), &(output->dynamixel_state)))
  {
    return false;
  }
  return true;
}

dynamixel_workbench_msgs__msg__DynamixelStateList *
dynamixel_workbench_msgs__msg__DynamixelStateList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__DynamixelStateList * msg = (dynamixel_workbench_msgs__msg__DynamixelStateList *)allocator.allocate(sizeof(dynamixel_workbench_msgs__msg__DynamixelStateList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_workbench_msgs__msg__DynamixelStateList));
  bool success = dynamixel_workbench_msgs__msg__DynamixelStateList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_workbench_msgs__msg__DynamixelStateList__destroy(dynamixel_workbench_msgs__msg__DynamixelStateList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_workbench_msgs__msg__DynamixelStateList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence__init(dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__DynamixelStateList * data = NULL;

  if (size) {
    data = (dynamixel_workbench_msgs__msg__DynamixelStateList *)allocator.zero_allocate(size, sizeof(dynamixel_workbench_msgs__msg__DynamixelStateList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_workbench_msgs__msg__DynamixelStateList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_workbench_msgs__msg__DynamixelStateList__fini(&data[i - 1]);
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
dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence__fini(dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence * array)
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
      dynamixel_workbench_msgs__msg__DynamixelStateList__fini(&array->data[i]);
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

dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence *
dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence * array = (dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence *)allocator.allocate(sizeof(dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence__destroy(dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence__are_equal(const dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence * lhs, const dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_workbench_msgs__msg__DynamixelStateList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence__copy(
  const dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence * input,
  dynamixel_workbench_msgs__msg__DynamixelStateList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_workbench_msgs__msg__DynamixelStateList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_workbench_msgs__msg__DynamixelStateList * data =
      (dynamixel_workbench_msgs__msg__DynamixelStateList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_workbench_msgs__msg__DynamixelStateList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_workbench_msgs__msg__DynamixelStateList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_workbench_msgs__msg__DynamixelStateList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
