// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol/server.proto

#include "protocol/server.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace lightspeed {
namespace server {
}  // namespace server
}  // namespace lightspeed
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_protocol_2fserver_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_protocol_2fserver_2eproto = nullptr;
const uint32_t TableStruct_protocol_2fserver_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_protocol_2fserver_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025protocol/server.proto\022\021lightspeed.serv"
  "er\032\033protocol/main/request.proto\032\034protoco"
  "l/main/response.proto2r\n\014AstroService\022b\n"
  "\nQueryProps\022(.lightspeed.request.GetProp"
  "ertiesRequest\032*.lightspeed.response.GetP"
  "ropertiesResponseP\000P\001b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_protocol_2fserver_2eproto_deps[2] = {
  &::descriptor_table_protocol_2fmain_2frequest_2eproto,
  &::descriptor_table_protocol_2fmain_2fresponse_2eproto,
};
static ::_pbi::once_flag descriptor_table_protocol_2fserver_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protocol_2fserver_2eproto = {
    false, false, 229, descriptor_table_protodef_protocol_2fserver_2eproto,
    "protocol/server.proto",
    &descriptor_table_protocol_2fserver_2eproto_once, descriptor_table_protocol_2fserver_2eproto_deps, 2, 0,
    schemas, file_default_instances, TableStruct_protocol_2fserver_2eproto::offsets,
    nullptr, file_level_enum_descriptors_protocol_2fserver_2eproto,
    file_level_service_descriptors_protocol_2fserver_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protocol_2fserver_2eproto_getter() {
  return &descriptor_table_protocol_2fserver_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protocol_2fserver_2eproto(&descriptor_table_protocol_2fserver_2eproto);
namespace lightspeed {
namespace server {

// @@protoc_insertion_point(namespace_scope)
}  // namespace server
}  // namespace lightspeed
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
