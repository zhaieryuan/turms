// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/message/messages_with_total_list.proto
// Protobuf C++ Version: 5.29.1

#include "turms/client/model/proto/model/message/messages_with_total_list.pb.h"

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

inline constexpr MessagesWithTotalList::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : messages_with_total_list_{},
      _cached_size_{0} {
}

template <typename>
PROTOBUF_CONSTEXPR MessagesWithTotalList::MessagesWithTotalList(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct MessagesWithTotalListDefaultTypeInternal {
    PROTOBUF_CONSTEXPR MessagesWithTotalListDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~MessagesWithTotalListDefaultTypeInternal() {
    }
    union {
        MessagesWithTotalList _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    MessagesWithTotalListDefaultTypeInternal _MessagesWithTotalList_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class MessagesWithTotalList::_Internal {
   public:
};

void MessagesWithTotalList::clear_messages_with_total_list() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.messages_with_total_list_.Clear();
}
MessagesWithTotalList::MessagesWithTotalList(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.MessagesWithTotalList)
}
inline PROTOBUF_NDEBUG_INLINE MessagesWithTotalList::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from,
    const ::turms::client::model::proto::MessagesWithTotalList& from_msg)
    : messages_with_total_list_{visibility, arena, from.messages_with_total_list_},
      _cached_size_{0} {
}

MessagesWithTotalList::MessagesWithTotalList(::google::protobuf::Arena* arena,
                                             const MessagesWithTotalList& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    MessagesWithTotalList* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.MessagesWithTotalList)
}
inline PROTOBUF_NDEBUG_INLINE MessagesWithTotalList::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : messages_with_total_list_{visibility, arena},
      _cached_size_{0} {
}

inline void MessagesWithTotalList::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
}
MessagesWithTotalList::~MessagesWithTotalList() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.MessagesWithTotalList)
    SharedDtor(*this);
}
inline void MessagesWithTotalList::SharedDtor(MessageLite& self) {
    MessagesWithTotalList& this_ = static_cast<MessagesWithTotalList&>(self);
    this_._internal_metadata_.Delete<std::string>();
    ABSL_DCHECK(this_.GetArena() == nullptr);
    this_._impl_.~Impl_();
}

inline void* MessagesWithTotalList::PlacementNew_(const void*,
                                                  void* mem,
                                                  ::google::protobuf::Arena* arena) {
    return ::new (mem) MessagesWithTotalList(arena);
}
constexpr auto MessagesWithTotalList::InternalNewImpl_() {
    constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
        PROTOBUF_FIELD_OFFSET(MessagesWithTotalList, _impl_.messages_with_total_list_) +
            decltype(MessagesWithTotalList::_impl_.messages_with_total_list_)::
                InternalGetArenaOffset(::google::protobuf::MessageLite::internal_visibility()),
    });
    if (arena_bits.has_value()) {
        return ::google::protobuf::internal::MessageCreator::ZeroInit(
            sizeof(MessagesWithTotalList), alignof(MessagesWithTotalList), *arena_bits);
    } else {
        return ::google::protobuf::internal::MessageCreator(&MessagesWithTotalList::PlacementNew_,
                                                            sizeof(MessagesWithTotalList),
                                                            alignof(MessagesWithTotalList));
    }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataLite<47> MessagesWithTotalList::_class_data_ = {
    {
        &_MessagesWithTotalList_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &MessagesWithTotalList::MergeImpl,
        ::google::protobuf::MessageLite::GetNewImpl<MessagesWithTotalList>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &MessagesWithTotalList::SharedDtor,
        ::google::protobuf::MessageLite::GetClearImpl<MessagesWithTotalList>(),
        &MessagesWithTotalList::ByteSizeLong,
        &MessagesWithTotalList::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(MessagesWithTotalList, _impl_._cached_size_),
        true,
    },
    "turms.client.model.proto.MessagesWithTotalList",
};
const ::google::protobuf::internal::ClassData* MessagesWithTotalList::GetClassData() const {
    return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<0, 1, 1, 0, 2>
    MessagesWithTotalList::_table_ = {
        {
            0,  // no _has_bits_
            0,  // no _extensions_
            1,
            0,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294967294,  // skipmap
            offsetof(decltype(_table_), field_entries),
            1,  // num_field_entries
            1,  // num_aux_entries
            offsetof(decltype(_table_), aux_entries),
            _class_data_.base(),
            nullptr,                                // post_loop_handler
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<
                ::turms::client::model::proto::MessagesWithTotalList>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            // repeated .turms.client.model.proto.MessagesWithTotal messages_with_total_list = 1;
            {::_pbi::TcParser::FastMtR1,
             {10,
              63,
              0,
              PROTOBUF_FIELD_OFFSET(MessagesWithTotalList, _impl_.messages_with_total_list_)}},
        }},
        {{65535, 65535}},
        {{
            // repeated .turms.client.model.proto.MessagesWithTotal messages_with_total_list = 1;
            {PROTOBUF_FIELD_OFFSET(MessagesWithTotalList, _impl_.messages_with_total_list_),
             0,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
        }},
        {{
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::MessagesWithTotal>()},
        }},
        {{}},
    };

PROTOBUF_NOINLINE void MessagesWithTotalList::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.MessagesWithTotalList)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.messages_with_total_list_.Clear();
    _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::uint8_t* MessagesWithTotalList::_InternalSerialize(
    const MessageLite& base,
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) {
    const MessagesWithTotalList& this_ = static_cast<const MessagesWithTotalList&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::uint8_t* MessagesWithTotalList::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    const MessagesWithTotalList& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.MessagesWithTotalList)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    // repeated .turms.client.model.proto.MessagesWithTotal messages_with_total_list = 1;
    for (unsigned i = 0, n = static_cast<unsigned>(this_._internal_messages_with_total_list_size());
         i < n;
         i++) {
        const auto& repfield = this_._internal_messages_with_total_list().Get(i);
        target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
            1, repfield, repfield.GetCachedSize(), target, stream);
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
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.MessagesWithTotalList)
    return target;
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::size_t MessagesWithTotalList::ByteSizeLong(const MessageLite& base) {
    const MessagesWithTotalList& this_ = static_cast<const MessagesWithTotalList&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::size_t MessagesWithTotalList::ByteSizeLong() const {
    const MessagesWithTotalList& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.MessagesWithTotalList)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    ::_pbi::Prefetch5LinesFrom7Lines(&this_);
    {
        // repeated .turms.client.model.proto.MessagesWithTotal messages_with_total_list = 1;
        {
            total_size += 1UL * this_._internal_messages_with_total_list_size();
            for (const auto& msg : this_._internal_messages_with_total_list()) {
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

void MessagesWithTotalList::MergeImpl(::google::protobuf::MessageLite& to_msg,
                                      const ::google::protobuf::MessageLite& from_msg) {
    auto* const _this = static_cast<MessagesWithTotalList*>(&to_msg);
    auto& from = static_cast<const MessagesWithTotalList&>(from_msg);
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.MessagesWithTotalList)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    _this->_internal_mutable_messages_with_total_list()->MergeFrom(
        from._internal_messages_with_total_list());
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void MessagesWithTotalList::CopyFrom(const MessagesWithTotalList& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.MessagesWithTotalList)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void MessagesWithTotalList::InternalSwap(MessagesWithTotalList* PROTOBUF_RESTRICT other) {
    using std::swap;
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    _impl_.messages_with_total_list_.InternalSwap(&other->_impl_.messages_with_total_list_);
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