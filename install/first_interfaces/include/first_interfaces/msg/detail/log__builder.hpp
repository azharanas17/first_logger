// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from first_interfaces:msg/Log.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__LOG__BUILDER_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__LOG__BUILDER_HPP_

#include "first_interfaces/msg/detail/log__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace first_interfaces
{

namespace msg
{

namespace builder
{

class Init_Log_time
{
public:
  explicit Init_Log_time(::first_interfaces::msg::Log & msg)
  : msg_(msg)
  {}
  ::first_interfaces::msg::Log time(::first_interfaces::msg::Log::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_interfaces::msg::Log msg_;
};

class Init_Log_level
{
public:
  explicit Init_Log_level(::first_interfaces::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_time level(::first_interfaces::msg::Log::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_Log_time(msg_);
  }

private:
  ::first_interfaces::msg::Log msg_;
};

class Init_Log_message_log
{
public:
  explicit Init_Log_message_log(::first_interfaces::msg::Log & msg)
  : msg_(msg)
  {}
  Init_Log_level message_log(::first_interfaces::msg::Log::_message_log_type arg)
  {
    msg_.message_log = std::move(arg);
    return Init_Log_level(msg_);
  }

private:
  ::first_interfaces::msg::Log msg_;
};

class Init_Log_filename
{
public:
  Init_Log_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Log_message_log filename(::first_interfaces::msg::Log::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return Init_Log_message_log(msg_);
  }

private:
  ::first_interfaces::msg::Log msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_interfaces::msg::Log>()
{
  return first_interfaces::msg::builder::Init_Log_filename();
}

}  // namespace first_interfaces

#endif  // FIRST_INTERFACES__MSG__DETAIL__LOG__BUILDER_HPP_
