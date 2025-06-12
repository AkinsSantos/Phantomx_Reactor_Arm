// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dynamixel_workbench_msgs:msg/PRO.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "dynamixel_workbench_msgs/msg/detail/pro__struct.h"
#include "dynamixel_workbench_msgs/msg/detail/pro__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool dynamixel_workbench_msgs__msg__pro__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("dynamixel_workbench_msgs.msg._pro.PRO", full_classname_dest, 37) == 0);
  }
  dynamixel_workbench_msgs__msg__PRO * ros_message = _ros_message;
  {  // model_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "model_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->model_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // firmware_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "firmware_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->firmware_version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // model_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "model_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->model_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // baud_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "baud_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->baud_rate = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // return_delay_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "return_delay_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->return_delay_time = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // operating_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "operating_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operating_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // moving_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "moving_threshold");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->moving_threshold = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temperature_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temperature_limit = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_voltage_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_voltage_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_voltage_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // min_voltage_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_voltage_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->min_voltage_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acceleration_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acceleration_limit = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // torque_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "torque_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->torque_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // velocity_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->velocity_limit = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_position_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_position_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_position_limit = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // min_position_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_position_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->min_position_limit = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // external_port_mode_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "external_port_mode_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->external_port_mode_1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // external_port_mode_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "external_port_mode_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->external_port_mode_2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // external_port_mode_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "external_port_mode_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->external_port_mode_3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // external_port_mode_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "external_port_mode_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->external_port_mode_4 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shutdown
    PyObject * field = PyObject_GetAttrString(_pymsg, "shutdown");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shutdown = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // torque_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "torque_enable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->torque_enable = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // led_red
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_red");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->led_red = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // led_green
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_green");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->led_green = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // led_blue
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_blue");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->led_blue = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // velocity_i_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_i_gain");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->velocity_i_gain = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // velocity_p_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_p_gain");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->velocity_p_gain = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // position_p_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_p_gain");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->position_p_gain = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // goal_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->goal_position = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // goal_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_velocity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->goal_velocity = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // goal_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_torque");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->goal_torque = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // goal_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_acceleration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->goal_acceleration = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // moving
    PyObject * field = PyObject_GetAttrString(_pymsg, "moving");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->moving = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // present_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "present_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->present_position = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // present_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "present_velocity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->present_velocity = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // present_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "present_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->present_current = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // present_input_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "present_input_voltage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->present_input_voltage = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // present_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "present_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->present_temperature = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // registered_instruction
    PyObject * field = PyObject_GetAttrString(_pymsg, "registered_instruction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->registered_instruction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_return_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_return_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_return_level = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hardware_error_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "hardware_error_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hardware_error_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dynamixel_workbench_msgs__msg__pro__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PRO */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dynamixel_workbench_msgs.msg._pro");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PRO");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dynamixel_workbench_msgs__msg__PRO * ros_message = (dynamixel_workbench_msgs__msg__PRO *)raw_ros_message;
  {  // model_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->model_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "model_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // firmware_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->firmware_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "firmware_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // model_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->model_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "model_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // baud_rate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->baud_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baud_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // return_delay_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->return_delay_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "return_delay_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operating_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->operating_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operating_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moving_threshold
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->moving_threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moving_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->temperature_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_voltage_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_voltage_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_voltage_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_voltage_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->min_voltage_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_voltage_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acceleration_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // torque_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->torque_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "torque_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->velocity_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_position_limit
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->max_position_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_position_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_position_limit
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->min_position_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_position_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // external_port_mode_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->external_port_mode_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "external_port_mode_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // external_port_mode_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->external_port_mode_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "external_port_mode_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // external_port_mode_3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->external_port_mode_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "external_port_mode_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // external_port_mode_4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->external_port_mode_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "external_port_mode_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shutdown
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shutdown);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shutdown", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // torque_enable
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->torque_enable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "torque_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // led_red
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->led_red);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_red", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // led_green
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->led_green);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_green", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // led_blue
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->led_blue);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_blue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_i_gain
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->velocity_i_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_i_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_p_gain
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->velocity_p_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_p_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_p_gain
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->position_p_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_p_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->goal_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_velocity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->goal_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_torque
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->goal_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_acceleration
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->goal_acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moving
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->moving);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moving", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // present_position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->present_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "present_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // present_velocity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->present_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "present_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // present_current
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->present_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "present_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // present_input_voltage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->present_input_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "present_input_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // present_temperature
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->present_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "present_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // registered_instruction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->registered_instruction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "registered_instruction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_return_level
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_return_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_return_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hardware_error_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hardware_error_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hardware_error_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
