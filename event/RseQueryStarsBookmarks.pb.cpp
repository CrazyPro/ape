// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RseQueryStarsBookmarks.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RseQueryStarsBookmarks_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RseQueryStarsBookmarks_reflection_ = NULL;
const ::google::protobuf::Descriptor* Bookmarks_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Bookmarks_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RseQueryStarsBookmarks_2eproto() {
  protobuf_AddDesc_RseQueryStarsBookmarks_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RseQueryStarsBookmarks.proto");
  GOOGLE_CHECK(file != NULL);
  RseQueryStarsBookmarks_descriptor_ = file->message_type(0);
  static const int RseQueryStarsBookmarks_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryStarsBookmarks, bookmarks_),
  };
  RseQueryStarsBookmarks_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RseQueryStarsBookmarks_descriptor_,
      RseQueryStarsBookmarks::default_instance_,
      RseQueryStarsBookmarks_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryStarsBookmarks, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseQueryStarsBookmarks, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RseQueryStarsBookmarks));
  Bookmarks_descriptor_ = file->message_type(1);
  static const int Bookmarks_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Bookmarks, starname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Bookmarks, sku_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Bookmarks, startype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Bookmarks, starid_),
  };
  Bookmarks_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Bookmarks_descriptor_,
      Bookmarks::default_instance_,
      Bookmarks_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Bookmarks, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Bookmarks, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Bookmarks));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RseQueryStarsBookmarks_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RseQueryStarsBookmarks_descriptor_, &RseQueryStarsBookmarks::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Bookmarks_descriptor_, &Bookmarks::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RseQueryStarsBookmarks_2eproto() {
  delete RseQueryStarsBookmarks::default_instance_;
  delete RseQueryStarsBookmarks_reflection_;
  delete Bookmarks::default_instance_;
  delete Bookmarks_reflection_;
}

void protobuf_AddDesc_RseQueryStarsBookmarks_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\034RseQueryStarsBookmarks.proto\"7\n\026RseQue"
    "ryStarsBookmarks\022\035\n\tBookmarks\030\001 \003(\0132\n.Bo"
    "okmarks\"L\n\tBookmarks\022\020\n\010starName\030\001 \001(\005\022\013"
    "\n\003sku\030\002 \001(\t\022\020\n\010starType\030\003 \001(\005\022\016\n\006starId\030"
    "\004 \001(\005", 165);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RseQueryStarsBookmarks.proto", &protobuf_RegisterTypes);
  RseQueryStarsBookmarks::default_instance_ = new RseQueryStarsBookmarks();
  Bookmarks::default_instance_ = new Bookmarks();
  RseQueryStarsBookmarks::default_instance_->InitAsDefaultInstance();
  Bookmarks::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RseQueryStarsBookmarks_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RseQueryStarsBookmarks_2eproto {
  StaticDescriptorInitializer_RseQueryStarsBookmarks_2eproto() {
    protobuf_AddDesc_RseQueryStarsBookmarks_2eproto();
  }
} static_descriptor_initializer_RseQueryStarsBookmarks_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RseQueryStarsBookmarks::kBookmarksFieldNumber;
#endif  // !_MSC_VER

RseQueryStarsBookmarks::RseQueryStarsBookmarks() {
  SharedCtor();
}

void RseQueryStarsBookmarks::InitAsDefaultInstance() {
}

RseQueryStarsBookmarks::RseQueryStarsBookmarks(const RseQueryStarsBookmarks& from) {
  SharedCtor();
  MergeFrom(from);
}

void RseQueryStarsBookmarks::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RseQueryStarsBookmarks::~RseQueryStarsBookmarks() {
  SharedDtor();
}

void RseQueryStarsBookmarks::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RseQueryStarsBookmarks::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RseQueryStarsBookmarks_descriptor_;
}

const RseQueryStarsBookmarks& RseQueryStarsBookmarks::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseQueryStarsBookmarks_2eproto();  return *default_instance_;
}

RseQueryStarsBookmarks* RseQueryStarsBookmarks::default_instance_ = NULL;

RseQueryStarsBookmarks* RseQueryStarsBookmarks::New() const {
  return new RseQueryStarsBookmarks;
}

void RseQueryStarsBookmarks::Clear() {
  bookmarks_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RseQueryStarsBookmarks::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Bookmarks Bookmarks = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_Bookmarks:
        DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, add_bookmarks()));
        if (input->ExpectTag(10)) goto parse_Bookmarks;
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

void RseQueryStarsBookmarks::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RseQueryStarsBookmarks::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // repeated .Bookmarks Bookmarks = 1;
  for (int i = 0; i < this->bookmarks_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageNoVirtual(
      1, this->bookmarks(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RseQueryStarsBookmarks::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .Bookmarks Bookmarks = 1;
  for (int i = 0; i < this->bookmarks_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->bookmarks(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RseQueryStarsBookmarks::ByteSize() const {
  int total_size = 0;
  
  // repeated .Bookmarks Bookmarks = 1;
  total_size += 1 * this->bookmarks_size();
  for (int i = 0; i < this->bookmarks_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->bookmarks(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void RseQueryStarsBookmarks::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RseQueryStarsBookmarks* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RseQueryStarsBookmarks*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RseQueryStarsBookmarks::MergeFrom(const RseQueryStarsBookmarks& from) {
  GOOGLE_CHECK_NE(&from, this);
  bookmarks_.MergeFrom(from.bookmarks_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RseQueryStarsBookmarks::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RseQueryStarsBookmarks::CopyFrom(const RseQueryStarsBookmarks& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RseQueryStarsBookmarks::IsInitialized() const {
  
  return true;
}

void RseQueryStarsBookmarks::Swap(RseQueryStarsBookmarks* other) {
  if (other != this) {
    bookmarks_.Swap(&other->bookmarks_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RseQueryStarsBookmarks::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RseQueryStarsBookmarks_descriptor_;
  metadata.reflection = RseQueryStarsBookmarks_reflection_;
  return metadata;
}


// ===================================================================

const ::std::string Bookmarks::_default_sku_;
#ifndef _MSC_VER
const int Bookmarks::kStarNameFieldNumber;
const int Bookmarks::kSkuFieldNumber;
const int Bookmarks::kStarTypeFieldNumber;
const int Bookmarks::kStarIdFieldNumber;
#endif  // !_MSC_VER

Bookmarks::Bookmarks() {
  SharedCtor();
}

void Bookmarks::InitAsDefaultInstance() {
}

Bookmarks::Bookmarks(const Bookmarks& from) {
  SharedCtor();
  MergeFrom(from);
}

void Bookmarks::SharedCtor() {
  _cached_size_ = 0;
  starname_ = 0;
  sku_ = const_cast< ::std::string*>(&_default_sku_);
  startype_ = 0;
  starid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Bookmarks::~Bookmarks() {
  SharedDtor();
}

void Bookmarks::SharedDtor() {
  if (sku_ != &_default_sku_) {
    delete sku_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* Bookmarks::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Bookmarks_descriptor_;
}

const Bookmarks& Bookmarks::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseQueryStarsBookmarks_2eproto();  return *default_instance_;
}

Bookmarks* Bookmarks::default_instance_ = NULL;

Bookmarks* Bookmarks::New() const {
  return new Bookmarks;
}

void Bookmarks::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    starname_ = 0;
    if (_has_bit(1)) {
      if (sku_ != &_default_sku_) {
        sku_->clear();
      }
    }
    startype_ = 0;
    starid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Bookmarks::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 starName = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &starname_));
        _set_bit(0);
        if (input->ExpectTag(18)) goto parse_sku;
        break;
      }
      
      // optional string sku = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_sku:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_sku()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->sku().data(), this->sku().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(24)) goto parse_starType;
        break;
      }
      
      // optional int32 starType = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_starType:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &startype_));
        _set_bit(2);
        if (input->ExpectTag(32)) goto parse_starId;
        break;
      }
      
      // optional int32 starId = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_starId:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &starid_));
        _set_bit(3);
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

void Bookmarks::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    Bookmarks::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 starName = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->starname(), output);
  }
  
  // optional string sku = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sku().data(), this->sku().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->sku(), output);
  }
  
  // optional int32 starType = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->startype(), output);
  }
  
  // optional int32 starId = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->starid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Bookmarks::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 starName = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->starname(), target);
  }
  
  // optional string sku = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sku().data(), this->sku().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->sku(), target);
  }
  
  // optional int32 starType = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->startype(), target);
  }
  
  // optional int32 starId = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->starid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Bookmarks::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 starName = 1;
    if (has_starname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->starname());
    }
    
    // optional string sku = 2;
    if (has_sku()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sku());
    }
    
    // optional int32 starType = 3;
    if (has_startype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->startype());
    }
    
    // optional int32 starId = 4;
    if (has_starid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->starid());
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

void Bookmarks::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Bookmarks* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Bookmarks*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Bookmarks::MergeFrom(const Bookmarks& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_starname(from.starname());
    }
    if (from._has_bit(1)) {
      set_sku(from.sku());
    }
    if (from._has_bit(2)) {
      set_startype(from.startype());
    }
    if (from._has_bit(3)) {
      set_starid(from.starid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Bookmarks::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Bookmarks::CopyFrom(const Bookmarks& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Bookmarks::IsInitialized() const {
  
  return true;
}

void Bookmarks::Swap(Bookmarks* other) {
  if (other != this) {
    std::swap(starname_, other->starname_);
    std::swap(sku_, other->sku_);
    std::swap(startype_, other->startype_);
    std::swap(starid_, other->starid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Bookmarks::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Bookmarks_descriptor_;
  metadata.reflection = Bookmarks_reflection_;
  return metadata;
}

