// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hw4_interface:srv/FunctionSelect.idl
// generated code does not contain a copyright notice

#ifndef HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__BUILDER_HPP_
#define HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hw4_interface/srv/detail/function_select__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hw4_interface
{

namespace srv
{

namespace builder
{

class Init_FunctionSelect_Request_function_id
{
public:
  Init_FunctionSelect_Request_function_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hw4_interface::srv::FunctionSelect_Request function_id(::hw4_interface::srv::FunctionSelect_Request::_function_id_type arg)
  {
    msg_.function_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interface::srv::FunctionSelect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interface::srv::FunctionSelect_Request>()
{
  return hw4_interface::srv::builder::Init_FunctionSelect_Request_function_id();
}

}  // namespace hw4_interface


namespace hw4_interface
{

namespace srv
{

namespace builder
{

class Init_FunctionSelect_Response_message
{
public:
  explicit Init_FunctionSelect_Response_message(::hw4_interface::srv::FunctionSelect_Response & msg)
  : msg_(msg)
  {}
  ::hw4_interface::srv::FunctionSelect_Response message(::hw4_interface::srv::FunctionSelect_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hw4_interface::srv::FunctionSelect_Response msg_;
};

class Init_FunctionSelect_Response_success
{
public:
  Init_FunctionSelect_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FunctionSelect_Response_message success(::hw4_interface::srv::FunctionSelect_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_FunctionSelect_Response_message(msg_);
  }

private:
  ::hw4_interface::srv::FunctionSelect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hw4_interface::srv::FunctionSelect_Response>()
{
  return hw4_interface::srv::builder::Init_FunctionSelect_Response_success();
}

}  // namespace hw4_interface

#endif  // HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__BUILDER_HPP_
