// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RceItemMineExploded.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RceItemMineExploded_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RceItemMineExploded_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RceItemMineExploded_2eproto() {
  protobuf_AddDesc_RceItemMineExploded_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RceItemMineExploded.proto");
  GOOGLE_CHECK(file != NULL);
  RceItemMineExploded_descriptor_ = file->message_type(0);
  static const int RceItemMineExploded_offsets_[1] = {
  };
  RceItemMineExploded_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RceItemMineExploded_descriptor_,
      RceItemMineExploded::default_instance_,
      RceItemMineExploded_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceItemMineExploded, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceItemMineExploded, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RceItemMineExploded));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RceItemMineExploded_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RceItemMineExploded_descriptor_, &RceItemMineExploded::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RceItemMineExploded_2eproto() {
  delete RceItemMineExploded::default_instance_;
  delete RceItemMineExploded_reflection_;
}

void protobuf_AddDesc_RceItemMineExploded_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031RceItemMineExploded.proto\"\025\n\023RceItemMi"
    "neExploded", 50);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RceItemMineExploded.proto", &protobuf_RegisterTypes);
  RceItemMineExploded::default_instance_ = new RceItemMineExploded();
  RceItemMineExploded::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RceItemMineExploded_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RceItemMineExploded_2eproto {
  StaticDescriptorInitializer_RceItemMineExploded_2eproto() {
    protobuf_AddDesc_RceItemMineExploded_2eproto();
  }
} static_descriptor_initializer_RceItemMineExploded_2eproto_;


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

RceItemMineExploded::RceItemMineExploded() {
  SharedCtor();
}

void RceItemMineExploded::InitAsDefaultInstance() {
}

RceItemMineExploded::RceItemMineExploded(const RceItemMineExploded& from) {
  SharedCtor();
  MergeFrom(from);
}

void RceItemMineExploded::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RceItemMineExploded::~RceItemMineExploded() {
  SharedDtor();
}

void RceItemMineExploded::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RceItemMineExploded::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RceItemMineExploded_descriptor_;
}

const RceItemMineExploded& RceItemMineExploded::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RceItemMineExploded_2eproto();  return *default_instance_;
}

RceItemMineExploded* RceItemMineExploded::default_instance_ = NULL;

RceItemMineExploded* RceItemMineExploded::New() const {
  return new RceItemMineExploded;
}

void RceItemMineExploded::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RceItemMineExploded::MergePartialFromCodedStream(
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

void RceItemMineExploded::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RceItemMineExploded::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RceItemMineExploded::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RceItemMineExploded::ByteSize() const {
  int total_size = 0;
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void RceItemMineExploded::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RceItemMineExploded* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RceItemMineExploded*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RceItemMineExploded::MergeFrom(const RceItemMineExploded& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RceItemMineExploded::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RceItemMineExploded::CopyFrom(const RceItemMineExploded& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RceItemMineExploded::IsInitialized() const {
  
  return true;
}

void RceItemMineExploded::Swap(RceItemMineExploded* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RceItemMineExploded::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RceItemMineExploded_descriptor_;
  metadata.reflection = RceItemMineExploded_reflection_;
  return metadata;
}

