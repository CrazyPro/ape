// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RseObtainHangarsHelp.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RseObtainHangarsHelp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RseObtainHangarsHelp_reflection_ = NULL;
const ::google::protobuf::Descriptor* HangarsHelpList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HangarsHelpList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RseObtainHangarsHelp_2eproto() {
  protobuf_AddDesc_RseObtainHangarsHelp_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RseObtainHangarsHelp.proto");
  GOOGLE_CHECK(file != NULL);
  RseObtainHangarsHelp_descriptor_ = file->message_type(0);
  static const int RseObtainHangarsHelp_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainHangarsHelp, hangarshelplist_),
  };
  RseObtainHangarsHelp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RseObtainHangarsHelp_descriptor_,
      RseObtainHangarsHelp::default_instance_,
      RseObtainHangarsHelp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainHangarsHelp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainHangarsHelp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RseObtainHangarsHelp));
  HangarsHelpList_descriptor_ = file->message_type(1);
  static const int HangarsHelpList_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HangarsHelpList, ret_),
  };
  HangarsHelpList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      HangarsHelpList_descriptor_,
      HangarsHelpList::default_instance_,
      HangarsHelpList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HangarsHelpList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HangarsHelpList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(HangarsHelpList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RseObtainHangarsHelp_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RseObtainHangarsHelp_descriptor_, &RseObtainHangarsHelp::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    HangarsHelpList_descriptor_, &HangarsHelpList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RseObtainHangarsHelp_2eproto() {
  delete RseObtainHangarsHelp::default_instance_;
  delete RseObtainHangarsHelp_reflection_;
  delete HangarsHelpList::default_instance_;
  delete HangarsHelpList_reflection_;
}

void protobuf_AddDesc_RseObtainHangarsHelp_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032RseObtainHangarsHelp.proto\"A\n\024RseObtai"
    "nHangarsHelp\022)\n\017HangarsHelpList\030\001 \003(\0132\020."
    "HangarsHelpList\"\036\n\017HangarsHelpList\022\013\n\003re"
    "t\030\001 \001(\005", 127);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RseObtainHangarsHelp.proto", &protobuf_RegisterTypes);
  RseObtainHangarsHelp::default_instance_ = new RseObtainHangarsHelp();
  HangarsHelpList::default_instance_ = new HangarsHelpList();
  RseObtainHangarsHelp::default_instance_->InitAsDefaultInstance();
  HangarsHelpList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RseObtainHangarsHelp_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RseObtainHangarsHelp_2eproto {
  StaticDescriptorInitializer_RseObtainHangarsHelp_2eproto() {
    protobuf_AddDesc_RseObtainHangarsHelp_2eproto();
  }
} static_descriptor_initializer_RseObtainHangarsHelp_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RseObtainHangarsHelp::kHangarsHelpListFieldNumber;
#endif  // !_MSC_VER

RseObtainHangarsHelp::RseObtainHangarsHelp() {
  SharedCtor();
}

void RseObtainHangarsHelp::InitAsDefaultInstance() {
}

RseObtainHangarsHelp::RseObtainHangarsHelp(const RseObtainHangarsHelp& from) {
  SharedCtor();
  MergeFrom(from);
}

void RseObtainHangarsHelp::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RseObtainHangarsHelp::~RseObtainHangarsHelp() {
  SharedDtor();
}

void RseObtainHangarsHelp::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RseObtainHangarsHelp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RseObtainHangarsHelp_descriptor_;
}

const RseObtainHangarsHelp& RseObtainHangarsHelp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseObtainHangarsHelp_2eproto();  return *default_instance_;
}

RseObtainHangarsHelp* RseObtainHangarsHelp::default_instance_ = NULL;

RseObtainHangarsHelp* RseObtainHangarsHelp::New() const {
  return new RseObtainHangarsHelp;
}

void RseObtainHangarsHelp::Clear() {
  hangarshelplist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RseObtainHangarsHelp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .HangarsHelpList HangarsHelpList = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_HangarsHelpList:
        DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, add_hangarshelplist()));
        if (input->ExpectTag(10)) goto parse_HangarsHelpList;
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

void RseObtainHangarsHelp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RseObtainHangarsHelp::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // repeated .HangarsHelpList HangarsHelpList = 1;
  for (int i = 0; i < this->hangarshelplist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageNoVirtual(
      1, this->hangarshelplist(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RseObtainHangarsHelp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .HangarsHelpList HangarsHelpList = 1;
  for (int i = 0; i < this->hangarshelplist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->hangarshelplist(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RseObtainHangarsHelp::ByteSize() const {
  int total_size = 0;
  
  // repeated .HangarsHelpList HangarsHelpList = 1;
  total_size += 1 * this->hangarshelplist_size();
  for (int i = 0; i < this->hangarshelplist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->hangarshelplist(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void RseObtainHangarsHelp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RseObtainHangarsHelp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RseObtainHangarsHelp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RseObtainHangarsHelp::MergeFrom(const RseObtainHangarsHelp& from) {
  GOOGLE_CHECK_NE(&from, this);
  hangarshelplist_.MergeFrom(from.hangarshelplist_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RseObtainHangarsHelp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RseObtainHangarsHelp::CopyFrom(const RseObtainHangarsHelp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RseObtainHangarsHelp::IsInitialized() const {
  
  return true;
}

void RseObtainHangarsHelp::Swap(RseObtainHangarsHelp* other) {
  if (other != this) {
    hangarshelplist_.Swap(&other->hangarshelplist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RseObtainHangarsHelp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RseObtainHangarsHelp_descriptor_;
  metadata.reflection = RseObtainHangarsHelp_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int HangarsHelpList::kRetFieldNumber;
#endif  // !_MSC_VER

HangarsHelpList::HangarsHelpList() {
  SharedCtor();
}

void HangarsHelpList::InitAsDefaultInstance() {
}

HangarsHelpList::HangarsHelpList(const HangarsHelpList& from) {
  SharedCtor();
  MergeFrom(from);
}

void HangarsHelpList::SharedCtor() {
  _cached_size_ = 0;
  ret_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HangarsHelpList::~HangarsHelpList() {
  SharedDtor();
}

void HangarsHelpList::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* HangarsHelpList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HangarsHelpList_descriptor_;
}

const HangarsHelpList& HangarsHelpList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseObtainHangarsHelp_2eproto();  return *default_instance_;
}

HangarsHelpList* HangarsHelpList::default_instance_ = NULL;

HangarsHelpList* HangarsHelpList::New() const {
  return new HangarsHelpList;
}

void HangarsHelpList::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    ret_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool HangarsHelpList::MergePartialFromCodedStream(
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

void HangarsHelpList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    HangarsHelpList::SerializeWithCachedSizesToArray(raw_buffer);
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

::google::protobuf::uint8* HangarsHelpList::SerializeWithCachedSizesToArray(
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

int HangarsHelpList::ByteSize() const {
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

void HangarsHelpList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const HangarsHelpList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const HangarsHelpList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void HangarsHelpList::MergeFrom(const HangarsHelpList& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_ret(from.ret());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void HangarsHelpList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HangarsHelpList::CopyFrom(const HangarsHelpList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HangarsHelpList::IsInitialized() const {
  
  return true;
}

void HangarsHelpList::Swap(HangarsHelpList* other) {
  if (other != this) {
    std::swap(ret_, other->ret_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata HangarsHelpList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HangarsHelpList_descriptor_;
  metadata.reflection = HangarsHelpList_reflection_;
  return metadata;
}

