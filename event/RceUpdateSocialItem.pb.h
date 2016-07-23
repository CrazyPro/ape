// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_RceUpdateSocialItem_2eproto__INCLUDED
#define PROTOBUF_RceUpdateSocialItem_2eproto__INCLUDED

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
void  protobuf_AddDesc_RceUpdateSocialItem_2eproto();
void protobuf_AssignDesc_RceUpdateSocialItem_2eproto();
void protobuf_ShutdownFile_RceUpdateSocialItem_2eproto();

class RceUpdateSocialItem;

// ===================================================================

class RceUpdateSocialItem : public ::google::protobuf::Message {
 public:
  RceUpdateSocialItem();
  virtual ~RceUpdateSocialItem();
  
  RceUpdateSocialItem(const RceUpdateSocialItem& from);
  
  inline RceUpdateSocialItem& operator=(const RceUpdateSocialItem& from) {
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
  static const RceUpdateSocialItem& default_instance();
  void Swap(RceUpdateSocialItem* other);
  
  // implements Message ----------------------------------------------
  
  RceUpdateSocialItem* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RceUpdateSocialItem& from);
  void MergeFrom(const RceUpdateSocialItem& from);
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
  
  // optional string planetId = 1;
  inline bool has_planetid() const;
  inline void clear_planetid();
  static const int kPlanetIdFieldNumber = 1;
  inline const ::std::string& planetid() const;
  inline void set_planetid(const ::std::string& value);
  inline void set_planetid(const char* value);
  inline void set_planetid(const char* value, size_t size);
  inline ::std::string* mutable_planetid();
  
  // optional int32 currentSequence = 2;
  inline bool has_currentsequence() const;
  inline void clear_currentsequence();
  static const int kCurrentSequenceFieldNumber = 2;
  inline ::google::protobuf::int32 currentsequence() const;
  inline void set_currentsequence(::google::protobuf::int32 value);
  
  // optional int32 currentCount = 3;
  inline bool has_currentcount() const;
  inline void clear_currentcount();
  static const int kCurrentCountFieldNumber = 3;
  inline ::google::protobuf::int32 currentcount() const;
  inline void set_currentcount(::google::protobuf::int32 value);
  
  // optional string sku = 4;
  inline bool has_sku() const;
  inline void clear_sku();
  static const int kSkuFieldNumber = 4;
  inline const ::std::string& sku() const;
  inline void set_sku(const ::std::string& value);
  inline void set_sku(const char* value);
  inline void set_sku(const char* value, size_t size);
  inline ::std::string* mutable_sku();
  
  // optional int32 currentQuantity = 5;
  inline bool has_currentquantity() const;
  inline void clear_currentquantity();
  static const int kCurrentQuantityFieldNumber = 5;
  inline ::google::protobuf::int32 currentquantity() const;
  inline void set_currentquantity(::google::protobuf::int32 value);
  
  // optional int32 sequence = 6;
  inline bool has_sequence() const;
  inline void clear_sequence();
  static const int kSequenceFieldNumber = 6;
  inline ::google::protobuf::int32 sequence() const;
  inline void set_sequence(::google::protobuf::int32 value);
  
  // optional string action = 7;
  inline bool has_action() const;
  inline void clear_action();
  static const int kActionFieldNumber = 7;
  inline const ::std::string& action() const;
  inline void set_action(const ::std::string& value);
  inline void set_action(const char* value);
  inline void set_action(const char* value, size_t size);
  inline ::std::string* mutable_action();
  
  // optional int32 postion = 8;
  inline bool has_postion() const;
  inline void clear_postion();
  static const int kPostionFieldNumber = 8;
  inline ::google::protobuf::int32 postion() const;
  inline void set_postion(::google::protobuf::int32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* planetid_;
  static const ::std::string _default_planetid_;
  ::google::protobuf::int32 currentsequence_;
  ::google::protobuf::int32 currentcount_;
  ::std::string* sku_;
  static const ::std::string _default_sku_;
  ::google::protobuf::int32 currentquantity_;
  ::google::protobuf::int32 sequence_;
  ::std::string* action_;
  static const ::std::string _default_action_;
  ::google::protobuf::int32 postion_;
  friend void  protobuf_AddDesc_RceUpdateSocialItem_2eproto();
  friend void protobuf_AssignDesc_RceUpdateSocialItem_2eproto();
  friend void protobuf_ShutdownFile_RceUpdateSocialItem_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];
  
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
  static RceUpdateSocialItem* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// RceUpdateSocialItem

// optional string planetId = 1;
inline bool RceUpdateSocialItem::has_planetid() const {
  return _has_bit(0);
}
inline void RceUpdateSocialItem::clear_planetid() {
  if (planetid_ != &_default_planetid_) {
    planetid_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& RceUpdateSocialItem::planetid() const {
  return *planetid_;
}
inline void RceUpdateSocialItem::set_planetid(const ::std::string& value) {
  _set_bit(0);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(value);
}
inline void RceUpdateSocialItem::set_planetid(const char* value) {
  _set_bit(0);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(value);
}
inline void RceUpdateSocialItem::set_planetid(const char* value, size_t size) {
  _set_bit(0);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateSocialItem::mutable_planetid() {
  _set_bit(0);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  return planetid_;
}

// optional int32 currentSequence = 2;
inline bool RceUpdateSocialItem::has_currentsequence() const {
  return _has_bit(1);
}
inline void RceUpdateSocialItem::clear_currentsequence() {
  currentsequence_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 RceUpdateSocialItem::currentsequence() const {
  return currentsequence_;
}
inline void RceUpdateSocialItem::set_currentsequence(::google::protobuf::int32 value) {
  _set_bit(1);
  currentsequence_ = value;
}

// optional int32 currentCount = 3;
inline bool RceUpdateSocialItem::has_currentcount() const {
  return _has_bit(2);
}
inline void RceUpdateSocialItem::clear_currentcount() {
  currentcount_ = 0;
  _clear_bit(2);
}
inline ::google::protobuf::int32 RceUpdateSocialItem::currentcount() const {
  return currentcount_;
}
inline void RceUpdateSocialItem::set_currentcount(::google::protobuf::int32 value) {
  _set_bit(2);
  currentcount_ = value;
}

// optional string sku = 4;
inline bool RceUpdateSocialItem::has_sku() const {
  return _has_bit(3);
}
inline void RceUpdateSocialItem::clear_sku() {
  if (sku_ != &_default_sku_) {
    sku_->clear();
  }
  _clear_bit(3);
}
inline const ::std::string& RceUpdateSocialItem::sku() const {
  return *sku_;
}
inline void RceUpdateSocialItem::set_sku(const ::std::string& value) {
  _set_bit(3);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(value);
}
inline void RceUpdateSocialItem::set_sku(const char* value) {
  _set_bit(3);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(value);
}
inline void RceUpdateSocialItem::set_sku(const char* value, size_t size) {
  _set_bit(3);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateSocialItem::mutable_sku() {
  _set_bit(3);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  return sku_;
}

// optional int32 currentQuantity = 5;
inline bool RceUpdateSocialItem::has_currentquantity() const {
  return _has_bit(4);
}
inline void RceUpdateSocialItem::clear_currentquantity() {
  currentquantity_ = 0;
  _clear_bit(4);
}
inline ::google::protobuf::int32 RceUpdateSocialItem::currentquantity() const {
  return currentquantity_;
}
inline void RceUpdateSocialItem::set_currentquantity(::google::protobuf::int32 value) {
  _set_bit(4);
  currentquantity_ = value;
}

// optional int32 sequence = 6;
inline bool RceUpdateSocialItem::has_sequence() const {
  return _has_bit(5);
}
inline void RceUpdateSocialItem::clear_sequence() {
  sequence_ = 0;
  _clear_bit(5);
}
inline ::google::protobuf::int32 RceUpdateSocialItem::sequence() const {
  return sequence_;
}
inline void RceUpdateSocialItem::set_sequence(::google::protobuf::int32 value) {
  _set_bit(5);
  sequence_ = value;
}

// optional string action = 7;
inline bool RceUpdateSocialItem::has_action() const {
  return _has_bit(6);
}
inline void RceUpdateSocialItem::clear_action() {
  if (action_ != &_default_action_) {
    action_->clear();
  }
  _clear_bit(6);
}
inline const ::std::string& RceUpdateSocialItem::action() const {
  return *action_;
}
inline void RceUpdateSocialItem::set_action(const ::std::string& value) {
  _set_bit(6);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  action_->assign(value);
}
inline void RceUpdateSocialItem::set_action(const char* value) {
  _set_bit(6);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  action_->assign(value);
}
inline void RceUpdateSocialItem::set_action(const char* value, size_t size) {
  _set_bit(6);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  action_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateSocialItem::mutable_action() {
  _set_bit(6);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  return action_;
}

// optional int32 postion = 8;
inline bool RceUpdateSocialItem::has_postion() const {
  return _has_bit(7);
}
inline void RceUpdateSocialItem::clear_postion() {
  postion_ = 0;
  _clear_bit(7);
}
inline ::google::protobuf::int32 RceUpdateSocialItem::postion() const {
  return postion_;
}
inline void RceUpdateSocialItem::set_postion(::google::protobuf::int32 value) {
  _set_bit(7);
  postion_ = value;
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_RceUpdateSocialItem_2eproto__INCLUDED
