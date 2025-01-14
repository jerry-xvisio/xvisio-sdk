// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xv_ros2_msgs:msg/OrientationStamped.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__ORIENTATION_STAMPED__STRUCT_HPP_
#define XV_ROS2_MSGS__MSG__DETAIL__ORIENTATION_STAMPED__STRUCT_HPP_

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
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__xv_ros2_msgs__msg__OrientationStamped __attribute__((deprecated))
#else
# define DEPRECATED__xv_ros2_msgs__msg__OrientationStamped __declspec(deprecated)
#endif

namespace xv_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OrientationStamped_
{
  using Type = OrientationStamped_<ContainerAllocator>;

  explicit OrientationStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    quaternion(_init),
    angular_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->matrix.begin(), this->matrix.end(), 0.0);
    }
  }

  explicit OrientationStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    matrix(_alloc),
    quaternion(_alloc, _init),
    angular_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->matrix.begin(), this->matrix.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _matrix_type =
    std::array<double, 9>;
  _matrix_type matrix;
  using _quaternion_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _quaternion_type quaternion;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__matrix(
    const std::array<double, 9> & _arg)
  {
    this->matrix = _arg;
    return *this;
  }
  Type & set__quaternion(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->quaternion = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xv_ros2_msgs__msg__OrientationStamped
    std::shared_ptr<xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xv_ros2_msgs__msg__OrientationStamped
    std::shared_ptr<xv_ros2_msgs::msg::OrientationStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrientationStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->matrix != other.matrix) {
      return false;
    }
    if (this->quaternion != other.quaternion) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrientationStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrientationStamped_

// alias to use template instance with default allocator
using OrientationStamped =
  xv_ros2_msgs::msg::OrientationStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__MSG__DETAIL__ORIENTATION_STAMPED__STRUCT_HPP_
