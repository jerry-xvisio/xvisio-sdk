// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xv_ros2_msgs:srv/GetOrientation.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION__BUILDER_HPP_
#define XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xv_ros2_msgs/srv/detail/get_orientation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xv_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetOrientation_Request_prediction
{
public:
  Init_GetOrientation_Request_prediction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xv_ros2_msgs::srv::GetOrientation_Request prediction(::xv_ros2_msgs::srv::GetOrientation_Request::_prediction_type arg)
  {
    msg_.prediction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::srv::GetOrientation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::srv::GetOrientation_Request>()
{
  return xv_ros2_msgs::srv::builder::Init_GetOrientation_Request_prediction();
}

}  // namespace xv_ros2_msgs


namespace xv_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetOrientation_Response_orientation
{
public:
  Init_GetOrientation_Response_orientation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xv_ros2_msgs::srv::GetOrientation_Response orientation(::xv_ros2_msgs::srv::GetOrientation_Response::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::srv::GetOrientation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::srv::GetOrientation_Response>()
{
  return xv_ros2_msgs::srv::builder::Init_GetOrientation_Response_orientation();
}

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION__BUILDER_HPP_
