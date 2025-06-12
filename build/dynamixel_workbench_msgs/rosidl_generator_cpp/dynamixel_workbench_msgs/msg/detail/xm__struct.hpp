// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_workbench_msgs:msg/XM.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XM__STRUCT_HPP_
#define DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamixel_workbench_msgs__msg__XM __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_workbench_msgs__msg__XM __declspec(deprecated)
#endif

namespace dynamixel_workbench_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct XM_
{
  using Type = XM_<ContainerAllocator>;

  explicit XM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_number = 0;
      this->firmware_version = 0;
      this->model_id = 0;
      this->baud_rate = 0;
      this->return_delay_time = 0;
      this->drive_mode = 0;
      this->operating_mode = 0;
      this->secondary_id = 0;
      this->protocol_version = 0;
      this->homing_offset = 0l;
      this->moving_threshold = 0ul;
      this->temperature_limit = 0;
      this->max_voltage_limit = 0;
      this->min_voltage_limit = 0;
      this->pwm_limit = 0;
      this->current_limit = 0;
      this->acceleration_limit = 0ul;
      this->velocity_limit = 0ul;
      this->max_position_limit = 0ul;
      this->min_position_limit = 0ul;
      this->shutdown = 0;
      this->torque_enable = 0;
      this->led = 0;
      this->status_return_level = 0;
      this->registered_instruction = 0;
      this->hardware_error_status = 0;
      this->velocity_i_gain = 0;
      this->velocity_p_gain = 0;
      this->position_d_gain = 0;
      this->position_i_gain = 0;
      this->position_p_gain = 0;
      this->feedforward_2nd_gain = 0;
      this->feedforward_1st_gain = 0;
      this->bus_watchdog = 0;
      this->goal_pwm = 0;
      this->goal_current = 0;
      this->goal_velocity = 0l;
      this->profile_acceleration = 0ul;
      this->profile_velocity = 0ul;
      this->goal_position = 0ul;
      this->realtime_tick = 0;
      this->moving = 0;
      this->moving_status = 0;
      this->present_pwm = 0;
      this->present_load = 0;
      this->present_current = 0;
      this->present_velocity = 0l;
      this->present_position = 0l;
      this->velocity_trajectory = 0ul;
      this->position_trajectory = 0ul;
      this->present_input_voltage = 0;
      this->present_temperature = 0;
    }
  }

  explicit XM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->drive_mode = 0;
      this->operating_mode = 0;
      this->secondary_id = 0;
      this->protocol_version = 0;
      this->homing_offset = 0l;
      this->moving_threshold = 0ul;
      this->temperature_limit = 0;
      this->max_voltage_limit = 0;
      this->min_voltage_limit = 0;
      this->pwm_limit = 0;
      this->current_limit = 0;
      this->acceleration_limit = 0ul;
      this->velocity_limit = 0ul;
      this->max_position_limit = 0ul;
      this->min_position_limit = 0ul;
      this->shutdown = 0;
      this->torque_enable = 0;
      this->led = 0;
      this->status_return_level = 0;
      this->registered_instruction = 0;
      this->hardware_error_status = 0;
      this->velocity_i_gain = 0;
      this->velocity_p_gain = 0;
      this->position_d_gain = 0;
      this->position_i_gain = 0;
      this->position_p_gain = 0;
      this->feedforward_2nd_gain = 0;
      this->feedforward_1st_gain = 0;
      this->bus_watchdog = 0;
      this->goal_pwm = 0;
      this->goal_current = 0;
      this->goal_velocity = 0l;
      this->profile_acceleration = 0ul;
      this->profile_velocity = 0ul;
      this->goal_position = 0ul;
      this->realtime_tick = 0;
      this->moving = 0;
      this->moving_status = 0;
      this->present_pwm = 0;
      this->present_load = 0;
      this->present_current = 0;
      this->present_velocity = 0l;
      this->present_position = 0l;
      this->velocity_trajectory = 0ul;
      this->position_trajectory = 0ul;
      this->present_input_voltage = 0;
      this->present_temperature = 0;
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
  using _drive_mode_type =
    uint8_t;
  _drive_mode_type drive_mode;
  using _operating_mode_type =
    uint8_t;
  _operating_mode_type operating_mode;
  using _secondary_id_type =
    uint8_t;
  _secondary_id_type secondary_id;
  using _protocol_version_type =
    uint8_t;
  _protocol_version_type protocol_version;
  using _homing_offset_type =
    int32_t;
  _homing_offset_type homing_offset;
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
  using _pwm_limit_type =
    uint16_t;
  _pwm_limit_type pwm_limit;
  using _current_limit_type =
    uint16_t;
  _current_limit_type current_limit;
  using _acceleration_limit_type =
    uint32_t;
  _acceleration_limit_type acceleration_limit;
  using _velocity_limit_type =
    uint32_t;
  _velocity_limit_type velocity_limit;
  using _max_position_limit_type =
    uint32_t;
  _max_position_limit_type max_position_limit;
  using _min_position_limit_type =
    uint32_t;
  _min_position_limit_type min_position_limit;
  using _shutdown_type =
    uint8_t;
  _shutdown_type shutdown;
  using _torque_enable_type =
    uint8_t;
  _torque_enable_type torque_enable;
  using _led_type =
    uint8_t;
  _led_type led;
  using _status_return_level_type =
    uint8_t;
  _status_return_level_type status_return_level;
  using _registered_instruction_type =
    uint8_t;
  _registered_instruction_type registered_instruction;
  using _hardware_error_status_type =
    uint8_t;
  _hardware_error_status_type hardware_error_status;
  using _velocity_i_gain_type =
    uint16_t;
  _velocity_i_gain_type velocity_i_gain;
  using _velocity_p_gain_type =
    uint16_t;
  _velocity_p_gain_type velocity_p_gain;
  using _position_d_gain_type =
    uint16_t;
  _position_d_gain_type position_d_gain;
  using _position_i_gain_type =
    uint16_t;
  _position_i_gain_type position_i_gain;
  using _position_p_gain_type =
    uint16_t;
  _position_p_gain_type position_p_gain;
  using _feedforward_2nd_gain_type =
    uint16_t;
  _feedforward_2nd_gain_type feedforward_2nd_gain;
  using _feedforward_1st_gain_type =
    uint16_t;
  _feedforward_1st_gain_type feedforward_1st_gain;
  using _bus_watchdog_type =
    uint8_t;
  _bus_watchdog_type bus_watchdog;
  using _goal_pwm_type =
    int16_t;
  _goal_pwm_type goal_pwm;
  using _goal_current_type =
    int16_t;
  _goal_current_type goal_current;
  using _goal_velocity_type =
    int32_t;
  _goal_velocity_type goal_velocity;
  using _profile_acceleration_type =
    uint32_t;
  _profile_acceleration_type profile_acceleration;
  using _profile_velocity_type =
    uint32_t;
  _profile_velocity_type profile_velocity;
  using _goal_position_type =
    uint32_t;
  _goal_position_type goal_position;
  using _realtime_tick_type =
    uint16_t;
  _realtime_tick_type realtime_tick;
  using _moving_type =
    uint8_t;
  _moving_type moving;
  using _moving_status_type =
    uint8_t;
  _moving_status_type moving_status;
  using _present_pwm_type =
    int16_t;
  _present_pwm_type present_pwm;
  using _present_load_type =
    int16_t;
  _present_load_type present_load;
  using _present_current_type =
    int16_t;
  _present_current_type present_current;
  using _present_velocity_type =
    int32_t;
  _present_velocity_type present_velocity;
  using _present_position_type =
    int32_t;
  _present_position_type present_position;
  using _velocity_trajectory_type =
    uint32_t;
  _velocity_trajectory_type velocity_trajectory;
  using _position_trajectory_type =
    uint32_t;
  _position_trajectory_type position_trajectory;
  using _present_input_voltage_type =
    uint16_t;
  _present_input_voltage_type present_input_voltage;
  using _present_temperature_type =
    uint8_t;
  _present_temperature_type present_temperature;

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
  Type & set__drive_mode(
    const uint8_t & _arg)
  {
    this->drive_mode = _arg;
    return *this;
  }
  Type & set__operating_mode(
    const uint8_t & _arg)
  {
    this->operating_mode = _arg;
    return *this;
  }
  Type & set__secondary_id(
    const uint8_t & _arg)
  {
    this->secondary_id = _arg;
    return *this;
  }
  Type & set__protocol_version(
    const uint8_t & _arg)
  {
    this->protocol_version = _arg;
    return *this;
  }
  Type & set__homing_offset(
    const int32_t & _arg)
  {
    this->homing_offset = _arg;
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
  Type & set__pwm_limit(
    const uint16_t & _arg)
  {
    this->pwm_limit = _arg;
    return *this;
  }
  Type & set__current_limit(
    const uint16_t & _arg)
  {
    this->current_limit = _arg;
    return *this;
  }
  Type & set__acceleration_limit(
    const uint32_t & _arg)
  {
    this->acceleration_limit = _arg;
    return *this;
  }
  Type & set__velocity_limit(
    const uint32_t & _arg)
  {
    this->velocity_limit = _arg;
    return *this;
  }
  Type & set__max_position_limit(
    const uint32_t & _arg)
  {
    this->max_position_limit = _arg;
    return *this;
  }
  Type & set__min_position_limit(
    const uint32_t & _arg)
  {
    this->min_position_limit = _arg;
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
  Type & set__status_return_level(
    const uint8_t & _arg)
  {
    this->status_return_level = _arg;
    return *this;
  }
  Type & set__registered_instruction(
    const uint8_t & _arg)
  {
    this->registered_instruction = _arg;
    return *this;
  }
  Type & set__hardware_error_status(
    const uint8_t & _arg)
  {
    this->hardware_error_status = _arg;
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
  Type & set__position_d_gain(
    const uint16_t & _arg)
  {
    this->position_d_gain = _arg;
    return *this;
  }
  Type & set__position_i_gain(
    const uint16_t & _arg)
  {
    this->position_i_gain = _arg;
    return *this;
  }
  Type & set__position_p_gain(
    const uint16_t & _arg)
  {
    this->position_p_gain = _arg;
    return *this;
  }
  Type & set__feedforward_2nd_gain(
    const uint16_t & _arg)
  {
    this->feedforward_2nd_gain = _arg;
    return *this;
  }
  Type & set__feedforward_1st_gain(
    const uint16_t & _arg)
  {
    this->feedforward_1st_gain = _arg;
    return *this;
  }
  Type & set__bus_watchdog(
    const uint8_t & _arg)
  {
    this->bus_watchdog = _arg;
    return *this;
  }
  Type & set__goal_pwm(
    const int16_t & _arg)
  {
    this->goal_pwm = _arg;
    return *this;
  }
  Type & set__goal_current(
    const int16_t & _arg)
  {
    this->goal_current = _arg;
    return *this;
  }
  Type & set__goal_velocity(
    const int32_t & _arg)
  {
    this->goal_velocity = _arg;
    return *this;
  }
  Type & set__profile_acceleration(
    const uint32_t & _arg)
  {
    this->profile_acceleration = _arg;
    return *this;
  }
  Type & set__profile_velocity(
    const uint32_t & _arg)
  {
    this->profile_velocity = _arg;
    return *this;
  }
  Type & set__goal_position(
    const uint32_t & _arg)
  {
    this->goal_position = _arg;
    return *this;
  }
  Type & set__realtime_tick(
    const uint16_t & _arg)
  {
    this->realtime_tick = _arg;
    return *this;
  }
  Type & set__moving(
    const uint8_t & _arg)
  {
    this->moving = _arg;
    return *this;
  }
  Type & set__moving_status(
    const uint8_t & _arg)
  {
    this->moving_status = _arg;
    return *this;
  }
  Type & set__present_pwm(
    const int16_t & _arg)
  {
    this->present_pwm = _arg;
    return *this;
  }
  Type & set__present_load(
    const int16_t & _arg)
  {
    this->present_load = _arg;
    return *this;
  }
  Type & set__present_current(
    const int16_t & _arg)
  {
    this->present_current = _arg;
    return *this;
  }
  Type & set__present_velocity(
    const int32_t & _arg)
  {
    this->present_velocity = _arg;
    return *this;
  }
  Type & set__present_position(
    const int32_t & _arg)
  {
    this->present_position = _arg;
    return *this;
  }
  Type & set__velocity_trajectory(
    const uint32_t & _arg)
  {
    this->velocity_trajectory = _arg;
    return *this;
  }
  Type & set__position_trajectory(
    const uint32_t & _arg)
  {
    this->position_trajectory = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_workbench_msgs::msg::XM_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_workbench_msgs::msg::XM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::XM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_workbench_msgs::msg::XM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::XM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::XM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_workbench_msgs::msg::XM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_workbench_msgs::msg::XM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::XM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_workbench_msgs::msg::XM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__XM
    std::shared_ptr<dynamixel_workbench_msgs::msg::XM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_workbench_msgs__msg__XM
    std::shared_ptr<dynamixel_workbench_msgs::msg::XM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const XM_ & other) const
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
    if (this->drive_mode != other.drive_mode) {
      return false;
    }
    if (this->operating_mode != other.operating_mode) {
      return false;
    }
    if (this->secondary_id != other.secondary_id) {
      return false;
    }
    if (this->protocol_version != other.protocol_version) {
      return false;
    }
    if (this->homing_offset != other.homing_offset) {
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
    if (this->pwm_limit != other.pwm_limit) {
      return false;
    }
    if (this->current_limit != other.current_limit) {
      return false;
    }
    if (this->acceleration_limit != other.acceleration_limit) {
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
    if (this->shutdown != other.shutdown) {
      return false;
    }
    if (this->torque_enable != other.torque_enable) {
      return false;
    }
    if (this->led != other.led) {
      return false;
    }
    if (this->status_return_level != other.status_return_level) {
      return false;
    }
    if (this->registered_instruction != other.registered_instruction) {
      return false;
    }
    if (this->hardware_error_status != other.hardware_error_status) {
      return false;
    }
    if (this->velocity_i_gain != other.velocity_i_gain) {
      return false;
    }
    if (this->velocity_p_gain != other.velocity_p_gain) {
      return false;
    }
    if (this->position_d_gain != other.position_d_gain) {
      return false;
    }
    if (this->position_i_gain != other.position_i_gain) {
      return false;
    }
    if (this->position_p_gain != other.position_p_gain) {
      return false;
    }
    if (this->feedforward_2nd_gain != other.feedforward_2nd_gain) {
      return false;
    }
    if (this->feedforward_1st_gain != other.feedforward_1st_gain) {
      return false;
    }
    if (this->bus_watchdog != other.bus_watchdog) {
      return false;
    }
    if (this->goal_pwm != other.goal_pwm) {
      return false;
    }
    if (this->goal_current != other.goal_current) {
      return false;
    }
    if (this->goal_velocity != other.goal_velocity) {
      return false;
    }
    if (this->profile_acceleration != other.profile_acceleration) {
      return false;
    }
    if (this->profile_velocity != other.profile_velocity) {
      return false;
    }
    if (this->goal_position != other.goal_position) {
      return false;
    }
    if (this->realtime_tick != other.realtime_tick) {
      return false;
    }
    if (this->moving != other.moving) {
      return false;
    }
    if (this->moving_status != other.moving_status) {
      return false;
    }
    if (this->present_pwm != other.present_pwm) {
      return false;
    }
    if (this->present_load != other.present_load) {
      return false;
    }
    if (this->present_current != other.present_current) {
      return false;
    }
    if (this->present_velocity != other.present_velocity) {
      return false;
    }
    if (this->present_position != other.present_position) {
      return false;
    }
    if (this->velocity_trajectory != other.velocity_trajectory) {
      return false;
    }
    if (this->position_trajectory != other.position_trajectory) {
      return false;
    }
    if (this->present_input_voltage != other.present_input_voltage) {
      return false;
    }
    if (this->present_temperature != other.present_temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const XM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct XM_

// alias to use template instance with default allocator
using XM =
  dynamixel_workbench_msgs::msg::XM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamixel_workbench_msgs

#endif  // DYNAMIXEL_WORKBENCH_MSGS__MSG__DETAIL__XM__STRUCT_HPP_
