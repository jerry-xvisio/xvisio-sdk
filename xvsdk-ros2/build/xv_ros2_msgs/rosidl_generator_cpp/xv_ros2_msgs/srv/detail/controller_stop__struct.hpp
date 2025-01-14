// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xv_ros2_msgs:srv/ControllerStop.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__SRV__DETAIL__CONTROLLER_STOP__STRUCT_HPP_
#define XV_ROS2_MSGS__SRV__DETAIL__CONTROLLER_STOP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xv_ros2_msgs__srv__ControllerStop_Request __attribute__((deprecated))
#else
# define DEPRECATED__xv_ros2_msgs__srv__ControllerStop_Request __declspec(deprecated)
#endif

namespace xv_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControllerStop_Request_
{
  using Type = ControllerStop_Request_<ContainerAllocator>;

  explicit ControllerStop_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ControllerStop_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    xv_ros2_msgs::srv::ControllerStop_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const xv_ros2_msgs::srv::ControllerStop_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::ControllerStop_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::ControllerStop_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::ControllerStop_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::ControllerStop_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::ControllerStop_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::ControllerStop_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::ControllerStop_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::ControllerStop_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xv_ros2_msgs__srv__ControllerStop_Request
    std::shared_ptr<xv_ros2_msgs::srv::ControllerStop_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xv_ros2_msgs__srv__ControllerStop_Request
    std::shared_ptr<xv_ros2_msgs::srv::ControllerStop_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerStop_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerStop_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerStop_Request_

// alias to use template instance with default allocator
using ControllerStop_Request =
  xv_ros2_msgs::srv::ControllerStop_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xv_ros2_msgs


#ifndef _WIN32
# define DEPRECATED__xv_ros2_msgs__srv__ControllerStop_Response __attribute__((deprecated))
#else
# define DEPRECATED__xv_ros2_msgs__srv__ControllerStop_Response __declspec(deprecated)
#endif

namespace xv_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControllerStop_Response_
{
  using Type = ControllerStop_Response_<ContainerAllocator>;

  explicit ControllerStop_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ControllerStop_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    xv_ros2_msgs::srv::ControllerStop_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const xv_ros2_msgs::srv::ControllerStop_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::ControllerStop_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xv_ros2_msgs::srv::ControllerStop_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::ControllerStop_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::ControllerStop_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::srv::ControllerStop_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::srv::ControllerStop_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::ControllerStop_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xv_ros2_msgs::srv::ControllerStop_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xv_ros2_msgs__srv__ControllerStop_Response
    std::shared_ptr<xv_ros2_msgs::srv::ControllerStop_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xv_ros2_msgs__srv__ControllerStop_Response
    std::shared_ptr<xv_ros2_msgs::srv::ControllerStop_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerStop_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerStop_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerStop_Response_

// alias to use template instance with default allocator
using ControllerStop_Response =
  xv_ros2_msgs::srv::ControllerStop_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xv_ros2_msgs

namespace xv_ros2_msgs
{

namespace srv
{

struct ControllerStop
{
  using Request = xv_ros2_msgs::srv::ControllerStop_Request;
  using Response = xv_ros2_msgs::srv::ControllerStop_Response;
};

}  // namespace srv

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__SRV__DETAIL__CONTROLLER_STOP__STRUCT_HPP_
