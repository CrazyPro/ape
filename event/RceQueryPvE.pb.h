// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_RceQueryPvE_2eproto__INCLUDED
#define PROTOBUF_RceQueryPvE_2eproto__INCLUDED

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
void  protobuf_AddDesc_RceQueryPvE_2eproto();
void protobuf_AssignDesc_RceQueryPvE_2eproto();
void protobuf_ShutdownFile_RceQueryPvE_2eproto();

class RceQueryPvE;

// ===================================================================

class RceQueryPvE : public ::google::protobuf::Message {
 public:
  RceQueryPvE();
  virtual ~RceQueryPvE();
  
  RceQueryPvE(const RceQueryPvE& from);
  
  inline RceQueryPvE& operator=(const RceQueryPvE& from) {
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
  static const RceQueryPvE& default_instance();
  void Swap(RceQueryPvE* other);
  
  // implements Message ----------------------------------------------
  
  RceQueryPvE* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RceQueryPvE& from);
  void MergeFrom(const RceQueryPvE& from);
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
  
  // optional int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);
  
  // optional int32 pass = 2;
  inline bool has_pass() const;
  inline void clear_pass();
  static const int kPassFieldNumber = 2;
  inline ::google::protobuf::int32 pass() const;
  inline void set_pass(::google::protobuf::int32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 pass_;
  friend void  protobuf_AddDesc_RceQueryPvE_2eproto();
  friend void protobuf_AssignDesc_RceQueryPvE_2eproto();
  friend void protobuf_ShutdownFile_RceQueryPvE_2eproto();
  
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
  static RceQueryPvE* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// RceQueryPvE

// optional int32 type = 1;
inline bool RceQueryPvE::has_type() const {
  return _has_bit(0);
}
inline void RceQueryPvE::clear_type() {
  type_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 RceQueryPvE::type() const {
  return type_;
}
inline void RceQueryPvE::set_type(::google::protobuf::int32 value) {
  _set_bit(0);
  type_ = value;
}

// optional int32 pass = 2;
inline bool RceQueryPvE::has_pass() const {
  return _has_bit(1);
}
inline void RceQueryPvE::clear_pass() {
  pass_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 RceQueryPvE::pass() const {
  return pass_;
}
inline void RceQueryPvE::set_pass(::google::protobuf::int32 value) {
  _set_bit(1);
  pass_ = value;
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_RceQueryPvE_2eproto__INCLUDED
