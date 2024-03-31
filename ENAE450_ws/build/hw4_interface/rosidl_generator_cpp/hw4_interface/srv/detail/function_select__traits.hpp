// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hw4_interface:srv/FunctionSelect.idl
// generated code does not contain a copyright notice

#ifndef HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__TRAITS_HPP_
#define HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hw4_interface/srv/detail/function_select__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hw4_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const FunctionSelect_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: function_id
  {
    out << "function_id: ";
    rosidl_generator_traits::value_to_yaml(msg.function_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FunctionSelect_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: function_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "function_id: ";
    rosidl_generator_traits::value_to_yaml(msg.function_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FunctionSelect_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hw4_interface

namespace rosidl_generator_traits
{

[[deprecated("use hw4_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw4_interface::srv::FunctionSelect_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interface::srv::FunctionSelect_Request & msg)
{
  return hw4_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interface::srv::FunctionSelect_Request>()
{
  return "hw4_interface::srv::FunctionSelect_Request";
}

template<>
inline const char * name<hw4_interface::srv::FunctionSelect_Request>()
{
  return "hw4_interface/srv/FunctionSelect_Request";
}

template<>
struct has_fixed_size<hw4_interface::srv::FunctionSelect_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hw4_interface::srv::FunctionSelect_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hw4_interface::srv::FunctionSelect_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hw4_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const FunctionSelect_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FunctionSelect_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FunctionSelect_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hw4_interface

namespace rosidl_generator_traits
{

[[deprecated("use hw4_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw4_interface::srv::FunctionSelect_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interface::srv::FunctionSelect_Response & msg)
{
  return hw4_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interface::srv::FunctionSelect_Response>()
{
  return "hw4_interface::srv::FunctionSelect_Response";
}

template<>
inline const char * name<hw4_interface::srv::FunctionSelect_Response>()
{
  return "hw4_interface/srv/FunctionSelect_Response";
}

template<>
struct has_fixed_size<hw4_interface::srv::FunctionSelect_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hw4_interface::srv::FunctionSelect_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hw4_interface::srv::FunctionSelect_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hw4_interface::srv::FunctionSelect>()
{
  return "hw4_interface::srv::FunctionSelect";
}

template<>
inline const char * name<hw4_interface::srv::FunctionSelect>()
{
  return "hw4_interface/srv/FunctionSelect";
}

template<>
struct has_fixed_size<hw4_interface::srv::FunctionSelect>
  : std::integral_constant<
    bool,
    has_fixed_size<hw4_interface::srv::FunctionSelect_Request>::value &&
    has_fixed_size<hw4_interface::srv::FunctionSelect_Response>::value
  >
{
};

template<>
struct has_bounded_size<hw4_interface::srv::FunctionSelect>
  : std::integral_constant<
    bool,
    has_bounded_size<hw4_interface::srv::FunctionSelect_Request>::value &&
    has_bounded_size<hw4_interface::srv::FunctionSelect_Response>::value
  >
{
};

template<>
struct is_service<hw4_interface::srv::FunctionSelect>
  : std::true_type
{
};

template<>
struct is_service_request<hw4_interface::srv::FunctionSelect_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hw4_interface::srv::FunctionSelect_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__TRAITS_HPP_
