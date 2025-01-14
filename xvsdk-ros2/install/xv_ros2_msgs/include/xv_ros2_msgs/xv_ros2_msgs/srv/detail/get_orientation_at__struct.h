// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xv_ros2_msgs:srv/GetOrientationAt.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION_AT__STRUCT_H_
#define XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION_AT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in srv/GetOrientationAt in the package xv_ros2_msgs.
typedef struct xv_ros2_msgs__srv__GetOrientationAt_Request
{
  builtin_interfaces__msg__Time timestamp;
} xv_ros2_msgs__srv__GetOrientationAt_Request;

// Struct for a sequence of xv_ros2_msgs__srv__GetOrientationAt_Request.
typedef struct xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence
{
  xv_ros2_msgs__srv__GetOrientationAt_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xv_ros2_msgs__srv__GetOrientationAt_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'orientation'
#include "xv_ros2_msgs/msg/detail/orientation_stamped__struct.h"

/// Struct defined in srv/GetOrientationAt in the package xv_ros2_msgs.
typedef struct xv_ros2_msgs__srv__GetOrientationAt_Response
{
  xv_ros2_msgs__msg__OrientationStamped orientation;
} xv_ros2_msgs__srv__GetOrientationAt_Response;

// Struct for a sequence of xv_ros2_msgs__srv__GetOrientationAt_Response.
typedef struct xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence
{
  xv_ros2_msgs__srv__GetOrientationAt_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xv_ros2_msgs__srv__GetOrientationAt_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION_AT__STRUCT_H_
