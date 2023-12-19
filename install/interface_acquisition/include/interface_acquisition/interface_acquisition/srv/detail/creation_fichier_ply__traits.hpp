// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_acquisition:srv/CreationFichierPly.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_ACQUISITION__SRV__DETAIL__CREATION_FICHIER_PLY__TRAITS_HPP_
#define INTERFACE_ACQUISITION__SRV__DETAIL__CREATION_FICHIER_PLY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_acquisition/srv/detail/creation_fichier_ply__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_acquisition
{

namespace srv
{

inline void to_flow_style_yaml(
  const CreationFichierPly_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CreationFichierPly_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CreationFichierPly_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface_acquisition

namespace rosidl_generator_traits
{

[[deprecated("use interface_acquisition::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_acquisition::srv::CreationFichierPly_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_acquisition::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_acquisition::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_acquisition::srv::CreationFichierPly_Request & msg)
{
  return interface_acquisition::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_acquisition::srv::CreationFichierPly_Request>()
{
  return "interface_acquisition::srv::CreationFichierPly_Request";
}

template<>
inline const char * name<interface_acquisition::srv::CreationFichierPly_Request>()
{
  return "interface_acquisition/srv/CreationFichierPly_Request";
}

template<>
struct has_fixed_size<interface_acquisition::srv::CreationFichierPly_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_acquisition::srv::CreationFichierPly_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_acquisition::srv::CreationFichierPly_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface_acquisition
{

namespace srv
{

inline void to_flow_style_yaml(
  const CreationFichierPly_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CreationFichierPly_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CreationFichierPly_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface_acquisition

namespace rosidl_generator_traits
{

[[deprecated("use interface_acquisition::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_acquisition::srv::CreationFichierPly_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_acquisition::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_acquisition::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_acquisition::srv::CreationFichierPly_Response & msg)
{
  return interface_acquisition::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_acquisition::srv::CreationFichierPly_Response>()
{
  return "interface_acquisition::srv::CreationFichierPly_Response";
}

template<>
inline const char * name<interface_acquisition::srv::CreationFichierPly_Response>()
{
  return "interface_acquisition/srv/CreationFichierPly_Response";
}

template<>
struct has_fixed_size<interface_acquisition::srv::CreationFichierPly_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_acquisition::srv::CreationFichierPly_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_acquisition::srv::CreationFichierPly_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_acquisition::srv::CreationFichierPly>()
{
  return "interface_acquisition::srv::CreationFichierPly";
}

template<>
inline const char * name<interface_acquisition::srv::CreationFichierPly>()
{
  return "interface_acquisition/srv/CreationFichierPly";
}

template<>
struct has_fixed_size<interface_acquisition::srv::CreationFichierPly>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_acquisition::srv::CreationFichierPly_Request>::value &&
    has_fixed_size<interface_acquisition::srv::CreationFichierPly_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_acquisition::srv::CreationFichierPly>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_acquisition::srv::CreationFichierPly_Request>::value &&
    has_bounded_size<interface_acquisition::srv::CreationFichierPly_Response>::value
  >
{
};

template<>
struct is_service<interface_acquisition::srv::CreationFichierPly>
  : std::true_type
{
};

template<>
struct is_service_request<interface_acquisition::srv::CreationFichierPly_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_acquisition::srv::CreationFichierPly_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_ACQUISITION__SRV__DETAIL__CREATION_FICHIER_PLY__TRAITS_HPP_
