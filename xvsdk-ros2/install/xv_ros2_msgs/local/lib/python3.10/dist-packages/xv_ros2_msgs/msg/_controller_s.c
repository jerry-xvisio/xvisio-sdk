// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from xv_ros2_msgs:msg/Controller.idl
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
#include "xv_ros2_msgs/msg/detail/controller__struct.h"
#include "xv_ros2_msgs/msg/detail/controller__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool xv_ros2_msgs__msg__controller__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("xv_ros2_msgs.msg._controller.Controller", full_classname_dest, 39) == 0);
  }
  xv_ros2_msgs__msg__Controller * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // keytrigger
    PyObject * field = PyObject_GetAttrString(_pymsg, "keytrigger");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->keytrigger = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // keyside
    PyObject * field = PyObject_GetAttrString(_pymsg, "keyside");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->keyside = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rockerx
    PyObject * field = PyObject_GetAttrString(_pymsg, "rockerx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rockerx = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rockery
    PyObject * field = PyObject_GetAttrString(_pymsg, "rockery");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rockery = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // key
    PyObject * field = PyObject_GetAttrString(_pymsg, "key");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->key = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * xv_ros2_msgs__msg__controller__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Controller */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("xv_ros2_msgs.msg._controller");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Controller");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  xv_ros2_msgs__msg__Controller * ros_message = (xv_ros2_msgs__msg__Controller *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // keytrigger
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->keytrigger);
    {
      int rc = PyObject_SetAttrString(_pymessage, "keytrigger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // keyside
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->keyside);
    {
      int rc = PyObject_SetAttrString(_pymessage, "keyside", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rockerx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rockerx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rockerx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rockery
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rockery);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rockery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->key);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
