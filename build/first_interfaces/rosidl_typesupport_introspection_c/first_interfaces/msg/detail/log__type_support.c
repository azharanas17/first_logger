// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from first_interfaces:msg/Log.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "first_interfaces/msg/detail/log__rosidl_typesupport_introspection_c.h"
#include "first_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "first_interfaces/msg/detail/log__functions.h"
#include "first_interfaces/msg/detail/log__struct.h"


// Include directives for member types
// Member `filename`
// Member `message_log`
// Member `level`
// Member `time`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Log__rosidl_typesupport_introspection_c__Log_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  first_interfaces__msg__Log__init(message_memory);
}

void Log__rosidl_typesupport_introspection_c__Log_fini_function(void * message_memory)
{
  first_interfaces__msg__Log__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Log__rosidl_typesupport_introspection_c__Log_message_member_array[4] = {
  {
    "filename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces__msg__Log, filename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_log",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces__msg__Log, message_log),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces__msg__Log, level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces__msg__Log, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Log__rosidl_typesupport_introspection_c__Log_message_members = {
  "first_interfaces__msg",  // message namespace
  "Log",  // message name
  4,  // number of fields
  sizeof(first_interfaces__msg__Log),
  Log__rosidl_typesupport_introspection_c__Log_message_member_array,  // message members
  Log__rosidl_typesupport_introspection_c__Log_init_function,  // function to initialize message memory (memory has to be allocated)
  Log__rosidl_typesupport_introspection_c__Log_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Log__rosidl_typesupport_introspection_c__Log_message_type_support_handle = {
  0,
  &Log__rosidl_typesupport_introspection_c__Log_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_first_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_interfaces, msg, Log)() {
  if (!Log__rosidl_typesupport_introspection_c__Log_message_type_support_handle.typesupport_identifier) {
    Log__rosidl_typesupport_introspection_c__Log_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Log__rosidl_typesupport_introspection_c__Log_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
