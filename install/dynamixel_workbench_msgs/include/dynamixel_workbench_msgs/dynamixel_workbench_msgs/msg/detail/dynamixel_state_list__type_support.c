// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynamixel_workbench_msgs:msg/DynamixelStateList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state_list__rosidl_typesupport_introspection_c.h"
#include "dynamixel_workbench_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state_list__functions.h"
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state_list__struct.h"


// Include directives for member types
// Member `dynamixel_state`
#include "dynamixel_workbench_msgs/msg/dynamixel_state.h"
// Member `dynamixel_state`
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__DynamixelStateList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamixel_workbench_msgs__msg__DynamixelStateList__init(message_memory);
}

void dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__DynamixelStateList_fini_function(void * message_memory)
{
  dynamixel_workbench_msgs__msg__DynamixelStateList__fini(message_memory);
}

size_t dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__size_function__DynamixelStateList__dynamixel_state(
  const void * untyped_member)
{
  const dynamixel_workbench_msgs__msg__DynamixelState__Sequence * member =
    (const dynamixel_workbench_msgs__msg__DynamixelState__Sequence *)(untyped_member);
  return member->size;
}

const void * dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__get_const_function__DynamixelStateList__dynamixel_state(
  const void * untyped_member, size_t index)
{
  const dynamixel_workbench_msgs__msg__DynamixelState__Sequence * member =
    (const dynamixel_workbench_msgs__msg__DynamixelState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__get_function__DynamixelStateList__dynamixel_state(
  void * untyped_member, size_t index)
{
  dynamixel_workbench_msgs__msg__DynamixelState__Sequence * member =
    (dynamixel_workbench_msgs__msg__DynamixelState__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__fetch_function__DynamixelStateList__dynamixel_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const dynamixel_workbench_msgs__msg__DynamixelState * item =
    ((const dynamixel_workbench_msgs__msg__DynamixelState *)
    dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__get_const_function__DynamixelStateList__dynamixel_state(untyped_member, index));
  dynamixel_workbench_msgs__msg__DynamixelState * value =
    (dynamixel_workbench_msgs__msg__DynamixelState *)(untyped_value);
  *value = *item;
}

void dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__assign_function__DynamixelStateList__dynamixel_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  dynamixel_workbench_msgs__msg__DynamixelState * item =
    ((dynamixel_workbench_msgs__msg__DynamixelState *)
    dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__get_function__DynamixelStateList__dynamixel_state(untyped_member, index));
  const dynamixel_workbench_msgs__msg__DynamixelState * value =
    (const dynamixel_workbench_msgs__msg__DynamixelState *)(untyped_value);
  *item = *value;
}

bool dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__resize_function__DynamixelStateList__dynamixel_state(
  void * untyped_member, size_t size)
{
  dynamixel_workbench_msgs__msg__DynamixelState__Sequence * member =
    (dynamixel_workbench_msgs__msg__DynamixelState__Sequence *)(untyped_member);
  dynamixel_workbench_msgs__msg__DynamixelState__Sequence__fini(member);
  return dynamixel_workbench_msgs__msg__DynamixelState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__DynamixelStateList_message_member_array[1] = {
  {
    "dynamixel_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_workbench_msgs__msg__DynamixelStateList, dynamixel_state),  // bytes offset in struct
    NULL,  // default value
    dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__size_function__DynamixelStateList__dynamixel_state,  // size() function pointer
    dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__get_const_function__DynamixelStateList__dynamixel_state,  // get_const(index) function pointer
    dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__get_function__DynamixelStateList__dynamixel_state,  // get(index) function pointer
    dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__fetch_function__DynamixelStateList__dynamixel_state,  // fetch(index, &value) function pointer
    dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__assign_function__DynamixelStateList__dynamixel_state,  // assign(index, value) function pointer
    dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__resize_function__DynamixelStateList__dynamixel_state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__DynamixelStateList_message_members = {
  "dynamixel_workbench_msgs__msg",  // message namespace
  "DynamixelStateList",  // message name
  1,  // number of fields
  sizeof(dynamixel_workbench_msgs__msg__DynamixelStateList),
  dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__DynamixelStateList_message_member_array,  // message members
  dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__DynamixelStateList_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__DynamixelStateList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__DynamixelStateList_message_type_support_handle = {
  0,
  &dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__DynamixelStateList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamixel_workbench_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_workbench_msgs, msg, DynamixelStateList)() {
  dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__DynamixelStateList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_workbench_msgs, msg, DynamixelState)();
  if (!dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__DynamixelStateList_message_type_support_handle.typesupport_identifier) {
    dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__DynamixelStateList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamixel_workbench_msgs__msg__DynamixelStateList__rosidl_typesupport_introspection_c__DynamixelStateList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
