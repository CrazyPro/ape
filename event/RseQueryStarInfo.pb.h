// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_RseQueryStarInfo_2eproto__INCLUDED
#define PROTOBUF_RseQueryStarInfo_2eproto__INCLUDED

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
#include "MsgPlanet.pb.h"

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_RseQueryStarInfo_2eproto();
void protobuf_AssignDesc_RseQueryStarInfo_2eproto();
void protobuf_ShutdownFile_RseQueryStarInfo_2eproto();

class SpaceStarInfo;
class RseQueryStarInfo;

// ===================================================================

class SpaceStarInfo : public ::google::protobuf::Message {
 public:
  SpaceStarInfo();
  virtual ~SpaceStarInfo();
  
  SpaceStarInfo(const SpaceStarInfo& from);
  
  inline SpaceStarInfo& operator=(const SpaceStarInfo& from) {
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
  static const SpaceStarInfo& default_instance();
  void Swap(SpaceStarInfo* other);
  
  // implements Message ----------------------------------------------
  
  SpaceStarInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SpaceStarInfo& from);
  void MergeFrom(const SpaceStarInfo& from);
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
  
  // optional string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  
  // optional string url = 2;
  inline bool has_url() const;
  inline void clear_url();
  static const int kUrlFieldNumber = 2;
  inline const ::std::string& url() const;
  inline void set_url(const ::std::string& value);
  inline void set_url(const char* value);
  inline void set_url(const char* value, size_t size);
  inline ::std::string* mutable_url();
  
  // optional int64 xp = 3;
  inline bool has_xp() const;
  inline void clear_xp();
  static const int kXpFieldNumber = 3;
  inline ::google::protobuf::int64 xp() const;
  inline void set_xp(::google::protobuf::int64 value);
  
  // optional int32 score = 4;
  inline bool has_score() const;
  inline void clear_score();
  static const int kScoreFieldNumber = 4;
  inline ::google::protobuf::int32 score() const;
  inline void set_score(::google::protobuf::int32 value);
  
  // optional string sku = 5;
  inline bool has_sku() const;
  inline void clear_sku();
  static const int kSkuFieldNumber = 5;
  inline const ::std::string& sku() const;
  inline void set_sku(const ::std::string& value);
  inline void set_sku(const char* value);
  inline void set_sku(const char* value, size_t size);
  inline ::std::string* mutable_sku();
  
  // optional int32 planetId = 6;
  inline bool has_planetid() const;
  inline void clear_planetid();
  static const int kPlanetIdFieldNumber = 6;
  inline ::google::protobuf::int32 planetid() const;
  inline void set_planetid(::google::protobuf::int32 value);
  
  // optional int32 HQLevel = 7;
  inline bool has_hqlevel() const;
  inline void clear_hqlevel();
  static const int kHQLevelFieldNumber = 7;
  inline ::google::protobuf::int32 hqlevel() const;
  inline void set_hqlevel(::google::protobuf::int32 value);
  
  // optional int32 type = 8;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 8;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);
  
  // optional int32 capital = 9;
  inline bool has_capital() const;
  inline void clear_capital();
  static const int kCapitalFieldNumber = 9;
  inline ::google::protobuf::int32 capital() const;
  inline void set_capital(::google::protobuf::int32 value);
  
  // repeated .MsgPlanet Planet = 10;
  inline int planet_size() const;
  inline void clear_planet();
  static const int kPlanetFieldNumber = 10;
  inline const ::google::protobuf::RepeatedPtrField< ::MsgPlanet >& planet() const;
  inline ::google::protobuf::RepeatedPtrField< ::MsgPlanet >* mutable_planet();
  inline const ::MsgPlanet& planet(int index) const;
  inline ::MsgPlanet* mutable_planet(int index);
  inline ::MsgPlanet* add_planet();
  
  // optional int64 damageProtectionTimeLeft = 11;
  inline bool has_damageprotectiontimeleft() const;
  inline void clear_damageprotectiontimeleft();
  static const int kDamageProtectionTimeLeftFieldNumber = 11;
  inline ::google::protobuf::int64 damageprotectiontimeleft() const;
  inline void set_damageprotectiontimeleft(::google::protobuf::int64 value);
  
  // optional int64 tutorialCompleted = 12;
  inline bool has_tutorialcompleted() const;
  inline void clear_tutorialcompleted();
  static const int kTutorialCompletedFieldNumber = 12;
  inline ::google::protobuf::int64 tutorialcompleted() const;
  inline void set_tutorialcompleted(::google::protobuf::int64 value);
  
  // optional int32 isOnline = 13;
  inline bool has_isonline() const;
  inline void clear_isonline();
  static const int kIsOnlineFieldNumber = 13;
  inline ::google::protobuf::int32 isonline() const;
  inline void set_isonline(::google::protobuf::int32 value);
  
  // optional int32 accountId = 14;
  inline bool has_accountid() const;
  inline void clear_accountid();
  static const int kAccountIdFieldNumber = 14;
  inline ::google::protobuf::int32 accountid() const;
  inline void set_accountid(::google::protobuf::int32 value);
  
  // optional int32 levelBasedOnScore = 15;
  inline bool has_levelbasedonscore() const;
  inline void clear_levelbasedonscore();
  static const int kLevelBasedOnScoreFieldNumber = 15;
  inline ::google::protobuf::int32 levelbasedonscore() const;
  inline void set_levelbasedonscore(::google::protobuf::int32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* name_;
  static const ::std::string _default_name_;
  ::std::string* url_;
  static const ::std::string _default_url_;
  ::google::protobuf::int64 xp_;
  ::google::protobuf::int32 score_;
  ::std::string* sku_;
  static const ::std::string _default_sku_;
  ::google::protobuf::int32 planetid_;
  ::google::protobuf::int32 hqlevel_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 capital_;
  ::google::protobuf::RepeatedPtrField< ::MsgPlanet > planet_;
  ::google::protobuf::int64 damageprotectiontimeleft_;
  ::google::protobuf::int64 tutorialcompleted_;
  ::google::protobuf::int32 isonline_;
  ::google::protobuf::int32 accountid_;
  ::google::protobuf::int32 levelbasedonscore_;
  friend void  protobuf_AddDesc_RseQueryStarInfo_2eproto();
  friend void protobuf_AssignDesc_RseQueryStarInfo_2eproto();
  friend void protobuf_ShutdownFile_RseQueryStarInfo_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(15 + 31) / 32];
  
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
  static SpaceStarInfo* default_instance_;
};
// -------------------------------------------------------------------

class RseQueryStarInfo : public ::google::protobuf::Message {
 public:
  RseQueryStarInfo();
  virtual ~RseQueryStarInfo();
  
  RseQueryStarInfo(const RseQueryStarInfo& from);
  
  inline RseQueryStarInfo& operator=(const RseQueryStarInfo& from) {
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
  static const RseQueryStarInfo& default_instance();
  void Swap(RseQueryStarInfo* other);
  
  // implements Message ----------------------------------------------
  
  RseQueryStarInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RseQueryStarInfo& from);
  void MergeFrom(const RseQueryStarInfo& from);
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
  
  // repeated .SpaceStarInfo spaceStarInfo = 1;
  inline int spacestarinfo_size() const;
  inline void clear_spacestarinfo();
  static const int kSpaceStarInfoFieldNumber = 1;
  inline const ::google::protobuf::RepeatedPtrField< ::SpaceStarInfo >& spacestarinfo() const;
  inline ::google::protobuf::RepeatedPtrField< ::SpaceStarInfo >* mutable_spacestarinfo();
  inline const ::SpaceStarInfo& spacestarinfo(int index) const;
  inline ::SpaceStarInfo* mutable_spacestarinfo(int index);
  inline ::SpaceStarInfo* add_spacestarinfo();
  
  // optional int32 type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);
  
  // optional string sku = 3;
  inline bool has_sku() const;
  inline void clear_sku();
  static const int kSkuFieldNumber = 3;
  inline const ::std::string& sku() const;
  inline void set_sku(const ::std::string& value);
  inline void set_sku(const char* value);
  inline void set_sku(const char* value, size_t size);
  inline ::std::string* mutable_sku();
  
  // optional int32 starId = 4;
  inline bool has_starid() const;
  inline void clear_starid();
  static const int kStarIdFieldNumber = 4;
  inline ::google::protobuf::int32 starid() const;
  inline void set_starid(::google::protobuf::int32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::RepeatedPtrField< ::SpaceStarInfo > spacestarinfo_;
  ::google::protobuf::int32 type_;
  ::std::string* sku_;
  static const ::std::string _default_sku_;
  ::google::protobuf::int32 starid_;
  friend void  protobuf_AddDesc_RseQueryStarInfo_2eproto();
  friend void protobuf_AssignDesc_RseQueryStarInfo_2eproto();
  friend void protobuf_ShutdownFile_RseQueryStarInfo_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
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
  static RseQueryStarInfo* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// SpaceStarInfo

// optional string name = 1;
inline bool SpaceStarInfo::has_name() const {
  return _has_bit(0);
}
inline void SpaceStarInfo::clear_name() {
  if (name_ != &_default_name_) {
    name_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& SpaceStarInfo::name() const {
  return *name_;
}
inline void SpaceStarInfo::set_name(const ::std::string& value) {
  _set_bit(0);
  if (name_ == &_default_name_) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void SpaceStarInfo::set_name(const char* value) {
  _set_bit(0);
  if (name_ == &_default_name_) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void SpaceStarInfo::set_name(const char* value, size_t size) {
  _set_bit(0);
  if (name_ == &_default_name_) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SpaceStarInfo::mutable_name() {
  _set_bit(0);
  if (name_ == &_default_name_) {
    name_ = new ::std::string;
  }
  return name_;
}

// optional string url = 2;
inline bool SpaceStarInfo::has_url() const {
  return _has_bit(1);
}
inline void SpaceStarInfo::clear_url() {
  if (url_ != &_default_url_) {
    url_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& SpaceStarInfo::url() const {
  return *url_;
}
inline void SpaceStarInfo::set_url(const ::std::string& value) {
  _set_bit(1);
  if (url_ == &_default_url_) {
    url_ = new ::std::string;
  }
  url_->assign(value);
}
inline void SpaceStarInfo::set_url(const char* value) {
  _set_bit(1);
  if (url_ == &_default_url_) {
    url_ = new ::std::string;
  }
  url_->assign(value);
}
inline void SpaceStarInfo::set_url(const char* value, size_t size) {
  _set_bit(1);
  if (url_ == &_default_url_) {
    url_ = new ::std::string;
  }
  url_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SpaceStarInfo::mutable_url() {
  _set_bit(1);
  if (url_ == &_default_url_) {
    url_ = new ::std::string;
  }
  return url_;
}

// optional int64 xp = 3;
inline bool SpaceStarInfo::has_xp() const {
  return _has_bit(2);
}
inline void SpaceStarInfo::clear_xp() {
  xp_ = GOOGLE_LONGLONG(0);
  _clear_bit(2);
}
inline ::google::protobuf::int64 SpaceStarInfo::xp() const {
  return xp_;
}
inline void SpaceStarInfo::set_xp(::google::protobuf::int64 value) {
  _set_bit(2);
  xp_ = value;
}

// optional int32 score = 4;
inline bool SpaceStarInfo::has_score() const {
  return _has_bit(3);
}
inline void SpaceStarInfo::clear_score() {
  score_ = 0;
  _clear_bit(3);
}
inline ::google::protobuf::int32 SpaceStarInfo::score() const {
  return score_;
}
inline void SpaceStarInfo::set_score(::google::protobuf::int32 value) {
  _set_bit(3);
  score_ = value;
}

// optional string sku = 5;
inline bool SpaceStarInfo::has_sku() const {
  return _has_bit(4);
}
inline void SpaceStarInfo::clear_sku() {
  if (sku_ != &_default_sku_) {
    sku_->clear();
  }
  _clear_bit(4);
}
inline const ::std::string& SpaceStarInfo::sku() const {
  return *sku_;
}
inline void SpaceStarInfo::set_sku(const ::std::string& value) {
  _set_bit(4);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(value);
}
inline void SpaceStarInfo::set_sku(const char* value) {
  _set_bit(4);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(value);
}
inline void SpaceStarInfo::set_sku(const char* value, size_t size) {
  _set_bit(4);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SpaceStarInfo::mutable_sku() {
  _set_bit(4);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  return sku_;
}

// optional int32 planetId = 6;
inline bool SpaceStarInfo::has_planetid() const {
  return _has_bit(5);
}
inline void SpaceStarInfo::clear_planetid() {
  planetid_ = 0;
  _clear_bit(5);
}
inline ::google::protobuf::int32 SpaceStarInfo::planetid() const {
  return planetid_;
}
inline void SpaceStarInfo::set_planetid(::google::protobuf::int32 value) {
  _set_bit(5);
  planetid_ = value;
}

// optional int32 HQLevel = 7;
inline bool SpaceStarInfo::has_hqlevel() const {
  return _has_bit(6);
}
inline void SpaceStarInfo::clear_hqlevel() {
  hqlevel_ = 0;
  _clear_bit(6);
}
inline ::google::protobuf::int32 SpaceStarInfo::hqlevel() const {
  return hqlevel_;
}
inline void SpaceStarInfo::set_hqlevel(::google::protobuf::int32 value) {
  _set_bit(6);
  hqlevel_ = value;
}

// optional int32 type = 8;
inline bool SpaceStarInfo::has_type() const {
  return _has_bit(7);
}
inline void SpaceStarInfo::clear_type() {
  type_ = 0;
  _clear_bit(7);
}
inline ::google::protobuf::int32 SpaceStarInfo::type() const {
  return type_;
}
inline void SpaceStarInfo::set_type(::google::protobuf::int32 value) {
  _set_bit(7);
  type_ = value;
}

// optional int32 capital = 9;
inline bool SpaceStarInfo::has_capital() const {
  return _has_bit(8);
}
inline void SpaceStarInfo::clear_capital() {
  capital_ = 0;
  _clear_bit(8);
}
inline ::google::protobuf::int32 SpaceStarInfo::capital() const {
  return capital_;
}
inline void SpaceStarInfo::set_capital(::google::protobuf::int32 value) {
  _set_bit(8);
  capital_ = value;
}

// repeated .MsgPlanet Planet = 10;
inline int SpaceStarInfo::planet_size() const {
  return planet_.size();
}
inline void SpaceStarInfo::clear_planet() {
  planet_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::MsgPlanet >&
SpaceStarInfo::planet() const {
  return planet_;
}
inline ::google::protobuf::RepeatedPtrField< ::MsgPlanet >*
SpaceStarInfo::mutable_planet() {
  return &planet_;
}
inline const ::MsgPlanet& SpaceStarInfo::planet(int index) const {
  return planet_.Get(index);
}
inline ::MsgPlanet* SpaceStarInfo::mutable_planet(int index) {
  return planet_.Mutable(index);
}
inline ::MsgPlanet* SpaceStarInfo::add_planet() {
  return planet_.Add();
}

// optional int64 damageProtectionTimeLeft = 11;
inline bool SpaceStarInfo::has_damageprotectiontimeleft() const {
  return _has_bit(10);
}
inline void SpaceStarInfo::clear_damageprotectiontimeleft() {
  damageprotectiontimeleft_ = GOOGLE_LONGLONG(0);
  _clear_bit(10);
}
inline ::google::protobuf::int64 SpaceStarInfo::damageprotectiontimeleft() const {
  return damageprotectiontimeleft_;
}
inline void SpaceStarInfo::set_damageprotectiontimeleft(::google::protobuf::int64 value) {
  _set_bit(10);
  damageprotectiontimeleft_ = value;
}

// optional int64 tutorialCompleted = 12;
inline bool SpaceStarInfo::has_tutorialcompleted() const {
  return _has_bit(11);
}
inline void SpaceStarInfo::clear_tutorialcompleted() {
  tutorialcompleted_ = GOOGLE_LONGLONG(0);
  _clear_bit(11);
}
inline ::google::protobuf::int64 SpaceStarInfo::tutorialcompleted() const {
  return tutorialcompleted_;
}
inline void SpaceStarInfo::set_tutorialcompleted(::google::protobuf::int64 value) {
  _set_bit(11);
  tutorialcompleted_ = value;
}

// optional int32 isOnline = 13;
inline bool SpaceStarInfo::has_isonline() const {
  return _has_bit(12);
}
inline void SpaceStarInfo::clear_isonline() {
  isonline_ = 0;
  _clear_bit(12);
}
inline ::google::protobuf::int32 SpaceStarInfo::isonline() const {
  return isonline_;
}
inline void SpaceStarInfo::set_isonline(::google::protobuf::int32 value) {
  _set_bit(12);
  isonline_ = value;
}

// optional int32 accountId = 14;
inline bool SpaceStarInfo::has_accountid() const {
  return _has_bit(13);
}
inline void SpaceStarInfo::clear_accountid() {
  accountid_ = 0;
  _clear_bit(13);
}
inline ::google::protobuf::int32 SpaceStarInfo::accountid() const {
  return accountid_;
}
inline void SpaceStarInfo::set_accountid(::google::protobuf::int32 value) {
  _set_bit(13);
  accountid_ = value;
}

// optional int32 levelBasedOnScore = 15;
inline bool SpaceStarInfo::has_levelbasedonscore() const {
  return _has_bit(14);
}
inline void SpaceStarInfo::clear_levelbasedonscore() {
  levelbasedonscore_ = 0;
  _clear_bit(14);
}
inline ::google::protobuf::int32 SpaceStarInfo::levelbasedonscore() const {
  return levelbasedonscore_;
}
inline void SpaceStarInfo::set_levelbasedonscore(::google::protobuf::int32 value) {
  _set_bit(14);
  levelbasedonscore_ = value;
}

// -------------------------------------------------------------------

// RseQueryStarInfo

// repeated .SpaceStarInfo spaceStarInfo = 1;
inline int RseQueryStarInfo::spacestarinfo_size() const {
  return spacestarinfo_.size();
}
inline void RseQueryStarInfo::clear_spacestarinfo() {
  spacestarinfo_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::SpaceStarInfo >&
RseQueryStarInfo::spacestarinfo() const {
  return spacestarinfo_;
}
inline ::google::protobuf::RepeatedPtrField< ::SpaceStarInfo >*
RseQueryStarInfo::mutable_spacestarinfo() {
  return &spacestarinfo_;
}
inline const ::SpaceStarInfo& RseQueryStarInfo::spacestarinfo(int index) const {
  return spacestarinfo_.Get(index);
}
inline ::SpaceStarInfo* RseQueryStarInfo::mutable_spacestarinfo(int index) {
  return spacestarinfo_.Mutable(index);
}
inline ::SpaceStarInfo* RseQueryStarInfo::add_spacestarinfo() {
  return spacestarinfo_.Add();
}

// optional int32 type = 2;
inline bool RseQueryStarInfo::has_type() const {
  return _has_bit(1);
}
inline void RseQueryStarInfo::clear_type() {
  type_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 RseQueryStarInfo::type() const {
  return type_;
}
inline void RseQueryStarInfo::set_type(::google::protobuf::int32 value) {
  _set_bit(1);
  type_ = value;
}

// optional string sku = 3;
inline bool RseQueryStarInfo::has_sku() const {
  return _has_bit(2);
}
inline void RseQueryStarInfo::clear_sku() {
  if (sku_ != &_default_sku_) {
    sku_->clear();
  }
  _clear_bit(2);
}
inline const ::std::string& RseQueryStarInfo::sku() const {
  return *sku_;
}
inline void RseQueryStarInfo::set_sku(const ::std::string& value) {
  _set_bit(2);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(value);
}
inline void RseQueryStarInfo::set_sku(const char* value) {
  _set_bit(2);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(value);
}
inline void RseQueryStarInfo::set_sku(const char* value, size_t size) {
  _set_bit(2);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RseQueryStarInfo::mutable_sku() {
  _set_bit(2);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  return sku_;
}

// optional int32 starId = 4;
inline bool RseQueryStarInfo::has_starid() const {
  return _has_bit(3);
}
inline void RseQueryStarInfo::clear_starid() {
  starid_ = 0;
  _clear_bit(3);
}
inline ::google::protobuf::int32 RseQueryStarInfo::starid() const {
  return starid_;
}
inline void RseQueryStarInfo::set_starid(::google::protobuf::int32 value) {
  _set_bit(3);
  starid_ = value;
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_RseQueryStarInfo_2eproto__INCLUDED
