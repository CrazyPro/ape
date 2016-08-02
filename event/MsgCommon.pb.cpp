// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MsgCommon.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* MsgKeyValue_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgKeyValue_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MsgCommon_2eproto() {
  protobuf_AddDesc_MsgCommon_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MsgCommon.proto");
  GOOGLE_CHECK(file != NULL);
  MsgKeyValue_descriptor_ = file->message_type(0);
  static const int MsgKeyValue_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgKeyValue, key_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgKeyValue, value_),
  };
  MsgKeyValue_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgKeyValue_descriptor_,
      MsgKeyValue::default_instance_,
      MsgKeyValue_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgKeyValue, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgKeyValue, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgKeyValue));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MsgCommon_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgKeyValue_descriptor_, &MsgKeyValue::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MsgCommon_2eproto() {
  delete MsgKeyValue::default_instance_;
  delete MsgKeyValue_reflection_;
}

void protobuf_AddDesc_MsgCommon_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017MsgCommon.proto\")\n\013MsgKeyValue\022\013\n\003key\030"
    "\001 \001(\005\022\r\n\005value\030\002 \001(\005", 60);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MsgCommon.proto", &protobuf_RegisterTypes);
  MsgKeyValue::default_instance_ = new MsgKeyValue();
  MsgKeyValue::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MsgCommon_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MsgCommon_2eproto {
  StaticDescriptorInitializer_MsgCommon_2eproto() {
    protobuf_AddDesc_MsgCommon_2eproto();
  }
} static_descriptor_initializer_MsgCommon_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int MsgKeyValue::kKeyFieldNumber;
const int MsgKeyValue::kValueFieldNumber;
#endif  // !_MSC_VER

MsgKeyValue::MsgKeyValue() {
  SharedCtor();
}

void MsgKeyValue::InitAsDefaultInstance() {
}

MsgKeyValue::MsgKeyValue(const MsgKeyValue& from) {
  SharedCtor();
  MergeFrom(from);
}

void MsgKeyValue::SharedCtor() {
  _cached_size_ = 0;
  key_ = 0;
  value_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgKeyValue::~MsgKeyValue() {
  SharedDtor();
}

void MsgKeyValue::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* MsgKeyValue::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgKeyValue_descriptor_;
}

const MsgKeyValue& MsgKeyValue::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MsgCommon_2eproto();  return *default_instance_;
}

MsgKeyValue* MsgKeyValue::default_instance_ = NULL;

MsgKeyValue* MsgKeyValue::New() const {
  return new MsgKeyValue;
}

void MsgKeyValue::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    key_ = 0;
    value_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgKeyValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 key = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &key_));
        _set_bit(0);
        if (input->ExpectTag(16)) goto parse_value;
        break;
      }
      
      // optional int32 value = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_value:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &value_));
        _set_bit(1);
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

void MsgKeyValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    MsgKeyValue::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 key = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->key(), output);
  }
  
  // optional int32 value = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->value(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgKeyValue::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 key = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->key(), target);
  }
  
  // optional int32 value = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->value(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgKeyValue::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 key = 1;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->key());
    }
    
    // optional int32 value = 2;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->value());
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

void MsgKeyValue::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgKeyValue* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgKeyValue*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgKeyValue::MergeFrom(const MsgKeyValue& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_key(from.key());
    }
    if (from._has_bit(1)) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgKeyValue::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgKeyValue::CopyFrom(const MsgKeyValue& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgKeyValue::IsInitialized() const {
  
  return true;
}

void MsgKeyValue::Swap(MsgKeyValue* other) {
  if (other != this) {
    std::swap(key_, other->key_);
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgKeyValue::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgKeyValue_descriptor_;
  metadata.reflection = MsgKeyValue_reflection_;
  return metadata;
}
