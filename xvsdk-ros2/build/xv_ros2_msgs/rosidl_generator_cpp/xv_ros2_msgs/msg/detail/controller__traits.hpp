// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xv_ros2_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__CONTROLLER__TRAITS_HPP_
#define XV_ROS2_MSGS__MSG__DETAIL__CONTROLLER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xv_ros2_msgs/msg/detail/controller__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace xv_ros2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Controller & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: keytrigger
  {
    out << "keytrigger: ";
    rosidl_generator_traits::value_to_yaml(msg.keytrigger, out);
    out << ", ";
  }

  // member: keyside
  {
    out << "keyside: ";
    rosidl_generator_traits::value_to_yaml(msg.keyside, out);
    out << ", ";
  }

  // member: rockerx
  {
    out << "rockerx: ";
    rosidl_generator_traits::value_to_yaml(msg.rockerx, out);
    out << ", ";
  }

  // member: rockery
  {
    out << "rockery: ";
    rosidl_generator_traits::value_to_yaml(msg.rockery, out);
    out << ", ";
  }

  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Controller & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: keytrigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keytrigger: ";
    rosidl_generator_traits::value_to_yaml(msg.keytrigger, out);
    out << "\n";
  }

  // member: keyside
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keyside: ";
    rosidl_generator_traits::value_to_yaml(msg.keyside, out);
    out << "\n";
  }

  // member: rockerx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rockerx: ";
    rosidl_generator_traits::value_to_yaml(msg.rockerx, out);
    out << "\n";
  }

  // member: rockery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rockery: ";
    rosidl_generator_traits::value_to_yaml(msg.rockery, out);
    out << "\n";
  }

  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Controller & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace xv_ros2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use xv_ros2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xv_ros2_msgs::msg::Controller & msg,
  std::ostream & out, size_t indentation = 0)
{
  xv_ros2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xv_ros2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const xv_ros2_msgs::msg::Controller & msg)
{
  return xv_ros2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xv_ros2_msgs::msg::Controller>()
{
  return "xv_ros2_msgs::msg::Controller";
}

template<>
inline const char * name<xv_ros2_msgs::msg::Controller>()
{
  return "xv_ros2_msgs/msg/Controller";
}

template<>
struct has_fixed_size<xv_ros2_msgs::msg::Controller>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<xv_ros2_msgs::msg::Controller>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<xv_ros2_msgs::msg::Controller>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XV_ROS2_MSGS__MSG__DETAIL__CONTROLLER__TRAITS_HPP_
