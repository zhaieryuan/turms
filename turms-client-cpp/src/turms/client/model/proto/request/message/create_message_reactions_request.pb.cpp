// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/message/create_message_reactions_request.proto
// Protobuf C++ Version: 5.29.1

#include "turms/client/model/proto/request/message/create_message_reactions_request.pb.h"

#include <algorithm>
#include <type_traits>

#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
#include "google/protobuf/wire_format_lite.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace turms {
namespace client {
namespace model {
namespace proto {

inline constexpr CreateMessageReactionsRequest::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : reaction_types_{},
      _reaction_types_cached_byte_size_{0},
      custom_attributes_{},
      message_id_{::int64_t{0}},
      _cached_size_{0} {
}

template <typename>
PROTOBUF_CONSTEXPR CreateMessageReactionsRequest::CreateMessageReactionsRequest(
    ::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct CreateMessageReactionsRequestDefaultTypeInternal {
    PROTOBUF_CONSTEXPR CreateMessageReactionsRequestDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~CreateMessageReactionsRequestDefaultTypeInternal() {
    }
    union {
        CreateMessageReactionsRequest _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    CreateMessageReactionsRequestDefaultTypeInternal
        _CreateMessageReactionsRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class CreateMessageReactionsRequest::_Internal {
   public:
};

void CreateMessageReactionsRequest::clear_custom_attributes() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.custom_attributes_.Clear();
}
CreateMessageReactionsRequest::CreateMessageReactionsRequest(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.CreateMessageReactionsRequest)
}
inline PROTOBUF_NDEBUG_INLINE CreateMessageReactionsRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from,
    const ::turms::client::model::proto::CreateMessageReactionsRequest& from_msg)
    : reaction_types_{visibility, arena, from.reaction_types_},
      _reaction_types_cached_byte_size_{0},
      custom_attributes_{visibility, arena, from.custom_attributes_},
      _cached_size_{0} {
}

CreateMessageReactionsRequest::CreateMessageReactionsRequest(
    ::google::protobuf::Arena* arena, const CreateMessageReactionsRequest& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    CreateMessageReactionsRequest* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
    _impl_.message_id_ = from._impl_.message_id_;

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.CreateMessageReactionsRequest)
}
inline PROTOBUF_NDEBUG_INLINE CreateMessageReactionsRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : reaction_types_{visibility, arena},
      _reaction_types_cached_byte_size_{0},
      custom_attributes_{visibility, arena},
      _cached_size_{0} {
}

inline void CreateMessageReactionsRequest::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
    _impl_.message_id_ = {};
}
CreateMessageReactionsRequest::~CreateMessageReactionsRequest() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.CreateMessageReactionsRequest)
    SharedDtor(*this);
}
inline void CreateMessageReactionsRequest::SharedDtor(MessageLite& self) {
    CreateMessageReactionsRequest& this_ = static_cast<CreateMessageReactionsRequest&>(self);
    this_._internal_metadata_.Delete<std::string>();
    ABSL_DCHECK(this_.GetArena() == nullptr);
    this_._impl_.~Impl_();
}

inline void* CreateMessageReactionsRequest::PlacementNew_(const void*,
                                                          void* mem,
                                                          ::google::protobuf::Arena* arena) {
    return ::new (mem) CreateMessageReactionsRequest(arena);
}
constexpr auto CreateMessageReactionsRequest::InternalNewImpl_() {
    constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
        PROTOBUF_FIELD_OFFSET(CreateMessageReactionsRequest, _impl_.reaction_types_) +
            decltype(CreateMessageReactionsRequest::_impl_.reaction_types_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
        PROTOBUF_FIELD_OFFSET(CreateMessageReactionsRequest, _impl_.custom_attributes_) +
            decltype(CreateMessageReactionsRequest::_impl_.custom_attributes_)::
                InternalGetArenaOffset(::google::protobuf::MessageLite::internal_visibility()),
    });
    if (arena_bits.has_value()) {
        return ::google::protobuf::internal::MessageCreator::ZeroInit(
            sizeof(CreateMessageReactionsRequest),
            alignof(CreateMessageReactionsRequest),
            *arena_bits);
    } else {
        return ::google::protobuf::internal::MessageCreator(
            &CreateMessageReactionsRequest::PlacementNew_,
            sizeof(CreateMessageReactionsRequest),
            alignof(CreateMessageReactionsRequest));
    }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataLite<55> CreateMessageReactionsRequest::_class_data_ =
    {
        {
            &_CreateMessageReactionsRequest_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &CreateMessageReactionsRequest::MergeImpl,
            ::google::protobuf::MessageLite::GetNewImpl<CreateMessageReactionsRequest>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
            &CreateMessageReactionsRequest::SharedDtor,
            ::google::protobuf::MessageLite::GetClearImpl<CreateMessageReactionsRequest>(),
            &CreateMessageReactionsRequest::ByteSizeLong,
            &CreateMessageReactionsRequest::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(CreateMessageReactionsRequest, _impl_._cached_size_),
            true,
        },
        "turms.client.model.proto.CreateMessageReactionsRequest",
    };
const ::google::protobuf::internal::ClassData* CreateMessageReactionsRequest::GetClassData() const {
    return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<2, 3, 1, 0, 2>
    CreateMessageReactionsRequest::_table_ = {
        {
            0,  // no _has_bits_
            0,  // no _extensions_
            15,
            24,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294950908,  // skipmap
            offsetof(decltype(_table_), field_entries),
            3,  // num_field_entries
            1,  // num_aux_entries
            offsetof(decltype(_table_), aux_entries),
            _class_data_.base(),
            nullptr,                                // post_loop_handler
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<
                ::turms::client::model::proto::CreateMessageReactionsRequest>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            {::_pbi::TcParser::MiniParse, {}},
            // int64 message_id = 1;
            {::_pbi::TcParser::FastV64S1,
             {8, 63, 0, PROTOBUF_FIELD_OFFSET(CreateMessageReactionsRequest, _impl_.message_id_)}},
            // repeated int32 reaction_types = 2;
            {::_pbi::TcParser::FastV32P1,
             {18,
              63,
              0,
              PROTOBUF_FIELD_OFFSET(CreateMessageReactionsRequest, _impl_.reaction_types_)}},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {::_pbi::TcParser::FastMtR1,
             {122,
              63,
              0,
              PROTOBUF_FIELD_OFFSET(CreateMessageReactionsRequest, _impl_.custom_attributes_)}},
        }},
        {{65535, 65535}},
        {{
            // int64 message_id = 1;
            {PROTOBUF_FIELD_OFFSET(CreateMessageReactionsRequest, _impl_.message_id_),
             0,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kInt64)},
            // repeated int32 reaction_types = 2;
            {PROTOBUF_FIELD_OFFSET(CreateMessageReactionsRequest, _impl_.reaction_types_),
             0,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kPackedInt32)},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {PROTOBUF_FIELD_OFFSET(CreateMessageReactionsRequest, _impl_.custom_attributes_),
             0,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
        }},
        {{
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::Value>()},
        }},
        {{}},
    };

PROTOBUF_NOINLINE void CreateMessageReactionsRequest::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.CreateMessageReactionsRequest)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.reaction_types_.Clear();
    _impl_.custom_attributes_.Clear();
    _impl_.message_id_ = ::int64_t{0};
    _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::uint8_t* CreateMessageReactionsRequest::_InternalSerialize(
    const MessageLite& base,
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) {
    const CreateMessageReactionsRequest& this_ =
        static_cast<const CreateMessageReactionsRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::uint8_t* CreateMessageReactionsRequest::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    const CreateMessageReactionsRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.CreateMessageReactionsRequest)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    // int64 message_id = 1;
    if (this_._internal_message_id() != 0) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>(
            stream, this_._internal_message_id(), target);
    }

    // repeated int32 reaction_types = 2;
    {
        int byte_size = this_._impl_._reaction_types_cached_byte_size_.Get();
        if (byte_size > 0) {
            target =
                stream->WriteInt32Packed(2, this_._internal_reaction_types(), byte_size, target);
        }
    }

    // repeated .turms.client.model.proto.Value custom_attributes = 15;
    for (unsigned i = 0, n = static_cast<unsigned>(this_._internal_custom_attributes_size()); i < n;
         i++) {
        const auto& repfield = this_._internal_custom_attributes().Get(i);
        target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
            15, repfield, repfield.GetCachedSize(), target, stream);
    }

    if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
        target = stream->WriteRaw(
            this_._internal_metadata_
                .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                .data(),
            static_cast<int>(
                this_._internal_metadata_
                    .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                    .size()),
            target);
    }
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.CreateMessageReactionsRequest)
    return target;
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::size_t CreateMessageReactionsRequest::ByteSizeLong(const MessageLite& base) {
    const CreateMessageReactionsRequest& this_ =
        static_cast<const CreateMessageReactionsRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::size_t CreateMessageReactionsRequest::ByteSizeLong() const {
    const CreateMessageReactionsRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.CreateMessageReactionsRequest)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    ::_pbi::Prefetch5LinesFrom7Lines(&this_);
    {
        // repeated int32 reaction_types = 2;
        {
            total_size += ::_pbi::WireFormatLite::Int32SizeWithPackedTagSize(
                this_._internal_reaction_types(),
                1,
                this_._impl_._reaction_types_cached_byte_size_);
        }
        // repeated .turms.client.model.proto.Value custom_attributes = 15;
        {
            total_size += 1UL * this_._internal_custom_attributes_size();
            for (const auto& msg : this_._internal_custom_attributes()) {
                total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
            }
        }
    }
    {
        // int64 message_id = 1;
        if (this_._internal_message_id() != 0) {
            total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this_._internal_message_id());
        }
    }
    if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
        total_size += this_._internal_metadata_
                          .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                          .size();
    }
    this_._impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
    return total_size;
}

void CreateMessageReactionsRequest::MergeImpl(::google::protobuf::MessageLite& to_msg,
                                              const ::google::protobuf::MessageLite& from_msg) {
    auto* const _this = static_cast<CreateMessageReactionsRequest*>(&to_msg);
    auto& from = static_cast<const CreateMessageReactionsRequest&>(from_msg);
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.CreateMessageReactionsRequest)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    _this->_internal_mutable_reaction_types()->MergeFrom(from._internal_reaction_types());
    _this->_internal_mutable_custom_attributes()->MergeFrom(from._internal_custom_attributes());
    if (from._internal_message_id() != 0) {
        _this->_impl_.message_id_ = from._impl_.message_id_;
    }
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void CreateMessageReactionsRequest::CopyFrom(const CreateMessageReactionsRequest& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.CreateMessageReactionsRequest)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void CreateMessageReactionsRequest::InternalSwap(
    CreateMessageReactionsRequest* PROTOBUF_RESTRICT other) {
    using std::swap;
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    _impl_.reaction_types_.InternalSwap(&other->_impl_.reaction_types_);
    _impl_.custom_attributes_.InternalSwap(&other->_impl_.custom_attributes_);
    swap(_impl_.message_id_, other->_impl_.message_id_);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"