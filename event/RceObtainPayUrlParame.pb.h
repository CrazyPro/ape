// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_RceObtainPayUrlParame_2eproto__INCLUDED
#define PROTOBUF_RceObtainPayUrlParame_2eproto__INCLUDED

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
void  protobuf_AddDesc_RceObtainPayUrlParame_2eproto();
void protobuf_AssignDesc_RceObtainPayUrlParame_2eproto();
void protobuf_ShutdownFile_RceObtainPayUrlParame_2eproto();

class RceObtainPayUrlParame;

// ===================================================================

class RceObtainPayUrlParame : public ::google::protobuf::Message {
 public:
  RceObtainPayUrlParame();
  virtual ~RceObtainPayUrlParame();
  
  RceObtainPayUrlParame(const RceObtainPayUrlParame& from);
  
  inline RceObtainPayUrlParame& operator=(const RceObtainPayUrlParame& from) {
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
  static const RceObtainPayUrlParame& default_instance();
  void Swap(RceObtainPayUrlParame* other);
  
  // implements Message ----------------------------------------------
  
  RceObtainPayUrlParame* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RceObtainPayUrlParame& from);
  void MergeFrom(const RceObtainPayUrlParame& from);
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
  
  // optional string openid = 1;
  inline bool has_openid() const;
  inline void clear_openid();
  static const int kOpenidFieldNumber = 1;
  inline const ::std::string& openid() const;
  inline void set_openid(const ::std::string& value);
  inline void set_openid(const char* value);
  inline void set_openid(const char* value, size_t size);
  inline ::std::string* mutable_openid();
  
  // optional int32 appmode = 2;
  inline bool has_appmode() const;
  inline void clear_appmode();
  static const int kAppmodeFieldNumber = 2;
  inline ::google::protobuf::int32 appmode() const;
  inline void set_appmode(::google::protobuf::int32 value);
  
  // optional string platId = 3;
  inline bool has_platid() const;
  inline void clear_platid();
  static const int kPlatIdFieldNumber = 3;
  inline const ::std::string& platid() const;
  inline void set_platid(const ::std::string& value);
  inline void set_platid(const char* value);
  inline void set_platid(const char* value, size_t size);
  inline ::std::string* mutable_platid();
  
  // optional string planetId = 4;
  inline bool has_planetid() const;
  inline void clear_planetid();
  static const int kPlanetIdFieldNumber = 4;
  inline const ::std::string& planetid() const;
  inline void set_planetid(const ::std::string& value);
  inline void set_planetid(const char* value);
  inline void set_planetid(const char* value, size_t size);
  inline ::std::string* mutable_planetid();
  
  // optional string goodsmeta = 5;
  inline bool has_goodsmeta() const;
  inline void clear_goodsmeta();
  static const int kGoodsmetaFieldNumber = 5;
  inline const ::std::string& goodsmeta() const;
  inline void set_goodsmeta(const ::std::string& value);
  inline void set_goodsmeta(const char* value);
  inline void set_goodsmeta(const char* value, size_t size);
  inline ::std::string* mutable_goodsmeta();
  
  // optional string gdurl = 6;
  inline bool has_gdurl() const;
  inline void clear_gdurl();
  static const int kGdurlFieldNumber = 6;
  inline const ::std::string& gdurl() const;
  inline void set_gdurl(const ::std::string& value);
  inline void set_gdurl(const char* value);
  inline void set_gdurl(const char* value, size_t size);
  inline ::std::string* mutable_gdurl();
  
  // optional string payitem = 7;
  inline bool has_payitem() const;
  inline void clear_payitem();
  static const int kPayitemFieldNumber = 7;
  inline const ::std::string& payitem() const;
  inline void set_payitem(const ::std::string& value);
  inline void set_payitem(const char* value);
  inline void set_payitem(const char* value, size_t size);
  inline ::std::string* mutable_payitem();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* openid_;
  static const ::std::string _default_openid_;
  ::google::protobuf::int32 appmode_;
  ::std::string* platid_;
  static const ::std::string _default_platid_;
  ::std::string* planetid_;
  static const ::std::string _default_planetid_;
  ::std::string* goodsmeta_;
  static const ::std::string _default_goodsmeta_;
  ::std::string* gdurl_;
  static const ::std::string _default_gdurl_;
  ::std::string* payitem_;
  static const ::std::string _default_payitem_;
  friend void  protobuf_AddDesc_RceObtainPayUrlParame_2eproto();
  friend void protobuf_AssignDesc_RceObtainPayUrlParame_2eproto();
  friend void protobuf_ShutdownFile_RceObtainPayUrlParame_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];
  
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
  static RceObtainPayUrlParame* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// RceObtainPayUrlParame

// optional string openid = 1;
inline bool RceObtainPayUrlParame::has_openid() const {
  return _has_bit(0);
}
inline void RceObtainPayUrlParame::clear_openid() {
  if (openid_ != &_default_openid_) {
    openid_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& RceObtainPayUrlParame::openid() const {
  return *openid_;
}
inline void RceObtainPayUrlParame::set_openid(const ::std::string& value) {
  _set_bit(0);
  if (openid_ == &_default_openid_) {
    openid_ = new ::std::string;
  }
  openid_->assign(value);
}
inline void RceObtainPayUrlParame::set_openid(const char* value) {
  _set_bit(0);
  if (openid_ == &_default_openid_) {
    openid_ = new ::std::string;
  }
  openid_->assign(value);
}
inline void RceObtainPayUrlParame::set_openid(const char* value, size_t size) {
  _set_bit(0);
  if (openid_ == &_default_openid_) {
    openid_ = new ::std::string;
  }
  openid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceObtainPayUrlParame::mutable_openid() {
  _set_bit(0);
  if (openid_ == &_default_openid_) {
    openid_ = new ::std::string;
  }
  return openid_;
}

// optional int32 appmode = 2;
inline bool RceObtainPayUrlParame::has_appmode() const {
  return _has_bit(1);
}
inline void RceObtainPayUrlParame::clear_appmode() {
  appmode_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 RceObtainPayUrlParame::appmode() const {
  return appmode_;
}
inline void RceObtainPayUrlParame::set_appmode(::google::protobuf::int32 value) {
  _set_bit(1);
  appmode_ = value;
}

// optional string platId = 3;
inline bool RceObtainPayUrlParame::has_platid() const {
  return _has_bit(2);
}
inline void RceObtainPayUrlParame::clear_platid() {
  if (platid_ != &_default_platid_) {
    platid_->clear();
  }
  _clear_bit(2);
}
inline const ::std::string& RceObtainPayUrlParame::platid() const {
  return *platid_;
}
inline void RceObtainPayUrlParame::set_platid(const ::std::string& value) {
  _set_bit(2);
  if (platid_ == &_default_platid_) {
    platid_ = new ::std::string;
  }
  platid_->assign(value);
}
inline void RceObtainPayUrlParame::set_platid(const char* value) {
  _set_bit(2);
  if (platid_ == &_default_platid_) {
    platid_ = new ::std::string;
  }
  platid_->assign(value);
}
inline void RceObtainPayUrlParame::set_platid(const char* value, size_t size) {
  _set_bit(2);
  if (platid_ == &_default_platid_) {
    platid_ = new ::std::string;
  }
  platid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceObtainPayUrlParame::mutable_platid() {
  _set_bit(2);
  if (platid_ == &_default_platid_) {
    platid_ = new ::std::string;
  }
  return platid_;
}

// optional string planetId = 4;
inline bool RceObtainPayUrlParame::has_planetid() const {
  return _has_bit(3);
}
inline void RceObtainPayUrlParame::clear_planetid() {
  if (planetid_ != &_default_planetid_) {
    planetid_->clear();
  }
  _clear_bit(3);
}
inline const ::std::string& RceObtainPayUrlParame::planetid() const {
  return *planetid_;
}
inline void RceObtainPayUrlParame::set_planetid(const ::std::string& value) {
  _set_bit(3);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(value);
}
inline void RceObtainPayUrlParame::set_planetid(const char* value) {
  _set_bit(3);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(value);
}
inline void RceObtainPayUrlParame::set_planetid(const char* value, size_t size) {
  _set_bit(3);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceObtainPayUrlParame::mutable_planetid() {
  _set_bit(3);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  return planetid_;
}

// optional string goodsmeta = 5;
inline bool RceObtainPayUrlParame::has_goodsmeta() const {
  return _has_bit(4);
}
inline void RceObtainPayUrlParame::clear_goodsmeta() {
  if (goodsmeta_ != &_default_goodsmeta_) {
    goodsmeta_->clear();
  }
  _clear_bit(4);
}
inline const ::std::string& RceObtainPayUrlParame::goodsmeta() const {
  return *goodsmeta_;
}
inline void RceObtainPayUrlParame::set_goodsmeta(const ::std::string& value) {
  _set_bit(4);
  if (goodsmeta_ == &_default_goodsmeta_) {
    goodsmeta_ = new ::std::string;
  }
  goodsmeta_->assign(value);
}
inline void RceObtainPayUrlParame::set_goodsmeta(const char* value) {
  _set_bit(4);
  if (goodsmeta_ == &_default_goodsmeta_) {
    goodsmeta_ = new ::std::string;
  }
  goodsmeta_->assign(value);
}
inline void RceObtainPayUrlParame::set_goodsmeta(const char* value, size_t size) {
  _set_bit(4);
  if (goodsmeta_ == &_default_goodsmeta_) {
    goodsmeta_ = new ::std::string;
  }
  goodsmeta_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceObtainPayUrlParame::mutable_goodsmeta() {
  _set_bit(4);
  if (goodsmeta_ == &_default_goodsmeta_) {
    goodsmeta_ = new ::std::string;
  }
  return goodsmeta_;
}

// optional string gdurl = 6;
inline bool RceObtainPayUrlParame::has_gdurl() const {
  return _has_bit(5);
}
inline void RceObtainPayUrlParame::clear_gdurl() {
  if (gdurl_ != &_default_gdurl_) {
    gdurl_->clear();
  }
  _clear_bit(5);
}
inline const ::std::string& RceObtainPayUrlParame::gdurl() const {
  return *gdurl_;
}
inline void RceObtainPayUrlParame::set_gdurl(const ::std::string& value) {
  _set_bit(5);
  if (gdurl_ == &_default_gdurl_) {
    gdurl_ = new ::std::string;
  }
  gdurl_->assign(value);
}
inline void RceObtainPayUrlParame::set_gdurl(const char* value) {
  _set_bit(5);
  if (gdurl_ == &_default_gdurl_) {
    gdurl_ = new ::std::string;
  }
  gdurl_->assign(value);
}
inline void RceObtainPayUrlParame::set_gdurl(const char* value, size_t size) {
  _set_bit(5);
  if (gdurl_ == &_default_gdurl_) {
    gdurl_ = new ::std::string;
  }
  gdurl_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceObtainPayUrlParame::mutable_gdurl() {
  _set_bit(5);
  if (gdurl_ == &_default_gdurl_) {
    gdurl_ = new ::std::string;
  }
  return gdurl_;
}

// optional string payitem = 7;
inline bool RceObtainPayUrlParame::has_payitem() const {
  return _has_bit(6);
}
inline void RceObtainPayUrlParame::clear_payitem() {
  if (payitem_ != &_default_payitem_) {
    payitem_->clear();
  }
  _clear_bit(6);
}
inline const ::std::string& RceObtainPayUrlParame::payitem() const {
  return *payitem_;
}
inline void RceObtainPayUrlParame::set_payitem(const ::std::string& value) {
  _set_bit(6);
  if (payitem_ == &_default_payitem_) {
    payitem_ = new ::std::string;
  }
  payitem_->assign(value);
}
inline void RceObtainPayUrlParame::set_payitem(const char* value) {
  _set_bit(6);
  if (payitem_ == &_default_payitem_) {
    payitem_ = new ::std::string;
  }
  payitem_->assign(value);
}
inline void RceObtainPayUrlParame::set_payitem(const char* value, size_t size) {
  _set_bit(6);
  if (payitem_ == &_default_payitem_) {
    payitem_ = new ::std::string;
  }
  payitem_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceObtainPayUrlParame::mutable_payitem() {
  _set_bit(6);
  if (payitem_ == &_default_payitem_) {
    payitem_ = new ::std::string;
  }
  return payitem_;
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_RceObtainPayUrlParame_2eproto__INCLUDED
