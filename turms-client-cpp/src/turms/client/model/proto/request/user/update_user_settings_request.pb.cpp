// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: request/user/update_user_settings_request.proto
// Protobuf C++ Version: 5.29.1

#include "turms/client/model/proto/request/user/update_user_settings_request.pb.h"

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

inline constexpr UpdateUserSettingsRequest::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : settings_{},
      custom_attributes_{},
      _cached_size_{0} {
}

template <typename>
PROTOBUF_CONSTEXPR UpdateUserSettingsRequest::UpdateUserSettingsRequest(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct UpdateUserSettingsRequestDefaultTypeInternal {
    PROTOBUF_CONSTEXPR UpdateUserSettingsRequestDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~UpdateUserSettingsRequestDefaultTypeInternal() {
    }
    union {
        UpdateUserSettingsRequest _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    UpdateUserSettingsRequestDefaultTypeInternal _UpdateUserSettingsRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

// ===================================================================

class UpdateUserSettingsRequest::_Internal {
   public:
};

void UpdateUserSettingsRequest::clear_settings() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.settings_.Clear();
}
void UpdateUserSettingsRequest::clear_custom_attributes() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.custom_attributes_.Clear();
}
UpdateUserSettingsRequest::UpdateUserSettingsRequest(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.UpdateUserSettingsRequest)
}
inline PROTOBUF_NDEBUG_INLINE UpdateUserSettingsRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from,
    const ::turms::client::model::proto::UpdateUserSettingsRequest& from_msg)
    : settings_{visibility, arena, from.settings_},
      custom_attributes_{visibility, arena, from.custom_attributes_},
      _cached_size_{0} {
}

UpdateUserSettingsRequest::UpdateUserSettingsRequest(::google::protobuf::Arena* arena,
                                                     const UpdateUserSettingsRequest& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    UpdateUserSettingsRequest* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.UpdateUserSettingsRequest)
}
inline PROTOBUF_NDEBUG_INLINE UpdateUserSettingsRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : settings_{visibility, arena},
      custom_attributes_{visibility, arena},
      _cached_size_{0} {
}

inline void UpdateUserSettingsRequest::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
}
UpdateUserSettingsRequest::~UpdateUserSettingsRequest() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.UpdateUserSettingsRequest)
    SharedDtor(*this);
}
inline void UpdateUserSettingsRequest::SharedDtor(MessageLite& self) {
    UpdateUserSettingsRequest& this_ = static_cast<UpdateUserSettingsRequest&>(self);
    this_._internal_metadata_.Delete<std::string>();
    ABSL_DCHECK(this_.GetArena() == nullptr);
    this_._impl_.~Impl_();
}

inline void* UpdateUserSettingsRequest::PlacementNew_(const void*,
                                                      void* mem,
                                                      ::google::protobuf::Arena* arena) {
    return ::new (mem) UpdateUserSettingsRequest(arena);
}
constexpr auto UpdateUserSettingsRequest::InternalNewImpl_() {
    constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
        PROTOBUF_FIELD_OFFSET(UpdateUserSettingsRequest, _impl_.settings_) +
            decltype(UpdateUserSettingsRequest::_impl_.settings_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
        PROTOBUF_FIELD_OFFSET(UpdateUserSettingsRequest, _impl_.custom_attributes_) +
            decltype(UpdateUserSettingsRequest::_impl_.custom_attributes_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
    });
    if (arena_bits.has_value()) {
        return ::google::protobuf::internal::MessageCreator::CopyInit(
            sizeof(UpdateUserSettingsRequest), alignof(UpdateUserSettingsRequest), *arena_bits);
    } else {
        return ::google::protobuf::internal::MessageCreator(
            &UpdateUserSettingsRequest::PlacementNew_,
            sizeof(UpdateUserSettingsRequest),
            alignof(UpdateUserSettingsRequest));
    }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataLite<51> UpdateUserSettingsRequest::_class_data_ = {
    {
        &_UpdateUserSettingsRequest_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &UpdateUserSettingsRequest::MergeImpl,
        ::google::protobuf::MessageLite::GetNewImpl<UpdateUserSettingsRequest>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &UpdateUserSettingsRequest::SharedDtor,
        ::google::protobuf::MessageLite::GetClearImpl<UpdateUserSettingsRequest>(),
        &UpdateUserSettingsRequest::ByteSizeLong,
        &UpdateUserSettingsRequest::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(UpdateUserSettingsRequest, _impl_._cached_size_),
        true,
    },
    "turms.client.model.proto.UpdateUserSettingsRequest",
};
const ::google::protobuf::internal::ClassData* UpdateUserSettingsRequest::GetClassData() const {
    return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<0, 2, 3, 67, 2>
    UpdateUserSettingsRequest::_table_ = {
        {
            0,  // no _has_bits_
            0,  // no _extensions_
            15,
            0,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294950910,  // skipmap
            offsetof(decltype(_table_), field_entries),
            2,  // num_field_entries
            3,  // num_aux_entries
            offsetof(decltype(_table_), aux_entries),
            _class_data_.base(),
            nullptr,                                // post_loop_handler
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<
                ::turms::client::model::proto::UpdateUserSettingsRequest>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {::_pbi::TcParser::FastMtR1,
             {122,
              63,
              0,
              PROTOBUF_FIELD_OFFSET(UpdateUserSettingsRequest, _impl_.custom_attributes_)}},
        }},
        {{65535, 65535}},
        {{
            // map<string, .turms.client.model.proto.Value> settings = 1;
            {PROTOBUF_FIELD_OFFSET(UpdateUserSettingsRequest, _impl_.settings_),
             0,
             1,
             (0 | ::_fl::kFcRepeated | ::_fl::kMap)},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {PROTOBUF_FIELD_OFFSET(UpdateUserSettingsRequest, _impl_.custom_attributes_),
             0,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
        }},
        {{
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::Value>()},
            {::_pbi::TcParser::GetMapAuxInfo<
                decltype(UpdateUserSettingsRequest()._impl_.settings_)>(1, 0, 0, 9, 11)},
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::Value>()},
        }},
        {{"\62\10\0\0\0\0\0\0"
          "turms.client.model.proto.UpdateUserSettingsRequest"
          "settings"}},
    };

PROTOBUF_NOINLINE void UpdateUserSettingsRequest::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.UpdateUserSettingsRequest)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.settings_.Clear();
    _impl_.custom_attributes_.Clear();
    _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::uint8_t* UpdateUserSettingsRequest::_InternalSerialize(
    const MessageLite& base,
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) {
    const UpdateUserSettingsRequest& this_ = static_cast<const UpdateUserSettingsRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::uint8_t* UpdateUserSettingsRequest::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    const UpdateUserSettingsRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.UpdateUserSettingsRequest)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    // map<string, .turms.client.model.proto.Value> settings = 1;
    if (!this_._internal_settings().empty()) {
        using MapType = ::google::protobuf::Map<std::string, ::turms::client::model::proto::Value>;
        using WireHelper = _pbi::MapEntryFuncs<std::string,
                                               ::turms::client::model::proto::Value,
                                               _pbi::WireFormatLite::TYPE_STRING,
                                               _pbi::WireFormatLite::TYPE_MESSAGE>;
        const auto& field = this_._internal_settings();

        if (stream->IsSerializationDeterministic() && field.size() > 1) {
            for (const auto& entry : ::google::protobuf::internal::MapSorterPtr<MapType>(field)) {
                target =
                    WireHelper::InternalSerialize(1, entry.first, entry.second, target, stream);
                ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                    entry.first.data(),
                    static_cast<int>(entry.first.length()),
                    ::google::protobuf::internal::WireFormatLite::SERIALIZE,
                    "turms.client.model.proto.UpdateUserSettingsRequest.settings");
            }
        } else {
            for (const auto& entry : field) {
                target =
                    WireHelper::InternalSerialize(1, entry.first, entry.second, target, stream);
                ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                    entry.first.data(),
                    static_cast<int>(entry.first.length()),
                    ::google::protobuf::internal::WireFormatLite::SERIALIZE,
                    "turms.client.model.proto.UpdateUserSettingsRequest.settings");
            }
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
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.UpdateUserSettingsRequest)
    return target;
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::size_t UpdateUserSettingsRequest::ByteSizeLong(const MessageLite& base) {
    const UpdateUserSettingsRequest& this_ = static_cast<const UpdateUserSettingsRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::size_t UpdateUserSettingsRequest::ByteSizeLong() const {
    const UpdateUserSettingsRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.UpdateUserSettingsRequest)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    ::_pbi::Prefetch5LinesFrom7Lines(&this_);
    {
        // map<string, .turms.client.model.proto.Value> settings = 1;
        {
            total_size +=
                1 * ::google::protobuf::internal::FromIntSize(this_._internal_settings_size());
            for (const auto& entry : this_._internal_settings()) {
                total_size += _pbi::MapEntryFuncs<
                    std::string,
                    ::turms::client::model::proto::Value,
                    _pbi::WireFormatLite::TYPE_STRING,
                    _pbi::WireFormatLite::TYPE_MESSAGE>::ByteSizeLong(entry.first, entry.second);
            }
        }
        // repeated .turms.client.model.proto.Value custom_attributes = 15;
        {
            total_size += 1UL * this_._internal_custom_attributes_size();
            for (const auto& msg : this_._internal_custom_attributes()) {
                total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
            }
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

void UpdateUserSettingsRequest::MergeImpl(::google::protobuf::MessageLite& to_msg,
                                          const ::google::protobuf::MessageLite& from_msg) {
    auto* const _this = static_cast<UpdateUserSettingsRequest*>(&to_msg);
    auto& from = static_cast<const UpdateUserSettingsRequest&>(from_msg);
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.UpdateUserSettingsRequest)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    _this->_impl_.settings_.MergeFrom(from._impl_.settings_);
    _this->_internal_mutable_custom_attributes()->MergeFrom(from._internal_custom_attributes());
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void UpdateUserSettingsRequest::CopyFrom(const UpdateUserSettingsRequest& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.UpdateUserSettingsRequest)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void UpdateUserSettingsRequest::InternalSwap(UpdateUserSettingsRequest* PROTOBUF_RESTRICT other) {
    using std::swap;
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    _impl_.settings_.InternalSwap(&other->_impl_.settings_);
    _impl_.custom_attributes_.InternalSwap(&other->_impl_.custom_attributes_);
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