// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: player.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "player.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace protocol {

namespace {

const ::google::protobuf::Descriptor* SCPlayerInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SCPlayerInfo_reflection_ = NULL;
const ::google::protobuf::Descriptor* SCOnlinePlayerList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SCOnlinePlayerList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_player_2eproto() {
  protobuf_AddDesc_player_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "player.proto");
  GOOGLE_CHECK(file != NULL);
  SCPlayerInfo_descriptor_ = file->message_type(0);
  static const int SCPlayerInfo_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SCPlayerInfo, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SCPlayerInfo, name_),
  };
  SCPlayerInfo_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SCPlayerInfo_descriptor_,
      SCPlayerInfo::default_instance_,
      SCPlayerInfo_offsets_,
      -1,
      -1,
      -1,
      sizeof(SCPlayerInfo),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SCPlayerInfo, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SCPlayerInfo, _is_default_instance_));
  SCOnlinePlayerList_descriptor_ = file->message_type(1);
  static const int SCOnlinePlayerList_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SCOnlinePlayerList, player_),
  };
  SCOnlinePlayerList_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SCOnlinePlayerList_descriptor_,
      SCOnlinePlayerList::default_instance_,
      SCOnlinePlayerList_offsets_,
      -1,
      -1,
      -1,
      sizeof(SCOnlinePlayerList),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SCOnlinePlayerList, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SCOnlinePlayerList, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_player_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SCPlayerInfo_descriptor_, &SCPlayerInfo::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SCOnlinePlayerList_descriptor_, &SCOnlinePlayerList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_player_2eproto() {
  delete SCPlayerInfo::default_instance_;
  delete SCPlayerInfo_reflection_;
  delete SCOnlinePlayerList::default_instance_;
  delete SCOnlinePlayerList_reflection_;
}

void protobuf_AddDesc_player_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014player.proto\022\010protocol\"(\n\014SCPlayerInfo"
    "\022\n\n\002id\030\001 \001(\005\022\014\n\004name\030\002 \001(\t\"<\n\022SCOnlinePl"
    "ayerList\022&\n\006player\030\001 \003(\0132\026.protocol.SCPl"
    "ayerInfob\006proto3", 136);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "player.proto", &protobuf_RegisterTypes);
  SCPlayerInfo::default_instance_ = new SCPlayerInfo();
  SCOnlinePlayerList::default_instance_ = new SCOnlinePlayerList();
  SCPlayerInfo::default_instance_->InitAsDefaultInstance();
  SCOnlinePlayerList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_player_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_player_2eproto {
  StaticDescriptorInitializer_player_2eproto() {
    protobuf_AddDesc_player_2eproto();
  }
} static_descriptor_initializer_player_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int SCPlayerInfo::kIdFieldNumber;
const int SCPlayerInfo::kNameFieldNumber;
#endif  // !_MSC_VER

SCPlayerInfo::SCPlayerInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.SCPlayerInfo)
}

void SCPlayerInfo::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

SCPlayerInfo::SCPlayerInfo(const SCPlayerInfo& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.SCPlayerInfo)
}

void SCPlayerInfo::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

SCPlayerInfo::~SCPlayerInfo() {
  // @@protoc_insertion_point(destructor:protocol.SCPlayerInfo)
  SharedDtor();
}

void SCPlayerInfo::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void SCPlayerInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SCPlayerInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SCPlayerInfo_descriptor_;
}

const SCPlayerInfo& SCPlayerInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_player_2eproto();
  return *default_instance_;
}

SCPlayerInfo* SCPlayerInfo::default_instance_ = NULL;

SCPlayerInfo* SCPlayerInfo::New(::google::protobuf::Arena* arena) const {
  SCPlayerInfo* n = new SCPlayerInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SCPlayerInfo::Clear() {
  id_ = 0;
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool SCPlayerInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.SCPlayerInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // optional string name = 2;
      case 2: {
        if (tag == 18) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "protocol.SCPlayerInfo.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.SCPlayerInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.SCPlayerInfo)
  return false;
#undef DO_
}

void SCPlayerInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.SCPlayerInfo)
  // optional int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "protocol.SCPlayerInfo.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.SCPlayerInfo)
}

::google::protobuf::uint8* SCPlayerInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.SCPlayerInfo)
  // optional int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "protocol.SCPlayerInfo.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.SCPlayerInfo)
  return target;
}

int SCPlayerInfo::ByteSize() const {
  int total_size = 0;

  // optional int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  // optional string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SCPlayerInfo::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const SCPlayerInfo* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SCPlayerInfo>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SCPlayerInfo::MergeFrom(const SCPlayerInfo& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void SCPlayerInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SCPlayerInfo::CopyFrom(const SCPlayerInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SCPlayerInfo::IsInitialized() const {

  return true;
}

void SCPlayerInfo::Swap(SCPlayerInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SCPlayerInfo::InternalSwap(SCPlayerInfo* other) {
  std::swap(id_, other->id_);
  name_.Swap(&other->name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SCPlayerInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SCPlayerInfo_descriptor_;
  metadata.reflection = SCPlayerInfo_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SCPlayerInfo

// optional int32 id = 1;
void SCPlayerInfo::clear_id() {
  id_ = 0;
}
 ::google::protobuf::int32 SCPlayerInfo::id() const {
  // @@protoc_insertion_point(field_get:protocol.SCPlayerInfo.id)
  return id_;
}
 void SCPlayerInfo::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:protocol.SCPlayerInfo.id)
}

// optional string name = 2;
void SCPlayerInfo::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& SCPlayerInfo::name() const {
  // @@protoc_insertion_point(field_get:protocol.SCPlayerInfo.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SCPlayerInfo::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.SCPlayerInfo.name)
}
 void SCPlayerInfo::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.SCPlayerInfo.name)
}
 void SCPlayerInfo::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.SCPlayerInfo.name)
}
 ::std::string* SCPlayerInfo::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:protocol.SCPlayerInfo.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* SCPlayerInfo::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SCPlayerInfo::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:protocol.SCPlayerInfo.name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#ifndef _MSC_VER
const int SCOnlinePlayerList::kPlayerFieldNumber;
#endif  // !_MSC_VER

SCOnlinePlayerList::SCOnlinePlayerList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.SCOnlinePlayerList)
}

void SCOnlinePlayerList::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

SCOnlinePlayerList::SCOnlinePlayerList(const SCOnlinePlayerList& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.SCOnlinePlayerList)
}

void SCOnlinePlayerList::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

SCOnlinePlayerList::~SCOnlinePlayerList() {
  // @@protoc_insertion_point(destructor:protocol.SCOnlinePlayerList)
  SharedDtor();
}

void SCOnlinePlayerList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SCOnlinePlayerList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SCOnlinePlayerList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SCOnlinePlayerList_descriptor_;
}

const SCOnlinePlayerList& SCOnlinePlayerList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_player_2eproto();
  return *default_instance_;
}

SCOnlinePlayerList* SCOnlinePlayerList::default_instance_ = NULL;

SCOnlinePlayerList* SCOnlinePlayerList::New(::google::protobuf::Arena* arena) const {
  SCOnlinePlayerList* n = new SCOnlinePlayerList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SCOnlinePlayerList::Clear() {
  player_.Clear();
}

bool SCOnlinePlayerList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.SCOnlinePlayerList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .protocol.SCPlayerInfo player = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_player:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_player()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_player;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.SCOnlinePlayerList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.SCOnlinePlayerList)
  return false;
#undef DO_
}

void SCOnlinePlayerList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.SCOnlinePlayerList)
  // repeated .protocol.SCPlayerInfo player = 1;
  for (unsigned int i = 0, n = this->player_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->player(i), output);
  }

  // @@protoc_insertion_point(serialize_end:protocol.SCOnlinePlayerList)
}

::google::protobuf::uint8* SCOnlinePlayerList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.SCOnlinePlayerList)
  // repeated .protocol.SCPlayerInfo player = 1;
  for (unsigned int i = 0, n = this->player_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->player(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:protocol.SCOnlinePlayerList)
  return target;
}

int SCOnlinePlayerList::ByteSize() const {
  int total_size = 0;

  // repeated .protocol.SCPlayerInfo player = 1;
  total_size += 1 * this->player_size();
  for (int i = 0; i < this->player_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->player(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SCOnlinePlayerList::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const SCOnlinePlayerList* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SCOnlinePlayerList>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SCOnlinePlayerList::MergeFrom(const SCOnlinePlayerList& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  player_.MergeFrom(from.player_);
}

void SCOnlinePlayerList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SCOnlinePlayerList::CopyFrom(const SCOnlinePlayerList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SCOnlinePlayerList::IsInitialized() const {

  return true;
}

void SCOnlinePlayerList::Swap(SCOnlinePlayerList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SCOnlinePlayerList::InternalSwap(SCOnlinePlayerList* other) {
  player_.UnsafeArenaSwap(&other->player_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SCOnlinePlayerList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SCOnlinePlayerList_descriptor_;
  metadata.reflection = SCOnlinePlayerList_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SCOnlinePlayerList

// repeated .protocol.SCPlayerInfo player = 1;
int SCOnlinePlayerList::player_size() const {
  return player_.size();
}
void SCOnlinePlayerList::clear_player() {
  player_.Clear();
}
 const ::protocol::SCPlayerInfo& SCOnlinePlayerList::player(int index) const {
  // @@protoc_insertion_point(field_get:protocol.SCOnlinePlayerList.player)
  return player_.Get(index);
}
 ::protocol::SCPlayerInfo* SCOnlinePlayerList::mutable_player(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.SCOnlinePlayerList.player)
  return player_.Mutable(index);
}
 ::protocol::SCPlayerInfo* SCOnlinePlayerList::add_player() {
  // @@protoc_insertion_point(field_add:protocol.SCOnlinePlayerList.player)
  return player_.Add();
}
 const ::google::protobuf::RepeatedPtrField< ::protocol::SCPlayerInfo >&
SCOnlinePlayerList::player() const {
  // @@protoc_insertion_point(field_list:protocol.SCOnlinePlayerList.player)
  return player_;
}
 ::google::protobuf::RepeatedPtrField< ::protocol::SCPlayerInfo >*
SCOnlinePlayerList::mutable_player() {
  // @@protoc_insertion_point(field_mutable_list:protocol.SCOnlinePlayerList.player)
  return &player_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

// @@protoc_insertion_point(global_scope)
