// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RceObtainAttackerList.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RceObtainAttackerList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RceObtainAttackerList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RceObtainAttackerList_2eproto() {
  protobuf_AddDesc_RceObtainAttackerList_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RceObtainAttackerList.proto");
  GOOGLE_CHECK(file != NULL);
  RceObtainAttackerList_descriptor_ = file->message_type(0);
  static const int RceObtainAttackerList_offsets_[1] = {
  };
  RceObtainAttackerList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RceObtainAttackerList_descriptor_,
      RceObtainAttackerList::default_instance_,
      RceObtainAttackerList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainAttackerList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainAttackerList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RceObtainAttackerList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RceObtainAttackerList_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RceObtainAttackerList_descriptor_, &RceObtainAttackerList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RceObtainAttackerList_2eproto() {
  delete RceObtainAttackerList::default_instance_;
  delete RceObtainAttackerList_reflection_;
}

void protobuf_AddDesc_RceObtainAttackerList_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033RceObtainAttackerList.proto\"\027\n\025RceObta"
    "inAttackerList", 54);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RceObtainAttackerList.proto", &protobuf_RegisterTypes);
  RceObtainAttackerList::default_instance_ = new RceObtainAttackerList();
  RceObtainAttackerList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RceObtainAttackerList_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RceObtainAttackerList_2eproto {
  StaticDescriptorInitializer_RceObtainAttackerList_2eproto() {
    protobuf_AddDesc_RceObtainAttackerList_2eproto();
  }
} static_descriptor_initializer_RceObtainAttackerList_2eproto_;


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

RceObtainAttackerList::RceObtainAttackerList() {
  SharedCtor();
}

void RceObtainAttackerList::InitAsDefaultInstance() {
}

RceObtainAttackerList::RceObtainAttackerList(const RceObtainAttackerList& from) {
  SharedCtor();
  MergeFrom(from);
}

void RceObtainAttackerList::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RceObtainAttackerList::~RceObtainAttackerList() {
  SharedDtor();
}

void RceObtainAttackerList::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RceObtainAttackerList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RceObtainAttackerList_descriptor_;
}

const RceObtainAttackerList& RceObtainAttackerList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RceObtainAttackerList_2eproto();  return *default_instance_;
}

RceObtainAttackerList* RceObtainAttackerList::default_instance_ = NULL;

RceObtainAttackerList* RceObtainAttackerList::New() const {
  return new RceObtainAttackerList;
}

void RceObtainAttackerList::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RceObtainAttackerList::MergePartialFromCodedStream(
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

void RceObtainAttackerList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RceObtainAttackerList::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RceObtainAttackerList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RceObtainAttackerList::ByteSize() const {
  int total_size = 0;
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void RceObtainAttackerList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RceObtainAttackerList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RceObtainAttackerList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RceObtainAttackerList::MergeFrom(const RceObtainAttackerList& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RceObtainAttackerList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RceObtainAttackerList::CopyFrom(const RceObtainAttackerList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RceObtainAttackerList::IsInitialized() const {
  
  return true;
}

void RceObtainAttackerList::Swap(RceObtainAttackerList* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RceObtainAttackerList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RceObtainAttackerList_descriptor_;
  metadata.reflection = RceObtainAttackerList_reflection_;
  return metadata;
}

