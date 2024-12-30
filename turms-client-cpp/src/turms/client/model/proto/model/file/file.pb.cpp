// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/file/file.proto
// Protobuf C++ Version: 5.29.1

#include "turms/client/model/proto/model/file/file.pb.h"

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

inline constexpr File_Description::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : _cached_size_{0},
      url_(&::google::protobuf::internal::fixed_address_empty_string,
           ::_pbi::ConstantInitialized()),
      format_(&::google::protobuf::internal::fixed_address_empty_string,
              ::_pbi::ConstantInitialized()),
      size_{0} {
}

template <typename>
PROTOBUF_CONSTEXPR File_Description::File_Description(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct File_DescriptionDefaultTypeInternal {
    PROTOBUF_CONSTEXPR File_DescriptionDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~File_DescriptionDefaultTypeInternal() {
    }
    union {
        File_Description _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    File_DescriptionDefaultTypeInternal _File_Description_default_instance_;

inline constexpr File::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : _cached_size_{0},
      custom_attributes_{},
      data_(&::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
      description_{nullptr} {
}

template <typename>
PROTOBUF_CONSTEXPR File::File(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct FileDefaultTypeInternal {
    PROTOBUF_CONSTEXPR FileDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~FileDefaultTypeInternal() {
    }
    union {
        File _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    FileDefaultTypeInternal _File_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class File_Description::_Internal {
   public:
    using HasBits = decltype(std::declval<File_Description>()._impl_._has_bits_);
    static constexpr ::int32_t kHasBitsOffset =
        8 * PROTOBUF_FIELD_OFFSET(File_Description, _impl_._has_bits_);
};

File_Description::File_Description(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.File.Description)
}
inline PROTOBUF_NDEBUG_INLINE File_Description::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from,
    const ::turms::client::model::proto::File_Description& from_msg)
    : _has_bits_{from._has_bits_},
      _cached_size_{0},
      url_(arena, from.url_),
      format_(arena, from.format_) {
}

File_Description::File_Description(::google::protobuf::Arena* arena, const File_Description& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    File_Description* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
    _impl_.size_ = from._impl_.size_;

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.File.Description)
}
inline PROTOBUF_NDEBUG_INLINE File_Description::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : _cached_size_{0},
      url_(arena),
      format_(arena) {
}

inline void File_Description::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
    _impl_.size_ = {};
}
File_Description::~File_Description() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.File.Description)
    SharedDtor(*this);
}
inline void File_Description::SharedDtor(MessageLite& self) {
    File_Description& this_ = static_cast<File_Description&>(self);
    this_._internal_metadata_.Delete<std::string>();
    ABSL_DCHECK(this_.GetArena() == nullptr);
    this_._impl_.url_.Destroy();
    this_._impl_.format_.Destroy();
    this_._impl_.~Impl_();
}

inline void* File_Description::PlacementNew_(const void*,
                                             void* mem,
                                             ::google::protobuf::Arena* arena) {
    return ::new (mem) File_Description(arena);
}
constexpr auto File_Description::InternalNewImpl_() {
    return ::google::protobuf::internal::MessageCreator::CopyInit(sizeof(File_Description),
                                                                  alignof(File_Description));
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataLite<42> File_Description::_class_data_ = {
    {
        &_File_Description_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &File_Description::MergeImpl,
        ::google::protobuf::MessageLite::GetNewImpl<File_Description>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &File_Description::SharedDtor,
        ::google::protobuf::MessageLite::GetClearImpl<File_Description>(),
        &File_Description::ByteSizeLong,
        &File_Description::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(File_Description, _impl_._cached_size_),
        true,
    },
    "turms.client.model.proto.File.Description",
};
const ::google::protobuf::internal::ClassData* File_Description::GetClassData() const {
    return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<2, 3, 0, 59, 2>
    File_Description::_table_ = {
        {
            PROTOBUF_FIELD_OFFSET(File_Description, _impl_._has_bits_),
            0,  // no _extensions_
            3,
            24,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294967288,  // skipmap
            offsetof(decltype(_table_), field_entries),
            3,                                         // num_field_entries
            0,                                         // num_aux_entries
            offsetof(decltype(_table_), field_names),  // no aux_entries
            _class_data_.base(),
            nullptr,                                // post_loop_handler
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<
                ::turms::client::model::proto::File_Description>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            {::_pbi::TcParser::MiniParse, {}},
            // string url = 1;
            {::_pbi::TcParser::FastUS1,
             {10, 63, 0, PROTOBUF_FIELD_OFFSET(File_Description, _impl_.url_)}},
            // optional int32 size = 2;
            {::_pbi::TcParser::FastV32S1,
             {16, 1, 0, PROTOBUF_FIELD_OFFSET(File_Description, _impl_.size_)}},
            // optional string format = 3;
            {::_pbi::TcParser::FastUS1,
             {26, 0, 0, PROTOBUF_FIELD_OFFSET(File_Description, _impl_.format_)}},
        }},
        {{65535, 65535}},
        {{
            // string url = 1;
            {PROTOBUF_FIELD_OFFSET(File_Description, _impl_.url_),
             -1,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
            // optional int32 size = 2;
            {PROTOBUF_FIELD_OFFSET(File_Description, _impl_.size_),
             _Internal::kHasBitsOffset + 1,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
            // optional string format = 3;
            {PROTOBUF_FIELD_OFFSET(File_Description, _impl_.format_),
             _Internal::kHasBitsOffset + 0,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kUtf8String | ::_fl::kRepAString)},
        }},
        // no aux_entries
        {{"\51\3\0\6\0\0\0\0"
          "turms.client.model.proto.File.Description"
          "url"
          "format"}},
    };

PROTOBUF_NOINLINE void File_Description::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.File.Description)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.url_.ClearToEmpty();
    cached_has_bits = _impl_._has_bits_[0];
    if (cached_has_bits & 0x00000001u) {
        _impl_.format_.ClearNonDefaultToEmpty();
    }
    _impl_.size_ = 0;
    _impl_._has_bits_.Clear();
    _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::uint8_t* File_Description::_InternalSerialize(
    const MessageLite& base,
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) {
    const File_Description& this_ = static_cast<const File_Description&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::uint8_t* File_Description::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    const File_Description& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.File.Description)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    // string url = 1;
    if (!this_._internal_url().empty()) {
        const std::string& _s = this_._internal_url();
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            _s.data(),
            static_cast<int>(_s.length()),
            ::google::protobuf::internal::WireFormatLite::SERIALIZE,
            "turms.client.model.proto.File.Description.url");
        target = stream->WriteStringMaybeAliased(1, _s, target);
    }

    cached_has_bits = this_._impl_._has_bits_[0];
    // optional int32 size = 2;
    if (cached_has_bits & 0x00000002u) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>(
            stream, this_._internal_size(), target);
    }

    // optional string format = 3;
    if (cached_has_bits & 0x00000001u) {
        const std::string& _s = this_._internal_format();
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            _s.data(),
            static_cast<int>(_s.length()),
            ::google::protobuf::internal::WireFormatLite::SERIALIZE,
            "turms.client.model.proto.File.Description.format");
        target = stream->WriteStringMaybeAliased(3, _s, target);
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
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.File.Description)
    return target;
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::size_t File_Description::ByteSizeLong(const MessageLite& base) {
    const File_Description& this_ = static_cast<const File_Description&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::size_t File_Description::ByteSizeLong() const {
    const File_Description& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.File.Description)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    ::_pbi::Prefetch5LinesFrom7Lines(&this_);
    {
        // string url = 1;
        if (!this_._internal_url().empty()) {
            total_size +=
                1 + ::google::protobuf::internal::WireFormatLite::StringSize(this_._internal_url());
        }
    }
    cached_has_bits = this_._impl_._has_bits_[0];
    if (cached_has_bits & 0x00000003u) {
        // optional string format = 3;
        if (cached_has_bits & 0x00000001u) {
            total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                  this_._internal_format());
        }
        // optional int32 size = 2;
        if (cached_has_bits & 0x00000002u) {
            total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this_._internal_size());
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

void File_Description::MergeImpl(::google::protobuf::MessageLite& to_msg,
                                 const ::google::protobuf::MessageLite& from_msg) {
    auto* const _this = static_cast<File_Description*>(&to_msg);
    auto& from = static_cast<const File_Description&>(from_msg);
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.File.Description)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    if (!from._internal_url().empty()) {
        _this->_internal_set_url(from._internal_url());
    }
    cached_has_bits = from._impl_._has_bits_[0];
    if (cached_has_bits & 0x00000003u) {
        if (cached_has_bits & 0x00000001u) {
            _this->_internal_set_format(from._internal_format());
        }
        if (cached_has_bits & 0x00000002u) {
            _this->_impl_.size_ = from._impl_.size_;
        }
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void File_Description::CopyFrom(const File_Description& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.File.Description)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void File_Description::InternalSwap(File_Description* PROTOBUF_RESTRICT other) {
    using std::swap;
    auto* arena = GetArena();
    ABSL_DCHECK_EQ(arena, other->GetArena());
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
    ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.url_, &other->_impl_.url_, arena);
    ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.format_, &other->_impl_.format_, arena);
    swap(_impl_.size_, other->_impl_.size_);
}

// ===================================================================

class File::_Internal {
   public:
    using HasBits = decltype(std::declval<File>()._impl_._has_bits_);
    static constexpr ::int32_t kHasBitsOffset = 8 * PROTOBUF_FIELD_OFFSET(File, _impl_._has_bits_);
};

void File::clear_custom_attributes() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.custom_attributes_.Clear();
}
File::File(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.File)
}
inline PROTOBUF_NDEBUG_INLINE File::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from,
    const ::turms::client::model::proto::File& from_msg)
    : _has_bits_{from._has_bits_},
      _cached_size_{0},
      custom_attributes_{visibility, arena, from.custom_attributes_},
      data_(arena, from.data_) {
}

File::File(::google::protobuf::Arena* arena, const File& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
    File* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
    ::uint32_t cached_has_bits = _impl_._has_bits_[0];
    _impl_.description_ =
        (cached_has_bits & 0x00000002u)
            ? ::google::protobuf::MessageLite::CopyConstruct<
                  ::turms::client::model::proto::File_Description>(arena, *from._impl_.description_)
            : nullptr;

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.File)
}
inline PROTOBUF_NDEBUG_INLINE File::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : _cached_size_{0},
      custom_attributes_{visibility, arena},
      data_(arena) {
}

inline void File::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
    _impl_.description_ = {};
}
File::~File() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.File)
    SharedDtor(*this);
}
inline void File::SharedDtor(MessageLite& self) {
    File& this_ = static_cast<File&>(self);
    this_._internal_metadata_.Delete<std::string>();
    ABSL_DCHECK(this_.GetArena() == nullptr);
    this_._impl_.data_.Destroy();
    delete this_._impl_.description_;
    this_._impl_.~Impl_();
}

inline void* File::PlacementNew_(const void*, void* mem, ::google::protobuf::Arena* arena) {
    return ::new (mem) File(arena);
}
constexpr auto File::InternalNewImpl_() {
    constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
        PROTOBUF_FIELD_OFFSET(File, _impl_.custom_attributes_) +
            decltype(File::_impl_.custom_attributes_)::InternalGetArenaOffset(
                ::google::protobuf::MessageLite::internal_visibility()),
    });
    if (arena_bits.has_value()) {
        return ::google::protobuf::internal::MessageCreator::CopyInit(
            sizeof(File), alignof(File), *arena_bits);
    } else {
        return ::google::protobuf::internal::MessageCreator(
            &File::PlacementNew_, sizeof(File), alignof(File));
    }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataLite<30> File::_class_data_ = {
    {
        &_File_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &File::MergeImpl,
        ::google::protobuf::MessageLite::GetNewImpl<File>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &File::SharedDtor,
        ::google::protobuf::MessageLite::GetClearImpl<File>(),
        &File::ByteSizeLong,
        &File::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(File, _impl_._cached_size_),
        true,
    },
    "turms.client.model.proto.File",
};
const ::google::protobuf::internal::ClassData* File::GetClassData() const {
    return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<2, 3, 2, 0, 2>
    File::_table_ = {
        {
            PROTOBUF_FIELD_OFFSET(File, _impl_._has_bits_),
            0,  // no _extensions_
            15,
            24,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294950908,  // skipmap
            offsetof(decltype(_table_), field_entries),
            3,  // num_field_entries
            2,  // num_aux_entries
            offsetof(decltype(_table_), aux_entries),
            _class_data_.base(),
            nullptr,                                // post_loop_handler
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<::turms::client::model::proto::File>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            {::_pbi::TcParser::MiniParse, {}},
            // optional .turms.client.model.proto.File.Description description = 1;
            {::_pbi::TcParser::FastMtS1,
             {10, 1, 0, PROTOBUF_FIELD_OFFSET(File, _impl_.description_)}},
            // optional bytes data = 2;
            {::_pbi::TcParser::FastBS1, {18, 0, 0, PROTOBUF_FIELD_OFFSET(File, _impl_.data_)}},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {::_pbi::TcParser::FastMtR1,
             {122, 63, 1, PROTOBUF_FIELD_OFFSET(File, _impl_.custom_attributes_)}},
        }},
        {{65535, 65535}},
        {{
            // optional .turms.client.model.proto.File.Description description = 1;
            {PROTOBUF_FIELD_OFFSET(File, _impl_.description_),
             _Internal::kHasBitsOffset + 1,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
            // optional bytes data = 2;
            {PROTOBUF_FIELD_OFFSET(File, _impl_.data_),
             _Internal::kHasBitsOffset + 0,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
            // repeated .turms.client.model.proto.Value custom_attributes = 15;
            {PROTOBUF_FIELD_OFFSET(File, _impl_.custom_attributes_),
             -1,
             1,
             (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
        }},
        {{
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::File_Description>()},
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::Value>()},
        }},
        {{}},
    };

PROTOBUF_NOINLINE void File::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.File)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.custom_attributes_.Clear();
    cached_has_bits = _impl_._has_bits_[0];
    if (cached_has_bits & 0x00000003u) {
        if (cached_has_bits & 0x00000001u) {
            _impl_.data_.ClearNonDefaultToEmpty();
        }
        if (cached_has_bits & 0x00000002u) {
            ABSL_DCHECK(_impl_.description_ != nullptr);
            _impl_.description_->Clear();
        }
    }
    _impl_._has_bits_.Clear();
    _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::uint8_t* File::_InternalSerialize(const MessageLite& base,
                                    ::uint8_t* target,
                                    ::google::protobuf::io::EpsCopyOutputStream* stream) {
    const File& this_ = static_cast<const File&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::uint8_t* File::_InternalSerialize(::uint8_t* target,
                                    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    const File& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.File)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    cached_has_bits = this_._impl_._has_bits_[0];
    // optional .turms.client.model.proto.File.Description description = 1;
    if (cached_has_bits & 0x00000002u) {
        target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
            1,
            *this_._impl_.description_,
            this_._impl_.description_->GetCachedSize(),
            target,
            stream);
    }

    // optional bytes data = 2;
    if (cached_has_bits & 0x00000001u) {
        const std::string& _s = this_._internal_data();
        target = stream->WriteBytesMaybeAliased(2, _s, target);
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
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.File)
    return target;
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
::size_t File::ByteSizeLong(const MessageLite& base) {
    const File& this_ = static_cast<const File&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
::size_t File::ByteSizeLong() const {
    const File& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
        // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.File)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    ::_pbi::Prefetch5LinesFrom7Lines(&this_);
    {
        // repeated .turms.client.model.proto.Value custom_attributes = 15;
        {
            total_size += 1UL * this_._internal_custom_attributes_size();
            for (const auto& msg : this_._internal_custom_attributes()) {
                total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
            }
        }
    }
    cached_has_bits = this_._impl_._has_bits_[0];
    if (cached_has_bits & 0x00000003u) {
        // optional bytes data = 2;
        if (cached_has_bits & 0x00000001u) {
            total_size +=
                1 + ::google::protobuf::internal::WireFormatLite::BytesSize(this_._internal_data());
        }
        // optional .turms.client.model.proto.File.Description description = 1;
        if (cached_has_bits & 0x00000002u) {
            total_size += 1 + ::google::protobuf::internal::WireFormatLite::MessageSize(
                                  *this_._impl_.description_);
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

void File::MergeImpl(::google::protobuf::MessageLite& to_msg,
                     const ::google::protobuf::MessageLite& from_msg) {
    auto* const _this = static_cast<File*>(&to_msg);
    auto& from = static_cast<const File&>(from_msg);
    ::google::protobuf::Arena* arena = _this->GetArena();
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.File)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    _this->_internal_mutable_custom_attributes()->MergeFrom(from._internal_custom_attributes());
    cached_has_bits = from._impl_._has_bits_[0];
    if (cached_has_bits & 0x00000003u) {
        if (cached_has_bits & 0x00000001u) {
            _this->_internal_set_data(from._internal_data());
        }
        if (cached_has_bits & 0x00000002u) {
            ABSL_DCHECK(from._impl_.description_ != nullptr);
            if (_this->_impl_.description_ == nullptr) {
                _this->_impl_.description_ = ::google::protobuf::MessageLite::CopyConstruct<
                    ::turms::client::model::proto::File_Description>(arena,
                                                                     *from._impl_.description_);
            } else {
                _this->_impl_.description_->MergeFrom(*from._impl_.description_);
            }
        }
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void File::CopyFrom(const File& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.File)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

void File::InternalSwap(File* PROTOBUF_RESTRICT other) {
    using std::swap;
    auto* arena = GetArena();
    ABSL_DCHECK_EQ(arena, other->GetArena());
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
    _impl_.custom_attributes_.InternalSwap(&other->_impl_.custom_attributes_);
    ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.data_, &other->_impl_.data_, arena);
    swap(_impl_.description_, other->_impl_.description_);
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