// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xv_ros2_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_H_
#define XV_ROS2_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Controller in the package xv_ros2_msgs.
typedef struct xv_ros2_msgs__msg__Controller
{
  std_msgs__msg__Header header;
  uint8_t keytrigger;
  uint8_t keyside;
  uint16_t rockerx;
  uint16_t rockery;
  uint8_t key;
} xv_ros2_msgs__msg__Controller;

// Struct for a sequence of xv_ros2_msgs__msg__Controller.
typedef struct xv_ros2_msgs__msg__Controller__Sequence
{
  xv_ros2_msgs__msg__Controller * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xv_ros2_msgs__msg__Controller__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XV_ROS2_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_H_
