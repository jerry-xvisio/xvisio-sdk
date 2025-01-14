// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xv_ros2_msgs:srv/GetPose.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__GET_POSE__STRUCT_H_
#define XV_ROS2_MSGS__SRV__DETAIL__GET_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'prediction'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in srv/GetPose in the package xv_ros2_msgs.
typedef struct xv_ros2_msgs__srv__GetPose_Request
{
  builtin_interfaces__msg__Duration prediction;
} xv_ros2_msgs__srv__GetPose_Request;

// Struct for a sequence of xv_ros2_msgs__srv__GetPose_Request.
typedef struct xv_ros2_msgs__srv__GetPose_Request__Sequence
{
  xv_ros2_msgs__srv__GetPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xv_ros2_msgs__srv__GetPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/GetPose in the package xv_ros2_msgs.
typedef struct xv_ros2_msgs__srv__GetPose_Response
{
  geometry_msgs__msg__PoseStamped pose;
} xv_ros2_msgs__srv__GetPose_Response;

// Struct for a sequence of xv_ros2_msgs__srv__GetPose_Response.
typedef struct xv_ros2_msgs__srv__GetPose_Response__Sequence
{
  xv_ros2_msgs__srv__GetPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xv_ros2_msgs__srv__GetPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XV_ROS2_MSGS__SRV__DETAIL__GET_POSE__STRUCT_H_
