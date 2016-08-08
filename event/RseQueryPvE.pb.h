// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_RseQueryPvE_2eproto__INCLUDED
#define PROTOBUF_RseQueryPvE_2eproto__INCLUDED

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
#include "MsgCommon.pb.h"
#include "MsgBuildingItem.pb.h"

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_RseQueryPvE_2eproto();
void protobuf_AssignDesc_RseQueryPvE_2eproto();
void protobuf_ShutdownFile_RseQueryPvE_2eproto();

class MsgNpcJson;
class RseQueryPvE;

// ===================================================================

class MsgNpcJson : public ::google::protobuf::Message {
 public:
  MsgNpcJson();
  virtual ~MsgNpcJson();
  
  MsgNpcJson(const MsgNpcJson& from);
  
  inline MsgNpcJson& operator=(const MsgNpcJson& from) {
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
  static const MsgNpcJson& default_instance();
  void Swap(MsgNpcJson* other);
  
  // implements Message ----------------------------------------------
  
  MsgNpcJson* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgNpcJson& from);
  void MergeFrom(const MsgNpcJson& from);
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
  
  // repeated .MsgBuildingItem item = 1;
  inline int item_size() const;
  inline void clear_item();
  static const int kItemFieldNumber = 1;
  inline const ::google::protobuf::RepeatedPtrField< ::MsgBuildingItem >& item() const;
  inline ::google::protobuf::RepeatedPtrField< ::MsgBuildingItem >* mutable_item();
  inline const ::MsgBuildingItem& item(int index) const;
  inline ::MsgBuildingItem* mutable_item(int index);
  inline ::MsgBuildingItem* add_item();
  
  // repeated .MsgSidSkuNum bunker = 2;
  inline int bunker_size() const;
  inline void clear_bunker();
  static const int kBunkerFieldNumber = 2;
  inline const ::google::protobuf::RepeatedPtrField< ::MsgSidSkuNum >& bunker() const;
  inline ::google::protobuf::RepeatedPtrField< ::MsgSidSkuNum >* mutable_bunker();
  inline const ::MsgSidSkuNum& bunker(int index) const;
  inline ::MsgSidSkuNum* mutable_bunker(int index);
  inline ::MsgSidSkuNum* add_bunker();
  
  // repeated .MsgKeyValue gameUnit = 3;
  inline int gameunit_size() const;
  inline void clear_gameunit();
  static const int kGameUnitFieldNumber = 3;
  inline const ::google::protobuf::RepeatedPtrField< ::MsgKeyValue >& gameunit() const;
  inline ::google::protobuf::RepeatedPtrField< ::MsgKeyValue >* mutable_gameunit();
  inline const ::MsgKeyValue& gameunit(int index) const;
  inline ::MsgKeyValue* mutable_gameunit(int index);
  inline ::MsgKeyValue* add_gameunit();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::RepeatedPtrField< ::MsgBuildingItem > item_;
  ::google::protobuf::RepeatedPtrField< ::MsgSidSkuNum > bunker_;
  ::google::protobuf::RepeatedPtrField< ::MsgKeyValue > gameunit_;
  friend void  protobuf_AddDesc_RseQueryPvE_2eproto();
  friend void protobuf_AssignDesc_RseQueryPvE_2eproto();
  friend void protobuf_ShutdownFile_RseQueryPvE_2eproto();
  
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
  static MsgNpcJson* default_instance_;
};
// -------------------------------------------------------------------

class RseQueryPvE : public ::google::protobuf::Message {
 public:
  RseQueryPvE();
  virtual ~RseQueryPvE();
  
  RseQueryPvE(const RseQueryPvE& from);
  
  inline RseQueryPvE& operator=(const RseQueryPvE& from) {
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
  static const RseQueryPvE& default_instance();
  void Swap(RseQueryPvE* other);
  
  // implements Message ----------------------------------------------
  
  RseQueryPvE* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RseQueryPvE& from);
  void MergeFrom(const RseQueryPvE& from);
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
  
  // optional int32 ret = 1;
  inline bool has_ret() const;
  inline void clear_ret();
  static const int kRetFieldNumber = 1;
  inline ::google::protobuf::int32 ret() const;
  inline void set_ret(::google::protobuf::int32 value);
  
  // optional int32 type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);
  
  // repeated .MsgKeyValue pve = 3;
  inline int pve_size() const;
  inline void clear_pve();
  static const int kPveFieldNumber = 3;
  inline const ::google::protobuf::RepeatedPtrField< ::MsgKeyValue >& pve() const;
  inline ::google::protobuf::RepeatedPtrField< ::MsgKeyValue >* mutable_pve();
  inline const ::MsgKeyValue& pve(int index) const;
  inline ::MsgKeyValue* mutable_pve(int index);
  inline ::MsgKeyValue* add_pve();
  
  // optional .MsgNpcJson npc = 4;
  inline bool has_npc() const;
  inline void clear_npc();
  static const int kNpcFieldNumber = 4;
  inline const ::MsgNpcJson& npc() const;
  inline ::MsgNpcJson* mutable_npc();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 ret_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::RepeatedPtrField< ::MsgKeyValue > pve_;
  ::MsgNpcJson* npc_;
  friend void  protobuf_AddDesc_RseQueryPvE_2eproto();
  friend void protobuf_AssignDesc_RseQueryPvE_2eproto();
  friend void protobuf_ShutdownFile_RseQueryPvE_2eproto();
  
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
  static RseQueryPvE* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// MsgNpcJson

// repeated .MsgBuildingItem item = 1;
inline int MsgNpcJson::item_size() const {
  return item_.size();
}
inline void MsgNpcJson::clear_item() {
  item_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::MsgBuildingItem >&
MsgNpcJson::item() const {
  return item_;
}
inline ::google::protobuf::RepeatedPtrField< ::MsgBuildingItem >*
MsgNpcJson::mutable_item() {
  return &item_;
}
inline const ::MsgBuildingItem& MsgNpcJson::item(int index) const {
  return item_.Get(index);
}
inline ::MsgBuildingItem* MsgNpcJson::mutable_item(int index) {
  return item_.Mutable(index);
}
inline ::MsgBuildingItem* MsgNpcJson::add_item() {
  return item_.Add();
}

// repeated .MsgSidSkuNum bunker = 2;
inline int MsgNpcJson::bunker_size() const {
  return bunker_.size();
}
inline void MsgNpcJson::clear_bunker() {
  bunker_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::MsgSidSkuNum >&
MsgNpcJson::bunker() const {
  return bunker_;
}
inline ::google::protobuf::RepeatedPtrField< ::MsgSidSkuNum >*
MsgNpcJson::mutable_bunker() {
  return &bunker_;
}
inline const ::MsgSidSkuNum& MsgNpcJson::bunker(int index) const {
  return bunker_.Get(index);
}
inline ::MsgSidSkuNum* MsgNpcJson::mutable_bunker(int index) {
  return bunker_.Mutable(index);
}
inline ::MsgSidSkuNum* MsgNpcJson::add_bunker() {
  return bunker_.Add();
}

// repeated .MsgKeyValue gameUnit = 3;
inline int MsgNpcJson::gameunit_size() const {
  return gameunit_.size();
}
inline void MsgNpcJson::clear_gameunit() {
  gameunit_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::MsgKeyValue >&
MsgNpcJson::gameunit() const {
  return gameunit_;
}
inline ::google::protobuf::RepeatedPtrField< ::MsgKeyValue >*
MsgNpcJson::mutable_gameunit() {
  return &gameunit_;
}
inline const ::MsgKeyValue& MsgNpcJson::gameunit(int index) const {
  return gameunit_.Get(index);
}
inline ::MsgKeyValue* MsgNpcJson::mutable_gameunit(int index) {
  return gameunit_.Mutable(index);
}
inline ::MsgKeyValue* MsgNpcJson::add_gameunit() {
  return gameunit_.Add();
}

// -------------------------------------------------------------------

// RseQueryPvE

// optional int32 ret = 1;
inline bool RseQueryPvE::has_ret() const {
  return _has_bit(0);
}
inline void RseQueryPvE::clear_ret() {
  ret_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 RseQueryPvE::ret() const {
  return ret_;
}
inline void RseQueryPvE::set_ret(::google::protobuf::int32 value) {
  _set_bit(0);
  ret_ = value;
}

// optional int32 type = 2;
inline bool RseQueryPvE::has_type() const {
  return _has_bit(1);
}
inline void RseQueryPvE::clear_type() {
  type_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 RseQueryPvE::type() const {
  return type_;
}
inline void RseQueryPvE::set_type(::google::protobuf::int32 value) {
  _set_bit(1);
  type_ = value;
}

// repeated .MsgKeyValue pve = 3;
inline int RseQueryPvE::pve_size() const {
  return pve_.size();
}
inline void RseQueryPvE::clear_pve() {
  pve_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::MsgKeyValue >&
RseQueryPvE::pve() const {
  return pve_;
}
inline ::google::protobuf::RepeatedPtrField< ::MsgKeyValue >*
RseQueryPvE::mutable_pve() {
  return &pve_;
}
inline const ::MsgKeyValue& RseQueryPvE::pve(int index) const {
  return pve_.Get(index);
}
inline ::MsgKeyValue* RseQueryPvE::mutable_pve(int index) {
  return pve_.Mutable(index);
}
inline ::MsgKeyValue* RseQueryPvE::add_pve() {
  return pve_.Add();
}

// optional .MsgNpcJson npc = 4;
inline bool RseQueryPvE::has_npc() const {
  return _has_bit(3);
}
inline void RseQueryPvE::clear_npc() {
  if (npc_ != NULL) npc_->::MsgNpcJson::Clear();
  _clear_bit(3);
}
inline const ::MsgNpcJson& RseQueryPvE::npc() const {
  return npc_ != NULL ? *npc_ : *default_instance_->npc_;
}
inline ::MsgNpcJson* RseQueryPvE::mutable_npc() {
  _set_bit(3);
  if (npc_ == NULL) npc_ = new ::MsgNpcJson;
  return npc_;
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_RseQueryPvE_2eproto__INCLUDED
