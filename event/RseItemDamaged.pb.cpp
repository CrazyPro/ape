// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RseItemDamaged.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RseItemDamaged_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RseItemDamaged_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RseItemDamaged_2eproto() {
  protobuf_AddDesc_RseItemDamaged_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RseItemDamaged.proto");
  GOOGLE_CHECK(file != NULL);
  RseItemDamaged_descriptor_ = file->message_type(0);
  static const int RseItemDamaged_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseItemDamaged, ret_),
  };
  RseItemDamaged_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RseItemDamaged_descriptor_,
      RseItemDamaged::default_instance_,
      RseItemDamaged_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseItemDamaged, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseItemDamaged, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RseItemDamaged));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RseItemDamaged_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RseItemDamaged_descriptor_, &RseItemDamaged::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RseItemDamaged_2eproto() {
  delete RseItemDamaged::default_instance_;
  delete RseItemDamaged_reflection_;
}

void protobuf_AddDesc_RseItemDamaged_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024RseItemDamaged.proto\"\035\n\016RseItemDamaged"
    "\022\013\n\003ret\030\001 \001(\005", 53);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RseItemDamaged.proto", &protobuf_RegisterTypes);
  RseItemDamaged::default_instance_ = new RseItemDamaged();
  RseItemDamaged::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RseItemDamaged_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RseItemDamaged_2eproto {
  StaticDescriptorInitializer_RseItemDamaged_2eproto() {
    protobuf_AddDesc_RseItemDamaged_2eproto();
  }
} static_descriptor_initializer_RseItemDamaged_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RseItemDamaged::kRetFieldNumber;
#endif  // !_MSC_VER

RseItemDamaged::RseItemDamaged() {
  SharedCtor();
}

void RseItemDamaged::InitAsDefaultInstance() {
}

RseItemDamaged::RseItemDamaged(const RseItemDamaged& from) {
  SharedCtor();
  MergeFrom(from);
}

void RseItemDamaged::SharedCtor() {
  _cached_size_ = 0;
  ret_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RseItemDamaged::~RseItemDamaged() {
  SharedDtor();
}

void RseItemDamaged::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RseItemDamaged::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RseItemDamaged_descriptor_;
}

const RseItemDamaged& RseItemDamaged::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseItemDamaged_2eproto();  return *default_instance_;
}

RseItemDamaged* RseItemDamaged::default_instance_ = NULL;

RseItemDamaged* RseItemDamaged::New() const {
  return new RseItemDamaged;
}

void RseItemDamaged::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    ret_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RseItemDamaged::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 ret = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &ret_));
        _set_bit(0);
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

void RseItemDamaged::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RseItemDamaged::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 ret = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->ret(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RseItemDamaged::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 ret = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->ret(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RseItemDamaged::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 ret = 1;
    if (has_ret()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->ret());
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

void RseItemDamaged::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RseItemDamaged* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RseItemDamaged*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RseItemDamaged::MergeFrom(const RseItemDamaged& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_ret(from.ret());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RseItemDamaged::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RseItemDamaged::CopyFrom(const RseItemDamaged& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RseItemDamaged::IsInitialized() const {
  
  return true;
}

void RseItemDamaged::Swap(RseItemDamaged* other) {
  if (other != this) {
    std::swap(ret_, other->ret_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RseItemDamaged::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RseItemDamaged_descriptor_;
  metadata.reflection = RseItemDamaged_reflection_;
  return metadata;
}

