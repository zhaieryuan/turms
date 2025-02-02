// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/user/user_friend_request.proto
// Protobuf C++ Version: 5.29.1

#ifndef model_2fuser_2fuser_5ffriend_5frequest_2eproto_2epb_2eh
#define model_2fuser_2fuser_5ffriend_5frequest_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5029001
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "turms/client/model/proto/constant/request_status.pb.h"
#include "turms/client/model/proto/model/common/value.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fuser_2fuser_5ffriend_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fuser_2fuser_5ffriend_5frequest_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class UserFriendRequest;
struct UserFriendRequestDefaultTypeInternal;
extern UserFriendRequestDefaultTypeInternal _UserFriendRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {}  // namespace protobuf
}  // namespace google

namespace turms {
namespace client {
namespace model {
namespace proto {

// ===================================================================

// -------------------------------------------------------------------

class UserFriendRequest final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.UserFriendRequest) */ {
   public:
    inline UserFriendRequest()
        : UserFriendRequest(nullptr) {
    }
    ~UserFriendRequest() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
    void operator delete(UserFriendRequest* msg, std::destroying_delete_t) {
        SharedDtor(*msg);
        ::google::protobuf::internal::SizedDelete(msg, sizeof(UserFriendRequest));
    }
#endif

    template <typename = void>
    explicit PROTOBUF_CONSTEXPR UserFriendRequest(
        ::google::protobuf::internal::ConstantInitialized);

    inline UserFriendRequest(const UserFriendRequest& from)
        : UserFriendRequest(nullptr, from) {
    }
    inline UserFriendRequest(UserFriendRequest&& from) noexcept
        : UserFriendRequest(nullptr, std::move(from)) {
    }
    inline UserFriendRequest& operator=(const UserFriendRequest& from) {
        CopyFrom(from);
        return *this;
    }
    inline UserFriendRequest& operator=(UserFriendRequest&& from) noexcept {
        if (this == &from)
            return *this;
        if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
            InternalSwap(&from);
        } else {
            CopyFrom(from);
        }
        return *this;
    }

    inline const std::string& unknown_fields() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
        return _internal_metadata_.unknown_fields<std::string>(
            ::google::protobuf::internal::GetEmptyString);
    }
    inline std::string* mutable_unknown_fields() ABSL_ATTRIBUTE_LIFETIME_BOUND {
        return _internal_metadata_.mutable_unknown_fields<std::string>();
    }

    static const UserFriendRequest& default_instance() {
        return *internal_default_instance();
    }
    static inline const UserFriendRequest* internal_default_instance() {
        return reinterpret_cast<const UserFriendRequest*>(&_UserFriendRequest_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(UserFriendRequest& a, UserFriendRequest& b) {
        a.Swap(&b);
    }
    inline void Swap(UserFriendRequest* other) {
        if (other == this)
            return;
        if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(UserFriendRequest* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    UserFriendRequest* New(::google::protobuf::Arena* arena = nullptr) const {
        return ::google::protobuf::MessageLite::DefaultConstruct<UserFriendRequest>(arena);
    }
    void CopyFrom(const UserFriendRequest& from);
    void MergeFrom(const UserFriendRequest& from) {
        UserFriendRequest::MergeImpl(*this, from);
    }

   private:
    static void MergeImpl(::google::protobuf::MessageLite& to_msg,
                          const ::google::protobuf::MessageLite& from_msg);

   public:
    bool IsInitialized() const {
        return true;
    }
    ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
#if defined(PROTOBUF_CUSTOM_VTABLE)
   private:
    static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
    static ::uint8_t* _InternalSerialize(const MessageLite& msg,
                                         ::uint8_t* target,
                                         ::google::protobuf::io::EpsCopyOutputStream* stream);

   public:
    ::size_t ByteSizeLong() const {
        return ByteSizeLong(*this);
    }
    ::uint8_t* _InternalSerialize(::uint8_t* target,
                                  ::google::protobuf::io::EpsCopyOutputStream* stream) const {
        return _InternalSerialize(*this, target, stream);
    }
#else   // PROTOBUF_CUSTOM_VTABLE
    ::size_t ByteSizeLong() const final;
    ::uint8_t* _InternalSerialize(::uint8_t* target,
                                  ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
#endif  // PROTOBUF_CUSTOM_VTABLE
    int GetCachedSize() const {
        return _impl_._cached_size_.Get();
    }

   private:
    void SharedCtor(::google::protobuf::Arena* arena);
    static void SharedDtor(MessageLite& self);
    void InternalSwap(UserFriendRequest* other);

   private:
    template <typename T>
    friend ::absl::string_view(::google::protobuf::internal::GetAnyMessageName)();
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.UserFriendRequest";
    }

   protected:
    explicit UserFriendRequest(::google::protobuf::Arena* arena);
    UserFriendRequest(::google::protobuf::Arena* arena, const UserFriendRequest& from);
    UserFriendRequest(::google::protobuf::Arena* arena, UserFriendRequest&& from) noexcept
        : UserFriendRequest(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
    static void* PlacementNew_(const void*, void* mem, ::google::protobuf::Arena* arena);
    static constexpr auto InternalNewImpl_();
    static const ::google::protobuf::internal::ClassDataLite<43> _class_data_;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kCustomAttributesFieldNumber = 15,
        kContentFieldNumber = 3,
        kReasonFieldNumber = 5,
        kIdFieldNumber = 1,
        kCreationDateFieldNumber = 2,
        kExpirationDateFieldNumber = 6,
        kRequesterIdFieldNumber = 7,
        kRecipientIdFieldNumber = 8,
        kRequestStatusFieldNumber = 4,
    };
    // repeated .turms.client.model.proto.Value custom_attributes = 15;
    int custom_attributes_size() const;

   private:
    int _internal_custom_attributes_size() const;

   public:
    void clear_custom_attributes();
    ::turms::client::model::proto::Value* mutable_custom_attributes(int index);
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
    mutable_custom_attributes();

   private:
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
    _internal_custom_attributes() const;
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
    _internal_mutable_custom_attributes();

   public:
    const ::turms::client::model::proto::Value& custom_attributes(int index) const;
    ::turms::client::model::proto::Value* add_custom_attributes();
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
    custom_attributes() const;
    // optional string content = 3;
    bool has_content() const;
    void clear_content();
    const std::string& content() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_content(Arg_&& arg, Args_... args);
    std::string* mutable_content();
    PROTOBUF_NODISCARD std::string* release_content();
    void set_allocated_content(std::string* value);

   private:
    const std::string& _internal_content() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_content(const std::string& value);
    std::string* _internal_mutable_content();

   public:
    // optional string reason = 5;
    bool has_reason() const;
    void clear_reason();
    const std::string& reason() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_reason(Arg_&& arg, Args_... args);
    std::string* mutable_reason();
    PROTOBUF_NODISCARD std::string* release_reason();
    void set_allocated_reason(std::string* value);

   private:
    const std::string& _internal_reason() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_reason(const std::string& value);
    std::string* _internal_mutable_reason();

   public:
    // optional int64 id = 1;
    bool has_id() const;
    void clear_id();
    ::int64_t id() const;
    void set_id(::int64_t value);

   private:
    ::int64_t _internal_id() const;
    void _internal_set_id(::int64_t value);

   public:
    // optional int64 creation_date = 2;
    bool has_creation_date() const;
    void clear_creation_date();
    ::int64_t creation_date() const;
    void set_creation_date(::int64_t value);

   private:
    ::int64_t _internal_creation_date() const;
    void _internal_set_creation_date(::int64_t value);

   public:
    // optional int64 expiration_date = 6;
    bool has_expiration_date() const;
    void clear_expiration_date();
    ::int64_t expiration_date() const;
    void set_expiration_date(::int64_t value);

   private:
    ::int64_t _internal_expiration_date() const;
    void _internal_set_expiration_date(::int64_t value);

   public:
    // optional int64 requester_id = 7;
    bool has_requester_id() const;
    void clear_requester_id();
    ::int64_t requester_id() const;
    void set_requester_id(::int64_t value);

   private:
    ::int64_t _internal_requester_id() const;
    void _internal_set_requester_id(::int64_t value);

   public:
    // optional int64 recipient_id = 8;
    bool has_recipient_id() const;
    void clear_recipient_id();
    ::int64_t recipient_id() const;
    void set_recipient_id(::int64_t value);

   private:
    ::int64_t _internal_recipient_id() const;
    void _internal_set_recipient_id(::int64_t value);

   public:
    // optional .turms.client.model.proto.RequestStatus request_status = 4;
    bool has_request_status() const;
    void clear_request_status();
    ::turms::client::model::proto::RequestStatus request_status() const;
    void set_request_status(::turms::client::model::proto::RequestStatus value);

   private:
    ::turms::client::model::proto::RequestStatus _internal_request_status() const;
    void _internal_set_request_status(::turms::client::model::proto::RequestStatus value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.UserFriendRequest)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<4, 9, 1, 72, 2> _table_;

    friend class ::google::protobuf::MessageLite;
    friend class ::google::protobuf::Arena;
    template <typename T>
    friend class ::google::protobuf::Arena::InternalHelper;
    using InternalArenaConstructable_ = void;
    using DestructorSkippable_ = void;
    struct Impl_ {
        inline explicit constexpr Impl_(::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena,
                              const Impl_& from,
                              const UserFriendRequest& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::google::protobuf::internal::ArenaStringPtr content_;
        ::google::protobuf::internal::ArenaStringPtr reason_;
        ::int64_t id_;
        ::int64_t creation_date_;
        ::int64_t expiration_date_;
        ::int64_t requester_id_;
        ::int64_t recipient_id_;
        int request_status_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fuser_2fuser_5ffriend_5frequest_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// UserFriendRequest

// optional int64 id = 1;
inline bool UserFriendRequest::has_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
    return value;
}
inline void UserFriendRequest::clear_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int64_t UserFriendRequest::id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserFriendRequest.id)
    return _internal_id();
}
inline void UserFriendRequest::set_id(::int64_t value) {
    _internal_set_id(value);
    _impl_._has_bits_[0] |= 0x00000004u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserFriendRequest.id)
}
inline ::int64_t UserFriendRequest::_internal_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.id_;
}
inline void UserFriendRequest::_internal_set_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.id_ = value;
}

// optional int64 creation_date = 2;
inline bool UserFriendRequest::has_creation_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
    return value;
}
inline void UserFriendRequest::clear_creation_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int64_t UserFriendRequest::creation_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserFriendRequest.creation_date)
    return _internal_creation_date();
}
inline void UserFriendRequest::set_creation_date(::int64_t value) {
    _internal_set_creation_date(value);
    _impl_._has_bits_[0] |= 0x00000008u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserFriendRequest.creation_date)
}
inline ::int64_t UserFriendRequest::_internal_creation_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.creation_date_;
}
inline void UserFriendRequest::_internal_set_creation_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.creation_date_ = value;
}

// optional string content = 3;
inline bool UserFriendRequest::has_content() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void UserFriendRequest::clear_content() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.content_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& UserFriendRequest::content() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserFriendRequest.content)
    return _internal_content();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void UserFriendRequest::set_content(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.content_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserFriendRequest.content)
}
inline std::string* UserFriendRequest::mutable_content() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_content();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.UserFriendRequest.content)
    return _s;
}
inline const std::string& UserFriendRequest::_internal_content() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.content_.Get();
}
inline void UserFriendRequest::_internal_set_content(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.content_.Set(value, GetArena());
}
inline std::string* UserFriendRequest::_internal_mutable_content() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    return _impl_.content_.Mutable(GetArena());
}
inline std::string* UserFriendRequest::release_content() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.UserFriendRequest.content)
    if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000001u;
    auto* released = _impl_.content_.Release();
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
        _impl_.content_.Set("", GetArena());
    }
    return released;
}
inline void UserFriendRequest::set_allocated_content(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000001u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000001u;
    }
    _impl_.content_.SetAllocated(value, GetArena());
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() &&
        _impl_.content_.IsDefault()) {
        _impl_.content_.Set("", GetArena());
    }
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.UserFriendRequest.content)
}

// optional .turms.client.model.proto.RequestStatus request_status = 4;
inline bool UserFriendRequest::has_request_status() const {
    bool value = (_impl_._has_bits_[0] & 0x00000080u) != 0;
    return value;
}
inline void UserFriendRequest::clear_request_status() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.request_status_ = 0;
    _impl_._has_bits_[0] &= ~0x00000080u;
}
inline ::turms::client::model::proto::RequestStatus UserFriendRequest::request_status() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserFriendRequest.request_status)
    return _internal_request_status();
}
inline void UserFriendRequest::set_request_status(
    ::turms::client::model::proto::RequestStatus value) {
    _internal_set_request_status(value);
    _impl_._has_bits_[0] |= 0x00000080u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserFriendRequest.request_status)
}
inline ::turms::client::model::proto::RequestStatus UserFriendRequest::_internal_request_status()
    const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return static_cast<::turms::client::model::proto::RequestStatus>(_impl_.request_status_);
}
inline void UserFriendRequest::_internal_set_request_status(
    ::turms::client::model::proto::RequestStatus value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.request_status_ = value;
}

// optional string reason = 5;
inline bool UserFriendRequest::has_reason() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    return value;
}
inline void UserFriendRequest::clear_reason() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.reason_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& UserFriendRequest::reason() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserFriendRequest.reason)
    return _internal_reason();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void UserFriendRequest::set_reason(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000002u;
    _impl_.reason_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserFriendRequest.reason)
}
inline std::string* UserFriendRequest::mutable_reason() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_reason();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.UserFriendRequest.reason)
    return _s;
}
inline const std::string& UserFriendRequest::_internal_reason() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.reason_.Get();
}
inline void UserFriendRequest::_internal_set_reason(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000002u;
    _impl_.reason_.Set(value, GetArena());
}
inline std::string* UserFriendRequest::_internal_mutable_reason() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000002u;
    return _impl_.reason_.Mutable(GetArena());
}
inline std::string* UserFriendRequest::release_reason() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.UserFriendRequest.reason)
    if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000002u;
    auto* released = _impl_.reason_.Release();
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
        _impl_.reason_.Set("", GetArena());
    }
    return released;
}
inline void UserFriendRequest::set_allocated_reason(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000002u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000002u;
    }
    _impl_.reason_.SetAllocated(value, GetArena());
    if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() &&
        _impl_.reason_.IsDefault()) {
        _impl_.reason_.Set("", GetArena());
    }
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.UserFriendRequest.reason)
}

// optional int64 expiration_date = 6;
inline bool UserFriendRequest::has_expiration_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
    return value;
}
inline void UserFriendRequest::clear_expiration_date() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.expiration_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::int64_t UserFriendRequest::expiration_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserFriendRequest.expiration_date)
    return _internal_expiration_date();
}
inline void UserFriendRequest::set_expiration_date(::int64_t value) {
    _internal_set_expiration_date(value);
    _impl_._has_bits_[0] |= 0x00000010u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserFriendRequest.expiration_date)
}
inline ::int64_t UserFriendRequest::_internal_expiration_date() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.expiration_date_;
}
inline void UserFriendRequest::_internal_set_expiration_date(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.expiration_date_ = value;
}

// optional int64 requester_id = 7;
inline bool UserFriendRequest::has_requester_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
    return value;
}
inline void UserFriendRequest::clear_requester_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.requester_id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000020u;
}
inline ::int64_t UserFriendRequest::requester_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserFriendRequest.requester_id)
    return _internal_requester_id();
}
inline void UserFriendRequest::set_requester_id(::int64_t value) {
    _internal_set_requester_id(value);
    _impl_._has_bits_[0] |= 0x00000020u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserFriendRequest.requester_id)
}
inline ::int64_t UserFriendRequest::_internal_requester_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.requester_id_;
}
inline void UserFriendRequest::_internal_set_requester_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.requester_id_ = value;
}

// optional int64 recipient_id = 8;
inline bool UserFriendRequest::has_recipient_id() const {
    bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
    return value;
}
inline void UserFriendRequest::clear_recipient_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.recipient_id_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000040u;
}
inline ::int64_t UserFriendRequest::recipient_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserFriendRequest.recipient_id)
    return _internal_recipient_id();
}
inline void UserFriendRequest::set_recipient_id(::int64_t value) {
    _internal_set_recipient_id(value);
    _impl_._has_bits_[0] |= 0x00000040u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserFriendRequest.recipient_id)
}
inline ::int64_t UserFriendRequest::_internal_recipient_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.recipient_id_;
}
inline void UserFriendRequest::_internal_set_recipient_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.recipient_id_ = value;
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int UserFriendRequest::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int UserFriendRequest::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* UserFriendRequest::mutable_custom_attributes(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.UserFriendRequest.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
UserFriendRequest::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.UserFriendRequest.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& UserFriendRequest::custom_attributes(
    int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserFriendRequest.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* UserFriendRequest::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.UserFriendRequest.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
UserFriendRequest::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.UserFriendRequest.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
UserFriendRequest::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
UserFriendRequest::_internal_mutable_custom_attributes() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.custom_attributes_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // model_2fuser_2fuser_5ffriend_5frequest_2eproto_2epb_2eh