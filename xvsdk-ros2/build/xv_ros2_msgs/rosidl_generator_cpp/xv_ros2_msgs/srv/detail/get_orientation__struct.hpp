// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xv_ros2_msgs:srv/GetOrientation.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION__STRUCT_HPP_
#define XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'prediction'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__xv_ros2_msgs__srv__GetOrientation_Request __attribute__((deprecated))
#else
# define DEPRECATED__xv_ros2_msgs__srv__GetOrientation_Request __declspec(deprecated)
#endif

namespace xv_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetOrientation_Request_
{
  using Type = GetOrientation_Request_<ContainerAllocator>;

  explicit GetOrientation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prediction(_init)
  {
    (void)_init;
  }

  explicit GetOrientation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prediction(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _prediction_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _prediction_type prediction;

  // setters for named parameter idiom
  Type & set__prediction(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->prediction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xv_ros2_msgs::srv::GetOrientation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const xv_ros2_msgs::srv::GetOrientation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::GetOrientation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::GetOrientation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::GetOrientation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::GetOrientation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::GetOrientation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::GetOrientation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::GetOrientation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::GetOrientation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xv_ros2_msgs__srv__GetOrientation_Request
    std::shared_ptr<xv_ros2_msgs::srv::GetOrientation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xv_ros2_msgs__srv__GetOrientation_Request
    std::shared_ptr<xv_ros2_msgs::srv::GetOrientation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetOrientation_Request_ & other) const
  {
    if (this->prediction != other.prediction) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetOrientation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetOrientation_Request_

// alias to use template instance with default allocator
using GetOrientation_Request =
  xv_ros2_msgs::srv::GetOrientation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xv_ros2_msgs


// Include directives for member types
// Member 'orientation'
#include "xv_ros2_msgs/msg/detail/orientation_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__xv_ros2_msgs__srv__GetOrientation_Response __attribute__((deprecated))
#else
# define DEPRECATED__xv_ros2_msgs__srv__GetOrientation_Response __declspec(deprecated)
#endif

namespace xv_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetOrientation_Response_
{
  using Type = GetOrientation_Response_<ContainerAllocator>;

  explicit GetOrientation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : orientation(_init)
  {
    (void)_init;
  }

  explicit GetOrientation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : orientation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _orientation_type =
    xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator>;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__orientation(
    const xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xv_ros2_msgs::srv::GetOrientation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const xv_ros2_msgs::srv::GetOrientation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::GetOrientation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::GetOrientation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::GetOrientation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::GetOrientation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::GetOrientation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::GetOrientation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::GetOrientation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::GetOrientation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xv_ros2_msgs__srv__GetOrientation_Response
    std::shared_ptr<xv_ros2_msgs::srv::GetOrientation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xv_ros2_msgs__srv__GetOrientation_Response
    std::shared_ptr<xv_ros2_msgs::srv::GetOrientation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetOrientation_Response_ & other) const
  {
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetOrientation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetOrientation_Response_

// alias to use template instance with default allocator
using GetOrientation_Response =
  xv_ros2_msgs::srv::GetOrientation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xv_ros2_msgs

namespace xv_ros2_msgs
{

namespace srv
{

struct GetOrientation
{
  using Request = xv_ros2_msgs::srv::GetOrientation_Request;
  using Response = xv_ros2_msgs::srv::GetOrientation_Response;
};

}  // namespace srv

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__SRV__DETAIL__GET_ORIENTATION__STRUCT_HPP_
