// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hockey_msgs:msg/NextPath.idl
// generated code does not contain a copyright notice

#ifndef HOCKEY_MSGS__MSG__DETAIL__NEXT_PATH__STRUCT_HPP_
#define HOCKEY_MSGS__MSG__DETAIL__NEXT_PATH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hockey_msgs__msg__NextPath __attribute__((deprecated))
#else
# define DEPRECATED__hockey_msgs__msg__NextPath __declspec(deprecated)
#endif

namespace hockey_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NextPath_
{
  using Type = NextPath_<ContainerAllocator>;

  explicit NextPath_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->vx = 0.0;
      this->vy = 0.0;
      this->ax = 0.0;
      this->ay = 0.0;
      this->t = 0.0;
    }
  }

  explicit NextPath_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->vx = 0.0;
      this->vy = 0.0;
      this->ax = 0.0;
      this->ay = 0.0;
      this->t = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _vx_type =
    double;
  _vx_type vx;
  using _vy_type =
    double;
  _vy_type vy;
  using _ax_type =
    double;
  _ax_type ax;
  using _ay_type =
    double;
  _ay_type ay;
  using _t_type =
    double;
  _t_type t;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__vx(
    const double & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const double & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__ax(
    const double & _arg)
  {
    this->ax = _arg;
    return *this;
  }
  Type & set__ay(
    const double & _arg)
  {
    this->ay = _arg;
    return *this;
  }
  Type & set__t(
    const double & _arg)
  {
    this->t = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hockey_msgs::msg::NextPath_<ContainerAllocator> *;
  using ConstRawPtr =
    const hockey_msgs::msg::NextPath_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hockey_msgs::msg::NextPath_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hockey_msgs::msg::NextPath_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hockey_msgs::msg::NextPath_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hockey_msgs::msg::NextPath_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hockey_msgs::msg::NextPath_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hockey_msgs::msg::NextPath_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hockey_msgs::msg::NextPath_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hockey_msgs::msg::NextPath_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hockey_msgs__msg__NextPath
    std::shared_ptr<hockey_msgs::msg::NextPath_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hockey_msgs__msg__NextPath
    std::shared_ptr<hockey_msgs::msg::NextPath_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NextPath_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->ax != other.ax) {
      return false;
    }
    if (this->ay != other.ay) {
      return false;
    }
    if (this->t != other.t) {
      return false;
    }
    return true;
  }
  bool operator!=(const NextPath_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NextPath_

// alias to use template instance with default allocator
using NextPath =
  hockey_msgs::msg::NextPath_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hockey_msgs

#endif  // HOCKEY_MSGS__MSG__DETAIL__NEXT_PATH__STRUCT_HPP_
