// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RseObtainPayUrlParame.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RseObtainPayUrlParame_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RseObtainPayUrlParame_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RseObtainPayUrlParame_2eproto() {
  protobuf_AddDesc_RseObtainPayUrlParame_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RseObtainPayUrlParame.proto");
  GOOGLE_CHECK(file != NULL);
  RseObtainPayUrlParame_descriptor_ = file->message_type(0);
  static const int RseObtainPayUrlParame_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainPayUrlParame, url_params_),
  };
  RseObtainPayUrlParame_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RseObtainPayUrlParame_descriptor_,
      RseObtainPayUrlParame::default_instance_,
      RseObtainPayUrlParame_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainPayUrlParame, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainPayUrlParame, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RseObtainPayUrlParame));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RseObtainPayUrlParame_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RseObtainPayUrlParame_descriptor_, &RseObtainPayUrlParame::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RseObtainPayUrlParame_2eproto() {
  delete RseObtainPayUrlParame::default_instance_;
  delete RseObtainPayUrlParame_reflection_;
}

void protobuf_AddDesc_RseObtainPayUrlParame_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033RseObtainPayUrlParame.proto\"+\n\025RseObta"
    "inPayUrlParame\022\022\n\nurl_params\030\001 \001(\t", 74);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RseObtainPayUrlParame.proto", &protobuf_RegisterTypes);
  RseObtainPayUrlParame::default_instance_ = new RseObtainPayUrlParame();
  RseObtainPayUrlParame::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RseObtainPayUrlParame_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RseObtainPayUrlParame_2eproto {
  StaticDescriptorInitializer_RseObtainPayUrlParame_2eproto() {
    protobuf_AddDesc_RseObtainPayUrlParame_2eproto();
  }
} static_descriptor_initializer_RseObtainPayUrlParame_2eproto_;


// ===================================================================

const ::std::string RseObtainPayUrlParame::_default_url_params_;
#ifndef _MSC_VER
const int RseObtainPayUrlParame::kUrlParamsFieldNumber;
#endif  // !_MSC_VER

RseObtainPayUrlParame::RseObtainPayUrlParame() {
  SharedCtor();
}

void RseObtainPayUrlParame::InitAsDefaultInstance() {
}

RseObtainPayUrlParame::RseObtainPayUrlParame(const RseObtainPayUrlParame& from) {
  SharedCtor();
  MergeFrom(from);
}

void RseObtainPayUrlParame::SharedCtor() {
  _cached_size_ = 0;
  url_params_ = const_cast< ::std::string*>(&_default_url_params_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RseObtainPayUrlParame::~RseObtainPayUrlParame() {
  SharedDtor();
}

void RseObtainPayUrlParame::SharedDtor() {
  if (url_params_ != &_default_url_params_) {
    delete url_params_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RseObtainPayUrlParame::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RseObtainPayUrlParame_descriptor_;
}

const RseObtainPayUrlParame& RseObtainPayUrlParame::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseObtainPayUrlParame_2eproto();  return *default_instance_;
}

RseObtainPayUrlParame* RseObtainPayUrlParame::default_instance_ = NULL;

RseObtainPayUrlParame* RseObtainPayUrlParame::New() const {
  return new RseObtainPayUrlParame;
}

void RseObtainPayUrlParame::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (url_params_ != &_default_url_params_) {
        url_params_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RseObtainPayUrlParame::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string url_params = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_url_params()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->url_params().data(), this->url_params().length(),
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

void RseObtainPayUrlParame::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RseObtainPayUrlParame::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional string url_params = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->url_params().data(), this->url_params().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->url_params(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RseObtainPayUrlParame::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string url_params = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->url_params().data(), this->url_params().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->url_params(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RseObtainPayUrlParame::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string url_params = 1;
    if (has_url_params()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->url_params());
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

void RseObtainPayUrlParame::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RseObtainPayUrlParame* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RseObtainPayUrlParame*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RseObtainPayUrlParame::MergeFrom(const RseObtainPayUrlParame& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_url_params(from.url_params());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RseObtainPayUrlParame::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RseObtainPayUrlParame::CopyFrom(const RseObtainPayUrlParame& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RseObtainPayUrlParame::IsInitialized() const {
  
  return true;
}

void RseObtainPayUrlParame::Swap(RseObtainPayUrlParame* other) {
  if (other != this) {
    std::swap(url_params_, other->url_params_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RseObtainPayUrlParame::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RseObtainPayUrlParame_descriptor_;
  metadata.reflection = RseObtainPayUrlParame_reflection_;
  return metadata;
}

