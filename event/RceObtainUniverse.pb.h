// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_RceObtainUniverse_2eproto__INCLUDED
#define PROTOBUF_RceObtainUniverse_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_RceObtainUniverse_2eproto();
void protobuf_AssignDesc_RceObtainUniverse_2eproto();
void protobuf_ShutdownFile_RceObtainUniverse_2eproto();

class RceObtainUniverse;

// ===================================================================

class RceObtainUniverse : public ::google::protobuf::Message {
 public:
  RceObtainUniverse();
  virtual ~RceObtainUniverse();
  
  RceObtainUniverse(const RceObtainUniverse& from);
  
  inline RceObtainUniverse& operator=(const RceObtainUniverse& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const RceObtainUniverse& default_instance();
  void Swap(RceObtainUniverse* other);
  
  // implements Message ----------------------------------------------
  
  RceObtainUniverse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RceObtainUniverse& from);
  void MergeFrom(const RceObtainUniverse& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional string targetAccountId = 1;
  inline bool has_targetaccountid() const;
  inline void clear_targetaccountid();
  static const int kTargetAccountIdFieldNumber = 1;
  inline const ::std::string& targetaccountid() const;
  inline void set_targetaccountid(const ::std::string& value);
  inline void set_targetaccountid(const char* value);
  inline void set_targetaccountid(const char* value, size_t size);
  inline ::std::string* mutable_targetaccountid();
  
  // optional bool firstRequest = 2;
  inline bool has_firstrequest() const;
  inline void clear_firstrequest();
  static const int kFirstRequestFieldNumber = 2;
  inline bool firstrequest() const;
  inline void set_firstrequest(bool value);
  
  // optional int32 planetId = 3;
  inline bool has_planetid() const;
  inline void clear_planetid();
  static const int kPlanetIdFieldNumber = 3;
  inline ::google::protobuf::int32 planetid() const;
  inline void set_planetid(::google::protobuf::int32 value);
  
  // optional int32 attack = 4;
  inline bool has_attack() const;
  inline void clear_attack();
  static const int kAttackFieldNumber = 4;
  inline ::google::protobuf::int32 attack() const;
  inline void set_attack(::google::protobuf::int32 value);
  
  // optional string targetAdvisorSku = 5;
  inline bool has_targetadvisorsku() const;
  inline void clear_targetadvisorsku();
  static const int kTargetAdvisorSkuFieldNumber = 5;
  inline const ::std::string& targetadvisorsku() const;
  inline void set_targetadvisorsku(const ::std::string& value);
  inline void set_targetadvisorsku(const char* value);
  inline void set_targetadvisorsku(const char* value, size_t size);
  inline ::std::string* mutable_targetadvisorsku();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* targetaccountid_;
  static const ::std::string _default_targetaccountid_;
  bool firstrequest_;
  ::google::protobuf::int32 planetid_;
  ::google::protobuf::int32 attack_;
  ::std::string* targetadvisorsku_;
  static const ::std::string _default_targetadvisorsku_;
  friend void  protobuf_AddDesc_RceObtainUniverse_2eproto();
  friend void protobuf_AssignDesc_RceObtainUniverse_2eproto();
  friend void protobuf_ShutdownFile_RceObtainUniverse_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static RceObtainUniverse* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// RceObtainUniverse

// optional string targetAccountId = 1;
inline bool RceObtainUniverse::has_targetaccountid() const {
  return _has_bit(0);
}
inline void RceObtainUniverse::clear_targetaccountid() {
  if (targetaccountid_ != &_default_targetaccountid_) {
    targetaccountid_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& RceObtainUniverse::targetaccountid() const {
  return *targetaccountid_;
}
inline void RceObtainUniverse::set_targetaccountid(const ::std::string& value) {
  _set_bit(0);
  if (targetaccountid_ == &_default_targetaccountid_) {
    targetaccountid_ = new ::std::string;
  }
  targetaccountid_->assign(value);
}
inline void RceObtainUniverse::set_targetaccountid(const char* value) {
  _set_bit(0);
  if (targetaccountid_ == &_default_targetaccountid_) {
    targetaccountid_ = new ::std::string;
  }
  targetaccountid_->assign(value);
}
inline void RceObtainUniverse::set_targetaccountid(const char* value, size_t size) {
  _set_bit(0);
  if (targetaccountid_ == &_default_targetaccountid_) {
    targetaccountid_ = new ::std::string;
  }
  targetaccountid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceObtainUniverse::mutable_targetaccountid() {
  _set_bit(0);
  if (targetaccountid_ == &_default_targetaccountid_) {
    targetaccountid_ = new ::std::string;
  }
  return targetaccountid_;
}

// optional bool firstRequest = 2;
inline bool RceObtainUniverse::has_firstrequest() const {
  return _has_bit(1);
}
inline void RceObtainUniverse::clear_firstrequest() {
  firstrequest_ = false;
  _clear_bit(1);
}
inline bool RceObtainUniverse::firstrequest() const {
  return firstrequest_;
}
inline void RceObtainUniverse::set_firstrequest(bool value) {
  _set_bit(1);
  firstrequest_ = value;
}

// optional int32 planetId = 3;
inline bool RceObtainUniverse::has_planetid() const {
  return _has_bit(2);
}
inline void RceObtainUniverse::clear_planetid() {
  planetid_ = 0;
  _clear_bit(2);
}
inline ::google::protobuf::int32 RceObtainUniverse::planetid() const {
  return planetid_;
}
inline void RceObtainUniverse::set_planetid(::google::protobuf::int32 value) {
  _set_bit(2);
  planetid_ = value;
}

// optional int32 attack = 4;
inline bool RceObtainUniverse::has_attack() const {
  return _has_bit(3);
}
inline void RceObtainUniverse::clear_attack() {
  attack_ = 0;
  _clear_bit(3);
}
inline ::google::protobuf::int32 RceObtainUniverse::attack() const {
  return attack_;
}
inline void RceObtainUniverse::set_attack(::google::protobuf::int32 value) {
  _set_bit(3);
  attack_ = value;
}

// optional string targetAdvisorSku = 5;
inline bool RceObtainUniverse::has_targetadvisorsku() const {
  return _has_bit(4);
}
inline void RceObtainUniverse::clear_targetadvisorsku() {
  if (targetadvisorsku_ != &_default_targetadvisorsku_) {
    targetadvisorsku_->clear();
  }
  _clear_bit(4);
}
inline const ::std::string& RceObtainUniverse::targetadvisorsku() const {
  return *targetadvisorsku_;
}
inline void RceObtainUniverse::set_targetadvisorsku(const ::std::string& value) {
  _set_bit(4);
  if (targetadvisorsku_ == &_default_targetadvisorsku_) {
    targetadvisorsku_ = new ::std::string;
  }
  targetadvisorsku_->assign(value);
}
inline void RceObtainUniverse::set_targetadvisorsku(const char* value) {
  _set_bit(4);
  if (targetadvisorsku_ == &_default_targetadvisorsku_) {
    targetadvisorsku_ = new ::std::string;
  }
  targetadvisorsku_->assign(value);
}
inline void RceObtainUniverse::set_targetadvisorsku(const char* value, size_t size) {
  _set_bit(4);
  if (targetadvisorsku_ == &_default_targetadvisorsku_) {
    targetadvisorsku_ = new ::std::string;
  }
  targetadvisorsku_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceObtainUniverse::mutable_targetadvisorsku() {
  _set_bit(4);
  if (targetadvisorsku_ == &_default_targetadvisorsku_) {
    targetadvisorsku_ = new ::std::string;
  }
  return targetadvisorsku_;
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_RceObtainUniverse_2eproto__INCLUDED
