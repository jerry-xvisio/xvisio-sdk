// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xv_ros2_msgs:msg/ColorDepth.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__BUILDER_HPP_
#define XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xv_ros2_msgs/msg/detail/color_depth__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xv_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_ColorDepth_depth
{
public:
  explicit Init_ColorDepth_depth(::xv_ros2_msgs::msg::ColorDepth & msg)
  : msg_(msg)
  {}
  ::xv_ros2_msgs::msg::ColorDepth depth(::xv_ros2_msgs::msg::ColorDepth::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::msg::ColorDepth msg_;
};

class Init_ColorDepth_rgb
{
public:
  explicit Init_ColorDepth_rgb(::xv_ros2_msgs::msg::ColorDepth & msg)
  : msg_(msg)
  {}
  Init_ColorDepth_depth rgb(::xv_ros2_msgs::msg::ColorDepth::_rgb_type arg)
  {
    msg_.rgb = std::move(arg);
    return Init_ColorDepth_depth(msg_);
  }

private:
  ::xv_ros2_msgs::msg::ColorDepth msg_;
};

class Init_ColorDepth_width
{
public:
  explicit Init_ColorDepth_width(::xv_ros2_msgs::msg::ColorDepth & msg)
  : msg_(msg)
  {}
  Init_ColorDepth_rgb width(::xv_ros2_msgs::msg::ColorDepth::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ColorDepth_rgb(msg_);
  }

private:
  ::xv_ros2_msgs::msg::ColorDepth msg_;
};

class Init_ColorDepth_height
{
public:
  explicit Init_ColorDepth_height(::xv_ros2_msgs::msg::ColorDepth & msg)
  : msg_(msg)
  {}
  Init_ColorDepth_width height(::xv_ros2_msgs::msg::ColorDepth::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_ColorDepth_width(msg_);
  }

private:
  ::xv_ros2_msgs::msg::ColorDepth msg_;
};

class Init_ColorDepth_header
{
public:
  Init_ColorDepth_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorDepth_height header(::xv_ros2_msgs::msg::ColorDepth::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ColorDepth_height(msg_);
  }

private:
  ::xv_ros2_msgs::msg::ColorDepth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::msg::ColorDepth>()
{
  return xv_ros2_msgs::msg::builder::Init_ColorDepth_header();
}

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__BUILDER_HPP_
