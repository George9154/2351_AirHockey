// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hockey_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include "hockey_msgs/msg/detail/motor_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hockey_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_time_on_path
{
public:
  explicit Init_MotorStatus_time_on_path(::hockey_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::hockey_msgs::msg::MotorStatus time_on_path(::hockey_msgs::msg::MotorStatus::_time_on_path_type arg)
  {
    msg_.time_on_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hockey_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_m2effort
{
public:
  explicit Init_MotorStatus_m2effort(::hockey_msgs::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_time_on_path m2effort(::hockey_msgs::msg::MotorStatus::_m2effort_type arg)
  {
    msg_.m2effort = std::move(arg);
    return Init_MotorStatus_time_on_path(msg_);
  }

private:
  ::hockey_msgs::msg::MotorStatus msg_;
};

class Init_MotorStatus_m1effort
{
public:
  Init_MotorStatus_m1effort()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_m2effort m1effort(::hockey_msgs::msg::MotorStatus::_m1effort_type arg)
  {
    msg_.m1effort = std::move(arg);
    return Init_MotorStatus_m2effort(msg_);
  }

private:
  ::hockey_msgs::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hockey_msgs::msg::MotorStatus>()
{
  return hockey_msgs::msg::builder::Init_MotorStatus_m1effort();
}

}  // namespace hockey_msgs

#endif  // HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
