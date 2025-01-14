// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xv_ros2_msgs:srv/LoadMapAndSwitchCslam.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__LOAD_MAP_AND_SWITCH_CSLAM__STRUCT_HPP_
#define XV_ROS2_MSGS__SRV__DETAIL__LOAD_MAP_AND_SWITCH_CSLAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request __attribute__((deprecated))
#else
# define DEPRECATED__xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request __declspec(deprecated)
#endif

namespace xv_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadMapAndSwitchCslam_Request_
{
  using Type = LoadMapAndSwitchCslam_Request_<ContainerAllocator>;

  explicit LoadMapAndSwitchCslam_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  explicit LoadMapAndSwitchCslam_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filename(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  // field types and members
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filename_type filename;

  // setters for named parameter idiom
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filename = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request
    std::shared_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Request
    std::shared_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadMapAndSwitchCslam_Request_ & other) const
  {
    if (this->filename != other.filename) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadMapAndSwitchCslam_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadMapAndSwitchCslam_Request_

// alias to use template instance with default allocator
using LoadMapAndSwitchCslam_Request =
  xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xv_ros2_msgs


#ifndef _WIN32
# define DEPRECATED__xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response __attribute__((deprecated))
#else
# define DEPRECATED__xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response __declspec(deprecated)
#endif

namespace xv_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadMapAndSwitchCslam_Response_
{
  using Type = LoadMapAndSwitchCslam_Response_<ContainerAllocator>;

  explicit LoadMapAndSwitchCslam_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit LoadMapAndSwitchCslam_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response
    std::shared_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xv_ros2_msgs__srv__LoadMapAndSwitchCslam_Response
    std::shared_ptr<xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadMapAndSwitchCslam_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadMapAndSwitchCslam_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadMapAndSwitchCslam_Response_

// alias to use template instance with default allocator
using LoadMapAndSwitchCslam_Response =
  xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xv_ros2_msgs

namespace xv_ros2_msgs
{

namespace srv
{

struct LoadMapAndSwitchCslam
{
  using Request = xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Request;
  using Response = xv_ros2_msgs::srv::LoadMapAndSwitchCslam_Response;
};

}  // namespace srv

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__SRV__DETAIL__LOAD_MAP_AND_SWITCH_CSLAM__STRUCT_HPP_
