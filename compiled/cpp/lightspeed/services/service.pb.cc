// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: services/service.proto

#include "services/service.pb.h"

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
namespace service {
}  // namespace service
}  // namespace lightspeed
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_services_2fservice_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_services_2fservice_2eproto = nullptr;
const uint32_t TableStruct_services_2fservice_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_services_2fservice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026services/service.proto\022\022lightspeed.ser"
  "vice\032\026requests/request.proto\032\030responses/"
  "response.proto\032\026properties/props.proto2\324"
  "\001\n\023AstroGenericService\022\\\n\nGetDevices\022%.l"
  "ightspeed.request.GetDevicesRequest\032\'.li"
  "ghtspeed.response.GetDevicesResponse\022_\n\013"
  "SetProperty\022&.lightspeed.request.SetProp"
  "ertyRequest\032(.lightspeed.response.SetPro"
  "pertyResponse2\253\002\n\017AstroCcdService\022\\\n\nGet"
  "Devices\022%.lightspeed.request.GetDevicesR"
  "equest\032\'.lightspeed.response.GetDevicesR"
  "esponse\022_\n\013SetProperty\022&.lightspeed.requ"
  "est.SetPropertyRequest\032(.lightspeed.resp"
  "onse.SetPropertyResponse\022Y\n\006Expose\022&.lig"
  "htspeed.request.CcdExposureRequest\032\'.lig"
  "htspeed.request.CcdExposureResponse2\265\002\n\017"
  "AstroEfwService\022\\\n\nGetDevices\022%.lightspe"
  "ed.request.GetDevicesRequest\032\'.lightspee"
  "d.response.GetDevicesResponse\022_\n\013SetProp"
  "erty\022&.lightspeed.request.SetPropertyReq"
  "uest\032(.lightspeed.response.SetPropertyRe"
  "sponse\022c\n\tCalibrate\022).lightspeed.request"
  ".EfwCalibrationRequest\032+.lightspeed.resp"
  "onse.EfwCalibrationResponseP\000P\001P\002b\006proto"
  "3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_services_2fservice_2eproto_deps[3] = {
  &::descriptor_table_properties_2fprops_2eproto,
  &::descriptor_table_requests_2frequest_2eproto,
  &::descriptor_table_responses_2fresponse_2eproto,
};
static ::_pbi::once_flag descriptor_table_services_2fservice_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_services_2fservice_2eproto = {
    false, false, 961, descriptor_table_protodef_services_2fservice_2eproto,
    "services/service.proto",
    &descriptor_table_services_2fservice_2eproto_once, descriptor_table_services_2fservice_2eproto_deps, 3, 0,
    schemas, file_default_instances, TableStruct_services_2fservice_2eproto::offsets,
    nullptr, file_level_enum_descriptors_services_2fservice_2eproto,
    file_level_service_descriptors_services_2fservice_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_services_2fservice_2eproto_getter() {
  return &descriptor_table_services_2fservice_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_services_2fservice_2eproto(&descriptor_table_services_2fservice_2eproto);
namespace lightspeed {
namespace service {

// @@protoc_insertion_point(namespace_scope)
}  // namespace service
}  // namespace lightspeed
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
