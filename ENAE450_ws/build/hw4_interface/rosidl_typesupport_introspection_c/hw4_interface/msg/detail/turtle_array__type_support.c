// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hw4_interface:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hw4_interface/msg/detail/turtle_array__rosidl_typesupport_introspection_c.h"
#include "hw4_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hw4_interface/msg/detail/turtle_array__functions.h"
#include "hw4_interface/msg/detail/turtle_array__struct.h"


// Include directives for member types
// Member `array`
#include "hw4_interface/msg/turtle.h"
// Member `array`
#include "hw4_interface/msg/detail/turtle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__TurtleArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hw4_interface__msg__TurtleArray__init(message_memory);
}

void hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__TurtleArray_fini_function(void * message_memory)
{
  hw4_interface__msg__TurtleArray__fini(message_memory);
}

size_t hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__size_function__TurtleArray__array(
  const void * untyped_member)
{
  const hw4_interface__msg__Turtle__Sequence * member =
    (const hw4_interface__msg__Turtle__Sequence *)(untyped_member);
  return member->size;
}

const void * hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__get_const_function__TurtleArray__array(
  const void * untyped_member, size_t index)
{
  const hw4_interface__msg__Turtle__Sequence * member =
    (const hw4_interface__msg__Turtle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__get_function__TurtleArray__array(
  void * untyped_member, size_t index)
{
  hw4_interface__msg__Turtle__Sequence * member =
    (hw4_interface__msg__Turtle__Sequence *)(untyped_member);
  return &member->data[index];
}

void hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__fetch_function__TurtleArray__array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hw4_interface__msg__Turtle * item =
    ((const hw4_interface__msg__Turtle *)
    hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__get_const_function__TurtleArray__array(untyped_member, index));
  hw4_interface__msg__Turtle * value =
    (hw4_interface__msg__Turtle *)(untyped_value);
  *value = *item;
}

void hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__assign_function__TurtleArray__array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hw4_interface__msg__Turtle * item =
    ((hw4_interface__msg__Turtle *)
    hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__get_function__TurtleArray__array(untyped_member, index));
  const hw4_interface__msg__Turtle * value =
    (const hw4_interface__msg__Turtle *)(untyped_value);
  *item = *value;
}

bool hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__resize_function__TurtleArray__array(
  void * untyped_member, size_t size)
{
  hw4_interface__msg__Turtle__Sequence * member =
    (hw4_interface__msg__Turtle__Sequence *)(untyped_member);
  hw4_interface__msg__Turtle__Sequence__fini(member);
  return hw4_interface__msg__Turtle__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__TurtleArray_message_member_array[1] = {
  {
    "array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hw4_interface__msg__TurtleArray, array),  // bytes offset in struct
    NULL,  // default value
    hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__size_function__TurtleArray__array,  // size() function pointer
    hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__get_const_function__TurtleArray__array,  // get_const(index) function pointer
    hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__get_function__TurtleArray__array,  // get(index) function pointer
    hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__fetch_function__TurtleArray__array,  // fetch(index, &value) function pointer
    hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__assign_function__TurtleArray__array,  // assign(index, value) function pointer
    hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__resize_function__TurtleArray__array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__TurtleArray_message_members = {
  "hw4_interface__msg",  // message namespace
  "TurtleArray",  // message name
  1,  // number of fields
  sizeof(hw4_interface__msg__TurtleArray),
  hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__TurtleArray_message_member_array,  // message members
  hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__TurtleArray_init_function,  // function to initialize message memory (memory has to be allocated)
  hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__TurtleArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__TurtleArray_message_type_support_handle = {
  0,
  &hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__TurtleArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hw4_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interface, msg, TurtleArray)() {
  hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__TurtleArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hw4_interface, msg, Turtle)();
  if (!hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__TurtleArray_message_type_support_handle.typesupport_identifier) {
    hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__TurtleArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hw4_interface__msg__TurtleArray__rosidl_typesupport_introspection_c__TurtleArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
