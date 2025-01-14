// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xv_ros2_msgs:msg/OrientationStamped.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__ORIENTATION_STAMPED__BUILDER_HPP_
#define XV_ROS2_MSGS__MSG__DETAIL__ORIENTATION_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xv_ros2_msgs/msg/detail/orientation_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xv_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_OrientationStamped_angular_velocity
{
public:
  explicit Init_OrientationStamped_angular_velocity(::xv_ros2_msgs::msg::OrientationStamped & msg)
  : msg_(msg)
  {}
  ::xv_ros2_msgs::msg::OrientationStamped angular_velocity(::xv_ros2_msgs::msg::OrientationStamped::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::msg::OrientationStamped msg_;
};

class Init_OrientationStamped_quaternion
{
public:
  explicit Init_OrientationStamped_quaternion(::xv_ros2_msgs::msg::OrientationStamped & msg)
  : msg_(msg)
  {}
  Init_OrientationStamped_angular_velocity quaternion(::xv_ros2_msgs::msg::OrientationStamped::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_OrientationStamped_angular_velocity(msg_);
  }

private:
  ::xv_ros2_msgs::msg::OrientationStamped msg_;
};

class Init_OrientationStamped_matrix
{
public:
  explicit Init_OrientationStamped_matrix(::xv_ros2_msgs::msg::OrientationStamped & msg)
  : msg_(msg)
  {}
  Init_OrientationStamped_quaternion matrix(::xv_ros2_msgs::msg::OrientationStamped::_matrix_type arg)
  {
    msg_.matrix = std::move(arg);
    return Init_OrientationStamped_quaternion(msg_);
  }

private:
  ::xv_ros2_msgs::msg::OrientationStamped msg_;
};

class Init_OrientationStamped_header
{
public:
  Init_OrientationStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrientationStamped_matrix header(::xv_ros2_msgs::msg::OrientationStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OrientationStamped_matrix(msg_);
  }

private:
  ::xv_ros2_msgs::msg::OrientationStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::msg::OrientationStamped>()
{
  return xv_ros2_msgs::msg::builder::Init_OrientationStamped_header();
}

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__MSG__DETAIL__ORIENTATION_STAMPED__BUILDER_HPP_
