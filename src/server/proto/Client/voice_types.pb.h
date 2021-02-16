// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: voice_types.proto

#ifndef PROTOBUF_voice_5ftypes_2eproto__INCLUDED
#define PROTOBUF_voice_5ftypes_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "Define.h" // for TC_PROTO_API
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {

// Internal implementation detail -- do not call these.
void TC_PROTO_API protobuf_AddDesc_voice_5ftypes_2eproto();
void protobuf_AssignDesc_voice_5ftypes_2eproto();
void protobuf_ShutdownFile_voice_5ftypes_2eproto();

class VoiceCredentials;

enum VoiceJoinType {
  VOICE_JOIN_NORMAL = 0,
  VOICE_JOIN_MUTED = 1
};
TC_PROTO_API bool VoiceJoinType_IsValid(int value);
const VoiceJoinType VoiceJoinType_MIN = VOICE_JOIN_NORMAL;
const VoiceJoinType VoiceJoinType_MAX = VOICE_JOIN_MUTED;
const int VoiceJoinType_ARRAYSIZE = VoiceJoinType_MAX + 1;

TC_PROTO_API const ::google::protobuf::EnumDescriptor* VoiceJoinType_descriptor();
inline const ::std::string& VoiceJoinType_Name(VoiceJoinType value) {
  return ::google::protobuf::internal::NameOfEnum(
    VoiceJoinType_descriptor(), value);
}
inline bool VoiceJoinType_Parse(
    const ::std::string& name, VoiceJoinType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<VoiceJoinType>(
    VoiceJoinType_descriptor(), name, value);
}
enum VoiceMuteReason {
  VOICE_MUTE_REASON_NONE = 0,
  VOICE_MUTE_REASON_PARENTAL_CONTROL_LISTEN_ONLY = 1,
  VOICE_MUTE_REASON_REQUESTED = 2,
  VOICE_MUTE_REASON_SQUELCHED = 3
};
TC_PROTO_API bool VoiceMuteReason_IsValid(int value);
const VoiceMuteReason VoiceMuteReason_MIN = VOICE_MUTE_REASON_NONE;
const VoiceMuteReason VoiceMuteReason_MAX = VOICE_MUTE_REASON_SQUELCHED;
const int VoiceMuteReason_ARRAYSIZE = VoiceMuteReason_MAX + 1;

TC_PROTO_API const ::google::protobuf::EnumDescriptor* VoiceMuteReason_descriptor();
inline const ::std::string& VoiceMuteReason_Name(VoiceMuteReason value) {
  return ::google::protobuf::internal::NameOfEnum(
    VoiceMuteReason_descriptor(), value);
}
inline bool VoiceMuteReason_Parse(
    const ::std::string& name, VoiceMuteReason* value) {
  return ::google::protobuf::internal::ParseNamedEnum<VoiceMuteReason>(
    VoiceMuteReason_descriptor(), name, value);
}
// ===================================================================

class TC_PROTO_API VoiceCredentials : public ::google::protobuf::Message {
 public:
  VoiceCredentials();
  virtual ~VoiceCredentials();

  VoiceCredentials(const VoiceCredentials& from);

  inline VoiceCredentials& operator=(const VoiceCredentials& from) {
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
  static const VoiceCredentials& default_instance();

  void Swap(VoiceCredentials* other);

  // implements Message ----------------------------------------------

  VoiceCredentials* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const VoiceCredentials& from);
  void MergeFrom(const VoiceCredentials& from);
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
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string voice_id = 1;
  inline bool has_voice_id() const;
  inline void clear_voice_id();
  static const int kVoiceIdFieldNumber = 1;
  inline const ::std::string& voice_id() const;
  inline void set_voice_id(const ::std::string& value);
  inline void set_voice_id(const char* value);
  inline void set_voice_id(const char* value, size_t size);
  inline ::std::string* mutable_voice_id();
  inline ::std::string* release_voice_id();
  inline void set_allocated_voice_id(::std::string* voice_id);

  // optional string token = 2;
  inline bool has_token() const;
  inline void clear_token();
  static const int kTokenFieldNumber = 2;
  inline const ::std::string& token() const;
  inline void set_token(const ::std::string& value);
  inline void set_token(const char* value);
  inline void set_token(const char* value, size_t size);
  inline ::std::string* mutable_token();
  inline ::std::string* release_token();
  inline void set_allocated_token(::std::string* token);

  // optional string url = 3;
  inline bool has_url() const;
  inline void clear_url();
  static const int kUrlFieldNumber = 3;
  inline const ::std::string& url() const;
  inline void set_url(const ::std::string& value);
  inline void set_url(const char* value);
  inline void set_url(const char* value, size_t size);
  inline ::std::string* mutable_url();
  inline ::std::string* release_url();
  inline void set_allocated_url(::std::string* url);

  // optional .bgs.protocol.VoiceJoinType join_type = 4;
  inline bool has_join_type() const;
  inline void clear_join_type();
  static const int kJoinTypeFieldNumber = 4;
  inline ::bgs::protocol::VoiceJoinType join_type() const;
  inline void set_join_type(::bgs::protocol::VoiceJoinType value);

  // optional .bgs.protocol.VoiceMuteReason mute_reason = 5;
  inline bool has_mute_reason() const;
  inline void clear_mute_reason();
  static const int kMuteReasonFieldNumber = 5;
  inline ::bgs::protocol::VoiceMuteReason mute_reason() const;
  inline void set_mute_reason(::bgs::protocol::VoiceMuteReason value);

  // @@protoc_insertion_point(class_scope:bgs.protocol.VoiceCredentials)
 private:
  inline void set_has_voice_id();
  inline void clear_has_voice_id();
  inline void set_has_token();
  inline void clear_has_token();
  inline void set_has_url();
  inline void clear_has_url();
  inline void set_has_join_type();
  inline void clear_has_join_type();
  inline void set_has_mute_reason();
  inline void clear_has_mute_reason();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* voice_id_;
  ::std::string* token_;
  ::std::string* url_;
  int join_type_;
  int mute_reason_;
  friend void TC_PROTO_API protobuf_AddDesc_voice_5ftypes_2eproto();
  friend void protobuf_AssignDesc_voice_5ftypes_2eproto();
  friend void protobuf_ShutdownFile_voice_5ftypes_2eproto();

  void InitAsDefaultInstance();
  static VoiceCredentials* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// VoiceCredentials

// optional string voice_id = 1;
inline bool VoiceCredentials::has_voice_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VoiceCredentials::set_has_voice_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VoiceCredentials::clear_has_voice_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VoiceCredentials::clear_voice_id() {
  if (voice_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    voice_id_->clear();
  }
  clear_has_voice_id();
}
inline const ::std::string& VoiceCredentials::voice_id() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.VoiceCredentials.voice_id)
  return *voice_id_;
}
inline void VoiceCredentials::set_voice_id(const ::std::string& value) {
  set_has_voice_id();
  if (voice_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    voice_id_ = new ::std::string;
  }
  voice_id_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.VoiceCredentials.voice_id)
}
inline void VoiceCredentials::set_voice_id(const char* value) {
  set_has_voice_id();
  if (voice_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    voice_id_ = new ::std::string;
  }
  voice_id_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.VoiceCredentials.voice_id)
}
inline void VoiceCredentials::set_voice_id(const char* value, size_t size) {
  set_has_voice_id();
  if (voice_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    voice_id_ = new ::std::string;
  }
  voice_id_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.VoiceCredentials.voice_id)
}
inline ::std::string* VoiceCredentials::mutable_voice_id() {
  set_has_voice_id();
  if (voice_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    voice_id_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.VoiceCredentials.voice_id)
  return voice_id_;
}
inline ::std::string* VoiceCredentials::release_voice_id() {
  clear_has_voice_id();
  if (voice_id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = voice_id_;
    voice_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void VoiceCredentials::set_allocated_voice_id(::std::string* voice_id) {
  if (voice_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete voice_id_;
  }
  if (voice_id) {
    set_has_voice_id();
    voice_id_ = voice_id;
  } else {
    clear_has_voice_id();
    voice_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.VoiceCredentials.voice_id)
}

// optional string token = 2;
inline bool VoiceCredentials::has_token() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VoiceCredentials::set_has_token() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VoiceCredentials::clear_has_token() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VoiceCredentials::clear_token() {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_->clear();
  }
  clear_has_token();
}
inline const ::std::string& VoiceCredentials::token() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.VoiceCredentials.token)
  return *token_;
}
inline void VoiceCredentials::set_token(const ::std::string& value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.VoiceCredentials.token)
}
inline void VoiceCredentials::set_token(const char* value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.VoiceCredentials.token)
}
inline void VoiceCredentials::set_token(const char* value, size_t size) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.VoiceCredentials.token)
}
inline ::std::string* VoiceCredentials::mutable_token() {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.VoiceCredentials.token)
  return token_;
}
inline ::std::string* VoiceCredentials::release_token() {
  clear_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = token_;
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void VoiceCredentials::set_allocated_token(::std::string* token) {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete token_;
  }
  if (token) {
    set_has_token();
    token_ = token;
  } else {
    clear_has_token();
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.VoiceCredentials.token)
}

// optional string url = 3;
inline bool VoiceCredentials::has_url() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VoiceCredentials::set_has_url() {
  _has_bits_[0] |= 0x00000004u;
}
inline void VoiceCredentials::clear_has_url() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void VoiceCredentials::clear_url() {
  if (url_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    url_->clear();
  }
  clear_has_url();
}
inline const ::std::string& VoiceCredentials::url() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.VoiceCredentials.url)
  return *url_;
}
inline void VoiceCredentials::set_url(const ::std::string& value) {
  set_has_url();
  if (url_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    url_ = new ::std::string;
  }
  url_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.VoiceCredentials.url)
}
inline void VoiceCredentials::set_url(const char* value) {
  set_has_url();
  if (url_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    url_ = new ::std::string;
  }
  url_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.VoiceCredentials.url)
}
inline void VoiceCredentials::set_url(const char* value, size_t size) {
  set_has_url();
  if (url_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    url_ = new ::std::string;
  }
  url_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.VoiceCredentials.url)
}
inline ::std::string* VoiceCredentials::mutable_url() {
  set_has_url();
  if (url_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    url_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.VoiceCredentials.url)
  return url_;
}
inline ::std::string* VoiceCredentials::release_url() {
  clear_has_url();
  if (url_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = url_;
    url_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void VoiceCredentials::set_allocated_url(::std::string* url) {
  if (url_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete url_;
  }
  if (url) {
    set_has_url();
    url_ = url;
  } else {
    clear_has_url();
    url_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.VoiceCredentials.url)
}

// optional .bgs.protocol.VoiceJoinType join_type = 4;
inline bool VoiceCredentials::has_join_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void VoiceCredentials::set_has_join_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void VoiceCredentials::clear_has_join_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void VoiceCredentials::clear_join_type() {
  join_type_ = 0;
  clear_has_join_type();
}
inline ::bgs::protocol::VoiceJoinType VoiceCredentials::join_type() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.VoiceCredentials.join_type)
  return static_cast< ::bgs::protocol::VoiceJoinType >(join_type_);
}
inline void VoiceCredentials::set_join_type(::bgs::protocol::VoiceJoinType value) {
  assert(::bgs::protocol::VoiceJoinType_IsValid(value));
  set_has_join_type();
  join_type_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.VoiceCredentials.join_type)
}

// optional .bgs.protocol.VoiceMuteReason mute_reason = 5;
inline bool VoiceCredentials::has_mute_reason() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void VoiceCredentials::set_has_mute_reason() {
  _has_bits_[0] |= 0x00000010u;
}
inline void VoiceCredentials::clear_has_mute_reason() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void VoiceCredentials::clear_mute_reason() {
  mute_reason_ = 0;
  clear_has_mute_reason();
}
inline ::bgs::protocol::VoiceMuteReason VoiceCredentials::mute_reason() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.VoiceCredentials.mute_reason)
  return static_cast< ::bgs::protocol::VoiceMuteReason >(mute_reason_);
}
inline void VoiceCredentials::set_mute_reason(::bgs::protocol::VoiceMuteReason value) {
  assert(::bgs::protocol::VoiceMuteReason_IsValid(value));
  set_has_mute_reason();
  mute_reason_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.VoiceCredentials.mute_reason)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol
}  // namespace bgs

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::bgs::protocol::VoiceJoinType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::bgs::protocol::VoiceJoinType>() {
  return ::bgs::protocol::VoiceJoinType_descriptor();
}
template <> struct is_proto_enum< ::bgs::protocol::VoiceMuteReason> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::bgs::protocol::VoiceMuteReason>() {
  return ::bgs::protocol::VoiceMuteReason_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_voice_5ftypes_2eproto__INCLUDED
