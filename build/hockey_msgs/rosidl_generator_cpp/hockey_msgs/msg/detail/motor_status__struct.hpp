// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hockey_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
#define HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hockey_msgs__msg__MotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__hockey_msgs__msg__MotorStatus __declspec(deprecated)
#endif

namespace hockey_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatus_
{
  using Type = MotorStatus_<ContainerAllocator>;

  explicit MotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m1effort = 0.0;
      this->m2effort = 0.0;
      this->time_on_path = 0.0;
    }
  }

  explicit MotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m1effort = 0.0;
      this->m2effort = 0.0;
      this->time_on_path = 0.0;
    }
  }

  // field types and members
  using _m1effort_type =
    double;
  _m1effort_type m1effort;
  using _m2effort_type =
    double;
  _m2effort_type m2effort;
  using _time_on_path_type =
    double;
  _time_on_path_type time_on_path;

  // setters for named parameter idiom
  Type & set__m1effort(
    const double & _arg)
  {
    this->m1effort = _arg;
    return *this;
  }
  Type & set__m2effort(
    const double & _arg)
  {
    this->m2effort = _arg;
    return *this;
  }
  Type & set__time_on_path(
    const double & _arg)
  {
    this->time_on_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hockey_msgs::msg::MotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const hockey_msgs::msg::MotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hockey_msgs::msg::MotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hockey_msgs::msg::MotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hockey_msgs::msg::MotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hockey_msgs::msg::MotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hockey_msgs::msg::MotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hockey_msgs::msg::MotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hockey_msgs::msg::MotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hockey_msgs::msg::MotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hockey_msgs__msg__MotorStatus
    std::shared_ptr<hockey_msgs::msg::MotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hockey_msgs__msg__MotorStatus
    std::shared_ptr<hockey_msgs::msg::MotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatus_ & other) const
  {
    if (this->m1effort != other.m1effort) {
      return false;
    }
    if (this->m2effort != other.m2effort) {
      return false;
    }
    if (this->time_on_path != other.time_on_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatus_

// alias to use template instance with default allocator
using MotorStatus =
  hockey_msgs::msg::MotorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hockey_msgs

#endif  // HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
