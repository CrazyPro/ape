// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_MsgBuildingItem_2eproto__INCLUDED
#define PROTOBUF_MsgBuildingItem_2eproto__INCLUDED

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
void  protobuf_AddDesc_MsgBuildingItem_2eproto();
void protobuf_AssignDesc_MsgBuildingItem_2eproto();
void protobuf_ShutdownFile_MsgBuildingItem_2eproto();

class MsgBuildingItem;

// ===================================================================

class MsgBuildingItem : public ::google::protobuf::Message {
 public:
  MsgBuildingItem();
  virtual ~MsgBuildingItem();
  
  MsgBuildingItem(const MsgBuildingItem& from);
  
  inline MsgBuildingItem& operator=(const MsgBuildingItem& from) {
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
  static const MsgBuildingItem& default_instance();
  void Swap(MsgBuildingItem* other);
  
  // implements Message ----------------------------------------------
  
  MsgBuildingItem* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgBuildingItem& from);
  void MergeFrom(const MsgBuildingItem& from);
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
  
  // optional int32 sid = 2;
  inline bool has_sid() const;
  inline void clear_sid();
  static const int kSidFieldNumber = 2;
  inline ::google::protobuf::int32 sid() const;
  inline void set_sid(::google::protobuf::int32 value);
  
  // optional int32 type = 3;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 3;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);
  
  // optional int32 upgradeId = 4;
  inline bool has_upgradeid() const;
  inline void clear_upgradeid();
  static const int kUpgradeIdFieldNumber = 4;
  inline ::google::protobuf::int32 upgradeid() const;
  inline void set_upgradeid(::google::protobuf::int32 value);
  
  // optional int32 y = 5;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 5;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);
  
  // optional int32 x = 6;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 6;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);
  
  // optional int32 state = 7;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 7;
  inline ::google::protobuf::int32 state() const;
  inline void set_state(::google::protobuf::int32 value);
  
  // optional int32 energy = 8;
  inline bool has_energy() const;
  inline void clear_energy();
  static const int kEnergyFieldNumber = 8;
  inline ::google::protobuf::int32 energy() const;
  inline void set_energy(::google::protobuf::int32 value);
  
  // optional int32 energyPercent = 9;
  inline bool has_energypercent() const;
  inline void clear_energypercent();
  static const int kEnergyPercentFieldNumber = 9;
  inline ::google::protobuf::int32 energypercent() const;
  inline void set_energypercent(::google::protobuf::int32 value);
  
  // optional int32 time = 10;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 10;
  inline ::google::protobuf::int32 time() const;
  inline void set_time(::google::protobuf::int32 value);
  
  // optional string sku = 11;
  inline bool has_sku() const;
  inline void clear_sku();
  static const int kSkuFieldNumber = 11;
  inline const ::std::string& sku() const;
  inline void set_sku(const ::std::string& value);
  inline void set_sku(const char* value);
  inline void set_sku(const char* value, size_t size);
  inline ::std::string* mutable_sku();
  
  // optional int32 incomeToRestore = 12;
  inline bool has_incometorestore() const;
  inline void clear_incometorestore();
  static const int kIncomeToRestoreFieldNumber = 12;
  inline ::google::protobuf::int32 incometorestore() const;
  inline void set_incometorestore(::google::protobuf::int32 value);
  
  // optional int32 repairing = 13;
  inline bool has_repairing() const;
  inline void clear_repairing();
  static const int kRepairingFieldNumber = 13;
  inline ::google::protobuf::int32 repairing() const;
  inline void set_repairing(::google::protobuf::int32 value);
  
  // repeated int32 Item = 14;
  inline int item_size() const;
  inline void clear_item();
  static const int kItemFieldNumber = 14;
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >& item() const
      ;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >* mutable_item();
  inline ::google::protobuf::int32 item(int index) const;
  inline void set_item(int index, ::google::protobuf::int32 value);
  inline void add_item(::google::protobuf::int32 value);
  
  // optional int32 isFlipped = 15;
  inline bool has_isflipped() const;
  inline void clear_isflipped();
  static const int kIsFlippedFieldNumber = 15;
  inline ::google::protobuf::int32 isflipped() const;
  inline void set_isflipped(::google::protobuf::int32 value);
  
  // optional int32 updatedAt = 16;
  inline bool has_updatedat() const;
  inline void clear_updatedat();
  static const int kUpdatedAtFieldNumber = 16;
  inline ::google::protobuf::int32 updatedat() const;
  inline void set_updatedat(::google::protobuf::int32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 sid_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 upgradeid_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 state_;
  ::google::protobuf::int32 energy_;
  ::google::protobuf::int32 energypercent_;
  ::google::protobuf::int32 time_;
  ::std::string* sku_;
  static const ::std::string _default_sku_;
  ::google::protobuf::int32 incometorestore_;
  ::google::protobuf::int32 repairing_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > item_;
  ::google::protobuf::int32 isflipped_;
  ::google::protobuf::int32 updatedat_;
  friend void  protobuf_AddDesc_MsgBuildingItem_2eproto();
  friend void protobuf_AssignDesc_MsgBuildingItem_2eproto();
  friend void protobuf_ShutdownFile_MsgBuildingItem_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(16 + 31) / 32];
  
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
  static MsgBuildingItem* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// MsgBuildingItem

// optional int32 id = 1;
inline bool MsgBuildingItem::has_id() const {
  return _has_bit(0);
}
inline void MsgBuildingItem::clear_id() {
  id_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 MsgBuildingItem::id() const {
  return id_;
}
inline void MsgBuildingItem::set_id(::google::protobuf::int32 value) {
  _set_bit(0);
  id_ = value;
}

// optional int32 sid = 2;
inline bool MsgBuildingItem::has_sid() const {
  return _has_bit(1);
}
inline void MsgBuildingItem::clear_sid() {
  sid_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 MsgBuildingItem::sid() const {
  return sid_;
}
inline void MsgBuildingItem::set_sid(::google::protobuf::int32 value) {
  _set_bit(1);
  sid_ = value;
}

// optional int32 type = 3;
inline bool MsgBuildingItem::has_type() const {
  return _has_bit(2);
}
inline void MsgBuildingItem::clear_type() {
  type_ = 0;
  _clear_bit(2);
}
inline ::google::protobuf::int32 MsgBuildingItem::type() const {
  return type_;
}
inline void MsgBuildingItem::set_type(::google::protobuf::int32 value) {
  _set_bit(2);
  type_ = value;
}

// optional int32 upgradeId = 4;
inline bool MsgBuildingItem::has_upgradeid() const {
  return _has_bit(3);
}
inline void MsgBuildingItem::clear_upgradeid() {
  upgradeid_ = 0;
  _clear_bit(3);
}
inline ::google::protobuf::int32 MsgBuildingItem::upgradeid() const {
  return upgradeid_;
}
inline void MsgBuildingItem::set_upgradeid(::google::protobuf::int32 value) {
  _set_bit(3);
  upgradeid_ = value;
}

// optional int32 y = 5;
inline bool MsgBuildingItem::has_y() const {
  return _has_bit(4);
}
inline void MsgBuildingItem::clear_y() {
  y_ = 0;
  _clear_bit(4);
}
inline ::google::protobuf::int32 MsgBuildingItem::y() const {
  return y_;
}
inline void MsgBuildingItem::set_y(::google::protobuf::int32 value) {
  _set_bit(4);
  y_ = value;
}

// optional int32 x = 6;
inline bool MsgBuildingItem::has_x() const {
  return _has_bit(5);
}
inline void MsgBuildingItem::clear_x() {
  x_ = 0;
  _clear_bit(5);
}
inline ::google::protobuf::int32 MsgBuildingItem::x() const {
  return x_;
}
inline void MsgBuildingItem::set_x(::google::protobuf::int32 value) {
  _set_bit(5);
  x_ = value;
}

// optional int32 state = 7;
inline bool MsgBuildingItem::has_state() const {
  return _has_bit(6);
}
inline void MsgBuildingItem::clear_state() {
  state_ = 0;
  _clear_bit(6);
}
inline ::google::protobuf::int32 MsgBuildingItem::state() const {
  return state_;
}
inline void MsgBuildingItem::set_state(::google::protobuf::int32 value) {
  _set_bit(6);
  state_ = value;
}

// optional int32 energy = 8;
inline bool MsgBuildingItem::has_energy() const {
  return _has_bit(7);
}
inline void MsgBuildingItem::clear_energy() {
  energy_ = 0;
  _clear_bit(7);
}
inline ::google::protobuf::int32 MsgBuildingItem::energy() const {
  return energy_;
}
inline void MsgBuildingItem::set_energy(::google::protobuf::int32 value) {
  _set_bit(7);
  energy_ = value;
}

// optional int32 energyPercent = 9;
inline bool MsgBuildingItem::has_energypercent() const {
  return _has_bit(8);
}
inline void MsgBuildingItem::clear_energypercent() {
  energypercent_ = 0;
  _clear_bit(8);
}
inline ::google::protobuf::int32 MsgBuildingItem::energypercent() const {
  return energypercent_;
}
inline void MsgBuildingItem::set_energypercent(::google::protobuf::int32 value) {
  _set_bit(8);
  energypercent_ = value;
}

// optional int32 time = 10;
inline bool MsgBuildingItem::has_time() const {
  return _has_bit(9);
}
inline void MsgBuildingItem::clear_time() {
  time_ = 0;
  _clear_bit(9);
}
inline ::google::protobuf::int32 MsgBuildingItem::time() const {
  return time_;
}
inline void MsgBuildingItem::set_time(::google::protobuf::int32 value) {
  _set_bit(9);
  time_ = value;
}

// optional string sku = 11;
inline bool MsgBuildingItem::has_sku() const {
  return _has_bit(10);
}
inline void MsgBuildingItem::clear_sku() {
  if (sku_ != &_default_sku_) {
    sku_->clear();
  }
  _clear_bit(10);
}
inline const ::std::string& MsgBuildingItem::sku() const {
  return *sku_;
}
inline void MsgBuildingItem::set_sku(const ::std::string& value) {
  _set_bit(10);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(value);
}
inline void MsgBuildingItem::set_sku(const char* value) {
  _set_bit(10);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(value);
}
inline void MsgBuildingItem::set_sku(const char* value, size_t size) {
  _set_bit(10);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  sku_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgBuildingItem::mutable_sku() {
  _set_bit(10);
  if (sku_ == &_default_sku_) {
    sku_ = new ::std::string;
  }
  return sku_;
}

// optional int32 incomeToRestore = 12;
inline bool MsgBuildingItem::has_incometorestore() const {
  return _has_bit(11);
}
inline void MsgBuildingItem::clear_incometorestore() {
  incometorestore_ = 0;
  _clear_bit(11);
}
inline ::google::protobuf::int32 MsgBuildingItem::incometorestore() const {
  return incometorestore_;
}
inline void MsgBuildingItem::set_incometorestore(::google::protobuf::int32 value) {
  _set_bit(11);
  incometorestore_ = value;
}

// optional int32 repairing = 13;
inline bool MsgBuildingItem::has_repairing() const {
  return _has_bit(12);
}
inline void MsgBuildingItem::clear_repairing() {
  repairing_ = 0;
  _clear_bit(12);
}
inline ::google::protobuf::int32 MsgBuildingItem::repairing() const {
  return repairing_;
}
inline void MsgBuildingItem::set_repairing(::google::protobuf::int32 value) {
  _set_bit(12);
  repairing_ = value;
}

// repeated int32 Item = 14;
inline int MsgBuildingItem::item_size() const {
  return item_.size();
}
inline void MsgBuildingItem::clear_item() {
  item_.Clear();
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
MsgBuildingItem::item() const {
  return item_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
MsgBuildingItem::mutable_item() {
  return &item_;
}
inline ::google::protobuf::int32 MsgBuildingItem::item(int index) const {
  return item_.Get(index);
}
inline void MsgBuildingItem::set_item(int index, ::google::protobuf::int32 value) {
  item_.Set(index, value);
}
inline void MsgBuildingItem::add_item(::google::protobuf::int32 value) {
  item_.Add(value);
}

// optional int32 isFlipped = 15;
inline bool MsgBuildingItem::has_isflipped() const {
  return _has_bit(14);
}
inline void MsgBuildingItem::clear_isflipped() {
  isflipped_ = 0;
  _clear_bit(14);
}
inline ::google::protobuf::int32 MsgBuildingItem::isflipped() const {
  return isflipped_;
}
inline void MsgBuildingItem::set_isflipped(::google::protobuf::int32 value) {
  _set_bit(14);
  isflipped_ = value;
}

// optional int32 updatedAt = 16;
inline bool MsgBuildingItem::has_updatedat() const {
  return _has_bit(15);
}
inline void MsgBuildingItem::clear_updatedat() {
  updatedat_ = 0;
  _clear_bit(15);
}
inline ::google::protobuf::int32 MsgBuildingItem::updatedat() const {
  return updatedat_;
}
inline void MsgBuildingItem::set_updatedat(::google::protobuf::int32 value) {
  _set_bit(15);
  updatedat_ = value;
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_MsgBuildingItem_2eproto__INCLUDED
