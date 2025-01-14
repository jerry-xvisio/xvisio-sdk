// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xv_ros2_msgs:msg/ColorDepth.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__FUNCTIONS_H_
#define XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xv_ros2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "xv_ros2_msgs/msg/detail/color_depth__struct.h"

/// Initialize msg/ColorDepth message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xv_ros2_msgs__msg__ColorDepth
 * )) before or use
 * xv_ros2_msgs__msg__ColorDepth__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__msg__ColorDepth__init(xv_ros2_msgs__msg__ColorDepth * msg);

/// Finalize msg/ColorDepth message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
void
xv_ros2_msgs__msg__ColorDepth__fini(xv_ros2_msgs__msg__ColorDepth * msg);

/// Create msg/ColorDepth message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xv_ros2_msgs__msg__ColorDepth__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
xv_ros2_msgs__msg__ColorDepth *
xv_ros2_msgs__msg__ColorDepth__create();

/// Destroy msg/ColorDepth message.
/**
 * It calls
 * xv_ros2_msgs__msg__ColorDepth__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
void
xv_ros2_msgs__msg__ColorDepth__destroy(xv_ros2_msgs__msg__ColorDepth * msg);

/// Check for msg/ColorDepth message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__msg__ColorDepth__are_equal(const xv_ros2_msgs__msg__ColorDepth * lhs, const xv_ros2_msgs__msg__ColorDepth * rhs);

/// Copy a msg/ColorDepth message.
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
xv_ros2_msgs__msg__ColorDepth__copy(
  const xv_ros2_msgs__msg__ColorDepth * input,
  xv_ros2_msgs__msg__ColorDepth * output);

/// Initialize array of msg/ColorDepth messages.
/**
 * It allocates the memory for the number of elements and calls
 * xv_ros2_msgs__msg__ColorDepth__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__msg__ColorDepth__Sequence__init(xv_ros2_msgs__msg__ColorDepth__Sequence * array, size_t size);

/// Finalize array of msg/ColorDepth messages.
/**
 * It calls
 * xv_ros2_msgs__msg__ColorDepth__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
void
xv_ros2_msgs__msg__ColorDepth__Sequence__fini(xv_ros2_msgs__msg__ColorDepth__Sequence * array);

/// Create array of msg/ColorDepth messages.
/**
 * It allocates the memory for the array and calls
 * xv_ros2_msgs__msg__ColorDepth__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
xv_ros2_msgs__msg__ColorDepth__Sequence *
xv_ros2_msgs__msg__ColorDepth__Sequence__create(size_t size);

/// Destroy array of msg/ColorDepth messages.
/**
 * It calls
 * xv_ros2_msgs__msg__ColorDepth__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
void
xv_ros2_msgs__msg__ColorDepth__Sequence__destroy(xv_ros2_msgs__msg__ColorDepth__Sequence * array);

/// Check for msg/ColorDepth message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xv_ros2_msgs
bool
xv_ros2_msgs__msg__ColorDepth__Sequence__are_equal(const xv_ros2_msgs__msg__ColorDepth__Sequence * lhs, const xv_ros2_msgs__msg__ColorDepth__Sequence * rhs);

/// Copy an array of msg/ColorDepth messages.
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
xv_ros2_msgs__msg__ColorDepth__Sequence__copy(
  const xv_ros2_msgs__msg__ColorDepth__Sequence * input,
  xv_ros2_msgs__msg__ColorDepth__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__FUNCTIONS_H_
