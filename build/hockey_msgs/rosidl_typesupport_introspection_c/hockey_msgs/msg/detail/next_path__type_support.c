// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hockey_msgs:msg/NextPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hockey_msgs/msg/detail/next_path__rosidl_typesupport_introspection_c.h"
#include "hockey_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hockey_msgs/msg/detail/next_path__functions.h"
#include "hockey_msgs/msg/detail/next_path__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void NextPath__rosidl_typesupport_introspection_c__NextPath_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hockey_msgs__msg__NextPath__init(message_memory);
}

void NextPath__rosidl_typesupport_introspection_c__NextPath_fini_function(void * message_memory)
{
  hockey_msgs__msg__NextPath__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NextPath__rosidl_typesupport_introspection_c__NextPath_message_member_array[7] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hockey_msgs__msg__NextPath, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hockey_msgs__msg__NextPath, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hockey_msgs__msg__NextPath, vx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hockey_msgs__msg__NextPath, vy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ax",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hockey_msgs__msg__NextPath, ax),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ay",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hockey_msgs__msg__NextPath, ay),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hockey_msgs__msg__NextPath, t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NextPath__rosidl_typesupport_introspection_c__NextPath_message_members = {
  "hockey_msgs__msg",  // message namespace
  "NextPath",  // message name
  7,  // number of fields
  sizeof(hockey_msgs__msg__NextPath),
  NextPath__rosidl_typesupport_introspection_c__NextPath_message_member_array,  // message members
  NextPath__rosidl_typesupport_introspection_c__NextPath_init_function,  // function to initialize message memory (memory has to be allocated)
  NextPath__rosidl_typesupport_introspection_c__NextPath_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NextPath__rosidl_typesupport_introspection_c__NextPath_message_type_support_handle = {
  0,
  &NextPath__rosidl_typesupport_introspection_c__NextPath_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hockey_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hockey_msgs, msg, NextPath)() {
  if (!NextPath__rosidl_typesupport_introspection_c__NextPath_message_type_support_handle.typesupport_identifier) {
    NextPath__rosidl_typesupport_introspection_c__NextPath_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NextPath__rosidl_typesupport_introspection_c__NextPath_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
