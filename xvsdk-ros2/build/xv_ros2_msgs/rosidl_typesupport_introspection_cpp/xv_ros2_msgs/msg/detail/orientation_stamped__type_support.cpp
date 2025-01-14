// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xv_ros2_msgs:msg/OrientationStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xv_ros2_msgs/msg/detail/orientation_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace xv_ros2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OrientationStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xv_ros2_msgs::msg::OrientationStamped(_init);
}

void OrientationStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xv_ros2_msgs::msg::OrientationStamped *>(message_memory);
  typed_message->~OrientationStamped();
}

size_t size_function__OrientationStamped__matrix(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__OrientationStamped__matrix(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__OrientationStamped__matrix(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__OrientationStamped__matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__OrientationStamped__matrix(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__OrientationStamped__matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__OrientationStamped__matrix(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OrientationStamped_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs::msg::OrientationStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "matrix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs::msg::OrientationStamped, matrix),  // bytes offset in struct
    nullptr,  // default value
    size_function__OrientationStamped__matrix,  // size() function pointer
    get_const_function__OrientationStamped__matrix,  // get_const(index) function pointer
    get_function__OrientationStamped__matrix,  // get(index) function pointer
    fetch_function__OrientationStamped__matrix,  // fetch(index, &value) function pointer
    assign_function__OrientationStamped__matrix,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quaternion",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Quaternion>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs::msg::OrientationStamped, quaternion),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xv_ros2_msgs::msg::OrientationStamped, angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OrientationStamped_message_members = {
  "xv_ros2_msgs::msg",  // message namespace
  "OrientationStamped",  // message name
  4,  // number of fields
  sizeof(xv_ros2_msgs::msg::OrientationStamped),
  OrientationStamped_message_member_array,  // message members
  OrientationStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  OrientationStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OrientationStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OrientationStamped_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace xv_ros2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xv_ros2_msgs::msg::OrientationStamped>()
{
  return &::xv_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::OrientationStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xv_ros2_msgs, msg, OrientationStamped)() {
  return &::xv_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::OrientationStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
