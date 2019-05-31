// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: others.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_others_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_others_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "common.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_others_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_others_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_others_2eproto;
namespace pb {
class NetInAmountDetail;
class NetInAmountDetailDefaultTypeInternal;
extern NetInAmountDetailDefaultTypeInternal _NetInAmountDetail_default_instance_;
class RealtimeMoneyTrendItem;
class RealtimeMoneyTrendItemDefaultTypeInternal;
extern RealtimeMoneyTrendItemDefaultTypeInternal _RealtimeMoneyTrendItem_default_instance_;
class RealtimeMoneyTrendItemList;
class RealtimeMoneyTrendItemListDefaultTypeInternal;
extern RealtimeMoneyTrendItemListDefaultTypeInternal _RealtimeMoneyTrendItemList_default_instance_;
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> ::pb::NetInAmountDetail* Arena::CreateMaybeMessage<::pb::NetInAmountDetail>(Arena*);
template<> ::pb::RealtimeMoneyTrendItem* Arena::CreateMaybeMessage<::pb::RealtimeMoneyTrendItem>(Arena*);
template<> ::pb::RealtimeMoneyTrendItemList* Arena::CreateMaybeMessage<::pb::RealtimeMoneyTrendItemList>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pb {

// ===================================================================

class NetInAmountDetail :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.NetInAmountDetail) */ {
 public:
  NetInAmountDetail();
  virtual ~NetInAmountDetail();

  NetInAmountDetail(const NetInAmountDetail& from);
  NetInAmountDetail(NetInAmountDetail&& from) noexcept
    : NetInAmountDetail() {
    *this = ::std::move(from);
  }

  inline NetInAmountDetail& operator=(const NetInAmountDetail& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetInAmountDetail& operator=(NetInAmountDetail&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const NetInAmountDetail& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NetInAmountDetail* internal_default_instance() {
    return reinterpret_cast<const NetInAmountDetail*>(
               &_NetInAmountDetail_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(NetInAmountDetail* other);
  friend void swap(NetInAmountDetail& a, NetInAmountDetail& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NetInAmountDetail* New() const final {
    return CreateMaybeMessage<NetInAmountDetail>(nullptr);
  }

  NetInAmountDetail* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NetInAmountDetail>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NetInAmountDetail& from);
  void MergeFrom(const NetInAmountDetail& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NetInAmountDetail* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.NetInAmountDetail";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_others_2eproto);
    return ::descriptor_table_others_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // double amount = 1;
  void clear_amount();
  static const int kAmountFieldNumber = 1;
  double amount() const;
  void set_amount(double value);

  // double percentage = 2;
  void clear_percentage();
  static const int kPercentageFieldNumber = 2;
  double percentage() const;
  void set_percentage(double value);

  // @@protoc_insertion_point(class_scope:pb.NetInAmountDetail)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  double amount_;
  double percentage_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_others_2eproto;
};
// -------------------------------------------------------------------

class RealtimeMoneyTrendItem :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.RealtimeMoneyTrendItem) */ {
 public:
  RealtimeMoneyTrendItem();
  virtual ~RealtimeMoneyTrendItem();

  RealtimeMoneyTrendItem(const RealtimeMoneyTrendItem& from);
  RealtimeMoneyTrendItem(RealtimeMoneyTrendItem&& from) noexcept
    : RealtimeMoneyTrendItem() {
    *this = ::std::move(from);
  }

  inline RealtimeMoneyTrendItem& operator=(const RealtimeMoneyTrendItem& from) {
    CopyFrom(from);
    return *this;
  }
  inline RealtimeMoneyTrendItem& operator=(RealtimeMoneyTrendItem&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RealtimeMoneyTrendItem& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RealtimeMoneyTrendItem* internal_default_instance() {
    return reinterpret_cast<const RealtimeMoneyTrendItem*>(
               &_RealtimeMoneyTrendItem_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(RealtimeMoneyTrendItem* other);
  friend void swap(RealtimeMoneyTrendItem& a, RealtimeMoneyTrendItem& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RealtimeMoneyTrendItem* New() const final {
    return CreateMaybeMessage<RealtimeMoneyTrendItem>(nullptr);
  }

  RealtimeMoneyTrendItem* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RealtimeMoneyTrendItem>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RealtimeMoneyTrendItem& from);
  void MergeFrom(const RealtimeMoneyTrendItem& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RealtimeMoneyTrendItem* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.RealtimeMoneyTrendItem";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_others_2eproto);
    return ::descriptor_table_others_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // .pb.Symbol symbol = 1;
  bool has_symbol() const;
  void clear_symbol();
  static const int kSymbolFieldNumber = 1;
  const ::pb::Symbol& symbol() const;
  ::pb::Symbol* release_symbol();
  ::pb::Symbol* mutable_symbol();
  void set_allocated_symbol(::pb::Symbol* symbol);

  // .pb.NetInAmountDetail super_super_big_order = 7;
  bool has_super_super_big_order() const;
  void clear_super_super_big_order();
  static const int kSuperSuperBigOrderFieldNumber = 7;
  const ::pb::NetInAmountDetail& super_super_big_order() const;
  ::pb::NetInAmountDetail* release_super_super_big_order();
  ::pb::NetInAmountDetail* mutable_super_super_big_order();
  void set_allocated_super_super_big_order(::pb::NetInAmountDetail* super_super_big_order);

  // .pb.NetInAmountDetail super_big_order = 8;
  bool has_super_big_order() const;
  void clear_super_big_order();
  static const int kSuperBigOrderFieldNumber = 8;
  const ::pb::NetInAmountDetail& super_big_order() const;
  ::pb::NetInAmountDetail* release_super_big_order();
  ::pb::NetInAmountDetail* mutable_super_big_order();
  void set_allocated_super_big_order(::pb::NetInAmountDetail* super_big_order);

  // .pb.NetInAmountDetail big_order = 9;
  bool has_big_order() const;
  void clear_big_order();
  static const int kBigOrderFieldNumber = 9;
  const ::pb::NetInAmountDetail& big_order() const;
  ::pb::NetInAmountDetail* release_big_order();
  ::pb::NetInAmountDetail* mutable_big_order();
  void set_allocated_big_order(::pb::NetInAmountDetail* big_order);

  // .pb.NetInAmountDetail middle_order = 10;
  bool has_middle_order() const;
  void clear_middle_order();
  static const int kMiddleOrderFieldNumber = 10;
  const ::pb::NetInAmountDetail& middle_order() const;
  ::pb::NetInAmountDetail* release_middle_order();
  ::pb::NetInAmountDetail* mutable_middle_order();
  void set_allocated_middle_order(::pb::NetInAmountDetail* middle_order);

  // .pb.NetInAmountDetail small_order = 11;
  bool has_small_order() const;
  void clear_small_order();
  static const int kSmallOrderFieldNumber = 11;
  const ::pb::NetInAmountDetail& small_order() const;
  ::pb::NetInAmountDetail* release_small_order();
  ::pb::NetInAmountDetail* mutable_small_order();
  void set_allocated_small_order(::pb::NetInAmountDetail* small_order);

  // double price = 3;
  void clear_price();
  static const int kPriceFieldNumber = 3;
  double price() const;
  void set_price(double value);

  // double updown_percentage = 4;
  void clear_updown_percentage();
  static const int kUpdownPercentageFieldNumber = 4;
  double updown_percentage() const;
  void set_updown_percentage(double value);

  // int64 time = 6;
  void clear_time();
  static const int kTimeFieldNumber = 6;
  ::PROTOBUF_NAMESPACE_ID::int64 time() const;
  void set_time(::PROTOBUF_NAMESPACE_ID::int64 value);

  // @@protoc_insertion_point(class_scope:pb.RealtimeMoneyTrendItem)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::pb::Symbol* symbol_;
  ::pb::NetInAmountDetail* super_super_big_order_;
  ::pb::NetInAmountDetail* super_big_order_;
  ::pb::NetInAmountDetail* big_order_;
  ::pb::NetInAmountDetail* middle_order_;
  ::pb::NetInAmountDetail* small_order_;
  double price_;
  double updown_percentage_;
  ::PROTOBUF_NAMESPACE_ID::int64 time_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_others_2eproto;
};
// -------------------------------------------------------------------

class RealtimeMoneyTrendItemList :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.RealtimeMoneyTrendItemList) */ {
 public:
  RealtimeMoneyTrendItemList();
  virtual ~RealtimeMoneyTrendItemList();

  RealtimeMoneyTrendItemList(const RealtimeMoneyTrendItemList& from);
  RealtimeMoneyTrendItemList(RealtimeMoneyTrendItemList&& from) noexcept
    : RealtimeMoneyTrendItemList() {
    *this = ::std::move(from);
  }

  inline RealtimeMoneyTrendItemList& operator=(const RealtimeMoneyTrendItemList& from) {
    CopyFrom(from);
    return *this;
  }
  inline RealtimeMoneyTrendItemList& operator=(RealtimeMoneyTrendItemList&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RealtimeMoneyTrendItemList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RealtimeMoneyTrendItemList* internal_default_instance() {
    return reinterpret_cast<const RealtimeMoneyTrendItemList*>(
               &_RealtimeMoneyTrendItemList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(RealtimeMoneyTrendItemList* other);
  friend void swap(RealtimeMoneyTrendItemList& a, RealtimeMoneyTrendItemList& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RealtimeMoneyTrendItemList* New() const final {
    return CreateMaybeMessage<RealtimeMoneyTrendItemList>(nullptr);
  }

  RealtimeMoneyTrendItemList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RealtimeMoneyTrendItemList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RealtimeMoneyTrendItemList& from);
  void MergeFrom(const RealtimeMoneyTrendItemList& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RealtimeMoneyTrendItemList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.RealtimeMoneyTrendItemList";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_others_2eproto);
    return ::descriptor_table_others_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .pb.RealtimeMoneyTrendItem list = 1;
  int list_size() const;
  void clear_list();
  static const int kListFieldNumber = 1;
  ::pb::RealtimeMoneyTrendItem* mutable_list(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::RealtimeMoneyTrendItem >*
      mutable_list();
  const ::pb::RealtimeMoneyTrendItem& list(int index) const;
  ::pb::RealtimeMoneyTrendItem* add_list();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::RealtimeMoneyTrendItem >&
      list() const;

  // @@protoc_insertion_point(class_scope:pb.RealtimeMoneyTrendItemList)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::RealtimeMoneyTrendItem > list_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_others_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NetInAmountDetail

// double amount = 1;
inline void NetInAmountDetail::clear_amount() {
  amount_ = 0;
}
inline double NetInAmountDetail::amount() const {
  // @@protoc_insertion_point(field_get:pb.NetInAmountDetail.amount)
  return amount_;
}
inline void NetInAmountDetail::set_amount(double value) {
  
  amount_ = value;
  // @@protoc_insertion_point(field_set:pb.NetInAmountDetail.amount)
}

// double percentage = 2;
inline void NetInAmountDetail::clear_percentage() {
  percentage_ = 0;
}
inline double NetInAmountDetail::percentage() const {
  // @@protoc_insertion_point(field_get:pb.NetInAmountDetail.percentage)
  return percentage_;
}
inline void NetInAmountDetail::set_percentage(double value) {
  
  percentage_ = value;
  // @@protoc_insertion_point(field_set:pb.NetInAmountDetail.percentage)
}

// -------------------------------------------------------------------

// RealtimeMoneyTrendItem

// .pb.Symbol symbol = 1;
inline bool RealtimeMoneyTrendItem::has_symbol() const {
  return this != internal_default_instance() && symbol_ != nullptr;
}
inline const ::pb::Symbol& RealtimeMoneyTrendItem::symbol() const {
  const ::pb::Symbol* p = symbol_;
  // @@protoc_insertion_point(field_get:pb.RealtimeMoneyTrendItem.symbol)
  return p != nullptr ? *p : *reinterpret_cast<const ::pb::Symbol*>(
      &::pb::_Symbol_default_instance_);
}
inline ::pb::Symbol* RealtimeMoneyTrendItem::release_symbol() {
  // @@protoc_insertion_point(field_release:pb.RealtimeMoneyTrendItem.symbol)
  
  ::pb::Symbol* temp = symbol_;
  symbol_ = nullptr;
  return temp;
}
inline ::pb::Symbol* RealtimeMoneyTrendItem::mutable_symbol() {
  
  if (symbol_ == nullptr) {
    auto* p = CreateMaybeMessage<::pb::Symbol>(GetArenaNoVirtual());
    symbol_ = p;
  }
  // @@protoc_insertion_point(field_mutable:pb.RealtimeMoneyTrendItem.symbol)
  return symbol_;
}
inline void RealtimeMoneyTrendItem::set_allocated_symbol(::pb::Symbol* symbol) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(symbol_);
  }
  if (symbol) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      symbol = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, symbol, submessage_arena);
    }
    
  } else {
    
  }
  symbol_ = symbol;
  // @@protoc_insertion_point(field_set_allocated:pb.RealtimeMoneyTrendItem.symbol)
}

// string name = 2;
inline void RealtimeMoneyTrendItem::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& RealtimeMoneyTrendItem::name() const {
  // @@protoc_insertion_point(field_get:pb.RealtimeMoneyTrendItem.name)
  return name_.GetNoArena();
}
inline void RealtimeMoneyTrendItem::set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pb.RealtimeMoneyTrendItem.name)
}
inline void RealtimeMoneyTrendItem::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pb.RealtimeMoneyTrendItem.name)
}
inline void RealtimeMoneyTrendItem::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pb.RealtimeMoneyTrendItem.name)
}
inline void RealtimeMoneyTrendItem::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pb.RealtimeMoneyTrendItem.name)
}
inline std::string* RealtimeMoneyTrendItem::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:pb.RealtimeMoneyTrendItem.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* RealtimeMoneyTrendItem::release_name() {
  // @@protoc_insertion_point(field_release:pb.RealtimeMoneyTrendItem.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void RealtimeMoneyTrendItem::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:pb.RealtimeMoneyTrendItem.name)
}

// double price = 3;
inline void RealtimeMoneyTrendItem::clear_price() {
  price_ = 0;
}
inline double RealtimeMoneyTrendItem::price() const {
  // @@protoc_insertion_point(field_get:pb.RealtimeMoneyTrendItem.price)
  return price_;
}
inline void RealtimeMoneyTrendItem::set_price(double value) {
  
  price_ = value;
  // @@protoc_insertion_point(field_set:pb.RealtimeMoneyTrendItem.price)
}

// double updown_percentage = 4;
inline void RealtimeMoneyTrendItem::clear_updown_percentage() {
  updown_percentage_ = 0;
}
inline double RealtimeMoneyTrendItem::updown_percentage() const {
  // @@protoc_insertion_point(field_get:pb.RealtimeMoneyTrendItem.updown_percentage)
  return updown_percentage_;
}
inline void RealtimeMoneyTrendItem::set_updown_percentage(double value) {
  
  updown_percentage_ = value;
  // @@protoc_insertion_point(field_set:pb.RealtimeMoneyTrendItem.updown_percentage)
}

// int64 time = 6;
inline void RealtimeMoneyTrendItem::clear_time() {
  time_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 RealtimeMoneyTrendItem::time() const {
  // @@protoc_insertion_point(field_get:pb.RealtimeMoneyTrendItem.time)
  return time_;
}
inline void RealtimeMoneyTrendItem::set_time(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  time_ = value;
  // @@protoc_insertion_point(field_set:pb.RealtimeMoneyTrendItem.time)
}

// .pb.NetInAmountDetail super_super_big_order = 7;
inline bool RealtimeMoneyTrendItem::has_super_super_big_order() const {
  return this != internal_default_instance() && super_super_big_order_ != nullptr;
}
inline void RealtimeMoneyTrendItem::clear_super_super_big_order() {
  if (GetArenaNoVirtual() == nullptr && super_super_big_order_ != nullptr) {
    delete super_super_big_order_;
  }
  super_super_big_order_ = nullptr;
}
inline const ::pb::NetInAmountDetail& RealtimeMoneyTrendItem::super_super_big_order() const {
  const ::pb::NetInAmountDetail* p = super_super_big_order_;
  // @@protoc_insertion_point(field_get:pb.RealtimeMoneyTrendItem.super_super_big_order)
  return p != nullptr ? *p : *reinterpret_cast<const ::pb::NetInAmountDetail*>(
      &::pb::_NetInAmountDetail_default_instance_);
}
inline ::pb::NetInAmountDetail* RealtimeMoneyTrendItem::release_super_super_big_order() {
  // @@protoc_insertion_point(field_release:pb.RealtimeMoneyTrendItem.super_super_big_order)
  
  ::pb::NetInAmountDetail* temp = super_super_big_order_;
  super_super_big_order_ = nullptr;
  return temp;
}
inline ::pb::NetInAmountDetail* RealtimeMoneyTrendItem::mutable_super_super_big_order() {
  
  if (super_super_big_order_ == nullptr) {
    auto* p = CreateMaybeMessage<::pb::NetInAmountDetail>(GetArenaNoVirtual());
    super_super_big_order_ = p;
  }
  // @@protoc_insertion_point(field_mutable:pb.RealtimeMoneyTrendItem.super_super_big_order)
  return super_super_big_order_;
}
inline void RealtimeMoneyTrendItem::set_allocated_super_super_big_order(::pb::NetInAmountDetail* super_super_big_order) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete super_super_big_order_;
  }
  if (super_super_big_order) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      super_super_big_order = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, super_super_big_order, submessage_arena);
    }
    
  } else {
    
  }
  super_super_big_order_ = super_super_big_order;
  // @@protoc_insertion_point(field_set_allocated:pb.RealtimeMoneyTrendItem.super_super_big_order)
}

// .pb.NetInAmountDetail super_big_order = 8;
inline bool RealtimeMoneyTrendItem::has_super_big_order() const {
  return this != internal_default_instance() && super_big_order_ != nullptr;
}
inline void RealtimeMoneyTrendItem::clear_super_big_order() {
  if (GetArenaNoVirtual() == nullptr && super_big_order_ != nullptr) {
    delete super_big_order_;
  }
  super_big_order_ = nullptr;
}
inline const ::pb::NetInAmountDetail& RealtimeMoneyTrendItem::super_big_order() const {
  const ::pb::NetInAmountDetail* p = super_big_order_;
  // @@protoc_insertion_point(field_get:pb.RealtimeMoneyTrendItem.super_big_order)
  return p != nullptr ? *p : *reinterpret_cast<const ::pb::NetInAmountDetail*>(
      &::pb::_NetInAmountDetail_default_instance_);
}
inline ::pb::NetInAmountDetail* RealtimeMoneyTrendItem::release_super_big_order() {
  // @@protoc_insertion_point(field_release:pb.RealtimeMoneyTrendItem.super_big_order)
  
  ::pb::NetInAmountDetail* temp = super_big_order_;
  super_big_order_ = nullptr;
  return temp;
}
inline ::pb::NetInAmountDetail* RealtimeMoneyTrendItem::mutable_super_big_order() {
  
  if (super_big_order_ == nullptr) {
    auto* p = CreateMaybeMessage<::pb::NetInAmountDetail>(GetArenaNoVirtual());
    super_big_order_ = p;
  }
  // @@protoc_insertion_point(field_mutable:pb.RealtimeMoneyTrendItem.super_big_order)
  return super_big_order_;
}
inline void RealtimeMoneyTrendItem::set_allocated_super_big_order(::pb::NetInAmountDetail* super_big_order) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete super_big_order_;
  }
  if (super_big_order) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      super_big_order = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, super_big_order, submessage_arena);
    }
    
  } else {
    
  }
  super_big_order_ = super_big_order;
  // @@protoc_insertion_point(field_set_allocated:pb.RealtimeMoneyTrendItem.super_big_order)
}

// .pb.NetInAmountDetail big_order = 9;
inline bool RealtimeMoneyTrendItem::has_big_order() const {
  return this != internal_default_instance() && big_order_ != nullptr;
}
inline void RealtimeMoneyTrendItem::clear_big_order() {
  if (GetArenaNoVirtual() == nullptr && big_order_ != nullptr) {
    delete big_order_;
  }
  big_order_ = nullptr;
}
inline const ::pb::NetInAmountDetail& RealtimeMoneyTrendItem::big_order() const {
  const ::pb::NetInAmountDetail* p = big_order_;
  // @@protoc_insertion_point(field_get:pb.RealtimeMoneyTrendItem.big_order)
  return p != nullptr ? *p : *reinterpret_cast<const ::pb::NetInAmountDetail*>(
      &::pb::_NetInAmountDetail_default_instance_);
}
inline ::pb::NetInAmountDetail* RealtimeMoneyTrendItem::release_big_order() {
  // @@protoc_insertion_point(field_release:pb.RealtimeMoneyTrendItem.big_order)
  
  ::pb::NetInAmountDetail* temp = big_order_;
  big_order_ = nullptr;
  return temp;
}
inline ::pb::NetInAmountDetail* RealtimeMoneyTrendItem::mutable_big_order() {
  
  if (big_order_ == nullptr) {
    auto* p = CreateMaybeMessage<::pb::NetInAmountDetail>(GetArenaNoVirtual());
    big_order_ = p;
  }
  // @@protoc_insertion_point(field_mutable:pb.RealtimeMoneyTrendItem.big_order)
  return big_order_;
}
inline void RealtimeMoneyTrendItem::set_allocated_big_order(::pb::NetInAmountDetail* big_order) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete big_order_;
  }
  if (big_order) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      big_order = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, big_order, submessage_arena);
    }
    
  } else {
    
  }
  big_order_ = big_order;
  // @@protoc_insertion_point(field_set_allocated:pb.RealtimeMoneyTrendItem.big_order)
}

// .pb.NetInAmountDetail middle_order = 10;
inline bool RealtimeMoneyTrendItem::has_middle_order() const {
  return this != internal_default_instance() && middle_order_ != nullptr;
}
inline void RealtimeMoneyTrendItem::clear_middle_order() {
  if (GetArenaNoVirtual() == nullptr && middle_order_ != nullptr) {
    delete middle_order_;
  }
  middle_order_ = nullptr;
}
inline const ::pb::NetInAmountDetail& RealtimeMoneyTrendItem::middle_order() const {
  const ::pb::NetInAmountDetail* p = middle_order_;
  // @@protoc_insertion_point(field_get:pb.RealtimeMoneyTrendItem.middle_order)
  return p != nullptr ? *p : *reinterpret_cast<const ::pb::NetInAmountDetail*>(
      &::pb::_NetInAmountDetail_default_instance_);
}
inline ::pb::NetInAmountDetail* RealtimeMoneyTrendItem::release_middle_order() {
  // @@protoc_insertion_point(field_release:pb.RealtimeMoneyTrendItem.middle_order)
  
  ::pb::NetInAmountDetail* temp = middle_order_;
  middle_order_ = nullptr;
  return temp;
}
inline ::pb::NetInAmountDetail* RealtimeMoneyTrendItem::mutable_middle_order() {
  
  if (middle_order_ == nullptr) {
    auto* p = CreateMaybeMessage<::pb::NetInAmountDetail>(GetArenaNoVirtual());
    middle_order_ = p;
  }
  // @@protoc_insertion_point(field_mutable:pb.RealtimeMoneyTrendItem.middle_order)
  return middle_order_;
}
inline void RealtimeMoneyTrendItem::set_allocated_middle_order(::pb::NetInAmountDetail* middle_order) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete middle_order_;
  }
  if (middle_order) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      middle_order = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, middle_order, submessage_arena);
    }
    
  } else {
    
  }
  middle_order_ = middle_order;
  // @@protoc_insertion_point(field_set_allocated:pb.RealtimeMoneyTrendItem.middle_order)
}

// .pb.NetInAmountDetail small_order = 11;
inline bool RealtimeMoneyTrendItem::has_small_order() const {
  return this != internal_default_instance() && small_order_ != nullptr;
}
inline void RealtimeMoneyTrendItem::clear_small_order() {
  if (GetArenaNoVirtual() == nullptr && small_order_ != nullptr) {
    delete small_order_;
  }
  small_order_ = nullptr;
}
inline const ::pb::NetInAmountDetail& RealtimeMoneyTrendItem::small_order() const {
  const ::pb::NetInAmountDetail* p = small_order_;
  // @@protoc_insertion_point(field_get:pb.RealtimeMoneyTrendItem.small_order)
  return p != nullptr ? *p : *reinterpret_cast<const ::pb::NetInAmountDetail*>(
      &::pb::_NetInAmountDetail_default_instance_);
}
inline ::pb::NetInAmountDetail* RealtimeMoneyTrendItem::release_small_order() {
  // @@protoc_insertion_point(field_release:pb.RealtimeMoneyTrendItem.small_order)
  
  ::pb::NetInAmountDetail* temp = small_order_;
  small_order_ = nullptr;
  return temp;
}
inline ::pb::NetInAmountDetail* RealtimeMoneyTrendItem::mutable_small_order() {
  
  if (small_order_ == nullptr) {
    auto* p = CreateMaybeMessage<::pb::NetInAmountDetail>(GetArenaNoVirtual());
    small_order_ = p;
  }
  // @@protoc_insertion_point(field_mutable:pb.RealtimeMoneyTrendItem.small_order)
  return small_order_;
}
inline void RealtimeMoneyTrendItem::set_allocated_small_order(::pb::NetInAmountDetail* small_order) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete small_order_;
  }
  if (small_order) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      small_order = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, small_order, submessage_arena);
    }
    
  } else {
    
  }
  small_order_ = small_order;
  // @@protoc_insertion_point(field_set_allocated:pb.RealtimeMoneyTrendItem.small_order)
}

// -------------------------------------------------------------------

// RealtimeMoneyTrendItemList

// repeated .pb.RealtimeMoneyTrendItem list = 1;
inline int RealtimeMoneyTrendItemList::list_size() const {
  return list_.size();
}
inline void RealtimeMoneyTrendItemList::clear_list() {
  list_.Clear();
}
inline ::pb::RealtimeMoneyTrendItem* RealtimeMoneyTrendItemList::mutable_list(int index) {
  // @@protoc_insertion_point(field_mutable:pb.RealtimeMoneyTrendItemList.list)
  return list_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::RealtimeMoneyTrendItem >*
RealtimeMoneyTrendItemList::mutable_list() {
  // @@protoc_insertion_point(field_mutable_list:pb.RealtimeMoneyTrendItemList.list)
  return &list_;
}
inline const ::pb::RealtimeMoneyTrendItem& RealtimeMoneyTrendItemList::list(int index) const {
  // @@protoc_insertion_point(field_get:pb.RealtimeMoneyTrendItemList.list)
  return list_.Get(index);
}
inline ::pb::RealtimeMoneyTrendItem* RealtimeMoneyTrendItemList::add_list() {
  // @@protoc_insertion_point(field_add:pb.RealtimeMoneyTrendItemList.list)
  return list_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::RealtimeMoneyTrendItem >&
RealtimeMoneyTrendItemList::list() const {
  // @@protoc_insertion_point(field_list:pb.RealtimeMoneyTrendItemList.list)
  return list_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_others_2eproto
