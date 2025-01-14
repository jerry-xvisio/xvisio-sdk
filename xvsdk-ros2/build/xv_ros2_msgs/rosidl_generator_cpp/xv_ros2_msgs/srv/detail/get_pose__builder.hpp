// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xv_ros2_msgs:srv/GetPose.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__GET_POSE__BUILDER_HPP_
#define XV_ROS2_MSGS__SRV__DETAIL__GET_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xv_ros2_msgs/srv/detail/get_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xv_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPose_Request_prediction
{
public:
  Init_GetPose_Request_prediction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xv_ros2_msgs::srv::GetPose_Request prediction(::xv_ros2_msgs::srv::GetPose_Request::_prediction_type arg)
  {
    msg_.prediction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::srv::GetPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::srv::GetPose_Request>()
{
  return xv_ros2_msgs::srv::builder::Init_GetPose_Request_prediction();
}

}  // namespace xv_ros2_msgs


namespace xv_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPose_Response_pose
{
public:
  Init_GetPose_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xv_ros2_msgs::srv::GetPose_Response pose(::xv_ros2_msgs::srv::GetPose_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::srv::GetPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::srv::GetPose_Response>()
{
  return xv_ros2_msgs::srv::builder::Init_GetPose_Response_pose();
}

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__SRV__DETAIL__GET_POSE__BUILDER_HPP_
