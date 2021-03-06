// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RseCustomizedActivity.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RseCustomizedActivity_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RseCustomizedActivity_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RseCustomizedActivity_2eproto() {
  protobuf_AddDesc_RseCustomizedActivity_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RseCustomizedActivity.proto");
  GOOGLE_CHECK(file != NULL);
  RseCustomizedActivity_descriptor_ = file->message_type(0);
  static const int RseCustomizedActivity_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseCustomizedActivity, onlinerewardtype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseCustomizedActivity, onlinerewardsequence_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseCustomizedActivity, nday_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseCustomizedActivity, friendarmystate_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseCustomizedActivity, friendarmytime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseCustomizedActivity, firewiresupportstep_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseCustomizedActivity, firewiresupportprogress_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseCustomizedActivity, everydayfirstload_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseCustomizedActivity, action_),
  };
  RseCustomizedActivity_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RseCustomizedActivity_descriptor_,
      RseCustomizedActivity::default_instance_,
      RseCustomizedActivity_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseCustomizedActivity, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RseCustomizedActivity, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RseCustomizedActivity));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RseCustomizedActivity_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RseCustomizedActivity_descriptor_, &RseCustomizedActivity::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RseCustomizedActivity_2eproto() {
  delete RseCustomizedActivity::default_instance_;
  delete RseCustomizedActivity_reflection_;
}

void protobuf_AddDesc_RseCustomizedActivity_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033RseCustomizedActivity.proto\"\367\001\n\025RseCus"
    "tomizedActivity\022\030\n\020onlineRewardType\030\001 \001("
    "\005\022\034\n\024onlineRewardSequence\030\002 \001(\005\022\014\n\004nDay\030"
    "\003 \001(\005\022\027\n\017friendArmyState\030\004 \001(\010\022\026\n\016friend"
    "ArmyTime\030\005 \001(\003\022\033\n\023firewireSupportStep\030\006 "
    "\001(\005\022\037\n\027firewireSupportProgress\030\007 \001(\t\022\031\n\021"
    "everyDayFirstLoad\030\010 \001(\010\022\016\n\006action\030\t \001(\t", 279);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RseCustomizedActivity.proto", &protobuf_RegisterTypes);
  RseCustomizedActivity::default_instance_ = new RseCustomizedActivity();
  RseCustomizedActivity::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RseCustomizedActivity_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RseCustomizedActivity_2eproto {
  StaticDescriptorInitializer_RseCustomizedActivity_2eproto() {
    protobuf_AddDesc_RseCustomizedActivity_2eproto();
  }
} static_descriptor_initializer_RseCustomizedActivity_2eproto_;


// ===================================================================

const ::std::string RseCustomizedActivity::_default_firewiresupportprogress_;
const ::std::string RseCustomizedActivity::_default_action_;
#ifndef _MSC_VER
const int RseCustomizedActivity::kOnlineRewardTypeFieldNumber;
const int RseCustomizedActivity::kOnlineRewardSequenceFieldNumber;
const int RseCustomizedActivity::kNDayFieldNumber;
const int RseCustomizedActivity::kFriendArmyStateFieldNumber;
const int RseCustomizedActivity::kFriendArmyTimeFieldNumber;
const int RseCustomizedActivity::kFirewireSupportStepFieldNumber;
const int RseCustomizedActivity::kFirewireSupportProgressFieldNumber;
const int RseCustomizedActivity::kEveryDayFirstLoadFieldNumber;
const int RseCustomizedActivity::kActionFieldNumber;
#endif  // !_MSC_VER

RseCustomizedActivity::RseCustomizedActivity() {
  SharedCtor();
}

void RseCustomizedActivity::InitAsDefaultInstance() {
}

RseCustomizedActivity::RseCustomizedActivity(const RseCustomizedActivity& from) {
  SharedCtor();
  MergeFrom(from);
}

void RseCustomizedActivity::SharedCtor() {
  _cached_size_ = 0;
  onlinerewardtype_ = 0;
  onlinerewardsequence_ = 0;
  nday_ = 0;
  friendarmystate_ = false;
  friendarmytime_ = GOOGLE_LONGLONG(0);
  firewiresupportstep_ = 0;
  firewiresupportprogress_ = const_cast< ::std::string*>(&_default_firewiresupportprogress_);
  everydayfirstload_ = false;
  action_ = const_cast< ::std::string*>(&_default_action_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RseCustomizedActivity::~RseCustomizedActivity() {
  SharedDtor();
}

void RseCustomizedActivity::SharedDtor() {
  if (firewiresupportprogress_ != &_default_firewiresupportprogress_) {
    delete firewiresupportprogress_;
  }
  if (action_ != &_default_action_) {
    delete action_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RseCustomizedActivity::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RseCustomizedActivity_descriptor_;
}

const RseCustomizedActivity& RseCustomizedActivity::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RseCustomizedActivity_2eproto();  return *default_instance_;
}

RseCustomizedActivity* RseCustomizedActivity::default_instance_ = NULL;

RseCustomizedActivity* RseCustomizedActivity::New() const {
  return new RseCustomizedActivity;
}

void RseCustomizedActivity::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    onlinerewardtype_ = 0;
    onlinerewardsequence_ = 0;
    nday_ = 0;
    friendarmystate_ = false;
    friendarmytime_ = GOOGLE_LONGLONG(0);
    firewiresupportstep_ = 0;
    if (_has_bit(6)) {
      if (firewiresupportprogress_ != &_default_firewiresupportprogress_) {
        firewiresupportprogress_->clear();
      }
    }
    everydayfirstload_ = false;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (_has_bit(8)) {
      if (action_ != &_default_action_) {
        action_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RseCustomizedActivity::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 onlineRewardType = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &onlinerewardtype_));
        _set_bit(0);
        if (input->ExpectTag(16)) goto parse_onlineRewardSequence;
        break;
      }
      
      // optional int32 onlineRewardSequence = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_onlineRewardSequence:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &onlinerewardsequence_));
        _set_bit(1);
        if (input->ExpectTag(24)) goto parse_nDay;
        break;
      }
      
      // optional int32 nDay = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_nDay:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &nday_));
        _set_bit(2);
        if (input->ExpectTag(32)) goto parse_friendArmyState;
        break;
      }
      
      // optional bool friendArmyState = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_friendArmyState:
        DO_(::google::protobuf::internal::WireFormatLite::ReadBool(
              input, &friendarmystate_));
        _set_bit(3);
        if (input->ExpectTag(40)) goto parse_friendArmyTime;
        break;
      }
      
      // optional int64 friendArmyTime = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_friendArmyTime:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt64(
              input, &friendarmytime_));
        _set_bit(4);
        if (input->ExpectTag(48)) goto parse_firewireSupportStep;
        break;
      }
      
      // optional int32 firewireSupportStep = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_firewireSupportStep:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &firewiresupportstep_));
        _set_bit(5);
        if (input->ExpectTag(58)) goto parse_firewireSupportProgress;
        break;
      }
      
      // optional string firewireSupportProgress = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_firewireSupportProgress:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_firewiresupportprogress()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->firewiresupportprogress().data(), this->firewiresupportprogress().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(64)) goto parse_everyDayFirstLoad;
        break;
      }
      
      // optional bool everyDayFirstLoad = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_everyDayFirstLoad:
        DO_(::google::protobuf::internal::WireFormatLite::ReadBool(
              input, &everydayfirstload_));
        _set_bit(7);
        if (input->ExpectTag(74)) goto parse_action;
        break;
      }
      
      // optional string action = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_action:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_action()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->action().data(), this->action().length(),
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

void RseCustomizedActivity::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RseCustomizedActivity::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional int32 onlineRewardType = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->onlinerewardtype(), output);
  }
  
  // optional int32 onlineRewardSequence = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->onlinerewardsequence(), output);
  }
  
  // optional int32 nDay = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->nday(), output);
  }
  
  // optional bool friendArmyState = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->friendarmystate(), output);
  }
  
  // optional int64 friendArmyTime = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->friendarmytime(), output);
  }
  
  // optional int32 firewireSupportStep = 6;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->firewiresupportstep(), output);
  }
  
  // optional string firewireSupportProgress = 7;
  if (_has_bit(6)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->firewiresupportprogress().data(), this->firewiresupportprogress().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      7, this->firewiresupportprogress(), output);
  }
  
  // optional bool everyDayFirstLoad = 8;
  if (_has_bit(7)) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->everydayfirstload(), output);
  }
  
  // optional string action = 9;
  if (_has_bit(8)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->action().data(), this->action().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      9, this->action(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RseCustomizedActivity::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 onlineRewardType = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->onlinerewardtype(), target);
  }
  
  // optional int32 onlineRewardSequence = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->onlinerewardsequence(), target);
  }
  
  // optional int32 nDay = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->nday(), target);
  }
  
  // optional bool friendArmyState = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->friendarmystate(), target);
  }
  
  // optional int64 friendArmyTime = 5;
  if (_has_bit(4)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->friendarmytime(), target);
  }
  
  // optional int32 firewireSupportStep = 6;
  if (_has_bit(5)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->firewiresupportstep(), target);
  }
  
  // optional string firewireSupportProgress = 7;
  if (_has_bit(6)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->firewiresupportprogress().data(), this->firewiresupportprogress().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->firewiresupportprogress(), target);
  }
  
  // optional bool everyDayFirstLoad = 8;
  if (_has_bit(7)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->everydayfirstload(), target);
  }
  
  // optional string action = 9;
  if (_has_bit(8)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->action().data(), this->action().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->action(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RseCustomizedActivity::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 onlineRewardType = 1;
    if (has_onlinerewardtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->onlinerewardtype());
    }
    
    // optional int32 onlineRewardSequence = 2;
    if (has_onlinerewardsequence()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->onlinerewardsequence());
    }
    
    // optional int32 nDay = 3;
    if (has_nday()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->nday());
    }
    
    // optional bool friendArmyState = 4;
    if (has_friendarmystate()) {
      total_size += 1 + 1;
    }
    
    // optional int64 friendArmyTime = 5;
    if (has_friendarmytime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->friendarmytime());
    }
    
    // optional int32 firewireSupportStep = 6;
    if (has_firewiresupportstep()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->firewiresupportstep());
    }
    
    // optional string firewireSupportProgress = 7;
    if (has_firewiresupportprogress()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->firewiresupportprogress());
    }
    
    // optional bool everyDayFirstLoad = 8;
    if (has_everydayfirstload()) {
      total_size += 1 + 1;
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional string action = 9;
    if (has_action()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->action());
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

void RseCustomizedActivity::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RseCustomizedActivity* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RseCustomizedActivity*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RseCustomizedActivity::MergeFrom(const RseCustomizedActivity& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_onlinerewardtype(from.onlinerewardtype());
    }
    if (from._has_bit(1)) {
      set_onlinerewardsequence(from.onlinerewardsequence());
    }
    if (from._has_bit(2)) {
      set_nday(from.nday());
    }
    if (from._has_bit(3)) {
      set_friendarmystate(from.friendarmystate());
    }
    if (from._has_bit(4)) {
      set_friendarmytime(from.friendarmytime());
    }
    if (from._has_bit(5)) {
      set_firewiresupportstep(from.firewiresupportstep());
    }
    if (from._has_bit(6)) {
      set_firewiresupportprogress(from.firewiresupportprogress());
    }
    if (from._has_bit(7)) {
      set_everydayfirstload(from.everydayfirstload());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from._has_bit(8)) {
      set_action(from.action());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RseCustomizedActivity::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RseCustomizedActivity::CopyFrom(const RseCustomizedActivity& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RseCustomizedActivity::IsInitialized() const {
  
  return true;
}

void RseCustomizedActivity::Swap(RseCustomizedActivity* other) {
  if (other != this) {
    std::swap(onlinerewardtype_, other->onlinerewardtype_);
    std::swap(onlinerewardsequence_, other->onlinerewardsequence_);
    std::swap(nday_, other->nday_);
    std::swap(friendarmystate_, other->friendarmystate_);
    std::swap(friendarmytime_, other->friendarmytime_);
    std::swap(firewiresupportstep_, other->firewiresupportstep_);
    std::swap(firewiresupportprogress_, other->firewiresupportprogress_);
    std::swap(everydayfirstload_, other->everydayfirstload_);
    std::swap(action_, other->action_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RseCustomizedActivity::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RseCustomizedActivity_descriptor_;
  metadata.reflection = RseCustomizedActivity_reflection_;
  return metadata;
}

