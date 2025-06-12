// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_workbench_msgs:srv/DynamixelCommand.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__STRUCT_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamixel_workbench_msgs__srv__DynamixelCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_workbench_msgs__srv__DynamixelCommand_Request __declspec(deprecated)
#endif

namespace dynamixel_workbench_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DynamixelCommand_Request_
{
  using Type = DynamixelCommand_Request_<ContainerAllocator>;

  explicit DynamixelCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->id = 0;
      this->addr_name = "";
      this->value = 0l;
    }
  }

  explicit DynamixelCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    addr_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->id = 0;
      this->addr_name = "";
      this->value = 0l;
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _id_type =
    uint8_t;
  _id_type id;
  using _addr_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _addr_name_type addr_name;
  using _value_type =
    int32_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__addr_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->addr_name = _arg;
    return *this;
  }
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_workbench_msgs::srv::DynamixelCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_workbench_msgs::srv::DynamixelCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::srv::DynamixelCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::srv::DynamixelCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_workbench_msgs__srv__DynamixelCommand_Request
    std::shared_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_workbench_msgs__srv__DynamixelCommand_Request
    std::shared_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamixelCommand_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->addr_name != other.addr_name) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamixelCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamixelCommand_Request_

// alias to use template instance with default allocator
using DynamixelCommand_Request =
  dynamixel_workbench_msgs::srv::DynamixelCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_workbench_msgs


#ifndef _WIN32
# define DEPRECATED__dynamixel_workbench_msgs__srv__DynamixelCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_workbench_msgs__srv__DynamixelCommand_Response __declspec(deprecated)
#endif

namespace dynamixel_workbench_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DynamixelCommand_Response_
{
  using Type = DynamixelCommand_Response_<ContainerAllocator>;

  explicit DynamixelCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->comm_result = false;
    }
  }

  explicit DynamixelCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->comm_result = false;
    }
  }

  // field types and members
  using _comm_result_type =
    bool;
  _comm_result_type comm_result;

  // setters for named parameter idiom
  Type & set__comm_result(
    const bool & _arg)
  {
    this->comm_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_workbench_msgs::srv::DynamixelCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_workbench_msgs::srv::DynamixelCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::srv::DynamixelCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::srv::DynamixelCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_workbench_msgs__srv__DynamixelCommand_Response
    std::shared_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_workbench_msgs__srv__DynamixelCommand_Response
    std::shared_ptr<dynamixel_workbench_msgs::srv::DynamixelCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamixelCommand_Response_ & other) const
  {
    if (this->comm_result != other.comm_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamixelCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamixelCommand_Response_

// alias to use template instance with default allocator
using DynamixelCommand_Response =
  dynamixel_workbench_msgs::srv::DynamixelCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_workbench_msgs

namespace dynamixel_workbench_msgs
{

namespace srv
{

struct DynamixelCommand
{
  using Request = dynamixel_workbench_msgs::srv::DynamixelCommand_Request;
  using Response = dynamixel_workbench_msgs::srv::DynamixelCommand_Response;
};

}  // namespace srv

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__DYNAMIXEL_COMMAND__STRUCT_HPP_
