// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xv_ros2_msgs:srv/ControllerStop.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__CONTROLLER_STOP__TRAITS_HPP_
#define XV_ROS2_MSGS__SRV__DETAIL__CONTROLLER_STOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xv_ros2_msgs/srv/detail/controller_stop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xv_ros2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControllerStop_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerStop_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xv_ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use xv_ros2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xv_ros2_msgs::srv::ControllerStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  xv_ros2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xv_ros2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const xv_ros2_msgs::srv::ControllerStop_Request & msg)
{
  return xv_ros2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xv_ros2_msgs::srv::ControllerStop_Request>()
{
  return "xv_ros2_msgs::srv::ControllerStop_Request";
}

template<>
inline const char * name<xv_ros2_msgs::srv::ControllerStop_Request>()
{
  return "xv_ros2_msgs/srv/ControllerStop_Request";
}

template<>
struct has_fixed_size<xv_ros2_msgs::srv::ControllerStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xv_ros2_msgs::srv::ControllerStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xv_ros2_msgs::srv::ControllerStop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace xv_ros2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControllerStop_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerStop_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xv_ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use xv_ros2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xv_ros2_msgs::srv::ControllerStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  xv_ros2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xv_ros2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const xv_ros2_msgs::srv::ControllerStop_Response & msg)
{
  return xv_ros2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xv_ros2_msgs::srv::ControllerStop_Response>()
{
  return "xv_ros2_msgs::srv::ControllerStop_Response";
}

template<>
inline const char * name<xv_ros2_msgs::srv::ControllerStop_Response>()
{
  return "xv_ros2_msgs/srv/ControllerStop_Response";
}

template<>
struct has_fixed_size<xv_ros2_msgs::srv::ControllerStop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xv_ros2_msgs::srv::ControllerStop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xv_ros2_msgs::srv::ControllerStop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xv_ros2_msgs::srv::ControllerStop>()
{
  return "xv_ros2_msgs::srv::ControllerStop";
}

template<>
inline const char * name<xv_ros2_msgs::srv::ControllerStop>()
{
  return "xv_ros2_msgs/srv/ControllerStop";
}

template<>
struct has_fixed_size<xv_ros2_msgs::srv::ControllerStop>
  : std::integral_constant<
    bool,
    has_fixed_size<xv_ros2_msgs::srv::ControllerStop_Request>::value &&
    has_fixed_size<xv_ros2_msgs::srv::ControllerStop_Response>::value
  >
{
};

template<>
struct has_bounded_size<xv_ros2_msgs::srv::ControllerStop>
  : std::integral_constant<
    bool,
    has_bounded_size<xv_ros2_msgs::srv::ControllerStop_Request>::value &&
    has_bounded_size<xv_ros2_msgs::srv::ControllerStop_Response>::value
  >
{
};

template<>
struct is_service<xv_ros2_msgs::srv::ControllerStop>
  : std::true_type
{
};

template<>
struct is_service_request<xv_ros2_msgs::srv::ControllerStop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<xv_ros2_msgs::srv::ControllerStop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // XV_ROS2_MSGS__SRV__DETAIL__CONTROLLER_STOP__TRAITS_HPP_
