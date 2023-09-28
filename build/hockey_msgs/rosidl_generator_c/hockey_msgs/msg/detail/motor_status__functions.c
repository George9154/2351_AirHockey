// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hockey_msgs:msg/MotorStatus.idl
// generated code does not contain a copyright notice
#include "hockey_msgs/msg/detail/motor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
hockey_msgs__msg__MotorStatus__init(hockey_msgs__msg__MotorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // m1effort
  // m2effort
  // time_on_path
  return true;
}

void
hockey_msgs__msg__MotorStatus__fini(hockey_msgs__msg__MotorStatus * msg)
{
  if (!msg) {
    return;
  }
  // m1effort
  // m2effort
  // time_on_path
}

hockey_msgs__msg__MotorStatus *
hockey_msgs__msg__MotorStatus__create()
{
  hockey_msgs__msg__MotorStatus * msg = (hockey_msgs__msg__MotorStatus *)malloc(sizeof(hockey_msgs__msg__MotorStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hockey_msgs__msg__MotorStatus));
  bool success = hockey_msgs__msg__MotorStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
hockey_msgs__msg__MotorStatus__destroy(hockey_msgs__msg__MotorStatus * msg)
{
  if (msg) {
    hockey_msgs__msg__MotorStatus__fini(msg);
  }
  free(msg);
}


bool
hockey_msgs__msg__MotorStatus__Sequence__init(hockey_msgs__msg__MotorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  hockey_msgs__msg__MotorStatus * data = NULL;
  if (size) {
    data = (hockey_msgs__msg__MotorStatus *)calloc(size, sizeof(hockey_msgs__msg__MotorStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hockey_msgs__msg__MotorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hockey_msgs__msg__MotorStatus__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hockey_msgs__msg__MotorStatus__Sequence__fini(hockey_msgs__msg__MotorStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hockey_msgs__msg__MotorStatus__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hockey_msgs__msg__MotorStatus__Sequence *
hockey_msgs__msg__MotorStatus__Sequence__create(size_t size)
{
  hockey_msgs__msg__MotorStatus__Sequence * array = (hockey_msgs__msg__MotorStatus__Sequence *)malloc(sizeof(hockey_msgs__msg__MotorStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = hockey_msgs__msg__MotorStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
hockey_msgs__msg__MotorStatus__Sequence__destroy(hockey_msgs__msg__MotorStatus__Sequence * array)
{
  if (array) {
    hockey_msgs__msg__MotorStatus__Sequence__fini(array);
  }
  free(array);
}
