// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hockey_msgs:msg/NextPath.idl
// generated code does not contain a copyright notice

#ifndef HOCKEY_MSGS__MSG__DETAIL__NEXT_PATH__STRUCT_H_
#define HOCKEY_MSGS__MSG__DETAIL__NEXT_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NextPath in the package hockey_msgs.
typedef struct hockey_msgs__msg__NextPath
{
  double x;
  double y;
  double vx;
  double vy;
  double ax;
  double ay;
  double t;
} hockey_msgs__msg__NextPath;

// Struct for a sequence of hockey_msgs__msg__NextPath.
typedef struct hockey_msgs__msg__NextPath__Sequence
{
  hockey_msgs__msg__NextPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hockey_msgs__msg__NextPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOCKEY_MSGS__MSG__DETAIL__NEXT_PATH__STRUCT_H_
