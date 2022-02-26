// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from first_interfaces:msg/Log.idl
// generated code does not contain a copyright notice
#include "first_interfaces/msg/detail/log__rosidl_typesupport_fastrtps_cpp.hpp"
#include "first_interfaces/msg/detail/log__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace first_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_interfaces
cdr_serialize(
  const first_interfaces::msg::Log & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: filename
  cdr << ros_message.filename;
  // Member: message_log
  cdr << ros_message.message_log;
  // Member: level
  cdr << ros_message.level;
  // Member: time
  cdr << ros_message.time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  first_interfaces::msg::Log & ros_message)
{
  // Member: filename
  cdr >> ros_message.filename;

  // Member: message_log
  cdr >> ros_message.message_log;

  // Member: level
  cdr >> ros_message.level;

  // Member: time
  cdr >> ros_message.time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_interfaces
get_serialized_size(
  const first_interfaces::msg::Log & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.filename.size() + 1);
  // Member: message_log
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message_log.size() + 1);
  // Member: level
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.level.size() + 1);
  // Member: time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.time.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_interfaces
max_serialized_size_Log(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: filename
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: message_log
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: level
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: time
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Log__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const first_interfaces::msg::Log *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Log__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<first_interfaces::msg::Log *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Log__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const first_interfaces::msg::Log *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Log__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Log(full_bounded, 0);
}

static message_type_support_callbacks_t _Log__callbacks = {
  "first_interfaces::msg",
  "Log",
  _Log__cdr_serialize,
  _Log__cdr_deserialize,
  _Log__get_serialized_size,
  _Log__max_serialized_size
};

static rosidl_message_type_support_t _Log__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Log__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace first_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_first_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<first_interfaces::msg::Log>()
{
  return &first_interfaces::msg::typesupport_fastrtps_cpp::_Log__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, first_interfaces, msg, Log)() {
  return &first_interfaces::msg::typesupport_fastrtps_cpp::_Log__handle;
}

#ifdef __cplusplus
}
#endif
