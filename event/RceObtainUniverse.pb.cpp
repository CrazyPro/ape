// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RceObtainUniverse.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RceObtainUniverse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RceObtainUniverse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RceObtainUniverse_2eproto() {
  protobuf_AddDesc_RceObtainUniverse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RceObtainUniverse.proto");
  GOOGLE_CHECK(file != NULL);
  RceObtainUniverse_descriptor_ = file->message_type(0);
  static const int RceObtainUniverse_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainUniverse, targetaccountid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainUniverse, firstrequest_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainUniverse, planetid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainUniverse, attack_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainUniverse, targetadvisorsku_),
  };
  RceObtainUniverse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RceObtainUniverse_descriptor_,
      RceObtainUniverse::default_instance_,
      RceObtainUniverse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainUniverse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainUniverse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RceObtainUniverse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RceObtainUniverse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RceObtainUniverse_descriptor_, &RceObtainUniverse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RceObtainUniverse_2eproto() {
  delete RceObtainUniverse::default_instance_;
  delete RceObtainUniverse_reflection_;
}

void protobuf_AddDesc_RceObtainUniverse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027RceObtainUniverse.proto\"~\n\021RceObtainUn"
    "iverse\022\027\n\017targetAccountId\030\001 \001(\t\022\024\n\014first"
    "Request\030\002 \001(\010\022\020\n\010planetId\030\003 \001(\005\022\016\n\006attac"
    "k\030\004 \001(\005\022\030\n\020targetAdvisorSku\030\005 \001(\t", 153);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RceObtainUniverse.proto", &protobuf_RegisterTypes);
  RceObtainUniverse::default_instance_ = new RceObtainUniverse();
  RceObtainUniverse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RceObtainUniverse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RceObtainUniverse_2eproto {
  StaticDescriptorInitializer_RceObtainUniverse_2eproto() {
    protobuf_AddDesc_RceObtainUniverse_2eproto();
  }
} static_descriptor_initializer_RceObtainUniverse_2eproto_;


// ===================================================================

const ::std::string RceObtainUniverse::_default_targetaccountid_;
const ::std::string RceObtainUniverse::_default_targetadvisorsku_;
#ifndef _MSC_VER
const int RceObtainUniverse::kTargetAccountIdFieldNumber;
const int RceObtainUniverse::kFirstRequestFieldNumber;
const int RceObtainUniverse::kPlanetIdFieldNumber;
const int RceObtainUniverse::kAttackFieldNumber;
const int RceObtainUniverse::kTargetAdvisorSkuFieldNumber;
#endif  // !_MSC_VER

RceObtainUniverse::RceObtainUniverse() {
  SharedCtor();
}

void RceObtainUniverse::InitAsDefaultInstance() {
}

RceObtainUniverse::RceObtainUniverse(const RceObtainUniverse& from) {
  SharedCtor();
  MergeFrom(from);
}

void RceObtainUniverse::SharedCtor() {
  _cached_size_ = 0;
  targetaccountid_ = const_cast< ::std::string*>(&_default_targetaccountid_);
  firstrequest_ = false;
  planetid_ = 0;
  attack_ = 0;
  targetadvisorsku_ = const_cast< ::std::string*>(&_default_targetadvisorsku_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RceObtainUniverse::~RceObtainUniverse() {
  SharedDtor();
}

void RceObtainUniverse::SharedDtor() {
  if (targetaccountid_ != &_default_targetaccountid_) {
    delete targetaccountid_;
  }
  if (targetadvisorsku_ != &_default_targetadvisorsku_) {
    delete targetadvisorsku_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RceObtainUniverse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RceObtainUniverse_descriptor_;
}

const RceObtainUniverse& RceObtainUniverse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RceObtainUniverse_2eproto();  return *default_instance_;
}

RceObtainUniverse* RceObtainUniverse::default_instance_ = NULL;

RceObtainUniverse* RceObtainUniverse::New() const {
  return new RceObtainUniverse;
}

void RceObtainUniverse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (targetaccountid_ != &_default_targetaccountid_) {
        targetaccountid_->clear();
      }
    }
    firstrequest_ = false;
    planetid_ = 0;
    attack_ = 0;
    if (_has_bit(4)) {
      if (targetadvisorsku_ != &_default_targetadvisorsku_) {
        targetadvisorsku_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RceObtainUniverse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string targetAccountId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_targetaccountid()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->targetaccountid().data(), this->targetaccountid().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(16)) goto parse_firstRequest;
        break;
      }
      
      // optional bool firstRequest = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_firstRequest:
        DO_(::google::protobuf::internal::WireFormatLite::ReadBool(
              input, &firstrequest_));
        _set_bit(1);
        if (input->ExpectTag(24)) goto parse_planetId;
        break;
      }
      
      // optional int32 planetId = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_planetId:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &planetid_));
        _set_bit(2);
        if (input->ExpectTag(32)) goto parse_attack;
        break;
      }
      
      // optional int32 attack = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_attack:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &attack_));
        _set_bit(3);
        if (input->ExpectTag(42)) goto parse_targetAdvisorSku;
        break;
      }
      
      // optional string targetAdvisorSku = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_targetAdvisorSku:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_targetadvisorsku()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->targetadvisorsku().data(), this->targetadvisorsku().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
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

void RceObtainUniverse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RceObtainUniverse::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional string targetAccountId = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->targetaccountid().data(), this->targetaccountid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->targetaccountid(), output);
  }
  
  // optional bool firstRequest = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->firstrequest(), output);
  }
  
  // optional int32 planetId = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->planetid(), output);
  }
  
  // optional int32 attack = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->attack(), output);
  }
  
  // optional string targetAdvisorSku = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->targetadvisorsku().data(), this->targetadvisorsku().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->targetadvisorsku(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RceObtainUniverse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string targetAccountId = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->targetaccountid().data(), this->targetaccountid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->targetaccountid(), target);
  }
  
  // optional bool firstRequest = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->firstrequest(), target);
  }
  
  // optional int32 planetId = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->planetid(), target);
  }
  
  // optional int32 attack = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->attack(), target);
  }
  
  // optional string targetAdvisorSku = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->targetadvisorsku().data(), this->targetadvisorsku().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->targetadvisorsku(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RceObtainUniverse::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string targetAccountId = 1;
    if (has_targetaccountid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->targetaccountid());
    }
    
    // optional bool firstRequest = 2;
    if (has_firstrequest()) {
      total_size += 1 + 1;
    }
    
    // optional int32 planetId = 3;
    if (has_planetid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->planetid());
    }
    
    // optional int32 attack = 4;
    if (has_attack()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->attack());
    }
    
    // optional string targetAdvisorSku = 5;
    if (has_targetadvisorsku()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->targetadvisorsku());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void RceObtainUniverse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RceObtainUniverse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RceObtainUniverse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RceObtainUniverse::MergeFrom(const RceObtainUniverse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_targetaccountid(from.targetaccountid());
    }
    if (from._has_bit(1)) {
      set_firstrequest(from.firstrequest());
    }
    if (from._has_bit(2)) {
      set_planetid(from.planetid());
    }
    if (from._has_bit(3)) {
      set_attack(from.attack());
    }
    if (from._has_bit(4)) {
      set_targetadvisorsku(from.targetadvisorsku());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RceObtainUniverse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RceObtainUniverse::CopyFrom(const RceObtainUniverse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RceObtainUniverse::IsInitialized() const {
  
  return true;
}

void RceObtainUniverse::Swap(RceObtainUniverse* other) {
  if (other != this) {
    std::swap(targetaccountid_, other->targetaccountid_);
    std::swap(firstrequest_, other->firstrequest_);
    std::swap(planetid_, other->planetid_);
    std::swap(attack_, other->attack_);
    std::swap(targetadvisorsku_, other->targetadvisorsku_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RceObtainUniverse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RceObtainUniverse_descriptor_;
  metadata.reflection = RceObtainUniverse_reflection_;
  return metadata;
}

