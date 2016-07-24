// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "countryDB.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* DB_C_City_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DB_C_City_reflection_ = NULL;
const ::google::protobuf::Descriptor* DB_C_Country_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DB_C_Country_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_countryDB_2eproto() {
  protobuf_AddDesc_countryDB_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "countryDB.proto");
  GOOGLE_CHECK(file != NULL);
  DB_C_City_descriptor_ = file->message_type(0);
  static const int DB_C_City_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DB_C_City, cityid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DB_C_City, ltsaverevision_),
  };
  DB_C_City_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DB_C_City_descriptor_,
      DB_C_City::default_instance_,
      DB_C_City_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DB_C_City, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DB_C_City, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DB_C_City));
  DB_C_Country_descriptor_ = file->message_type(1);
  static const int DB_C_Country_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DB_C_Country, region_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DB_C_Country, city_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DB_C_Country, ltsaverevision_),
  };
  DB_C_Country_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DB_C_Country_descriptor_,
      DB_C_Country::default_instance_,
      DB_C_Country_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DB_C_Country, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DB_C_Country, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DB_C_Country));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_countryDB_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DB_C_City_descriptor_, &DB_C_City::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DB_C_Country_descriptor_, &DB_C_Country::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_countryDB_2eproto() {
  delete DB_C_City::default_instance_;
  delete DB_C_City_reflection_;
  delete DB_C_Country::default_instance_;
  delete DB_C_Country_reflection_;
}

void protobuf_AddDesc_countryDB_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017countryDB.proto\"6\n\tDB_C_City\022\016\n\006cityID"
    "\030\001 \002(\005\022\031\n\016ltSaveRevision\030\002 \001(\003:\0010\"S\n\014DB_"
    "C_Country\022\016\n\006region\030\001 \002(\005\022\030\n\004city\030\002 \003(\0132"
    "\n.DB_C_City\022\031\n\016ltSaveRevision\030\004 \001(\003:\0010", 158);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "countryDB.proto", &protobuf_RegisterTypes);
  DB_C_City::default_instance_ = new DB_C_City();
  DB_C_Country::default_instance_ = new DB_C_Country();
  DB_C_City::default_instance_->InitAsDefaultInstance();
  DB_C_Country::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_countryDB_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_countryDB_2eproto {
  StaticDescriptorInitializer_countryDB_2eproto() {
    protobuf_AddDesc_countryDB_2eproto();
  }
} static_descriptor_initializer_countryDB_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int DB_C_City::kCityIDFieldNumber;
const int DB_C_City::kLtSaveRevisionFieldNumber;
#endif  // !_MSC_VER

DB_C_City::DB_C_City() {
  SharedCtor();
}

void DB_C_City::InitAsDefaultInstance() {
}

DB_C_City::DB_C_City(const DB_C_City& from) {
  SharedCtor();
  MergeFrom(from);
}

void DB_C_City::SharedCtor() {
  _cached_size_ = 0;
  cityid_ = 0;
  ltsaverevision_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DB_C_City::~DB_C_City() {
  SharedDtor();
}

void DB_C_City::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* DB_C_City::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DB_C_City_descriptor_;
}

const DB_C_City& DB_C_City::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_countryDB_2eproto();  return *default_instance_;
}

DB_C_City* DB_C_City::default_instance_ = NULL;

DB_C_City* DB_C_City::New() const {
  return new DB_C_City;
}

void DB_C_City::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    cityid_ = 0;
    ltsaverevision_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DB_C_City::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 cityID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &cityid_));
        _set_bit(0);
        if (input->ExpectTag(16)) goto parse_ltSaveRevision;
        break;
      }
      
      // optional int64 ltSaveRevision = 2 [default = 0];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_ltSaveRevision:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt64(
              input, &ltsaverevision_));
        _set_bit(1);
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DB_C_City::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    DB_C_City::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // required int32 cityID = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->cityid(), output);
  }
  
  // optional int64 ltSaveRevision = 2 [default = 0];
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->ltsaverevision(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DB_C_City::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 cityID = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->cityid(), target);
  }
  
  // optional int64 ltSaveRevision = 2 [default = 0];
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->ltsaverevision(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DB_C_City::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 cityID = 1;
    if (has_cityid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cityid());
    }
    
    // optional int64 ltSaveRevision = 2 [default = 0];
    if (has_ltsaverevision()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->ltsaverevision());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void DB_C_City::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DB_C_City* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DB_C_City*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DB_C_City::MergeFrom(const DB_C_City& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_cityid(from.cityid());
    }
    if (from._has_bit(1)) {
      set_ltsaverevision(from.ltsaverevision());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DB_C_City::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DB_C_City::CopyFrom(const DB_C_City& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DB_C_City::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void DB_C_City::Swap(DB_C_City* other) {
  if (other != this) {
    std::swap(cityid_, other->cityid_);
    std::swap(ltsaverevision_, other->ltsaverevision_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DB_C_City::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DB_C_City_descriptor_;
  metadata.reflection = DB_C_City_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int DB_C_Country::kRegionFieldNumber;
const int DB_C_Country::kCityFieldNumber;
const int DB_C_Country::kLtSaveRevisionFieldNumber;
#endif  // !_MSC_VER

DB_C_Country::DB_C_Country() {
  SharedCtor();
}

void DB_C_Country::InitAsDefaultInstance() {
}

DB_C_Country::DB_C_Country(const DB_C_Country& from) {
  SharedCtor();
  MergeFrom(from);
}

void DB_C_Country::SharedCtor() {
  _cached_size_ = 0;
  region_ = 0;
  ltsaverevision_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DB_C_Country::~DB_C_Country() {
  SharedDtor();
}

void DB_C_Country::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* DB_C_Country::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DB_C_Country_descriptor_;
}

const DB_C_Country& DB_C_Country::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_countryDB_2eproto();  return *default_instance_;
}

DB_C_Country* DB_C_Country::default_instance_ = NULL;

DB_C_Country* DB_C_Country::New() const {
  return new DB_C_Country;
}

void DB_C_Country::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    region_ = 0;
    ltsaverevision_ = GOOGLE_LONGLONG(0);
  }
  city_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DB_C_Country::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 region = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt32(
              input, &region_));
        _set_bit(0);
        if (input->ExpectTag(18)) goto parse_city;
        break;
      }
      
      // repeated .DB_C_City city = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_city:
        DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, add_city()));
        if (input->ExpectTag(18)) goto parse_city;
        if (input->ExpectTag(32)) goto parse_ltSaveRevision;
        break;
      }
      
      // optional int64 ltSaveRevision = 4 [default = 0];
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_ltSaveRevision:
        DO_(::google::protobuf::internal::WireFormatLite::ReadInt64(
              input, &ltsaverevision_));
        _set_bit(2);
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void DB_C_Country::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    DB_C_Country::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // required int32 region = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->region(), output);
  }
  
  // repeated .DB_C_City city = 2;
  for (int i = 0; i < this->city_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageNoVirtual(
      2, this->city(i), output);
  }
  
  // optional int64 ltSaveRevision = 4 [default = 0];
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->ltsaverevision(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DB_C_Country::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 region = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->region(), target);
  }
  
  // repeated .DB_C_City city = 2;
  for (int i = 0; i < this->city_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->city(i), target);
  }
  
  // optional int64 ltSaveRevision = 4 [default = 0];
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->ltsaverevision(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DB_C_Country::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 region = 1;
    if (has_region()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->region());
    }
    
    // optional int64 ltSaveRevision = 4 [default = 0];
    if (has_ltsaverevision()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->ltsaverevision());
    }
    
  }
  // repeated .DB_C_City city = 2;
  total_size += 1 * this->city_size();
  for (int i = 0; i < this->city_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->city(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void DB_C_Country::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DB_C_Country* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DB_C_Country*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DB_C_Country::MergeFrom(const DB_C_Country& from) {
  GOOGLE_CHECK_NE(&from, this);
  city_.MergeFrom(from.city_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_region(from.region());
    }
    if (from._has_bit(2)) {
      set_ltsaverevision(from.ltsaverevision());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DB_C_Country::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DB_C_Country::CopyFrom(const DB_C_Country& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DB_C_Country::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  for (int i = 0; i < city_size(); i++) {
    if (!this->city(i).IsInitialized()) return false;
  }
  return true;
}

void DB_C_Country::Swap(DB_C_Country* other) {
  if (other != this) {
    std::swap(region_, other->region_);
    city_.Swap(&other->city_);
    std::swap(ltsaverevision_, other->ltsaverevision_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DB_C_Country::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DB_C_Country_descriptor_;
  metadata.reflection = DB_C_Country_reflection_;
  return metadata;
}

