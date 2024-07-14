// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/message/create_message_reactions_request.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_request_2fmessage_2fcreate_5fmessage_5freactions_5frequest_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_request_2fmessage_2fcreate_5fmessage_5freactions_5frequest_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027002
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
#include "turms/client/model/proto/model/common/value.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_request_2fmessage_2fcreate_5fmessage_5freactions_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_request_2fmessage_2fcreate_5fmessage_5freactions_5frequest_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class CreateMessageReactionsRequest;
struct CreateMessageReactionsRequestDefaultTypeInternal;
extern CreateMessageReactionsRequestDefaultTypeInternal
    _CreateMessageReactionsRequest_default_instance_;
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

class CreateMessageReactionsRequest final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.CreateMessageReactionsRequest)
 */
{
   public:
    inline CreateMessageReactionsRequest()
        : CreateMessageReactionsRequest(nullptr) {
    }
    ~CreateMessageReactionsRequest() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR CreateMessageReactionsRequest(
        ::google::protobuf::internal::ConstantInitialized);

    inline CreateMessageReactionsRequest(const CreateMessageReactionsRequest& from)
        : CreateMessageReactionsRequest(nullptr, from) {
    }
    inline CreateMessageReactionsRequest(CreateMessageReactionsRequest&& from) noexcept
        : CreateMessageReactionsRequest(nullptr, std::move(from)) {
    }
    inline CreateMessageReactionsRequest& operator=(const CreateMessageReactionsRequest& from) {
        CopyFrom(from);
        return *this;
    }
    inline CreateMessageReactionsRequest& operator=(CreateMessageReactionsRequest&& from) noexcept {
        if (this == &from)
            return *this;
        if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
            && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
        ) {
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

    static const CreateMessageReactionsRequest& default_instance() {
        return *internal_default_instance();
    }
    static inline const CreateMessageReactionsRequest* internal_default_instance() {
        return reinterpret_cast<const CreateMessageReactionsRequest*>(
            &_CreateMessageReactionsRequest_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(CreateMessageReactionsRequest& a, CreateMessageReactionsRequest& b) {
        a.Swap(&b);
    }
    inline void Swap(CreateMessageReactionsRequest* other) {
        if (other == this)
            return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
        if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
        if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(CreateMessageReactionsRequest* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    CreateMessageReactionsRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<CreateMessageReactionsRequest>(
            arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const CreateMessageReactionsRequest& from);
    void MergeFrom(const CreateMessageReactionsRequest& from);
    bool IsInitialized() const {
        return true;
    }
    ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
    ::size_t ByteSizeLong() const final;
    ::uint8_t* _InternalSerialize(::uint8_t* target,
                                  ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
    int GetCachedSize() const {
        return _impl_._cached_size_.Get();
    }

   private:
    void SharedCtor(::google::protobuf::Arena* arena);
    void SharedDtor();
    void InternalSwap(CreateMessageReactionsRequest* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.CreateMessageReactionsRequest";
    }

   protected:
    explicit CreateMessageReactionsRequest(::google::protobuf::Arena* arena);
    CreateMessageReactionsRequest(::google::protobuf::Arena* arena,
                                  const CreateMessageReactionsRequest& from);
    CreateMessageReactionsRequest(::google::protobuf::Arena* arena,
                                  CreateMessageReactionsRequest&& from) noexcept
        : CreateMessageReactionsRequest(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kReactionTypesFieldNumber = 2,
        kCustomAttributesFieldNumber = 15,
        kMessageIdFieldNumber = 1,
    };
    // repeated int32 reaction_types = 2;
    int reaction_types_size() const;

   private:
    int _internal_reaction_types_size() const;

   public:
    void clear_reaction_types();
    ::int32_t reaction_types(int index) const;
    void set_reaction_types(int index, ::int32_t value);
    void add_reaction_types(::int32_t value);
    const ::google::protobuf::RepeatedField<::int32_t>& reaction_types() const;
    ::google::protobuf::RepeatedField<::int32_t>* mutable_reaction_types();

   private:
    const ::google::protobuf::RepeatedField<::int32_t>& _internal_reaction_types() const;
    ::google::protobuf::RepeatedField<::int32_t>* _internal_mutable_reaction_types();

   public:
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
    // int64 message_id = 1;
    void clear_message_id();
    ::int64_t message_id() const;
    void set_message_id(::int64_t value);

   private:
    ::int64_t _internal_message_id() const;
    void _internal_set_message_id(::int64_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.CreateMessageReactionsRequest)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<2, 3, 1, 0, 2> _table_;

    static constexpr const void* _raw_default_instance_ =
        &_CreateMessageReactionsRequest_default_instance_;

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
                              const CreateMessageReactionsRequest& from_msg);
        ::google::protobuf::RepeatedField<::int32_t> reaction_types_;
        mutable ::google::protobuf::internal::CachedSize _reaction_types_cached_byte_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::int64_t message_id_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_request_2fmessage_2fcreate_5fmessage_5freactions_5frequest_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// CreateMessageReactionsRequest

// int64 message_id = 1;
inline void CreateMessageReactionsRequest::clear_message_id() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.message_id_ = ::int64_t{0};
}
inline ::int64_t CreateMessageReactionsRequest::message_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateMessageReactionsRequest.message_id)
    return _internal_message_id();
}
inline void CreateMessageReactionsRequest::set_message_id(::int64_t value) {
    _internal_set_message_id(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.CreateMessageReactionsRequest.message_id)
}
inline ::int64_t CreateMessageReactionsRequest::_internal_message_id() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.message_id_;
}
inline void CreateMessageReactionsRequest::_internal_set_message_id(::int64_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.message_id_ = value;
}

// repeated int32 reaction_types = 2;
inline int CreateMessageReactionsRequest::_internal_reaction_types_size() const {
    return _internal_reaction_types().size();
}
inline int CreateMessageReactionsRequest::reaction_types_size() const {
    return _internal_reaction_types_size();
}
inline void CreateMessageReactionsRequest::clear_reaction_types() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.reaction_types_.Clear();
}
inline ::int32_t CreateMessageReactionsRequest::reaction_types(int index) const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateMessageReactionsRequest.reaction_types)
    return _internal_reaction_types().Get(index);
}
inline void CreateMessageReactionsRequest::set_reaction_types(int index, ::int32_t value) {
    _internal_mutable_reaction_types()->Set(index, value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.CreateMessageReactionsRequest.reaction_types)
}
inline void CreateMessageReactionsRequest::add_reaction_types(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _internal_mutable_reaction_types()->Add(value);
    // @@protoc_insertion_point(field_add:turms.client.model.proto.CreateMessageReactionsRequest.reaction_types)
}
inline const ::google::protobuf::RepeatedField<::int32_t>&
CreateMessageReactionsRequest::reaction_types() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.CreateMessageReactionsRequest.reaction_types)
    return _internal_reaction_types();
}
inline ::google::protobuf::RepeatedField<::int32_t>*
CreateMessageReactionsRequest::mutable_reaction_types() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.CreateMessageReactionsRequest.reaction_types)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_reaction_types();
}
inline const ::google::protobuf::RepeatedField<::int32_t>&
CreateMessageReactionsRequest::_internal_reaction_types() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.reaction_types_;
}
inline ::google::protobuf::RepeatedField<::int32_t>*
CreateMessageReactionsRequest::_internal_mutable_reaction_types() {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return &_impl_.reaction_types_;
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int CreateMessageReactionsRequest::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int CreateMessageReactionsRequest::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value*
CreateMessageReactionsRequest::mutable_custom_attributes(int index) ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.CreateMessageReactionsRequest.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
CreateMessageReactionsRequest::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.CreateMessageReactionsRequest.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& CreateMessageReactionsRequest::custom_attributes(
    int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.CreateMessageReactionsRequest.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* CreateMessageReactionsRequest::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.CreateMessageReactionsRequest.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
CreateMessageReactionsRequest::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.CreateMessageReactionsRequest.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
CreateMessageReactionsRequest::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
CreateMessageReactionsRequest::_internal_mutable_custom_attributes() {
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_request_2fmessage_2fcreate_5fmessage_5freactions_5frequest_2eproto_2epb_2eh
