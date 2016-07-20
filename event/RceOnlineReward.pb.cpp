// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RceOnlineReward.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RceOnlineReward_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RceOnlineReward_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RceOnlineReward_2eproto() {
  protobuf_AddDesc_RceOnlineReward_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RceOnlineReward.proto");
  GOOGLE_CHECK(file != NULL);
  RceOnlineReward_descriptor_ = file->message_type(0);
  static const int RceOnlineReward_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceOnlineReward, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceOnlineReward, planetid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceOnlineReward, sequence_),
  };
  RceOnlineReward_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RceOnlineReward_descriptor_,
      RceOnlineReward::default_instance_,
      RceOnlineReward_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceOnlineReward, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceOnlineReward, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RceOnlineReward));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RceOnlineReward_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RceOnlineReward_descriptor_, &RceOnlineReward::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RceOnlineReward_2eproto() {
  delete RceOnlineReward::default_instance_;
  delete RceOnlineReward_reflection_;
}

void protobuf_AddDesc_RceOnlineReward_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025RceOnlineReward.proto\"C\n\017RceOnlineRewa"
    "rd\022\014\n\004type\030\001 \001(\005\022\020\n\010planetId\030\002 \001(\t\022\020\n\010se"
    "quence\030\003 \001(\005", 92);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RceOnlineReward.proto", &protobuf_RegisterTypes);
  RceOnlineReward::default_instance_ = new RceOnlineReward();
  RceOnlineReward::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RceOnlineReward_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RceOnlineReward_2eproto {
  StaticDescriptorInitializer_RceOnlineReward_2eproto() {
    protobuf_AddDesc_RceOnlineReward_2eproto();
  }
} static_descriptor_initializer_RceOnlineReward_2eproto_;


// ===================================================================

const ::std::string RceOnlineReward::_default_planetid_;
#ifndef _MSC_VER
const int RceOnlineReward::kTypeFieldNumber;
const int RceOnlineReward::kPlanetIdFieldNumber;
const int RceOnlineReward::kSequenceFieldNumber;
#endif  // !_MSC_VER

RceOnlineReward::RceOnlineReward() {
  SharedCtor();
}

void RceOnlineReward::InitAsDefaultInstance() {
}

RceOnlineReward::RceOnlineReward(const RceOnlineReward& from) {
  SharedCtor();
  MergeFrom(from);
}

void RceOnlineReward::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  planetid_ = const_cast< ::std::string*>(&_default_planetid_);
  sequence_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RceOnlineReward::~RceOnlineReward() {
  SharedDtor();
}

void RceOnlineReward::SharedDtor() {
  if (planetid_ != &_default_planetid_) {
    delete planetid_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RceOnlineReward::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RceOnlineReward_descriptor_;
}

const RceOnlineReward& RceOnlineReward::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RceOnlineReward_2eproto();  return *default_instance_;
}

RceOnlineReward* RceOnlineReward::default_instance_ = NULL;

RceOnlineReward* RceOnlineReward::New() const {
  return new RceOnlineReward;
}

void RceOnlineReward::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    if (_has_bit(1)) {
      if (planetid_ != &_default_planetid_) {
        planetid_->clear();
      }
    }
    sequence_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RceOnlineReward::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &type_));
        _set_bit(0);
        if (input->ExpectTag(18)) goto parse_planetId;
        break;
      }
      
      // optional string planetId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_planetId:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_planetid()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->planetid().data(), this->planetid().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(24)) goto parse_sequence;
        break;
      }
      
      // optional int32 sequence = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_sequence:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &sequence_));
        _set_bit(2);
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

void RceOnlineReward::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RceOnlineReward::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 type = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->type(), output);
  }
  
  // optional string planetId = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->planetid().data(), this->planetid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->planetid(), output);
  }
  
  // optional int32 sequence = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->sequence(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RceOnlineReward::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 type = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->type(), target);
  }
  
  // optional string planetId = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->planetid().data(), this->planetid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->planetid(), target);
  }
  
  // optional int32 sequence = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->sequence(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RceOnlineReward::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }
    
    // optional string planetId = 2;
    if (has_planetid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->planetid());
    }
    
    // optional int32 sequence = 3;
    if (has_sequence()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sequence());
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

void RceOnlineReward::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RceOnlineReward* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RceOnlineReward*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RceOnlineReward::MergeFrom(const RceOnlineReward& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_type(from.type());
    }
    if (from._has_bit(1)) {
      set_planetid(from.planetid());
    }
    if (from._has_bit(2)) {
      set_sequence(from.sequence());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RceOnlineReward::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RceOnlineReward::CopyFrom(const RceOnlineReward& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RceOnlineReward::IsInitialized() const {
  
  return true;
}

void RceOnlineReward::Swap(RceOnlineReward* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(planetid_, other->planetid_);
    std::swap(sequence_, other->sequence_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RceOnlineReward::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RceOnlineReward_descriptor_;
  metadata.reflection = RceOnlineReward_reflection_;
  return metadata;
}
