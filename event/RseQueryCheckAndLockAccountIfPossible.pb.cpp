// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RseQueryCheckAndLockAccountIfPossible.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RseQueryCheckAndLockAccountIfPossible_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RseQueryCheckAndLockAccountIfPossible_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RseQueryCheckAndLockAccountIfPossible_2eproto() {
  protobuf_AddDesc_RseQueryCheckAndLockAccountIfPossible_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RseQueryCheckAndLockAccountIfPossible.proto");
  GOOGLE_CHECK(file != NULL);
  RseQueryCheckAndLockAccountIfPossible_descriptor_ = file->message_type(0);
  static const int RseQueryCheckAndLockAccountIfPossible_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryCheckAndLockAccountIfPossible, lockrequested_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryCheckAndLockAccountIfPossible, lockapplied_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryCheckAndLockAccountIfPossible, locksuccess_),
  };
  RseQueryCheckAndLockAccountIfPossible_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RseQueryCheckAndLockAccountIfPossible_descriptor_,
      RseQueryCheckAndLockAccountIfPossible::default_instance_,
      RseQueryCheckAndLockAccountIfPossible_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryCheckAndLockAccountIfPossible, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryCheckAndLockAccountIfPossible, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RseQueryCheckAndLockAccountIfPossible));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RseQueryCheckAndLockAccountIfPossible_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RseQueryCheckAndLockAccountIfPossible_descriptor_, &RseQueryCheckAndLockAccountIfPossible::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RseQueryCheckAndLockAccountIfPossible_2eproto() {
  delete RseQueryCheckAndLockAccountIfPossible::default_instance_;
  delete RseQueryCheckAndLockAccountIfPossible_reflection_;
}

void protobuf_AddDesc_RseQueryCheckAndLockAccountIfPossible_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n+RseQueryCheckAndLockAccountIfPossible."
    "proto\"h\n%RseQueryCheckAndLockAccountIfPo"
    "ssible\022\025\n\rlockRequested\030\001 \001(\005\022\023\n\013lockApp"
    "lied\030\002 \001(\005\022\023\n\013lockSuccess\030\003 \001(\005", 151);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RseQueryCheckAndLockAccountIfPossible.proto", &protobuf_RegisterTypes);
  RseQueryCheckAndLockAccountIfPossible::default_instance_ = new RseQueryCheckAndLockAccountIfPossible();
  RseQueryCheckAndLockAccountIfPossible::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RseQueryCheckAndLockAccountIfPossible_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RseQueryCheckAndLockAccountIfPossible_2eproto {
  StaticDescriptorInitializer_RseQueryCheckAndLockAccountIfPossible_2eproto() {
    protobuf_AddDesc_RseQueryCheckAndLockAccountIfPossible_2eproto();
  }
} static_descriptor_initializer_RseQueryCheckAndLockAccountIfPossible_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RseQueryCheckAndLockAccountIfPossible::kLockRequestedFieldNumber;
const int RseQueryCheckAndLockAccountIfPossible::kLockAppliedFieldNumber;
const int RseQueryCheckAndLockAccountIfPossible::kLockSuccessFieldNumber;
#endif  // !_MSC_VER

RseQueryCheckAndLockAccountIfPossible::RseQueryCheckAndLockAccountIfPossible() {
  SharedCtor();
}

void RseQueryCheckAndLockAccountIfPossible::InitAsDefaultInstance() {
}

RseQueryCheckAndLockAccountIfPossible::RseQueryCheckAndLockAccountIfPossible(const RseQueryCheckAndLockAccountIfPossible& from) {
  SharedCtor();
  MergeFrom(from);
}

void RseQueryCheckAndLockAccountIfPossible::SharedCtor() {
  _cached_size_ = 0;
  lockrequested_ = 0;
  lockapplied_ = 0;
  locksuccess_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RseQueryCheckAndLockAccountIfPossible::~RseQueryCheckAndLockAccountIfPossible() {
  SharedDtor();
}

void RseQueryCheckAndLockAccountIfPossible::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RseQueryCheckAndLockAccountIfPossible::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RseQueryCheckAndLockAccountIfPossible_descriptor_;
}

const RseQueryCheckAndLockAccountIfPossible& RseQueryCheckAndLockAccountIfPossible::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseQueryCheckAndLockAccountIfPossible_2eproto();  return *default_instance_;
}

RseQueryCheckAndLockAccountIfPossible* RseQueryCheckAndLockAccountIfPossible::default_instance_ = NULL;

RseQueryCheckAndLockAccountIfPossible* RseQueryCheckAndLockAccountIfPossible::New() const {
  return new RseQueryCheckAndLockAccountIfPossible;
}

void RseQueryCheckAndLockAccountIfPossible::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    lockrequested_ = 0;
    lockapplied_ = 0;
    locksuccess_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RseQueryCheckAndLockAccountIfPossible::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 lockRequested = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &lockrequested_));
        _set_bit(0);
        if (input->ExpectTag(16)) goto parse_lockApplied;
        break;
      }
      
      // optional int32 lockApplied = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_lockApplied:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &lockapplied_));
        _set_bit(1);
        if (input->ExpectTag(24)) goto parse_lockSuccess;
        break;
      }
      
      // optional int32 lockSuccess = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_lockSuccess:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &locksuccess_));
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

void RseQueryCheckAndLockAccountIfPossible::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RseQueryCheckAndLockAccountIfPossible::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 lockRequested = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->lockrequested(), output);
  }
  
  // optional int32 lockApplied = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->lockapplied(), output);
  }
  
  // optional int32 lockSuccess = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->locksuccess(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RseQueryCheckAndLockAccountIfPossible::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 lockRequested = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->lockrequested(), target);
  }
  
  // optional int32 lockApplied = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->lockapplied(), target);
  }
  
  // optional int32 lockSuccess = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->locksuccess(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RseQueryCheckAndLockAccountIfPossible::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 lockRequested = 1;
    if (has_lockrequested()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->lockrequested());
    }
    
    // optional int32 lockApplied = 2;
    if (has_lockapplied()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->lockapplied());
    }
    
    // optional int32 lockSuccess = 3;
    if (has_locksuccess()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->locksuccess());
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

void RseQueryCheckAndLockAccountIfPossible::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RseQueryCheckAndLockAccountIfPossible* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RseQueryCheckAndLockAccountIfPossible*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RseQueryCheckAndLockAccountIfPossible::MergeFrom(const RseQueryCheckAndLockAccountIfPossible& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_lockrequested(from.lockrequested());
    }
    if (from._has_bit(1)) {
      set_lockapplied(from.lockapplied());
    }
    if (from._has_bit(2)) {
      set_locksuccess(from.locksuccess());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RseQueryCheckAndLockAccountIfPossible::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RseQueryCheckAndLockAccountIfPossible::CopyFrom(const RseQueryCheckAndLockAccountIfPossible& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RseQueryCheckAndLockAccountIfPossible::IsInitialized() const {
  
  return true;
}

void RseQueryCheckAndLockAccountIfPossible::Swap(RseQueryCheckAndLockAccountIfPossible* other) {
  if (other != this) {
    std::swap(lockrequested_, other->lockrequested_);
    std::swap(lockapplied_, other->lockapplied_);
    std::swap(locksuccess_, other->locksuccess_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RseQueryCheckAndLockAccountIfPossible::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RseQueryCheckAndLockAccountIfPossible_descriptor_;
  metadata.reflection = RseQueryCheckAndLockAccountIfPossible_reflection_;
  return metadata;
}
