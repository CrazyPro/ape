// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RseObtainAttackerList.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* MsgAttacker_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgAttacker_reflection_ = NULL;
const ::google::protobuf::Descriptor* RseObtainAttackerList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RseObtainAttackerList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RseObtainAttackerList_2eproto() {
  protobuf_AddDesc_RseObtainAttackerList_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RseObtainAttackerList.proto");
  GOOGLE_CHECK(file != NULL);
  MsgAttacker_descriptor_ = file->message_type(0);
  static const int MsgAttacker_offsets_[11] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgAttacker, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgAttacker, attackdate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgAttacker, accountid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgAttacker, planetsku_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgAttacker, damage_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgAttacker, planetdamage_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgAttacker, mineralstaken_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgAttacker, coinstaken_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgAttacker, obtaineddamageprotectiontime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgAttacker, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgAttacker, url_),
  };
  MsgAttacker_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgAttacker_descriptor_,
      MsgAttacker::default_instance_,
      MsgAttacker_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgAttacker, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgAttacker, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgAttacker));
  RseObtainAttackerList_descriptor_ = file->message_type(1);
  static const int RseObtainAttackerList_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainAttackerList, damageprotectionappliedat_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainAttackerList, attackerlist_),
  };
  RseObtainAttackerList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RseObtainAttackerList_descriptor_,
      RseObtainAttackerList::default_instance_,
      RseObtainAttackerList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainAttackerList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseObtainAttackerList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RseObtainAttackerList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RseObtainAttackerList_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgAttacker_descriptor_, &MsgAttacker::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RseObtainAttackerList_descriptor_, &RseObtainAttackerList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RseObtainAttackerList_2eproto() {
  delete MsgAttacker::default_instance_;
  delete MsgAttacker_reflection_;
  delete RseObtainAttackerList::default_instance_;
  delete RseObtainAttackerList_reflection_;
}

void protobuf_AddDesc_RseObtainAttackerList_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033RseObtainAttackerList.proto\"\345\001\n\013MsgAtt"
    "acker\022\n\n\002id\030\001 \001(\005\022\022\n\nattackDate\030\002 \001(\005\022\021\n"
    "\taccountId\030\003 \001(\t\022\021\n\tplanetSku\030\004 \001(\t\022\016\n\006d"
    "amage\030\005 \001(\005\022\024\n\014planetDamage\030\006 \001(\005\022\025\n\rmin"
    "eralsTaken\030\007 \001(\005\022\022\n\ncoinsTaken\030\010 \001(\005\022$\n\034"
    "obtainedDamageProtectionTime\030\t \001(\005\022\014\n\004na"
    "me\030\n \001(\t\022\013\n\003url\030\013 \001(\t\"^\n\025RseObtainAttack"
    "erList\022!\n\031damageProtectionAppliedAt\030\001 \001("
    "\005\022\"\n\014attackerList\030\002 \003(\0132\014.MsgAttacker", 357);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RseObtainAttackerList.proto", &protobuf_RegisterTypes);
  MsgAttacker::default_instance_ = new MsgAttacker();
  RseObtainAttackerList::default_instance_ = new RseObtainAttackerList();
  MsgAttacker::default_instance_->InitAsDefaultInstance();
  RseObtainAttackerList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RseObtainAttackerList_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RseObtainAttackerList_2eproto {
  StaticDescriptorInitializer_RseObtainAttackerList_2eproto() {
    protobuf_AddDesc_RseObtainAttackerList_2eproto();
  }
} static_descriptor_initializer_RseObtainAttackerList_2eproto_;


// ===================================================================

const ::std::string MsgAttacker::_default_accountid_;
const ::std::string MsgAttacker::_default_planetsku_;
const ::std::string MsgAttacker::_default_name_;
const ::std::string MsgAttacker::_default_url_;
#ifndef _MSC_VER
const int MsgAttacker::kIdFieldNumber;
const int MsgAttacker::kAttackDateFieldNumber;
const int MsgAttacker::kAccountIdFieldNumber;
const int MsgAttacker::kPlanetSkuFieldNumber;
const int MsgAttacker::kDamageFieldNumber;
const int MsgAttacker::kPlanetDamageFieldNumber;
const int MsgAttacker::kMineralsTakenFieldNumber;
const int MsgAttacker::kCoinsTakenFieldNumber;
const int MsgAttacker::kObtainedDamageProtectionTimeFieldNumber;
const int MsgAttacker::kNameFieldNumber;
const int MsgAttacker::kUrlFieldNumber;
#endif  // !_MSC_VER

MsgAttacker::MsgAttacker() {
  SharedCtor();
}

void MsgAttacker::InitAsDefaultInstance() {
}

MsgAttacker::MsgAttacker(const MsgAttacker& from) {
  SharedCtor();
  MergeFrom(from);
}

void MsgAttacker::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  attackdate_ = 0;
  accountid_ = const_cast< ::std::string*>(&_default_accountid_);
  planetsku_ = const_cast< ::std::string*>(&_default_planetsku_);
  damage_ = 0;
  planetdamage_ = 0;
  mineralstaken_ = 0;
  coinstaken_ = 0;
  obtaineddamageprotectiontime_ = 0;
  name_ = const_cast< ::std::string*>(&_default_name_);
  url_ = const_cast< ::std::string*>(&_default_url_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgAttacker::~MsgAttacker() {
  SharedDtor();
}

void MsgAttacker::SharedDtor() {
  if (accountid_ != &_default_accountid_) {
    delete accountid_;
  }
  if (planetsku_ != &_default_planetsku_) {
    delete planetsku_;
  }
  if (name_ != &_default_name_) {
    delete name_;
  }
  if (url_ != &_default_url_) {
    delete url_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* MsgAttacker::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgAttacker_descriptor_;
}

const MsgAttacker& MsgAttacker::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseObtainAttackerList_2eproto();  return *default_instance_;
}

MsgAttacker* MsgAttacker::default_instance_ = NULL;

MsgAttacker* MsgAttacker::New() const {
  return new MsgAttacker;
}

void MsgAttacker::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    attackdate_ = 0;
    if (_has_bit(2)) {
      if (accountid_ != &_default_accountid_) {
        accountid_->clear();
      }
    }
    if (_has_bit(3)) {
      if (planetsku_ != &_default_planetsku_) {
        planetsku_->clear();
      }
    }
    damage_ = 0;
    planetdamage_ = 0;
    mineralstaken_ = 0;
    coinstaken_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    obtaineddamageprotectiontime_ = 0;
    if (_has_bit(9)) {
      if (name_ != &_default_name_) {
        name_->clear();
      }
    }
    if (_has_bit(10)) {
      if (url_ != &_default_url_) {
        url_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgAttacker::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_attackDate;
        break;
      }
      
      // optional int32 attackDate = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_attackDate:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &attackdate_));
        _set_bit(1);
        if (input->ExpectTag(26)) goto parse_accountId;
        break;
      }
      
      // optional string accountId = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_accountId:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_accountid()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->accountid().data(), this->accountid().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(34)) goto parse_planetSku;
        break;
      }
      
      // optional string planetSku = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_planetSku:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_planetsku()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->planetsku().data(), this->planetsku().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(40)) goto parse_damage;
        break;
      }
      
      // optional int32 damage = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_damage:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &damage_));
        _set_bit(4);
        if (input->ExpectTag(48)) goto parse_planetDamage;
        break;
      }
      
      // optional int32 planetDamage = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_planetDamage:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &planetdamage_));
        _set_bit(5);
        if (input->ExpectTag(56)) goto parse_mineralsTaken;
        break;
      }
      
      // optional int32 mineralsTaken = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_mineralsTaken:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &mineralstaken_));
        _set_bit(6);
        if (input->ExpectTag(64)) goto parse_coinsTaken;
        break;
      }
      
      // optional int32 coinsTaken = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_coinsTaken:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &coinstaken_));
        _set_bit(7);
        if (input->ExpectTag(72)) goto parse_obtainedDamageProtectionTime;
        break;
      }
      
      // optional int32 obtainedDamageProtectionTime = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_obtainedDamageProtectionTime:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &obtaineddamageprotectiontime_));
        _set_bit(8);
        if (input->ExpectTag(82)) goto parse_name;
        break;
      }
      
      // optional string name = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_name:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_name()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->name().data(), this->name().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(90)) goto parse_url;
        break;
      }
      
      // optional string url = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_url:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_url()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->url().data(), this->url().length(),
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

void MsgAttacker::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    MsgAttacker::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 id = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }
  
  // optional int32 attackDate = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->attackdate(), output);
  }
  
  // optional string accountId = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->accountid().data(), this->accountid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->accountid(), output);
  }
  
  // optional string planetSku = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->planetsku().data(), this->planetsku().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->planetsku(), output);
  }
  
  // optional int32 damage = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->damage(), output);
  }
  
  // optional int32 planetDamage = 6;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->planetdamage(), output);
  }
  
  // optional int32 mineralsTaken = 7;
  if (_has_bit(6)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->mineralstaken(), output);
  }
  
  // optional int32 coinsTaken = 8;
  if (_has_bit(7)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->coinstaken(), output);
  }
  
  // optional int32 obtainedDamageProtectionTime = 9;
  if (_has_bit(8)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->obtaineddamageprotectiontime(), output);
  }
  
  // optional string name = 10;
  if (_has_bit(9)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      10, this->name(), output);
  }
  
  // optional string url = 11;
  if (_has_bit(10)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->url().data(), this->url().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      11, this->url(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgAttacker::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }
  
  // optional int32 attackDate = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->attackdate(), target);
  }
  
  // optional string accountId = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->accountid().data(), this->accountid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->accountid(), target);
  }
  
  // optional string planetSku = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->planetsku().data(), this->planetsku().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->planetsku(), target);
  }
  
  // optional int32 damage = 5;
  if (_has_bit(4)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->damage(), target);
  }
  
  // optional int32 planetDamage = 6;
  if (_has_bit(5)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->planetdamage(), target);
  }
  
  // optional int32 mineralsTaken = 7;
  if (_has_bit(6)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->mineralstaken(), target);
  }
  
  // optional int32 coinsTaken = 8;
  if (_has_bit(7)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->coinstaken(), target);
  }
  
  // optional int32 obtainedDamageProtectionTime = 9;
  if (_has_bit(8)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->obtaineddamageprotectiontime(), target);
  }
  
  // optional string name = 10;
  if (_has_bit(9)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->name(), target);
  }
  
  // optional string url = 11;
  if (_has_bit(10)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->url().data(), this->url().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->url(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgAttacker::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }
    
    // optional int32 attackDate = 2;
    if (has_attackdate()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->attackdate());
    }
    
    // optional string accountId = 3;
    if (has_accountid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->accountid());
    }
    
    // optional string planetSku = 4;
    if (has_planetsku()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->planetsku());
    }
    
    // optional int32 damage = 5;
    if (has_damage()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->damage());
    }
    
    // optional int32 planetDamage = 6;
    if (has_planetdamage()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->planetdamage());
    }
    
    // optional int32 mineralsTaken = 7;
    if (has_mineralstaken()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->mineralstaken());
    }
    
    // optional int32 coinsTaken = 8;
    if (has_coinstaken()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->coinstaken());
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 obtainedDamageProtectionTime = 9;
    if (has_obtaineddamageprotectiontime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->obtaineddamageprotectiontime());
    }
    
    // optional string name = 10;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }
    
    // optional string url = 11;
    if (has_url()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->url());
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

void MsgAttacker::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgAttacker* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgAttacker*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgAttacker::MergeFrom(const MsgAttacker& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_id(from.id());
    }
    if (from._has_bit(1)) {
      set_attackdate(from.attackdate());
    }
    if (from._has_bit(2)) {
      set_accountid(from.accountid());
    }
    if (from._has_bit(3)) {
      set_planetsku(from.planetsku());
    }
    if (from._has_bit(4)) {
      set_damage(from.damage());
    }
    if (from._has_bit(5)) {
      set_planetdamage(from.planetdamage());
    }
    if (from._has_bit(6)) {
      set_mineralstaken(from.mineralstaken());
    }
    if (from._has_bit(7)) {
      set_coinstaken(from.coinstaken());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from._has_bit(8)) {
      set_obtaineddamageprotectiontime(from.obtaineddamageprotectiontime());
    }
    if (from._has_bit(9)) {
      set_name(from.name());
    }
    if (from._has_bit(10)) {
      set_url(from.url());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgAttacker::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgAttacker::CopyFrom(const MsgAttacker& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgAttacker::IsInitialized() const {
  
  return true;
}

void MsgAttacker::Swap(MsgAttacker* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(attackdate_, other->attackdate_);
    std::swap(accountid_, other->accountid_);
    std::swap(planetsku_, other->planetsku_);
    std::swap(damage_, other->damage_);
    std::swap(planetdamage_, other->planetdamage_);
    std::swap(mineralstaken_, other->mineralstaken_);
    std::swap(coinstaken_, other->coinstaken_);
    std::swap(obtaineddamageprotectiontime_, other->obtaineddamageprotectiontime_);
    std::swap(name_, other->name_);
    std::swap(url_, other->url_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgAttacker::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgAttacker_descriptor_;
  metadata.reflection = MsgAttacker_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RseObtainAttackerList::kDamageProtectionAppliedAtFieldNumber;
const int RseObtainAttackerList::kAttackerListFieldNumber;
#endif  // !_MSC_VER

RseObtainAttackerList::RseObtainAttackerList() {
  SharedCtor();
}

void RseObtainAttackerList::InitAsDefaultInstance() {
}

RseObtainAttackerList::RseObtainAttackerList(const RseObtainAttackerList& from) {
  SharedCtor();
  MergeFrom(from);
}

void RseObtainAttackerList::SharedCtor() {
  _cached_size_ = 0;
  damageprotectionappliedat_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RseObtainAttackerList::~RseObtainAttackerList() {
  SharedDtor();
}

void RseObtainAttackerList::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RseObtainAttackerList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RseObtainAttackerList_descriptor_;
}

const RseObtainAttackerList& RseObtainAttackerList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseObtainAttackerList_2eproto();  return *default_instance_;
}

RseObtainAttackerList* RseObtainAttackerList::default_instance_ = NULL;

RseObtainAttackerList* RseObtainAttackerList::New() const {
  return new RseObtainAttackerList;
}

void RseObtainAttackerList::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    damageprotectionappliedat_ = 0;
  }
  attackerlist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RseObtainAttackerList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 damageProtectionAppliedAt = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &damageprotectionappliedat_));
        _set_bit(0);
        if (input->ExpectTag(18)) goto parse_attackerList;
        break;
      }
      
      // repeated .MsgAttacker attackerList = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_attackerList:
        DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, add_attackerlist()));
        if (input->ExpectTag(18)) goto parse_attackerList;
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

void RseObtainAttackerList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RseObtainAttackerList::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 damageProtectionAppliedAt = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->damageprotectionappliedat(), output);
  }
  
  // repeated .MsgAttacker attackerList = 2;
  for (int i = 0; i < this->attackerlist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageNoVirtual(
      2, this->attackerlist(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RseObtainAttackerList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 damageProtectionAppliedAt = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->damageprotectionappliedat(), target);
  }
  
  // repeated .MsgAttacker attackerList = 2;
  for (int i = 0; i < this->attackerlist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->attackerlist(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RseObtainAttackerList::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 damageProtectionAppliedAt = 1;
    if (has_damageprotectionappliedat()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->damageprotectionappliedat());
    }
    
  }
  // repeated .MsgAttacker attackerList = 2;
  total_size += 1 * this->attackerlist_size();
  for (int i = 0; i < this->attackerlist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->attackerlist(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void RseObtainAttackerList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RseObtainAttackerList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RseObtainAttackerList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RseObtainAttackerList::MergeFrom(const RseObtainAttackerList& from) {
  GOOGLE_CHECK_NE(&from, this);
  attackerlist_.MergeFrom(from.attackerlist_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_damageprotectionappliedat(from.damageprotectionappliedat());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RseObtainAttackerList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RseObtainAttackerList::CopyFrom(const RseObtainAttackerList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RseObtainAttackerList::IsInitialized() const {
  
  return true;
}

void RseObtainAttackerList::Swap(RseObtainAttackerList* other) {
  if (other != this) {
    std::swap(damageprotectionappliedat_, other->damageprotectionappliedat_);
    attackerlist_.Swap(&other->attackerlist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RseObtainAttackerList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RseObtainAttackerList_descriptor_;
  metadata.reflection = RseObtainAttackerList_reflection_;
  return metadata;
}

