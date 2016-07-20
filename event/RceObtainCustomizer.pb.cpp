// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RceObtainCustomizer.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RceObtainCustomizer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RceObtainCustomizer_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RceObtainCustomizer_2eproto() {
  protobuf_AddDesc_RceObtainCustomizer_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RceObtainCustomizer.proto");
  GOOGLE_CHECK(file != NULL);
  RceObtainCustomizer_descriptor_ = file->message_type(0);
  static const int RceObtainCustomizer_offsets_[1] = {
  };
  RceObtainCustomizer_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RceObtainCustomizer_descriptor_,
      RceObtainCustomizer::default_instance_,
      RceObtainCustomizer_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainCustomizer, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainCustomizer, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RceObtainCustomizer));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RceObtainCustomizer_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RceObtainCustomizer_descriptor_, &RceObtainCustomizer::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RceObtainCustomizer_2eproto() {
  delete RceObtainCustomizer::default_instance_;
  delete RceObtainCustomizer_reflection_;
}

void protobuf_AddDesc_RceObtainCustomizer_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031RceObtainCustomizer.proto\"\025\n\023RceObtain"
    "Customizer", 50);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RceObtainCustomizer.proto", &protobuf_RegisterTypes);
  RceObtainCustomizer::default_instance_ = new RceObtainCustomizer();
  RceObtainCustomizer::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RceObtainCustomizer_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RceObtainCustomizer_2eproto {
  StaticDescriptorInitializer_RceObtainCustomizer_2eproto() {
    protobuf_AddDesc_RceObtainCustomizer_2eproto();
  }
} static_descriptor_initializer_RceObtainCustomizer_2eproto_;


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

RceObtainCustomizer::RceObtainCustomizer() {
  SharedCtor();
}

void RceObtainCustomizer::InitAsDefaultInstance() {
}

RceObtainCustomizer::RceObtainCustomizer(const RceObtainCustomizer& from) {
  SharedCtor();
  MergeFrom(from);
}

void RceObtainCustomizer::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RceObtainCustomizer::~RceObtainCustomizer() {
  SharedDtor();
}

void RceObtainCustomizer::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RceObtainCustomizer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RceObtainCustomizer_descriptor_;
}

const RceObtainCustomizer& RceObtainCustomizer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RceObtainCustomizer_2eproto();  return *default_instance_;
}

RceObtainCustomizer* RceObtainCustomizer::default_instance_ = NULL;

RceObtainCustomizer* RceObtainCustomizer::New() const {
  return new RceObtainCustomizer;
}

void RceObtainCustomizer::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RceObtainCustomizer::MergePartialFromCodedStream(
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

void RceObtainCustomizer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RceObtainCustomizer::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RceObtainCustomizer::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RceObtainCustomizer::ByteSize() const {
  int total_size = 0;
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void RceObtainCustomizer::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RceObtainCustomizer* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RceObtainCustomizer*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RceObtainCustomizer::MergeFrom(const RceObtainCustomizer& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RceObtainCustomizer::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RceObtainCustomizer::CopyFrom(const RceObtainCustomizer& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RceObtainCustomizer::IsInitialized() const {
  
  return true;
}

void RceObtainCustomizer::Swap(RceObtainCustomizer* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RceObtainCustomizer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RceObtainCustomizer_descriptor_;
  metadata.reflection = RceObtainCustomizer_reflection_;
  return metadata;
}
