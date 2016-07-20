// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_RceQueryCheckAndLockAccountIfPossible_2eproto__INCLUDED
#define PROTOBUF_RceQueryCheckAndLockAccountIfPossible_2eproto__INCLUDED

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
void  protobuf_AddDesc_RceQueryCheckAndLockAccountIfPossible_2eproto();
void protobuf_AssignDesc_RceQueryCheckAndLockAccountIfPossible_2eproto();
void protobuf_ShutdownFile_RceQueryCheckAndLockAccountIfPossible_2eproto();

class RceQueryCheckAndLockAccountIfPossible;
class HangarsUnitsInfo;

// ===================================================================

class RceQueryCheckAndLockAccountIfPossible : public ::google::protobuf::Message {
 public:
  RceQueryCheckAndLockAccountIfPossible();
  virtual ~RceQueryCheckAndLockAccountIfPossible();
  
  RceQueryCheckAndLockAccountIfPossible(const RceQueryCheckAndLockAccountIfPossible& from);
  
  inline RceQueryCheckAndLockAccountIfPossible& operator=(const RceQueryCheckAndLockAccountIfPossible& from) {
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
  static const RceQueryCheckAndLockAccountIfPossible& default_instance();
  void Swap(RceQueryCheckAndLockAccountIfPossible* other);
  
  // implements Message ----------------------------------------------
  
  RceQueryCheckAndLockAccountIfPossible* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RceQueryCheckAndLockAccountIfPossible& from);
  void MergeFrom(const RceQueryCheckAndLockAccountIfPossible& from);
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
  
  // optional .HangarsUnitsInfo hangarsUnitsInfo = 1;
  inline bool has_hangarsunitsinfo() const;
  inline void clear_hangarsunitsinfo();
  static const int kHangarsUnitsInfoFieldNumber = 1;
  inline const ::HangarsUnitsInfo& hangarsunitsinfo() const;
  inline ::HangarsUnitsInfo* mutable_hangarsunitsinfo();
  
  // optional string planetId = 2;
  inline bool has_planetid() const;
  inline void clear_planetid();
  static const int kPlanetIdFieldNumber = 2;
  inline const ::std::string& planetid() const;
  inline void set_planetid(const ::std::string& value);
  inline void set_planetid(const char* value);
  inline void set_planetid(const char* value, size_t size);
  inline ::std::string* mutable_planetid();
  
  // optional int32 applyLock = 3;
  inline bool has_applylock() const;
  inline void clear_applylock();
  static const int kApplyLockFieldNumber = 3;
  inline ::google::protobuf::int32 applylock() const;
  inline void set_applylock(::google::protobuf::int32 value);
  
  // optional string targetAccountId = 4;
  inline bool has_targetaccountid() const;
  inline void clear_targetaccountid();
  static const int kTargetAccountIdFieldNumber = 4;
  inline const ::std::string& targetaccountid() const;
  inline void set_targetaccountid(const ::std::string& value);
  inline void set_targetaccountid(const char* value);
  inline void set_targetaccountid(const char* value, size_t size);
  inline ::std::string* mutable_targetaccountid();
  
  // optional int32 isAllianceWar = 5;
  inline bool has_isalliancewar() const;
  inline void clear_isalliancewar();
  static const int kIsAllianceWarFieldNumber = 5;
  inline ::google::protobuf::int32 isalliancewar() const;
  inline void set_isalliancewar(::google::protobuf::int32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::HangarsUnitsInfo* hangarsunitsinfo_;
  ::std::string* planetid_;
  static const ::std::string _default_planetid_;
  ::google::protobuf::int32 applylock_;
  ::std::string* targetaccountid_;
  static const ::std::string _default_targetaccountid_;
  ::google::protobuf::int32 isalliancewar_;
  friend void  protobuf_AddDesc_RceQueryCheckAndLockAccountIfPossible_2eproto();
  friend void protobuf_AssignDesc_RceQueryCheckAndLockAccountIfPossible_2eproto();
  friend void protobuf_ShutdownFile_RceQueryCheckAndLockAccountIfPossible_2eproto();
  
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
  static RceQueryCheckAndLockAccountIfPossible* default_instance_;
};
// -------------------------------------------------------------------

class HangarsUnitsInfo : public ::google::protobuf::Message {
 public:
  HangarsUnitsInfo();
  virtual ~HangarsUnitsInfo();
  
  HangarsUnitsInfo(const HangarsUnitsInfo& from);
  
  inline HangarsUnitsInfo& operator=(const HangarsUnitsInfo& from) {
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
  static const HangarsUnitsInfo& default_instance();
  void Swap(HangarsUnitsInfo* other);
  
  // implements Message ----------------------------------------------
  
  HangarsUnitsInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HangarsUnitsInfo& from);
  void MergeFrom(const HangarsUnitsInfo& from);
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
  
  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);
  
  // optional string name1 = 2;
  inline bool has_name1() const;
  inline void clear_name1();
  static const int kName1FieldNumber = 2;
  inline const ::std::string& name1() const;
  inline void set_name1(const ::std::string& value);
  inline void set_name1(const char* value);
  inline void set_name1(const char* value, size_t size);
  inline ::std::string* mutable_name1();
  
  // optional string name2 = 3;
  inline bool has_name2() const;
  inline void clear_name2();
  static const int kName2FieldNumber = 3;
  inline const ::std::string& name2() const;
  inline void set_name2(const ::std::string& value);
  inline void set_name2(const char* value);
  inline void set_name2(const char* value, size_t size);
  inline ::std::string* mutable_name2();
  
  // optional string name3 = 4;
  inline bool has_name3() const;
  inline void clear_name3();
  static const int kName3FieldNumber = 4;
  inline const ::std::string& name3() const;
  inline void set_name3(const ::std::string& value);
  inline void set_name3(const char* value);
  inline void set_name3(const char* value, size_t size);
  inline ::std::string* mutable_name3();
  
  // optional string name4 = 5;
  inline bool has_name4() const;
  inline void clear_name4();
  static const int kName4FieldNumber = 5;
  inline const ::std::string& name4() const;
  inline void set_name4(const ::std::string& value);
  inline void set_name4(const char* value);
  inline void set_name4(const char* value, size_t size);
  inline ::std::string* mutable_name4();
  
  // optional string name5 = 6;
  inline bool has_name5() const;
  inline void clear_name5();
  static const int kName5FieldNumber = 6;
  inline const ::std::string& name5() const;
  inline void set_name5(const ::std::string& value);
  inline void set_name5(const char* value);
  inline void set_name5(const char* value, size_t size);
  inline ::std::string* mutable_name5();
  
  // optional string name6 = 7;
  inline bool has_name6() const;
  inline void clear_name6();
  static const int kName6FieldNumber = 7;
  inline const ::std::string& name6() const;
  inline void set_name6(const ::std::string& value);
  inline void set_name6(const char* value);
  inline void set_name6(const char* value, size_t size);
  inline ::std::string* mutable_name6();
  
  // optional int32 value1 = 8;
  inline bool has_value1() const;
  inline void clear_value1();
  static const int kValue1FieldNumber = 8;
  inline ::google::protobuf::int32 value1() const;
  inline void set_value1(::google::protobuf::int32 value);
  
  // optional int32 value2 = 9;
  inline bool has_value2() const;
  inline void clear_value2();
  static const int kValue2FieldNumber = 9;
  inline ::google::protobuf::int32 value2() const;
  inline void set_value2(::google::protobuf::int32 value);
  
  // optional int32 value3 = 10;
  inline bool has_value3() const;
  inline void clear_value3();
  static const int kValue3FieldNumber = 10;
  inline ::google::protobuf::int32 value3() const;
  inline void set_value3(::google::protobuf::int32 value);
  
  // optional int32 value4 = 11;
  inline bool has_value4() const;
  inline void clear_value4();
  static const int kValue4FieldNumber = 11;
  inline ::google::protobuf::int32 value4() const;
  inline void set_value4(::google::protobuf::int32 value);
  
  // optional int32 value5 = 12;
  inline bool has_value5() const;
  inline void clear_value5();
  static const int kValue5FieldNumber = 12;
  inline ::google::protobuf::int32 value5() const;
  inline void set_value5(::google::protobuf::int32 value);
  
  // optional int32 value6 = 13;
  inline bool has_value6() const;
  inline void clear_value6();
  static const int kValue6FieldNumber = 13;
  inline ::google::protobuf::int32 value6() const;
  inline void set_value6(::google::protobuf::int32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 id_;
  ::std::string* name1_;
  static const ::std::string _default_name1_;
  ::std::string* name2_;
  static const ::std::string _default_name2_;
  ::std::string* name3_;
  static const ::std::string _default_name3_;
  ::std::string* name4_;
  static const ::std::string _default_name4_;
  ::std::string* name5_;
  static const ::std::string _default_name5_;
  ::std::string* name6_;
  static const ::std::string _default_name6_;
  ::google::protobuf::int32 value1_;
  ::google::protobuf::int32 value2_;
  ::google::protobuf::int32 value3_;
  ::google::protobuf::int32 value4_;
  ::google::protobuf::int32 value5_;
  ::google::protobuf::int32 value6_;
  friend void  protobuf_AddDesc_RceQueryCheckAndLockAccountIfPossible_2eproto();
  friend void protobuf_AssignDesc_RceQueryCheckAndLockAccountIfPossible_2eproto();
  friend void protobuf_ShutdownFile_RceQueryCheckAndLockAccountIfPossible_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(13 + 31) / 32];
  
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
  static HangarsUnitsInfo* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// RceQueryCheckAndLockAccountIfPossible

// optional .HangarsUnitsInfo hangarsUnitsInfo = 1;
inline bool RceQueryCheckAndLockAccountIfPossible::has_hangarsunitsinfo() const {
  return _has_bit(0);
}
inline void RceQueryCheckAndLockAccountIfPossible::clear_hangarsunitsinfo() {
  if (hangarsunitsinfo_ != NULL) hangarsunitsinfo_->::HangarsUnitsInfo::Clear();
  _clear_bit(0);
}
inline const ::HangarsUnitsInfo& RceQueryCheckAndLockAccountIfPossible::hangarsunitsinfo() const {
  return hangarsunitsinfo_ != NULL ? *hangarsunitsinfo_ : *default_instance_->hangarsunitsinfo_;
}
inline ::HangarsUnitsInfo* RceQueryCheckAndLockAccountIfPossible::mutable_hangarsunitsinfo() {
  _set_bit(0);
  if (hangarsunitsinfo_ == NULL) hangarsunitsinfo_ = new ::HangarsUnitsInfo;
  return hangarsunitsinfo_;
}

// optional string planetId = 2;
inline bool RceQueryCheckAndLockAccountIfPossible::has_planetid() const {
  return _has_bit(1);
}
inline void RceQueryCheckAndLockAccountIfPossible::clear_planetid() {
  if (planetid_ != &_default_planetid_) {
    planetid_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& RceQueryCheckAndLockAccountIfPossible::planetid() const {
  return *planetid_;
}
inline void RceQueryCheckAndLockAccountIfPossible::set_planetid(const ::std::string& value) {
  _set_bit(1);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(value);
}
inline void RceQueryCheckAndLockAccountIfPossible::set_planetid(const char* value) {
  _set_bit(1);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(value);
}
inline void RceQueryCheckAndLockAccountIfPossible::set_planetid(const char* value, size_t size) {
  _set_bit(1);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceQueryCheckAndLockAccountIfPossible::mutable_planetid() {
  _set_bit(1);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  return planetid_;
}

// optional int32 applyLock = 3;
inline bool RceQueryCheckAndLockAccountIfPossible::has_applylock() const {
  return _has_bit(2);
}
inline void RceQueryCheckAndLockAccountIfPossible::clear_applylock() {
  applylock_ = 0;
  _clear_bit(2);
}
inline ::google::protobuf::int32 RceQueryCheckAndLockAccountIfPossible::applylock() const {
  return applylock_;
}
inline void RceQueryCheckAndLockAccountIfPossible::set_applylock(::google::protobuf::int32 value) {
  _set_bit(2);
  applylock_ = value;
}

// optional string targetAccountId = 4;
inline bool RceQueryCheckAndLockAccountIfPossible::has_targetaccountid() const {
  return _has_bit(3);
}
inline void RceQueryCheckAndLockAccountIfPossible::clear_targetaccountid() {
  if (targetaccountid_ != &_default_targetaccountid_) {
    targetaccountid_->clear();
  }
  _clear_bit(3);
}
inline const ::std::string& RceQueryCheckAndLockAccountIfPossible::targetaccountid() const {
  return *targetaccountid_;
}
inline void RceQueryCheckAndLockAccountIfPossible::set_targetaccountid(const ::std::string& value) {
  _set_bit(3);
  if (targetaccountid_ == &_default_targetaccountid_) {
    targetaccountid_ = new ::std::string;
  }
  targetaccountid_->assign(value);
}
inline void RceQueryCheckAndLockAccountIfPossible::set_targetaccountid(const char* value) {
  _set_bit(3);
  if (targetaccountid_ == &_default_targetaccountid_) {
    targetaccountid_ = new ::std::string;
  }
  targetaccountid_->assign(value);
}
inline void RceQueryCheckAndLockAccountIfPossible::set_targetaccountid(const char* value, size_t size) {
  _set_bit(3);
  if (targetaccountid_ == &_default_targetaccountid_) {
    targetaccountid_ = new ::std::string;
  }
  targetaccountid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceQueryCheckAndLockAccountIfPossible::mutable_targetaccountid() {
  _set_bit(3);
  if (targetaccountid_ == &_default_targetaccountid_) {
    targetaccountid_ = new ::std::string;
  }
  return targetaccountid_;
}

// optional int32 isAllianceWar = 5;
inline bool RceQueryCheckAndLockAccountIfPossible::has_isalliancewar() const {
  return _has_bit(4);
}
inline void RceQueryCheckAndLockAccountIfPossible::clear_isalliancewar() {
  isalliancewar_ = 0;
  _clear_bit(4);
}
inline ::google::protobuf::int32 RceQueryCheckAndLockAccountIfPossible::isalliancewar() const {
  return isalliancewar_;
}
inline void RceQueryCheckAndLockAccountIfPossible::set_isalliancewar(::google::protobuf::int32 value) {
  _set_bit(4);
  isalliancewar_ = value;
}

// -------------------------------------------------------------------

// HangarsUnitsInfo

// optional int32 id = 1;
inline bool HangarsUnitsInfo::has_id() const {
  return _has_bit(0);
}
inline void HangarsUnitsInfo::clear_id() {
  id_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 HangarsUnitsInfo::id() const {
  return id_;
}
inline void HangarsUnitsInfo::set_id(::google::protobuf::int32 value) {
  _set_bit(0);
  id_ = value;
}

// optional string name1 = 2;
inline bool HangarsUnitsInfo::has_name1() const {
  return _has_bit(1);
}
inline void HangarsUnitsInfo::clear_name1() {
  if (name1_ != &_default_name1_) {
    name1_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& HangarsUnitsInfo::name1() const {
  return *name1_;
}
inline void HangarsUnitsInfo::set_name1(const ::std::string& value) {
  _set_bit(1);
  if (name1_ == &_default_name1_) {
    name1_ = new ::std::string;
  }
  name1_->assign(value);
}
inline void HangarsUnitsInfo::set_name1(const char* value) {
  _set_bit(1);
  if (name1_ == &_default_name1_) {
    name1_ = new ::std::string;
  }
  name1_->assign(value);
}
inline void HangarsUnitsInfo::set_name1(const char* value, size_t size) {
  _set_bit(1);
  if (name1_ == &_default_name1_) {
    name1_ = new ::std::string;
  }
  name1_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HangarsUnitsInfo::mutable_name1() {
  _set_bit(1);
  if (name1_ == &_default_name1_) {
    name1_ = new ::std::string;
  }
  return name1_;
}

// optional string name2 = 3;
inline bool HangarsUnitsInfo::has_name2() const {
  return _has_bit(2);
}
inline void HangarsUnitsInfo::clear_name2() {
  if (name2_ != &_default_name2_) {
    name2_->clear();
  }
  _clear_bit(2);
}
inline const ::std::string& HangarsUnitsInfo::name2() const {
  return *name2_;
}
inline void HangarsUnitsInfo::set_name2(const ::std::string& value) {
  _set_bit(2);
  if (name2_ == &_default_name2_) {
    name2_ = new ::std::string;
  }
  name2_->assign(value);
}
inline void HangarsUnitsInfo::set_name2(const char* value) {
  _set_bit(2);
  if (name2_ == &_default_name2_) {
    name2_ = new ::std::string;
  }
  name2_->assign(value);
}
inline void HangarsUnitsInfo::set_name2(const char* value, size_t size) {
  _set_bit(2);
  if (name2_ == &_default_name2_) {
    name2_ = new ::std::string;
  }
  name2_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HangarsUnitsInfo::mutable_name2() {
  _set_bit(2);
  if (name2_ == &_default_name2_) {
    name2_ = new ::std::string;
  }
  return name2_;
}

// optional string name3 = 4;
inline bool HangarsUnitsInfo::has_name3() const {
  return _has_bit(3);
}
inline void HangarsUnitsInfo::clear_name3() {
  if (name3_ != &_default_name3_) {
    name3_->clear();
  }
  _clear_bit(3);
}
inline const ::std::string& HangarsUnitsInfo::name3() const {
  return *name3_;
}
inline void HangarsUnitsInfo::set_name3(const ::std::string& value) {
  _set_bit(3);
  if (name3_ == &_default_name3_) {
    name3_ = new ::std::string;
  }
  name3_->assign(value);
}
inline void HangarsUnitsInfo::set_name3(const char* value) {
  _set_bit(3);
  if (name3_ == &_default_name3_) {
    name3_ = new ::std::string;
  }
  name3_->assign(value);
}
inline void HangarsUnitsInfo::set_name3(const char* value, size_t size) {
  _set_bit(3);
  if (name3_ == &_default_name3_) {
    name3_ = new ::std::string;
  }
  name3_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HangarsUnitsInfo::mutable_name3() {
  _set_bit(3);
  if (name3_ == &_default_name3_) {
    name3_ = new ::std::string;
  }
  return name3_;
}

// optional string name4 = 5;
inline bool HangarsUnitsInfo::has_name4() const {
  return _has_bit(4);
}
inline void HangarsUnitsInfo::clear_name4() {
  if (name4_ != &_default_name4_) {
    name4_->clear();
  }
  _clear_bit(4);
}
inline const ::std::string& HangarsUnitsInfo::name4() const {
  return *name4_;
}
inline void HangarsUnitsInfo::set_name4(const ::std::string& value) {
  _set_bit(4);
  if (name4_ == &_default_name4_) {
    name4_ = new ::std::string;
  }
  name4_->assign(value);
}
inline void HangarsUnitsInfo::set_name4(const char* value) {
  _set_bit(4);
  if (name4_ == &_default_name4_) {
    name4_ = new ::std::string;
  }
  name4_->assign(value);
}
inline void HangarsUnitsInfo::set_name4(const char* value, size_t size) {
  _set_bit(4);
  if (name4_ == &_default_name4_) {
    name4_ = new ::std::string;
  }
  name4_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HangarsUnitsInfo::mutable_name4() {
  _set_bit(4);
  if (name4_ == &_default_name4_) {
    name4_ = new ::std::string;
  }
  return name4_;
}

// optional string name5 = 6;
inline bool HangarsUnitsInfo::has_name5() const {
  return _has_bit(5);
}
inline void HangarsUnitsInfo::clear_name5() {
  if (name5_ != &_default_name5_) {
    name5_->clear();
  }
  _clear_bit(5);
}
inline const ::std::string& HangarsUnitsInfo::name5() const {
  return *name5_;
}
inline void HangarsUnitsInfo::set_name5(const ::std::string& value) {
  _set_bit(5);
  if (name5_ == &_default_name5_) {
    name5_ = new ::std::string;
  }
  name5_->assign(value);
}
inline void HangarsUnitsInfo::set_name5(const char* value) {
  _set_bit(5);
  if (name5_ == &_default_name5_) {
    name5_ = new ::std::string;
  }
  name5_->assign(value);
}
inline void HangarsUnitsInfo::set_name5(const char* value, size_t size) {
  _set_bit(5);
  if (name5_ == &_default_name5_) {
    name5_ = new ::std::string;
  }
  name5_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HangarsUnitsInfo::mutable_name5() {
  _set_bit(5);
  if (name5_ == &_default_name5_) {
    name5_ = new ::std::string;
  }
  return name5_;
}

// optional string name6 = 7;
inline bool HangarsUnitsInfo::has_name6() const {
  return _has_bit(6);
}
inline void HangarsUnitsInfo::clear_name6() {
  if (name6_ != &_default_name6_) {
    name6_->clear();
  }
  _clear_bit(6);
}
inline const ::std::string& HangarsUnitsInfo::name6() const {
  return *name6_;
}
inline void HangarsUnitsInfo::set_name6(const ::std::string& value) {
  _set_bit(6);
  if (name6_ == &_default_name6_) {
    name6_ = new ::std::string;
  }
  name6_->assign(value);
}
inline void HangarsUnitsInfo::set_name6(const char* value) {
  _set_bit(6);
  if (name6_ == &_default_name6_) {
    name6_ = new ::std::string;
  }
  name6_->assign(value);
}
inline void HangarsUnitsInfo::set_name6(const char* value, size_t size) {
  _set_bit(6);
  if (name6_ == &_default_name6_) {
    name6_ = new ::std::string;
  }
  name6_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HangarsUnitsInfo::mutable_name6() {
  _set_bit(6);
  if (name6_ == &_default_name6_) {
    name6_ = new ::std::string;
  }
  return name6_;
}

// optional int32 value1 = 8;
inline bool HangarsUnitsInfo::has_value1() const {
  return _has_bit(7);
}
inline void HangarsUnitsInfo::clear_value1() {
  value1_ = 0;
  _clear_bit(7);
}
inline ::google::protobuf::int32 HangarsUnitsInfo::value1() const {
  return value1_;
}
inline void HangarsUnitsInfo::set_value1(::google::protobuf::int32 value) {
  _set_bit(7);
  value1_ = value;
}

// optional int32 value2 = 9;
inline bool HangarsUnitsInfo::has_value2() const {
  return _has_bit(8);
}
inline void HangarsUnitsInfo::clear_value2() {
  value2_ = 0;
  _clear_bit(8);
}
inline ::google::protobuf::int32 HangarsUnitsInfo::value2() const {
  return value2_;
}
inline void HangarsUnitsInfo::set_value2(::google::protobuf::int32 value) {
  _set_bit(8);
  value2_ = value;
}

// optional int32 value3 = 10;
inline bool HangarsUnitsInfo::has_value3() const {
  return _has_bit(9);
}
inline void HangarsUnitsInfo::clear_value3() {
  value3_ = 0;
  _clear_bit(9);
}
inline ::google::protobuf::int32 HangarsUnitsInfo::value3() const {
  return value3_;
}
inline void HangarsUnitsInfo::set_value3(::google::protobuf::int32 value) {
  _set_bit(9);
  value3_ = value;
}

// optional int32 value4 = 11;
inline bool HangarsUnitsInfo::has_value4() const {
  return _has_bit(10);
}
inline void HangarsUnitsInfo::clear_value4() {
  value4_ = 0;
  _clear_bit(10);
}
inline ::google::protobuf::int32 HangarsUnitsInfo::value4() const {
  return value4_;
}
inline void HangarsUnitsInfo::set_value4(::google::protobuf::int32 value) {
  _set_bit(10);
  value4_ = value;
}

// optional int32 value5 = 12;
inline bool HangarsUnitsInfo::has_value5() const {
  return _has_bit(11);
}
inline void HangarsUnitsInfo::clear_value5() {
  value5_ = 0;
  _clear_bit(11);
}
inline ::google::protobuf::int32 HangarsUnitsInfo::value5() const {
  return value5_;
}
inline void HangarsUnitsInfo::set_value5(::google::protobuf::int32 value) {
  _set_bit(11);
  value5_ = value;
}

// optional int32 value6 = 13;
inline bool HangarsUnitsInfo::has_value6() const {
  return _has_bit(12);
}
inline void HangarsUnitsInfo::clear_value6() {
  value6_ = 0;
  _clear_bit(12);
}
inline ::google::protobuf::int32 HangarsUnitsInfo::value6() const {
  return value6_;
}
inline void HangarsUnitsInfo::set_value6(::google::protobuf::int32 value) {
  _set_bit(12);
  value6_ = value;
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_RceQueryCheckAndLockAccountIfPossible_2eproto__INCLUDED