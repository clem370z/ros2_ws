// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interface_acquisition:srv/CreationFichierPly.idl
// generated code does not contain a copyright notice
#include "interface_acquisition/srv/detail/creation_fichier_ply__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interface_acquisition/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interface_acquisition/srv/detail/creation_fichier_ply__struct.h"
#include "interface_acquisition/srv/detail/creation_fichier_ply__functions.h"
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


// forward declare type support functions


using _CreationFichierPly_Request__ros_msg_type = interface_acquisition__srv__CreationFichierPly_Request;

static bool _CreationFichierPly_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CreationFichierPly_Request__ros_msg_type * ros_message = static_cast<const _CreationFichierPly_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    cdr << ros_message->a;
  }

  return true;
}

static bool _CreationFichierPly_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CreationFichierPly_Request__ros_msg_type * ros_message = static_cast<_CreationFichierPly_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    cdr >> ros_message->a;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_acquisition
size_t get_serialized_size_interface_acquisition__srv__CreationFichierPly_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CreationFichierPly_Request__ros_msg_type * ros_message = static_cast<const _CreationFichierPly_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name a
  {
    size_t item_size = sizeof(ros_message->a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CreationFichierPly_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interface_acquisition__srv__CreationFichierPly_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_acquisition
size_t max_serialized_size_interface_acquisition__srv__CreationFichierPly_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CreationFichierPly_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interface_acquisition__srv__CreationFichierPly_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CreationFichierPly_Request = {
  "interface_acquisition::srv",
  "CreationFichierPly_Request",
  _CreationFichierPly_Request__cdr_serialize,
  _CreationFichierPly_Request__cdr_deserialize,
  _CreationFichierPly_Request__get_serialized_size,
  _CreationFichierPly_Request__max_serialized_size
};

static rosidl_message_type_support_t _CreationFichierPly_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CreationFichierPly_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_acquisition, srv, CreationFichierPly_Request)() {
  return &_CreationFichierPly_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "interface_acquisition/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interface_acquisition/srv/detail/creation_fichier_ply__struct.h"
// already included above
// #include "interface_acquisition/srv/detail/creation_fichier_ply__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _CreationFichierPly_Response__ros_msg_type = interface_acquisition__srv__CreationFichierPly_Response;

static bool _CreationFichierPly_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CreationFichierPly_Response__ros_msg_type * ros_message = static_cast<const _CreationFichierPly_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    cdr << ros_message->sum;
  }

  return true;
}

static bool _CreationFichierPly_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CreationFichierPly_Response__ros_msg_type * ros_message = static_cast<_CreationFichierPly_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    cdr >> ros_message->sum;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_acquisition
size_t get_serialized_size_interface_acquisition__srv__CreationFichierPly_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CreationFichierPly_Response__ros_msg_type * ros_message = static_cast<const _CreationFichierPly_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sum
  {
    size_t item_size = sizeof(ros_message->sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CreationFichierPly_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interface_acquisition__srv__CreationFichierPly_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_acquisition
size_t max_serialized_size_interface_acquisition__srv__CreationFichierPly_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CreationFichierPly_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interface_acquisition__srv__CreationFichierPly_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CreationFichierPly_Response = {
  "interface_acquisition::srv",
  "CreationFichierPly_Response",
  _CreationFichierPly_Response__cdr_serialize,
  _CreationFichierPly_Response__cdr_deserialize,
  _CreationFichierPly_Response__get_serialized_size,
  _CreationFichierPly_Response__max_serialized_size
};

static rosidl_message_type_support_t _CreationFichierPly_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CreationFichierPly_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_acquisition, srv, CreationFichierPly_Response)() {
  return &_CreationFichierPly_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interface_acquisition/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interface_acquisition/srv/creation_fichier_ply.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CreationFichierPly__callbacks = {
  "interface_acquisition::srv",
  "CreationFichierPly",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_acquisition, srv, CreationFichierPly_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_acquisition, srv, CreationFichierPly_Response)(),
};

static rosidl_service_type_support_t CreationFichierPly__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CreationFichierPly__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_acquisition, srv, CreationFichierPly)() {
  return &CreationFichierPly__handle;
}

#if defined(__cplusplus)
}
#endif
