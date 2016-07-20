// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RceQueryReceiveWishItem.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RceQueryReceiveWishItem_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RceQueryReceiveWishItem_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RceQueryReceiveWishItem_2eproto() {
  protobuf_AddDesc_RceQueryReceiveWishItem_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RceQueryReceiveWishItem.proto");
  GOOGLE_CHECK(file != NULL);
  RceQueryReceiveWishItem_descriptor_ = file->message_type(0);
  static const int RceQueryReceiveWishItem_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceQueryReceiveWishItem, planetid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceQueryReceiveWishItem, itemsku_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceQueryReceiveWishItem, id_),
  };
  RceQueryReceiveWishItem_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RceQueryReceiveWishItem_descriptor_,
      RceQueryReceiveWishItem::default_instance_,
      RceQueryReceiveWishItem_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceQueryReceiveWishItem, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceQueryReceiveWishItem, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RceQueryReceiveWishItem));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RceQueryReceiveWishItem_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RceQueryReceiveWishItem_descriptor_, &RceQueryReceiveWishItem::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RceQueryReceiveWishItem_2eproto() {
  delete RceQueryReceiveWishItem::default_instance_;
  delete RceQueryReceiveWishItem_reflection_;
}

void protobuf_AddDesc_RceQueryReceiveWishItem_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\035RceQueryReceiveWishItem.proto\"H\n\027RceQu"
    "eryReceiveWishItem\022\020\n\010planetId\030\001 \001(\t\022\017\n\007"
    "itemSku\030\002 \001(\t\022\n\n\002id\030\003 \001(\t", 105);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RceQueryReceiveWishItem.proto", &protobuf_RegisterTypes);
  RceQueryReceiveWishItem::default_instance_ = new RceQueryReceiveWishItem();
  RceQueryReceiveWishItem::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RceQueryReceiveWishItem_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RceQueryReceiveWishItem_2eproto {
  StaticDescriptorInitializer_RceQueryReceiveWishItem_2eproto() {
    protobuf_AddDesc_RceQueryReceiveWishItem_2eproto();
  }
} static_descriptor_initializer_RceQueryReceiveWishItem_2eproto_;


// ===================================================================

const ::std::string RceQueryReceiveWishItem::_default_planetid_;
const ::std::string RceQueryReceiveWishItem::_default_itemsku_;
const ::std::string RceQueryReceiveWishItem::_default_id_;
#ifndef _MSC_VER
const int RceQueryReceiveWishItem::kPlanetIdFieldNumber;
const int RceQueryReceiveWishItem::kItemSkuFieldNumber;
const int RceQueryReceiveWishItem::kIdFieldNumber;
#endif  // !_MSC_VER

RceQueryReceiveWishItem::RceQueryReceiveWishItem() {
  SharedCtor();
}

void RceQueryReceiveWishItem::InitAsDefaultInstance() {
}

RceQueryReceiveWishItem::RceQueryReceiveWishItem(const RceQueryReceiveWishItem& from) {
  SharedCtor();
  MergeFrom(from);
}

void RceQueryReceiveWishItem::SharedCtor() {
  _cached_size_ = 0;
  planetid_ = const_cast< ::std::string*>(&_default_planetid_);
  itemsku_ = const_cast< ::std::string*>(&_default_itemsku_);
  id_ = const_cast< ::std::string*>(&_default_id_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RceQueryReceiveWishItem::~RceQueryReceiveWishItem() {
  SharedDtor();
}

void RceQueryReceiveWishItem::SharedDtor() {
  if (planetid_ != &_default_planetid_) {
    delete planetid_;
  }
  if (itemsku_ != &_default_itemsku_) {
    delete itemsku_;
  }
  if (id_ != &_default_id_) {
    delete id_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RceQueryReceiveWishItem::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RceQueryReceiveWishItem_descriptor_;
}

const RceQueryReceiveWishItem& RceQueryReceiveWishItem::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RceQueryReceiveWishItem_2eproto();  return *default_instance_;
}

RceQueryReceiveWishItem* RceQueryReceiveWishItem::default_instance_ = NULL;

RceQueryReceiveWishItem* RceQueryReceiveWishItem::New() const {
  return new RceQueryReceiveWishItem;
}

void RceQueryReceiveWishItem::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (planetid_ != &_default_planetid_) {
        planetid_->clear();
      }
    }
    if (_has_bit(1)) {
      if (itemsku_ != &_default_itemsku_) {
        itemsku_->clear();
      }
    }
    if (_has_bit(2)) {
      if (id_ != &_default_id_) {
        id_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RceQueryReceiveWishItem::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_itemSku;
        break;
      }
      
      // optional string itemSku = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_itemSku:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_itemsku()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->itemsku().data(), this->itemsku().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(26)) goto parse_id;
        break;
      }
      
      // optional string id = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_id:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_id()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->id().data(), this->id().length(),
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

void RceQueryReceiveWishItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RceQueryReceiveWishItem::SerializeWithCachedSizesToArray(raw_buffer);
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
  
  // optional string itemSku = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->itemsku().data(), this->itemsku().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->itemsku(), output);
  }
  
  // optional string id = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->id(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RceQueryReceiveWishItem::SerializeWithCachedSizesToArray(
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
  
  // optional string itemSku = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->itemsku().data(), this->itemsku().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->itemsku(), target);
  }
  
  // optional string id = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->id(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RceQueryReceiveWishItem::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string planetId = 1;
    if (has_planetid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->planetid());
    }
    
    // optional string itemSku = 2;
    if (has_itemsku()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->itemsku());
    }
    
    // optional string id = 3;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
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

void RceQueryReceiveWishItem::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RceQueryReceiveWishItem* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RceQueryReceiveWishItem*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RceQueryReceiveWishItem::MergeFrom(const RceQueryReceiveWishItem& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_planetid(from.planetid());
    }
    if (from._has_bit(1)) {
      set_itemsku(from.itemsku());
    }
    if (from._has_bit(2)) {
      set_id(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RceQueryReceiveWishItem::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RceQueryReceiveWishItem::CopyFrom(const RceQueryReceiveWishItem& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RceQueryReceiveWishItem::IsInitialized() const {
  
  return true;
}

void RceQueryReceiveWishItem::Swap(RceQueryReceiveWishItem* other) {
  if (other != this) {
    std::swap(planetid_, other->planetid_);
    std::swap(itemsku_, other->itemsku_);
    std::swap(id_, other->id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RceQueryReceiveWishItem::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RceQueryReceiveWishItem_descriptor_;
  metadata.reflection = RceQueryReceiveWishItem_reflection_;
  return metadata;
}
