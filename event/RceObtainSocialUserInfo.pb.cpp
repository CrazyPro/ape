// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RceObtainSocialUserInfo.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RceObtainSocialUserInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RceObtainSocialUserInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RceObtainSocialUserInfo_2eproto() {
  protobuf_AddDesc_RceObtainSocialUserInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RceObtainSocialUserInfo.proto");
  GOOGLE_CHECK(file != NULL);
  RceObtainSocialUserInfo_descriptor_ = file->message_type(0);
  static const int RceObtainSocialUserInfo_offsets_[1] = {
  };
  RceObtainSocialUserInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RceObtainSocialUserInfo_descriptor_,
      RceObtainSocialUserInfo::default_instance_,
      RceObtainSocialUserInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainSocialUserInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainSocialUserInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RceObtainSocialUserInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RceObtainSocialUserInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RceObtainSocialUserInfo_descriptor_, &RceObtainSocialUserInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RceObtainSocialUserInfo_2eproto() {
  delete RceObtainSocialUserInfo::default_instance_;
  delete RceObtainSocialUserInfo_reflection_;
}

void protobuf_AddDesc_RceObtainSocialUserInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\035RceObtainSocialUserInfo.proto\"\031\n\027RceOb"
    "tainSocialUserInfo", 58);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RceObtainSocialUserInfo.proto", &protobuf_RegisterTypes);
  RceObtainSocialUserInfo::default_instance_ = new RceObtainSocialUserInfo();
  RceObtainSocialUserInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RceObtainSocialUserInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RceObtainSocialUserInfo_2eproto {
  StaticDescriptorInitializer_RceObtainSocialUserInfo_2eproto() {
    protobuf_AddDesc_RceObtainSocialUserInfo_2eproto();
  }
} static_descriptor_initializer_RceObtainSocialUserInfo_2eproto_;


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

RceObtainSocialUserInfo::RceObtainSocialUserInfo() {
  SharedCtor();
}

void RceObtainSocialUserInfo::InitAsDefaultInstance() {
}

RceObtainSocialUserInfo::RceObtainSocialUserInfo(const RceObtainSocialUserInfo& from) {
  SharedCtor();
  MergeFrom(from);
}

void RceObtainSocialUserInfo::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RceObtainSocialUserInfo::~RceObtainSocialUserInfo() {
  SharedDtor();
}

void RceObtainSocialUserInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RceObtainSocialUserInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RceObtainSocialUserInfo_descriptor_;
}

const RceObtainSocialUserInfo& RceObtainSocialUserInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RceObtainSocialUserInfo_2eproto();  return *default_instance_;
}

RceObtainSocialUserInfo* RceObtainSocialUserInfo::default_instance_ = NULL;

RceObtainSocialUserInfo* RceObtainSocialUserInfo::New() const {
  return new RceObtainSocialUserInfo;
}

void RceObtainSocialUserInfo::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RceObtainSocialUserInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void RceObtainSocialUserInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RceObtainSocialUserInfo::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RceObtainSocialUserInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RceObtainSocialUserInfo::ByteSize() const {
  int total_size = 0;
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void RceObtainSocialUserInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RceObtainSocialUserInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RceObtainSocialUserInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RceObtainSocialUserInfo::MergeFrom(const RceObtainSocialUserInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RceObtainSocialUserInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RceObtainSocialUserInfo::CopyFrom(const RceObtainSocialUserInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RceObtainSocialUserInfo::IsInitialized() const {
  
  return true;
}

void RceObtainSocialUserInfo::Swap(RceObtainSocialUserInfo* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RceObtainSocialUserInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RceObtainSocialUserInfo_descriptor_;
  metadata.reflection = RceObtainSocialUserInfo_reflection_;
  return metadata;
}

