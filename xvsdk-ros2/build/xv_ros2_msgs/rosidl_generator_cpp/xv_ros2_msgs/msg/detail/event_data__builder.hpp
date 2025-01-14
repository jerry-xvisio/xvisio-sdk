// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xv_ros2_msgs:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_
#define XV_ROS2_MSGS__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xv_ros2_msgs/msg/detail/event_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xv_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_EventData_state
{
public:
  explicit Init_EventData_state(::xv_ros2_msgs::msg::EventData & msg)
  : msg_(msg)
  {}
  ::xv_ros2_msgs::msg::EventData state(::xv_ros2_msgs::msg::EventData::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::msg::EventData msg_;
};

class Init_EventData_type
{
public:
  explicit Init_EventData_type(::xv_ros2_msgs::msg::EventData & msg)
  : msg_(msg)
  {}
  Init_EventData_state type(::xv_ros2_msgs::msg::EventData::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_EventData_state(msg_);
  }

private:
  ::xv_ros2_msgs::msg::EventData msg_;
};

class Init_EventData_header
{
public:
  Init_EventData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventData_type header(::xv_ros2_msgs::msg::EventData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EventData_type(msg_);
  }

private:
  ::xv_ros2_msgs::msg::EventData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::msg::EventData>()
{
  return xv_ros2_msgs::msg::builder::Init_EventData_header();
}

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_
