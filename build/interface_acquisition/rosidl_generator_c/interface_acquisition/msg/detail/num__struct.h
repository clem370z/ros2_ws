// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_acquisition:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_ACQUISITION__MSG__DETAIL__NUM__STRUCT_H_
#define INTERFACE_ACQUISITION__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package interface_acquisition.
typedef struct interface_acquisition__msg__Num
{
  int64_t num;
} interface_acquisition__msg__Num;

// Struct for a sequence of interface_acquisition__msg__Num.
typedef struct interface_acquisition__msg__Num__Sequence
{
  interface_acquisition__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_acquisition__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_ACQUISITION__MSG__DETAIL__NUM__STRUCT_H_
