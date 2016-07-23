// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_RceUpdateMisc_2eproto__INCLUDED
#define PROTOBUF_RceUpdateMisc_2eproto__INCLUDED

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
void  protobuf_AddDesc_RceUpdateMisc_2eproto();
void protobuf_AssignDesc_RceUpdateMisc_2eproto();
void protobuf_ShutdownFile_RceUpdateMisc_2eproto();

class RceUpdateMisc;

// ===================================================================

class RceUpdateMisc : public ::google::protobuf::Message {
 public:
  RceUpdateMisc();
  virtual ~RceUpdateMisc();
  
  RceUpdateMisc(const RceUpdateMisc& from);
  
  inline RceUpdateMisc& operator=(const RceUpdateMisc& from) {
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
  static const RceUpdateMisc& default_instance();
  void Swap(RceUpdateMisc* other);
  
  // implements Message ----------------------------------------------
  
  RceUpdateMisc* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RceUpdateMisc& from);
  void MergeFrom(const RceUpdateMisc& from);
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
  
  // optional string action = 2;
  inline bool has_action() const;
  inline void clear_action();
  static const int kActionFieldNumber = 2;
  inline const ::std::string& action() const;
  inline void set_action(const ::std::string& value);
  inline void set_action(const char* value);
  inline void set_action(const char* value, size_t size);
  inline ::std::string* mutable_action();
  
  // optional int32 wk = 3;
  inline bool has_wk() const;
  inline void clear_wk();
  static const int kWkFieldNumber = 3;
  inline ::google::protobuf::int32 wk() const;
  inline void set_wk(::google::protobuf::int32 value);
  
  // optional int32 chk = 4;
  inline bool has_chk() const;
  inline void clear_chk();
  static const int kChkFieldNumber = 4;
  inline ::google::protobuf::int32 chk() const;
  inline void set_chk(::google::protobuf::int32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 planetid_;
  ::std::string* action_;
  static const ::std::string _default_action_;
  ::google::protobuf::int32 wk_;
  ::google::protobuf::int32 chk_;
  friend void  protobuf_AddDesc_RceUpdateMisc_2eproto();
  friend void protobuf_AssignDesc_RceUpdateMisc_2eproto();
  friend void protobuf_ShutdownFile_RceUpdateMisc_2eproto();
  
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
  static RceUpdateMisc* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// RceUpdateMisc

// optional int32 planetId = 1;
inline bool RceUpdateMisc::has_planetid() const {
  return _has_bit(0);
}
inline void RceUpdateMisc::clear_planetid() {
  planetid_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 RceUpdateMisc::planetid() const {
  return planetid_;
}
inline void RceUpdateMisc::set_planetid(::google::protobuf::int32 value) {
  _set_bit(0);
  planetid_ = value;
}

// optional string action = 2;
inline bool RceUpdateMisc::has_action() const {
  return _has_bit(1);
}
inline void RceUpdateMisc::clear_action() {
  if (action_ != &_default_action_) {
    action_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& RceUpdateMisc::action() const {
  return *action_;
}
inline void RceUpdateMisc::set_action(const ::std::string& value) {
  _set_bit(1);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  action_->assign(value);
}
inline void RceUpdateMisc::set_action(const char* value) {
  _set_bit(1);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  action_->assign(value);
}
inline void RceUpdateMisc::set_action(const char* value, size_t size) {
  _set_bit(1);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  action_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateMisc::mutable_action() {
  _set_bit(1);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  return action_;
}

// optional int32 wk = 3;
inline bool RceUpdateMisc::has_wk() const {
  return _has_bit(2);
}
inline void RceUpdateMisc::clear_wk() {
  wk_ = 0;
  _clear_bit(2);
}
inline ::google::protobuf::int32 RceUpdateMisc::wk() const {
  return wk_;
}
inline void RceUpdateMisc::set_wk(::google::protobuf::int32 value) {
  _set_bit(2);
  wk_ = value;
}

// optional int32 chk = 4;
inline bool RceUpdateMisc::has_chk() const {
  return _has_bit(3);
}
inline void RceUpdateMisc::clear_chk() {
  chk_ = 0;
  _clear_bit(3);
}
inline ::google::protobuf::int32 RceUpdateMisc::chk() const {
  return chk_;
}
inline void RceUpdateMisc::set_chk(::google::protobuf::int32 value) {
  _set_bit(3);
  chk_ = value;
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_RceUpdateMisc_2eproto__INCLUDED
