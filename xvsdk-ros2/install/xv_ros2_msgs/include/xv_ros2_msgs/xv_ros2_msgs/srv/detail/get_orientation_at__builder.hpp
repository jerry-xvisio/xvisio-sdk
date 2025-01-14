// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xv_ros2_msgs:srv/GetOrientationAt.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION_AT__BUILDER_HPP_
#define XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION_AT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xv_ros2_msgs/srv/detail/get_orientation_at__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xv_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetOrientationAt_Request_timestamp
{
public:
  Init_GetOrientationAt_Request_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xv_ros2_msgs::srv::GetOrientationAt_Request timestamp(::xv_ros2_msgs::srv::GetOrientationAt_Request::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::srv::GetOrientationAt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::srv::GetOrientationAt_Request>()
{
  return xv_ros2_msgs::srv::builder::Init_GetOrientationAt_Request_timestamp();
}

}  // namespace xv_ros2_msgs


namespace xv_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetOrientationAt_Response_orientation
{
public:
  Init_GetOrientationAt_Response_orientation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xv_ros2_msgs::srv::GetOrientationAt_Response orientation(::xv_ros2_msgs::srv::GetOrientationAt_Response::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::srv::GetOrientationAt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::srv::GetOrientationAt_Response>()
{
  return xv_ros2_msgs::srv::builder::Init_GetOrientationAt_Response_orientation();
}

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION_AT__BUILDER_HPP_
