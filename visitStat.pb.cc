// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: visitStat.proto

#include "visitStat.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_visitStat_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_visitStat_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_AuthUser;
}  // namespace protobuf_visitStat_2eproto
namespace auth {
class AuthUserDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AuthUser>
      _instance;
} _AuthUser_default_instance_;
class AuthCheckDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AuthCheck>
      _instance;
} _AuthCheck_default_instance_;
}  // namespace auth
namespace protobuf_visitStat_2eproto {
static void InitDefaultsAuthUser() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::auth::_AuthUser_default_instance_;
    new (ptr) ::auth::AuthUser();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::auth::AuthUser::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AuthUser =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAuthUser}, {}};

static void InitDefaultsAuthCheck() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::auth::_AuthCheck_default_instance_;
    new (ptr) ::auth::AuthCheck();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::auth::AuthCheck::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_AuthCheck =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsAuthCheck}, {
      &protobuf_visitStat_2eproto::scc_info_AuthUser.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AuthUser.base);
  ::google::protobuf::internal::InitSCC(&scc_info_AuthCheck.base);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::auth::AuthUser, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::auth::AuthUser, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::auth::AuthUser, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::auth::AuthUser, browser_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::auth::AuthUser, ip_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::auth::AuthUser, system_),
  0,
  1,
  ~0u,
  2,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::auth::AuthCheck, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::auth::AuthCheck, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::auth::AuthCheck, users_),
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::auth::AuthUser)},
  { 13, 19, sizeof(::auth::AuthCheck)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::auth::_AuthUser_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::auth::_AuthCheck_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "visitStat.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\017visitStat.proto\022\004auth\"\220\001\n\010AuthUser\022\014\n\004"
      "name\030\001 \001(\t\022\017\n\007browser\030\002 \001(\t\022\n\n\002ip\030\003 \003(\t\022"
      ",\n\006system\030\004 \001(\0162\025.auth.AuthUser.System:\005"
      "LINUX\"+\n\006System\022\t\n\005LINUX\020\000\022\t\n\005MACOS\020\001\022\013\n"
      "\007WINDOWS\020\002\"*\n\tAuthCheck\022\035\n\005users\030\001 \003(\0132\016"
      ".auth.AuthUser"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 214);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "visitStat.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_visitStat_2eproto
namespace auth {
const ::google::protobuf::EnumDescriptor* AuthUser_System_descriptor() {
  protobuf_visitStat_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_visitStat_2eproto::file_level_enum_descriptors[0];
}
bool AuthUser_System_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const AuthUser_System AuthUser::LINUX;
const AuthUser_System AuthUser::MACOS;
const AuthUser_System AuthUser::WINDOWS;
const AuthUser_System AuthUser::System_MIN;
const AuthUser_System AuthUser::System_MAX;
const int AuthUser::System_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void AuthUser::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AuthUser::kNameFieldNumber;
const int AuthUser::kBrowserFieldNumber;
const int AuthUser::kIpFieldNumber;
const int AuthUser::kSystemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AuthUser::AuthUser()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_visitStat_2eproto::scc_info_AuthUser.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:auth.AuthUser)
}
AuthUser::AuthUser(const AuthUser& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      ip_(from.ip_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  browser_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_browser()) {
    browser_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.browser_);
  }
  system_ = from.system_;
  // @@protoc_insertion_point(copy_constructor:auth.AuthUser)
}

void AuthUser::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  browser_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  system_ = 0;
}

AuthUser::~AuthUser() {
  // @@protoc_insertion_point(destructor:auth.AuthUser)
  SharedDtor();
}

void AuthUser::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  browser_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void AuthUser::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AuthUser::descriptor() {
  ::protobuf_visitStat_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_visitStat_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AuthUser& AuthUser::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_visitStat_2eproto::scc_info_AuthUser.base);
  return *internal_default_instance();
}


void AuthUser::Clear() {
// @@protoc_insertion_point(message_clear_start:auth.AuthUser)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ip_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      browser_.ClearNonDefaultToEmptyNoArena();
    }
  }
  system_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AuthUser::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:auth.AuthUser)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "auth.AuthUser.name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string browser = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_browser()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->browser().data(), static_cast<int>(this->browser().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "auth.AuthUser.browser");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string ip = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_ip()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->ip(this->ip_size() - 1).data(),
            static_cast<int>(this->ip(this->ip_size() - 1).length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "auth.AuthUser.ip");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .auth.AuthUser.System system = 4 [default = LINUX];
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::auth::AuthUser_System_IsValid(value)) {
            set_system(static_cast< ::auth::AuthUser_System >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                4, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:auth.AuthUser)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:auth.AuthUser)
  return false;
#undef DO_
}

void AuthUser::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:auth.AuthUser)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "auth.AuthUser.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string browser = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->browser().data(), static_cast<int>(this->browser().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "auth.AuthUser.browser");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->browser(), output);
  }

  // repeated string ip = 3;
  for (int i = 0, n = this->ip_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ip(i).data(), static_cast<int>(this->ip(i).length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "auth.AuthUser.ip");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->ip(i), output);
  }

  // optional .auth.AuthUser.System system = 4 [default = LINUX];
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->system(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:auth.AuthUser)
}

::google::protobuf::uint8* AuthUser::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:auth.AuthUser)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "auth.AuthUser.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional string browser = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->browser().data(), static_cast<int>(this->browser().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "auth.AuthUser.browser");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->browser(), target);
  }

  // repeated string ip = 3;
  for (int i = 0, n = this->ip_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ip(i).data(), static_cast<int>(this->ip(i).length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "auth.AuthUser.ip");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->ip(i), target);
  }

  // optional .auth.AuthUser.System system = 4 [default = LINUX];
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->system(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:auth.AuthUser)
  return target;
}

size_t AuthUser::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:auth.AuthUser)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated string ip = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->ip_size());
  for (int i = 0, n = this->ip_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->ip(i));
  }

  if (_has_bits_[0 / 32] & 7u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional string browser = 2;
    if (has_browser()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->browser());
    }

    // optional .auth.AuthUser.System system = 4 [default = LINUX];
    if (has_system()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->system());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AuthUser::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:auth.AuthUser)
  GOOGLE_DCHECK_NE(&from, this);
  const AuthUser* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AuthUser>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:auth.AuthUser)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:auth.AuthUser)
    MergeFrom(*source);
  }
}

void AuthUser::MergeFrom(const AuthUser& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:auth.AuthUser)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  ip_.MergeFrom(from.ip_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_browser();
      browser_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.browser_);
    }
    if (cached_has_bits & 0x00000004u) {
      system_ = from.system_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void AuthUser::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:auth.AuthUser)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AuthUser::CopyFrom(const AuthUser& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:auth.AuthUser)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuthUser::IsInitialized() const {
  return true;
}

void AuthUser::Swap(AuthUser* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AuthUser::InternalSwap(AuthUser* other) {
  using std::swap;
  ip_.InternalSwap(CastToBase(&other->ip_));
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  browser_.Swap(&other->browser_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(system_, other->system_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AuthUser::GetMetadata() const {
  protobuf_visitStat_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_visitStat_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void AuthCheck::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AuthCheck::kUsersFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AuthCheck::AuthCheck()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_visitStat_2eproto::scc_info_AuthCheck.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:auth.AuthCheck)
}
AuthCheck::AuthCheck(const AuthCheck& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      users_(from.users_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:auth.AuthCheck)
}

void AuthCheck::SharedCtor() {
}

AuthCheck::~AuthCheck() {
  // @@protoc_insertion_point(destructor:auth.AuthCheck)
  SharedDtor();
}

void AuthCheck::SharedDtor() {
}

void AuthCheck::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AuthCheck::descriptor() {
  ::protobuf_visitStat_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_visitStat_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AuthCheck& AuthCheck::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_visitStat_2eproto::scc_info_AuthCheck.base);
  return *internal_default_instance();
}


void AuthCheck::Clear() {
// @@protoc_insertion_point(message_clear_start:auth.AuthCheck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  users_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AuthCheck::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:auth.AuthCheck)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .auth.AuthUser users = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_users()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:auth.AuthCheck)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:auth.AuthCheck)
  return false;
#undef DO_
}

void AuthCheck::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:auth.AuthCheck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .auth.AuthUser users = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->users_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->users(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:auth.AuthCheck)
}

::google::protobuf::uint8* AuthCheck::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:auth.AuthCheck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .auth.AuthUser users = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->users_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->users(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:auth.AuthCheck)
  return target;
}

size_t AuthCheck::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:auth.AuthCheck)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .auth.AuthUser users = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->users_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->users(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AuthCheck::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:auth.AuthCheck)
  GOOGLE_DCHECK_NE(&from, this);
  const AuthCheck* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AuthCheck>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:auth.AuthCheck)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:auth.AuthCheck)
    MergeFrom(*source);
  }
}

void AuthCheck::MergeFrom(const AuthCheck& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:auth.AuthCheck)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  users_.MergeFrom(from.users_);
}

void AuthCheck::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:auth.AuthCheck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AuthCheck::CopyFrom(const AuthCheck& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:auth.AuthCheck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuthCheck::IsInitialized() const {
  return true;
}

void AuthCheck::Swap(AuthCheck* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AuthCheck::InternalSwap(AuthCheck* other) {
  using std::swap;
  CastToBase(&users_)->InternalSwap(CastToBase(&other->users_));
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AuthCheck::GetMetadata() const {
  protobuf_visitStat_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_visitStat_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace auth
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::auth::AuthUser* Arena::CreateMaybeMessage< ::auth::AuthUser >(Arena* arena) {
  return Arena::CreateInternal< ::auth::AuthUser >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::auth::AuthCheck* Arena::CreateMaybeMessage< ::auth::AuthCheck >(Arena* arena) {
  return Arena::CreateInternal< ::auth::AuthCheck >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
