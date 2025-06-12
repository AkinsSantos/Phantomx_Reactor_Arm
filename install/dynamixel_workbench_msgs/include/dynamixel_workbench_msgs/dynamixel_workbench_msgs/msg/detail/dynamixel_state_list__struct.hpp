// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelStateList.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE_LIST__STRUCT_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'dynamixel_state'
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelStateList __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelStateList __declspec(deprecated)
#endif

namespace dynamixel_workbench_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamixelStateList_
{
  using Type = DynamixelStateList_<ContainerAllocator>;

  explicit DynamixelStateList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DynamixelStateList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _dynamixel_state_type =
    std::vector<dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator>>>;
  _dynamixel_state_type dynamixel_state;

  // setters for named parameter idiom
  Type & set__dynamixel_state(
    const std::vector<dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamixel_workbench_msgs::msg::DynamixelState_<ContainerAllocator>>> & _arg)
  {
    this->dynamixel_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_workbench_msgs::msg::DynamixelStateList_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_workbench_msgs::msg::DynamixelStateList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelStateList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelStateList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::DynamixelStateList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::DynamixelStateList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::DynamixelStateList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::DynamixelStateList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::DynamixelStateList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::DynamixelStateList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelStateList
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelStateList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelStateList
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelStateList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamixelStateList_ & other) const
  {
    if (this->dynamixel_state != other.dynamixel_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamixelStateList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamixelStateList_

// alias to use template instance with default allocator
using DynamixelStateList =
  dynamixel_workbench_msgs::msg::DynamixelStateList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_STATE_LIST__STRUCT_HPP_
