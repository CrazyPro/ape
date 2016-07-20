// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RceUpdateStarsBookmarks.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* RceUpdateStarsBookmarks_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RceUpdateStarsBookmarks_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RceUpdateStarsBookmarks_2eproto() {
  protobuf_AddDesc_RceUpdateStarsBookmarks_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RceUpdateStarsBookmarks.proto");
  GOOGLE_CHECK(file != NULL);
  RceUpdateStarsBookmarks_descriptor_ = file->message_type(0);
  static const int RceUpdateStarsBookmarks_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceUpdateStarsBookmarks, planetid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceUpdateStarsBookmarks, coordx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceUpdateStarsBookmarks, starname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceUpdateStarsBookmarks, starnameusergenerated_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceUpdateStarsBookmarks, coordy_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceUpdateStarsBookmarks, startype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceUpdateStarsBookmarks, starid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceUpdateStarsBookmarks, action_),
  };
  RceUpdateStarsBookmarks_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RceUpdateStarsBookmarks_descriptor_,
      RceUpdateStarsBookmarks::default_instance_,
      RceUpdateStarsBookmarks_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceUpdateStarsBookmarks, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RceUpdateStarsBookmarks, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RceUpdateStarsBookmarks));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RceUpdateStarsBookmarks_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RceUpdateStarsBookmarks_descriptor_, &RceUpdateStarsBookmarks::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RceUpdateStarsBookmarks_2eproto() {
  delete RceUpdateStarsBookmarks::default_instance_;
  delete RceUpdateStarsBookmarks_reflection_;
}

void protobuf_AddDesc_RceUpdateStarsBookmarks_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\035RceUpdateStarsBookmarks.proto\"\256\001\n\027RceU"
    "pdateStarsBookmarks\022\020\n\010planetId\030\001 \001(\t\022\016\n"
    "\006coordX\030\002 \001(\005\022\020\n\010starName\030\003 \001(\t\022\035\n\025starN"
    "ameUserGenerated\030\004 \001(\t\022\016\n\006coordY\030\005 \001(\005\022\020"
    "\n\010starType\030\006 \001(\t\022\016\n\006starId\030\007 \001(\005\022\016\n\006acti"
    "on\030\010 \001(\t", 208);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RceUpdateStarsBookmarks.proto", &protobuf_RegisterTypes);
  RceUpdateStarsBookmarks::default_instance_ = new RceUpdateStarsBookmarks();
  RceUpdateStarsBookmarks::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RceUpdateStarsBookmarks_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RceUpdateStarsBookmarks_2eproto {
  StaticDescriptorInitializer_RceUpdateStarsBookmarks_2eproto() {
    protobuf_AddDesc_RceUpdateStarsBookmarks_2eproto();
  }
} static_descriptor_initializer_RceUpdateStarsBookmarks_2eproto_;


// ===================================================================

const ::std::string RceUpdateStarsBookmarks::_default_planetid_;
const ::std::string RceUpdateStarsBookmarks::_default_starname_;
const ::std::string RceUpdateStarsBookmarks::_default_starnameusergenerated_;
const ::std::string RceUpdateStarsBookmarks::_default_startype_;
const ::std::string RceUpdateStarsBookmarks::_default_action_;
#ifndef _MSC_VER
const int RceUpdateStarsBookmarks::kPlanetIdFieldNumber;
const int RceUpdateStarsBookmarks::kCoordXFieldNumber;
const int RceUpdateStarsBookmarks::kStarNameFieldNumber;
const int RceUpdateStarsBookmarks::kStarNameUserGeneratedFieldNumber;
const int RceUpdateStarsBookmarks::kCoordYFieldNumber;
const int RceUpdateStarsBookmarks::kStarTypeFieldNumber;
const int RceUpdateStarsBookmarks::kStarIdFieldNumber;
const int RceUpdateStarsBookmarks::kActionFieldNumber;
#endif  // !_MSC_VER

RceUpdateStarsBookmarks::RceUpdateStarsBookmarks() {
  SharedCtor();
}

void RceUpdateStarsBookmarks::InitAsDefaultInstance() {
}

RceUpdateStarsBookmarks::RceUpdateStarsBookmarks(const RceUpdateStarsBookmarks& from) {
  SharedCtor();
  MergeFrom(from);
}

void RceUpdateStarsBookmarks::SharedCtor() {
  _cached_size_ = 0;
  planetid_ = const_cast< ::std::string*>(&_default_planetid_);
  coordx_ = 0;
  starname_ = const_cast< ::std::string*>(&_default_starname_);
  starnameusergenerated_ = const_cast< ::std::string*>(&_default_starnameusergenerated_);
  coordy_ = 0;
  startype_ = const_cast< ::std::string*>(&_default_startype_);
  starid_ = 0;
  action_ = const_cast< ::std::string*>(&_default_action_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RceUpdateStarsBookmarks::~RceUpdateStarsBookmarks() {
  SharedDtor();
}

void RceUpdateStarsBookmarks::SharedDtor() {
  if (planetid_ != &_default_planetid_) {
    delete planetid_;
  }
  if (starname_ != &_default_starname_) {
    delete starname_;
  }
  if (starnameusergenerated_ != &_default_starnameusergenerated_) {
    delete starnameusergenerated_;
  }
  if (startype_ != &_default_startype_) {
    delete startype_;
  }
  if (action_ != &_default_action_) {
    delete action_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* RceUpdateStarsBookmarks::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RceUpdateStarsBookmarks_descriptor_;
}

const RceUpdateStarsBookmarks& RceUpdateStarsBookmarks::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RceUpdateStarsBookmarks_2eproto();  return *default_instance_;
}

RceUpdateStarsBookmarks* RceUpdateStarsBookmarks::default_instance_ = NULL;

RceUpdateStarsBookmarks* RceUpdateStarsBookmarks::New() const {
  return new RceUpdateStarsBookmarks;
}

void RceUpdateStarsBookmarks::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (planetid_ != &_default_planetid_) {
        planetid_->clear();
      }
    }
    coordx_ = 0;
    if (_has_bit(2)) {
      if (starname_ != &_default_starname_) {
        starname_->clear();
      }
    }
    if (_has_bit(3)) {
      if (starnameusergenerated_ != &_default_starnameusergenerated_) {
        starnameusergenerated_->clear();
      }
    }
    coordy_ = 0;
    if (_has_bit(5)) {
      if (startype_ != &_default_startype_) {
        startype_->clear();
      }
    }
    starid_ = 0;
    if (_has_bit(7)) {
      if (action_ != &_default_action_) {
        action_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RceUpdateStarsBookmarks::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_coordX;
        break;
      }
      
      // optional int32 coordX = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_coordX:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &coordx_));
        _set_bit(1);
        if (input->ExpectTag(26)) goto parse_starName;
        break;
      }
      
      // optional string starName = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_starName:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_starname()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->starname().data(), this->starname().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(34)) goto parse_starNameUserGenerated;
        break;
      }
      
      // optional string starNameUserGenerated = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_starNameUserGenerated:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_starnameusergenerated()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->starnameusergenerated().data(), this->starnameusergenerated().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(40)) goto parse_coordY;
        break;
      }
      
      // optional int32 coordY = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_coordY:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &coordy_));
        _set_bit(4);
        if (input->ExpectTag(50)) goto parse_starType;
        break;
      }
      
      // optional string starType = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_starType:
        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
              input, this->mutable_startype()));
        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
          this->startype().data(), this->startype().length(),
          ::google::protobuf::internal::WireFormat::PARSE);
        if (input->ExpectTag(56)) goto parse_starId;
        break;
      }
      
      // optional int32 starId = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_starId:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &starid_));
        _set_bit(6);
        if (input->ExpectTag(66)) goto parse_action;
        break;
      }
      
      // optional string action = 8;
      case 8: {
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

void RceUpdateStarsBookmarks::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    RceUpdateStarsBookmarks::SerializeWithCachedSizesToArray(raw_buffer);
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
  
  // optional int32 coordX = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->coordx(), output);
  }
  
  // optional string starName = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->starname().data(), this->starname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->starname(), output);
  }
  
  // optional string starNameUserGenerated = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->starnameusergenerated().data(), this->starnameusergenerated().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->starnameusergenerated(), output);
  }
  
  // optional int32 coordY = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->coordy(), output);
  }
  
  // optional string starType = 6;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->startype().data(), this->startype().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->startype(), output);
  }
  
  // optional int32 starId = 7;
  if (_has_bit(6)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->starid(), output);
  }
  
  // optional string action = 8;
  if (_has_bit(7)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->action().data(), this->action().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      8, this->action(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RceUpdateStarsBookmarks::SerializeWithCachedSizesToArray(
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
  
  // optional int32 coordX = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->coordx(), target);
  }
  
  // optional string starName = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->starname().data(), this->starname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->starname(), target);
  }
  
  // optional string starNameUserGenerated = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->starnameusergenerated().data(), this->starnameusergenerated().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->starnameusergenerated(), target);
  }
  
  // optional int32 coordY = 5;
  if (_has_bit(4)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->coordy(), target);
  }
  
  // optional string starType = 6;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->startype().data(), this->startype().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->startype(), target);
  }
  
  // optional int32 starId = 7;
  if (_has_bit(6)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->starid(), target);
  }
  
  // optional string action = 8;
  if (_has_bit(7)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->action().data(), this->action().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->action(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RceUpdateStarsBookmarks::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string planetId = 1;
    if (has_planetid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->planetid());
    }
    
    // optional int32 coordX = 2;
    if (has_coordx()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->coordx());
    }
    
    // optional string starName = 3;
    if (has_starname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->starname());
    }
    
    // optional string starNameUserGenerated = 4;
    if (has_starnameusergenerated()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->starnameusergenerated());
    }
    
    // optional int32 coordY = 5;
    if (has_coordy()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->coordy());
    }
    
    // optional string starType = 6;
    if (has_startype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->startype());
    }
    
    // optional int32 starId = 7;
    if (has_starid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->starid());
    }
    
    // optional string action = 8;
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

void RceUpdateStarsBookmarks::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RceUpdateStarsBookmarks* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RceUpdateStarsBookmarks*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RceUpdateStarsBookmarks::MergeFrom(const RceUpdateStarsBookmarks& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_planetid(from.planetid());
    }
    if (from._has_bit(1)) {
      set_coordx(from.coordx());
    }
    if (from._has_bit(2)) {
      set_starname(from.starname());
    }
    if (from._has_bit(3)) {
      set_starnameusergenerated(from.starnameusergenerated());
    }
    if (from._has_bit(4)) {
      set_coordy(from.coordy());
    }
    if (from._has_bit(5)) {
      set_startype(from.startype());
    }
    if (from._has_bit(6)) {
      set_starid(from.starid());
    }
    if (from._has_bit(7)) {
      set_action(from.action());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RceUpdateStarsBookmarks::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RceUpdateStarsBookmarks::CopyFrom(const RceUpdateStarsBookmarks& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RceUpdateStarsBookmarks::IsInitialized() const {
  
  return true;
}

void RceUpdateStarsBookmarks::Swap(RceUpdateStarsBookmarks* other) {
  if (other != this) {
    std::swap(planetid_, other->planetid_);
    std::swap(coordx_, other->coordx_);
    std::swap(starname_, other->starname_);
    std::swap(starnameusergenerated_, other->starnameusergenerated_);
    std::swap(coordy_, other->coordy_);
    std::swap(startype_, other->startype_);
    std::swap(starid_, other->starid_);
    std::swap(action_, other->action_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RceUpdateStarsBookmarks::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RceUpdateStarsBookmarks_descriptor_;
  metadata.reflection = RceUpdateStarsBookmarks_reflection_;
  return metadata;
}
