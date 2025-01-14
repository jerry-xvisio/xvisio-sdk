// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xv_ros2_msgs:msg/ColorDepth.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__STRUCT_H_
#define XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__STRUCT_H_

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
// Member 'rgb'
// Member 'depth'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ColorDepth in the package xv_ros2_msgs.
typedef struct xv_ros2_msgs__msg__ColorDepth
{
  std_msgs__msg__Header header;
  uint32_t height;
  uint32_t width;
  rosidl_runtime_c__uint8__Sequence rgb;
  rosidl_runtime_c__float__Sequence depth;
} xv_ros2_msgs__msg__ColorDepth;

// Struct for a sequence of xv_ros2_msgs__msg__ColorDepth.
typedef struct xv_ros2_msgs__msg__ColorDepth__Sequence
{
  xv_ros2_msgs__msg__ColorDepth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xv_ros2_msgs__msg__ColorDepth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__STRUCT_H_
