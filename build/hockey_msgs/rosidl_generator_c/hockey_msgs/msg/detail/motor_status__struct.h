// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hockey_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
#define HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorStatus in the package hockey_msgs.
typedef struct hockey_msgs__msg__MotorStatus
{
  double m1effort;
  double m2effort;
  double time_on_path;
} hockey_msgs__msg__MotorStatus;

// Struct for a sequence of hockey_msgs__msg__MotorStatus.
typedef struct hockey_msgs__msg__MotorStatus__Sequence
{
  hockey_msgs__msg__MotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hockey_msgs__msg__MotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
