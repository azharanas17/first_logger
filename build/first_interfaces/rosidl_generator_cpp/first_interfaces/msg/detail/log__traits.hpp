// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from first_interfaces:msg/Log.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__LOG__TRAITS_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__LOG__TRAITS_HPP_

#include "first_interfaces/msg/detail/log__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<first_interfaces::msg::Log>()
{
  return "first_interfaces::msg::Log";
}

template<>
inline const char * name<first_interfaces::msg::Log>()
{
  return "first_interfaces/msg/Log";
}

template<>
struct has_fixed_size<first_interfaces::msg::Log>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<first_interfaces::msg::Log>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<first_interfaces::msg::Log>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FIRST_INTERFACES__MSG__DETAIL__LOG__TRAITS_HPP_
