// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol/properties/props.proto

#include "protocol/properties/props.pb.h"

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
namespace props {
PROTOBUF_CONSTEXPR Property::Property(
    ::_pbi::ConstantInitialized)
  : name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , value_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , kind_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , read_only_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}){}
struct PropertyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PropertyDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PropertyDefaultTypeInternal() {}
  union {
    Property _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PropertyDefaultTypeInternal _Property_default_instance_;
}  // namespace props
}  // namespace lightspeed
static ::_pb::Metadata file_level_metadata_protocol_2fproperties_2fprops_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_protocol_2fproperties_2fprops_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_protocol_2fproperties_2fprops_2eproto = nullptr;

const uint32_t TableStruct_protocol_2fproperties_2fprops_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::lightspeed::props::Property, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::lightspeed::props::Property, name_),
  PROTOBUF_FIELD_OFFSET(::lightspeed::props::Property, value_),
  PROTOBUF_FIELD_OFFSET(::lightspeed::props::Property, kind_),
  PROTOBUF_FIELD_OFFSET(::lightspeed::props::Property, read_only_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::lightspeed::props::Property)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::lightspeed::props::_Property_default_instance_._instance,
};

const char descriptor_table_protodef_protocol_2fproperties_2fprops_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\037protocol/properties/props.proto\022\020light"
  "speed.props\"H\n\010Property\022\014\n\004name\030\001 \001(\t\022\r\n"
  "\005value\030\002 \001(\t\022\014\n\004kind\030\003 \001(\t\022\021\n\tread_only\030"
  "\004 \001(\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_protocol_2fproperties_2fprops_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protocol_2fproperties_2fprops_2eproto = {
    false, false, 133, descriptor_table_protodef_protocol_2fproperties_2fprops_2eproto,
    "protocol/properties/props.proto",
    &descriptor_table_protocol_2fproperties_2fprops_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_protocol_2fproperties_2fprops_2eproto::offsets,
    file_level_metadata_protocol_2fproperties_2fprops_2eproto, file_level_enum_descriptors_protocol_2fproperties_2fprops_2eproto,
    file_level_service_descriptors_protocol_2fproperties_2fprops_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protocol_2fproperties_2fprops_2eproto_getter() {
  return &descriptor_table_protocol_2fproperties_2fprops_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protocol_2fproperties_2fprops_2eproto(&descriptor_table_protocol_2fproperties_2fprops_2eproto);
namespace lightspeed {
namespace props {

// ===================================================================

class Property::_Internal {
 public:
};

Property::Property(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:lightspeed.props.Property)
}
Property::Property(const Property& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    name_.Set(from._internal_name(), 
      GetArenaForAllocation());
  }
  value_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    value_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_value().empty()) {
    value_.Set(from._internal_value(), 
      GetArenaForAllocation());
  }
  kind_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    kind_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_kind().empty()) {
    kind_.Set(from._internal_kind(), 
      GetArenaForAllocation());
  }
  read_only_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    read_only_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_read_only().empty()) {
    read_only_.Set(from._internal_read_only(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:lightspeed.props.Property)
}

inline void Property::SharedCtor() {
name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
value_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  value_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
kind_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  kind_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
read_only_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  read_only_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Property::~Property() {
  // @@protoc_insertion_point(destructor:lightspeed.props.Property)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Property::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.Destroy();
  value_.Destroy();
  kind_.Destroy();
  read_only_.Destroy();
}

void Property::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Property::Clear() {
// @@protoc_insertion_point(message_clear_start:lightspeed.props.Property)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty();
  value_.ClearToEmpty();
  kind_.ClearToEmpty();
  read_only_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Property::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "lightspeed.props.Property.name"));
        } else
          goto handle_unusual;
        continue;
      // string value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_value();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "lightspeed.props.Property.value"));
        } else
          goto handle_unusual;
        continue;
      // string kind = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_kind();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "lightspeed.props.Property.kind"));
        } else
          goto handle_unusual;
        continue;
      // string read_only = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_read_only();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "lightspeed.props.Property.read_only"));
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

uint8_t* Property::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:lightspeed.props.Property)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "lightspeed.props.Property.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // string value = 2;
  if (!this->_internal_value().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_value().data(), static_cast<int>(this->_internal_value().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "lightspeed.props.Property.value");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_value(), target);
  }

  // string kind = 3;
  if (!this->_internal_kind().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_kind().data(), static_cast<int>(this->_internal_kind().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "lightspeed.props.Property.kind");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_kind(), target);
  }

  // string read_only = 4;
  if (!this->_internal_read_only().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_read_only().data(), static_cast<int>(this->_internal_read_only().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "lightspeed.props.Property.read_only");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_read_only(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:lightspeed.props.Property)
  return target;
}

size_t Property::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:lightspeed.props.Property)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string value = 2;
  if (!this->_internal_value().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_value());
  }

  // string kind = 3;
  if (!this->_internal_kind().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_kind());
  }

  // string read_only = 4;
  if (!this->_internal_read_only().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_read_only());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Property::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Property::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Property::GetClassData() const { return &_class_data_; }

void Property::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Property *>(to)->MergeFrom(
      static_cast<const Property &>(from));
}


void Property::MergeFrom(const Property& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:lightspeed.props.Property)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _internal_set_name(from._internal_name());
  }
  if (!from._internal_value().empty()) {
    _internal_set_value(from._internal_value());
  }
  if (!from._internal_kind().empty()) {
    _internal_set_kind(from._internal_kind());
  }
  if (!from._internal_read_only().empty()) {
    _internal_set_read_only(from._internal_read_only());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Property::CopyFrom(const Property& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:lightspeed.props.Property)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Property::IsInitialized() const {
  return true;
}

void Property::InternalSwap(Property* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &value_, lhs_arena,
      &other->value_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &kind_, lhs_arena,
      &other->kind_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &read_only_, lhs_arena,
      &other->read_only_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Property::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protocol_2fproperties_2fprops_2eproto_getter, &descriptor_table_protocol_2fproperties_2fprops_2eproto_once,
      file_level_metadata_protocol_2fproperties_2fprops_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace props
}  // namespace lightspeed
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::lightspeed::props::Property*
Arena::CreateMaybeMessage< ::lightspeed::props::Property >(Arena* arena) {
  return Arena::CreateMessageInternal< ::lightspeed::props::Property >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
