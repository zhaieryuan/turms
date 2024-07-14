// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: model/file/file.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2ffile_2ffile_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2ffile_2ffile_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_model_2ffile_2ffile_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2ffile_2ffile_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class File;
struct FileDefaultTypeInternal;
extern FileDefaultTypeInternal _File_default_instance_;
class File_Description;
struct File_DescriptionDefaultTypeInternal;
extern File_DescriptionDefaultTypeInternal _File_Description_default_instance_;
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

class File_Description final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.File.Description) */ {
   public:
    inline File_Description()
        : File_Description(nullptr) {
    }
    ~File_Description() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR File_Description(::google::protobuf::internal::ConstantInitialized);

    inline File_Description(const File_Description& from)
        : File_Description(nullptr, from) {
    }
    inline File_Description(File_Description&& from) noexcept
        : File_Description(nullptr, std::move(from)) {
    }
    inline File_Description& operator=(const File_Description& from) {
        CopyFrom(from);
        return *this;
    }
    inline File_Description& operator=(File_Description&& from) noexcept {
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

    static const File_Description& default_instance() {
        return *internal_default_instance();
    }
    static inline const File_Description* internal_default_instance() {
        return reinterpret_cast<const File_Description*>(&_File_Description_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(File_Description& a, File_Description& b) {
        a.Swap(&b);
    }
    inline void Swap(File_Description* other) {
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
    void UnsafeArenaSwap(File_Description* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    File_Description* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<File_Description>(arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const File_Description& from);
    void MergeFrom(const File_Description& from);
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
    void InternalSwap(File_Description* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.File.Description";
    }

   protected:
    explicit File_Description(::google::protobuf::Arena* arena);
    File_Description(::google::protobuf::Arena* arena, const File_Description& from);
    File_Description(::google::protobuf::Arena* arena, File_Description&& from) noexcept
        : File_Description(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kUrlFieldNumber = 1,
        kFormatFieldNumber = 3,
        kSizeFieldNumber = 2,
    };
    // string url = 1;
    void clear_url();
    const std::string& url() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_url(Arg_&& arg, Args_... args);
    std::string* mutable_url();
    PROTOBUF_NODISCARD std::string* release_url();
    void set_allocated_url(std::string* value);

   private:
    const std::string& _internal_url() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_url(const std::string& value);
    std::string* _internal_mutable_url();

   public:
    // optional string format = 3;
    bool has_format() const;
    void clear_format();
    const std::string& format() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_format(Arg_&& arg, Args_... args);
    std::string* mutable_format();
    PROTOBUF_NODISCARD std::string* release_format();
    void set_allocated_format(std::string* value);

   private:
    const std::string& _internal_format() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_format(const std::string& value);
    std::string* _internal_mutable_format();

   public:
    // optional int32 size = 2;
    bool has_size() const;
    void clear_size();
    ::int32_t size() const;
    void set_size(::int32_t value);

   private:
    ::int32_t _internal_size() const;
    void _internal_set_size(::int32_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.File.Description)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<2, 3, 0, 59, 2> _table_;

    static constexpr const void* _raw_default_instance_ = &_File_Description_default_instance_;

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
                              const File_Description& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::internal::ArenaStringPtr url_;
        ::google::protobuf::internal::ArenaStringPtr format_;
        ::int32_t size_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2ffile_2ffile_2eproto;
};
// -------------------------------------------------------------------

class File final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.File) */ {
   public:
    inline File()
        : File(nullptr) {
    }
    ~File() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR File(::google::protobuf::internal::ConstantInitialized);

    inline File(const File& from)
        : File(nullptr, from) {
    }
    inline File(File&& from) noexcept
        : File(nullptr, std::move(from)) {
    }
    inline File& operator=(const File& from) {
        CopyFrom(from);
        return *this;
    }
    inline File& operator=(File&& from) noexcept {
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

    static const File& default_instance() {
        return *internal_default_instance();
    }
    static inline const File* internal_default_instance() {
        return reinterpret_cast<const File*>(&_File_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 1;
    friend void swap(File& a, File& b) {
        a.Swap(&b);
    }
    inline void Swap(File* other) {
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
    void UnsafeArenaSwap(File* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    File* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<File>(arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const File& from);
    void MergeFrom(const File& from);
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
    void InternalSwap(File* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.File";
    }

   protected:
    explicit File(::google::protobuf::Arena* arena);
    File(::google::protobuf::Arena* arena, const File& from);
    File(::google::protobuf::Arena* arena, File&& from) noexcept
        : File(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------
    using Description = File_Description;

    // accessors -------------------------------------------------------
    enum : int {
        kCustomAttributesFieldNumber = 15,
        kDataFieldNumber = 2,
        kDescriptionFieldNumber = 1,
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
    // optional bytes data = 2;
    bool has_data() const;
    void clear_data();
    const std::string& data() const;
    template <typename Arg_ = const std::string&, typename... Args_>
    void set_data(Arg_&& arg, Args_... args);
    std::string* mutable_data();
    PROTOBUF_NODISCARD std::string* release_data();
    void set_allocated_data(std::string* value);

   private:
    const std::string& _internal_data() const;
    inline PROTOBUF_ALWAYS_INLINE void _internal_set_data(const std::string& value);
    std::string* _internal_mutable_data();

   public:
    // optional .turms.client.model.proto.File.Description description = 1;
    bool has_description() const;
    void clear_description();
    const ::turms::client::model::proto::File_Description& description() const;
    PROTOBUF_NODISCARD ::turms::client::model::proto::File_Description* release_description();
    ::turms::client::model::proto::File_Description* mutable_description();
    void set_allocated_description(::turms::client::model::proto::File_Description* value);
    void unsafe_arena_set_allocated_description(
        ::turms::client::model::proto::File_Description* value);
    ::turms::client::model::proto::File_Description* unsafe_arena_release_description();

   private:
    const ::turms::client::model::proto::File_Description& _internal_description() const;
    ::turms::client::model::proto::File_Description* _internal_mutable_description();

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.File)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<2, 3, 2, 0, 2> _table_;

    static constexpr const void* _raw_default_instance_ = &_File_default_instance_;

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
                              const File& from_msg);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>
            custom_attributes_;
        ::google::protobuf::internal::ArenaStringPtr data_;
        ::turms::client::model::proto::File_Description* description_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2ffile_2ffile_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// File_Description

// string url = 1;
inline void File_Description::clear_url() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.url_.ClearToEmpty();
}
inline const std::string& File_Description::url() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.File.Description.url)
    return _internal_url();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void File_Description::set_url(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.url_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.File.Description.url)
}
inline std::string* File_Description::mutable_url() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_url();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.File.Description.url)
    return _s;
}
inline const std::string& File_Description::_internal_url() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.url_.Get();
}
inline void File_Description::_internal_set_url(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.url_.Set(value, GetArena());
}
inline std::string* File_Description::_internal_mutable_url() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _impl_.url_.Mutable(GetArena());
}
inline std::string* File_Description::release_url() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.File.Description.url)
    return _impl_.url_.Release();
}
inline void File_Description::set_allocated_url(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.url_.SetAllocated(value, GetArena());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    if (_impl_.url_.IsDefault()) {
        _impl_.url_.Set("", GetArena());
    }
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.File.Description.url)
}

// optional int32 size = 2;
inline bool File_Description::has_size() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    return value;
}
inline void File_Description::clear_size() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.size_ = 0;
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int32_t File_Description::size() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.File.Description.size)
    return _internal_size();
}
inline void File_Description::set_size(::int32_t value) {
    _internal_set_size(value);
    _impl_._has_bits_[0] |= 0x00000002u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.File.Description.size)
}
inline ::int32_t File_Description::_internal_size() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.size_;
}
inline void File_Description::_internal_set_size(::int32_t value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.size_ = value;
}

// optional string format = 3;
inline bool File_Description::has_format() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void File_Description::clear_format() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.format_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& File_Description::format() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.File.Description.format)
    return _internal_format();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void File_Description::set_format(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.format_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.File.Description.format)
}
inline std::string* File_Description::mutable_format() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_format();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.File.Description.format)
    return _s;
}
inline const std::string& File_Description::_internal_format() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.format_.Get();
}
inline void File_Description::_internal_set_format(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.format_.Set(value, GetArena());
}
inline std::string* File_Description::_internal_mutable_format() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    return _impl_.format_.Mutable(GetArena());
}
inline std::string* File_Description::release_format() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.File.Description.format)
    if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000001u;
    auto* released = _impl_.format_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.format_.Set("", GetArena());
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
    return released;
}
inline void File_Description::set_allocated_format(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000001u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000001u;
    }
    _impl_.format_.SetAllocated(value, GetArena());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    if (_impl_.format_.IsDefault()) {
        _impl_.format_.Set("", GetArena());
    }
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.File.Description.format)
}

// -------------------------------------------------------------------

// File

// optional .turms.client.model.proto.File.Description description = 1;
inline bool File::has_description() const {
    bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
    PROTOBUF_ASSUME(!value || _impl_.description_ != nullptr);
    return value;
}
inline void File::clear_description() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (_impl_.description_ != nullptr)
        _impl_.description_->Clear();
    _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const ::turms::client::model::proto::File_Description& File::_internal_description() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    const ::turms::client::model::proto::File_Description* p = _impl_.description_;
    return p != nullptr ? *p
                        : reinterpret_cast<const ::turms::client::model::proto::File_Description&>(
                              ::turms::client::model::proto::_File_Description_default_instance_);
}
inline const ::turms::client::model::proto::File_Description& File::description() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.File.description)
    return _internal_description();
}
inline void File::unsafe_arena_set_allocated_description(
    ::turms::client::model::proto::File_Description* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (GetArena() == nullptr) {
        delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.description_);
    }
    _impl_.description_ = reinterpret_cast<::turms::client::model::proto::File_Description*>(value);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000002u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000002u;
    }
    // @@protoc_insertion_point(field_unsafe_arena_set_allocated:turms.client.model.proto.File.description)
}
inline ::turms::client::model::proto::File_Description* File::release_description() {
    ::google::protobuf::internal::TSanWrite(&_impl_);

    _impl_._has_bits_[0] &= ~0x00000002u;
    ::turms::client::model::proto::File_Description* released = _impl_.description_;
    _impl_.description_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
    auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
    if (GetArena() == nullptr) {
        delete old;
    }
#else   // PROTOBUF_FORCE_COPY_IN_RELEASE
    if (GetArena() != nullptr) {
        released = ::google::protobuf::internal::DuplicateIfNonNull(released);
    }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
    return released;
}
inline ::turms::client::model::proto::File_Description* File::unsafe_arena_release_description() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.File.description)

    _impl_._has_bits_[0] &= ~0x00000002u;
    ::turms::client::model::proto::File_Description* temp = _impl_.description_;
    _impl_.description_ = nullptr;
    return temp;
}
inline ::turms::client::model::proto::File_Description* File::_internal_mutable_description() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (_impl_.description_ == nullptr) {
        auto* p = ::google::protobuf::MessageLite::DefaultConstruct<
            ::turms::client::model::proto::File_Description>(GetArena());
        _impl_.description_ = reinterpret_cast<::turms::client::model::proto::File_Description*>(p);
    }
    return _impl_.description_;
}
inline ::turms::client::model::proto::File_Description* File::mutable_description()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    _impl_._has_bits_[0] |= 0x00000002u;
    ::turms::client::model::proto::File_Description* _msg = _internal_mutable_description();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.File.description)
    return _msg;
}
inline void File::set_allocated_description(
    ::turms::client::model::proto::File_Description* value) {
    ::google::protobuf::Arena* message_arena = GetArena();
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (message_arena == nullptr) {
        delete (_impl_.description_);
    }

    if (value != nullptr) {
        ::google::protobuf::Arena* submessage_arena = (value)->GetArena();
        if (message_arena != submessage_arena) {
            value = ::google::protobuf::internal::GetOwnedMessage(
                message_arena, value, submessage_arena);
        }
        _impl_._has_bits_[0] |= 0x00000002u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000002u;
    }

    _impl_.description_ = reinterpret_cast<::turms::client::model::proto::File_Description*>(value);
    // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.File.description)
}

// optional bytes data = 2;
inline bool File::has_data() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void File::clear_data() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_.data_.ClearToEmpty();
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& File::data() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.File.data)
    return _internal_data();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void File::set_data(Arg_&& arg, Args_... args) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.data_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
    // @@protoc_insertion_point(field_set:turms.client.model.proto.File.data)
}
inline std::string* File::mutable_data() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    std::string* _s = _internal_mutable_data();
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.File.data)
    return _s;
}
inline const std::string& File::_internal_data() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.data_.Get();
}
inline void File::_internal_set_data(const std::string& value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    _impl_.data_.Set(value, GetArena());
}
inline std::string* File::_internal_mutable_data() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    _impl_._has_bits_[0] |= 0x00000001u;
    return _impl_.data_.Mutable(GetArena());
}
inline std::string* File::release_data() {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    // @@protoc_insertion_point(field_release:turms.client.model.proto.File.data)
    if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
        return nullptr;
    }
    _impl_._has_bits_[0] &= ~0x00000001u;
    auto* released = _impl_.data_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.data_.Set("", GetArena());
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
    return released;
}
inline void File::set_allocated_data(std::string* value) {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    if (value != nullptr) {
        _impl_._has_bits_[0] |= 0x00000001u;
    } else {
        _impl_._has_bits_[0] &= ~0x00000001u;
    }
    _impl_.data_.SetAllocated(value, GetArena());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    if (_impl_.data_.IsDefault()) {
        _impl_.data_.Set("", GetArena());
    }
#endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
        // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.File.data)
}

// repeated .turms.client.model.proto.Value custom_attributes = 15;
inline int File::_internal_custom_attributes_size() const {
    return _internal_custom_attributes().size();
}
inline int File::custom_attributes_size() const {
    return _internal_custom_attributes_size();
}
inline ::turms::client::model::proto::Value* File::mutable_custom_attributes(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.File.custom_attributes)
    return _internal_mutable_custom_attributes()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
File::mutable_custom_attributes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.File.custom_attributes)
    ::google::protobuf::internal::TSanWrite(&_impl_);
    return _internal_mutable_custom_attributes();
}
inline const ::turms::client::model::proto::Value& File::custom_attributes(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.File.custom_attributes)
    return _internal_custom_attributes().Get(index);
}
inline ::turms::client::model::proto::Value* File::add_custom_attributes()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    ::google::protobuf::internal::TSanWrite(&_impl_);
    ::turms::client::model::proto::Value* _add = _internal_mutable_custom_attributes()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.File.custom_attributes)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
File::custom_attributes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.File.custom_attributes)
    return _internal_custom_attributes();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>&
File::_internal_custom_attributes() const {
    ::google::protobuf::internal::TSanRead(&_impl_);
    return _impl_.custom_attributes_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Value>*
File::_internal_mutable_custom_attributes() {
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2ffile_2ffile_2eproto_2epb_2eh
