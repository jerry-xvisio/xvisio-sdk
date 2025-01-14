// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xv_ros2_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__CONTROLLER__BUILDER_HPP_
#define XV_ROS2_MSGS__MSG__DETAIL__CONTROLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xv_ros2_msgs/msg/detail/controller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xv_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_Controller_key
{
public:
  explicit Init_Controller_key(::xv_ros2_msgs::msg::Controller & msg)
  : msg_(msg)
  {}
  ::xv_ros2_msgs::msg::Controller key(::xv_ros2_msgs::msg::Controller::_key_type arg)
  {
    msg_.key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::msg::Controller msg_;
};

class Init_Controller_rockery
{
public:
  explicit Init_Controller_rockery(::xv_ros2_msgs::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_key rockery(::xv_ros2_msgs::msg::Controller::_rockery_type arg)
  {
    msg_.rockery = std::move(arg);
    return Init_Controller_key(msg_);
  }

private:
  ::xv_ros2_msgs::msg::Controller msg_;
};

class Init_Controller_rockerx
{
public:
  explicit Init_Controller_rockerx(::xv_ros2_msgs::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_rockery rockerx(::xv_ros2_msgs::msg::Controller::_rockerx_type arg)
  {
    msg_.rockerx = std::move(arg);
    return Init_Controller_rockery(msg_);
  }

private:
  ::xv_ros2_msgs::msg::Controller msg_;
};

class Init_Controller_keyside
{
public:
  explicit Init_Controller_keyside(::xv_ros2_msgs::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_rockerx keyside(::xv_ros2_msgs::msg::Controller::_keyside_type arg)
  {
    msg_.keyside = std::move(arg);
    return Init_Controller_rockerx(msg_);
  }

private:
  ::xv_ros2_msgs::msg::Controller msg_;
};

class Init_Controller_keytrigger
{
public:
  explicit Init_Controller_keytrigger(::xv_ros2_msgs::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_keyside keytrigger(::xv_ros2_msgs::msg::Controller::_keytrigger_type arg)
  {
    msg_.keytrigger = std::move(arg);
    return Init_Controller_keyside(msg_);
  }

private:
  ::xv_ros2_msgs::msg::Controller msg_;
};

class Init_Controller_header
{
public:
  Init_Controller_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_keytrigger header(::xv_ros2_msgs::msg::Controller::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Controller_keytrigger(msg_);
  }

private:
  ::xv_ros2_msgs::msg::Controller msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::msg::Controller>()
{
  return xv_ros2_msgs::msg::builder::Init_Controller_header();
}

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__MSG__DETAIL__CONTROLLER__BUILDER_HPP_
