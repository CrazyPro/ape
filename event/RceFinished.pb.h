// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_RceFinished_2eproto__INCLUDED
#define PROTOBUF_RceFinished_2eproto__INCLUDED

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
#include "MsgTransaction.pb.h"

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_RceFinished_2eproto();
void protobuf_AssignDesc_RceFinished_2eproto();
void protobuf_ShutdownFile_RceFinished_2eproto();

class RceFinished;

// ===================================================================

class RceFinished : public ::google::protobuf::Message {
 public:
  RceFinished();
  virtual ~RceFinished();
  
  RceFinished(const RceFinished& from);
  
  inline RceFinished& operator=(const RceFinished& from) {
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
  static const RceFinished& default_instance();
  void Swap(RceFinished* other);
  
  // implements Message ----------------------------------------------
  
  RceFinished* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RceFinished& from);
  void MergeFrom(const RceFinished& from);
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
  
  // optional int32 planetId = 1;
  inline bool has_planetid() const;
  inline void clear_planetid();
  static const int kPlanetIdFieldNumber = 1;
  inline ::google::protobuf::int32 planetid() const;
  inline void set_planetid(::google::protobuf::int32 value);
  
  // optional int32 energyBeforeShot = 2;
  inline bool has_energybeforeshot() const;
  inline void clear_energybeforeshot();
  static const int kEnergyBeforeShotFieldNumber = 2;
  inline ::google::protobuf::int32 energybeforeshot() const;
  inline void set_energybeforeshot(::google::protobuf::int32 value);
  
  // optional .MsgTransaction transaction = 3;
  inline bool has_transaction() const;
  inline void clear_transaction();
  static const int kTransactionFieldNumber = 3;
  inline const ::MsgTransaction& transaction() const;
  inline ::MsgTransaction* mutable_transaction();
  
  // optional int32 destroyed = 4;
  inline bool has_destroyed() const;
  inline void clear_destroyed();
  static const int kDestroyedFieldNumber = 4;
  inline ::google::protobuf::int32 destroyed() const;
  inline void set_destroyed(::google::protobuf::int32 value);
  
  // optional int32 damage = 5;
  inline bool has_damage() const;
  inline void clear_damage();
  static const int kDamageFieldNumber = 5;
  inline ::google::protobuf::int32 damage() const;
  inline void set_damage(::google::protobuf::int32 value);
  
  // optional .MsgTransaction transactionTarget = 6;
  inline bool has_transactiontarget() const;
  inline void clear_transactiontarget();
  static const int kTransactionTargetFieldNumber = 6;
  inline const ::MsgTransaction& transactiontarget() const;
  inline ::MsgTransaction* mutable_transactiontarget();
  
  // repeated string attackers = 7;
  inline int attackers_size() const;
  inline void clear_attackers();
  static const int kAttackersFieldNumber = 7;
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& attackers() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_attackers();
  inline const ::std::string& attackers(int index) const;
  inline ::std::string* mutable_attackers(int index);
  inline void set_attackers(int index, const ::std::string& value);
  inline void set_attackers(int index, const char* value);
  inline void set_attackers(int index, const char* value, size_t size);
  inline ::std::string* add_attackers();
  inline void add_attackers(const ::std::string& value);
  inline void add_attackers(const char* value);
  inline void add_attackers(const char* value, size_t size);
  
  // optional int32 itemSid = 8;
  inline bool has_itemsid() const;
  inline void clear_itemsid();
  static const int kItemSidFieldNumber = 8;
  inline ::google::protobuf::int32 itemsid() const;
  inline void set_itemsid(::google::protobuf::int32 value);
  
  // optional bool npcSuccess = 9;
  inline bool has_npcsuccess() const;
  inline void clear_npcsuccess();
  static const int kNpcSuccessFieldNumber = 9;
  inline bool npcsuccess() const;
  inline void set_npcsuccess(bool value);
  
  // optional int32 millis = 10;
  inline bool has_millis() const;
  inline void clear_millis();
  static const int kMillisFieldNumber = 10;
  inline ::google::protobuf::int32 millis() const;
  inline void set_millis(::google::protobuf::int32 value);
  
  // optional int32 damageProtectionTime = 11;
  inline bool has_damageprotectiontime() const;
  inline void clear_damageprotectiontime();
  static const int kDamageProtectionTimeFieldNumber = 11;
  inline ::google::protobuf::int32 damageprotectiontime() const;
  inline void set_damageprotectiontime(::google::protobuf::int32 value);
  
  // optional int32 coins = 12;
  inline bool has_coins() const;
  inline void clear_coins();
  static const int kCoinsFieldNumber = 12;
  inline ::google::protobuf::int32 coins() const;
  inline void set_coins(::google::protobuf::int32 value);
  
  // optional int32 mineral = 13;
  inline bool has_mineral() const;
  inline void clear_mineral();
  static const int kMineralFieldNumber = 13;
  inline ::google::protobuf::int32 mineral() const;
  inline void set_mineral(::google::protobuf::int32 value);
  
  // optional bool rewardFlag = 14;
  inline bool has_rewardflag() const;
  inline void clear_rewardflag();
  static const int kRewardFlagFieldNumber = 14;
  inline bool rewardflag() const;
  inline void set_rewardflag(bool value);
  
  // optional string rewardSku = 15;
  inline bool has_rewardsku() const;
  inline void clear_rewardsku();
  static const int kRewardSkuFieldNumber = 15;
  inline const ::std::string& rewardsku() const;
  inline void set_rewardsku(const ::std::string& value);
  inline void set_rewardsku(const char* value);
  inline void set_rewardsku(const char* value, size_t size);
  inline ::std::string* mutable_rewardsku();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 planetid_;
  ::google::protobuf::int32 energybeforeshot_;
  ::MsgTransaction* transaction_;
  ::google::protobuf::int32 destroyed_;
  ::google::protobuf::int32 damage_;
  ::MsgTransaction* transactiontarget_;
  ::google::protobuf::RepeatedPtrField< ::std::string> attackers_;
  ::google::protobuf::int32 itemsid_;
  bool npcsuccess_;
  ::google::protobuf::int32 millis_;
  ::google::protobuf::int32 damageprotectiontime_;
  ::google::protobuf::int32 coins_;
  ::google::protobuf::int32 mineral_;
  bool rewardflag_;
  ::std::string* rewardsku_;
  static const ::std::string _default_rewardsku_;
  friend void  protobuf_AddDesc_RceFinished_2eproto();
  friend void protobuf_AssignDesc_RceFinished_2eproto();
  friend void protobuf_ShutdownFile_RceFinished_2eproto();
  
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
  static RceFinished* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// RceFinished

// optional int32 planetId = 1;
inline bool RceFinished::has_planetid() const {
  return _has_bit(0);
}
inline void RceFinished::clear_planetid() {
  planetid_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 RceFinished::planetid() const {
  return planetid_;
}
inline void RceFinished::set_planetid(::google::protobuf::int32 value) {
  _set_bit(0);
  planetid_ = value;
}

// optional int32 energyBeforeShot = 2;
inline bool RceFinished::has_energybeforeshot() const {
  return _has_bit(1);
}
inline void RceFinished::clear_energybeforeshot() {
  energybeforeshot_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 RceFinished::energybeforeshot() const {
  return energybeforeshot_;
}
inline void RceFinished::set_energybeforeshot(::google::protobuf::int32 value) {
  _set_bit(1);
  energybeforeshot_ = value;
}

// optional .MsgTransaction transaction = 3;
inline bool RceFinished::has_transaction() const {
  return _has_bit(2);
}
inline void RceFinished::clear_transaction() {
  if (transaction_ != NULL) transaction_->::MsgTransaction::Clear();
  _clear_bit(2);
}
inline const ::MsgTransaction& RceFinished::transaction() const {
  return transaction_ != NULL ? *transaction_ : *default_instance_->transaction_;
}
inline ::MsgTransaction* RceFinished::mutable_transaction() {
  _set_bit(2);
  if (transaction_ == NULL) transaction_ = new ::MsgTransaction;
  return transaction_;
}

// optional int32 destroyed = 4;
inline bool RceFinished::has_destroyed() const {
  return _has_bit(3);
}
inline void RceFinished::clear_destroyed() {
  destroyed_ = 0;
  _clear_bit(3);
}
inline ::google::protobuf::int32 RceFinished::destroyed() const {
  return destroyed_;
}
inline void RceFinished::set_destroyed(::google::protobuf::int32 value) {
  _set_bit(3);
  destroyed_ = value;
}

// optional int32 damage = 5;
inline bool RceFinished::has_damage() const {
  return _has_bit(4);
}
inline void RceFinished::clear_damage() {
  damage_ = 0;
  _clear_bit(4);
}
inline ::google::protobuf::int32 RceFinished::damage() const {
  return damage_;
}
inline void RceFinished::set_damage(::google::protobuf::int32 value) {
  _set_bit(4);
  damage_ = value;
}

// optional .MsgTransaction transactionTarget = 6;
inline bool RceFinished::has_transactiontarget() const {
  return _has_bit(5);
}
inline void RceFinished::clear_transactiontarget() {
  if (transactiontarget_ != NULL) transactiontarget_->::MsgTransaction::Clear();
  _clear_bit(5);
}
inline const ::MsgTransaction& RceFinished::transactiontarget() const {
  return transactiontarget_ != NULL ? *transactiontarget_ : *default_instance_->transactiontarget_;
}
inline ::MsgTransaction* RceFinished::mutable_transactiontarget() {
  _set_bit(5);
  if (transactiontarget_ == NULL) transactiontarget_ = new ::MsgTransaction;
  return transactiontarget_;
}

// repeated string attackers = 7;
inline int RceFinished::attackers_size() const {
  return attackers_.size();
}
inline void RceFinished::clear_attackers() {
  attackers_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
RceFinished::attackers() const {
  return attackers_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
RceFinished::mutable_attackers() {
  return &attackers_;
}
inline const ::std::string& RceFinished::attackers(int index) const {
  return attackers_.Get(index);
}
inline ::std::string* RceFinished::mutable_attackers(int index) {
  return attackers_.Mutable(index);
}
inline void RceFinished::set_attackers(int index, const ::std::string& value) {
  attackers_.Mutable(index)->assign(value);
}
inline void RceFinished::set_attackers(int index, const char* value) {
  attackers_.Mutable(index)->assign(value);
}
inline void RceFinished::set_attackers(int index, const char* value, size_t size) {
  attackers_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceFinished::add_attackers() {
  return attackers_.Add();
}
inline void RceFinished::add_attackers(const ::std::string& value) {
  attackers_.Add()->assign(value);
}
inline void RceFinished::add_attackers(const char* value) {
  attackers_.Add()->assign(value);
}
inline void RceFinished::add_attackers(const char* value, size_t size) {
  attackers_.Add()->assign(reinterpret_cast<const char*>(value), size);
}

// optional int32 itemSid = 8;
inline bool RceFinished::has_itemsid() const {
  return _has_bit(7);
}
inline void RceFinished::clear_itemsid() {
  itemsid_ = 0;
  _clear_bit(7);
}
inline ::google::protobuf::int32 RceFinished::itemsid() const {
  return itemsid_;
}
inline void RceFinished::set_itemsid(::google::protobuf::int32 value) {
  _set_bit(7);
  itemsid_ = value;
}

// optional bool npcSuccess = 9;
inline bool RceFinished::has_npcsuccess() const {
  return _has_bit(8);
}
inline void RceFinished::clear_npcsuccess() {
  npcsuccess_ = false;
  _clear_bit(8);
}
inline bool RceFinished::npcsuccess() const {
  return npcsuccess_;
}
inline void RceFinished::set_npcsuccess(bool value) {
  _set_bit(8);
  npcsuccess_ = value;
}

// optional int32 millis = 10;
inline bool RceFinished::has_millis() const {
  return _has_bit(9);
}
inline void RceFinished::clear_millis() {
  millis_ = 0;
  _clear_bit(9);
}
inline ::google::protobuf::int32 RceFinished::millis() const {
  return millis_;
}
inline void RceFinished::set_millis(::google::protobuf::int32 value) {
  _set_bit(9);
  millis_ = value;
}

// optional int32 damageProtectionTime = 11;
inline bool RceFinished::has_damageprotectiontime() const {
  return _has_bit(10);
}
inline void RceFinished::clear_damageprotectiontime() {
  damageprotectiontime_ = 0;
  _clear_bit(10);
}
inline ::google::protobuf::int32 RceFinished::damageprotectiontime() const {
  return damageprotectiontime_;
}
inline void RceFinished::set_damageprotectiontime(::google::protobuf::int32 value) {
  _set_bit(10);
  damageprotectiontime_ = value;
}

// optional int32 coins = 12;
inline bool RceFinished::has_coins() const {
  return _has_bit(11);
}
inline void RceFinished::clear_coins() {
  coins_ = 0;
  _clear_bit(11);
}
inline ::google::protobuf::int32 RceFinished::coins() const {
  return coins_;
}
inline void RceFinished::set_coins(::google::protobuf::int32 value) {
  _set_bit(11);
  coins_ = value;
}

// optional int32 mineral = 13;
inline bool RceFinished::has_mineral() const {
  return _has_bit(12);
}
inline void RceFinished::clear_mineral() {
  mineral_ = 0;
  _clear_bit(12);
}
inline ::google::protobuf::int32 RceFinished::mineral() const {
  return mineral_;
}
inline void RceFinished::set_mineral(::google::protobuf::int32 value) {
  _set_bit(12);
  mineral_ = value;
}

// optional bool rewardFlag = 14;
inline bool RceFinished::has_rewardflag() const {
  return _has_bit(13);
}
inline void RceFinished::clear_rewardflag() {
  rewardflag_ = false;
  _clear_bit(13);
}
inline bool RceFinished::rewardflag() const {
  return rewardflag_;
}
inline void RceFinished::set_rewardflag(bool value) {
  _set_bit(13);
  rewardflag_ = value;
}

// optional string rewardSku = 15;
inline bool RceFinished::has_rewardsku() const {
  return _has_bit(14);
}
inline void RceFinished::clear_rewardsku() {
  if (rewardsku_ != &_default_rewardsku_) {
    rewardsku_->clear();
  }
  _clear_bit(14);
}
inline const ::std::string& RceFinished::rewardsku() const {
  return *rewardsku_;
}
inline void RceFinished::set_rewardsku(const ::std::string& value) {
  _set_bit(14);
  if (rewardsku_ == &_default_rewardsku_) {
    rewardsku_ = new ::std::string;
  }
  rewardsku_->assign(value);
}
inline void RceFinished::set_rewardsku(const char* value) {
  _set_bit(14);
  if (rewardsku_ == &_default_rewardsku_) {
    rewardsku_ = new ::std::string;
  }
  rewardsku_->assign(value);
}
inline void RceFinished::set_rewardsku(const char* value, size_t size) {
  _set_bit(14);
  if (rewardsku_ == &_default_rewardsku_) {
    rewardsku_ = new ::std::string;
  }
  rewardsku_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceFinished::mutable_rewardsku() {
  _set_bit(14);
  if (rewardsku_ == &_default_rewardsku_) {
    rewardsku_ = new ::std::string;
  }
  return rewardsku_;
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_RceFinished_2eproto__INCLUDED
