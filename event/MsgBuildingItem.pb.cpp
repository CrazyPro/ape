// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MsgBuildingItem.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* MsgBuildingItem_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgBuildingItem_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MsgBuildingItem_2eproto() {
  protobuf_AddDesc_MsgBuildingItem_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MsgBuildingItem.proto");
  GOOGLE_CHECK(file != NULL);
  MsgBuildingItem_descriptor_ = file->message_type(0);
  static const int MsgBuildingItem_offsets_[16] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, sid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, upgradeid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, state_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, energy_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, energypercent_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, sku_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, incometorestore_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, repairing_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, item_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, isflipped_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, updatedat_),
  };
  MsgBuildingItem_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgBuildingItem_descriptor_,
      MsgBuildingItem::default_instance_,
      MsgBuildingItem_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgBuildingItem, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgBuildingItem));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MsgBuildingItem_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgBuildingItem_descriptor_, &MsgBuildingItem::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MsgBuildingItem_2eproto() {
  delete MsgBuildingItem::default_instance_;
  delete MsgBuildingItem_reflection_;
}

void protobuf_AddDesc_MsgBuildingItem_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025MsgBuildingItem.proto\"\222\002\n\017MsgBuildingI"
    "tem\022\n\n\002id\030\001 \001(\005\022\013\n\003sid\030\002 \001(\005\022\014\n\004type\030\003 \001"
    "(\005\022\021\n\tupgradeId\030\004 \001(\005\022\t\n\001y\030\005 \001(\005\022\t\n\001x\030\006 "
    "\001(\005\022\r\n\005state\030\007 \001(\005\022\016\n\006energy\030\010 \001(\005\022\025\n\ren"
    "ergyPercent\030\t \001(\005\022\014\n\004time\030\n \001(\005\022\013\n\003sku\030\013"
    " \001(\t\022\027\n\017incomeToRestore\030\014 \001(\005\022\021\n\trepairi"
    "ng\030\r \001(\005\022\014\n\004Item\030\016 \003(\005\022\021\n\tisFlipped\030\017 \001("
    "\005\022\021\n\tupdatedAt\030\020 \001(\005", 300);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MsgBuildingItem.proto", &protobuf_RegisterTypes);
  MsgBuildingItem::default_instance_ = new MsgBuildingItem();
  MsgBuildingItem::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MsgBuildingItem_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MsgBuildingItem_2eproto {
  StaticDescriptorInitializer_MsgBuildingItem_2eproto() {
    protobuf_AddDesc_MsgBuildingItem_2eproto();
  }
} static_descriptor_initializer_MsgBuildingItem_2eproto_;


// ===================================================================

const ::std::string MsgBuildingItem::_default_sku_;
#ifndef _MSC_VER
const int MsgBuildingItem::kIdFieldNumber;
const int MsgBuildingItem::kSidFieldNumber;
const int MsgBuildingItem::kTypeFieldNumber;
const int MsgBuildingItem::kUpgradeIdFieldNumber;
const int MsgBuildingItem::kYFieldNumber;
const int MsgBuildingItem::kXFieldNumber;
const int MsgBuildingItem::kStateFieldNumber;
const int MsgBuildingItem::kEnergyFieldNumber;
const int MsgBuildingItem::kEnergyPercentFieldNumber;
const int MsgBuildingItem::kTimeFieldNumber;
const int MsgBuildingItem::kSkuFieldNumber;
const int MsgBuildingItem::kIncomeToRestoreFieldNumber;
const int MsgBuildingItem::kRepairingFieldNumber;
const int MsgBuildingItem::kItemFieldNumber;
const int MsgBuildingItem::kIsFlippedFieldNumber;
const int MsgBuildingItem::kUpdatedAtFieldNumber;
#endif  // !_MSC_VER

MsgBuildingItem::MsgBuildingItem() {
  SharedCtor();
}

void MsgBuildingItem::InitAsDefaultInstance() {
}

MsgBuildingItem::MsgBuildingItem(const MsgBuildingItem& from) {
  SharedCtor();
  MergeFrom(from);
}

void MsgBuildingItem::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  sid_ = 0;
  type_ = 0;
  upgradeid_ = 0;
  y_ = 0;
  x_ = 0;
  state_ = 0;
  energy_ = 0;
  energypercent_ = 0;
  time_ = 0;
  sku_ = const_cast< ::std::string*>(&_default_sku_);
  incometorestore_ = 0;
  repairing_ = 0;
  isflipped_ = 0;
  updatedat_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgBuildingItem::~MsgBuildingItem() {
  SharedDtor();
}

void MsgBuildingItem::SharedDtor() {
  if (sku_ != &_default_sku_) {
    delete sku_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* MsgBuildingItem::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgBuildingItem_descriptor_;
}

const MsgBuildingItem& MsgBuildingItem::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MsgBuildingItem_2eproto();  return *default_instance_;
}

MsgBuildingItem* MsgBuildingItem::default_instance_ = NULL;

MsgBuildingItem* MsgBuildingItem::New() const {
  return new MsgBuildingItem;
}

void MsgBuildingItem::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    sid_ = 0;
    type_ = 0;
    upgradeid_ = 0;
    y_ = 0;
    x_ = 0;
    state_ = 0;
    energy_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    energypercent_ = 0;
    time_ = 0;
    if (_has_bit(10)) {
      if (sku_ != &_default_sku_) {
        sku_->clear();
      }
    }
    incometorestore_ = 0;
    repairing_ = 0;
    isflipped_ = 0;
    updatedat_ = 0;
  }
  item_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgBuildingItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &id_));
        _set_bit(0);
        if (input->ExpectTag(16)) goto parse_sid;
        break;
      }
      
      // optional int32 sid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_sid:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &sid_));
        _set_bit(1);
        if (input->ExpectTag(24)) goto parse_type;
        break;
      }
      
      // optional int32 type = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_type:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &type_));
        _set_bit(2);
        if (input->ExpectTag(32)) goto parse_upgradeId;
        break;
      }
      
      // optional int32 upgradeId = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_upgradeId:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &upgradeid_));
        _set_bit(3);
        if (input->ExpectTag(40)) goto parse_y;
        break;
      }
      
      // optional int32 y = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_y:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &y_));
        _set_bit(4);
        if (input->ExpectTag(48)) goto parse_x;
        break;
      }
      
      // optional int32 x = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_x:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &x_));
        _set_bit(5);
        if (input->ExpectTag(56)) goto parse_state;
        break;
      }
      
      // optional int32 state = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_state:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &state_));
        _set_bit(6);
        if (input->ExpectTag(64)) goto parse_energy;
        break;
      }
      
      // optional int32 energy = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_energy:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &energy_));
        _set_bit(7);
        if (input->ExpectTag(72)) goto parse_energyPercent;
        break;
      }
      
      // optional int32 energyPercent = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_energyPercent:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &energypercent_));
        _set_bit(8);
        if (input->ExpectTag(80)) goto parse_time;
        break;
      }
      
      // optional int32 time = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_time:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &time_));
        _set_bit(9);
        if (input->ExpectTag(90)) goto parse_sku;
        break;
      }
      
      // optional string sku = 11;
      case 11: {
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
        if (input->ExpectTag(96)) goto parse_incomeToRestore;
        break;
      }
      
      // optional int32 incomeToRestore = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_incomeToRestore:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &incometorestore_));
        _set_bit(11);
        if (input->ExpectTag(104)) goto parse_repairing;
        break;
      }
      
      // optional int32 repairing = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_repairing:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &repairing_));
        _set_bit(12);
        if (input->ExpectTag(112)) goto parse_Item;
        break;
      }
      
      // repeated int32 Item = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_Item:
        ::google::protobuf::int32 value;
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &value));
        add_item(value);
        if (input->ExpectTag(112)) goto parse_Item;
        if (input->ExpectTag(120)) goto parse_isFlipped;
        break;
      }
      
      // optional int32 isFlipped = 15;
      case 15: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_isFlipped:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &isflipped_));
        _set_bit(14);
        if (input->ExpectTag(128)) goto parse_updatedAt;
        break;
      }
      
      // optional int32 updatedAt = 16;
      case 16: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_updatedAt:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &updatedat_));
        _set_bit(15);
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

void MsgBuildingItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    MsgBuildingItem::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 id = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }
  
  // optional int32 sid = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->sid(), output);
  }
  
  // optional int32 type = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->type(), output);
  }
  
  // optional int32 upgradeId = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->upgradeid(), output);
  }
  
  // optional int32 y = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->y(), output);
  }
  
  // optional int32 x = 6;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->x(), output);
  }
  
  // optional int32 state = 7;
  if (_has_bit(6)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->state(), output);
  }
  
  // optional int32 energy = 8;
  if (_has_bit(7)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->energy(), output);
  }
  
  // optional int32 energyPercent = 9;
  if (_has_bit(8)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->energypercent(), output);
  }
  
  // optional int32 time = 10;
  if (_has_bit(9)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->time(), output);
  }
  
  // optional string sku = 11;
  if (_has_bit(10)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sku().data(), this->sku().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      11, this->sku(), output);
  }
  
  // optional int32 incomeToRestore = 12;
  if (_has_bit(11)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(12, this->incometorestore(), output);
  }
  
  // optional int32 repairing = 13;
  if (_has_bit(12)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->repairing(), output);
  }
  
  // repeated int32 Item = 14;
  for (int i = 0; i < this->item_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      14, this->item(i), output);
  }
  
  // optional int32 isFlipped = 15;
  if (_has_bit(14)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->isflipped(), output);
  }
  
  // optional int32 updatedAt = 16;
  if (_has_bit(15)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(16, this->updatedat(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgBuildingItem::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }
  
  // optional int32 sid = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->sid(), target);
  }
  
  // optional int32 type = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->type(), target);
  }
  
  // optional int32 upgradeId = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->upgradeid(), target);
  }
  
  // optional int32 y = 5;
  if (_has_bit(4)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->y(), target);
  }
  
  // optional int32 x = 6;
  if (_has_bit(5)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->x(), target);
  }
  
  // optional int32 state = 7;
  if (_has_bit(6)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->state(), target);
  }
  
  // optional int32 energy = 8;
  if (_has_bit(7)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->energy(), target);
  }
  
  // optional int32 energyPercent = 9;
  if (_has_bit(8)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->energypercent(), target);
  }
  
  // optional int32 time = 10;
  if (_has_bit(9)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->time(), target);
  }
  
  // optional string sku = 11;
  if (_has_bit(10)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sku().data(), this->sku().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->sku(), target);
  }
  
  // optional int32 incomeToRestore = 12;
  if (_has_bit(11)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(12, this->incometorestore(), target);
  }
  
  // optional int32 repairing = 13;
  if (_has_bit(12)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->repairing(), target);
  }
  
  // repeated int32 Item = 14;
  for (int i = 0; i < this->item_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(14, this->item(i), target);
  }
  
  // optional int32 isFlipped = 15;
  if (_has_bit(14)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->isflipped(), target);
  }
  
  // optional int32 updatedAt = 16;
  if (_has_bit(15)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(16, this->updatedat(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgBuildingItem::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }
    
    // optional int32 sid = 2;
    if (has_sid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sid());
    }
    
    // optional int32 type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }
    
    // optional int32 upgradeId = 4;
    if (has_upgradeid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->upgradeid());
    }
    
    // optional int32 y = 5;
    if (has_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->y());
    }
    
    // optional int32 x = 6;
    if (has_x()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->x());
    }
    
    // optional int32 state = 7;
    if (has_state()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->state());
    }
    
    // optional int32 energy = 8;
    if (has_energy()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->energy());
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 energyPercent = 9;
    if (has_energypercent()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->energypercent());
    }
    
    // optional int32 time = 10;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->time());
    }
    
    // optional string sku = 11;
    if (has_sku()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sku());
    }
    
    // optional int32 incomeToRestore = 12;
    if (has_incometorestore()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->incometorestore());
    }
    
    // optional int32 repairing = 13;
    if (has_repairing()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->repairing());
    }
    
    // optional int32 isFlipped = 15;
    if (has_isflipped()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->isflipped());
    }
    
    // optional int32 updatedAt = 16;
    if (has_updatedat()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->updatedat());
    }
    
  }
  // repeated int32 Item = 14;
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

void MsgBuildingItem::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgBuildingItem* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgBuildingItem*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgBuildingItem::MergeFrom(const MsgBuildingItem& from) {
  GOOGLE_CHECK_NE(&from, this);
  item_.MergeFrom(from.item_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_id(from.id());
    }
    if (from._has_bit(1)) {
      set_sid(from.sid());
    }
    if (from._has_bit(2)) {
      set_type(from.type());
    }
    if (from._has_bit(3)) {
      set_upgradeid(from.upgradeid());
    }
    if (from._has_bit(4)) {
      set_y(from.y());
    }
    if (from._has_bit(5)) {
      set_x(from.x());
    }
    if (from._has_bit(6)) {
      set_state(from.state());
    }
    if (from._has_bit(7)) {
      set_energy(from.energy());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from._has_bit(8)) {
      set_energypercent(from.energypercent());
    }
    if (from._has_bit(9)) {
      set_time(from.time());
    }
    if (from._has_bit(10)) {
      set_sku(from.sku());
    }
    if (from._has_bit(11)) {
      set_incometorestore(from.incometorestore());
    }
    if (from._has_bit(12)) {
      set_repairing(from.repairing());
    }
    if (from._has_bit(14)) {
      set_isflipped(from.isflipped());
    }
    if (from._has_bit(15)) {
      set_updatedat(from.updatedat());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgBuildingItem::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgBuildingItem::CopyFrom(const MsgBuildingItem& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgBuildingItem::IsInitialized() const {
  
  return true;
}

void MsgBuildingItem::Swap(MsgBuildingItem* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(sid_, other->sid_);
    std::swap(type_, other->type_);
    std::swap(upgradeid_, other->upgradeid_);
    std::swap(y_, other->y_);
    std::swap(x_, other->x_);
    std::swap(state_, other->state_);
    std::swap(energy_, other->energy_);
    std::swap(energypercent_, other->energypercent_);
    std::swap(time_, other->time_);
    std::swap(sku_, other->sku_);
    std::swap(incometorestore_, other->incometorestore_);
    std::swap(repairing_, other->repairing_);
    item_.Swap(&other->item_);
    std::swap(isflipped_, other->isflipped_);
    std::swap(updatedat_, other->updatedat_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgBuildingItem::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgBuildingItem_descriptor_;
  metadata.reflection = MsgBuildingItem_reflection_;
  return metadata;
}

