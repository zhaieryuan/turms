// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/user/user_online_status.proto
// Protobuf C++ Version: 5.29.1

#include "turms/client/model/proto/model/user/user_online_status.pb.h"

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

inline constexpr UserOnlineStatus::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : device_types_{},
      _device_types_cached_byte_size_{0},
      custom_attributes_{},
      user_id_{::int64_t{0}},
      user_status_{static_cast<::turms::client::model::proto::UserStatus>(0)},
      _cached_size_{0} {
}

template <typename>
PROTOBUF_CONSTEXPR UserOnlineStatus::UserOnlineStatus(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct UserOnlineStatusDefaultTypeInternal {
    PROTOBUF_CONSTEXPR UserOnlineStatusDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~UserOnlineStatusDefaultTypeInternal() {
    }
    union {
        UserOnlineStatus _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    UserOnlineStatusDefaultTypeInternal _UserOnlineStatus_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class UserOnlineStatus::_Internal {
   public:
};

void UserOnlineStatus::clear_custom_attributes() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.custom_attributes_.Clear();
}
UserOnlineStatus::UserOnlineStatus(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.UserOnlineStatus)
}
inline PROTOBUF_NDEBUG_INLINE UserOnlineStatus::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from,
    const ::turms::client::model::proto::UserOnlineStatus& from_msg)
    : device_types_{visibility, arena, from.device_types_},
      _device_types_cached_byte_size_{0},
      custom_attributes_{visibility, arena, from.custom_attributes_},
      _cached_size_{0} {
}

UserOnlineStatus::UserOnlineStatus(::google::protobuf::Arena* arena, const UserOnlineStatus& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    UserOnlineStatus* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
    ::memcpy(
        reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, user_id_),
        reinterpret_cast<const char*>(&from._impl_) + offsetof(Impl_, user_id_),
        offsetof(Impl_, user_status_) - offsetof(Impl_, user_id_) + sizeof(Impl_::user_status_));

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.UserOnlineStatus)
}
inline PROTOBUF_NDEBUG_INLINE UserOnlineStatus::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : device_types_{visibility, arena},
      _device_types_cached_byte_size_{0},
      custom_attributes_{visibility, arena},
      _cached_size_{0} {
}

inline void UserOnlineStatus::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
    ::memset(
        reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, user_id_),
        0,
        offsetof(Impl_, user_status_) - offsetof(Impl_, user_id_) + sizeof(Impl_::user_status_));
}
UserOnlineStatus::~UserOnlineStatus() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.UserOnlineStatus)
    SharedDtor(*this);
}
inline void UserOnlineStatus::SharedDtor(MessageLite& self) {
    UserOnlineStatus& this_ = static_cast<UserOnlineStatus&>(self);
    this_._internal_metadata_.Delete<std::string>();
    ABSL_DCHECK(this_.GetArena() == nullptr);
    this_._impl_.~Impl_();
}

inline void* UserOnlineStatus::PlacementNew_(const void*,
                                             void* mem,
                                             ::google::protobuf::Arena* arena) {
    return ::new (mem) UserOnlineStatus(arena);
}
constexpr auto UserOnlineStatus::InternalNewImpl_() {
    constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
        PROTOBUF_FIELD_OFFSET(UserOnlineStatus, _impl_.device_types_) +
            decltype(UserOnlineStatus::_impl_.device_types_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
        PROTOBUF_FIELD_OFFSET(UserOnlineStatus, _impl_.custom_attributes_) +
            decltype(UserOnlineStatus::_impl_.custom_attributes_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
    });
    if (arena_bits.has_value()) {
        return ::google::protobuf::internal::MessageCreator::ZeroInit(
            sizeof(UserOnlineStatus), alignof(UserOnlineStatus), *arena_bits);
    } else {
        return ::google::protobuf::internal::MessageCreator(
            &UserOnlineStatus::PlacementNew_, sizeof(UserOnlineStatus), alignof(UserOnlineStatus));
    }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataLite<42> UserOnlineStatus::_class_data_ = {
    {
        &_UserOnlineStatus_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &UserOnlineStatus::MergeImpl,
        ::google::protobuf::MessageLite::GetNewImpl<UserOnlineStatus>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &UserOnlineStatus::SharedDtor,
        ::google::protobuf::MessageLite::GetClearImpl<UserOnlineStatus>(),
        &UserOnlineStatus::ByteSizeLong,
        &UserOnlineStatus::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(UserOnlineStatus, _impl_._cached_size_),
        true,
    },
    "turms.client.model.proto.UserOnlineStatus",
};
const ::google::protobuf::internal::ClassData* UserOnlineStatus::GetClassData() const {
    return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<3, 4, 1, 0, 2>
    UserOnlineStatus::_table_ = {
        {
            0,  // no _has_bits_
            0,  // no _extensions_
            15,
            56,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294950904,  // skipmap
            offsetof(decltype(_table_), field_entries),
            4,  // num_field_entries
            1,  // num_aux_entries
            offsetof(decltype(_table_), aux_entries),
            _class_data_.base(),
            nullptr,                                // post_loop_handler
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<
                ::turms::client::model::proto::UserOnlineStatus>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            {::_pbi::TcParser::MiniParse, {}},
            // int64 user_id = 1;
            {::_pbi::TcParser::FastV64S1,
             {8, 63, 0, PROTOBUF_FIELD_OFFSET(UserOnlineStatus, _impl_.user_id_)}},
            // .turms.client.model.proto.UserStatus user_status = 2;
            {::_pbi::TcParser::FastV32S1,
             {16, 63, 0, PROTOBUF_FIELD_OFFSET(UserOnlineStatus, _impl_.user_status_)}},
            // repeated .turms.client.model.proto.DeviceType device_types = 3;
            {::_pbi::TcParser::FastV32P1,
             {26, 63, 0, PROTOBUF_FIELD_OFFSET(UserOnlineStatus, _impl_.device_types_)}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            {::_pbi::TcParser::MiniParse, {}},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {::_pbi::TcParser::FastMtR1,
             {122, 63, 0, PROTOBUF_FIELD_OFFSET(UserOnlineStatus, _impl_.custom_attributes_)}},
        }},
        {{65535, 65535}},
        {{
            // int64 user_id = 1;
            {PROTOBUF_FIELD_OFFSET(UserOnlineStatus, _impl_.user_id_),
             0,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kInt64)},
            // .turms.client.model.proto.UserStatus user_status = 2;
            {PROTOBUF_FIELD_OFFSET(UserOnlineStatus, _impl_.user_status_),
             0,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
            // repeated .turms.client.model.proto.DeviceType device_types = 3;
            {PROTOBUF_FIELD_OFFSET(UserOnlineStatus, _impl_.device_types_),
             0,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kPackedOpenEnum)},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {PROTOBUF_FIELD_OFFSET(UserOnlineStatus, _impl_.custom_attributes_),
             0,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
        }},
        {{
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::Value>()},
        }},
        {{}},
    };

PROTOBUF_NOINLINE void UserOnlineStatus::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.UserOnlineStatus)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.device_types_.Clear();
    _impl_.custom_attributes_.Clear();
    ::memset(&_impl_.user_id_,
             0,
             static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.user_status_) -
                                   reinterpret_cast<char*>(&_impl_.user_id_)) +
                 sizeof(_impl_.user_status_));
    _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::uint8_t* UserOnlineStatus::_InternalSerialize(
    const MessageLite& base,
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) {
    const UserOnlineStatus& this_ = static_cast<const UserOnlineStatus&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::uint8_t* UserOnlineStatus::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    const UserOnlineStatus& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.UserOnlineStatus)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    // int64 user_id = 1;
    if (this_._internal_user_id() != 0) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>(
            stream, this_._internal_user_id(), target);
    }

    // .turms.client.model.proto.UserStatus user_status = 2;
    if (this_._internal_user_status() != 0) {
        target = stream->EnsureSpace(target);
        target = ::_pbi::WireFormatLite::WriteEnumToArray(2, this_._internal_user_status(), target);
    }

    // repeated .turms.client.model.proto.DeviceType device_types = 3;
    {
        std::size_t byte_size = this_._impl_._device_types_cached_byte_size_.Get();
        if (byte_size > 0) {
            target = stream->WriteEnumPacked(3, this_._internal_device_types(), byte_size, target);
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
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.UserOnlineStatus)
    return target;
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::size_t UserOnlineStatus::ByteSizeLong(const MessageLite& base) {
    const UserOnlineStatus& this_ = static_cast<const UserOnlineStatus&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::size_t UserOnlineStatus::ByteSizeLong() const {
    const UserOnlineStatus& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.UserOnlineStatus)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    ::_pbi::Prefetch5LinesFrom7Lines(&this_);
    {
        // repeated .turms.client.model.proto.DeviceType device_types = 3;
        {
            total_size += ::_pbi::WireFormatLite::EnumSizeWithPackedTagSize(
                this_._internal_device_types(), 1, this_._impl_._device_types_cached_byte_size_);
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
        // int64 user_id = 1;
        if (this_._internal_user_id() != 0) {
            total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this_._internal_user_id());
        }
        // .turms.client.model.proto.UserStatus user_status = 2;
        if (this_._internal_user_status() != 0) {
            total_size += 1 + ::_pbi::WireFormatLite::EnumSize(this_._internal_user_status());
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

void UserOnlineStatus::MergeImpl(::google::protobuf::MessageLite& to_msg,
                                 const ::google::protobuf::MessageLite& from_msg) {
    auto* const _this = static_cast<UserOnlineStatus*>(&to_msg);
    auto& from = static_cast<const UserOnlineStatus&>(from_msg);
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.UserOnlineStatus)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    _this->_internal_mutable_device_types()->MergeFrom(from._internal_device_types());
    _this->_internal_mutable_custom_attributes()->MergeFrom(from._internal_custom_attributes());
    if (from._internal_user_id() != 0) {
        _this->_impl_.user_id_ = from._impl_.user_id_;
    }
    if (from._internal_user_status() != 0) {
        _this->_impl_.user_status_ = from._impl_.user_status_;
    }
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void UserOnlineStatus::CopyFrom(const UserOnlineStatus& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.UserOnlineStatus)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void UserOnlineStatus::InternalSwap(UserOnlineStatus* PROTOBUF_RESTRICT other) {
    using std::swap;
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    _impl_.device_types_.InternalSwap(&other->_impl_.device_types_);
    _impl_.custom_attributes_.InternalSwap(&other->_impl_.custom_attributes_);
    ::google::protobuf::internal::memswap<PROTOBUF_FIELD_OFFSET(UserOnlineStatus,
                                                                _impl_.user_status_) +
                                          sizeof(UserOnlineStatus::_impl_.user_status_) -
                                          PROTOBUF_FIELD_OFFSET(UserOnlineStatus, _impl_.user_id_)>(
        reinterpret_cast<char*>(&_impl_.user_id_),
        reinterpret_cast<char*>(&other->_impl_.user_id_));
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