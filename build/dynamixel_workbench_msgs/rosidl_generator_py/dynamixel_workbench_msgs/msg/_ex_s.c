// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dynamixel_workbench_msgs:msg/EX.idl
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
#include "dynamixel_workbench_msgs/msg/detail/ex__struct.h"
#include "dynamixel_workbench_msgs/msg/detail/ex__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool dynamixel_workbench_msgs__msg__ex__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("dynamixel_workbench_msgs.msg._ex.EX", full_classname_dest, 35) == 0);
  }
  dynamixel_workbench_msgs__msg__EX * ros_message = _ros_message;
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
  {  // cw_angle_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "cw_angle_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cw_angle_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ccw_angle_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "ccw_angle_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ccw_angle_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drive_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "drive_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drive_mode = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // min_voltage_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_voltage_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->min_voltage_limit = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_voltage_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_voltage_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_voltage_limit = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_torque");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_torque = (uint16_t)PyLong_AsUnsignedLong(field);
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
  {  // alarm_led
    PyObject * field = PyObject_GetAttrString(_pymsg, "alarm_led");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alarm_led = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // led
    PyObject * field = PyObject_GetAttrString(_pymsg, "led");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->led = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cw_compliance_margin
    PyObject * field = PyObject_GetAttrString(_pymsg, "cw_compliance_margin");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cw_compliance_margin = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ccw_compliance_margin
    PyObject * field = PyObject_GetAttrString(_pymsg, "ccw_compliance_margin");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ccw_compliance_margin = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cw_compliance_slope
    PyObject * field = PyObject_GetAttrString(_pymsg, "cw_compliance_slope");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cw_compliance_slope = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ccw_compliance_slope
    PyObject * field = PyObject_GetAttrString(_pymsg, "ccw_compliance_slope");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ccw_compliance_slope = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // goal_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->goal_position = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // moving_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "moving_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->moving_speed = (uint16_t)PyLong_AsUnsignedLong(field);
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
  {  // present_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "present_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->present_position = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // present_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "present_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->present_speed = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // present_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "present_load");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->present_load = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // present_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "present_voltage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->present_voltage = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // registered
    PyObject * field = PyObject_GetAttrString(_pymsg, "registered");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->registered = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // lock
    PyObject * field = PyObject_GetAttrString(_pymsg, "lock");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lock = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // punch
    PyObject * field = PyObject_GetAttrString(_pymsg, "punch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->punch = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sensored_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensored_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensored_current = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dynamixel_workbench_msgs__msg__ex__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EX */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dynamixel_workbench_msgs.msg._ex");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EX");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dynamixel_workbench_msgs__msg__EX * ros_message = (dynamixel_workbench_msgs__msg__EX *)raw_ros_message;
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
  {  // cw_angle_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cw_angle_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cw_angle_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ccw_angle_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ccw_angle_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ccw_angle_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drive_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drive_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drive_mode", field);
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
  {  // max_torque
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_torque", field);
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
  {  // alarm_led
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alarm_led);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alarm_led", field);
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
  {  // led
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->led);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cw_compliance_margin
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cw_compliance_margin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cw_compliance_margin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ccw_compliance_margin
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ccw_compliance_margin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ccw_compliance_margin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cw_compliance_slope
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cw_compliance_slope);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cw_compliance_slope", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ccw_compliance_slope
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ccw_compliance_slope);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ccw_compliance_slope", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->goal_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moving_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->moving_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moving_speed", field);
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
  {  // present_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->present_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "present_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // present_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->present_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "present_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // present_load
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->present_load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "present_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // present_voltage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->present_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "present_voltage", field);
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
  {  // registered
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->registered);
    {
      int rc = PyObject_SetAttrString(_pymessage, "registered", field);
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
  {  // lock
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lock);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lock", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // punch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->punch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "punch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensored_current
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensored_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensored_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
