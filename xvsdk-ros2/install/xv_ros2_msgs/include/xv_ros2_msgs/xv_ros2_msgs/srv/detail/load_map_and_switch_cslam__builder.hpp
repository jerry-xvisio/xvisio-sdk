// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xv_ros2_msgs:srv/LoadMapAndSwitchCslam.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__LOAD_MAP_AND_SWITCH_CSLAM__BUILDER_HPP_
#define XV_ROS2_MSGS__SRV__DETAIL__LOAD_MAP_AND_SWITCH_CSLAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xv_ros2_msgs/srv/detail/load_map_and_switch_cslam__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xv_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadMapAndSwitchCslam_Request_filename
{
public:
  Init_LoadMapAndSwitchCslam_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request filename(::xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request>()
{
  return xv_ros2_msgs::srv::builder::Init_LoadMapAndSwitchCslam_Request_filename();
}

}  // namespace xv_ros2_msgs


namespace xv_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadMapAndSwitchCslam_Response_message
{
public:
  explicit Init_LoadMapAndSwitchCslam_Response_message(::xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response & msg)
  : msg_(msg)
  {}
  ::xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response message(::xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response msg_;
};

class Init_LoadMapAndSwitchCslam_Response_success
{
public:
  Init_LoadMapAndSwitchCslam_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadMapAndSwitchCslam_Response_message success(::xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_LoadMapAndSwitchCslam_Response_message(msg_);
  }

private:
  ::xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response>()
{
  return xv_ros2_msgs::srv::builder::Init_LoadMapAndSwitchCslam_Response_success();
}

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__SRV__DETAIL__LOAD_MAP_AND_SWITCH_CSLAM__BUILDER_HPP_
