// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from hockey_msgs:msg/NextPath.idl
// generated code does not contain a copyright notice

#ifndef HOCKEY_MSGS__MSG__DETAIL__NEXT_PATH__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define HOCKEY_MSGS__MSG__DETAIL__NEXT_PATH__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hockey_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "hockey_msgs/msg/detail/next_path__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace hockey_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hockey_msgs
cdr_serialize(
  const hockey_msgs::msg::NextPath & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hockey_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hockey_msgs::msg::NextPath & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hockey_msgs
get_serialized_size(
  const hockey_msgs::msg::NextPath & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hockey_msgs
max_serialized_size_NextPath(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hockey_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hockey_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hockey_msgs, msg, NextPath)();

#ifdef __cplusplus
}
#endif

#endif  // HOCKEY_MSGS__MSG__DETAIL__NEXT_PATH__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
