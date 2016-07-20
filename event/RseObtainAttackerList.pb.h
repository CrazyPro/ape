// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_RseObtainAttackerList_2eproto__INCLUDED
#define PROTOBUF_RseObtainAttackerList_2eproto__INCLUDED

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
void  protobuf_AddDesc_RseObtainAttackerList_2eproto();
void protobuf_AssignDesc_RseObtainAttackerList_2eproto();
void protobuf_ShutdownFile_RseObtainAttackerList_2eproto();

class MsgAttacker;
class RseObtainAttackerList;

// ===================================================================

class MsgAttacker : public ::google::protobuf::Message {
 public:
  MsgAttacker();
  virtual ~MsgAttacker();
  
  MsgAttacker(const MsgAttacker& from);
  
  inline MsgAttacker& operator=(const MsgAttacker& from) {
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
  static const MsgAttacker& default_instance();
  void Swap(MsgAttacker* other);
  
  // implements Message ----------------------------------------------
  
  MsgAttacker* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgAttacker& from);
  void MergeFrom(const MsgAttacker& from);
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
  
  // optional int64 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int64 id() const;
  inline void set_id(::google::protobuf::int64 value);
  
  // optional int64 attackDate = 2;
  inline bool has_attackdate() const;
  inline void clear_attackdate();
  static const int kAttackDateFieldNumber = 2;
  inline ::google::protobuf::int64 attackdate() const;
  inline void set_attackdate(::google::protobuf::int64 value);
  
  // optional int64 accountId = 3;
  inline bool has_accountid() const;
  inline void clear_accountid();
  static const int kAccountIdFieldNumber = 3;
  inline ::google::protobuf::int64 accountid() const;
  inline void set_accountid(::google::protobuf::int64 value);
  
  // optional string planetSku = 4;
  inline bool has_planetsku() const;
  inline void clear_planetsku();
  static const int kPlanetSkuFieldNumber = 4;
  inline const ::std::string& planetsku() const;
  inline void set_planetsku(const ::std::string& value);
  inline void set_planetsku(const char* value);
  inline void set_planetsku(const char* value, size_t size);
  inline ::std::string* mutable_planetsku();
  
  // optional int32 damage = 5;
  inline bool has_damage() const;
  inline void clear_damage();
  static const int kDamageFieldNumber = 5;
  inline ::google::protobuf::int32 damage() const;
  inline void set_damage(::google::protobuf::int32 value);
  
  // optional int32 planetDamage = 6;
  inline bool has_planetdamage() const;
  inline void clear_planetdamage();
  static const int kPlanetDamageFieldNumber = 6;
  inline ::google::protobuf::int32 planetdamage() const;
  inline void set_planetdamage(::google::protobuf::int32 value);
  
  // repeated int64 attacker = 7;
  inline int attacker_size() const;
  inline void clear_attacker();
  static const int kAttackerFieldNumber = 7;
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >& attacker() const
      ;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >* mutable_attacker();
  inline ::google::protobuf::int64 attacker(int index) const;
  inline void set_attacker(int index, ::google::protobuf::int64 value);
  inline void add_attacker(::google::protobuf::int64 value);
  
  // optional int32 mineralsTaken = 8;
  inline bool has_mineralstaken() const;
  inline void clear_mineralstaken();
  static const int kMineralsTakenFieldNumber = 8;
  inline ::google::protobuf::int32 mineralstaken() const;
  inline void set_mineralstaken(::google::protobuf::int32 value);
  
  // optional int32 coinsTaken = 9;
  inline bool has_coinstaken() const;
  inline void clear_coinstaken();
  static const int kCoinsTakenFieldNumber = 9;
  inline ::google::protobuf::int32 coinstaken() const;
  inline void set_coinstaken(::google::protobuf::int32 value);
  
  // optional int64 obtainedDamageProtectionTime = 10;
  inline bool has_obtaineddamageprotectiontime() const;
  inline void clear_obtaineddamageprotectiontime();
  static const int kObtainedDamageProtectionTimeFieldNumber = 10;
  inline ::google::protobuf::int64 obtaineddamageprotectiontime() const;
  inline void set_obtaineddamageprotectiontime(::google::protobuf::int64 value);
  
  // optional string name = 11;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 11;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  
  // optional string url = 12;
  inline bool has_url() const;
  inline void clear_url();
  static const int kUrlFieldNumber = 12;
  inline const ::std::string& url() const;
  inline void set_url(const ::std::string& value);
  inline void set_url(const char* value);
  inline void set_url(const char* value, size_t size);
  inline ::std::string* mutable_url();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int64 id_;
  ::google::protobuf::int64 attackdate_;
  ::google::protobuf::int64 accountid_;
  ::std::string* planetsku_;
  static const ::std::string _default_planetsku_;
  ::google::protobuf::int32 damage_;
  ::google::protobuf::int32 planetdamage_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > attacker_;
  ::google::protobuf::int32 mineralstaken_;
  ::google::protobuf::int32 coinstaken_;
  ::google::protobuf::int64 obtaineddamageprotectiontime_;
  ::std::string* name_;
  static const ::std::string _default_name_;
  ::std::string* url_;
  static const ::std::string _default_url_;
  friend void  protobuf_AddDesc_RseObtainAttackerList_2eproto();
  friend void protobuf_AssignDesc_RseObtainAttackerList_2eproto();
  friend void protobuf_ShutdownFile_RseObtainAttackerList_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(12 + 31) / 32];
  
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
  static MsgAttacker* default_instance_;
};
// -------------------------------------------------------------------

class RseObtainAttackerList : public ::google::protobuf::Message {
 public:
  RseObtainAttackerList();
  virtual ~RseObtainAttackerList();
  
  RseObtainAttackerList(const RseObtainAttackerList& from);
  
  inline RseObtainAttackerList& operator=(const RseObtainAttackerList& from) {
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
  static const RseObtainAttackerList& default_instance();
  void Swap(RseObtainAttackerList* other);
  
  // implements Message ----------------------------------------------
  
  RseObtainAttackerList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RseObtainAttackerList& from);
  void MergeFrom(const RseObtainAttackerList& from);
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
  
  // optional int32 idCount = 1;
  inline bool has_idcount() const;
  inline void clear_idcount();
  static const int kIdCountFieldNumber = 1;
  inline ::google::protobuf::int32 idcount() const;
  inline void set_idcount(::google::protobuf::int32 value);
  
  // optional int64 damageProtectionAppliedAt = 2;
  inline bool has_damageprotectionappliedat() const;
  inline void clear_damageprotectionappliedat();
  static const int kDamageProtectionAppliedAtFieldNumber = 2;
  inline ::google::protobuf::int64 damageprotectionappliedat() const;
  inline void set_damageprotectionappliedat(::google::protobuf::int64 value);
  
  // repeated .MsgAttacker attackerList = 3;
  inline int attackerlist_size() const;
  inline void clear_attackerlist();
  static const int kAttackerListFieldNumber = 3;
  inline const ::google::protobuf::RepeatedPtrField< ::MsgAttacker >& attackerlist() const;
  inline ::google::protobuf::RepeatedPtrField< ::MsgAttacker >* mutable_attackerlist();
  inline const ::MsgAttacker& attackerlist(int index) const;
  inline ::MsgAttacker* mutable_attackerlist(int index);
  inline ::MsgAttacker* add_attackerlist();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 idcount_;
  ::google::protobuf::int64 damageprotectionappliedat_;
  ::google::protobuf::RepeatedPtrField< ::MsgAttacker > attackerlist_;
  friend void  protobuf_AddDesc_RseObtainAttackerList_2eproto();
  friend void protobuf_AssignDesc_RseObtainAttackerList_2eproto();
  friend void protobuf_ShutdownFile_RseObtainAttackerList_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
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
  static RseObtainAttackerList* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// MsgAttacker

// optional int64 id = 1;
inline bool MsgAttacker::has_id() const {
  return _has_bit(0);
}
inline void MsgAttacker::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  _clear_bit(0);
}
inline ::google::protobuf::int64 MsgAttacker::id() const {
  return id_;
}
inline void MsgAttacker::set_id(::google::protobuf::int64 value) {
  _set_bit(0);
  id_ = value;
}

// optional int64 attackDate = 2;
inline bool MsgAttacker::has_attackdate() const {
  return _has_bit(1);
}
inline void MsgAttacker::clear_attackdate() {
  attackdate_ = GOOGLE_LONGLONG(0);
  _clear_bit(1);
}
inline ::google::protobuf::int64 MsgAttacker::attackdate() const {
  return attackdate_;
}
inline void MsgAttacker::set_attackdate(::google::protobuf::int64 value) {
  _set_bit(1);
  attackdate_ = value;
}

// optional int64 accountId = 3;
inline bool MsgAttacker::has_accountid() const {
  return _has_bit(2);
}
inline void MsgAttacker::clear_accountid() {
  accountid_ = GOOGLE_LONGLONG(0);
  _clear_bit(2);
}
inline ::google::protobuf::int64 MsgAttacker::accountid() const {
  return accountid_;
}
inline void MsgAttacker::set_accountid(::google::protobuf::int64 value) {
  _set_bit(2);
  accountid_ = value;
}

// optional string planetSku = 4;
inline bool MsgAttacker::has_planetsku() const {
  return _has_bit(3);
}
inline void MsgAttacker::clear_planetsku() {
  if (planetsku_ != &_default_planetsku_) {
    planetsku_->clear();
  }
  _clear_bit(3);
}
inline const ::std::string& MsgAttacker::planetsku() const {
  return *planetsku_;
}
inline void MsgAttacker::set_planetsku(const ::std::string& value) {
  _set_bit(3);
  if (planetsku_ == &_default_planetsku_) {
    planetsku_ = new ::std::string;
  }
  planetsku_->assign(value);
}
inline void MsgAttacker::set_planetsku(const char* value) {
  _set_bit(3);
  if (planetsku_ == &_default_planetsku_) {
    planetsku_ = new ::std::string;
  }
  planetsku_->assign(value);
}
inline void MsgAttacker::set_planetsku(const char* value, size_t size) {
  _set_bit(3);
  if (planetsku_ == &_default_planetsku_) {
    planetsku_ = new ::std::string;
  }
  planetsku_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgAttacker::mutable_planetsku() {
  _set_bit(3);
  if (planetsku_ == &_default_planetsku_) {
    planetsku_ = new ::std::string;
  }
  return planetsku_;
}

// optional int32 damage = 5;
inline bool MsgAttacker::has_damage() const {
  return _has_bit(4);
}
inline void MsgAttacker::clear_damage() {
  damage_ = 0;
  _clear_bit(4);
}
inline ::google::protobuf::int32 MsgAttacker::damage() const {
  return damage_;
}
inline void MsgAttacker::set_damage(::google::protobuf::int32 value) {
  _set_bit(4);
  damage_ = value;
}

// optional int32 planetDamage = 6;
inline bool MsgAttacker::has_planetdamage() const {
  return _has_bit(5);
}
inline void MsgAttacker::clear_planetdamage() {
  planetdamage_ = 0;
  _clear_bit(5);
}
inline ::google::protobuf::int32 MsgAttacker::planetdamage() const {
  return planetdamage_;
}
inline void MsgAttacker::set_planetdamage(::google::protobuf::int32 value) {
  _set_bit(5);
  planetdamage_ = value;
}

// repeated int64 attacker = 7;
inline int MsgAttacker::attacker_size() const {
  return attacker_.size();
}
inline void MsgAttacker::clear_attacker() {
  attacker_.Clear();
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
MsgAttacker::attacker() const {
  return attacker_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
MsgAttacker::mutable_attacker() {
  return &attacker_;
}
inline ::google::protobuf::int64 MsgAttacker::attacker(int index) const {
  return attacker_.Get(index);
}
inline void MsgAttacker::set_attacker(int index, ::google::protobuf::int64 value) {
  attacker_.Set(index, value);
}
inline void MsgAttacker::add_attacker(::google::protobuf::int64 value) {
  attacker_.Add(value);
}

// optional int32 mineralsTaken = 8;
inline bool MsgAttacker::has_mineralstaken() const {
  return _has_bit(7);
}
inline void MsgAttacker::clear_mineralstaken() {
  mineralstaken_ = 0;
  _clear_bit(7);
}
inline ::google::protobuf::int32 MsgAttacker::mineralstaken() const {
  return mineralstaken_;
}
inline void MsgAttacker::set_mineralstaken(::google::protobuf::int32 value) {
  _set_bit(7);
  mineralstaken_ = value;
}

// optional int32 coinsTaken = 9;
inline bool MsgAttacker::has_coinstaken() const {
  return _has_bit(8);
}
inline void MsgAttacker::clear_coinstaken() {
  coinstaken_ = 0;
  _clear_bit(8);
}
inline ::google::protobuf::int32 MsgAttacker::coinstaken() const {
  return coinstaken_;
}
inline void MsgAttacker::set_coinstaken(::google::protobuf::int32 value) {
  _set_bit(8);
  coinstaken_ = value;
}

// optional int64 obtainedDamageProtectionTime = 10;
inline bool MsgAttacker::has_obtaineddamageprotectiontime() const {
  return _has_bit(9);
}
inline void MsgAttacker::clear_obtaineddamageprotectiontime() {
  obtaineddamageprotectiontime_ = GOOGLE_LONGLONG(0);
  _clear_bit(9);
}
inline ::google::protobuf::int64 MsgAttacker::obtaineddamageprotectiontime() const {
  return obtaineddamageprotectiontime_;
}
inline void MsgAttacker::set_obtaineddamageprotectiontime(::google::protobuf::int64 value) {
  _set_bit(9);
  obtaineddamageprotectiontime_ = value;
}

// optional string name = 11;
inline bool MsgAttacker::has_name() const {
  return _has_bit(10);
}
inline void MsgAttacker::clear_name() {
  if (name_ != &_default_name_) {
    name_->clear();
  }
  _clear_bit(10);
}
inline const ::std::string& MsgAttacker::name() const {
  return *name_;
}
inline void MsgAttacker::set_name(const ::std::string& value) {
  _set_bit(10);
  if (name_ == &_default_name_) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void MsgAttacker::set_name(const char* value) {
  _set_bit(10);
  if (name_ == &_default_name_) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void MsgAttacker::set_name(const char* value, size_t size) {
  _set_bit(10);
  if (name_ == &_default_name_) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgAttacker::mutable_name() {
  _set_bit(10);
  if (name_ == &_default_name_) {
    name_ = new ::std::string;
  }
  return name_;
}

// optional string url = 12;
inline bool MsgAttacker::has_url() const {
  return _has_bit(11);
}
inline void MsgAttacker::clear_url() {
  if (url_ != &_default_url_) {
    url_->clear();
  }
  _clear_bit(11);
}
inline const ::std::string& MsgAttacker::url() const {
  return *url_;
}
inline void MsgAttacker::set_url(const ::std::string& value) {
  _set_bit(11);
  if (url_ == &_default_url_) {
    url_ = new ::std::string;
  }
  url_->assign(value);
}
inline void MsgAttacker::set_url(const char* value) {
  _set_bit(11);
  if (url_ == &_default_url_) {
    url_ = new ::std::string;
  }
  url_->assign(value);
}
inline void MsgAttacker::set_url(const char* value, size_t size) {
  _set_bit(11);
  if (url_ == &_default_url_) {
    url_ = new ::std::string;
  }
  url_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgAttacker::mutable_url() {
  _set_bit(11);
  if (url_ == &_default_url_) {
    url_ = new ::std::string;
  }
  return url_;
}

// -------------------------------------------------------------------

// RseObtainAttackerList

// optional int32 idCount = 1;
inline bool RseObtainAttackerList::has_idcount() const {
  return _has_bit(0);
}
inline void RseObtainAttackerList::clear_idcount() {
  idcount_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 RseObtainAttackerList::idcount() const {
  return idcount_;
}
inline void RseObtainAttackerList::set_idcount(::google::protobuf::int32 value) {
  _set_bit(0);
  idcount_ = value;
}

// optional int64 damageProtectionAppliedAt = 2;
inline bool RseObtainAttackerList::has_damageprotectionappliedat() const {
  return _has_bit(1);
}
inline void RseObtainAttackerList::clear_damageprotectionappliedat() {
  damageprotectionappliedat_ = GOOGLE_LONGLONG(0);
  _clear_bit(1);
}
inline ::google::protobuf::int64 RseObtainAttackerList::damageprotectionappliedat() const {
  return damageprotectionappliedat_;
}
inline void RseObtainAttackerList::set_damageprotectionappliedat(::google::protobuf::int64 value) {
  _set_bit(1);
  damageprotectionappliedat_ = value;
}

// repeated .MsgAttacker attackerList = 3;
inline int RseObtainAttackerList::attackerlist_size() const {
  return attackerlist_.size();
}
inline void RseObtainAttackerList::clear_attackerlist() {
  attackerlist_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::MsgAttacker >&
RseObtainAttackerList::attackerlist() const {
  return attackerlist_;
}
inline ::google::protobuf::RepeatedPtrField< ::MsgAttacker >*
RseObtainAttackerList::mutable_attackerlist() {
  return &attackerlist_;
}
inline const ::MsgAttacker& RseObtainAttackerList::attackerlist(int index) const {
  return attackerlist_.Get(index);
}
inline ::MsgAttacker* RseObtainAttackerList::mutable_attackerlist(int index) {
  return attackerlist_.Mutable(index);
}
inline ::MsgAttacker* RseObtainAttackerList::add_attackerlist() {
  return attackerlist_.Add();
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_RseObtainAttackerList_2eproto__INCLUDED
