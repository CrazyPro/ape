// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RceQueryStarsBookmarks.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RceQueryStarsBookmarks_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RceQueryStarsBookmarks_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RceQueryStarsBookmarks_2eproto() {
  protobuf_AddDesc_RceQueryStarsBookmarks_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RceQueryStarsBookmarks.proto");
  GOOGLE_CHECK(file != NULL);
  RceQueryStarsBookmarks_descriptor_ = file->message_type(0);
  static const int RceQueryStarsBookmarks_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceQueryStarsBookmarks, planetid_),
  };
  RceQueryStarsBookmarks_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RceQueryStarsBookmarks_descriptor_,
      RceQueryStarsBookmarks::default_instance_,
      RceQueryStarsBookmarks_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceQueryStarsBookmarks, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceQueryStarsBookmarks, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RceQueryStarsBookmarks));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RceQueryStarsBookmarks_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RceQueryStarsBookmarks_descriptor_, &RceQueryStarsBookmarks::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RceQueryStarsBookmarks_2eproto() {
  delete RceQueryStarsBookmarks::default_instance_;
  delete RceQueryStarsBookmarks_reflection_;
}

void protobuf_AddDesc_RceQueryStarsBookmarks_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\034RceQueryStarsBookmarks.proto\"*\n\026RceQue"
    "ryStarsBookmarks\022\020\n\010planetId\030\001 \001(\t", 74);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RceQueryStarsBookmarks.proto", &protobuf_RegisterTypes);
  RceQueryStarsBookmarks::default_instance_ = new RceQueryStarsBookmarks();
  RceQueryStarsBookmarks::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RceQueryStarsBookmarks_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RceQueryStarsBookmarks_2eproto {
  StaticDescriptorInitializer_RceQueryStarsBookmarks_2eproto() {
    protobuf_AddDesc_RceQueryStarsBookmarks_2eproto();
  }
} static_descriptor_initializer_RceQueryStarsBookmarks_2eproto_;


// ===================================================================

const ::std::string RceQueryStarsBookmarks::_default_planetid_;
#ifndef _MSC_VER
const int RceQueryStarsBookmarks::kPlanetIdFieldNumber;
#endif  // !_MSC_VER

RceQueryStarsBookmarks::RceQueryStarsBookmarks() {
  SharedCtor();
}

void RceQueryStarsBookmarks::InitAsDefaultInstance() {
}

RceQueryStarsBookmarks::RceQueryStarsBookmarks(const RceQueryStarsBookmarks& from) {
  SharedCtor();
  MergeFrom(from);
}

void RceQueryStarsBookmarks::SharedCtor() {
  _cached_size_ = 0;
  planetid_ = const_cast< ::std::string*>(&_default_planetid_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RceQueryStarsBookmarks::~RceQueryStarsBookmarks() {
  SharedDtor();
}

void RceQueryStarsBookmarks::SharedDtor() {
  if (planetid_ != &_default_planetid_) {
    delete planetid_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RceQueryStarsBookmarks::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RceQueryStarsBookmarks_descriptor_;
}

const RceQueryStarsBookmarks& RceQueryStarsBookmarks::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RceQueryStarsBookmarks_2eproto();  return *default_instance_;
}

RceQueryStarsBookmarks* RceQueryStarsBookmarks::default_instance_ = NULL;

RceQueryStarsBookmarks* RceQueryStarsBookmarks::New() const {
  return new RceQueryStarsBookmarks;
}

void RceQueryStarsBookmarks::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (planetid_ != &_default_planetid_) {
        planetid_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RceQueryStarsBookmarks::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string planetId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
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

void RceQueryStarsBookmarks::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RceQueryStarsBookmarks::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional string planetId = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->planetid().data(), this->planetid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->planetid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RceQueryStarsBookmarks::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string planetId = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->planetid().data(), this->planetid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->planetid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RceQueryStarsBookmarks::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string planetId = 1;
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

void RceQueryStarsBookmarks::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RceQueryStarsBookmarks* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RceQueryStarsBookmarks*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RceQueryStarsBookmarks::MergeFrom(const RceQueryStarsBookmarks& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_planetid(from.planetid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RceQueryStarsBookmarks::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RceQueryStarsBookmarks::CopyFrom(const RceQueryStarsBookmarks& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RceQueryStarsBookmarks::IsInitialized() const {
  
  return true;
}

void RceQueryStarsBookmarks::Swap(RceQueryStarsBookmarks* other) {
  if (other != this) {
    std::swap(planetid_, other->planetid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RceQueryStarsBookmarks::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RceQueryStarsBookmarks_descriptor_;
  metadata.reflection = RceQueryStarsBookmarks_reflection_;
  return metadata;
}
