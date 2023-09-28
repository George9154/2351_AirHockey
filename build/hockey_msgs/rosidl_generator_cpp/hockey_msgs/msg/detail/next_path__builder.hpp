// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hockey_msgs:msg/NextPath.idl
// generated code does not contain a copyright notice

#ifndef HOCKEY_MSGS__MSG__DETAIL__NEXT_PATH__BUILDER_HPP_
#define HOCKEY_MSGS__MSG__DETAIL__NEXT_PATH__BUILDER_HPP_

#include "hockey_msgs/msg/detail/next_path__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hockey_msgs
{

namespace msg
{

namespace builder
{

class Init_NextPath_t
{
public:
  explicit Init_NextPath_t(::hockey_msgs::msg::NextPath & msg)
  : msg_(msg)
  {}
  ::hockey_msgs::msg::NextPath t(::hockey_msgs::msg::NextPath::_t_type arg)
  {
    msg_.t = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hockey_msgs::msg::NextPath msg_;
};

class Init_NextPath_ay
{
public:
  explicit Init_NextPath_ay(::hockey_msgs::msg::NextPath & msg)
  : msg_(msg)
  {}
  Init_NextPath_t ay(::hockey_msgs::msg::NextPath::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_NextPath_t(msg_);
  }

private:
  ::hockey_msgs::msg::NextPath msg_;
};

class Init_NextPath_ax
{
public:
  explicit Init_NextPath_ax(::hockey_msgs::msg::NextPath & msg)
  : msg_(msg)
  {}
  Init_NextPath_ay ax(::hockey_msgs::msg::NextPath::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_NextPath_ay(msg_);
  }

private:
  ::hockey_msgs::msg::NextPath msg_;
};

class Init_NextPath_vy
{
public:
  explicit Init_NextPath_vy(::hockey_msgs::msg::NextPath & msg)
  : msg_(msg)
  {}
  Init_NextPath_ax vy(::hockey_msgs::msg::NextPath::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_NextPath_ax(msg_);
  }

private:
  ::hockey_msgs::msg::NextPath msg_;
};

class Init_NextPath_vx
{
public:
  explicit Init_NextPath_vx(::hockey_msgs::msg::NextPath & msg)
  : msg_(msg)
  {}
  Init_NextPath_vy vx(::hockey_msgs::msg::NextPath::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_NextPath_vy(msg_);
  }

private:
  ::hockey_msgs::msg::NextPath msg_;
};

class Init_NextPath_y
{
public:
  explicit Init_NextPath_y(::hockey_msgs::msg::NextPath & msg)
  : msg_(msg)
  {}
  Init_NextPath_vx y(::hockey_msgs::msg::NextPath::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_NextPath_vx(msg_);
  }

private:
  ::hockey_msgs::msg::NextPath msg_;
};

class Init_NextPath_x
{
public:
  Init_NextPath_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NextPath_y x(::hockey_msgs::msg::NextPath::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_NextPath_y(msg_);
  }

private:
  ::hockey_msgs::msg::NextPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hockey_msgs::msg::NextPath>()
{
  return hockey_msgs::msg::builder::Init_NextPath_x();
}

}  // namespace hockey_msgs

#endif  // HOCKEY_MSGS__MSG__DETAIL__NEXT_PATH__BUILDER_HPP_
