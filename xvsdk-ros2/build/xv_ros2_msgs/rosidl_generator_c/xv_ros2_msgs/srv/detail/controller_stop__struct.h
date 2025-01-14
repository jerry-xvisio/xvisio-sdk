// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xv_ros2_msgs:srv/ControllerStop.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__CONTROLLER_STOP__STRUCT_H_
#define XV_ROS2_MSGS__SRV__DETAIL__CONTROLLER_STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ControllerStop in the package xv_ros2_msgs.
typedef struct xv_ros2_msgs__srv__ControllerStop_Request
{
  uint8_t structure_needs_at_least_one_member;
} xv_ros2_msgs__srv__ControllerStop_Request;

// Struct for a sequence of xv_ros2_msgs__srv__ControllerStop_Request.
typedef struct xv_ros2_msgs__srv__ControllerStop_Request__Sequence
{
  xv_ros2_msgs__srv__ControllerStop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xv_ros2_msgs__srv__ControllerStop_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ControllerStop in the package xv_ros2_msgs.
typedef struct xv_ros2_msgs__srv__ControllerStop_Response
{
  bool success;
  rosidl_runtime_c__String message;
} xv_ros2_msgs__srv__ControllerStop_Response;

// Struct for a sequence of xv_ros2_msgs__srv__ControllerStop_Response.
typedef struct xv_ros2_msgs__srv__ControllerStop_Response__Sequence
{
  xv_ros2_msgs__srv__ControllerStop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xv_ros2_msgs__srv__ControllerStop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XV_ROS2_MSGS__SRV__DETAIL__CONTROLLER_STOP__STRUCT_H_
