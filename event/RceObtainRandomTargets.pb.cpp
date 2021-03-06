// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RceObtainRandomTargets.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RceObtainRandomTargets_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RceObtainRandomTargets_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RceObtainRandomTargets_2eproto() {
  protobuf_AddDesc_RceObtainRandomTargets_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RceObtainRandomTargets.proto");
  GOOGLE_CHECK(file != NULL);
  RceObtainRandomTargets_descriptor_ = file->message_type(0);
  static const int RceObtainRandomTargets_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainRandomTargets, starid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainRandomTargets, planetid_),
  };
  RceObtainRandomTargets_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RceObtainRandomTargets_descriptor_,
      RceObtainRandomTargets::default_instance_,
      RceObtainRandomTargets_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainRandomTargets, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceObtainRandomTargets, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RceObtainRandomTargets));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RceObtainRandomTargets_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RceObtainRandomTargets_descriptor_, &RceObtainRandomTargets::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RceObtainRandomTargets_2eproto() {
  delete RceObtainRandomTargets::default_instance_;
  delete RceObtainRandomTargets_reflection_;
}

void protobuf_AddDesc_RceObtainRandomTargets_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\034RceObtainRandomTargets.proto\":\n\026RceObt"
    "ainRandomTargets\022\016\n\006starId\030\001 \001(\005\022\020\n\010plan"
    "etId\030\002 \001(\t", 90);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RceObtainRandomTargets.proto", &protobuf_RegisterTypes);
  RceObtainRandomTargets::default_instance_ = new RceObtainRandomTargets();
  RceObtainRandomTargets::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RceObtainRandomTargets_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RceObtainRandomTargets_2eproto {
  StaticDescriptorInitializer_RceObtainRandomTargets_2eproto() {
    protobuf_AddDesc_RceObtainRandomTargets_2eproto();
  }
} static_descriptor_initializer_RceObtainRandomTargets_2eproto_;


// ===================================================================

const ::std::string RceObtainRandomTargets::_default_planetid_;
#ifndef _MSC_VER
const int RceObtainRandomTargets::kStarIdFieldNumber;
const int RceObtainRandomTargets::kPlanetIdFieldNumber;
#endif  // !_MSC_VER

RceObtainRandomTargets::RceObtainRandomTargets() {
  SharedCtor();
}

void RceObtainRandomTargets::InitAsDefaultInstance() {
}

RceObtainRandomTargets::RceObtainRandomTargets(const RceObtainRandomTargets& from) {
  SharedCtor();
  MergeFrom(from);
}

void RceObtainRandomTargets::SharedCtor() {
  _cached_size_ = 0;
  starid_ = 0;
  planetid_ = const_cast< ::std::string*>(&_default_planetid_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RceObtainRandomTargets::~RceObtainRandomTargets() {
  SharedDtor();
}

void RceObtainRandomTargets::SharedDtor() {
  if (planetid_ != &_default_planetid_) {
    delete planetid_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RceObtainRandomTargets::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RceObtainRandomTargets_descriptor_;
}

const RceObtainRandomTargets& RceObtainRandomTargets::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RceObtainRandomTargets_2eproto();  return *default_instance_;
}

RceObtainRandomTargets* RceObtainRandomTargets::default_instance_ = NULL;

RceObtainRandomTargets* RceObtainRandomTargets::New() const {
  return new RceObtainRandomTargets;
}

void RceObtainRandomTargets::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    starid_ = 0;
    if (_has_bit(1)) {
      if (planetid_ != &_default_planetid_) {
        planetid_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RceObtainRandomTargets::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 starId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &starid_));
        _set_bit(0);
        if (input->ExpectTag(18)) goto parse_planetId;
        break;
      }
      
      // optional string planetId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_planetId:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_planetid()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->planetid().data(), this->planetid().length(),
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

void RceObtainRandomTargets::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RceObtainRandomTargets::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 starId = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->starid(), output);
  }
  
  // optional string planetId = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->planetid().data(), this->planetid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->planetid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RceObtainRandomTargets::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 starId = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->starid(), target);
  }
  
  // optional string planetId = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->planetid().data(), this->planetid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->planetid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RceObtainRandomTargets::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 starId = 1;
    if (has_starid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->starid());
    }
    
    // optional string planetId = 2;
    if (has_planetid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->planetid());
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

void RceObtainRandomTargets::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RceObtainRandomTargets* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RceObtainRandomTargets*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RceObtainRandomTargets::MergeFrom(const RceObtainRandomTargets& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_starid(from.starid());
    }
    if (from._has_bit(1)) {
      set_planetid(from.planetid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RceObtainRandomTargets::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RceObtainRandomTargets::CopyFrom(const RceObtainRandomTargets& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RceObtainRandomTargets::IsInitialized() const {
  
  return true;
}

void RceObtainRandomTargets::Swap(RceObtainRandomTargets* other) {
  if (other != this) {
    std::swap(starid_, other->starid_);
    std::swap(planetid_, other->planetid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RceObtainRandomTargets::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RceObtainRandomTargets_descriptor_;
  metadata.reflection = RceObtainRandomTargets_reflection_;
  return metadata;
}

