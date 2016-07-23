// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RseObtainSocialItems.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* MsgItem_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgItem_reflection_ = NULL;
const ::google::protobuf::Descriptor* RseObtainSocialItems_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RseObtainSocialItems_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RseObtainSocialItems_2eproto() {
  protobuf_AddDesc_RseObtainSocialItems_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RseObtainSocialItems.proto");
  GOOGLE_CHECK(file != NULL);
  MsgItem_descriptor_ = file->message_type(0);
  static const int MsgItem_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgItem, sku_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgItem, position_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgItem, item_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgItem, sequence_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgItem, counter_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgItem, quantity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgItem, timeleft_),
  };
  MsgItem_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgItem_descriptor_,
      MsgItem::default_instance_,
      MsgItem_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgItem, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgItem, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgItem));
  RseObtainSocialItems_descriptor_ = file->message_type(1);
  static const int RseObtainSocialItems_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainSocialItems, wishlist_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainSocialItems, itemslist_),
  };
  RseObtainSocialItems_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RseObtainSocialItems_descriptor_,
      RseObtainSocialItems::default_instance_,
      RseObtainSocialItems_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainSocialItems, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainSocialItems, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RseObtainSocialItems));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RseObtainSocialItems_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgItem_descriptor_, &MsgItem::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RseObtainSocialItems_descriptor_, &RseObtainSocialItems::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RseObtainSocialItems_2eproto() {
  delete MsgItem::default_instance_;
  delete MsgItem_reflection_;
  delete RseObtainSocialItems::default_instance_;
  delete RseObtainSocialItems_reflection_;
}

void protobuf_AddDesc_RseObtainSocialItems_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032RseObtainSocialItems.proto\"}\n\007MsgItem\022"
    "\013\n\003sku\030\001 \001(\005\022\020\n\010position\030\002 \001(\005\022\014\n\004Item\030\003"
    " \003(\005\022\020\n\010sequence\030\004 \001(\005\022\017\n\007counter\030\005 \001(\005\022"
    "\020\n\010quantity\030\006 \001(\005\022\020\n\010timeLeft\030\007 \001(\005\"E\n\024R"
    "seObtainSocialItems\022\020\n\010wishlist\030\001 \001(\005\022\033\n"
    "\tItemsList\030\002 \003(\0132\010.MsgItem", 226);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RseObtainSocialItems.proto", &protobuf_RegisterTypes);
  MsgItem::default_instance_ = new MsgItem();
  RseObtainSocialItems::default_instance_ = new RseObtainSocialItems();
  MsgItem::default_instance_->InitAsDefaultInstance();
  RseObtainSocialItems::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RseObtainSocialItems_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RseObtainSocialItems_2eproto {
  StaticDescriptorInitializer_RseObtainSocialItems_2eproto() {
    protobuf_AddDesc_RseObtainSocialItems_2eproto();
  }
} static_descriptor_initializer_RseObtainSocialItems_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int MsgItem::kSkuFieldNumber;
const int MsgItem::kPositionFieldNumber;
const int MsgItem::kItemFieldNumber;
const int MsgItem::kSequenceFieldNumber;
const int MsgItem::kCounterFieldNumber;
const int MsgItem::kQuantityFieldNumber;
const int MsgItem::kTimeLeftFieldNumber;
#endif  // !_MSC_VER

MsgItem::MsgItem() {
  SharedCtor();
}

void MsgItem::InitAsDefaultInstance() {
}

MsgItem::MsgItem(const MsgItem& from) {
  SharedCtor();
  MergeFrom(from);
}

void MsgItem::SharedCtor() {
  _cached_size_ = 0;
  sku_ = 0;
  position_ = 0;
  sequence_ = 0;
  counter_ = 0;
  quantity_ = 0;
  timeleft_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgItem::~MsgItem() {
  SharedDtor();
}

void MsgItem::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* MsgItem::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgItem_descriptor_;
}

const MsgItem& MsgItem::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseObtainSocialItems_2eproto();  return *default_instance_;
}

MsgItem* MsgItem::default_instance_ = NULL;

MsgItem* MsgItem::New() const {
  return new MsgItem;
}

void MsgItem::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    sku_ = 0;
    position_ = 0;
    sequence_ = 0;
    counter_ = 0;
    quantity_ = 0;
    timeleft_ = 0;
  }
  item_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 sku = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &sku_));
        _set_bit(0);
        if (input->ExpectTag(16)) goto parse_position;
        break;
      }
      
      // optional int32 position = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_position:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &position_));
        _set_bit(1);
        if (input->ExpectTag(24)) goto parse_Item;
        break;
      }
      
      // repeated int32 Item = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_Item:
        ::google::protobuf::int32 value;
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &value));
        add_item(value);
        if (input->ExpectTag(24)) goto parse_Item;
        if (input->ExpectTag(32)) goto parse_sequence;
        break;
      }
      
      // optional int32 sequence = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_sequence:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &sequence_));
        _set_bit(3);
        if (input->ExpectTag(40)) goto parse_counter;
        break;
      }
      
      // optional int32 counter = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_counter:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &counter_));
        _set_bit(4);
        if (input->ExpectTag(48)) goto parse_quantity;
        break;
      }
      
      // optional int32 quantity = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_quantity:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &quantity_));
        _set_bit(5);
        if (input->ExpectTag(56)) goto parse_timeLeft;
        break;
      }
      
      // optional int32 timeLeft = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_timeLeft:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &timeleft_));
        _set_bit(6);
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

void MsgItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    MsgItem::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 sku = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->sku(), output);
  }
  
  // optional int32 position = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->position(), output);
  }
  
  // repeated int32 Item = 3;
  for (int i = 0; i < this->item_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      3, this->item(i), output);
  }
  
  // optional int32 sequence = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->sequence(), output);
  }
  
  // optional int32 counter = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->counter(), output);
  }
  
  // optional int32 quantity = 6;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->quantity(), output);
  }
  
  // optional int32 timeLeft = 7;
  if (_has_bit(6)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->timeleft(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgItem::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 sku = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->sku(), target);
  }
  
  // optional int32 position = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->position(), target);
  }
  
  // repeated int32 Item = 3;
  for (int i = 0; i < this->item_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(3, this->item(i), target);
  }
  
  // optional int32 sequence = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->sequence(), target);
  }
  
  // optional int32 counter = 5;
  if (_has_bit(4)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->counter(), target);
  }
  
  // optional int32 quantity = 6;
  if (_has_bit(5)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->quantity(), target);
  }
  
  // optional int32 timeLeft = 7;
  if (_has_bit(6)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->timeleft(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgItem::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 sku = 1;
    if (has_sku()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sku());
    }
    
    // optional int32 position = 2;
    if (has_position()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->position());
    }
    
    // optional int32 sequence = 4;
    if (has_sequence()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sequence());
    }
    
    // optional int32 counter = 5;
    if (has_counter()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->counter());
    }
    
    // optional int32 quantity = 6;
    if (has_quantity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->quantity());
    }
    
    // optional int32 timeLeft = 7;
    if (has_timeleft()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->timeleft());
    }
    
  }
  // repeated int32 Item = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->item_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->item(i));
    }
    total_size += 1 * this->item_size() + data_size;
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void MsgItem::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgItem* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgItem*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgItem::MergeFrom(const MsgItem& from) {
  GOOGLE_CHECK_NE(&from, this);
  item_.MergeFrom(from.item_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_sku(from.sku());
    }
    if (from._has_bit(1)) {
      set_position(from.position());
    }
    if (from._has_bit(3)) {
      set_sequence(from.sequence());
    }
    if (from._has_bit(4)) {
      set_counter(from.counter());
    }
    if (from._has_bit(5)) {
      set_quantity(from.quantity());
    }
    if (from._has_bit(6)) {
      set_timeleft(from.timeleft());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgItem::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgItem::CopyFrom(const MsgItem& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgItem::IsInitialized() const {
  
  return true;
}

void MsgItem::Swap(MsgItem* other) {
  if (other != this) {
    std::swap(sku_, other->sku_);
    std::swap(position_, other->position_);
    item_.Swap(&other->item_);
    std::swap(sequence_, other->sequence_);
    std::swap(counter_, other->counter_);
    std::swap(quantity_, other->quantity_);
    std::swap(timeleft_, other->timeleft_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgItem::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgItem_descriptor_;
  metadata.reflection = MsgItem_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RseObtainSocialItems::kWishlistFieldNumber;
const int RseObtainSocialItems::kItemsListFieldNumber;
#endif  // !_MSC_VER

RseObtainSocialItems::RseObtainSocialItems() {
  SharedCtor();
}

void RseObtainSocialItems::InitAsDefaultInstance() {
}

RseObtainSocialItems::RseObtainSocialItems(const RseObtainSocialItems& from) {
  SharedCtor();
  MergeFrom(from);
}

void RseObtainSocialItems::SharedCtor() {
  _cached_size_ = 0;
  wishlist_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RseObtainSocialItems::~RseObtainSocialItems() {
  SharedDtor();
}

void RseObtainSocialItems::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RseObtainSocialItems::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RseObtainSocialItems_descriptor_;
}

const RseObtainSocialItems& RseObtainSocialItems::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseObtainSocialItems_2eproto();  return *default_instance_;
}

RseObtainSocialItems* RseObtainSocialItems::default_instance_ = NULL;

RseObtainSocialItems* RseObtainSocialItems::New() const {
  return new RseObtainSocialItems;
}

void RseObtainSocialItems::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    wishlist_ = 0;
  }
  itemslist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RseObtainSocialItems::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 wishlist = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &wishlist_));
        _set_bit(0);
        if (input->ExpectTag(18)) goto parse_ItemsList;
        break;
      }
      
      // repeated .MsgItem ItemsList = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_ItemsList:
        DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, add_itemslist()));
        if (input->ExpectTag(18)) goto parse_ItemsList;
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

void RseObtainSocialItems::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RseObtainSocialItems::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 wishlist = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->wishlist(), output);
  }
  
  // repeated .MsgItem ItemsList = 2;
  for (int i = 0; i < this->itemslist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageNoVirtual(
      2, this->itemslist(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RseObtainSocialItems::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 wishlist = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->wishlist(), target);
  }
  
  // repeated .MsgItem ItemsList = 2;
  for (int i = 0; i < this->itemslist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->itemslist(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RseObtainSocialItems::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 wishlist = 1;
    if (has_wishlist()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->wishlist());
    }
    
  }
  // repeated .MsgItem ItemsList = 2;
  total_size += 1 * this->itemslist_size();
  for (int i = 0; i < this->itemslist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->itemslist(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void RseObtainSocialItems::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RseObtainSocialItems* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RseObtainSocialItems*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RseObtainSocialItems::MergeFrom(const RseObtainSocialItems& from) {
  GOOGLE_CHECK_NE(&from, this);
  itemslist_.MergeFrom(from.itemslist_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_wishlist(from.wishlist());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RseObtainSocialItems::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RseObtainSocialItems::CopyFrom(const RseObtainSocialItems& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RseObtainSocialItems::IsInitialized() const {
  
  return true;
}

void RseObtainSocialItems::Swap(RseObtainSocialItems* other) {
  if (other != this) {
    std::swap(wishlist_, other->wishlist_);
    itemslist_.Swap(&other->itemslist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RseObtainSocialItems::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RseObtainSocialItems_descriptor_;
  metadata.reflection = RseObtainSocialItems_reflection_;
  return metadata;
}

