// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: player.proto

#ifndef PROTOBUF_player_2eproto__INCLUDED
#define PROTOBUF_player_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protocol {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_player_2eproto();
void protobuf_AssignDesc_player_2eproto();
void protobuf_ShutdownFile_player_2eproto();

class SCPlayerInfo;
class SCOnlinePlayerList;

// ===================================================================

class SCPlayerInfo : public ::google::protobuf::Message {
 public:
  SCPlayerInfo();
  virtual ~SCPlayerInfo();

  SCPlayerInfo(const SCPlayerInfo& from);

  inline SCPlayerInfo& operator=(const SCPlayerInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SCPlayerInfo& default_instance();

  void Swap(SCPlayerInfo* other);

  // implements Message ----------------------------------------------

  inline SCPlayerInfo* New() const { return New(NULL); }

  SCPlayerInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SCPlayerInfo& from);
  void MergeFrom(const SCPlayerInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SCPlayerInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:protocol.SCPlayerInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_player_2eproto();
  friend void protobuf_AssignDesc_player_2eproto();
  friend void protobuf_ShutdownFile_player_2eproto();

  void InitAsDefaultInstance();
  static SCPlayerInfo* default_instance_;
};
// -------------------------------------------------------------------

class SCOnlinePlayerList : public ::google::protobuf::Message {
 public:
  SCOnlinePlayerList();
  virtual ~SCOnlinePlayerList();

  SCOnlinePlayerList(const SCOnlinePlayerList& from);

  inline SCOnlinePlayerList& operator=(const SCOnlinePlayerList& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SCOnlinePlayerList& default_instance();

  void Swap(SCOnlinePlayerList* other);

  // implements Message ----------------------------------------------

  inline SCOnlinePlayerList* New() const { return New(NULL); }

  SCOnlinePlayerList* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SCOnlinePlayerList& from);
  void MergeFrom(const SCOnlinePlayerList& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SCOnlinePlayerList* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .protocol.SCPlayerInfo player = 1;
  int player_size() const;
  void clear_player();
  static const int kPlayerFieldNumber = 1;
  const ::protocol::SCPlayerInfo& player(int index) const;
  ::protocol::SCPlayerInfo* mutable_player(int index);
  ::protocol::SCPlayerInfo* add_player();
  const ::google::protobuf::RepeatedPtrField< ::protocol::SCPlayerInfo >&
      player() const;
  ::google::protobuf::RepeatedPtrField< ::protocol::SCPlayerInfo >*
      mutable_player();

  // @@protoc_insertion_point(class_scope:protocol.SCOnlinePlayerList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::protocol::SCPlayerInfo > player_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_player_2eproto();
  friend void protobuf_AssignDesc_player_2eproto();
  friend void protobuf_ShutdownFile_player_2eproto();

  void InitAsDefaultInstance();
  static SCOnlinePlayerList* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SCPlayerInfo

// optional int32 id = 1;
inline void SCPlayerInfo::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 SCPlayerInfo::id() const {
  // @@protoc_insertion_point(field_get:protocol.SCPlayerInfo.id)
  return id_;
}
inline void SCPlayerInfo::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:protocol.SCPlayerInfo.id)
}

// optional string name = 2;
inline void SCPlayerInfo::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SCPlayerInfo::name() const {
  // @@protoc_insertion_point(field_get:protocol.SCPlayerInfo.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SCPlayerInfo::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.SCPlayerInfo.name)
}
inline void SCPlayerInfo::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.SCPlayerInfo.name)
}
inline void SCPlayerInfo::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.SCPlayerInfo.name)
}
inline ::std::string* SCPlayerInfo::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:protocol.SCPlayerInfo.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SCPlayerInfo::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SCPlayerInfo::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:protocol.SCPlayerInfo.name)
}

// -------------------------------------------------------------------

// SCOnlinePlayerList

// repeated .protocol.SCPlayerInfo player = 1;
inline int SCOnlinePlayerList::player_size() const {
  return player_.size();
}
inline void SCOnlinePlayerList::clear_player() {
  player_.Clear();
}
inline const ::protocol::SCPlayerInfo& SCOnlinePlayerList::player(int index) const {
  // @@protoc_insertion_point(field_get:protocol.SCOnlinePlayerList.player)
  return player_.Get(index);
}
inline ::protocol::SCPlayerInfo* SCOnlinePlayerList::mutable_player(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.SCOnlinePlayerList.player)
  return player_.Mutable(index);
}
inline ::protocol::SCPlayerInfo* SCOnlinePlayerList::add_player() {
  // @@protoc_insertion_point(field_add:protocol.SCOnlinePlayerList.player)
  return player_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::protocol::SCPlayerInfo >&
SCOnlinePlayerList::player() const {
  // @@protoc_insertion_point(field_list:protocol.SCOnlinePlayerList.player)
  return player_;
}
inline ::google::protobuf::RepeatedPtrField< ::protocol::SCPlayerInfo >*
SCOnlinePlayerList::mutable_player() {
  // @@protoc_insertion_point(field_mutable_list:protocol.SCOnlinePlayerList.player)
  return &player_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_player_2eproto__INCLUDED
