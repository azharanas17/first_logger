// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from first_interfaces:msg/Log.idl
// generated code does not contain a copyright notice
#include "first_interfaces/msg/detail/log__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "first_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "first_interfaces/msg/detail/log__struct.h"
#include "first_interfaces/msg/detail/log__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // filename, level, message_log, time
#include "rosidl_runtime_c/string_functions.h"  // filename, level, message_log, time

// forward declare type support functions


using _Log__ros_msg_type = first_interfaces__msg__Log;

static bool _Log__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Log__ros_msg_type * ros_message = static_cast<const _Log__ros_msg_type *>(untyped_ros_message);
  // Field name: filename
  {
    const rosidl_runtime_c__String * str = &ros_message->filename;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: message_log
  {
    const rosidl_runtime_c__String * str = &ros_message->message_log;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: level
  {
    const rosidl_runtime_c__String * str = &ros_message->level;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: time
  {
    const rosidl_runtime_c__String * str = &ros_message->time;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Log__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Log__ros_msg_type * ros_message = static_cast<_Log__ros_msg_type *>(untyped_ros_message);
  // Field name: filename
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->filename.data) {
      rosidl_runtime_c__String__init(&ros_message->filename);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->filename,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'filename'\n");
      return false;
    }
  }

  // Field name: message_log
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message_log.data) {
      rosidl_runtime_c__String__init(&ros_message->message_log);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message_log,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message_log'\n");
      return false;
    }
  }

  // Field name: level
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->level.data) {
      rosidl_runtime_c__String__init(&ros_message->level);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->level,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'level'\n");
      return false;
    }
  }

  // Field name: time
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->time.data) {
      rosidl_runtime_c__String__init(&ros_message->time);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->time,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'time'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_interfaces
size_t get_serialized_size_first_interfaces__msg__Log(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Log__ros_msg_type * ros_message = static_cast<const _Log__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->filename.size + 1);
  // field.name message_log
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message_log.size + 1);
  // field.name level
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->level.size + 1);
  // field.name time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->time.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Log__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_first_interfaces__msg__Log(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_interfaces
size_t max_serialized_size_first_interfaces__msg__Log(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: filename
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: message_log
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: level
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: time
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

static size_t _Log__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_first_interfaces__msg__Log(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Log = {
  "first_interfaces::msg",
  "Log",
  _Log__cdr_serialize,
  _Log__cdr_deserialize,
  _Log__get_serialized_size,
  _Log__max_serialized_size
};

static rosidl_message_type_support_t _Log__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Log,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, first_interfaces, msg, Log)() {
  return &_Log__type_support;
}

#if defined(__cplusplus)
}
#endif
