// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_RseObtainAskForHelp_2eproto__INCLUDED
#define PROTOBUF_RseObtainAskForHelp_2eproto__INCLUDED

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
void  protobuf_AddDesc_RseObtainAskForHelp_2eproto();
void protobuf_AssignDesc_RseObtainAskForHelp_2eproto();
void protobuf_ShutdownFile_RseObtainAskForHelp_2eproto();

class RseObtainAskForHelp;
class Items;
class Units;

// ===================================================================

class RseObtainAskForHelp : public ::google::protobuf::Message {
 public:
  RseObtainAskForHelp();
  virtual ~RseObtainAskForHelp();
  
  RseObtainAskForHelp(const RseObtainAskForHelp& from);
  
  inline RseObtainAskForHelp& operator=(const RseObtainAskForHelp& from) {
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
  static const RseObtainAskForHelp& default_instance();
  void Swap(RseObtainAskForHelp* other);
  
  // implements Message ----------------------------------------------
  
  RseObtainAskForHelp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RseObtainAskForHelp& from);
  void MergeFrom(const RseObtainAskForHelp& from);
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
  
  // repeated .Items items = 1;
  inline int items_size() const;
  inline void clear_items();
  static const int kItemsFieldNumber = 1;
  inline const ::google::protobuf::RepeatedPtrField< ::Items >& items() const;
  inline ::google::protobuf::RepeatedPtrField< ::Items >* mutable_items();
  inline const ::Items& items(int index) const;
  inline ::Items* mutable_items(int index);
  inline ::Items* add_items();
  
  // repeated .Units units = 2;
  inline int units_size() const;
  inline void clear_units();
  static const int kUnitsFieldNumber = 2;
  inline const ::google::protobuf::RepeatedPtrField< ::Units >& units() const;
  inline ::google::protobuf::RepeatedPtrField< ::Units >* mutable_units();
  inline const ::Units& units(int index) const;
  inline ::Units* mutable_units(int index);
  inline ::Units* add_units();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::RepeatedPtrField< ::Items > items_;
  ::google::protobuf::RepeatedPtrField< ::Units > units_;
  friend void  protobuf_AddDesc_RseObtainAskForHelp_2eproto();
  friend void protobuf_AssignDesc_RseObtainAskForHelp_2eproto();
  friend void protobuf_ShutdownFile_RseObtainAskForHelp_2eproto();
  
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
  static RseObtainAskForHelp* default_instance_;
};
// -------------------------------------------------------------------

class Items : public ::google::protobuf::Message {
 public:
  Items();
  virtual ~Items();
  
  Items(const Items& from);
  
  inline Items& operator=(const Items& from) {
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
  static const Items& default_instance();
  void Swap(Items* other);
  
  // implements Message ----------------------------------------------
  
  Items* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Items& from);
  void MergeFrom(const Items& from);
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
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 ret_;
  friend void  protobuf_AddDesc_RseObtainAskForHelp_2eproto();
  friend void protobuf_AssignDesc_RseObtainAskForHelp_2eproto();
  friend void protobuf_ShutdownFile_RseObtainAskForHelp_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
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
  static Items* default_instance_;
};
// -------------------------------------------------------------------

class Units : public ::google::protobuf::Message {
 public:
  Units();
  virtual ~Units();
  
  Units(const Units& from);
  
  inline Units& operator=(const Units& from) {
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
  static const Units& default_instance();
  void Swap(Units* other);
  
  // implements Message ----------------------------------------------
  
  Units* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Units& from);
  void MergeFrom(const Units& from);
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
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 ret_;
  friend void  protobuf_AddDesc_RseObtainAskForHelp_2eproto();
  friend void protobuf_AssignDesc_RseObtainAskForHelp_2eproto();
  friend void protobuf_ShutdownFile_RseObtainAskForHelp_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
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
  static Units* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// RseObtainAskForHelp

// repeated .Items items = 1;
inline int RseObtainAskForHelp::items_size() const {
  return items_.size();
}
inline void RseObtainAskForHelp::clear_items() {
  items_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::Items >&
RseObtainAskForHelp::items() const {
  return items_;
}
inline ::google::protobuf::RepeatedPtrField< ::Items >*
RseObtainAskForHelp::mutable_items() {
  return &items_;
}
inline const ::Items& RseObtainAskForHelp::items(int index) const {
  return items_.Get(index);
}
inline ::Items* RseObtainAskForHelp::mutable_items(int index) {
  return items_.Mutable(index);
}
inline ::Items* RseObtainAskForHelp::add_items() {
  return items_.Add();
}

// repeated .Units units = 2;
inline int RseObtainAskForHelp::units_size() const {
  return units_.size();
}
inline void RseObtainAskForHelp::clear_units() {
  units_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::Units >&
RseObtainAskForHelp::units() const {
  return units_;
}
inline ::google::protobuf::RepeatedPtrField< ::Units >*
RseObtainAskForHelp::mutable_units() {
  return &units_;
}
inline const ::Units& RseObtainAskForHelp::units(int index) const {
  return units_.Get(index);
}
inline ::Units* RseObtainAskForHelp::mutable_units(int index) {
  return units_.Mutable(index);
}
inline ::Units* RseObtainAskForHelp::add_units() {
  return units_.Add();
}

// -------------------------------------------------------------------

// Items

// optional int32 ret = 1;
inline bool Items::has_ret() const {
  return _has_bit(0);
}
inline void Items::clear_ret() {
  ret_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 Items::ret() const {
  return ret_;
}
inline void Items::set_ret(::google::protobuf::int32 value) {
  _set_bit(0);
  ret_ = value;
}

// -------------------------------------------------------------------

// Units

// optional int32 ret = 1;
inline bool Units::has_ret() const {
  return _has_bit(0);
}
inline void Units::clear_ret() {
  ret_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 Units::ret() const {
  return ret_;
}
inline void Units::set_ret(::google::protobuf::int32 value) {
  _set_bit(0);
  ret_ = value;
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_RseObtainAskForHelp_2eproto__INCLUDED
