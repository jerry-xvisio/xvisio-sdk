// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xv_ros2_msgs:srv/GetPoseAt.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__GET_POSE_AT__STRUCT_HPP_
#define XV_ROS2_MSGS__SRV__DETAIL__GET_POSE_AT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__xv_ros2_msgs__srv__GetPoseAt_Request __attribute__((deprecated))
#else
# define DEPRECATED__xv_ros2_msgs__srv__GetPoseAt_Request __declspec(deprecated)
#endif

namespace xv_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPoseAt_Request_
{
  using Type = GetPoseAt_Request_<ContainerAllocator>;

  explicit GetPoseAt_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    (void)_init;
  }

  explicit GetPoseAt_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xv_ros2_msgs::srv::GetPoseAt_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const xv_ros2_msgs::srv::GetPoseAt_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::GetPoseAt_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::GetPoseAt_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::GetPoseAt_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::GetPoseAt_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::GetPoseAt_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::GetPoseAt_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::GetPoseAt_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::GetPoseAt_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xv_ros2_msgs__srv__GetPoseAt_Request
    std::shared_ptr<xv_ros2_msgs::srv::GetPoseAt_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xv_ros2_msgs__srv__GetPoseAt_Request
    std::shared_ptr<xv_ros2_msgs::srv::GetPoseAt_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPoseAt_Request_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPoseAt_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPoseAt_Request_

// alias to use template instance with default allocator
using GetPoseAt_Request =
  xv_ros2_msgs::srv::GetPoseAt_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xv_ros2_msgs


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__xv_ros2_msgs__srv__GetPoseAt_Response __attribute__((deprecated))
#else
# define DEPRECATED__xv_ros2_msgs__srv__GetPoseAt_Response __declspec(deprecated)
#endif

namespace xv_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPoseAt_Response_
{
  using Type = GetPoseAt_Response_<ContainerAllocator>;

  explicit GetPoseAt_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit GetPoseAt_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xv_ros2_msgs::srv::GetPoseAt_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const xv_ros2_msgs::srv::GetPoseAt_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::GetPoseAt_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::GetPoseAt_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::GetPoseAt_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::GetPoseAt_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::GetPoseAt_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::GetPoseAt_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::GetPoseAt_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::GetPoseAt_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xv_ros2_msgs__srv__GetPoseAt_Response
    std::shared_ptr<xv_ros2_msgs::srv::GetPoseAt_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xv_ros2_msgs__srv__GetPoseAt_Response
    std::shared_ptr<xv_ros2_msgs::srv::GetPoseAt_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPoseAt_Response_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPoseAt_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPoseAt_Response_

// alias to use template instance with default allocator
using GetPoseAt_Response =
  xv_ros2_msgs::srv::GetPoseAt_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xv_ros2_msgs

namespace xv_ros2_msgs
{

namespace srv
{

struct GetPoseAt
{
  using Request = xv_ros2_msgs::srv::GetPoseAt_Request;
  using Response = xv_ros2_msgs::srv::GetPoseAt_Response;
};

}  // namespace srv

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__SRV__DETAIL__GET_POSE_AT__STRUCT_HPP_
