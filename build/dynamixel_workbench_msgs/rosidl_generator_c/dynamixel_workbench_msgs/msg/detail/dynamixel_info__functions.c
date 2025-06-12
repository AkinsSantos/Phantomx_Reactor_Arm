// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamixel_workbench_msgs:msg/DynamixelInfo.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `load_info`
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__functions.h"
// Member `model_name`
#include "rosidl_runtime_c/string_functions.h"

bool
dynamixel_workbench_msgs__msg__DynamixelInfo__init(dynamixel_workbench_msgs__msg__DynamixelInfo * msg)
{
  if (!msg) {
    return false;
  }
  // load_info
  if (!dynamixel_workbench_msgs__msg__DynamixelLoadInfo__init(&msg->load_info)) {
    dynamixel_workbench_msgs__msg__DynamixelInfo__fini(msg);
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    dynamixel_workbench_msgs__msg__DynamixelInfo__fini(msg);
    return false;
  }
  // model_number
  // model_id
  return true;
}

void
dynamixel_workbench_msgs__msg__DynamixelInfo__fini(dynamixel_workbench_msgs__msg__DynamixelInfo * msg)
{
  if (!msg) {
    return;
  }
  // load_info
  dynamixel_workbench_msgs__msg__DynamixelLoadInfo__fini(&msg->load_info);
  // model_name
  rosidl_runtime_c__String__fini(&msg->model_name);
  // model_number
  // model_id
}

bool
dynamixel_workbench_msgs__msg__DynamixelInfo__are_equal(const dynamixel_workbench_msgs__msg__DynamixelInfo * lhs, const dynamixel_workbench_msgs__msg__DynamixelInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // load_info
  if (!dynamixel_workbench_msgs__msg__DynamixelLoadInfo__are_equal(
      &(lhs->load_info), &(rhs->load_info)))
  {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_name), &(rhs->model_name)))
  {
    return false;
  }
  // model_number
  if (lhs->model_number != rhs->model_number) {
    return false;
  }
  // model_id
  if (lhs->model_id != rhs->model_id) {
    return false;
  }
  return true;
}

bool
dynamixel_workbench_msgs__msg__DynamixelInfo__copy(
  const dynamixel_workbench_msgs__msg__DynamixelInfo * input,
  dynamixel_workbench_msgs__msg__DynamixelInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // load_info
  if (!dynamixel_workbench_msgs__msg__DynamixelLoadInfo__copy(
      &(input->load_info), &(output->load_info)))
  {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__copy(
      &(input->model_name), &(output->model_name)))
  {
    return false;
  }
  // model_number
  output->model_number = input->model_number;
  // model_id
  output->model_id = input->model_id;
  return true;
}

dynamixel_workbench_msgs__msg__DynamixelInfo *
dynamixel_workbench_msgs__msg__DynamixelInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__DynamixelInfo * msg = (dynamixel_workbench_msgs__msg__DynamixelInfo *)allocator.allocate(sizeof(dynamixel_workbench_msgs__msg__DynamixelInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_workbench_msgs__msg__DynamixelInfo));
  bool success = dynamixel_workbench_msgs__msg__DynamixelInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_workbench_msgs__msg__DynamixelInfo__destroy(dynamixel_workbench_msgs__msg__DynamixelInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_workbench_msgs__msg__DynamixelInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence__init(dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__DynamixelInfo * data = NULL;

  if (size) {
    data = (dynamixel_workbench_msgs__msg__DynamixelInfo *)allocator.zero_allocate(size, sizeof(dynamixel_workbench_msgs__msg__DynamixelInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_workbench_msgs__msg__DynamixelInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_workbench_msgs__msg__DynamixelInfo__fini(&data[i - 1]);
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
dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence__fini(dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence * array)
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
      dynamixel_workbench_msgs__msg__DynamixelInfo__fini(&array->data[i]);
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

dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence *
dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence * array = (dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence *)allocator.allocate(sizeof(dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence__destroy(dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence__are_equal(const dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence * lhs, const dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_workbench_msgs__msg__DynamixelInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence__copy(
  const dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence * input,
  dynamixel_workbench_msgs__msg__DynamixelInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_workbench_msgs__msg__DynamixelInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_workbench_msgs__msg__DynamixelInfo * data =
      (dynamixel_workbench_msgs__msg__DynamixelInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_workbench_msgs__msg__DynamixelInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_workbench_msgs__msg__DynamixelInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_workbench_msgs__msg__DynamixelInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
