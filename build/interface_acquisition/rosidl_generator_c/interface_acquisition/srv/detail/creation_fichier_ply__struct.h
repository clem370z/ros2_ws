// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_acquisition:srv/CreationFichierPly.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_ACQUISITION__SRV__DETAIL__CREATION_FICHIER_PLY__STRUCT_H_
#define INTERFACE_ACQUISITION__SRV__DETAIL__CREATION_FICHIER_PLY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CreationFichierPly in the package interface_acquisition.
typedef struct interface_acquisition__srv__CreationFichierPly_Request
{
  int64_t a;
} interface_acquisition__srv__CreationFichierPly_Request;

// Struct for a sequence of interface_acquisition__srv__CreationFichierPly_Request.
typedef struct interface_acquisition__srv__CreationFichierPly_Request__Sequence
{
  interface_acquisition__srv__CreationFichierPly_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_acquisition__srv__CreationFichierPly_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CreationFichierPly in the package interface_acquisition.
typedef struct interface_acquisition__srv__CreationFichierPly_Response
{
  int64_t sum;
} interface_acquisition__srv__CreationFichierPly_Response;

// Struct for a sequence of interface_acquisition__srv__CreationFichierPly_Response.
typedef struct interface_acquisition__srv__CreationFichierPly_Response__Sequence
{
  interface_acquisition__srv__CreationFichierPly_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_acquisition__srv__CreationFichierPly_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_ACQUISITION__SRV__DETAIL__CREATION_FICHIER_PLY__STRUCT_H_
