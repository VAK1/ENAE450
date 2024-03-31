// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from hw4_interface:srv/FunctionSelect.idl
// generated code does not contain a copyright notice

#ifndef HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hw4_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "hw4_interface/srv/detail/function_select__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace hw4_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw4_interface
cdr_serialize(
  const hw4_interface::srv::FunctionSelect_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw4_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hw4_interface::srv::FunctionSelect_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw4_interface
get_serialized_size(
  const hw4_interface::srv::FunctionSelect_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw4_interface
max_serialized_size_FunctionSelect_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hw4_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw4_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interface, srv, FunctionSelect_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "hw4_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "hw4_interface/srv/detail/function_select__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace hw4_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw4_interface
cdr_serialize(
  const hw4_interface::srv::FunctionSelect_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw4_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hw4_interface::srv::FunctionSelect_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw4_interface
get_serialized_size(
  const hw4_interface::srv::FunctionSelect_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw4_interface
max_serialized_size_FunctionSelect_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hw4_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw4_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interface, srv, FunctionSelect_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "hw4_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hw4_interface
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hw4_interface, srv, FunctionSelect)();

#ifdef __cplusplus
}
#endif

#endif  // HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
