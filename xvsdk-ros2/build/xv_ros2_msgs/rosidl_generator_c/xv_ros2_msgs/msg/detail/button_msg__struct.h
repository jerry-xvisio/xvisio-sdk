// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xv_ros2_msgs:msg/ButtonMsg.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__BUTTON_MSG__STRUCT_H_
#define XV_ROS2_MSGS__MSG__DETAIL__BUTTON_MSG__STRUCT_H_

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

/// Struct defined in msg/ButtonMsg in the package xv_ros2_msgs.
typedef struct xv_ros2_msgs__msg__ButtonMsg
{
  std_msgs__msg__Header header;
  bool state;
} xv_ros2_msgs__msg__ButtonMsg;

// Struct for a sequence of xv_ros2_msgs__msg__ButtonMsg.
typedef struct xv_ros2_msgs__msg__ButtonMsg__Sequence
{
  xv_ros2_msgs__msg__ButtonMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xv_ros2_msgs__msg__ButtonMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XV_ROS2_MSGS__MSG__DETAIL__BUTTON_MSG__STRUCT_H_
