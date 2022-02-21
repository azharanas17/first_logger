// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from first_interfaces:msg/Log.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__LOG__STRUCT_H_
#define FIRST_INTERFACES__MSG__DETAIL__LOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filename'
// Member 'message_log'
// Member 'level'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Log in the package first_interfaces.
typedef struct first_interfaces__msg__Log
{
  rosidl_runtime_c__String filename;
  rosidl_runtime_c__String message_log;
  rosidl_runtime_c__String level;
} first_interfaces__msg__Log;

// Struct for a sequence of first_interfaces__msg__Log.
typedef struct first_interfaces__msg__Log__Sequence
{
  first_interfaces__msg__Log * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_interfaces__msg__Log__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRST_INTERFACES__MSG__DETAIL__LOG__STRUCT_H_
