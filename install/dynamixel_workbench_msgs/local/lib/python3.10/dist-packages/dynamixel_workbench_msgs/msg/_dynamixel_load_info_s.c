// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dynamixel_workbench_msgs:msg/DynamixelLoadInfo.idl
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
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__struct.h"
#include "dynamixel_workbench_msgs/msg/detail/dynamixel_load_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool dynamixel_workbench_msgs__msg__dynamixel_load_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("dynamixel_workbench_msgs.msg._dynamixel_load_info.DynamixelLoadInfo", full_classname_dest, 67) == 0);
  }
  dynamixel_workbench_msgs__msg__DynamixelLoadInfo * ros_message = _ros_message;
  {  // device_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->device_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // baud_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "baud_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->baud_rate = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // protocol_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "protocol_version");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->protocol_version = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dynamixel_workbench_msgs__msg__dynamixel_load_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DynamixelLoadInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dynamixel_workbench_msgs.msg._dynamixel_load_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DynamixelLoadInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dynamixel_workbench_msgs__msg__DynamixelLoadInfo * ros_message = (dynamixel_workbench_msgs__msg__DynamixelLoadInfo *)raw_ros_message;
  {  // device_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->device_name.data,
      strlen(ros_message->device_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // baud_rate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->baud_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baud_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // protocol_version
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->protocol_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "protocol_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
