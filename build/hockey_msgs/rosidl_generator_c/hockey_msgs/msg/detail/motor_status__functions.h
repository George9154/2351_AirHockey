// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hockey_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__FUNCTIONS_H_
#define HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hockey_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hockey_msgs/msg/detail/motor_status__struct.h"

/// Initialize msg/MotorStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hockey_msgs__msg__MotorStatus
 * )) before or use
 * hockey_msgs__msg__MotorStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hockey_msgs
bool
hockey_msgs__msg__MotorStatus__init(hockey_msgs__msg__MotorStatus * msg);

/// Finalize msg/MotorStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hockey_msgs
void
hockey_msgs__msg__MotorStatus__fini(hockey_msgs__msg__MotorStatus * msg);

/// Create msg/MotorStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hockey_msgs__msg__MotorStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hockey_msgs
hockey_msgs__msg__MotorStatus *
hockey_msgs__msg__MotorStatus__create();

/// Destroy msg/MotorStatus message.
/**
 * It calls
 * hockey_msgs__msg__MotorStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hockey_msgs
void
hockey_msgs__msg__MotorStatus__destroy(hockey_msgs__msg__MotorStatus * msg);


/// Initialize array of msg/MotorStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * hockey_msgs__msg__MotorStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hockey_msgs
bool
hockey_msgs__msg__MotorStatus__Sequence__init(hockey_msgs__msg__MotorStatus__Sequence * array, size_t size);

/// Finalize array of msg/MotorStatus messages.
/**
 * It calls
 * hockey_msgs__msg__MotorStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hockey_msgs
void
hockey_msgs__msg__MotorStatus__Sequence__fini(hockey_msgs__msg__MotorStatus__Sequence * array);

/// Create array of msg/MotorStatus messages.
/**
 * It allocates the memory for the array and calls
 * hockey_msgs__msg__MotorStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hockey_msgs
hockey_msgs__msg__MotorStatus__Sequence *
hockey_msgs__msg__MotorStatus__Sequence__create(size_t size);

/// Destroy array of msg/MotorStatus messages.
/**
 * It calls
 * hockey_msgs__msg__MotorStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hockey_msgs
void
hockey_msgs__msg__MotorStatus__Sequence__destroy(hockey_msgs__msg__MotorStatus__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // HOCKEY_MSGS__MSG__DETAIL__MOTOR_STATUS__FUNCTIONS_H_
