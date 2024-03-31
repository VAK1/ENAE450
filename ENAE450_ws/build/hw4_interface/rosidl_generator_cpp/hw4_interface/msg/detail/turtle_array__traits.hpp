// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hw4_interface:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef HW4_INTERFACE__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_
#define HW4_INTERFACE__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hw4_interface/msg/detail/turtle_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'array'
#include "hw4_interface/msg/detail/turtle__traits.hpp"

namespace hw4_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const TurtleArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: array
  {
    if (msg.array.size() == 0) {
      out << "array: []";
    } else {
      out << "array: [";
      size_t pending_items = msg.array.size();
      for (auto item : msg.array) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.array.size() == 0) {
      out << "array: []\n";
    } else {
      out << "array:\n";
      for (auto item : msg.array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleArray & msg, bool use_flow_style = false)
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
  const hw4_interface::msg::TurtleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  hw4_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hw4_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const hw4_interface::msg::TurtleArray & msg)
{
  return hw4_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hw4_interface::msg::TurtleArray>()
{
  return "hw4_interface::msg::TurtleArray";
}

template<>
inline const char * name<hw4_interface::msg::TurtleArray>()
{
  return "hw4_interface/msg/TurtleArray";
}

template<>
struct has_fixed_size<hw4_interface::msg::TurtleArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hw4_interface::msg::TurtleArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hw4_interface::msg::TurtleArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HW4_INTERFACE__MSG__DETAIL__TURTLE_ARRAY__TRAITS_HPP_
