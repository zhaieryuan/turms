// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/group/query_joined_group_ids_request.proto
// Protobuf C++ Version: 5.29.1

#include "turms/client/model/proto/request/group/query_joined_group_ids_request.pb.h"

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

inline constexpr QueryJoinedGroupIdsRequest::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : _cached_size_{0},
      user_ids_for_common_groups_{},
      _user_ids_for_common_groups_cached_byte_size_{0},
      custom_attributes_{},
      last_updated_date_{::int64_t{0}} {
}

template <typename>
PROTOBUF_CONSTEXPR QueryJoinedGroupIdsRequest::QueryJoinedGroupIdsRequest(
    ::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct QueryJoinedGroupIdsRequestDefaultTypeInternal {
    PROTOBUF_CONSTEXPR QueryJoinedGroupIdsRequestDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~QueryJoinedGroupIdsRequestDefaultTypeInternal() {
    }
    union {
        QueryJoinedGroupIdsRequest _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    QueryJoinedGroupIdsRequestDefaultTypeInternal _QueryJoinedGroupIdsRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class QueryJoinedGroupIdsRequest::_Internal {
   public:
    using HasBits = decltype(std::declval<QueryJoinedGroupIdsRequest>()._impl_._has_bits_);
    static constexpr ::int32_t kHasBitsOffset =
        8 * PROTOBUF_FIELD_OFFSET(QueryJoinedGroupIdsRequest, _impl_._has_bits_);
};

void QueryJoinedGroupIdsRequest::clear_custom_attributes() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.custom_attributes_.Clear();
}
QueryJoinedGroupIdsRequest::QueryJoinedGroupIdsRequest(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.QueryJoinedGroupIdsRequest)
}
inline PROTOBUF_NDEBUG_INLINE QueryJoinedGroupIdsRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from,
    const ::turms::client::model::proto::QueryJoinedGroupIdsRequest& from_msg)
    : _has_bits_{from._has_bits_},
      _cached_size_{0},
      user_ids_for_common_groups_{visibility, arena, from.user_ids_for_common_groups_},
      _user_ids_for_common_groups_cached_byte_size_{0},
      custom_attributes_{visibility, arena, from.custom_attributes_} {
}

QueryJoinedGroupIdsRequest::QueryJoinedGroupIdsRequest(::google::protobuf::Arena* arena,
                                                       const QueryJoinedGroupIdsRequest& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    QueryJoinedGroupIdsRequest* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
    _impl_.last_updated_date_ = from._impl_.last_updated_date_;

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.QueryJoinedGroupIdsRequest)
}
inline PROTOBUF_NDEBUG_INLINE QueryJoinedGroupIdsRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : _cached_size_{0},
      user_ids_for_common_groups_{visibility, arena},
      _user_ids_for_common_groups_cached_byte_size_{0},
      custom_attributes_{visibility, arena} {
}

inline void QueryJoinedGroupIdsRequest::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
    _impl_.last_updated_date_ = {};
}
QueryJoinedGroupIdsRequest::~QueryJoinedGroupIdsRequest() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.QueryJoinedGroupIdsRequest)
    SharedDtor(*this);
}
inline void QueryJoinedGroupIdsRequest::SharedDtor(MessageLite& self) {
    QueryJoinedGroupIdsRequest& this_ = static_cast<QueryJoinedGroupIdsRequest&>(self);
    this_._internal_metadata_.Delete<std::string>();
    ABSL_DCHECK(this_.GetArena() == nullptr);
    this_._impl_.~Impl_();
}

inline void* QueryJoinedGroupIdsRequest::PlacementNew_(const void*,
                                                       void* mem,
                                                       ::google::protobuf::Arena* arena) {
    return ::new (mem) QueryJoinedGroupIdsRequest(arena);
}
constexpr auto QueryJoinedGroupIdsRequest::InternalNewImpl_() {
    constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
        PROTOBUF_FIELD_OFFSET(QueryJoinedGroupIdsRequest, _impl_.user_ids_for_common_groups_) +
            decltype(QueryJoinedGroupIdsRequest::_impl_.user_ids_for_common_groups_)::
                InternalGetArenaOffset(::google::protobuf::MessageLite::internal_visibility()),
        PROTOBUF_FIELD_OFFSET(QueryJoinedGroupIdsRequest, _impl_.custom_attributes_) +
            decltype(QueryJoinedGroupIdsRequest::_impl_.custom_attributes_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
    });
    if (arena_bits.has_value()) {
        return ::google::protobuf::internal::MessageCreator::ZeroInit(
            sizeof(QueryJoinedGroupIdsRequest), alignof(QueryJoinedGroupIdsRequest), *arena_bits);
    } else {
        return ::google::protobuf::internal::MessageCreator(
            &QueryJoinedGroupIdsRequest::PlacementNew_,
            sizeof(QueryJoinedGroupIdsRequest),
            alignof(QueryJoinedGroupIdsRequest));
    }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataLite<52> QueryJoinedGroupIdsRequest::_class_data_ = {
    {
        &_QueryJoinedGroupIdsRequest_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &QueryJoinedGroupIdsRequest::MergeImpl,
        ::google::protobuf::MessageLite::GetNewImpl<QueryJoinedGroupIdsRequest>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &QueryJoinedGroupIdsRequest::SharedDtor,
        ::google::protobuf::MessageLite::GetClearImpl<QueryJoinedGroupIdsRequest>(),
        &QueryJoinedGroupIdsRequest::ByteSizeLong,
        &QueryJoinedGroupIdsRequest::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(QueryJoinedGroupIdsRequest, _impl_._cached_size_),
        true,
    },
    "turms.client.model.proto.QueryJoinedGroupIdsRequest",
};
const ::google::protobuf::internal::ClassData* QueryJoinedGroupIdsRequest::GetClassData() const {
    return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<2, 3, 1, 0, 2>
    QueryJoinedGroupIdsRequest::_table_ = {
        {
            PROTOBUF_FIELD_OFFSET(QueryJoinedGroupIdsRequest, _impl_._has_bits_),
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
                ::turms::client::model::proto::QueryJoinedGroupIdsRequest>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            {::_pbi::TcParser::MiniParse, {}},
            // optional int64 last_updated_date = 1;
            {::_pbi::TcParser::FastV64S1,
             {8,
              0,
              0,
              PROTOBUF_FIELD_OFFSET(QueryJoinedGroupIdsRequest, _impl_.last_updated_date_)}},
            // repeated int64 user_ids_for_common_groups = 2;
            {::_pbi::TcParser::FastV64P1,
             {18,
              63,
              0,
              PROTOBUF_FIELD_OFFSET(QueryJoinedGroupIdsRequest,
                                    _impl_.user_ids_for_common_groups_)}},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {::_pbi::TcParser::FastMtR1,
             {122,
              63,
              0,
              PROTOBUF_FIELD_OFFSET(QueryJoinedGroupIdsRequest, _impl_.custom_attributes_)}},
        }},
        {{65535, 65535}},
        {{
            // optional int64 last_updated_date = 1;
            {PROTOBUF_FIELD_OFFSET(QueryJoinedGroupIdsRequest, _impl_.last_updated_date_),
             _Internal::kHasBitsOffset + 0,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
            // repeated int64 user_ids_for_common_groups = 2;
            {PROTOBUF_FIELD_OFFSET(QueryJoinedGroupIdsRequest, _impl_.user_ids_for_common_groups_),
             -1,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kPackedInt64)},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {PROTOBUF_FIELD_OFFSET(QueryJoinedGroupIdsRequest, _impl_.custom_attributes_),
             -1,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
        }},
        {{
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::Value>()},
        }},
        {{}},
    };

PROTOBUF_NOINLINE void QueryJoinedGroupIdsRequest::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.QueryJoinedGroupIdsRequest)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.user_ids_for_common_groups_.Clear();
    _impl_.custom_attributes_.Clear();
    _impl_.last_updated_date_ = ::int64_t{0};
    _impl_._has_bits_.Clear();
    _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::uint8_t* QueryJoinedGroupIdsRequest::_InternalSerialize(
    const MessageLite& base,
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) {
    const QueryJoinedGroupIdsRequest& this_ = static_cast<const QueryJoinedGroupIdsRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::uint8_t* QueryJoinedGroupIdsRequest::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    const QueryJoinedGroupIdsRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.QueryJoinedGroupIdsRequest)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    cached_has_bits = this_._impl_._has_bits_[0];
    // optional int64 last_updated_date = 1;
    if (cached_has_bits & 0x00000001u) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>(
            stream, this_._internal_last_updated_date(), target);
    }

    // repeated int64 user_ids_for_common_groups = 2;
    {
        int byte_size = this_._impl_._user_ids_for_common_groups_cached_byte_size_.Get();
        if (byte_size > 0) {
            target = stream->WriteInt64Packed(
                2, this_._internal_user_ids_for_common_groups(), byte_size, target);
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
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.QueryJoinedGroupIdsRequest)
    return target;
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::size_t QueryJoinedGroupIdsRequest::ByteSizeLong(const MessageLite& base) {
    const QueryJoinedGroupIdsRequest& this_ = static_cast<const QueryJoinedGroupIdsRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::size_t QueryJoinedGroupIdsRequest::ByteSizeLong() const {
    const QueryJoinedGroupIdsRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.QueryJoinedGroupIdsRequest)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    ::_pbi::Prefetch5LinesFrom7Lines(&this_);
    {
        // repeated int64 user_ids_for_common_groups = 2;
        {
            total_size += ::_pbi::WireFormatLite::Int64SizeWithPackedTagSize(
                this_._internal_user_ids_for_common_groups(),
                1,
                this_._impl_._user_ids_for_common_groups_cached_byte_size_);
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
        // optional int64 last_updated_date = 1;
        cached_has_bits = this_._impl_._has_bits_[0];
        if (cached_has_bits & 0x00000001u) {
            total_size +=
                ::_pbi::WireFormatLite::Int64SizePlusOne(this_._internal_last_updated_date());
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

void QueryJoinedGroupIdsRequest::MergeImpl(::google::protobuf::MessageLite& to_msg,
                                           const ::google::protobuf::MessageLite& from_msg) {
    auto* const _this = static_cast<QueryJoinedGroupIdsRequest*>(&to_msg);
    auto& from = static_cast<const QueryJoinedGroupIdsRequest&>(from_msg);
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.QueryJoinedGroupIdsRequest)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    _this->_internal_mutable_user_ids_for_common_groups()->MergeFrom(
        from._internal_user_ids_for_common_groups());
    _this->_internal_mutable_custom_attributes()->MergeFrom(from._internal_custom_attributes());
    cached_has_bits = from._impl_._has_bits_[0];
    if (cached_has_bits & 0x00000001u) {
        _this->_impl_.last_updated_date_ = from._impl_.last_updated_date_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void QueryJoinedGroupIdsRequest::CopyFrom(const QueryJoinedGroupIdsRequest& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.QueryJoinedGroupIdsRequest)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void QueryJoinedGroupIdsRequest::InternalSwap(QueryJoinedGroupIdsRequest* PROTOBUF_RESTRICT other) {
    using std::swap;
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
    _impl_.user_ids_for_common_groups_.InternalSwap(&other->_impl_.user_ids_for_common_groups_);
    _impl_.custom_attributes_.InternalSwap(&other->_impl_.custom_attributes_);
    swap(_impl_.last_updated_date_, other->_impl_.last_updated_date_);
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