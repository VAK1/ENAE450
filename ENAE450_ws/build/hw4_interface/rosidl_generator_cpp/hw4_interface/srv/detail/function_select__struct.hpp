// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hw4_interface:srv/FunctionSelect.idl
// generated code does not contain a copyright notice

#ifndef HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__STRUCT_HPP_
#define HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hw4_interface__srv__FunctionSelect_Request __attribute__((deprecated))
#else
# define DEPRECATED__hw4_interface__srv__FunctionSelect_Request __declspec(deprecated)
#endif

namespace hw4_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FunctionSelect_Request_
{
  using Type = FunctionSelect_Request_<ContainerAllocator>;

  explicit FunctionSelect_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->function_id = 0ll;
    }
  }

  explicit FunctionSelect_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->function_id = 0ll;
    }
  }

  // field types and members
  using _function_id_type =
    int64_t;
  _function_id_type function_id;

  // setters for named parameter idiom
  Type & set__function_id(
    const int64_t & _arg)
  {
    this->function_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hw4_interface::srv::FunctionSelect_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hw4_interface::srv::FunctionSelect_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hw4_interface::srv::FunctionSelect_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hw4_interface::srv::FunctionSelect_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hw4_interface::srv::FunctionSelect_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hw4_interface::srv::FunctionSelect_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hw4_interface::srv::FunctionSelect_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hw4_interface::srv::FunctionSelect_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hw4_interface::srv::FunctionSelect_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hw4_interface::srv::FunctionSelect_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hw4_interface__srv__FunctionSelect_Request
    std::shared_ptr<hw4_interface::srv::FunctionSelect_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hw4_interface__srv__FunctionSelect_Request
    std::shared_ptr<hw4_interface::srv::FunctionSelect_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FunctionSelect_Request_ & other) const
  {
    if (this->function_id != other.function_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FunctionSelect_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FunctionSelect_Request_

// alias to use template instance with default allocator
using FunctionSelect_Request =
  hw4_interface::srv::FunctionSelect_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hw4_interface


#ifndef _WIN32
# define DEPRECATED__hw4_interface__srv__FunctionSelect_Response __attribute__((deprecated))
#else
# define DEPRECATED__hw4_interface__srv__FunctionSelect_Response __declspec(deprecated)
#endif

namespace hw4_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FunctionSelect_Response_
{
  using Type = FunctionSelect_Response_<ContainerAllocator>;

  explicit FunctionSelect_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit FunctionSelect_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hw4_interface::srv::FunctionSelect_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hw4_interface::srv::FunctionSelect_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hw4_interface::srv::FunctionSelect_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hw4_interface::srv::FunctionSelect_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hw4_interface::srv::FunctionSelect_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hw4_interface::srv::FunctionSelect_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hw4_interface::srv::FunctionSelect_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hw4_interface::srv::FunctionSelect_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hw4_interface::srv::FunctionSelect_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hw4_interface::srv::FunctionSelect_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hw4_interface__srv__FunctionSelect_Response
    std::shared_ptr<hw4_interface::srv::FunctionSelect_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hw4_interface__srv__FunctionSelect_Response
    std::shared_ptr<hw4_interface::srv::FunctionSelect_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FunctionSelect_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const FunctionSelect_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FunctionSelect_Response_

// alias to use template instance with default allocator
using FunctionSelect_Response =
  hw4_interface::srv::FunctionSelect_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hw4_interface

namespace hw4_interface
{

namespace srv
{

struct FunctionSelect
{
  using Request = hw4_interface::srv::FunctionSelect_Request;
  using Response = hw4_interface::srv::FunctionSelect_Response;
};

}  // namespace srv

}  // namespace hw4_interface

#endif  // HW4_INTERFACE__SRV__DETAIL__FUNCTION_SELECT__STRUCT_HPP_
