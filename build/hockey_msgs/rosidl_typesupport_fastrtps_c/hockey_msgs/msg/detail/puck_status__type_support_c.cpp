// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hockey_msgs:msg/PuckStatus.idl
// generated code does not contain a copyright notice
#include "hockey_msgs/msg/detail/puck_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hockey_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hockey_msgs/msg/detail/puck_status__struct.h"
#include "hockey_msgs/msg/detail/puck_status__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PuckStatus__ros_msg_type = hockey_msgs__msg__PuckStatus;

static bool _PuckStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PuckStatus__ros_msg_type * ros_message = static_cast<const _PuckStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: x_vel
  {
    cdr << ros_message->x_vel;
  }

  // Field name: y_vel
  {
    cdr << ros_message->y_vel;
  }

  return true;
}

static bool _PuckStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PuckStatus__ros_msg_type * ros_message = static_cast<_PuckStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: x_vel
  {
    cdr >> ros_message->x_vel;
  }

  // Field name: y_vel
  {
    cdr >> ros_message->y_vel;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hockey_msgs
size_t get_serialized_size_hockey_msgs__msg__PuckStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PuckStatus__ros_msg_type * ros_message = static_cast<const _PuckStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_vel
  {
    size_t item_size = sizeof(ros_message->x_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_vel
  {
    size_t item_size = sizeof(ros_message->y_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PuckStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hockey_msgs__msg__PuckStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hockey_msgs
size_t max_serialized_size_hockey_msgs__msg__PuckStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_vel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PuckStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hockey_msgs__msg__PuckStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PuckStatus = {
  "hockey_msgs::msg",
  "PuckStatus",
  _PuckStatus__cdr_serialize,
  _PuckStatus__cdr_deserialize,
  _PuckStatus__get_serialized_size,
  _PuckStatus__max_serialized_size
};

static rosidl_message_type_support_t _PuckStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PuckStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hockey_msgs, msg, PuckStatus)() {
  return &_PuckStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
