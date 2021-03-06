// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RseQueryPvE.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* MsgNpcJson_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgNpcJson_reflection_ = NULL;
const ::google::protobuf::Descriptor* RseQueryPvE_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RseQueryPvE_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RseQueryPvE_2eproto() {
  protobuf_AddDesc_RseQueryPvE_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RseQueryPvE.proto");
  GOOGLE_CHECK(file != NULL);
  MsgNpcJson_descriptor_ = file->message_type(0);
  static const int MsgNpcJson_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgNpcJson, item_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgNpcJson, bunker_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgNpcJson, gameunit_),
  };
  MsgNpcJson_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgNpcJson_descriptor_,
      MsgNpcJson::default_instance_,
      MsgNpcJson_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgNpcJson, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgNpcJson, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgNpcJson));
  RseQueryPvE_descriptor_ = file->message_type(1);
  static const int RseQueryPvE_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryPvE, ret_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryPvE, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryPvE, pve_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryPvE, npc_),
  };
  RseQueryPvE_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RseQueryPvE_descriptor_,
      RseQueryPvE::default_instance_,
      RseQueryPvE_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryPvE, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryPvE, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RseQueryPvE));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RseQueryPvE_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgNpcJson_descriptor_, &MsgNpcJson::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RseQueryPvE_descriptor_, &RseQueryPvE::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RseQueryPvE_2eproto() {
  delete MsgNpcJson::default_instance_;
  delete MsgNpcJson_reflection_;
  delete RseQueryPvE::default_instance_;
  delete RseQueryPvE_reflection_;
}

void protobuf_AddDesc_RseQueryPvE_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_MsgCommon_2eproto();
  ::protobuf_AddDesc_MsgBuildingItem_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021RseQueryPvE.proto\032\017MsgCommon.proto\032\025Ms"
    "gBuildingItem.proto\"k\n\nMsgNpcJson\022\036\n\004ite"
    "m\030\001 \003(\0132\020.MsgBuildingItem\022\035\n\006bunker\030\002 \003("
    "\0132\r.MsgSidSkuNum\022\036\n\010gameUnit\030\003 \003(\0132\014.Msg"
    "KeyValue\"]\n\013RseQueryPvE\022\013\n\003ret\030\001 \001(\005\022\014\n\004"
    "type\030\002 \001(\005\022\031\n\003pve\030\003 \003(\0132\014.MsgKeyValue\022\030\n"
    "\003npc\030\004 \001(\0132\013.MsgNpcJson", 263);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RseQueryPvE.proto", &protobuf_RegisterTypes);
  MsgNpcJson::default_instance_ = new MsgNpcJson();
  RseQueryPvE::default_instance_ = new RseQueryPvE();
  MsgNpcJson::default_instance_->InitAsDefaultInstance();
  RseQueryPvE::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RseQueryPvE_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RseQueryPvE_2eproto {
  StaticDescriptorInitializer_RseQueryPvE_2eproto() {
    protobuf_AddDesc_RseQueryPvE_2eproto();
  }
} static_descriptor_initializer_RseQueryPvE_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int MsgNpcJson::kItemFieldNumber;
const int MsgNpcJson::kBunkerFieldNumber;
const int MsgNpcJson::kGameUnitFieldNumber;
#endif  // !_MSC_VER

MsgNpcJson::MsgNpcJson() {
  SharedCtor();
}

void MsgNpcJson::InitAsDefaultInstance() {
}

MsgNpcJson::MsgNpcJson(const MsgNpcJson& from) {
  SharedCtor();
  MergeFrom(from);
}

void MsgNpcJson::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgNpcJson::~MsgNpcJson() {
  SharedDtor();
}

void MsgNpcJson::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* MsgNpcJson::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgNpcJson_descriptor_;
}

const MsgNpcJson& MsgNpcJson::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseQueryPvE_2eproto();  return *default_instance_;
}

MsgNpcJson* MsgNpcJson::default_instance_ = NULL;

MsgNpcJson* MsgNpcJson::New() const {
  return new MsgNpcJson;
}

void MsgNpcJson::Clear() {
  item_.Clear();
  bunker_.Clear();
  gameunit_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgNpcJson::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .MsgBuildingItem item = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_item:
        DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, add_item()));
        if (input->ExpectTag(10)) goto parse_item;
        if (input->ExpectTag(18)) goto parse_bunker;
        break;
      }
      
      // repeated .MsgSidSkuNum bunker = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_bunker:
        DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, add_bunker()));
        if (input->ExpectTag(18)) goto parse_bunker;
        if (input->ExpectTag(26)) goto parse_gameUnit;
        break;
      }
      
      // repeated .MsgKeyValue gameUnit = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_gameUnit:
        DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, add_gameunit()));
        if (input->ExpectTag(26)) goto parse_gameUnit;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MsgNpcJson::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    MsgNpcJson::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // repeated .MsgBuildingItem item = 1;
  for (int i = 0; i < this->item_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageNoVirtual(
      1, this->item(i), output);
  }
  
  // repeated .MsgSidSkuNum bunker = 2;
  for (int i = 0; i < this->bunker_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageNoVirtual(
      2, this->bunker(i), output);
  }
  
  // repeated .MsgKeyValue gameUnit = 3;
  for (int i = 0; i < this->gameunit_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageNoVirtual(
      3, this->gameunit(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgNpcJson::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .MsgBuildingItem item = 1;
  for (int i = 0; i < this->item_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->item(i), target);
  }
  
  // repeated .MsgSidSkuNum bunker = 2;
  for (int i = 0; i < this->bunker_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->bunker(i), target);
  }
  
  // repeated .MsgKeyValue gameUnit = 3;
  for (int i = 0; i < this->gameunit_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->gameunit(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgNpcJson::ByteSize() const {
  int total_size = 0;
  
  // repeated .MsgBuildingItem item = 1;
  total_size += 1 * this->item_size();
  for (int i = 0; i < this->item_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->item(i));
  }
  
  // repeated .MsgSidSkuNum bunker = 2;
  total_size += 1 * this->bunker_size();
  for (int i = 0; i < this->bunker_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->bunker(i));
  }
  
  // repeated .MsgKeyValue gameUnit = 3;
  total_size += 1 * this->gameunit_size();
  for (int i = 0; i < this->gameunit_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->gameunit(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void MsgNpcJson::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgNpcJson* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgNpcJson*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgNpcJson::MergeFrom(const MsgNpcJson& from) {
  GOOGLE_CHECK_NE(&from, this);
  item_.MergeFrom(from.item_);
  bunker_.MergeFrom(from.bunker_);
  gameunit_.MergeFrom(from.gameunit_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgNpcJson::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgNpcJson::CopyFrom(const MsgNpcJson& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgNpcJson::IsInitialized() const {
  
  return true;
}

void MsgNpcJson::Swap(MsgNpcJson* other) {
  if (other != this) {
    item_.Swap(&other->item_);
    bunker_.Swap(&other->bunker_);
    gameunit_.Swap(&other->gameunit_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgNpcJson::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgNpcJson_descriptor_;
  metadata.reflection = MsgNpcJson_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RseQueryPvE::kRetFieldNumber;
const int RseQueryPvE::kTypeFieldNumber;
const int RseQueryPvE::kPveFieldNumber;
const int RseQueryPvE::kNpcFieldNumber;
#endif  // !_MSC_VER

RseQueryPvE::RseQueryPvE() {
  SharedCtor();
}

void RseQueryPvE::InitAsDefaultInstance() {
  npc_ = const_cast< ::MsgNpcJson*>(&::MsgNpcJson::default_instance());
}

RseQueryPvE::RseQueryPvE(const RseQueryPvE& from) {
  SharedCtor();
  MergeFrom(from);
}

void RseQueryPvE::SharedCtor() {
  _cached_size_ = 0;
  ret_ = 0;
  type_ = 0;
  npc_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RseQueryPvE::~RseQueryPvE() {
  SharedDtor();
}

void RseQueryPvE::SharedDtor() {
  if (this != default_instance_) {
    delete npc_;
  }
}

const ::google::protobuf::Descriptor* RseQueryPvE::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RseQueryPvE_descriptor_;
}

const RseQueryPvE& RseQueryPvE::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseQueryPvE_2eproto();  return *default_instance_;
}

RseQueryPvE* RseQueryPvE::default_instance_ = NULL;

RseQueryPvE* RseQueryPvE::New() const {
  return new RseQueryPvE;
}

void RseQueryPvE::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    ret_ = 0;
    type_ = 0;
    if (_has_bit(3)) {
      if (npc_ != NULL) npc_->::MsgNpcJson::Clear();
    }
  }
  pve_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RseQueryPvE::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 ret = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &ret_));
        _set_bit(0);
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }
      
      // optional int32 type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_type:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &type_));
        _set_bit(1);
        if (input->ExpectTag(26)) goto parse_pve;
        break;
      }
      
      // repeated .MsgKeyValue pve = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_pve:
        DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, add_pve()));
        if (input->ExpectTag(26)) goto parse_pve;
        if (input->ExpectTag(34)) goto parse_npc;
        break;
      }
      
      // optional .MsgNpcJson npc = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_npc:
        DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
             input, mutable_npc()));
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RseQueryPvE::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RseQueryPvE::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 ret = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->ret(), output);
  }
  
  // optional int32 type = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->type(), output);
  }
  
  // repeated .MsgKeyValue pve = 3;
  for (int i = 0; i < this->pve_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageNoVirtual(
      3, this->pve(i), output);
  }
  
  // optional .MsgNpcJson npc = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageNoVirtual(
      4, this->npc(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RseQueryPvE::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 ret = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->ret(), target);
  }
  
  // optional int32 type = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->type(), target);
  }
  
  // repeated .MsgKeyValue pve = 3;
  for (int i = 0; i < this->pve_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->pve(i), target);
  }
  
  // optional .MsgNpcJson npc = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->npc(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RseQueryPvE::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 ret = 1;
    if (has_ret()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->ret());
    }
    
    // optional int32 type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }
    
    // optional .MsgNpcJson npc = 4;
    if (has_npc()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->npc());
    }
    
  }
  // repeated .MsgKeyValue pve = 3;
  total_size += 1 * this->pve_size();
  for (int i = 0; i < this->pve_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->pve(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void RseQueryPvE::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RseQueryPvE* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RseQueryPvE*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RseQueryPvE::MergeFrom(const RseQueryPvE& from) {
  GOOGLE_CHECK_NE(&from, this);
  pve_.MergeFrom(from.pve_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_ret(from.ret());
    }
    if (from._has_bit(1)) {
      set_type(from.type());
    }
    if (from._has_bit(3)) {
      mutable_npc()->::MsgNpcJson::MergeFrom(from.npc());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RseQueryPvE::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RseQueryPvE::CopyFrom(const RseQueryPvE& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RseQueryPvE::IsInitialized() const {
  
  return true;
}

void RseQueryPvE::Swap(RseQueryPvE* other) {
  if (other != this) {
    std::swap(ret_, other->ret_);
    std::swap(type_, other->type_);
    pve_.Swap(&other->pve_);
    std::swap(npc_, other->npc_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RseQueryPvE::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RseQueryPvE_descriptor_;
  metadata.reflection = RseQueryPvE_reflection_;
  return metadata;
}

