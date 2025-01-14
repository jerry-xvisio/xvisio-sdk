// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xv_ros2_msgs:msg/ColorDepth.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xv_ros2_msgs/msg/detail/color_depth__rosidl_typesupport_introspection_c.h"
#include "xv_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xv_ros2_msgs/msg/detail/color_depth__functions.h"
#include "xv_ros2_msgs/msg/detail/color_depth__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rgb`
// Member `depth`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__ColorDepth_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xv_ros2_msgs__msg__ColorDepth__init(message_memory);
}

void xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__ColorDepth_fini_function(void * message_memory)
{
  xv_ros2_msgs__msg__ColorDepth__fini(message_memory);
}

size_t xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__size_function__ColorDepth__rgb(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__get_const_function__ColorDepth__rgb(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__get_function__ColorDepth__rgb(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__fetch_function__ColorDepth__rgb(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__get_const_function__ColorDepth__rgb(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__assign_function__ColorDepth__rgb(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__get_function__ColorDepth__rgb(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__resize_function__ColorDepth__rgb(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__size_function__ColorDepth__depth(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__get_const_function__ColorDepth__depth(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__get_function__ColorDepth__depth(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__fetch_function__ColorDepth__depth(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__get_const_function__ColorDepth__depth(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__assign_function__ColorDepth__depth(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__get_function__ColorDepth__depth(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__resize_function__ColorDepth__depth(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__ColorDepth_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs__msg__ColorDepth, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs__msg__ColorDepth, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs__msg__ColorDepth, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rgb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs__msg__ColorDepth, rgb),  // bytes offset in struct
    NULL,  // default value
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__size_function__ColorDepth__rgb,  // size() function pointer
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__get_const_function__ColorDepth__rgb,  // get_const(index) function pointer
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__get_function__ColorDepth__rgb,  // get(index) function pointer
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__fetch_function__ColorDepth__rgb,  // fetch(index, &value) function pointer
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__assign_function__ColorDepth__rgb,  // assign(index, value) function pointer
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__resize_function__ColorDepth__rgb  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs__msg__ColorDepth, depth),  // bytes offset in struct
    NULL,  // default value
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__size_function__ColorDepth__depth,  // size() function pointer
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__get_const_function__ColorDepth__depth,  // get_const(index) function pointer
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__get_function__ColorDepth__depth,  // get(index) function pointer
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__fetch_function__ColorDepth__depth,  // fetch(index, &value) function pointer
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__assign_function__ColorDepth__depth,  // assign(index, value) function pointer
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__resize_function__ColorDepth__depth  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__ColorDepth_message_members = {
  "xv_ros2_msgs__msg",  // message namespace
  "ColorDepth",  // message name
  5,  // number of fields
  sizeof(xv_ros2_msgs__msg__ColorDepth),
  xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__ColorDepth_message_member_array,  // message members
  xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__ColorDepth_init_function,  // function to initialize message memory (memory has to be allocated)
  xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__ColorDepth_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__ColorDepth_message_type_support_handle = {
  0,
  &xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__ColorDepth_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xv_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xv_ros2_msgs, msg, ColorDepth)() {
  xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__ColorDepth_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__ColorDepth_message_type_support_handle.typesupport_identifier) {
    xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__ColorDepth_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xv_ros2_msgs__msg__ColorDepth__rosidl_typesupport_introspection_c__ColorDepth_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
