// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Struct.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Struct_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Struct_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "Enum.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Struct_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Struct_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Struct_2eproto;
namespace Protocol {
class ObjectInfo;
struct ObjectInfoDefaultTypeInternal;
extern ObjectInfoDefaultTypeInternal _ObjectInfo_default_instance_;
class StatData;
struct StatDataDefaultTypeInternal;
extern StatDataDefaultTypeInternal _StatData_default_instance_;
}  // namespace Protocol
PROTOBUF_NAMESPACE_OPEN
template<> ::Protocol::ObjectInfo* Arena::CreateMaybeMessage<::Protocol::ObjectInfo>(Arena*);
template<> ::Protocol::StatData* Arena::CreateMaybeMessage<::Protocol::StatData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Protocol {

// ===================================================================

class StatData final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Protocol.StatData) */ {
 public:
  inline StatData() : StatData(nullptr) {}
  ~StatData() override;
  explicit PROTOBUF_CONSTEXPR StatData(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StatData(const StatData& from);
  StatData(StatData&& from) noexcept
    : StatData() {
    *this = ::std::move(from);
  }

  inline StatData& operator=(const StatData& from) {
    CopyFrom(from);
    return *this;
  }
  inline StatData& operator=(StatData&& from) noexcept {
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
  static const StatData& default_instance() {
    return *internal_default_instance();
  }
  static inline const StatData* internal_default_instance() {
    return reinterpret_cast<const StatData*>(
               &_StatData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StatData& a, StatData& b) {
    a.Swap(&b);
  }
  inline void Swap(StatData* other) {
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
  void UnsafeArenaSwap(StatData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StatData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StatData>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StatData& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StatData& from) {
    StatData::MergeImpl(*this, from);
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
  void InternalSwap(StatData* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Protocol.StatData";
  }
  protected:
  explicit StatData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHpFieldNumber = 1,
    kMaxHpFieldNumber = 2,
    kAttackFieldNumber = 3,
    kDefenceFieldNumber = 4,
  };
  // int32 hp = 1;
  void clear_hp();
  int32_t hp() const;
  void set_hp(int32_t value);
  private:
  int32_t _internal_hp() const;
  void _internal_set_hp(int32_t value);
  public:

  // int32 maxHp = 2;
  void clear_maxhp();
  int32_t maxhp() const;
  void set_maxhp(int32_t value);
  private:
  int32_t _internal_maxhp() const;
  void _internal_set_maxhp(int32_t value);
  public:

  // int32 attack = 3;
  void clear_attack();
  int32_t attack() const;
  void set_attack(int32_t value);
  private:
  int32_t _internal_attack() const;
  void _internal_set_attack(int32_t value);
  public:

  // int32 defence = 4;
  void clear_defence();
  int32_t defence() const;
  void set_defence(int32_t value);
  private:
  int32_t _internal_defence() const;
  void _internal_set_defence(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Protocol.StatData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t hp_;
    int32_t maxhp_;
    int32_t attack_;
    int32_t defence_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Struct_2eproto;
};
// -------------------------------------------------------------------

class ObjectInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Protocol.ObjectInfo) */ {
 public:
  inline ObjectInfo() : ObjectInfo(nullptr) {}
  ~ObjectInfo() override;
  explicit PROTOBUF_CONSTEXPR ObjectInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ObjectInfo(const ObjectInfo& from);
  ObjectInfo(ObjectInfo&& from) noexcept
    : ObjectInfo() {
    *this = ::std::move(from);
  }

  inline ObjectInfo& operator=(const ObjectInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ObjectInfo& operator=(ObjectInfo&& from) noexcept {
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
  static const ObjectInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const ObjectInfo* internal_default_instance() {
    return reinterpret_cast<const ObjectInfo*>(
               &_ObjectInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ObjectInfo& a, ObjectInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(ObjectInfo* other) {
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
  void UnsafeArenaSwap(ObjectInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ObjectInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ObjectInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ObjectInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ObjectInfo& from) {
    ObjectInfo::MergeImpl(*this, from);
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
  void InternalSwap(ObjectInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Protocol.ObjectInfo";
  }
  protected:
  explicit ObjectInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 7,
    kStatFieldNumber = 8,
    kObjectIdFieldNumber = 1,
    kObjectTypeFieldNumber = 2,
    kStateFieldNumber = 3,
    kDirFieldNumber = 4,
    kPosXFieldNumber = 5,
    kPosYFieldNumber = 6,
  };
  // string name = 7;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // .Protocol.StatData stat = 8;
  bool has_stat() const;
  private:
  bool _internal_has_stat() const;
  public:
  void clear_stat();
  const ::Protocol::StatData& stat() const;
  PROTOBUF_NODISCARD ::Protocol::StatData* release_stat();
  ::Protocol::StatData* mutable_stat();
  void set_allocated_stat(::Protocol::StatData* stat);
  private:
  const ::Protocol::StatData& _internal_stat() const;
  ::Protocol::StatData* _internal_mutable_stat();
  public:
  void unsafe_arena_set_allocated_stat(
      ::Protocol::StatData* stat);
  ::Protocol::StatData* unsafe_arena_release_stat();

  // uint64 objectId = 1;
  void clear_objectid();
  uint64_t objectid() const;
  void set_objectid(uint64_t value);
  private:
  uint64_t _internal_objectid() const;
  void _internal_set_objectid(uint64_t value);
  public:

  // .Protocol.OBJECT_TYPE objectType = 2;
  void clear_objecttype();
  ::Protocol::OBJECT_TYPE objecttype() const;
  void set_objecttype(::Protocol::OBJECT_TYPE value);
  private:
  ::Protocol::OBJECT_TYPE _internal_objecttype() const;
  void _internal_set_objecttype(::Protocol::OBJECT_TYPE value);
  public:

  // .Protocol.OBJECT_STATE_TYPE state = 3;
  void clear_state();
  ::Protocol::OBJECT_STATE_TYPE state() const;
  void set_state(::Protocol::OBJECT_STATE_TYPE value);
  private:
  ::Protocol::OBJECT_STATE_TYPE _internal_state() const;
  void _internal_set_state(::Protocol::OBJECT_STATE_TYPE value);
  public:

  // .Protocol.DIR_TYPE dir = 4;
  void clear_dir();
  ::Protocol::DIR_TYPE dir() const;
  void set_dir(::Protocol::DIR_TYPE value);
  private:
  ::Protocol::DIR_TYPE _internal_dir() const;
  void _internal_set_dir(::Protocol::DIR_TYPE value);
  public:

  // int32 posX = 5;
  void clear_posx();
  int32_t posx() const;
  void set_posx(int32_t value);
  private:
  int32_t _internal_posx() const;
  void _internal_set_posx(int32_t value);
  public:

  // int32 posY = 6;
  void clear_posy();
  int32_t posy() const;
  void set_posy(int32_t value);
  private:
  int32_t _internal_posy() const;
  void _internal_set_posy(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Protocol.ObjectInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::Protocol::StatData* stat_;
    uint64_t objectid_;
    int objecttype_;
    int state_;
    int dir_;
    int32_t posx_;
    int32_t posy_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Struct_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StatData

// int32 hp = 1;
inline void StatData::clear_hp() {
  _impl_.hp_ = 0;
}
inline int32_t StatData::_internal_hp() const {
  return _impl_.hp_;
}
inline int32_t StatData::hp() const {
  // @@protoc_insertion_point(field_get:Protocol.StatData.hp)
  return _internal_hp();
}
inline void StatData::_internal_set_hp(int32_t value) {
  
  _impl_.hp_ = value;
}
inline void StatData::set_hp(int32_t value) {
  _internal_set_hp(value);
  // @@protoc_insertion_point(field_set:Protocol.StatData.hp)
}

// int32 maxHp = 2;
inline void StatData::clear_maxhp() {
  _impl_.maxhp_ = 0;
}
inline int32_t StatData::_internal_maxhp() const {
  return _impl_.maxhp_;
}
inline int32_t StatData::maxhp() const {
  // @@protoc_insertion_point(field_get:Protocol.StatData.maxHp)
  return _internal_maxhp();
}
inline void StatData::_internal_set_maxhp(int32_t value) {
  
  _impl_.maxhp_ = value;
}
inline void StatData::set_maxhp(int32_t value) {
  _internal_set_maxhp(value);
  // @@protoc_insertion_point(field_set:Protocol.StatData.maxHp)
}

// int32 attack = 3;
inline void StatData::clear_attack() {
  _impl_.attack_ = 0;
}
inline int32_t StatData::_internal_attack() const {
  return _impl_.attack_;
}
inline int32_t StatData::attack() const {
  // @@protoc_insertion_point(field_get:Protocol.StatData.attack)
  return _internal_attack();
}
inline void StatData::_internal_set_attack(int32_t value) {
  
  _impl_.attack_ = value;
}
inline void StatData::set_attack(int32_t value) {
  _internal_set_attack(value);
  // @@protoc_insertion_point(field_set:Protocol.StatData.attack)
}

// int32 defence = 4;
inline void StatData::clear_defence() {
  _impl_.defence_ = 0;
}
inline int32_t StatData::_internal_defence() const {
  return _impl_.defence_;
}
inline int32_t StatData::defence() const {
  // @@protoc_insertion_point(field_get:Protocol.StatData.defence)
  return _internal_defence();
}
inline void StatData::_internal_set_defence(int32_t value) {
  
  _impl_.defence_ = value;
}
inline void StatData::set_defence(int32_t value) {
  _internal_set_defence(value);
  // @@protoc_insertion_point(field_set:Protocol.StatData.defence)
}

// -------------------------------------------------------------------

// ObjectInfo

// uint64 objectId = 1;
inline void ObjectInfo::clear_objectid() {
  _impl_.objectid_ = uint64_t{0u};
}
inline uint64_t ObjectInfo::_internal_objectid() const {
  return _impl_.objectid_;
}
inline uint64_t ObjectInfo::objectid() const {
  // @@protoc_insertion_point(field_get:Protocol.ObjectInfo.objectId)
  return _internal_objectid();
}
inline void ObjectInfo::_internal_set_objectid(uint64_t value) {
  
  _impl_.objectid_ = value;
}
inline void ObjectInfo::set_objectid(uint64_t value) {
  _internal_set_objectid(value);
  // @@protoc_insertion_point(field_set:Protocol.ObjectInfo.objectId)
}

// .Protocol.OBJECT_TYPE objectType = 2;
inline void ObjectInfo::clear_objecttype() {
  _impl_.objecttype_ = 0;
}
inline ::Protocol::OBJECT_TYPE ObjectInfo::_internal_objecttype() const {
  return static_cast< ::Protocol::OBJECT_TYPE >(_impl_.objecttype_);
}
inline ::Protocol::OBJECT_TYPE ObjectInfo::objecttype() const {
  // @@protoc_insertion_point(field_get:Protocol.ObjectInfo.objectType)
  return _internal_objecttype();
}
inline void ObjectInfo::_internal_set_objecttype(::Protocol::OBJECT_TYPE value) {
  
  _impl_.objecttype_ = value;
}
inline void ObjectInfo::set_objecttype(::Protocol::OBJECT_TYPE value) {
  _internal_set_objecttype(value);
  // @@protoc_insertion_point(field_set:Protocol.ObjectInfo.objectType)
}

// .Protocol.OBJECT_STATE_TYPE state = 3;
inline void ObjectInfo::clear_state() {
  _impl_.state_ = 0;
}
inline ::Protocol::OBJECT_STATE_TYPE ObjectInfo::_internal_state() const {
  return static_cast< ::Protocol::OBJECT_STATE_TYPE >(_impl_.state_);
}
inline ::Protocol::OBJECT_STATE_TYPE ObjectInfo::state() const {
  // @@protoc_insertion_point(field_get:Protocol.ObjectInfo.state)
  return _internal_state();
}
inline void ObjectInfo::_internal_set_state(::Protocol::OBJECT_STATE_TYPE value) {
  
  _impl_.state_ = value;
}
inline void ObjectInfo::set_state(::Protocol::OBJECT_STATE_TYPE value) {
  _internal_set_state(value);
  // @@protoc_insertion_point(field_set:Protocol.ObjectInfo.state)
}

// .Protocol.DIR_TYPE dir = 4;
inline void ObjectInfo::clear_dir() {
  _impl_.dir_ = 0;
}
inline ::Protocol::DIR_TYPE ObjectInfo::_internal_dir() const {
  return static_cast< ::Protocol::DIR_TYPE >(_impl_.dir_);
}
inline ::Protocol::DIR_TYPE ObjectInfo::dir() const {
  // @@protoc_insertion_point(field_get:Protocol.ObjectInfo.dir)
  return _internal_dir();
}
inline void ObjectInfo::_internal_set_dir(::Protocol::DIR_TYPE value) {
  
  _impl_.dir_ = value;
}
inline void ObjectInfo::set_dir(::Protocol::DIR_TYPE value) {
  _internal_set_dir(value);
  // @@protoc_insertion_point(field_set:Protocol.ObjectInfo.dir)
}

// int32 posX = 5;
inline void ObjectInfo::clear_posx() {
  _impl_.posx_ = 0;
}
inline int32_t ObjectInfo::_internal_posx() const {
  return _impl_.posx_;
}
inline int32_t ObjectInfo::posx() const {
  // @@protoc_insertion_point(field_get:Protocol.ObjectInfo.posX)
  return _internal_posx();
}
inline void ObjectInfo::_internal_set_posx(int32_t value) {
  
  _impl_.posx_ = value;
}
inline void ObjectInfo::set_posx(int32_t value) {
  _internal_set_posx(value);
  // @@protoc_insertion_point(field_set:Protocol.ObjectInfo.posX)
}

// int32 posY = 6;
inline void ObjectInfo::clear_posy() {
  _impl_.posy_ = 0;
}
inline int32_t ObjectInfo::_internal_posy() const {
  return _impl_.posy_;
}
inline int32_t ObjectInfo::posy() const {
  // @@protoc_insertion_point(field_get:Protocol.ObjectInfo.posY)
  return _internal_posy();
}
inline void ObjectInfo::_internal_set_posy(int32_t value) {
  
  _impl_.posy_ = value;
}
inline void ObjectInfo::set_posy(int32_t value) {
  _internal_set_posy(value);
  // @@protoc_insertion_point(field_set:Protocol.ObjectInfo.posY)
}

// string name = 7;
inline void ObjectInfo::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& ObjectInfo::name() const {
  // @@protoc_insertion_point(field_get:Protocol.ObjectInfo.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ObjectInfo::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Protocol.ObjectInfo.name)
}
inline std::string* ObjectInfo::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Protocol.ObjectInfo.name)
  return _s;
}
inline const std::string& ObjectInfo::_internal_name() const {
  return _impl_.name_.Get();
}
inline void ObjectInfo::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* ObjectInfo::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* ObjectInfo::release_name() {
  // @@protoc_insertion_point(field_release:Protocol.ObjectInfo.name)
  return _impl_.name_.Release();
}
inline void ObjectInfo::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Protocol.ObjectInfo.name)
}

// .Protocol.StatData stat = 8;
inline bool ObjectInfo::_internal_has_stat() const {
  return this != internal_default_instance() && _impl_.stat_ != nullptr;
}
inline bool ObjectInfo::has_stat() const {
  return _internal_has_stat();
}
inline void ObjectInfo::clear_stat() {
  if (GetArenaForAllocation() == nullptr && _impl_.stat_ != nullptr) {
    delete _impl_.stat_;
  }
  _impl_.stat_ = nullptr;
}
inline const ::Protocol::StatData& ObjectInfo::_internal_stat() const {
  const ::Protocol::StatData* p = _impl_.stat_;
  return p != nullptr ? *p : reinterpret_cast<const ::Protocol::StatData&>(
      ::Protocol::_StatData_default_instance_);
}
inline const ::Protocol::StatData& ObjectInfo::stat() const {
  // @@protoc_insertion_point(field_get:Protocol.ObjectInfo.stat)
  return _internal_stat();
}
inline void ObjectInfo::unsafe_arena_set_allocated_stat(
    ::Protocol::StatData* stat) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.stat_);
  }
  _impl_.stat_ = stat;
  if (stat) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Protocol.ObjectInfo.stat)
}
inline ::Protocol::StatData* ObjectInfo::release_stat() {
  
  ::Protocol::StatData* temp = _impl_.stat_;
  _impl_.stat_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::Protocol::StatData* ObjectInfo::unsafe_arena_release_stat() {
  // @@protoc_insertion_point(field_release:Protocol.ObjectInfo.stat)
  
  ::Protocol::StatData* temp = _impl_.stat_;
  _impl_.stat_ = nullptr;
  return temp;
}
inline ::Protocol::StatData* ObjectInfo::_internal_mutable_stat() {
  
  if (_impl_.stat_ == nullptr) {
    auto* p = CreateMaybeMessage<::Protocol::StatData>(GetArenaForAllocation());
    _impl_.stat_ = p;
  }
  return _impl_.stat_;
}
inline ::Protocol::StatData* ObjectInfo::mutable_stat() {
  ::Protocol::StatData* _msg = _internal_mutable_stat();
  // @@protoc_insertion_point(field_mutable:Protocol.ObjectInfo.stat)
  return _msg;
}
inline void ObjectInfo::set_allocated_stat(::Protocol::StatData* stat) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.stat_;
  }
  if (stat) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(stat);
    if (message_arena != submessage_arena) {
      stat = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, stat, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.stat_ = stat;
  // @@protoc_insertion_point(field_set_allocated:Protocol.ObjectInfo.stat)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Struct_2eproto
