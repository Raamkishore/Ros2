// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: scan.proto

#ifndef PROTOBUF_INCLUDED_scan_2eproto
#define PROTOBUF_INCLUDED_scan_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_scan_2eproto 

namespace protobuf_scan_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_scan_2eproto
namespace proto_msg {
class LidarScan;
class LidarScanDefaultTypeInternal;
extern LidarScanDefaultTypeInternal _LidarScan_default_instance_;
}  // namespace proto_msg
namespace google {
namespace protobuf {
template<> ::proto_msg::LidarScan* Arena::CreateMaybeMessage<::proto_msg::LidarScan>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace proto_msg {

// ===================================================================

class LidarScan : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto_msg.LidarScan) */ {
 public:
  LidarScan();
  virtual ~LidarScan();

  LidarScan(const LidarScan& from);

  inline LidarScan& operator=(const LidarScan& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LidarScan(LidarScan&& from) noexcept
    : LidarScan() {
    *this = ::std::move(from);
  }

  inline LidarScan& operator=(LidarScan&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LidarScan& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LidarScan* internal_default_instance() {
    return reinterpret_cast<const LidarScan*>(
               &_LidarScan_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(LidarScan* other);
  friend void swap(LidarScan& a, LidarScan& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LidarScan* New() const final {
    return CreateMaybeMessage<LidarScan>(NULL);
  }

  LidarScan* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LidarScan>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LidarScan& from);
  void MergeFrom(const LidarScan& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LidarScan* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated bytes data = 3;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 3;
  const ::std::string& data(int index) const;
  ::std::string* mutable_data(int index);
  void set_data(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_data(int index, ::std::string&& value);
  #endif
  void set_data(int index, const char* value);
  void set_data(int index, const void* value, size_t size);
  ::std::string* add_data();
  void add_data(const ::std::string& value);
  #if LANG_CXX11
  void add_data(::std::string&& value);
  #endif
  void add_data(const char* value);
  void add_data(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& data() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_data();

  // optional double timestamp = 1;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  double timestamp() const;
  void set_timestamp(double value);

  // optional uint32 seq = 2;
  bool has_seq() const;
  void clear_seq();
  static const int kSeqFieldNumber = 2;
  ::google::protobuf::uint32 seq() const;
  void set_seq(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:proto_msg.LidarScan)
 private:
  void set_has_timestamp();
  void clear_has_timestamp();
  void set_has_seq();
  void clear_has_seq();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> data_;
  double timestamp_;
  ::google::protobuf::uint32 seq_;
  friend struct ::protobuf_scan_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LidarScan

// optional double timestamp = 1;
inline bool LidarScan::has_timestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LidarScan::set_has_timestamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LidarScan::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LidarScan::clear_timestamp() {
  timestamp_ = 0;
  clear_has_timestamp();
}
inline double LidarScan::timestamp() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarScan.timestamp)
  return timestamp_;
}
inline void LidarScan::set_timestamp(double value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:proto_msg.LidarScan.timestamp)
}

// optional uint32 seq = 2;
inline bool LidarScan::has_seq() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LidarScan::set_has_seq() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LidarScan::clear_has_seq() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LidarScan::clear_seq() {
  seq_ = 0u;
  clear_has_seq();
}
inline ::google::protobuf::uint32 LidarScan::seq() const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarScan.seq)
  return seq_;
}
inline void LidarScan::set_seq(::google::protobuf::uint32 value) {
  set_has_seq();
  seq_ = value;
  // @@protoc_insertion_point(field_set:proto_msg.LidarScan.seq)
}

// repeated bytes data = 3;
inline int LidarScan::data_size() const {
  return data_.size();
}
inline void LidarScan::clear_data() {
  data_.Clear();
}
inline const ::std::string& LidarScan::data(int index) const {
  // @@protoc_insertion_point(field_get:proto_msg.LidarScan.data)
  return data_.Get(index);
}
inline ::std::string* LidarScan::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:proto_msg.LidarScan.data)
  return data_.Mutable(index);
}
inline void LidarScan::set_data(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:proto_msg.LidarScan.data)
  data_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void LidarScan::set_data(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:proto_msg.LidarScan.data)
  data_.Mutable(index)->assign(std::move(value));
}
#endif
inline void LidarScan::set_data(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  data_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:proto_msg.LidarScan.data)
}
inline void LidarScan::set_data(int index, const void* value, size_t size) {
  data_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:proto_msg.LidarScan.data)
}
inline ::std::string* LidarScan::add_data() {
  // @@protoc_insertion_point(field_add_mutable:proto_msg.LidarScan.data)
  return data_.Add();
}
inline void LidarScan::add_data(const ::std::string& value) {
  data_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:proto_msg.LidarScan.data)
}
#if LANG_CXX11
inline void LidarScan::add_data(::std::string&& value) {
  data_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:proto_msg.LidarScan.data)
}
#endif
inline void LidarScan::add_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  data_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:proto_msg.LidarScan.data)
}
inline void LidarScan::add_data(const void* value, size_t size) {
  data_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:proto_msg.LidarScan.data)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
LidarScan::data() const {
  // @@protoc_insertion_point(field_list:proto_msg.LidarScan.data)
  return data_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
LidarScan::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:proto_msg.LidarScan.data)
  return &data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_msg

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_scan_2eproto
