// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hw4_interface:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef HW4_INTERFACE__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
#define HW4_INTERFACE__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hw4_interface/msg/detail/turtle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hw4_interface
{

namespace msg
{

namespace builder
{

class Init_TurtleArray_array
{
public:
  Init_TurtleArray_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw4_interface::msg::TurtleArray array(::hw4_interface::msg::TurtleArray::_array_type arg)
  {
    msg_.array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interface::msg::TurtleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interface::msg::TurtleArray>()
{
  return hw4_interface::msg::builder::Init_TurtleArray_array();
}

}  // namespace hw4_interface

#endif  // HW4_INTERFACE__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
