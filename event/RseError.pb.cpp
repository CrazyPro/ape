// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RseError.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RseError_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RseError_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RseError_2eproto() {
  protobuf_AddDesc_RseError_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RseError.proto");
  GOOGLE_CHECK(file != NULL);
  RseError_descriptor_ = file->message_type(0);
  static const int RseError_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseError, errorid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseError, sessionid_),
  };
  RseError_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RseError_descriptor_,
      RseError::default_instance_,
      RseError_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseError, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseError, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RseError));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RseError_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RseError_descriptor_, &RseError::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RseError_2eproto() {
  delete RseError::default_instance_;
  delete RseError_reflection_;
}

void protobuf_AddDesc_RseError_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016RseError.proto\".\n\010RseError\022\017\n\007errorID\030"
    "\001 \002(\005\022\021\n\tsessionID\030\002 \001(\t", 64);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RseError.proto", &protobuf_RegisterTypes);
  RseError::default_instance_ = new RseError();
  RseError::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RseError_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RseError_2eproto {
  StaticDescriptorInitializer_RseError_2eproto() {
    protobuf_AddDesc_RseError_2eproto();
  }
} static_descriptor_initializer_RseError_2eproto_;


// ===================================================================

const ::std::string RseError::_default_sessionid_;
#ifndef _MSC_VER
const int RseError::kErrorIDFieldNumber;
const int RseError::kSessionIDFieldNumber;
#endif  // !_MSC_VER

RseError::RseError() {
  SharedCtor();
}

void RseError::InitAsDefaultInstance() {
}

RseError::RseError(const RseError& from) {
  SharedCtor();
  MergeFrom(from);
}

void RseError::SharedCtor() {
  _cached_size_ = 0;
  errorid_ = 0;
  sessionid_ = const_cast< ::std::string*>(&_default_sessionid_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RseError::~RseError() {
  SharedDtor();
}

void RseError::SharedDtor() {
  if (sessionid_ != &_default_sessionid_) {
    delete sessionid_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RseError::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RseError_descriptor_;
}

const RseError& RseError::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseError_2eproto();  return *default_instance_;
}

RseError* RseError::default_instance_ = NULL;

RseError* RseError::New() const {
  return new RseError;
}

void RseError::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    errorid_ = 0;
    if (_has_bit(1)) {
      if (sessionid_ != &_default_sessionid_) {
        sessionid_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RseError::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 errorID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &errorid_));
        _set_bit(0);
        if (input->ExpectTag(18)) goto parse_sessionID;
        break;
      }
      
      // optional string sessionID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_sessionID:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_sessionid()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->sessionid().data(), this->sessionid().length(),
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

void RseError::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RseError::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // required int32 errorID = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->errorid(), output);
  }
  
  // optional string sessionID = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sessionid().data(), this->sessionid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->sessionid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RseError::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 errorID = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->errorid(), target);
  }
  
  // optional string sessionID = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sessionid().data(), this->sessionid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->sessionid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RseError::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 errorID = 1;
    if (has_errorid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->errorid());
    }
    
    // optional string sessionID = 2;
    if (has_sessionid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sessionid());
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

void RseError::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RseError* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RseError*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RseError::MergeFrom(const RseError& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_errorid(from.errorid());
    }
    if (from._has_bit(1)) {
      set_sessionid(from.sessionid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RseError::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RseError::CopyFrom(const RseError& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RseError::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void RseError::Swap(RseError* other) {
  if (other != this) {
    std::swap(errorid_, other->errorid_);
    std::swap(sessionid_, other->sessionid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RseError::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RseError_descriptor_;
  metadata.reflection = RseError_reflection_;
  return metadata;
}

