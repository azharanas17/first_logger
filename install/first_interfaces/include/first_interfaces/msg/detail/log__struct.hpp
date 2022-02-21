// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from first_interfaces:msg/Log.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__LOG__STRUCT_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__LOG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__first_interfaces__msg__Log __attribute__((deprecated))
#else
# define DEPRECATED__first_interfaces__msg__Log __declspec(deprecated)
#endif

namespace first_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Log_
{
  using Type = Log_<ContainerAllocator>;

  explicit Log_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
      this->message_log = "";
      this->level = "";
    }
  }

  explicit Log_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filename(_alloc),
    message_log(_alloc),
    level(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
      this->message_log = "";
      this->level = "";
    }
  }

  // field types and members
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _filename_type filename;
  using _message_log_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_log_type message_log;
  using _level_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _level_type level;

  // setters for named parameter idiom
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->filename = _arg;
    return *this;
  }
  Type & set__message_log(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message_log = _arg;
    return *this;
  }
  Type & set__level(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    first_interfaces::msg::Log_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_interfaces::msg::Log_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_interfaces::msg::Log_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_interfaces::msg::Log_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_interfaces::msg::Log_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_interfaces::msg::Log_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_interfaces::msg::Log_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_interfaces::msg::Log_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_interfaces::msg::Log_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_interfaces::msg::Log_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_interfaces__msg__Log
    std::shared_ptr<first_interfaces::msg::Log_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_interfaces__msg__Log
    std::shared_ptr<first_interfaces::msg::Log_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Log_ & other) const
  {
    if (this->filename != other.filename) {
      return false;
    }
    if (this->message_log != other.message_log) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    return true;
  }
  bool operator!=(const Log_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Log_

// alias to use template instance with default allocator
using Log =
  first_interfaces::msg::Log_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace first_interfaces

#endif  // FIRST_INTERFACES__MSG__DETAIL__LOG__STRUCT_HPP_
