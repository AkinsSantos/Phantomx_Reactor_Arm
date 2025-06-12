// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelLoadInfo.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_LOAD_INFO__STRUCT_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_LOAD_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelLoadInfo __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelLoadInfo __declspec(deprecated)
#endif

namespace dynamixel_workbench_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamixelLoadInfo_
{
  using Type = DynamixelLoadInfo_<ContainerAllocator>;

  explicit DynamixelLoadInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_name = "";
      this->baud_rate = 0ull;
      this->protocol_version = 0.0f;
    }
  }

  explicit DynamixelLoadInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : device_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_name = "";
      this->baud_rate = 0ull;
      this->protocol_version = 0.0f;
    }
  }

  // field types and members
  using _device_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _device_name_type device_name;
  using _baud_rate_type =
    uint64_t;
  _baud_rate_type baud_rate;
  using _protocol_version_type =
    float;
  _protocol_version_type protocol_version;

  // setters for named parameter idiom
  Type & set__device_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->device_name = _arg;
    return *this;
  }
  Type & set__baud_rate(
    const uint64_t & _arg)
  {
    this->baud_rate = _arg;
    return *this;
  }
  Type & set__protocol_version(
    const float & _arg)
  {
    this->protocol_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelLoadInfo
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelLoadInfo
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamixelLoadInfo_ & other) const
  {
    if (this->device_name != other.device_name) {
      return false;
    }
    if (this->baud_rate != other.baud_rate) {
      return false;
    }
    if (this->protocol_version != other.protocol_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamixelLoadInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamixelLoadInfo_

// alias to use template instance with default allocator
using DynamixelLoadInfo =
  dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_LOAD_INFO__STRUCT_HPP_
