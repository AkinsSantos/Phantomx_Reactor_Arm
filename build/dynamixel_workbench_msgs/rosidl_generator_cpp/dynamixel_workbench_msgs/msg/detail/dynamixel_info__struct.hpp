// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_workbench_msgs:msg/DynamixelInfo.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__STRUCT_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'load_info'
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelInfo __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelInfo __declspec(deprecated)
#endif

namespace dynamixel_workbench_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamixelInfo_
{
  using Type = DynamixelInfo_<ContainerAllocator>;

  explicit DynamixelInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : load_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
      this->model_number = 0;
      this->model_id = 0;
    }
  }

  explicit DynamixelInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : load_info(_alloc, _init),
    model_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
      this->model_number = 0;
      this->model_id = 0;
    }
  }

  // field types and members
  using _load_info_type =
    dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator>;
  _load_info_type load_info;
  using _model_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_name_type model_name;
  using _model_number_type =
    uint16_t;
  _model_number_type model_number;
  using _model_id_type =
    uint8_t;
  _model_id_type model_id;

  // setters for named parameter idiom
  Type & set__load_info(
    const dynamixel_workbench_msgs::msg::DynamixelLoadInfo_<ContainerAllocator> & _arg)
  {
    this->load_info = _arg;
    return *this;
  }
  Type & set__model_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_name = _arg;
    return *this;
  }
  Type & set__model_number(
    const uint16_t & _arg)
  {
    this->model_number = _arg;
    return *this;
  }
  Type & set__model_id(
    const uint8_t & _arg)
  {
    this->model_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelInfo
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__DynamixelInfo
    std::shared_ptr<dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamixelInfo_ & other) const
  {
    if (this->load_info != other.load_info) {
      return false;
    }
    if (this->model_name != other.model_name) {
      return false;
    }
    if (this->model_number != other.model_number) {
      return false;
    }
    if (this->model_id != other.model_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamixelInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamixelInfo_

// alias to use template instance with default allocator
using DynamixelInfo =
  dynamixel_workbench_msgs::msg::DynamixelInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__DYNAMIXEL_INFO__STRUCT_HPP_
