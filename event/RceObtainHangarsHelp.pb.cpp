// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RceObtainHangarsHelp.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RceObtainHangarsHelp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RceObtainHangarsHelp_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RceObtainHangarsHelp_2eproto() {
  protobuf_AddDesc_RceObtainHangarsHelp_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RceObtainHangarsHelp.proto");
  GOOGLE_CHECK(file != NULL);
  RceObtainHangarsHelp_descriptor_ = file->message_type(0);
  static const int RceObtainHangarsHelp_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainHangarsHelp, targetaccountid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainHangarsHelp, planetid_),
  };
  RceObtainHangarsHelp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RceObtainHangarsHelp_descriptor_,
      RceObtainHangarsHelp::default_instance_,
      RceObtainHangarsHelp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainHangarsHelp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainHangarsHelp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RceObtainHangarsHelp));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RceObtainHangarsHelp_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RceObtainHangarsHelp_descriptor_, &RceObtainHangarsHelp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RceObtainHangarsHelp_2eproto() {
  delete RceObtainHangarsHelp::default_instance_;
  delete RceObtainHangarsHelp_reflection_;
}

void protobuf_AddDesc_RceObtainHangarsHelp_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032RceObtainHangarsHelp.proto\"A\n\024RceObtai"
    "nHangarsHelp\022\027\n\017targetAccountId\030\001 \001(\t\022\020\n"
    "\010planetId\030\002 \001(\t", 95);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RceObtainHangarsHelp.proto", &protobuf_RegisterTypes);
  RceObtainHangarsHelp::default_instance_ = new RceObtainHangarsHelp();
  RceObtainHangarsHelp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RceObtainHangarsHelp_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RceObtainHangarsHelp_2eproto {
  StaticDescriptorInitializer_RceObtainHangarsHelp_2eproto() {
    protobuf_AddDesc_RceObtainHangarsHelp_2eproto();
  }
} static_descriptor_initializer_RceObtainHangarsHelp_2eproto_;


// ===================================================================

const ::std::string RceObtainHangarsHelp::_default_targetaccountid_;
const ::std::string RceObtainHangarsHelp::_default_planetid_;
#ifndef _MSC_VER
const int RceObtainHangarsHelp::kTargetAccountIdFieldNumber;
const int RceObtainHangarsHelp::kPlanetIdFieldNumber;
#endif  // !_MSC_VER

RceObtainHangarsHelp::RceObtainHangarsHelp() {
  SharedCtor();
}

void RceObtainHangarsHelp::InitAsDefaultInstance() {
}

RceObtainHangarsHelp::RceObtainHangarsHelp(const RceObtainHangarsHelp& from) {
  SharedCtor();
  MergeFrom(from);
}

void RceObtainHangarsHelp::SharedCtor() {
  _cached_size_ = 0;
  targetaccountid_ = const_cast< ::std::string*>(&_default_targetaccountid_);
  planetid_ = const_cast< ::std::string*>(&_default_planetid_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RceObtainHangarsHelp::~RceObtainHangarsHelp() {
  SharedDtor();
}

void RceObtainHangarsHelp::SharedDtor() {
  if (targetaccountid_ != &_default_targetaccountid_) {
    delete targetaccountid_;
  }
  if (planetid_ != &_default_planetid_) {
    delete planetid_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RceObtainHangarsHelp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RceObtainHangarsHelp_descriptor_;
}

const RceObtainHangarsHelp& RceObtainHangarsHelp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RceObtainHangarsHelp_2eproto();  return *default_instance_;
}

RceObtainHangarsHelp* RceObtainHangarsHelp::default_instance_ = NULL;

RceObtainHangarsHelp* RceObtainHangarsHelp::New() const {
  return new RceObtainHangarsHelp;
}

void RceObtainHangarsHelp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (targetaccountid_ != &_default_targetaccountid_) {
        targetaccountid_->clear();
      }
    }
    if (_has_bit(1)) {
      if (planetid_ != &_default_planetid_) {
        planetid_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RceObtainHangarsHelp::MergePartialFromCodedStream(
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

void RceObtainHangarsHelp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RceObtainHangarsHelp::SerializeWithCachedSizesToArray(raw_buffer);
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
  
  // optional string planetId = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->planetid().data(), this->planetid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->planetid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RceObtainHangarsHelp::SerializeWithCachedSizesToArray(
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
  
  // optional string planetId = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->planetid().data(), this->planetid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->planetid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RceObtainHangarsHelp::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string targetAccountId = 1;
    if (has_targetaccountid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->targetaccountid());
    }
    
    // optional string planetId = 2;
    if (has_planetid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->planetid());
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

void RceObtainHangarsHelp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RceObtainHangarsHelp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RceObtainHangarsHelp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RceObtainHangarsHelp::MergeFrom(const RceObtainHangarsHelp& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_targetaccountid(from.targetaccountid());
    }
    if (from._has_bit(1)) {
      set_planetid(from.planetid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RceObtainHangarsHelp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RceObtainHangarsHelp::CopyFrom(const RceObtainHangarsHelp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RceObtainHangarsHelp::IsInitialized() const {
  
  return true;
}

void RceObtainHangarsHelp::Swap(RceObtainHangarsHelp* other) {
  if (other != this) {
    std::swap(targetaccountid_, other->targetaccountid_);
    std::swap(planetid_, other->planetid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RceObtainHangarsHelp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RceObtainHangarsHelp_descriptor_;
  metadata.reflection = RceObtainHangarsHelp_reflection_;
  return metadata;
}
