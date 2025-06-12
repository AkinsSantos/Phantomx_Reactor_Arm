// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_workbench_msgs:srv/GetDynamixelInfo.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__GET_DYNAMIXEL_INFO__STRUCT_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__GET_DYNAMIXEL_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request __declspec(deprecated)
#endif

namespace dynamixel_workbench_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDynamixelInfo_Request_
{
  using Type = GetDynamixelInfo_Request_<ContainerAllocator>;

  explicit GetDynamixelInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetDynamixelInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request
    std::shared_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_workbench_msgs__srv__GetDynamixelInfo_Request
    std::shared_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDynamixelInfo_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDynamixelInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDynamixelInfo_Request_

// alias to use template instance with default allocator
using GetDynamixelInfo_Request =
  dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_workbench_msgs


// Include directives for member types
// Member 'dynamixel_info'
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response __declspec(deprecated)
#endif

namespace dynamixel_workbench_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDynamixelInfo_Response_
{
  using Type = GetDynamixelInfo_Response_<ContainerAllocator>;

  explicit GetDynamixelInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dynamixel_info(_init)
  {
    (void)_init;
  }

  explicit GetDynamixelInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dynamixel_info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _dynamixel_info_type =
    dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator>;
  _dynamixel_info_type dynamixel_info;

  // setters for named parameter idiom
  Type & set__dynamixel_info(
    const dynamixel_workbench_msgs::msg::DynamixelInfo_<ContainerAllocator> & _arg)
  {
    this->dynamixel_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response
    std::shared_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_workbench_msgs__srv__GetDynamixelInfo_Response
    std::shared_ptr<dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDynamixelInfo_Response_ & other) const
  {
    if (this->dynamixel_info != other.dynamixel_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDynamixelInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDynamixelInfo_Response_

// alias to use template instance with default allocator
using GetDynamixelInfo_Response =
  dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_workbench_msgs

namespace dynamixel_workbench_msgs
{

namespace srv
{

struct GetDynamixelInfo
{
  using Request = dynamixel_workbench_msgs::srv::GetDynamixelInfo_Request;
  using Response = dynamixel_workbench_msgs::srv::GetDynamixelInfo_Response;
};

}  // namespace srv

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__SRV__DETAIL__GET_DYNAMIXEL_INFO__STRUCT_HPP_
