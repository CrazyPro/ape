// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MsgMission.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* MsgMissionParam_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgMissionParam_reflection_ = NULL;
const ::google::protobuf::Descriptor* MsgMissionState_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgMissionState_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MsgMission_2eproto() {
  protobuf_AddDesc_MsgMission_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MsgMission.proto");
  GOOGLE_CHECK(file != NULL);
  MsgMissionParam_descriptor_ = file->message_type(0);
  static const int MsgMissionParam_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMissionParam, target_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMissionParam, endtime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMissionParam, sku_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMissionParam, progress_),
  };
  MsgMissionParam_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgMissionParam_descriptor_,
      MsgMissionParam::default_instance_,
      MsgMissionParam_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMissionParam, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMissionParam, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgMissionParam));
  MsgMissionState_descriptor_ = file->message_type(1);
  static const int MsgMissionState_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMissionState, readytostart_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMissionState, available_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMissionState, rewarded_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMissionState, completed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMissionState, params_),
  };
  MsgMissionState_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgMissionState_descriptor_,
      MsgMissionState::default_instance_,
      MsgMissionState_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMissionState, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgMissionState, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgMissionState));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MsgMission_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgMissionParam_descriptor_, &MsgMissionParam::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgMissionState_descriptor_, &MsgMissionState::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MsgMission_2eproto() {
  delete MsgMissionParam::default_instance_;
  delete MsgMissionParam_reflection_;
  delete MsgMissionState::default_instance_;
  delete MsgMissionState_reflection_;
}

void protobuf_AddDesc_MsgMission_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020MsgMission.proto\"Q\n\017MsgMissionParam\022\016\n"
    "\006Target\030\001 \003(\t\022\017\n\007endTime\030\002 \001(\005\022\013\n\003sku\030\003 "
    "\001(\t\022\020\n\010progress\030\004 \001(\t\"\201\001\n\017MsgMissionStat"
    "e\022\024\n\014ReadyToStart\030\001 \001(\t\022\021\n\tAvailable\030\002 \001"
    "(\t\022\020\n\010Rewarded\030\003 \001(\t\022\021\n\tCompleted\030\004 \001(\t\022"
    " \n\006Params\030\005 \003(\0132\020.MsgMissionParam", 233);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MsgMission.proto", &protobuf_RegisterTypes);
  MsgMissionParam::default_instance_ = new MsgMissionParam();
  MsgMissionState::default_instance_ = new MsgMissionState();
  MsgMissionParam::default_instance_->InitAsDefaultInstance();
  MsgMissionState::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MsgMission_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MsgMission_2eproto {
  StaticDescriptorInitializer_MsgMission_2eproto() {
    protobuf_AddDesc_MsgMission_2eproto();
  }
} static_descriptor_initializer_MsgMission_2eproto_;


// ===================================================================

const ::std::string MsgMissionParam::_default_sku_;
const ::std::string MsgMissionParam::_default_progress_;
#ifndef _MSC_VER
const int MsgMissionParam::kTargetFieldNumber;
const int MsgMissionParam::kEndTimeFieldNumber;
const int MsgMissionParam::kSkuFieldNumber;
const int MsgMissionParam::kProgressFieldNumber;
#endif  // !_MSC_VER

MsgMissionParam::MsgMissionParam() {
  SharedCtor();
}

void MsgMissionParam::InitAsDefaultInstance() {
}

MsgMissionParam::MsgMissionParam(const MsgMissionParam& from) {
  SharedCtor();
  MergeFrom(from);
}

void MsgMissionParam::SharedCtor() {
  _cached_size_ = 0;
  endtime_ = 0;
  sku_ = const_cast< ::std::string*>(&_default_sku_);
  progress_ = const_cast< ::std::string*>(&_default_progress_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgMissionParam::~MsgMissionParam() {
  SharedDtor();
}

void MsgMissionParam::SharedDtor() {
  if (sku_ != &_default_sku_) {
    delete sku_;
  }
  if (progress_ != &_default_progress_) {
    delete progress_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* MsgMissionParam::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgMissionParam_descriptor_;
}

const MsgMissionParam& MsgMissionParam::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MsgMission_2eproto();  return *default_instance_;
}

MsgMissionParam* MsgMissionParam::default_instance_ = NULL;

MsgMissionParam* MsgMissionParam::New() const {
  return new MsgMissionParam;
}

void MsgMissionParam::Clear() {
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    endtime_ = 0;
    if (_has_bit(2)) {
      if (sku_ != &_default_sku_) {
        sku_->clear();
      }
    }
    if (_has_bit(3)) {
      if (progress_ != &_default_progress_) {
        progress_->clear();
      }
    }
  }
  target_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgMissionParam::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string Target = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_Target:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->add_target()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->target(0).data(), this->target(0).length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(10)) goto parse_Target;
        if (input->ExpectTag(16)) goto parse_endTime;
        break;
      }
      
      // optional int32 endTime = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_endTime:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &endtime_));
        _set_bit(1);
        if (input->ExpectTag(26)) goto parse_sku;
        break;
      }
      
      // optional string sku = 3;
      case 3: {
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
        if (input->ExpectTag(34)) goto parse_progress;
        break;
      }
      
      // optional string progress = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_progress:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_progress()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->progress().data(), this->progress().length(),
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

void MsgMissionParam::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    MsgMissionParam::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // repeated string Target = 1;
  for (int i = 0; i < this->target_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->target(i).data(), this->target(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->target(i), output);
  }
  
  // optional int32 endTime = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->endtime(), output);
  }
  
  // optional string sku = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sku().data(), this->sku().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->sku(), output);
  }
  
  // optional string progress = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->progress().data(), this->progress().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->progress(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgMissionParam::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated string Target = 1;
  for (int i = 0; i < this->target_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->target(i).data(), this->target(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->target(i), target);
  }
  
  // optional int32 endTime = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->endtime(), target);
  }
  
  // optional string sku = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sku().data(), this->sku().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->sku(), target);
  }
  
  // optional string progress = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->progress().data(), this->progress().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->progress(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgMissionParam::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // optional int32 endTime = 2;
    if (has_endtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->endtime());
    }
    
    // optional string sku = 3;
    if (has_sku()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sku());
    }
    
    // optional string progress = 4;
    if (has_progress()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->progress());
    }
    
  }
  // repeated string Target = 1;
  total_size += 1 * this->target_size();
  for (int i = 0; i < this->target_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->target(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void MsgMissionParam::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgMissionParam* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgMissionParam*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgMissionParam::MergeFrom(const MsgMissionParam& from) {
  GOOGLE_CHECK_NE(&from, this);
  target_.MergeFrom(from.target_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from._has_bit(1)) {
      set_endtime(from.endtime());
    }
    if (from._has_bit(2)) {
      set_sku(from.sku());
    }
    if (from._has_bit(3)) {
      set_progress(from.progress());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgMissionParam::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgMissionParam::CopyFrom(const MsgMissionParam& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgMissionParam::IsInitialized() const {
  
  return true;
}

void MsgMissionParam::Swap(MsgMissionParam* other) {
  if (other != this) {
    target_.Swap(&other->target_);
    std::swap(endtime_, other->endtime_);
    std::swap(sku_, other->sku_);
    std::swap(progress_, other->progress_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgMissionParam::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgMissionParam_descriptor_;
  metadata.reflection = MsgMissionParam_reflection_;
  return metadata;
}


// ===================================================================

const ::std::string MsgMissionState::_default_readytostart_;
const ::std::string MsgMissionState::_default_available_;
const ::std::string MsgMissionState::_default_rewarded_;
const ::std::string MsgMissionState::_default_completed_;
#ifndef _MSC_VER
const int MsgMissionState::kReadyToStartFieldNumber;
const int MsgMissionState::kAvailableFieldNumber;
const int MsgMissionState::kRewardedFieldNumber;
const int MsgMissionState::kCompletedFieldNumber;
const int MsgMissionState::kParamsFieldNumber;
#endif  // !_MSC_VER

MsgMissionState::MsgMissionState() {
  SharedCtor();
}

void MsgMissionState::InitAsDefaultInstance() {
}

MsgMissionState::MsgMissionState(const MsgMissionState& from) {
  SharedCtor();
  MergeFrom(from);
}

void MsgMissionState::SharedCtor() {
  _cached_size_ = 0;
  readytostart_ = const_cast< ::std::string*>(&_default_readytostart_);
  available_ = const_cast< ::std::string*>(&_default_available_);
  rewarded_ = const_cast< ::std::string*>(&_default_rewarded_);
  completed_ = const_cast< ::std::string*>(&_default_completed_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgMissionState::~MsgMissionState() {
  SharedDtor();
}

void MsgMissionState::SharedDtor() {
  if (readytostart_ != &_default_readytostart_) {
    delete readytostart_;
  }
  if (available_ != &_default_available_) {
    delete available_;
  }
  if (rewarded_ != &_default_rewarded_) {
    delete rewarded_;
  }
  if (completed_ != &_default_completed_) {
    delete completed_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* MsgMissionState::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgMissionState_descriptor_;
}

const MsgMissionState& MsgMissionState::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MsgMission_2eproto();  return *default_instance_;
}

MsgMissionState* MsgMissionState::default_instance_ = NULL;

MsgMissionState* MsgMissionState::New() const {
  return new MsgMissionState;
}

void MsgMissionState::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (readytostart_ != &_default_readytostart_) {
        readytostart_->clear();
      }
    }
    if (_has_bit(1)) {
      if (available_ != &_default_available_) {
        available_->clear();
      }
    }
    if (_has_bit(2)) {
      if (rewarded_ != &_default_rewarded_) {
        rewarded_->clear();
      }
    }
    if (_has_bit(3)) {
      if (completed_ != &_default_completed_) {
        completed_->clear();
      }
    }
  }
  params_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgMissionState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string ReadyToStart = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_readytostart()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->readytostart().data(), this->readytostart().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(18)) goto parse_Available;
        break;
      }
      
      // optional string Available = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_Available:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_available()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->available().data(), this->available().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(26)) goto parse_Rewarded;
        break;
      }
      
      // optional string Rewarded = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_Rewarded:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_rewarded()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->rewarded().data(), this->rewarded().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(34)) goto parse_Completed;
        break;
      }
      
      // optional string Completed = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_Completed:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_completed()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->completed().data(), this->completed().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(42)) goto parse_Params;
        break;
      }
      
      // repeated .MsgMissionParam Params = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_Params:
        DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, add_params()));
        if (input->ExpectTag(42)) goto parse_Params;
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

void MsgMissionState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    MsgMissionState::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional string ReadyToStart = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->readytostart().data(), this->readytostart().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->readytostart(), output);
  }
  
  // optional string Available = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->available().data(), this->available().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->available(), output);
  }
  
  // optional string Rewarded = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->rewarded().data(), this->rewarded().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->rewarded(), output);
  }
  
  // optional string Completed = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->completed().data(), this->completed().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->completed(), output);
  }
  
  // repeated .MsgMissionParam Params = 5;
  for (int i = 0; i < this->params_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageNoVirtual(
      5, this->params(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MsgMissionState::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string ReadyToStart = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->readytostart().data(), this->readytostart().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->readytostart(), target);
  }
  
  // optional string Available = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->available().data(), this->available().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->available(), target);
  }
  
  // optional string Rewarded = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->rewarded().data(), this->rewarded().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->rewarded(), target);
  }
  
  // optional string Completed = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->completed().data(), this->completed().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->completed(), target);
  }
  
  // repeated .MsgMissionParam Params = 5;
  for (int i = 0; i < this->params_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->params(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MsgMissionState::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string ReadyToStart = 1;
    if (has_readytostart()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->readytostart());
    }
    
    // optional string Available = 2;
    if (has_available()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->available());
    }
    
    // optional string Rewarded = 3;
    if (has_rewarded()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->rewarded());
    }
    
    // optional string Completed = 4;
    if (has_completed()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->completed());
    }
    
  }
  // repeated .MsgMissionParam Params = 5;
  total_size += 1 * this->params_size();
  for (int i = 0; i < this->params_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->params(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void MsgMissionState::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgMissionState* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgMissionState*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgMissionState::MergeFrom(const MsgMissionState& from) {
  GOOGLE_CHECK_NE(&from, this);
  params_.MergeFrom(from.params_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_readytostart(from.readytostart());
    }
    if (from._has_bit(1)) {
      set_available(from.available());
    }
    if (from._has_bit(2)) {
      set_rewarded(from.rewarded());
    }
    if (from._has_bit(3)) {
      set_completed(from.completed());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgMissionState::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgMissionState::CopyFrom(const MsgMissionState& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgMissionState::IsInitialized() const {
  
  return true;
}

void MsgMissionState::Swap(MsgMissionState* other) {
  if (other != this) {
    std::swap(readytostart_, other->readytostart_);
    std::swap(available_, other->available_);
    std::swap(rewarded_, other->rewarded_);
    std::swap(completed_, other->completed_);
    params_.Swap(&other->params_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgMissionState::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgMissionState_descriptor_;
  metadata.reflection = MsgMissionState_reflection_;
  return metadata;
}

