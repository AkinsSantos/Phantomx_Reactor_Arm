// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_workbench_msgs:msg/XL320.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XL320__STRUCT_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XL320__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamixel_workbench_msgs__msg__XL320 __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_workbench_msgs__msg__XL320 __declspec(deprecated)
#endif

namespace dynamixel_workbench_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct XL320_
{
  using Type = XL320_<ContainerAllocator>;

  explicit XL320_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_number = 0;
      this->firmware_version = 0;
      this->model_id = 0;
      this->baud_rate = 0;
      this->return_delay_time = 0;
      this->cw_angle_limit = 0;
      this->ccw_angle_limit = 0;
      this->control_mode = 0;
      this->temperature_limit = 0;
      this->min_voltage_limit = 0;
      this->max_voltage_limit = 0;
      this->max_torque = 0;
      this->status_return_level = 0;
      this->shutdown = 0;
      this->torque_enable = 0;
      this->led = 0;
      this->d_gain = 0;
      this->i_gain = 0;
      this->p_gain = 0;
      this->goal_position = 0;
      this->moving_speed = 0;
      this->torque_limit = 0;
      this->present_position = 0;
      this->present_speed = 0;
      this->present_load = 0;
      this->present_voltage = 0;
      this->present_temperature = 0;
      this->registered = 0;
      this->moving = 0;
      this->hardware_error_status = 0;
      this->punch = 0;
    }
  }

  explicit XL320_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_number = 0;
      this->firmware_version = 0;
      this->model_id = 0;
      this->baud_rate = 0;
      this->return_delay_time = 0;
      this->cw_angle_limit = 0;
      this->ccw_angle_limit = 0;
      this->control_mode = 0;
      this->temperature_limit = 0;
      this->min_voltage_limit = 0;
      this->max_voltage_limit = 0;
      this->max_torque = 0;
      this->status_return_level = 0;
      this->shutdown = 0;
      this->torque_enable = 0;
      this->led = 0;
      this->d_gain = 0;
      this->i_gain = 0;
      this->p_gain = 0;
      this->goal_position = 0;
      this->moving_speed = 0;
      this->torque_limit = 0;
      this->present_position = 0;
      this->present_speed = 0;
      this->present_load = 0;
      this->present_voltage = 0;
      this->present_temperature = 0;
      this->registered = 0;
      this->moving = 0;
      this->hardware_error_status = 0;
      this->punch = 0;
    }
  }

  // field types and members
  using _model_number_type =
    uint16_t;
  _model_number_type model_number;
  using _firmware_version_type =
    uint8_t;
  _firmware_version_type firmware_version;
  using _model_id_type =
    uint8_t;
  _model_id_type model_id;
  using _baud_rate_type =
    uint8_t;
  _baud_rate_type baud_rate;
  using _return_delay_time_type =
    uint8_t;
  _return_delay_time_type return_delay_time;
  using _cw_angle_limit_type =
    uint16_t;
  _cw_angle_limit_type cw_angle_limit;
  using _ccw_angle_limit_type =
    uint16_t;
  _ccw_angle_limit_type ccw_angle_limit;
  using _control_mode_type =
    uint8_t;
  _control_mode_type control_mode;
  using _temperature_limit_type =
    uint8_t;
  _temperature_limit_type temperature_limit;
  using _min_voltage_limit_type =
    uint8_t;
  _min_voltage_limit_type min_voltage_limit;
  using _max_voltage_limit_type =
    uint8_t;
  _max_voltage_limit_type max_voltage_limit;
  using _max_torque_type =
    uint16_t;
  _max_torque_type max_torque;
  using _status_return_level_type =
    uint8_t;
  _status_return_level_type status_return_level;
  using _shutdown_type =
    uint8_t;
  _shutdown_type shutdown;
  using _torque_enable_type =
    uint8_t;
  _torque_enable_type torque_enable;
  using _led_type =
    uint8_t;
  _led_type led;
  using _d_gain_type =
    uint8_t;
  _d_gain_type d_gain;
  using _i_gain_type =
    uint8_t;
  _i_gain_type i_gain;
  using _p_gain_type =
    uint8_t;
  _p_gain_type p_gain;
  using _goal_position_type =
    uint16_t;
  _goal_position_type goal_position;
  using _moving_speed_type =
    uint16_t;
  _moving_speed_type moving_speed;
  using _torque_limit_type =
    uint16_t;
  _torque_limit_type torque_limit;
  using _present_position_type =
    uint16_t;
  _present_position_type present_position;
  using _present_speed_type =
    uint16_t;
  _present_speed_type present_speed;
  using _present_load_type =
    uint16_t;
  _present_load_type present_load;
  using _present_voltage_type =
    uint8_t;
  _present_voltage_type present_voltage;
  using _present_temperature_type =
    uint8_t;
  _present_temperature_type present_temperature;
  using _registered_type =
    uint8_t;
  _registered_type registered;
  using _moving_type =
    uint8_t;
  _moving_type moving;
  using _hardware_error_status_type =
    uint8_t;
  _hardware_error_status_type hardware_error_status;
  using _punch_type =
    uint16_t;
  _punch_type punch;

  // setters for named parameter idiom
  Type & set__model_number(
    const uint16_t & _arg)
  {
    this->model_number = _arg;
    return *this;
  }
  Type & set__firmware_version(
    const uint8_t & _arg)
  {
    this->firmware_version = _arg;
    return *this;
  }
  Type & set__model_id(
    const uint8_t & _arg)
  {
    this->model_id = _arg;
    return *this;
  }
  Type & set__baud_rate(
    const uint8_t & _arg)
  {
    this->baud_rate = _arg;
    return *this;
  }
  Type & set__return_delay_time(
    const uint8_t & _arg)
  {
    this->return_delay_time = _arg;
    return *this;
  }
  Type & set__cw_angle_limit(
    const uint16_t & _arg)
  {
    this->cw_angle_limit = _arg;
    return *this;
  }
  Type & set__ccw_angle_limit(
    const uint16_t & _arg)
  {
    this->ccw_angle_limit = _arg;
    return *this;
  }
  Type & set__control_mode(
    const uint8_t & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__temperature_limit(
    const uint8_t & _arg)
  {
    this->temperature_limit = _arg;
    return *this;
  }
  Type & set__min_voltage_limit(
    const uint8_t & _arg)
  {
    this->min_voltage_limit = _arg;
    return *this;
  }
  Type & set__max_voltage_limit(
    const uint8_t & _arg)
  {
    this->max_voltage_limit = _arg;
    return *this;
  }
  Type & set__max_torque(
    const uint16_t & _arg)
  {
    this->max_torque = _arg;
    return *this;
  }
  Type & set__status_return_level(
    const uint8_t & _arg)
  {
    this->status_return_level = _arg;
    return *this;
  }
  Type & set__shutdown(
    const uint8_t & _arg)
  {
    this->shutdown = _arg;
    return *this;
  }
  Type & set__torque_enable(
    const uint8_t & _arg)
  {
    this->torque_enable = _arg;
    return *this;
  }
  Type & set__led(
    const uint8_t & _arg)
  {
    this->led = _arg;
    return *this;
  }
  Type & set__d_gain(
    const uint8_t & _arg)
  {
    this->d_gain = _arg;
    return *this;
  }
  Type & set__i_gain(
    const uint8_t & _arg)
  {
    this->i_gain = _arg;
    return *this;
  }
  Type & set__p_gain(
    const uint8_t & _arg)
  {
    this->p_gain = _arg;
    return *this;
  }
  Type & set__goal_position(
    const uint16_t & _arg)
  {
    this->goal_position = _arg;
    return *this;
  }
  Type & set__moving_speed(
    const uint16_t & _arg)
  {
    this->moving_speed = _arg;
    return *this;
  }
  Type & set__torque_limit(
    const uint16_t & _arg)
  {
    this->torque_limit = _arg;
    return *this;
  }
  Type & set__present_position(
    const uint16_t & _arg)
  {
    this->present_position = _arg;
    return *this;
  }
  Type & set__present_speed(
    const uint16_t & _arg)
  {
    this->present_speed = _arg;
    return *this;
  }
  Type & set__present_load(
    const uint16_t & _arg)
  {
    this->present_load = _arg;
    return *this;
  }
  Type & set__present_voltage(
    const uint8_t & _arg)
  {
    this->present_voltage = _arg;
    return *this;
  }
  Type & set__present_temperature(
    const uint8_t & _arg)
  {
    this->present_temperature = _arg;
    return *this;
  }
  Type & set__registered(
    const uint8_t & _arg)
  {
    this->registered = _arg;
    return *this;
  }
  Type & set__moving(
    const uint8_t & _arg)
  {
    this->moving = _arg;
    return *this;
  }
  Type & set__hardware_error_status(
    const uint8_t & _arg)
  {
    this->hardware_error_status = _arg;
    return *this;
  }
  Type & set__punch(
    const uint16_t & _arg)
  {
    this->punch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_workbench_msgs::msg::XL320_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_workbench_msgs::msg::XL320_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::XL320_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::XL320_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::XL320_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::XL320_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::XL320_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::XL320_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::XL320_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::XL320_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__XL320
    std::shared_ptr<dynamixel_workbench_msgs::msg::XL320_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__XL320
    std::shared_ptr<dynamixel_workbench_msgs::msg::XL320_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const XL320_ & other) const
  {
    if (this->model_number != other.model_number) {
      return false;
    }
    if (this->firmware_version != other.firmware_version) {
      return false;
    }
    if (this->model_id != other.model_id) {
      return false;
    }
    if (this->baud_rate != other.baud_rate) {
      return false;
    }
    if (this->return_delay_time != other.return_delay_time) {
      return false;
    }
    if (this->cw_angle_limit != other.cw_angle_limit) {
      return false;
    }
    if (this->ccw_angle_limit != other.ccw_angle_limit) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->temperature_limit != other.temperature_limit) {
      return false;
    }
    if (this->min_voltage_limit != other.min_voltage_limit) {
      return false;
    }
    if (this->max_voltage_limit != other.max_voltage_limit) {
      return false;
    }
    if (this->max_torque != other.max_torque) {
      return false;
    }
    if (this->status_return_level != other.status_return_level) {
      return false;
    }
    if (this->shutdown != other.shutdown) {
      return false;
    }
    if (this->torque_enable != other.torque_enable) {
      return false;
    }
    if (this->led != other.led) {
      return false;
    }
    if (this->d_gain != other.d_gain) {
      return false;
    }
    if (this->i_gain != other.i_gain) {
      return false;
    }
    if (this->p_gain != other.p_gain) {
      return false;
    }
    if (this->goal_position != other.goal_position) {
      return false;
    }
    if (this->moving_speed != other.moving_speed) {
      return false;
    }
    if (this->torque_limit != other.torque_limit) {
      return false;
    }
    if (this->present_position != other.present_position) {
      return false;
    }
    if (this->present_speed != other.present_speed) {
      return false;
    }
    if (this->present_load != other.present_load) {
      return false;
    }
    if (this->present_voltage != other.present_voltage) {
      return false;
    }
    if (this->present_temperature != other.present_temperature) {
      return false;
    }
    if (this->registered != other.registered) {
      return false;
    }
    if (this->moving != other.moving) {
      return false;
    }
    if (this->hardware_error_status != other.hardware_error_status) {
      return false;
    }
    if (this->punch != other.punch) {
      return false;
    }
    return true;
  }
  bool operator!=(const XL320_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct XL320_

// alias to use template instance with default allocator
using XL320 =
  dynamixel_workbench_msgs::msg::XL320_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XL320__STRUCT_HPP_
