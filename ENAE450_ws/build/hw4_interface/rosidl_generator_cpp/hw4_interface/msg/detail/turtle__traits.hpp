// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hw4_interface:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef HW4_INTERFACE__MSG__DETAIL__TURTLE__TRAITS_HPP_
#define HW4_INTERFACE__MSG__DETAIL__TURTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hw4_interface/msg/detail/turtle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hw4_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Turtle & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Turtle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Turtle & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hw4_interface

namespace rosidl_generator_traits
{

[[deprecated("use hw4_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hw4_interface::msg::Turtle & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interface::msg::Turtle & msg)
{
  return hw4_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interface::msg::Turtle>()
{
  return "hw4_interface::msg::Turtle";
}

template<>
inline const char * name<hw4_interface::msg::Turtle>()
{
  return "hw4_interface/msg/Turtle";
}

template<>
struct has_fixed_size<hw4_interface::msg::Turtle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hw4_interface::msg::Turtle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hw4_interface::msg::Turtle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HW4_INTERFACE__MSG__DETAIL__TURTLE__TRAITS_HPP_
