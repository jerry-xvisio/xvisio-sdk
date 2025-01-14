// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xv_ros2_msgs:msg/ButtonMsg.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__BUTTON_MSG__STRUCT_HPP_
#define XV_ROS2_MSGS__MSG__DETAIL__BUTTON_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__xv_ros2_msgs__msg__ButtonMsg __attribute__((deprecated))
#else
# define DEPRECATED__xv_ros2_msgs__msg__ButtonMsg __declspec(deprecated)
#endif

namespace xv_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ButtonMsg_
{
  using Type = ButtonMsg_<ContainerAllocator>;

  explicit ButtonMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = false;
    }
  }

  explicit ButtonMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xv_ros2_msgs::msg::ButtonMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const xv_ros2_msgs::msg::ButtonMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xv_ros2_msgs::msg::ButtonMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xv_ros2_msgs::msg::ButtonMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::msg::ButtonMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::msg::ButtonMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::msg::ButtonMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::msg::ButtonMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xv_ros2_msgs::msg::ButtonMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xv_ros2_msgs::msg::ButtonMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xv_ros2_msgs__msg__ButtonMsg
    std::shared_ptr<xv_ros2_msgs::msg::ButtonMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xv_ros2_msgs__msg__ButtonMsg
    std::shared_ptr<xv_ros2_msgs::msg::ButtonMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ButtonMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ButtonMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ButtonMsg_

// alias to use template instance with default allocator
using ButtonMsg =
  xv_ros2_msgs::msg::ButtonMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__MSG__DETAIL__BUTTON_MSG__STRUCT_HPP_
