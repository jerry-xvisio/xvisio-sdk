// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xv_ros2_msgs:msg/Controller.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_HPP_
#define XV_ROS2_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_HPP_

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
# define DEPRECATED__xv_ros2_msgs__msg__Controller __attribute__((deprecated))
#else
# define DEPRECATED__xv_ros2_msgs__msg__Controller __declspec(deprecated)
#endif

namespace xv_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Controller_
{
  using Type = Controller_<ContainerAllocator>;

  explicit Controller_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keytrigger = 0;
      this->keyside = 0;
      this->rockerx = 0;
      this->rockery = 0;
      this->key = 0;
    }
  }

  explicit Controller_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->keytrigger = 0;
      this->keyside = 0;
      this->rockerx = 0;
      this->rockery = 0;
      this->key = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _keytrigger_type =
    uint8_t;
  _keytrigger_type keytrigger;
  using _keyside_type =
    uint8_t;
  _keyside_type keyside;
  using _rockerx_type =
    uint16_t;
  _rockerx_type rockerx;
  using _rockery_type =
    uint16_t;
  _rockery_type rockery;
  using _key_type =
    uint8_t;
  _key_type key;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__keytrigger(
    const uint8_t & _arg)
  {
    this->keytrigger = _arg;
    return *this;
  }
  Type & set__keyside(
    const uint8_t & _arg)
  {
    this->keyside = _arg;
    return *this;
  }
  Type & set__rockerx(
    const uint16_t & _arg)
  {
    this->rockerx = _arg;
    return *this;
  }
  Type & set__rockery(
    const uint16_t & _arg)
  {
    this->rockery = _arg;
    return *this;
  }
  Type & set__key(
    const uint8_t & _arg)
  {
    this->key = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xv_ros2_msgs::msg::Controller_<ContainerAllocator> *;
  using ConstRawPtr =
    const xv_ros2_msgs::msg::Controller_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xv_ros2_msgs::msg::Controller_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xv_ros2_msgs::msg::Controller_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::msg::Controller_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::msg::Controller_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::msg::Controller_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::msg::Controller_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xv_ros2_msgs::msg::Controller_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xv_ros2_msgs::msg::Controller_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xv_ros2_msgs__msg__Controller
    std::shared_ptr<xv_ros2_msgs::msg::Controller_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xv_ros2_msgs__msg__Controller
    std::shared_ptr<xv_ros2_msgs::msg::Controller_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Controller_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->keytrigger != other.keytrigger) {
      return false;
    }
    if (this->keyside != other.keyside) {
      return false;
    }
    if (this->rockerx != other.rockerx) {
      return false;
    }
    if (this->rockery != other.rockery) {
      return false;
    }
    if (this->key != other.key) {
      return false;
    }
    return true;
  }
  bool operator!=(const Controller_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Controller_

// alias to use template instance with default allocator
using Controller =
  xv_ros2_msgs::msg::Controller_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__MSG__DETAIL__CONTROLLER__STRUCT_HPP_
