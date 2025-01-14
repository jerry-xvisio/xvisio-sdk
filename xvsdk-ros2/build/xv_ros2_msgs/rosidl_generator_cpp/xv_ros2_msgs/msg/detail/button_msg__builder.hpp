// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xv_ros2_msgs:msg/ButtonMsg.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__BUTTON_MSG__BUILDER_HPP_
#define XV_ROS2_MSGS__MSG__DETAIL__BUTTON_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xv_ros2_msgs/msg/detail/button_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xv_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_ButtonMsg_state
{
public:
  explicit Init_ButtonMsg_state(::xv_ros2_msgs::msg::ButtonMsg & msg)
  : msg_(msg)
  {}
  ::xv_ros2_msgs::msg::ButtonMsg state(::xv_ros2_msgs::msg::ButtonMsg::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::msg::ButtonMsg msg_;
};

class Init_ButtonMsg_header
{
public:
  Init_ButtonMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ButtonMsg_state header(::xv_ros2_msgs::msg::ButtonMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ButtonMsg_state(msg_);
  }

private:
  ::xv_ros2_msgs::msg::ButtonMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::msg::ButtonMsg>()
{
  return xv_ros2_msgs::msg::builder::Init_ButtonMsg_header();
}

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__MSG__DETAIL__BUTTON_MSG__BUILDER_HPP_
