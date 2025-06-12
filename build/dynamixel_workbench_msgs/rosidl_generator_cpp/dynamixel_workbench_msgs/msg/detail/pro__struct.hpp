// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_workbench_msgs:msg/PRO.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__PRO__STRUCT_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__PRO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamixel_workbench_msgs__msg__PRO __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_workbench_msgs__msg__PRO __declspec(deprecated)
#endif

namespace dynamixel_workbench_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PRO_
{
  using Type = PRO_<ContainerAllocator>;

  explicit PRO_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_number = 0;
      this->firmware_version = 0;
      this->model_id = 0;
      this->baud_rate = 0;
      this->return_delay_time = 0;
      this->operating_mode = 0;
      this->moving_threshold = 0ul;
      this->temperature_limit = 0;
      this->max_voltage_limit = 0;
      this->min_voltage_limit = 0;
      this->acceleration_limit = 0ul;
      this->torque_limit = 0;
      this->velocity_limit = 0ul;
      this->max_position_limit = 0l;
      this->min_position_limit = 0l;
      this->external_port_mode_1 = 0;
      this->external_port_mode_2 = 0;
      this->external_port_mode_3 = 0;
      this->external_port_mode_4 = 0;
      this->shutdown = 0;
      this->torque_enable = 0;
      this->led_red = 0;
      this->led_green = 0;
      this->led_blue = 0;
      this->velocity_i_gain = 0;
      this->velocity_p_gain = 0;
      this->position_p_gain = 0;
      this->goal_position = 0l;
      this->goal_velocity = 0ul;
      this->goal_torque = 0;
      this->goal_acceleration = 0l;
      this->moving = 0;
      this->present_position = 0l;
      this->present_velocity = 0ul;
      this->present_current = 0;
      this->present_input_voltage = 0;
      this->present_temperature = 0;
      this->registered_instruction = 0;
      this->status_return_level = 0;
      this->hardware_error_status = 0;
    }
  }

  explicit PRO_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->operating_mode = 0;
      this->moving_threshold = 0ul;
      this->temperature_limit = 0;
      this->max_voltage_limit = 0;
      this->min_voltage_limit = 0;
      this->acceleration_limit = 0ul;
      this->torque_limit = 0;
      this->velocity_limit = 0ul;
      this->max_position_limit = 0l;
      this->min_position_limit = 0l;
      this->external_port_mode_1 = 0;
      this->external_port_mode_2 = 0;
      this->external_port_mode_3 = 0;
      this->external_port_mode_4 = 0;
      this->shutdown = 0;
      this->torque_enable = 0;
      this->led_red = 0;
      this->led_green = 0;
      this->led_blue = 0;
      this->velocity_i_gain = 0;
      this->velocity_p_gain = 0;
      this->position_p_gain = 0;
      this->goal_position = 0l;
      this->goal_velocity = 0ul;
      this->goal_torque = 0;
      this->goal_acceleration = 0l;
      this->moving = 0;
      this->present_position = 0l;
      this->present_velocity = 0ul;
      this->present_current = 0;
      this->present_input_voltage = 0;
      this->present_temperature = 0;
      this->registered_instruction = 0;
      this->status_return_level = 0;
      this->hardware_error_status = 0;
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
  using _operating_mode_type =
    uint8_t;
  _operating_mode_type operating_mode;
  using _moving_threshold_type =
    uint32_t;
  _moving_threshold_type moving_threshold;
  using _temperature_limit_type =
    uint8_t;
  _temperature_limit_type temperature_limit;
  using _max_voltage_limit_type =
    uint16_t;
  _max_voltage_limit_type max_voltage_limit;
  using _min_voltage_limit_type =
    uint16_t;
  _min_voltage_limit_type min_voltage_limit;
  using _acceleration_limit_type =
    uint32_t;
  _acceleration_limit_type acceleration_limit;
  using _torque_limit_type =
    uint16_t;
  _torque_limit_type torque_limit;
  using _velocity_limit_type =
    uint32_t;
  _velocity_limit_type velocity_limit;
  using _max_position_limit_type =
    int32_t;
  _max_position_limit_type max_position_limit;
  using _min_position_limit_type =
    int32_t;
  _min_position_limit_type min_position_limit;
  using _external_port_mode_1_type =
    uint8_t;
  _external_port_mode_1_type external_port_mode_1;
  using _external_port_mode_2_type =
    uint8_t;
  _external_port_mode_2_type external_port_mode_2;
  using _external_port_mode_3_type =
    uint8_t;
  _external_port_mode_3_type external_port_mode_3;
  using _external_port_mode_4_type =
    uint8_t;
  _external_port_mode_4_type external_port_mode_4;
  using _shutdown_type =
    uint8_t;
  _shutdown_type shutdown;
  using _torque_enable_type =
    uint8_t;
  _torque_enable_type torque_enable;
  using _led_red_type =
    uint8_t;
  _led_red_type led_red;
  using _led_green_type =
    uint8_t;
  _led_green_type led_green;
  using _led_blue_type =
    uint8_t;
  _led_blue_type led_blue;
  using _velocity_i_gain_type =
    uint16_t;
  _velocity_i_gain_type velocity_i_gain;
  using _velocity_p_gain_type =
    uint16_t;
  _velocity_p_gain_type velocity_p_gain;
  using _position_p_gain_type =
    uint16_t;
  _position_p_gain_type position_p_gain;
  using _goal_position_type =
    int32_t;
  _goal_position_type goal_position;
  using _goal_velocity_type =
    uint32_t;
  _goal_velocity_type goal_velocity;
  using _goal_torque_type =
    uint16_t;
  _goal_torque_type goal_torque;
  using _goal_acceleration_type =
    int32_t;
  _goal_acceleration_type goal_acceleration;
  using _moving_type =
    uint8_t;
  _moving_type moving;
  using _present_position_type =
    int32_t;
  _present_position_type present_position;
  using _present_velocity_type =
    uint32_t;
  _present_velocity_type present_velocity;
  using _present_current_type =
    uint16_t;
  _present_current_type present_current;
  using _present_input_voltage_type =
    uint16_t;
  _present_input_voltage_type present_input_voltage;
  using _present_temperature_type =
    uint8_t;
  _present_temperature_type present_temperature;
  using _registered_instruction_type =
    uint8_t;
  _registered_instruction_type registered_instruction;
  using _status_return_level_type =
    uint8_t;
  _status_return_level_type status_return_level;
  using _hardware_error_status_type =
    uint8_t;
  _hardware_error_status_type hardware_error_status;

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
  Type & set__operating_mode(
    const uint8_t & _arg)
  {
    this->operating_mode = _arg;
    return *this;
  }
  Type & set__moving_threshold(
    const uint32_t & _arg)
  {
    this->moving_threshold = _arg;
    return *this;
  }
  Type & set__temperature_limit(
    const uint8_t & _arg)
  {
    this->temperature_limit = _arg;
    return *this;
  }
  Type & set__max_voltage_limit(
    const uint16_t & _arg)
  {
    this->max_voltage_limit = _arg;
    return *this;
  }
  Type & set__min_voltage_limit(
    const uint16_t & _arg)
  {
    this->min_voltage_limit = _arg;
    return *this;
  }
  Type & set__acceleration_limit(
    const uint32_t & _arg)
  {
    this->acceleration_limit = _arg;
    return *this;
  }
  Type & set__torque_limit(
    const uint16_t & _arg)
  {
    this->torque_limit = _arg;
    return *this;
  }
  Type & set__velocity_limit(
    const uint32_t & _arg)
  {
    this->velocity_limit = _arg;
    return *this;
  }
  Type & set__max_position_limit(
    const int32_t & _arg)
  {
    this->max_position_limit = _arg;
    return *this;
  }
  Type & set__min_position_limit(
    const int32_t & _arg)
  {
    this->min_position_limit = _arg;
    return *this;
  }
  Type & set__external_port_mode_1(
    const uint8_t & _arg)
  {
    this->external_port_mode_1 = _arg;
    return *this;
  }
  Type & set__external_port_mode_2(
    const uint8_t & _arg)
  {
    this->external_port_mode_2 = _arg;
    return *this;
  }
  Type & set__external_port_mode_3(
    const uint8_t & _arg)
  {
    this->external_port_mode_3 = _arg;
    return *this;
  }
  Type & set__external_port_mode_4(
    const uint8_t & _arg)
  {
    this->external_port_mode_4 = _arg;
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
  Type & set__led_red(
    const uint8_t & _arg)
  {
    this->led_red = _arg;
    return *this;
  }
  Type & set__led_green(
    const uint8_t & _arg)
  {
    this->led_green = _arg;
    return *this;
  }
  Type & set__led_blue(
    const uint8_t & _arg)
  {
    this->led_blue = _arg;
    return *this;
  }
  Type & set__velocity_i_gain(
    const uint16_t & _arg)
  {
    this->velocity_i_gain = _arg;
    return *this;
  }
  Type & set__velocity_p_gain(
    const uint16_t & _arg)
  {
    this->velocity_p_gain = _arg;
    return *this;
  }
  Type & set__position_p_gain(
    const uint16_t & _arg)
  {
    this->position_p_gain = _arg;
    return *this;
  }
  Type & set__goal_position(
    const int32_t & _arg)
  {
    this->goal_position = _arg;
    return *this;
  }
  Type & set__goal_velocity(
    const uint32_t & _arg)
  {
    this->goal_velocity = _arg;
    return *this;
  }
  Type & set__goal_torque(
    const uint16_t & _arg)
  {
    this->goal_torque = _arg;
    return *this;
  }
  Type & set__goal_acceleration(
    const int32_t & _arg)
  {
    this->goal_acceleration = _arg;
    return *this;
  }
  Type & set__moving(
    const uint8_t & _arg)
  {
    this->moving = _arg;
    return *this;
  }
  Type & set__present_position(
    const int32_t & _arg)
  {
    this->present_position = _arg;
    return *this;
  }
  Type & set__present_velocity(
    const uint32_t & _arg)
  {
    this->present_velocity = _arg;
    return *this;
  }
  Type & set__present_current(
    const uint16_t & _arg)
  {
    this->present_current = _arg;
    return *this;
  }
  Type & set__present_input_voltage(
    const uint16_t & _arg)
  {
    this->present_input_voltage = _arg;
    return *this;
  }
  Type & set__present_temperature(
    const uint8_t & _arg)
  {
    this->present_temperature = _arg;
    return *this;
  }
  Type & set__registered_instruction(
    const uint8_t & _arg)
  {
    this->registered_instruction = _arg;
    return *this;
  }
  Type & set__status_return_level(
    const uint8_t & _arg)
  {
    this->status_return_level = _arg;
    return *this;
  }
  Type & set__hardware_error_status(
    const uint8_t & _arg)
  {
    this->hardware_error_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_workbench_msgs::msg::PRO_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_workbench_msgs::msg::PRO_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::PRO_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::PRO_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::PRO_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::PRO_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::PRO_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::PRO_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::PRO_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::PRO_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__PRO
    std::shared_ptr<dynamixel_workbench_msgs::msg::PRO_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__PRO
    std::shared_ptr<dynamixel_workbench_msgs::msg::PRO_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PRO_ & other) const
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
    if (this->operating_mode != other.operating_mode) {
      return false;
    }
    if (this->moving_threshold != other.moving_threshold) {
      return false;
    }
    if (this->temperature_limit != other.temperature_limit) {
      return false;
    }
    if (this->max_voltage_limit != other.max_voltage_limit) {
      return false;
    }
    if (this->min_voltage_limit != other.min_voltage_limit) {
      return false;
    }
    if (this->acceleration_limit != other.acceleration_limit) {
      return false;
    }
    if (this->torque_limit != other.torque_limit) {
      return false;
    }
    if (this->velocity_limit != other.velocity_limit) {
      return false;
    }
    if (this->max_position_limit != other.max_position_limit) {
      return false;
    }
    if (this->min_position_limit != other.min_position_limit) {
      return false;
    }
    if (this->external_port_mode_1 != other.external_port_mode_1) {
      return false;
    }
    if (this->external_port_mode_2 != other.external_port_mode_2) {
      return false;
    }
    if (this->external_port_mode_3 != other.external_port_mode_3) {
      return false;
    }
    if (this->external_port_mode_4 != other.external_port_mode_4) {
      return false;
    }
    if (this->shutdown != other.shutdown) {
      return false;
    }
    if (this->torque_enable != other.torque_enable) {
      return false;
    }
    if (this->led_red != other.led_red) {
      return false;
    }
    if (this->led_green != other.led_green) {
      return false;
    }
    if (this->led_blue != other.led_blue) {
      return false;
    }
    if (this->velocity_i_gain != other.velocity_i_gain) {
      return false;
    }
    if (this->velocity_p_gain != other.velocity_p_gain) {
      return false;
    }
    if (this->position_p_gain != other.position_p_gain) {
      return false;
    }
    if (this->goal_position != other.goal_position) {
      return false;
    }
    if (this->goal_velocity != other.goal_velocity) {
      return false;
    }
    if (this->goal_torque != other.goal_torque) {
      return false;
    }
    if (this->goal_acceleration != other.goal_acceleration) {
      return false;
    }
    if (this->moving != other.moving) {
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
    if (this->present_input_voltage != other.present_input_voltage) {
      return false;
    }
    if (this->present_temperature != other.present_temperature) {
      return false;
    }
    if (this->registered_instruction != other.registered_instruction) {
      return false;
    }
    if (this->status_return_level != other.status_return_level) {
      return false;
    }
    if (this->hardware_error_status != other.hardware_error_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const PRO_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PRO_

// alias to use template instance with default allocator
using PRO =
  dynamixel_workbench_msgs::msg::PRO_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__PRO__STRUCT_HPP_
