// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xv_ros2_msgs:msg/ColorDepth.idl
// generated code does not contain a copyright notice

#ifndef XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__STRUCT_HPP_
#define XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__STRUCT_HPP_

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
# define DEPRECATED__xv_ros2_msgs__msg__ColorDepth __attribute__((deprecated))
#else
# define DEPRECATED__xv_ros2_msgs__msg__ColorDepth __declspec(deprecated)
#endif

namespace xv_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ColorDepth_
{
  using Type = ColorDepth_<ContainerAllocator>;

  explicit ColorDepth_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
    }
  }

  explicit ColorDepth_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _height_type =
    uint32_t;
  _height_type height;
  using _width_type =
    uint32_t;
  _width_type width;
  using _rgb_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _rgb_type rgb;
  using _depth_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _depth_type depth;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__rgb(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->rgb = _arg;
    return *this;
  }
  Type & set__depth(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->depth = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xv_ros2_msgs::msg::ColorDepth_<ContainerAllocator> *;
  using ConstRawPtr =
    const xv_ros2_msgs::msg::ColorDepth_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xv_ros2_msgs::msg::ColorDepth_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xv_ros2_msgs::msg::ColorDepth_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::msg::ColorDepth_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::msg::ColorDepth_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xv_ros2_msgs::msg::ColorDepth_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xv_ros2_msgs::msg::ColorDepth_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xv_ros2_msgs::msg::ColorDepth_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xv_ros2_msgs::msg::ColorDepth_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xv_ros2_msgs__msg__ColorDepth
    std::shared_ptr<xv_ros2_msgs::msg::ColorDepth_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xv_ros2_msgs__msg__ColorDepth
    std::shared_ptr<xv_ros2_msgs::msg::ColorDepth_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorDepth_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->rgb != other.rgb) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorDepth_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorDepth_

// alias to use template instance with default allocator
using ColorDepth =
  xv_ros2_msgs::msg::ColorDepth_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xv_ros2_msgs

#endif  // XV_ROS2_MSGS__MSG__DETAIL__COLOR_DEPTH__STRUCT_HPP_
