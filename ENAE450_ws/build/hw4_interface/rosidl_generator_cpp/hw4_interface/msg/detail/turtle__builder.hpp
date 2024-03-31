// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hw4_interface:msg/Turtle.idl
// generated code does not contain a copyright notice

#ifndef HW4_INTERFACE__MSG__DETAIL__TURTLE__BUILDER_HPP_
#define HW4_INTERFACE__MSG__DETAIL__TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hw4_interface/msg/detail/turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hw4_interface
{

namespace msg
{

namespace builder
{

class Init_Turtle_y
{
public:
  explicit Init_Turtle_y(::hw4_interface::msg::Turtle & msg)
  : msg_(msg)
  {}
  ::hw4_interface::msg::Turtle y(::hw4_interface::msg::Turtle::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interface::msg::Turtle msg_;
};

class Init_Turtle_x
{
public:
  explicit Init_Turtle_x(::hw4_interface::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_y x(::hw4_interface::msg::Turtle::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Turtle_y(msg_);
  }

private:
  ::hw4_interface::msg::Turtle msg_;
};

class Init_Turtle_name
{
public:
  Init_Turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turtle_x name(::hw4_interface::msg::Turtle::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Turtle_x(msg_);
  }

private:
  ::hw4_interface::msg::Turtle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interface::msg::Turtle>()
{
  return hw4_interface::msg::builder::Init_Turtle_name();
}

}  // namespace hw4_interface

#endif  // HW4_INTERFACE__MSG__DETAIL__TURTLE__BUILDER_HPP_
