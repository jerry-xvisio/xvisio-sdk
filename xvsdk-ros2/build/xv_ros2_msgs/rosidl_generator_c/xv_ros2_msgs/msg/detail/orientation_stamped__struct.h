// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xv_ros2_msgs:msg/OrientationStamped.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__ORIENTATION_STAMPED__STRUCT_H_
#define XV_ROS2_MSGS__MSG__DETAIL__ORIENTATION_STAMPED__STRUCT_H_

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
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/OrientationStamped in the package xv_ros2_msgs.
typedef struct xv_ros2_msgs__msg__OrientationStamped
{
  std_msgs__msg__Header header;
  double matrix[9];
  geometry_msgs__msg__Quaternion quaternion;
  geometry_msgs__msg__Vector3 angular_velocity;
} xv_ros2_msgs__msg__OrientationStamped;

// Struct for a sequence of xv_ros2_msgs__msg__OrientationStamped.
typedef struct xv_ros2_msgs__msg__OrientationStamped__Sequence
{
  xv_ros2_msgs__msg__OrientationStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xv_ros2_msgs__msg__OrientationStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XV_ROS2_MSGS__MSG__DETAIL__ORIENTATION_STAMPED__STRUCT_H_
