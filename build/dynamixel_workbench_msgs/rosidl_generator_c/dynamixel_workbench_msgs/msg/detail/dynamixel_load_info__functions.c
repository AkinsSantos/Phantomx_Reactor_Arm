// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamixel_workbench_msgs:msg/DynamixelLoadInfo.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `device_name`
#include "rosidl_runtime_c/string_functions.h"

bool
dynamixel_workbench_msgs__msg__DynamixelLoadInfo__init(dynamixel_workbench_msgs__msg__DynamixelLoadInfo * msg)
{
  if (!msg) {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__init(&msg->device_name)) {
    dynamixel_workbench_msgs__msg__DynamixelLoadInfo__fini(msg);
    return false;
  }
  // baud_rate
  // protocol_version
  return true;
}

void
dynamixel_workbench_msgs__msg__DynamixelLoadInfo__fini(dynamixel_workbench_msgs__msg__DynamixelLoadInfo * msg)
{
  if (!msg) {
    return;
  }
  // device_name
  rosidl_runtime_c__String__fini(&msg->device_name);
  // baud_rate
  // protocol_version
}

bool
dynamixel_workbench_msgs__msg__DynamixelLoadInfo__are_equal(const dynamixel_workbench_msgs__msg__DynamixelLoadInfo * lhs, const dynamixel_workbench_msgs__msg__DynamixelLoadInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->device_name), &(rhs->device_name)))
  {
    return false;
  }
  // baud_rate
  if (lhs->baud_rate != rhs->baud_rate) {
    return false;
  }
  // protocol_version
  if (lhs->protocol_version != rhs->protocol_version) {
    return false;
  }
  return true;
}

bool
dynamixel_workbench_msgs__msg__DynamixelLoadInfo__copy(
  const dynamixel_workbench_msgs__msg__DynamixelLoadInfo * input,
  dynamixel_workbench_msgs__msg__DynamixelLoadInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // device_name
  if (!rosidl_runtime_c__String__copy(
      &(input->device_name), &(output->device_name)))
  {
    return false;
  }
  // baud_rate
  output->baud_rate = input->baud_rate;
  // protocol_version
  output->protocol_version = input->protocol_version;
  return true;
}

dynamixel_workbench_msgs__msg__DynamixelLoadInfo *
dynamixel_workbench_msgs__msg__DynamixelLoadInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__DynamixelLoadInfo * msg = (dynamixel_workbench_msgs__msg__DynamixelLoadInfo *)allocator.allocate(sizeof(dynamixel_workbench_msgs__msg__DynamixelLoadInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_workbench_msgs__msg__DynamixelLoadInfo));
  bool success = dynamixel_workbench_msgs__msg__DynamixelLoadInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_workbench_msgs__msg__DynamixelLoadInfo__destroy(dynamixel_workbench_msgs__msg__DynamixelLoadInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_workbench_msgs__msg__DynamixelLoadInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence__init(dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__DynamixelLoadInfo * data = NULL;

  if (size) {
    data = (dynamixel_workbench_msgs__msg__DynamixelLoadInfo *)allocator.zero_allocate(size, sizeof(dynamixel_workbench_msgs__msg__DynamixelLoadInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_workbench_msgs__msg__DynamixelLoadInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_workbench_msgs__msg__DynamixelLoadInfo__fini(&data[i - 1]);
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
dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence__fini(dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence * array)
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
      dynamixel_workbench_msgs__msg__DynamixelLoadInfo__fini(&array->data[i]);
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

dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence *
dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence * array = (dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence *)allocator.allocate(sizeof(dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence__destroy(dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence__are_equal(const dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence * lhs, const dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_workbench_msgs__msg__DynamixelLoadInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence__copy(
  const dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence * input,
  dynamixel_workbench_msgs__msg__DynamixelLoadInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_workbench_msgs__msg__DynamixelLoadInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_workbench_msgs__msg__DynamixelLoadInfo * data =
      (dynamixel_workbench_msgs__msg__DynamixelLoadInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_workbench_msgs__msg__DynamixelLoadInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_workbench_msgs__msg__DynamixelLoadInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_workbench_msgs__msg__DynamixelLoadInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
