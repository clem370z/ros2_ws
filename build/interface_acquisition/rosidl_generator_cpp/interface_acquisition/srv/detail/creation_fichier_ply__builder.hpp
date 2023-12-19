// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_acquisition:srv/CreationFichierPly.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_ACQUISITION__SRV__DETAIL__CREATION_FICHIER_PLY__BUILDER_HPP_
#define INTERFACE_ACQUISITION__SRV__DETAIL__CREATION_FICHIER_PLY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_acquisition/srv/detail/creation_fichier_ply__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_acquisition
{

namespace srv
{

namespace builder
{

class Init_CreationFichierPly_Request_a
{
public:
  Init_CreationFichierPly_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_acquisition::srv::CreationFichierPly_Request a(::interface_acquisition::srv::CreationFichierPly_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_acquisition::srv::CreationFichierPly_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_acquisition::srv::CreationFichierPly_Request>()
{
  return interface_acquisition::srv::builder::Init_CreationFichierPly_Request_a();
}

}  // namespace interface_acquisition


namespace interface_acquisition
{

namespace srv
{

namespace builder
{

class Init_CreationFichierPly_Response_sum
{
public:
  Init_CreationFichierPly_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_acquisition::srv::CreationFichierPly_Response sum(::interface_acquisition::srv::CreationFichierPly_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_acquisition::srv::CreationFichierPly_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_acquisition::srv::CreationFichierPly_Response>()
{
  return interface_acquisition::srv::builder::Init_CreationFichierPly_Response_sum();
}

}  // namespace interface_acquisition

#endif  // INTERFACE_ACQUISITION__SRV__DETAIL__CREATION_FICHIER_PLY__BUILDER_HPP_
