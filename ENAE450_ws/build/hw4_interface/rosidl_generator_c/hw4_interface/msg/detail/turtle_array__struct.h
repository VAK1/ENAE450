// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hw4_interface:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef HW4_INTERFACE__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
#define HW4_INTERFACE__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'array'
#include "hw4_interface/msg/detail/turtle__struct.h"

/// Struct defined in msg/TurtleArray in the package hw4_interface.
typedef struct hw4_interface__msg__TurtleArray
{
  hw4_interface__msg__Turtle__Sequence array;
} hw4_interface__msg__TurtleArray;

// Struct for a sequence of hw4_interface__msg__TurtleArray.
typedef struct hw4_interface__msg__TurtleArray__Sequence
{
  hw4_interface__msg__TurtleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interface__msg__TurtleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HW4_INTERFACE__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
