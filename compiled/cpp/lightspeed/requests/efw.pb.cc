// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: requests/efw.proto

#include "requests/efw.pb.h"

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
namespace request {
namespace efw {
PROTOBUF_CONSTEXPR EfwCalibrationRequest::EfwCalibrationRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.id_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct EfwCalibrationRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EfwCalibrationRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~EfwCalibrationRequestDefaultTypeInternal() {}
  union {
    EfwCalibrationRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EfwCalibrationRequestDefaultTypeInternal _EfwCalibrationRequest_default_instance_;
}  // namespace efw
}  // namespace request
}  // namespace lightspeed
static ::_pb::Metadata file_level_metadata_requests_2fefw_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_requests_2fefw_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_requests_2fefw_2eproto = nullptr;

const uint32_t TableStruct_requests_2fefw_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::lightspeed::request::efw::EfwCalibrationRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::lightspeed::request::efw::EfwCalibrationRequest, _impl_.id_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::lightspeed::request::efw::EfwCalibrationRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::lightspeed::request::efw::_EfwCalibrationRequest_default_instance_._instance,
};

const char descriptor_table_protodef_requests_2fefw_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022requests/efw.proto\022\026lightspeed.request"
  ".efw\"#\n\025EfwCalibrationRequest\022\n\n\002id\030\001 \001("
  "\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_requests_2fefw_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_requests_2fefw_2eproto = {
    false, false, 89, descriptor_table_protodef_requests_2fefw_2eproto,
    "requests/efw.proto",
    &descriptor_table_requests_2fefw_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_requests_2fefw_2eproto::offsets,
    file_level_metadata_requests_2fefw_2eproto, file_level_enum_descriptors_requests_2fefw_2eproto,
    file_level_service_descriptors_requests_2fefw_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_requests_2fefw_2eproto_getter() {
  return &descriptor_table_requests_2fefw_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_requests_2fefw_2eproto(&descriptor_table_requests_2fefw_2eproto);
namespace lightspeed {
namespace request {
namespace efw {

// ===================================================================

class EfwCalibrationRequest::_Internal {
 public:
};

EfwCalibrationRequest::EfwCalibrationRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:lightspeed.request.efw.EfwCalibrationRequest)
}
EfwCalibrationRequest::EfwCalibrationRequest(const EfwCalibrationRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  EfwCalibrationRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.id_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_id().empty()) {
    _this->_impl_.id_.Set(from._internal_id(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:lightspeed.request.efw.EfwCalibrationRequest)
}

inline void EfwCalibrationRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.id_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

EfwCalibrationRequest::~EfwCalibrationRequest() {
  // @@protoc_insertion_point(destructor:lightspeed.request.efw.EfwCalibrationRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void EfwCalibrationRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.id_.Destroy();
}

void EfwCalibrationRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void EfwCalibrationRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:lightspeed.request.efw.EfwCalibrationRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.id_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* EfwCalibrationRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "lightspeed.request.efw.EfwCalibrationRequest.id"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* EfwCalibrationRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:lightspeed.request.efw.EfwCalibrationRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (!this->_internal_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_id().data(), static_cast<int>(this->_internal_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "lightspeed.request.efw.EfwCalibrationRequest.id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:lightspeed.request.efw.EfwCalibrationRequest)
  return target;
}

size_t EfwCalibrationRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:lightspeed.request.efw.EfwCalibrationRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string id = 1;
  if (!this->_internal_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData EfwCalibrationRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    EfwCalibrationRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*EfwCalibrationRequest::GetClassData() const { return &_class_data_; }


void EfwCalibrationRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<EfwCalibrationRequest*>(&to_msg);
  auto& from = static_cast<const EfwCalibrationRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:lightspeed.request.efw.EfwCalibrationRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_id().empty()) {
    _this->_internal_set_id(from._internal_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void EfwCalibrationRequest::CopyFrom(const EfwCalibrationRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:lightspeed.request.efw.EfwCalibrationRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EfwCalibrationRequest::IsInitialized() const {
  return true;
}

void EfwCalibrationRequest::InternalSwap(EfwCalibrationRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.id_, lhs_arena,
      &other->_impl_.id_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata EfwCalibrationRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_requests_2fefw_2eproto_getter, &descriptor_table_requests_2fefw_2eproto_once,
      file_level_metadata_requests_2fefw_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace efw
}  // namespace request
}  // namespace lightspeed
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::lightspeed::request::efw::EfwCalibrationRequest*
Arena::CreateMaybeMessage< ::lightspeed::request::efw::EfwCalibrationRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::lightspeed::request::efw::EfwCalibrationRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
