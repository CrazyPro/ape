// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RceLogin.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RceLogin_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RceLogin_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RceLogin_2eproto() {
  protobuf_AddDesc_RceLogin_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RceLogin.proto");
  GOOGLE_CHECK(file != NULL);
  RceLogin_descriptor_ = file->message_type(0);
  static const int RceLogin_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceLogin, pass_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceLogin, nick_),
  };
  RceLogin_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RceLogin_descriptor_,
      RceLogin::default_instance_,
      RceLogin_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceLogin, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceLogin, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RceLogin));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RceLogin_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RceLogin_descriptor_, &RceLogin::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RceLogin_2eproto() {
  delete RceLogin::default_instance_;
  delete RceLogin_reflection_;
}

void protobuf_AddDesc_RceLogin_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016RceLogin.proto\"&\n\010RceLogin\022\014\n\004pass\030\001 \001"
    "(\t\022\014\n\004nick\030\002 \001(\t", 56);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RceLogin.proto", &protobuf_RegisterTypes);
  RceLogin::default_instance_ = new RceLogin();
  RceLogin::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RceLogin_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RceLogin_2eproto {
  StaticDescriptorInitializer_RceLogin_2eproto() {
    protobuf_AddDesc_RceLogin_2eproto();
  }
} static_descriptor_initializer_RceLogin_2eproto_;


// ===================================================================

const ::std::string RceLogin::_default_pass_;
const ::std::string RceLogin::_default_nick_;
#ifndef _MSC_VER
const int RceLogin::kPassFieldNumber;
const int RceLogin::kNickFieldNumber;
#endif  // !_MSC_VER

RceLogin::RceLogin() {
  SharedCtor();
}

void RceLogin::InitAsDefaultInstance() {
}

RceLogin::RceLogin(const RceLogin& from) {
  SharedCtor();
  MergeFrom(from);
}

void RceLogin::SharedCtor() {
  _cached_size_ = 0;
  pass_ = const_cast< ::std::string*>(&_default_pass_);
  nick_ = const_cast< ::std::string*>(&_default_nick_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RceLogin::~RceLogin() {
  SharedDtor();
}

void RceLogin::SharedDtor() {
  if (pass_ != &_default_pass_) {
    delete pass_;
  }
  if (nick_ != &_default_nick_) {
    delete nick_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RceLogin::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RceLogin_descriptor_;
}

const RceLogin& RceLogin::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RceLogin_2eproto();  return *default_instance_;
}

RceLogin* RceLogin::default_instance_ = NULL;

RceLogin* RceLogin::New() const {
  return new RceLogin;
}

void RceLogin::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (pass_ != &_default_pass_) {
        pass_->clear();
      }
    }
    if (_has_bit(1)) {
      if (nick_ != &_default_nick_) {
        nick_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RceLogin::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string pass = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_pass()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->pass().data(), this->pass().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(18)) goto parse_nick;
        break;
      }
      
      // optional string nick = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_nick:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_nick()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->nick().data(), this->nick().length(),
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

void RceLogin::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RceLogin::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional string pass = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->pass().data(), this->pass().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->pass(), output);
  }
  
  // optional string nick = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->nick().data(), this->nick().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->nick(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RceLogin::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string pass = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->pass().data(), this->pass().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->pass(), target);
  }
  
  // optional string nick = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->nick().data(), this->nick().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->nick(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RceLogin::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string pass = 1;
    if (has_pass()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->pass());
    }
    
    // optional string nick = 2;
    if (has_nick()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->nick());
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

void RceLogin::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RceLogin* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RceLogin*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RceLogin::MergeFrom(const RceLogin& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_pass(from.pass());
    }
    if (from._has_bit(1)) {
      set_nick(from.nick());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RceLogin::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RceLogin::CopyFrom(const RceLogin& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RceLogin::IsInitialized() const {
  
  return true;
}

void RceLogin::Swap(RceLogin* other) {
  if (other != this) {
    std::swap(pass_, other->pass_);
    std::swap(nick_, other->nick_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RceLogin::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RceLogin_descriptor_;
  metadata.reflection = RceLogin_reflection_;
  return metadata;
}

