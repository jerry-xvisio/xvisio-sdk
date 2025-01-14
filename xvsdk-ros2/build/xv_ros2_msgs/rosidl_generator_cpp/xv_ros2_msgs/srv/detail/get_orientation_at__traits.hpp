// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xv_ros2_msgs:srv/GetOrientationAt.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION_AT__TRAITS_HPP_
#define XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION_AT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xv_ros2_msgs/srv/detail/get_orientation_at__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace xv_ros2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetOrientationAt_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetOrientationAt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetOrientationAt_Request & msg, bool use_flow_style = false)
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
  const xv_ros2_msgs::srv::GetOrientationAt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  xv_ros2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xv_ros2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const xv_ros2_msgs::srv::GetOrientationAt_Request & msg)
{
  return xv_ros2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xv_ros2_msgs::srv::GetOrientationAt_Request>()
{
  return "xv_ros2_msgs::srv::GetOrientationAt_Request";
}

template<>
inline const char * name<xv_ros2_msgs::srv::GetOrientationAt_Request>()
{
  return "xv_ros2_msgs/srv/GetOrientationAt_Request";
}

template<>
struct has_fixed_size<xv_ros2_msgs::srv::GetOrientationAt_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<xv_ros2_msgs::srv::GetOrientationAt_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<xv_ros2_msgs::srv::GetOrientationAt_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'orientation'
#include "xv_ros2_msgs/msg/detail/orientation_stamped__traits.hpp"

namespace xv_ros2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetOrientationAt_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetOrientationAt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetOrientationAt_Response & msg, bool use_flow_style = false)
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
  const xv_ros2_msgs::srv::GetOrientationAt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  xv_ros2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xv_ros2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const xv_ros2_msgs::srv::GetOrientationAt_Response & msg)
{
  return xv_ros2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xv_ros2_msgs::srv::GetOrientationAt_Response>()
{
  return "xv_ros2_msgs::srv::GetOrientationAt_Response";
}

template<>
inline const char * name<xv_ros2_msgs::srv::GetOrientationAt_Response>()
{
  return "xv_ros2_msgs/srv/GetOrientationAt_Response";
}

template<>
struct has_fixed_size<xv_ros2_msgs::srv::GetOrientationAt_Response>
  : std::integral_constant<bool, has_fixed_size<xv_ros2_msgs::msg::OrientationStamped>::value> {};

template<>
struct has_bounded_size<xv_ros2_msgs::srv::GetOrientationAt_Response>
  : std::integral_constant<bool, has_bounded_size<xv_ros2_msgs::msg::OrientationStamped>::value> {};

template<>
struct is_message<xv_ros2_msgs::srv::GetOrientationAt_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xv_ros2_msgs::srv::GetOrientationAt>()
{
  return "xv_ros2_msgs::srv::GetOrientationAt";
}

template<>
inline const char * name<xv_ros2_msgs::srv::GetOrientationAt>()
{
  return "xv_ros2_msgs/srv/GetOrientationAt";
}

template<>
struct has_fixed_size<xv_ros2_msgs::srv::GetOrientationAt>
  : std::integral_constant<
    bool,
    has_fixed_size<xv_ros2_msgs::srv::GetOrientationAt_Request>::value &&
    has_fixed_size<xv_ros2_msgs::srv::GetOrientationAt_Response>::value
  >
{
};

template<>
struct has_bounded_size<xv_ros2_msgs::srv::GetOrientationAt>
  : std::integral_constant<
    bool,
    has_bounded_size<xv_ros2_msgs::srv::GetOrientationAt_Request>::value &&
    has_bounded_size<xv_ros2_msgs::srv::GetOrientationAt_Response>::value
  >
{
};

template<>
struct is_service<xv_ros2_msgs::srv::GetOrientationAt>
  : std::true_type
{
};

template<>
struct is_service_request<xv_ros2_msgs::srv::GetOrientationAt_Request>
  : std::true_type
{
};

template<>
struct is_service_response<xv_ros2_msgs::srv::GetOrientationAt_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION_AT__TRAITS_HPP_
