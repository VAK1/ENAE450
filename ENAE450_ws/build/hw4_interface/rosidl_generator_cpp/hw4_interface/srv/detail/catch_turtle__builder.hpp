// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hw4_interface:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#ifndef HW4_INTERFACE__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
#define HW4_INTERFACE__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hw4_interface/srv/detail/catch_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hw4_interface
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Request_name
{
public:
  Init_CatchTurtle_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw4_interface::srv::CatchTurtle_Request name(::hw4_interface::srv::CatchTurtle_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interface::srv::CatchTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interface::srv::CatchTurtle_Request>()
{
  return hw4_interface::srv::builder::Init_CatchTurtle_Request_name();
}

}  // namespace hw4_interface


namespace hw4_interface
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Response_success
{
public:
  Init_CatchTurtle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw4_interface::srv::CatchTurtle_Response success(::hw4_interface::srv::CatchTurtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interface::srv::CatchTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interface::srv::CatchTurtle_Response>()
{
  return hw4_interface::srv::builder::Init_CatchTurtle_Response_success();
}

}  // namespace hw4_interface

#endif  // HW4_INTERFACE__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
