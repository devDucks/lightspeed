// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: requests/efw.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_requests_2fefw_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_requests_2fefw_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_requests_2fefw_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_requests_2fefw_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_requests_2fefw_2eproto;
namespace lightspeed {
namespace request {
namespace efw {
class EfwCalibrationRequest;
struct EfwCalibrationRequestDefaultTypeInternal;
extern EfwCalibrationRequestDefaultTypeInternal _EfwCalibrationRequest_default_instance_;
}  // namespace efw
}  // namespace request
}  // namespace lightspeed
PROTOBUF_NAMESPACE_OPEN
template<> ::lightspeed::request::efw::EfwCalibrationRequest* Arena::CreateMaybeMessage<::lightspeed::request::efw::EfwCalibrationRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace lightspeed {
namespace request {
namespace efw {

// ===================================================================

class EfwCalibrationRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:lightspeed.request.efw.EfwCalibrationRequest) */ {
 public:
  inline EfwCalibrationRequest() : EfwCalibrationRequest(nullptr) {}
  ~EfwCalibrationRequest() override;
  explicit PROTOBUF_CONSTEXPR EfwCalibrationRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  EfwCalibrationRequest(const EfwCalibrationRequest& from);
  EfwCalibrationRequest(EfwCalibrationRequest&& from) noexcept
    : EfwCalibrationRequest() {
    *this = ::std::move(from);
  }

  inline EfwCalibrationRequest& operator=(const EfwCalibrationRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline EfwCalibrationRequest& operator=(EfwCalibrationRequest&& from) noexcept {
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
  static const EfwCalibrationRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const EfwCalibrationRequest* internal_default_instance() {
    return reinterpret_cast<const EfwCalibrationRequest*>(
               &_EfwCalibrationRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(EfwCalibrationRequest& a, EfwCalibrationRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(EfwCalibrationRequest* other) {
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
  void UnsafeArenaSwap(EfwCalibrationRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  EfwCalibrationRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<EfwCalibrationRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const EfwCalibrationRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const EfwCalibrationRequest& from) {
    EfwCalibrationRequest::MergeImpl(*this, from);
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
  void InternalSwap(EfwCalibrationRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "lightspeed.request.efw.EfwCalibrationRequest";
  }
  protected:
  explicit EfwCalibrationRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
  };
  // string id = 1;
  void clear_id();
  const std::string& id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_id();
  PROTOBUF_NODISCARD std::string* release_id();
  void set_allocated_id(std::string* id);
  private:
  const std::string& _internal_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_id(const std::string& value);
  std::string* _internal_mutable_id();
  public:

  // @@protoc_insertion_point(class_scope:lightspeed.request.efw.EfwCalibrationRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_requests_2fefw_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EfwCalibrationRequest

// string id = 1;
inline void EfwCalibrationRequest::clear_id() {
  _impl_.id_.ClearToEmpty();
}
inline const std::string& EfwCalibrationRequest::id() const {
  // @@protoc_insertion_point(field_get:lightspeed.request.efw.EfwCalibrationRequest.id)
  return _internal_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void EfwCalibrationRequest::set_id(ArgT0&& arg0, ArgT... args) {
 
 _impl_.id_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:lightspeed.request.efw.EfwCalibrationRequest.id)
}
inline std::string* EfwCalibrationRequest::mutable_id() {
  std::string* _s = _internal_mutable_id();
  // @@protoc_insertion_point(field_mutable:lightspeed.request.efw.EfwCalibrationRequest.id)
  return _s;
}
inline const std::string& EfwCalibrationRequest::_internal_id() const {
  return _impl_.id_.Get();
}
inline void EfwCalibrationRequest::_internal_set_id(const std::string& value) {
  
  _impl_.id_.Set(value, GetArenaForAllocation());
}
inline std::string* EfwCalibrationRequest::_internal_mutable_id() {
  
  return _impl_.id_.Mutable(GetArenaForAllocation());
}
inline std::string* EfwCalibrationRequest::release_id() {
  // @@protoc_insertion_point(field_release:lightspeed.request.efw.EfwCalibrationRequest.id)
  return _impl_.id_.Release();
}
inline void EfwCalibrationRequest::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  _impl_.id_.SetAllocated(id, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.id_.IsDefault()) {
    _impl_.id_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:lightspeed.request.efw.EfwCalibrationRequest.id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace efw
}  // namespace request
}  // namespace lightspeed

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_requests_2fefw_2eproto
