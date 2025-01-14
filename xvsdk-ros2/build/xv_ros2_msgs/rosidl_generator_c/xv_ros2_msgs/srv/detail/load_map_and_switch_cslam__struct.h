// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xv_ros2_msgs:srv/LoadMapAndSwitchCslam.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__LOAD_MAP_AND_SWITCH_CSLAM__STRUCT_H_
#define XV_ROS2_MSGS__SRV__DETAIL__LOAD_MAP_AND_SWITCH_CSLAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filename'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadMapAndSwitchCslam in the package xv_ros2_msgs.
typedef struct xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request
{
  rosidl_runtime_c__String filename;
} xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request;

// Struct for a sequence of xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request.
typedef struct xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence
{
  xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadMapAndSwitchCslam in the package xv_ros2_msgs.
typedef struct xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response
{
  bool success;
  rosidl_runtime_c__String message;
} xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response;

// Struct for a sequence of xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response.
typedef struct xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence
{
  xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XV_ROS2_MSGS__SRV__DETAIL__LOAD_MAP_AND_SWITCH_CSLAM__STRUCT_H_
