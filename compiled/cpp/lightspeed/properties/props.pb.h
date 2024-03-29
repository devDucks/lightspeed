// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: properties/props.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_properties_2fprops_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_properties_2fprops_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021007 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_properties_2fprops_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_properties_2fprops_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_properties_2fprops_2eproto;
namespace lightspeed {
namespace props {
class Property;
struct PropertyDefaultTypeInternal;
extern PropertyDefaultTypeInternal _Property_default_instance_;
}  // namespace props
}  // namespace lightspeed
PROTOBUF_NAMESPACE_OPEN
template<> ::lightspeed::props::Property* Arena::CreateMaybeMessage<::lightspeed::props::Property>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace lightspeed {
namespace props {

enum Permission : int {
  ReadOnly = 0,
  ReadWrite = 1,
  WriteOnly = 2,
  Permission_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  Permission_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool Permission_IsValid(int value);
constexpr Permission Permission_MIN = ReadOnly;
constexpr Permission Permission_MAX = WriteOnly;
constexpr int Permission_ARRAYSIZE = Permission_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Permission_descriptor();
template<typename T>
inline const std::string& Permission_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Permission>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Permission_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Permission_descriptor(), enum_t_value);
}
inline bool Permission_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Permission* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Permission>(
    Permission_descriptor(), name, value);
}
// ===================================================================

class Property final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:lightspeed.props.Property) */ {
 public:
  inline Property() : Property(nullptr) {}
  ~Property() override;
  explicit PROTOBUF_CONSTEXPR Property(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Property(const Property& from);
  Property(Property&& from) noexcept
    : Property() {
    *this = ::std::move(from);
  }

  inline Property& operator=(const Property& from) {
    CopyFrom(from);
    return *this;
  }
  inline Property& operator=(Property&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Property& default_instance() {
    return *internal_default_instance();
  }
  static inline const Property* internal_default_instance() {
    return reinterpret_cast<const Property*>(
               &_Property_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Property& a, Property& b) {
    a.Swap(&b);
  }
  inline void Swap(Property* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Property* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Property* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Property>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Property& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Property& from) {
    Property::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Property* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "lightspeed.props.Property";
  }
  protected:
  explicit Property(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kValueFieldNumber = 2,
    kKindFieldNumber = 3,
    kPermissionFieldNumber = 4,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string value = 2;
  void clear_value();
  const std::string& value() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_value(ArgT0&& arg0, ArgT... args);
  std::string* mutable_value();
  PROTOBUF_NODISCARD std::string* release_value();
  void set_allocated_value(std::string* value);
  private:
  const std::string& _internal_value() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_value(const std::string& value);
  std::string* _internal_mutable_value();
  public:

  // string kind = 3;
  void clear_kind();
  const std::string& kind() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_kind(ArgT0&& arg0, ArgT... args);
  std::string* mutable_kind();
  PROTOBUF_NODISCARD std::string* release_kind();
  void set_allocated_kind(std::string* kind);
  private:
  const std::string& _internal_kind() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_kind(const std::string& value);
  std::string* _internal_mutable_kind();
  public:

  // .lightspeed.props.Permission permission = 4;
  void clear_permission();
  ::lightspeed::props::Permission permission() const;
  void set_permission(::lightspeed::props::Permission value);
  private:
  ::lightspeed::props::Permission _internal_permission() const;
  void _internal_set_permission(::lightspeed::props::Permission value);
  public:

  // @@protoc_insertion_point(class_scope:lightspeed.props.Property)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr value_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr kind_;
    int permission_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_properties_2fprops_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Property

// string name = 1;
inline void Property::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& Property::name() const {
  // @@protoc_insertion_point(field_get:lightspeed.props.Property.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Property::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:lightspeed.props.Property.name)
}
inline std::string* Property::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:lightspeed.props.Property.name)
  return _s;
}
inline const std::string& Property::_internal_name() const {
  return _impl_.name_.Get();
}
inline void Property::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* Property::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* Property::release_name() {
  // @@protoc_insertion_point(field_release:lightspeed.props.Property.name)
  return _impl_.name_.Release();
}
inline void Property::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:lightspeed.props.Property.name)
}

// string value = 2;
inline void Property::clear_value() {
  _impl_.value_.ClearToEmpty();
}
inline const std::string& Property::value() const {
  // @@protoc_insertion_point(field_get:lightspeed.props.Property.value)
  return _internal_value();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Property::set_value(ArgT0&& arg0, ArgT... args) {
 
 _impl_.value_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:lightspeed.props.Property.value)
}
inline std::string* Property::mutable_value() {
  std::string* _s = _internal_mutable_value();
  // @@protoc_insertion_point(field_mutable:lightspeed.props.Property.value)
  return _s;
}
inline const std::string& Property::_internal_value() const {
  return _impl_.value_.Get();
}
inline void Property::_internal_set_value(const std::string& value) {
  
  _impl_.value_.Set(value, GetArenaForAllocation());
}
inline std::string* Property::_internal_mutable_value() {
  
  return _impl_.value_.Mutable(GetArenaForAllocation());
}
inline std::string* Property::release_value() {
  // @@protoc_insertion_point(field_release:lightspeed.props.Property.value)
  return _impl_.value_.Release();
}
inline void Property::set_allocated_value(std::string* value) {
  if (value != nullptr) {
    
  } else {
    
  }
  _impl_.value_.SetAllocated(value, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.value_.IsDefault()) {
    _impl_.value_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:lightspeed.props.Property.value)
}

// string kind = 3;
inline void Property::clear_kind() {
  _impl_.kind_.ClearToEmpty();
}
inline const std::string& Property::kind() const {
  // @@protoc_insertion_point(field_get:lightspeed.props.Property.kind)
  return _internal_kind();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Property::set_kind(ArgT0&& arg0, ArgT... args) {
 
 _impl_.kind_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:lightspeed.props.Property.kind)
}
inline std::string* Property::mutable_kind() {
  std::string* _s = _internal_mutable_kind();
  // @@protoc_insertion_point(field_mutable:lightspeed.props.Property.kind)
  return _s;
}
inline const std::string& Property::_internal_kind() const {
  return _impl_.kind_.Get();
}
inline void Property::_internal_set_kind(const std::string& value) {
  
  _impl_.kind_.Set(value, GetArenaForAllocation());
}
inline std::string* Property::_internal_mutable_kind() {
  
  return _impl_.kind_.Mutable(GetArenaForAllocation());
}
inline std::string* Property::release_kind() {
  // @@protoc_insertion_point(field_release:lightspeed.props.Property.kind)
  return _impl_.kind_.Release();
}
inline void Property::set_allocated_kind(std::string* kind) {
  if (kind != nullptr) {
    
  } else {
    
  }
  _impl_.kind_.SetAllocated(kind, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.kind_.IsDefault()) {
    _impl_.kind_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:lightspeed.props.Property.kind)
}

// .lightspeed.props.Permission permission = 4;
inline void Property::clear_permission() {
  _impl_.permission_ = 0;
}
inline ::lightspeed::props::Permission Property::_internal_permission() const {
  return static_cast< ::lightspeed::props::Permission >(_impl_.permission_);
}
inline ::lightspeed::props::Permission Property::permission() const {
  // @@protoc_insertion_point(field_get:lightspeed.props.Property.permission)
  return _internal_permission();
}
inline void Property::_internal_set_permission(::lightspeed::props::Permission value) {
  
  _impl_.permission_ = value;
}
inline void Property::set_permission(::lightspeed::props::Permission value) {
  _internal_set_permission(value);
  // @@protoc_insertion_point(field_set:lightspeed.props.Property.permission)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace props
}  // namespace lightspeed

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::lightspeed::props::Permission> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::lightspeed::props::Permission>() {
  return ::lightspeed::props::Permission_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_properties_2fprops_2eproto
