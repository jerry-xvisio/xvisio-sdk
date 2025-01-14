// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xv_ros2_msgs:msg/ButtonMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xv_ros2_msgs/msg/detail/button_msg__rosidl_typesupport_introspection_c.h"
#include "xv_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xv_ros2_msgs/msg/detail/button_msg__functions.h"
#include "xv_ros2_msgs/msg/detail/button_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xv_ros2_msgs__msg__ButtonMsg__rosidl_typesupport_introspection_c__ButtonMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xv_ros2_msgs__msg__ButtonMsg__init(message_memory);
}

void xv_ros2_msgs__msg__ButtonMsg__rosidl_typesupport_introspection_c__ButtonMsg_fini_function(void * message_memory)
{
  xv_ros2_msgs__msg__ButtonMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember xv_ros2_msgs__msg__ButtonMsg__rosidl_typesupport_introspection_c__ButtonMsg_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs__msg__ButtonMsg, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs__msg__ButtonMsg, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xv_ros2_msgs__msg__ButtonMsg__rosidl_typesupport_introspection_c__ButtonMsg_message_members = {
  "xv_ros2_msgs__msg",  // message namespace
  "ButtonMsg",  // message name
  2,  // number of fields
  sizeof(xv_ros2_msgs__msg__ButtonMsg),
  xv_ros2_msgs__msg__ButtonMsg__rosidl_typesupport_introspection_c__ButtonMsg_message_member_array,  // message members
  xv_ros2_msgs__msg__ButtonMsg__rosidl_typesupport_introspection_c__ButtonMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  xv_ros2_msgs__msg__ButtonMsg__rosidl_typesupport_introspection_c__ButtonMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xv_ros2_msgs__msg__ButtonMsg__rosidl_typesupport_introspection_c__ButtonMsg_message_type_support_handle = {
  0,
  &xv_ros2_msgs__msg__ButtonMsg__rosidl_typesupport_introspection_c__ButtonMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xv_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xv_ros2_msgs, msg, ButtonMsg)() {
  xv_ros2_msgs__msg__ButtonMsg__rosidl_typesupport_introspection_c__ButtonMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!xv_ros2_msgs__msg__ButtonMsg__rosidl_typesupport_introspection_c__ButtonMsg_message_type_support_handle.typesupport_identifier) {
    xv_ros2_msgs__msg__ButtonMsg__rosidl_typesupport_introspection_c__ButtonMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xv_ros2_msgs__msg__ButtonMsg__rosidl_typesupport_introspection_c__ButtonMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
