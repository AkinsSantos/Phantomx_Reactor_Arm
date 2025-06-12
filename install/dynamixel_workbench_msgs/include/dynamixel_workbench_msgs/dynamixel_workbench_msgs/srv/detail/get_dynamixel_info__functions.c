// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamixel_workbench_msgs:srv/GetDynamixelInfo.idl
// generated code does not contain a copyright notice
#include "dynamixel_workbench_msgs/srv/detail/get_dynamixel_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__init(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__fini(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__are_equal(const dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request * lhs, const dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__copy(
  const dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request * input,
  dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request *
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request * msg = (dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request *)allocator.allocate(sizeof(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request));
  bool success = dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__destroy(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence__init(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request * data = NULL;

  if (size) {
    data = (dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request *)allocator.zero_allocate(size, sizeof(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__fini(&data[i - 1]);
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
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence__fini(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence * array)
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
      dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__fini(&array->data[i]);
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

dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence *
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence * array = (dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence *)allocator.allocate(sizeof(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence__destroy(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence__are_equal(const dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence * lhs, const dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence__copy(
  const dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence * input,
  dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request * data =
      (dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `dynamixel_info`
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_info__functions.h"

bool
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__init(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // dynamixel_info
  if (!dynamixel_workbench_msgs__msg__DynamixelInfo__init(&msg->dynamixel_info)) {
    dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__fini(msg);
    return false;
  }
  return true;
}

void
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__fini(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // dynamixel_info
  dynamixel_workbench_msgs__msg__DynamixelInfo__fini(&msg->dynamixel_info);
}

bool
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__are_equal(const dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response * lhs, const dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dynamixel_info
  if (!dynamixel_workbench_msgs__msg__DynamixelInfo__are_equal(
      &(lhs->dynamixel_info), &(rhs->dynamixel_info)))
  {
    return false;
  }
  return true;
}

bool
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__copy(
  const dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response * input,
  dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // dynamixel_info
  if (!dynamixel_workbench_msgs__msg__DynamixelInfo__copy(
      &(input->dynamixel_info), &(output->dynamixel_info)))
  {
    return false;
  }
  return true;
}

dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response *
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response * msg = (dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response *)allocator.allocate(sizeof(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response));
  bool success = dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__destroy(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence__init(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response * data = NULL;

  if (size) {
    data = (dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response *)allocator.zero_allocate(size, sizeof(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__fini(&data[i - 1]);
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
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence__fini(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence * array)
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
      dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__fini(&array->data[i]);
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

dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence *
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence * array = (dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence *)allocator.allocate(sizeof(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence__destroy(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence__are_equal(const dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence * lhs, const dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence__copy(
  const dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence * input,
  dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response * data =
      (dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
