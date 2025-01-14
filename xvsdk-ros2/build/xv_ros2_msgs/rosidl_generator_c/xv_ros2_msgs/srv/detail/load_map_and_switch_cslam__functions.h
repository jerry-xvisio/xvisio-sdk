// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xv_ros2_msgs:srv/LoadMapAndSwitchCslam.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__LOAD_MAP_AND_SWITCH_CSLAM__FUNCTIONS_H_
#define XV_ROS2_MSGS__SRV__DETAIL__LOAD_MAP_AND_SWITCH_CSLAM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xv_ros2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "xv_ros2_msgs/srv/detail/load_map_and_switch_cslam__struct.h"

/// Initialize srv/LoadMapAndSwitchCslam message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request
 * )) before or use
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__init(xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request * msg);

/// Finalize srv/LoadMapAndSwitchCslam message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
void
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__fini(xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request * msg);

/// Create srv/LoadMapAndSwitchCslam message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request *
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__create();

/// Destroy srv/LoadMapAndSwitchCslam message.
/**
 * It calls
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
void
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__destroy(xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request * msg);

/// Check for srv/LoadMapAndSwitchCslam message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__are_equal(const xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request * lhs, const xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request * rhs);

/// Copy a srv/LoadMapAndSwitchCslam message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__copy(
  const xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request * input,
  xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request * output);

/// Initialize array of srv/LoadMapAndSwitchCslam messages.
/**
 * It allocates the memory for the number of elements and calls
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence__init(xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence * array, size_t size);

/// Finalize array of srv/LoadMapAndSwitchCslam messages.
/**
 * It calls
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
void
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence__fini(xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence * array);

/// Create array of srv/LoadMapAndSwitchCslam messages.
/**
 * It allocates the memory for the array and calls
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence *
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence__create(size_t size);

/// Destroy array of srv/LoadMapAndSwitchCslam messages.
/**
 * It calls
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
void
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence__destroy(xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence * array);

/// Check for srv/LoadMapAndSwitchCslam message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence__are_equal(const xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence * lhs, const xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence * rhs);

/// Copy an array of srv/LoadMapAndSwitchCslam messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence__copy(
  const xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence * input,
  xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request__Sequence * output);

/// Initialize srv/LoadMapAndSwitchCslam message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response
 * )) before or use
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__init(xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response * msg);

/// Finalize srv/LoadMapAndSwitchCslam message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
void
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__fini(xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response * msg);

/// Create srv/LoadMapAndSwitchCslam message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response *
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__create();

/// Destroy srv/LoadMapAndSwitchCslam message.
/**
 * It calls
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
void
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__destroy(xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response * msg);

/// Check for srv/LoadMapAndSwitchCslam message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__are_equal(const xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response * lhs, const xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response * rhs);

/// Copy a srv/LoadMapAndSwitchCslam message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__copy(
  const xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response * input,
  xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response * output);

/// Initialize array of srv/LoadMapAndSwitchCslam messages.
/**
 * It allocates the memory for the number of elements and calls
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence__init(xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence * array, size_t size);

/// Finalize array of srv/LoadMapAndSwitchCslam messages.
/**
 * It calls
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
void
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence__fini(xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence * array);

/// Create array of srv/LoadMapAndSwitchCslam messages.
/**
 * It allocates the memory for the array and calls
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence *
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence__create(size_t size);

/// Destroy array of srv/LoadMapAndSwitchCslam messages.
/**
 * It calls
 * xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
void
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence__destroy(xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence * array);

/// Check for srv/LoadMapAndSwitchCslam message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence__are_equal(const xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence * lhs, const xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence * rhs);

/// Copy an array of srv/LoadMapAndSwitchCslam messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence__copy(
  const xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence * input,
  xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XV_ROS2_MSGS__SRV__DETAIL__LOAD_MAP_AND_SWITCH_CSLAM__FUNCTIONS_H_
