// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hw4_interface:msg/Turtle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hw4_interface/msg/detail/turtle__rosidl_typesupport_introspection_c.h"
#include "hw4_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hw4_interface/msg/detail/turtle__functions.h"
#include "hw4_interface/msg/detail/turtle__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hw4_interface__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw4_interface__msg__Turtle__init(message_memory);
}

void hw4_interface__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_fini_function(void * message_memory)
{
  hw4_interface__msg__Turtle__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hw4_interface__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interface__msg__Turtle, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interface__msg__Turtle, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interface__msg__Turtle, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw4_interface__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_members = {
  "hw4_interface__msg",  // message namespace
  "Turtle",  // message name
  3,  // number of fields
  sizeof(hw4_interface__msg__Turtle),
  hw4_interface__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_member_array,  // message members
  hw4_interface__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_init_function,  // function to initialize message memory (memory has to be allocated)
  hw4_interface__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw4_interface__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_type_support_handle = {
  0,
  &hw4_interface__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interface, msg, Turtle)() {
  if (!hw4_interface__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_type_support_handle.typesupport_identifier) {
    hw4_interface__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw4_interface__msg__Turtle__rosidl_typesupport_introspection_c__Turtle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
