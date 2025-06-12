// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelState.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__STRUCT_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelState __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelState __declspec(deprecated)
#endif

namespace dynamixel_workbench_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamixelState_
{
  using Type = DynamixelState_<ContainerAllocator>;

  explicit DynamixelState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0;
      this->present_position = 0l;
      this->present_velocity = 0l;
      this->present_current = 0;
    }
  }

  explicit DynamixelState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0;
      this->present_position = 0l;
      this->present_velocity = 0l;
      this->present_current = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _id_type =
    uint8_t;
  _id_type id;
  using _present_position_type =
    int32_t;
  _present_position_type present_position;
  using _present_velocity_type =
    int32_t;
  _present_velocity_type present_velocity;
  using _present_current_type =
    int16_t;
  _present_current_type present_current;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__present_position(
    const int32_t & _arg)
  {
    this->present_position = _arg;
    return *this;
  }
  Type & set__present_velocity(
    const int32_t & _arg)
  {
    this->present_velocity = _arg;
    return *this;
  }
  Type & set__present_current(
    const int16_t & _arg)
  {
    this->present_current = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelState
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelState
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamixelState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->present_position != other.present_position) {
      return false;
    }
    if (this->present_velocity != other.present_velocity) {
      return false;
    }
    if (this->present_current != other.present_current) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamixelState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamixelState_

// alias to use template instance with default allocator
using DynamixelState =
  dynamixel_workbench_msgs::msg::DynamixelState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE__STRUCT_HPP_
