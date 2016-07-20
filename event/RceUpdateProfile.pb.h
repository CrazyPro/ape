// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_RceUpdateProfile_2eproto__INCLUDED
#define PROTOBUF_RceUpdateProfile_2eproto__INCLUDED

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
void  protobuf_AddDesc_RceUpdateProfile_2eproto();
void protobuf_AssignDesc_RceUpdateProfile_2eproto();
void protobuf_ShutdownFile_RceUpdateProfile_2eproto();

class RceUpdateProfile;
class Transaction3;
class SocialItems;

// ===================================================================

class RceUpdateProfile : public ::google::protobuf::Message {
 public:
  RceUpdateProfile();
  virtual ~RceUpdateProfile();
  
  RceUpdateProfile(const RceUpdateProfile& from);
  
  inline RceUpdateProfile& operator=(const RceUpdateProfile& from) {
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
  static const RceUpdateProfile& default_instance();
  void Swap(RceUpdateProfile* other);
  
  // implements Message ----------------------------------------------
  
  RceUpdateProfile* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RceUpdateProfile& from);
  void MergeFrom(const RceUpdateProfile& from);
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
  
  // optional .Transaction3 transaction = 1;
  inline bool has_transaction() const;
  inline void clear_transaction();
  static const int kTransactionFieldNumber = 1;
  inline const ::Transaction3& transaction() const;
  inline ::Transaction3* mutable_transaction();
  
  // optional string sku = 2;
  inline bool has_sku() const;
  inline void clear_sku();
  static const int kSkuFieldNumber = 2;
  inline const ::std::string& sku() const;
  inline void set_sku(const ::std::string& value);
  inline void set_sku(const char* value);
  inline void set_sku(const char* value, size_t size);
  inline ::std::string* mutable_sku();
  
  // optional string value = 3;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 3;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const char* value, size_t size);
  inline ::std::string* mutable_value();
  
  // optional string key = 4;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 4;
  inline const ::std::string& key() const;
  inline void set_key(const ::std::string& value);
  inline void set_key(const char* value);
  inline void set_key(const char* value, size_t size);
  inline ::std::string* mutable_key();
  
  // optional string planetId = 5;
  inline bool has_planetid() const;
  inline void clear_planetid();
  static const int kPlanetIdFieldNumber = 5;
  inline const ::std::string& planetid() const;
  inline void set_planetid(const ::std::string& value);
  inline void set_planetid(const char* value);
  inline void set_planetid(const char* value, size_t size);
  inline ::std::string* mutable_planetid();
  
  // optional string action = 6;
  inline bool has_action() const;
  inline void clear_action();
  static const int kActionFieldNumber = 6;
  inline const ::std::string& action() const;
  inline void set_action(const ::std::string& value);
  inline void set_action(const char* value);
  inline void set_action(const char* value, size_t size);
  inline ::std::string* mutable_action();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::Transaction3* transaction_;
  ::std::string* sku_;
  static const ::std::string _default_sku_;
  ::std::string* value_;
  static const ::std::string _default_value_;
  ::std::string* key_;
  static const ::std::string _default_key_;
  ::std::string* planetid_;
  static const ::std::string _default_planetid_;
  ::std::string* action_;
  static const ::std::string _default_action_;
  friend void  protobuf_AddDesc_RceUpdateProfile_2eproto();
  friend void protobuf_AssignDesc_RceUpdateProfile_2eproto();
  friend void protobuf_ShutdownFile_RceUpdateProfile_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];
  
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
  static RceUpdateProfile* default_instance_;
};
// -------------------------------------------------------------------

class Transaction3 : public ::google::protobuf::Message {
 public:
  Transaction3();
  virtual ~Transaction3();
  
  Transaction3(const Transaction3& from);
  
  inline Transaction3& operator=(const Transaction3& from) {
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
  static const Transaction3& default_instance();
  void Swap(Transaction3* other);
  
  // implements Message ----------------------------------------------
  
  Transaction3* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Transaction3& from);
  void MergeFrom(const Transaction3& from);
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
  
  // optional int32 exp = 1;
  inline bool has_exp() const;
  inline void clear_exp();
  static const int kExpFieldNumber = 1;
  inline ::google::protobuf::int32 exp() const;
  inline void set_exp(::google::protobuf::int32 value);
  
  // optional int32 minerals = 2;
  inline bool has_minerals() const;
  inline void clear_minerals();
  static const int kMineralsFieldNumber = 2;
  inline ::google::protobuf::int32 minerals() const;
  inline void set_minerals(::google::protobuf::int32 value);
  
  // repeated .SocialItems socialItems = 3;
  inline int socialitems_size() const;
  inline void clear_socialitems();
  static const int kSocialItemsFieldNumber = 3;
  inline const ::google::protobuf::RepeatedPtrField< ::SocialItems >& socialitems() const;
  inline ::google::protobuf::RepeatedPtrField< ::SocialItems >* mutable_socialitems();
  inline const ::SocialItems& socialitems(int index) const;
  inline ::SocialItems* mutable_socialitems(int index);
  inline ::SocialItems* add_socialitems();
  
  // optional string client = 4;
  inline bool has_client() const;
  inline void clear_client();
  static const int kClientFieldNumber = 4;
  inline const ::std::string& client() const;
  inline void set_client(const ::std::string& value);
  inline void set_client(const char* value);
  inline void set_client(const char* value, size_t size);
  inline ::std::string* mutable_client();
  
  // optional string event = 5;
  inline bool has_event() const;
  inline void clear_event();
  static const int kEventFieldNumber = 5;
  inline const ::std::string& event() const;
  inline void set_event(const ::std::string& value);
  inline void set_event(const char* value);
  inline void set_event(const char* value, size_t size);
  inline ::std::string* mutable_event();
  
  // optional int32 cash = 6;
  inline bool has_cash() const;
  inline void clear_cash();
  static const int kCashFieldNumber = 6;
  inline ::google::protobuf::int32 cash() const;
  inline void set_cash(::google::protobuf::int32 value);
  
  // optional int32 droids = 7;
  inline bool has_droids() const;
  inline void clear_droids();
  static const int kDroidsFieldNumber = 7;
  inline ::google::protobuf::int32 droids() const;
  inline void set_droids(::google::protobuf::int32 value);
  
  // optional int32 coins = 8;
  inline bool has_coins() const;
  inline void clear_coins();
  static const int kCoinsFieldNumber = 8;
  inline ::google::protobuf::int32 coins() const;
  inline void set_coins(::google::protobuf::int32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 exp_;
  ::google::protobuf::int32 minerals_;
  ::google::protobuf::RepeatedPtrField< ::SocialItems > socialitems_;
  ::std::string* client_;
  static const ::std::string _default_client_;
  ::std::string* event_;
  static const ::std::string _default_event_;
  ::google::protobuf::int32 cash_;
  ::google::protobuf::int32 droids_;
  ::google::protobuf::int32 coins_;
  friend void  protobuf_AddDesc_RceUpdateProfile_2eproto();
  friend void protobuf_AssignDesc_RceUpdateProfile_2eproto();
  friend void protobuf_ShutdownFile_RceUpdateProfile_2eproto();
  
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
  static Transaction3* default_instance_;
};
// -------------------------------------------------------------------

class SocialItems : public ::google::protobuf::Message {
 public:
  SocialItems();
  virtual ~SocialItems();
  
  SocialItems(const SocialItems& from);
  
  inline SocialItems& operator=(const SocialItems& from) {
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
  static const SocialItems& default_instance();
  void Swap(SocialItems* other);
  
  // implements Message ----------------------------------------------
  
  SocialItems* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SocialItems& from);
  void MergeFrom(const SocialItems& from);
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
  
  // optional string sku = 1;
  inline bool has_sku() const;
  inline void clear_sku();
  static const int kSkuFieldNumber = 1;
  inline const ::std::string& sku() const;
  inline void set_sku(const ::std::string& value);
  inline void set_sku(const char* value);
  inline void set_sku(const char* value, size_t size);
  inline ::std::string* mutable_sku();
  
  // optional int32 amount = 2;
  inline bool has_amount() const;
  inline void clear_amount();
  static const int kAmountFieldNumber = 2;
  inline ::google::protobuf::int32 amount() const;
  inline void set_amount(::google::protobuf::int32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* sku_;
  static const ::std::string _default_sku_;
  ::google::protobuf::int32 amount_;
  friend void  protobuf_AddDesc_RceUpdateProfile_2eproto();
  friend void protobuf_AssignDesc_RceUpdateProfile_2eproto();
  friend void protobuf_ShutdownFile_RceUpdateProfile_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
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
  static SocialItems* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// RceUpdateProfile

// optional .Transaction3 transaction = 1;
inline bool RceUpdateProfile::has_transaction() const {
  return _has_bit(0);
}
inline void RceUpdateProfile::clear_transaction() {
  if (transaction_ != NULL) transaction_->::Transaction3::Clear();
  _clear_bit(0);
}
inline const ::Transaction3& RceUpdateProfile::transaction() const {
  return transaction_ != NULL ? *transaction_ : *default_instance_->transaction_;
}
inline ::Transaction3* RceUpdateProfile::mutable_transaction() {
  _set_bit(0);
  if (transaction_ == NULL) transaction_ = new ::Transaction3;
  return transaction_;
}

// optional string sku = 2;
inline bool RceUpdateProfile::has_sku() const {
  return _has_bit(1);
}
inline void RceUpdateProfile::clear_sku() {
  if (sku_ != &_default_sku_) {
    sku_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& RceUpdateProfile::sku() const {
  return *sku_;
}
inline void RceUpdateProfile::set_sku(const ::std::string& value) {
  _set_bit(1);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(value);
}
inline void RceUpdateProfile::set_sku(const char* value) {
  _set_bit(1);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(value);
}
inline void RceUpdateProfile::set_sku(const char* value, size_t size) {
  _set_bit(1);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateProfile::mutable_sku() {
  _set_bit(1);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  return sku_;
}

// optional string value = 3;
inline bool RceUpdateProfile::has_value() const {
  return _has_bit(2);
}
inline void RceUpdateProfile::clear_value() {
  if (value_ != &_default_value_) {
    value_->clear();
  }
  _clear_bit(2);
}
inline const ::std::string& RceUpdateProfile::value() const {
  return *value_;
}
inline void RceUpdateProfile::set_value(const ::std::string& value) {
  _set_bit(2);
  if (value_ == &_default_value_) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void RceUpdateProfile::set_value(const char* value) {
  _set_bit(2);
  if (value_ == &_default_value_) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void RceUpdateProfile::set_value(const char* value, size_t size) {
  _set_bit(2);
  if (value_ == &_default_value_) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateProfile::mutable_value() {
  _set_bit(2);
  if (value_ == &_default_value_) {
    value_ = new ::std::string;
  }
  return value_;
}

// optional string key = 4;
inline bool RceUpdateProfile::has_key() const {
  return _has_bit(3);
}
inline void RceUpdateProfile::clear_key() {
  if (key_ != &_default_key_) {
    key_->clear();
  }
  _clear_bit(3);
}
inline const ::std::string& RceUpdateProfile::key() const {
  return *key_;
}
inline void RceUpdateProfile::set_key(const ::std::string& value) {
  _set_bit(3);
  if (key_ == &_default_key_) {
    key_ = new ::std::string;
  }
  key_->assign(value);
}
inline void RceUpdateProfile::set_key(const char* value) {
  _set_bit(3);
  if (key_ == &_default_key_) {
    key_ = new ::std::string;
  }
  key_->assign(value);
}
inline void RceUpdateProfile::set_key(const char* value, size_t size) {
  _set_bit(3);
  if (key_ == &_default_key_) {
    key_ = new ::std::string;
  }
  key_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateProfile::mutable_key() {
  _set_bit(3);
  if (key_ == &_default_key_) {
    key_ = new ::std::string;
  }
  return key_;
}

// optional string planetId = 5;
inline bool RceUpdateProfile::has_planetid() const {
  return _has_bit(4);
}
inline void RceUpdateProfile::clear_planetid() {
  if (planetid_ != &_default_planetid_) {
    planetid_->clear();
  }
  _clear_bit(4);
}
inline const ::std::string& RceUpdateProfile::planetid() const {
  return *planetid_;
}
inline void RceUpdateProfile::set_planetid(const ::std::string& value) {
  _set_bit(4);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(value);
}
inline void RceUpdateProfile::set_planetid(const char* value) {
  _set_bit(4);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(value);
}
inline void RceUpdateProfile::set_planetid(const char* value, size_t size) {
  _set_bit(4);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateProfile::mutable_planetid() {
  _set_bit(4);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  return planetid_;
}

// optional string action = 6;
inline bool RceUpdateProfile::has_action() const {
  return _has_bit(5);
}
inline void RceUpdateProfile::clear_action() {
  if (action_ != &_default_action_) {
    action_->clear();
  }
  _clear_bit(5);
}
inline const ::std::string& RceUpdateProfile::action() const {
  return *action_;
}
inline void RceUpdateProfile::set_action(const ::std::string& value) {
  _set_bit(5);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  action_->assign(value);
}
inline void RceUpdateProfile::set_action(const char* value) {
  _set_bit(5);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  action_->assign(value);
}
inline void RceUpdateProfile::set_action(const char* value, size_t size) {
  _set_bit(5);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  action_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateProfile::mutable_action() {
  _set_bit(5);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  return action_;
}

// -------------------------------------------------------------------

// Transaction3

// optional int32 exp = 1;
inline bool Transaction3::has_exp() const {
  return _has_bit(0);
}
inline void Transaction3::clear_exp() {
  exp_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 Transaction3::exp() const {
  return exp_;
}
inline void Transaction3::set_exp(::google::protobuf::int32 value) {
  _set_bit(0);
  exp_ = value;
}

// optional int32 minerals = 2;
inline bool Transaction3::has_minerals() const {
  return _has_bit(1);
}
inline void Transaction3::clear_minerals() {
  minerals_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 Transaction3::minerals() const {
  return minerals_;
}
inline void Transaction3::set_minerals(::google::protobuf::int32 value) {
  _set_bit(1);
  minerals_ = value;
}

// repeated .SocialItems socialItems = 3;
inline int Transaction3::socialitems_size() const {
  return socialitems_.size();
}
inline void Transaction3::clear_socialitems() {
  socialitems_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::SocialItems >&
Transaction3::socialitems() const {
  return socialitems_;
}
inline ::google::protobuf::RepeatedPtrField< ::SocialItems >*
Transaction3::mutable_socialitems() {
  return &socialitems_;
}
inline const ::SocialItems& Transaction3::socialitems(int index) const {
  return socialitems_.Get(index);
}
inline ::SocialItems* Transaction3::mutable_socialitems(int index) {
  return socialitems_.Mutable(index);
}
inline ::SocialItems* Transaction3::add_socialitems() {
  return socialitems_.Add();
}

// optional string client = 4;
inline bool Transaction3::has_client() const {
  return _has_bit(3);
}
inline void Transaction3::clear_client() {
  if (client_ != &_default_client_) {
    client_->clear();
  }
  _clear_bit(3);
}
inline const ::std::string& Transaction3::client() const {
  return *client_;
}
inline void Transaction3::set_client(const ::std::string& value) {
  _set_bit(3);
  if (client_ == &_default_client_) {
    client_ = new ::std::string;
  }
  client_->assign(value);
}
inline void Transaction3::set_client(const char* value) {
  _set_bit(3);
  if (client_ == &_default_client_) {
    client_ = new ::std::string;
  }
  client_->assign(value);
}
inline void Transaction3::set_client(const char* value, size_t size) {
  _set_bit(3);
  if (client_ == &_default_client_) {
    client_ = new ::std::string;
  }
  client_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Transaction3::mutable_client() {
  _set_bit(3);
  if (client_ == &_default_client_) {
    client_ = new ::std::string;
  }
  return client_;
}

// optional string event = 5;
inline bool Transaction3::has_event() const {
  return _has_bit(4);
}
inline void Transaction3::clear_event() {
  if (event_ != &_default_event_) {
    event_->clear();
  }
  _clear_bit(4);
}
inline const ::std::string& Transaction3::event() const {
  return *event_;
}
inline void Transaction3::set_event(const ::std::string& value) {
  _set_bit(4);
  if (event_ == &_default_event_) {
    event_ = new ::std::string;
  }
  event_->assign(value);
}
inline void Transaction3::set_event(const char* value) {
  _set_bit(4);
  if (event_ == &_default_event_) {
    event_ = new ::std::string;
  }
  event_->assign(value);
}
inline void Transaction3::set_event(const char* value, size_t size) {
  _set_bit(4);
  if (event_ == &_default_event_) {
    event_ = new ::std::string;
  }
  event_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Transaction3::mutable_event() {
  _set_bit(4);
  if (event_ == &_default_event_) {
    event_ = new ::std::string;
  }
  return event_;
}

// optional int32 cash = 6;
inline bool Transaction3::has_cash() const {
  return _has_bit(5);
}
inline void Transaction3::clear_cash() {
  cash_ = 0;
  _clear_bit(5);
}
inline ::google::protobuf::int32 Transaction3::cash() const {
  return cash_;
}
inline void Transaction3::set_cash(::google::protobuf::int32 value) {
  _set_bit(5);
  cash_ = value;
}

// optional int32 droids = 7;
inline bool Transaction3::has_droids() const {
  return _has_bit(6);
}
inline void Transaction3::clear_droids() {
  droids_ = 0;
  _clear_bit(6);
}
inline ::google::protobuf::int32 Transaction3::droids() const {
  return droids_;
}
inline void Transaction3::set_droids(::google::protobuf::int32 value) {
  _set_bit(6);
  droids_ = value;
}

// optional int32 coins = 8;
inline bool Transaction3::has_coins() const {
  return _has_bit(7);
}
inline void Transaction3::clear_coins() {
  coins_ = 0;
  _clear_bit(7);
}
inline ::google::protobuf::int32 Transaction3::coins() const {
  return coins_;
}
inline void Transaction3::set_coins(::google::protobuf::int32 value) {
  _set_bit(7);
  coins_ = value;
}

// -------------------------------------------------------------------

// SocialItems

// optional string sku = 1;
inline bool SocialItems::has_sku() const {
  return _has_bit(0);
}
inline void SocialItems::clear_sku() {
  if (sku_ != &_default_sku_) {
    sku_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& SocialItems::sku() const {
  return *sku_;
}
inline void SocialItems::set_sku(const ::std::string& value) {
  _set_bit(0);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(value);
}
inline void SocialItems::set_sku(const char* value) {
  _set_bit(0);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(value);
}
inline void SocialItems::set_sku(const char* value, size_t size) {
  _set_bit(0);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SocialItems::mutable_sku() {
  _set_bit(0);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  return sku_;
}

// optional int32 amount = 2;
inline bool SocialItems::has_amount() const {
  return _has_bit(1);
}
inline void SocialItems::clear_amount() {
  amount_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 SocialItems::amount() const {
  return amount_;
}
inline void SocialItems::set_amount(::google::protobuf::int32 value) {
  _set_bit(1);
  amount_ = value;
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_RceUpdateProfile_2eproto__INCLUDED
