// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_RceUpdateStarsBookmarks_2eproto__INCLUDED
#define PROTOBUF_RceUpdateStarsBookmarks_2eproto__INCLUDED

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
void  protobuf_AddDesc_RceUpdateStarsBookmarks_2eproto();
void protobuf_AssignDesc_RceUpdateStarsBookmarks_2eproto();
void protobuf_ShutdownFile_RceUpdateStarsBookmarks_2eproto();

class RceUpdateStarsBookmarks;

// ===================================================================

class RceUpdateStarsBookmarks : public ::google::protobuf::Message {
 public:
  RceUpdateStarsBookmarks();
  virtual ~RceUpdateStarsBookmarks();
  
  RceUpdateStarsBookmarks(const RceUpdateStarsBookmarks& from);
  
  inline RceUpdateStarsBookmarks& operator=(const RceUpdateStarsBookmarks& from) {
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
  static const RceUpdateStarsBookmarks& default_instance();
  void Swap(RceUpdateStarsBookmarks* other);
  
  // implements Message ----------------------------------------------
  
  RceUpdateStarsBookmarks* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RceUpdateStarsBookmarks& from);
  void MergeFrom(const RceUpdateStarsBookmarks& from);
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
  
  // optional int32 coordX = 2;
  inline bool has_coordx() const;
  inline void clear_coordx();
  static const int kCoordXFieldNumber = 2;
  inline ::google::protobuf::int32 coordx() const;
  inline void set_coordx(::google::protobuf::int32 value);
  
  // optional string starName = 3;
  inline bool has_starname() const;
  inline void clear_starname();
  static const int kStarNameFieldNumber = 3;
  inline const ::std::string& starname() const;
  inline void set_starname(const ::std::string& value);
  inline void set_starname(const char* value);
  inline void set_starname(const char* value, size_t size);
  inline ::std::string* mutable_starname();
  
  // optional string starNameUserGenerated = 4;
  inline bool has_starnameusergenerated() const;
  inline void clear_starnameusergenerated();
  static const int kStarNameUserGeneratedFieldNumber = 4;
  inline const ::std::string& starnameusergenerated() const;
  inline void set_starnameusergenerated(const ::std::string& value);
  inline void set_starnameusergenerated(const char* value);
  inline void set_starnameusergenerated(const char* value, size_t size);
  inline ::std::string* mutable_starnameusergenerated();
  
  // optional int32 coordY = 5;
  inline bool has_coordy() const;
  inline void clear_coordy();
  static const int kCoordYFieldNumber = 5;
  inline ::google::protobuf::int32 coordy() const;
  inline void set_coordy(::google::protobuf::int32 value);
  
  // optional string starType = 6;
  inline bool has_startype() const;
  inline void clear_startype();
  static const int kStarTypeFieldNumber = 6;
  inline const ::std::string& startype() const;
  inline void set_startype(const ::std::string& value);
  inline void set_startype(const char* value);
  inline void set_startype(const char* value, size_t size);
  inline ::std::string* mutable_startype();
  
  // optional int32 starId = 7;
  inline bool has_starid() const;
  inline void clear_starid();
  static const int kStarIdFieldNumber = 7;
  inline ::google::protobuf::int32 starid() const;
  inline void set_starid(::google::protobuf::int32 value);
  
  // optional string action = 8;
  inline bool has_action() const;
  inline void clear_action();
  static const int kActionFieldNumber = 8;
  inline const ::std::string& action() const;
  inline void set_action(const ::std::string& value);
  inline void set_action(const char* value);
  inline void set_action(const char* value, size_t size);
  inline ::std::string* mutable_action();
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* planetid_;
  static const ::std::string _default_planetid_;
  ::google::protobuf::int32 coordx_;
  ::std::string* starname_;
  static const ::std::string _default_starname_;
  ::std::string* starnameusergenerated_;
  static const ::std::string _default_starnameusergenerated_;
  ::google::protobuf::int32 coordy_;
  ::std::string* startype_;
  static const ::std::string _default_startype_;
  ::google::protobuf::int32 starid_;
  ::std::string* action_;
  static const ::std::string _default_action_;
  friend void  protobuf_AddDesc_RceUpdateStarsBookmarks_2eproto();
  friend void protobuf_AssignDesc_RceUpdateStarsBookmarks_2eproto();
  friend void protobuf_ShutdownFile_RceUpdateStarsBookmarks_2eproto();
  
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
  static RceUpdateStarsBookmarks* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// RceUpdateStarsBookmarks

// optional string planetId = 1;
inline bool RceUpdateStarsBookmarks::has_planetid() const {
  return _has_bit(0);
}
inline void RceUpdateStarsBookmarks::clear_planetid() {
  if (planetid_ != &_default_planetid_) {
    planetid_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& RceUpdateStarsBookmarks::planetid() const {
  return *planetid_;
}
inline void RceUpdateStarsBookmarks::set_planetid(const ::std::string& value) {
  _set_bit(0);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(value);
}
inline void RceUpdateStarsBookmarks::set_planetid(const char* value) {
  _set_bit(0);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(value);
}
inline void RceUpdateStarsBookmarks::set_planetid(const char* value, size_t size) {
  _set_bit(0);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  planetid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateStarsBookmarks::mutable_planetid() {
  _set_bit(0);
  if (planetid_ == &_default_planetid_) {
    planetid_ = new ::std::string;
  }
  return planetid_;
}

// optional int32 coordX = 2;
inline bool RceUpdateStarsBookmarks::has_coordx() const {
  return _has_bit(1);
}
inline void RceUpdateStarsBookmarks::clear_coordx() {
  coordx_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 RceUpdateStarsBookmarks::coordx() const {
  return coordx_;
}
inline void RceUpdateStarsBookmarks::set_coordx(::google::protobuf::int32 value) {
  _set_bit(1);
  coordx_ = value;
}

// optional string starName = 3;
inline bool RceUpdateStarsBookmarks::has_starname() const {
  return _has_bit(2);
}
inline void RceUpdateStarsBookmarks::clear_starname() {
  if (starname_ != &_default_starname_) {
    starname_->clear();
  }
  _clear_bit(2);
}
inline const ::std::string& RceUpdateStarsBookmarks::starname() const {
  return *starname_;
}
inline void RceUpdateStarsBookmarks::set_starname(const ::std::string& value) {
  _set_bit(2);
  if (starname_ == &_default_starname_) {
    starname_ = new ::std::string;
  }
  starname_->assign(value);
}
inline void RceUpdateStarsBookmarks::set_starname(const char* value) {
  _set_bit(2);
  if (starname_ == &_default_starname_) {
    starname_ = new ::std::string;
  }
  starname_->assign(value);
}
inline void RceUpdateStarsBookmarks::set_starname(const char* value, size_t size) {
  _set_bit(2);
  if (starname_ == &_default_starname_) {
    starname_ = new ::std::string;
  }
  starname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateStarsBookmarks::mutable_starname() {
  _set_bit(2);
  if (starname_ == &_default_starname_) {
    starname_ = new ::std::string;
  }
  return starname_;
}

// optional string starNameUserGenerated = 4;
inline bool RceUpdateStarsBookmarks::has_starnameusergenerated() const {
  return _has_bit(3);
}
inline void RceUpdateStarsBookmarks::clear_starnameusergenerated() {
  if (starnameusergenerated_ != &_default_starnameusergenerated_) {
    starnameusergenerated_->clear();
  }
  _clear_bit(3);
}
inline const ::std::string& RceUpdateStarsBookmarks::starnameusergenerated() const {
  return *starnameusergenerated_;
}
inline void RceUpdateStarsBookmarks::set_starnameusergenerated(const ::std::string& value) {
  _set_bit(3);
  if (starnameusergenerated_ == &_default_starnameusergenerated_) {
    starnameusergenerated_ = new ::std::string;
  }
  starnameusergenerated_->assign(value);
}
inline void RceUpdateStarsBookmarks::set_starnameusergenerated(const char* value) {
  _set_bit(3);
  if (starnameusergenerated_ == &_default_starnameusergenerated_) {
    starnameusergenerated_ = new ::std::string;
  }
  starnameusergenerated_->assign(value);
}
inline void RceUpdateStarsBookmarks::set_starnameusergenerated(const char* value, size_t size) {
  _set_bit(3);
  if (starnameusergenerated_ == &_default_starnameusergenerated_) {
    starnameusergenerated_ = new ::std::string;
  }
  starnameusergenerated_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateStarsBookmarks::mutable_starnameusergenerated() {
  _set_bit(3);
  if (starnameusergenerated_ == &_default_starnameusergenerated_) {
    starnameusergenerated_ = new ::std::string;
  }
  return starnameusergenerated_;
}

// optional int32 coordY = 5;
inline bool RceUpdateStarsBookmarks::has_coordy() const {
  return _has_bit(4);
}
inline void RceUpdateStarsBookmarks::clear_coordy() {
  coordy_ = 0;
  _clear_bit(4);
}
inline ::google::protobuf::int32 RceUpdateStarsBookmarks::coordy() const {
  return coordy_;
}
inline void RceUpdateStarsBookmarks::set_coordy(::google::protobuf::int32 value) {
  _set_bit(4);
  coordy_ = value;
}

// optional string starType = 6;
inline bool RceUpdateStarsBookmarks::has_startype() const {
  return _has_bit(5);
}
inline void RceUpdateStarsBookmarks::clear_startype() {
  if (startype_ != &_default_startype_) {
    startype_->clear();
  }
  _clear_bit(5);
}
inline const ::std::string& RceUpdateStarsBookmarks::startype() const {
  return *startype_;
}
inline void RceUpdateStarsBookmarks::set_startype(const ::std::string& value) {
  _set_bit(5);
  if (startype_ == &_default_startype_) {
    startype_ = new ::std::string;
  }
  startype_->assign(value);
}
inline void RceUpdateStarsBookmarks::set_startype(const char* value) {
  _set_bit(5);
  if (startype_ == &_default_startype_) {
    startype_ = new ::std::string;
  }
  startype_->assign(value);
}
inline void RceUpdateStarsBookmarks::set_startype(const char* value, size_t size) {
  _set_bit(5);
  if (startype_ == &_default_startype_) {
    startype_ = new ::std::string;
  }
  startype_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateStarsBookmarks::mutable_startype() {
  _set_bit(5);
  if (startype_ == &_default_startype_) {
    startype_ = new ::std::string;
  }
  return startype_;
}

// optional int32 starId = 7;
inline bool RceUpdateStarsBookmarks::has_starid() const {
  return _has_bit(6);
}
inline void RceUpdateStarsBookmarks::clear_starid() {
  starid_ = 0;
  _clear_bit(6);
}
inline ::google::protobuf::int32 RceUpdateStarsBookmarks::starid() const {
  return starid_;
}
inline void RceUpdateStarsBookmarks::set_starid(::google::protobuf::int32 value) {
  _set_bit(6);
  starid_ = value;
}

// optional string action = 8;
inline bool RceUpdateStarsBookmarks::has_action() const {
  return _has_bit(7);
}
inline void RceUpdateStarsBookmarks::clear_action() {
  if (action_ != &_default_action_) {
    action_->clear();
  }
  _clear_bit(7);
}
inline const ::std::string& RceUpdateStarsBookmarks::action() const {
  return *action_;
}
inline void RceUpdateStarsBookmarks::set_action(const ::std::string& value) {
  _set_bit(7);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  action_->assign(value);
}
inline void RceUpdateStarsBookmarks::set_action(const char* value) {
  _set_bit(7);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  action_->assign(value);
}
inline void RceUpdateStarsBookmarks::set_action(const char* value, size_t size) {
  _set_bit(7);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  action_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RceUpdateStarsBookmarks::mutable_action() {
  _set_bit(7);
  if (action_ == &_default_action_) {
    action_ = new ::std::string;
  }
  return action_;
}


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_RceUpdateStarsBookmarks_2eproto__INCLUDED
