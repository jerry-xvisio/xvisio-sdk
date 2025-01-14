// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xv_ros2_msgs:srv/GetPoseAt.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__GET_POSE_AT__BUILDER_HPP_
#define XV_ROS2_MSGS__SRV__DETAIL__GET_POSE_AT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xv_ros2_msgs/srv/detail/get_pose_at__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xv_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPoseAt_Request_timestamp
{
public:
  Init_GetPoseAt_Request_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xv_ros2_msgs::srv::GetPoseAt_Request timestamp(::xv_ros2_msgs::srv::GetPoseAt_Request::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::srv::GetPoseAt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::srv::GetPoseAt_Request>()
{
  return xv_ros2_msgs::srv::builder::Init_GetPoseAt_Request_timestamp();
}

}  // namespace xv_ros2_msgs


namespace xv_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPoseAt_Response_pose
{
public:
  Init_GetPoseAt_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xv_ros2_msgs::srv::GetPoseAt_Response pose(::xv_ros2_msgs::srv::GetPoseAt_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::srv::GetPoseAt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::srv::GetPoseAt_Response>()
{
  return xv_ros2_msgs::srv::builder::Init_GetPoseAt_Response_pose();
}

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__SRV__DETAIL__GET_POSE_AT__BUILDER_HPP_
