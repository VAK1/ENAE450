// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hw4_interface:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef HW4_INTERFACE__MSG__DETAIL__TURTLE__STRUCT_H_
#define HW4_INTERFACE__MSG__DETAIL__TURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Turtle in the package hw4_interface.
typedef struct hw4_interface__msg__Turtle
{
  rosidl_runtime_c__String name;
  float x;
  float y;
} hw4_interface__msg__Turtle;

// Struct for a sequence of hw4_interface__msg__Turtle.
typedef struct hw4_interface__msg__Turtle__Sequence
{
  hw4_interface__msg__Turtle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interface__msg__Turtle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HW4_INTERFACE__MSG__DETAIL__TURTLE__STRUCT_H_
