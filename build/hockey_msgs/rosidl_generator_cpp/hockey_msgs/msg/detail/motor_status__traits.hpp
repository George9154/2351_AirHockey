// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hockey_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
#define HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_

#include "hockey_msgs/msg/detail/motor_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hockey_msgs::msg::MotorStatus>()
{
  return "hockey_msgs::msg::MotorStatus";
}

template<>
inline const char * name<hockey_msgs::msg::MotorStatus>()
{
  return "hockey_msgs/msg/MotorStatus";
}

template<>
struct has_fixed_size<hockey_msgs::msg::MotorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hockey_msgs::msg::MotorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hockey_msgs::msg::MotorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
