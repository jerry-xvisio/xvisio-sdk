// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xv_ros2_msgs:msg/ColorDepth.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__TRAITS_HPP_
#define XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xv_ros2_msgs/msg/detail/color_depth__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace xv_ros2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ColorDepth & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: rgb
  {
    if (msg.rgb.size() == 0) {
      out << "rgb: []";
    } else {
      out << "rgb: [";
      size_t pending_items = msg.rgb.size();
      for (auto item : msg.rgb) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: depth
  {
    if (msg.depth.size() == 0) {
      out << "depth: []";
    } else {
      out << "depth: [";
      size_t pending_items = msg.depth.size();
      for (auto item : msg.depth) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ColorDepth & msg,
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

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: rgb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rgb.size() == 0) {
      out << "rgb: []\n";
    } else {
      out << "rgb:\n";
      for (auto item : msg.rgb) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.depth.size() == 0) {
      out << "depth: []\n";
    } else {
      out << "depth:\n";
      for (auto item : msg.depth) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ColorDepth & msg, bool use_flow_style = false)
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
  const xv_ros2_msgs::msg::ColorDepth & msg,
  std::ostream & out, size_t indentation = 0)
{
  xv_ros2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xv_ros2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const xv_ros2_msgs::msg::ColorDepth & msg)
{
  return xv_ros2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xv_ros2_msgs::msg::ColorDepth>()
{
  return "xv_ros2_msgs::msg::ColorDepth";
}

template<>
inline const char * name<xv_ros2_msgs::msg::ColorDepth>()
{
  return "xv_ros2_msgs/msg/ColorDepth";
}

template<>
struct has_fixed_size<xv_ros2_msgs::msg::ColorDepth>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xv_ros2_msgs::msg::ColorDepth>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xv_ros2_msgs::msg::ColorDepth>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__TRAITS_HPP_
