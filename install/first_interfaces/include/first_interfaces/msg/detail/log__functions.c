// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from first_interfaces:msg/Log.idl
// generated code does not contain a copyright notice
#include "first_interfaces/msg/detail/log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `filename`
// Member `message_log`
// Member `level`
#include "rosidl_runtime_c/string_functions.h"

bool
first_interfaces__msg__Log__init(first_interfaces__msg__Log * msg)
{
  if (!msg) {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__init(&msg->filename)) {
    first_interfaces__msg__Log__fini(msg);
    return false;
  }
  // message_log
  if (!rosidl_runtime_c__String__init(&msg->message_log)) {
    first_interfaces__msg__Log__fini(msg);
    return false;
  }
  // level
  if (!rosidl_runtime_c__String__init(&msg->level)) {
    first_interfaces__msg__Log__fini(msg);
    return false;
  }
  return true;
}

void
first_interfaces__msg__Log__fini(first_interfaces__msg__Log * msg)
{
  if (!msg) {
    return;
  }
  // filename
  rosidl_runtime_c__String__fini(&msg->filename);
  // message_log
  rosidl_runtime_c__String__fini(&msg->message_log);
  // level
  rosidl_runtime_c__String__fini(&msg->level);
}

first_interfaces__msg__Log *
first_interfaces__msg__Log__create()
{
  first_interfaces__msg__Log * msg = (first_interfaces__msg__Log *)malloc(sizeof(first_interfaces__msg__Log));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_interfaces__msg__Log));
  bool success = first_interfaces__msg__Log__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
first_interfaces__msg__Log__destroy(first_interfaces__msg__Log * msg)
{
  if (msg) {
    first_interfaces__msg__Log__fini(msg);
  }
  free(msg);
}


bool
first_interfaces__msg__Log__Sequence__init(first_interfaces__msg__Log__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  first_interfaces__msg__Log * data = NULL;
  if (size) {
    data = (first_interfaces__msg__Log *)calloc(size, sizeof(first_interfaces__msg__Log));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_interfaces__msg__Log__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_interfaces__msg__Log__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
first_interfaces__msg__Log__Sequence__fini(first_interfaces__msg__Log__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      first_interfaces__msg__Log__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

first_interfaces__msg__Log__Sequence *
first_interfaces__msg__Log__Sequence__create(size_t size)
{
  first_interfaces__msg__Log__Sequence * array = (first_interfaces__msg__Log__Sequence *)malloc(sizeof(first_interfaces__msg__Log__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = first_interfaces__msg__Log__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
first_interfaces__msg__Log__Sequence__destroy(first_interfaces__msg__Log__Sequence * array)
{
  if (array) {
    first_interfaces__msg__Log__Sequence__fini(array);
  }
  free(array);
}
