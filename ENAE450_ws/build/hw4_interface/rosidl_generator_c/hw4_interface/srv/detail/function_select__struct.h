// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hw4_interface:srv/FunctionSelect.idl
// generated code does not contain a copyright notice

#ifndef HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__STRUCT_H_
#define HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/FunctionSelect in the package hw4_interface.
typedef struct hw4_interface__srv__FunctionSelect_Request
{
  int64_t function_id;
} hw4_interface__srv__FunctionSelect_Request;

// Struct for a sequence of hw4_interface__srv__FunctionSelect_Request.
typedef struct hw4_interface__srv__FunctionSelect_Request__Sequence
{
  hw4_interface__srv__FunctionSelect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interface__srv__FunctionSelect_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FunctionSelect in the package hw4_interface.
typedef struct hw4_interface__srv__FunctionSelect_Response
{
  bool success;
  rosidl_runtime_c__String message;
} hw4_interface__srv__FunctionSelect_Response;

// Struct for a sequence of hw4_interface__srv__FunctionSelect_Response.
typedef struct hw4_interface__srv__FunctionSelect_Response__Sequence
{
  hw4_interface__srv__FunctionSelect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hw4_interface__srv__FunctionSelect_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__STRUCT_H_
