// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xv_ros2_msgs:msg/OrientationStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xv_ros2_msgs/msg/detail/orientation_stamped__rosidl_typesupport_introspection_c.h"
#include "xv_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xv_ros2_msgs/msg/detail/orientation_stamped__functions.h"
#include "xv_ros2_msgs/msg/detail/orientation_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `quaternion`
#include "geometry_msgs/msg/quaternion.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `angular_velocity`
#include "geometry_msgs/msg/vector3.h"
// Member `angular_velocity`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xv_ros2_msgs__msg__OrientationStamped__init(message_memory);
}

void xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_fini_function(void * message_memory)
{
  xv_ros2_msgs__msg__OrientationStamped__fini(message_memory);
}

size_t xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__size_function__OrientationStamped__matrix(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__get_const_function__OrientationStamped__matrix(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__get_function__OrientationStamped__matrix(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__fetch_function__OrientationStamped__matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__get_const_function__OrientationStamped__matrix(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__assign_function__OrientationStamped__matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__get_function__OrientationStamped__matrix(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs__msg__OrientationStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "matrix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs__msg__OrientationStamped, matrix),  // bytes offset in struct
    NULL,  // default value
    xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__size_function__OrientationStamped__matrix,  // size() function pointer
    xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__get_const_function__OrientationStamped__matrix,  // get_const(index) function pointer
    xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__get_function__OrientationStamped__matrix,  // get(index) function pointer
    xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__fetch_function__OrientationStamped__matrix,  // fetch(index, &value) function pointer
    xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__assign_function__OrientationStamped__matrix,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quaternion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs__msg__OrientationStamped, quaternion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs__msg__OrientationStamped, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_message_members = {
  "xv_ros2_msgs__msg",  // message namespace
  "OrientationStamped",  // message name
  4,  // number of fields
  sizeof(xv_ros2_msgs__msg__OrientationStamped),
  xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_message_member_array,  // message members
  xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_message_type_support_handle = {
  0,
  &xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xv_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xv_ros2_msgs, msg, OrientationStamped)() {
  xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_message_type_support_handle.typesupport_identifier) {
    xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xv_ros2_msgs__msg__OrientationStamped__rosidl_typesupport_introspection_c__OrientationStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
