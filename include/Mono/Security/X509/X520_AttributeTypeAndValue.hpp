// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.X509.X520
#include "Mono/Security/X509/X520.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::X520::AttributeTypeAndValue);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X520::AttributeTypeAndValue*, "Mono.Security.X509", "X520/AttributeTypeAndValue");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X520/AttributeTypeAndValue
  // [TokenAttribute] Offset: FFFFFFFF
  class X520::AttributeTypeAndValue : public ::Il2CppObject {
    public:
    public:
    // private System.String oid
    // Size: 0x8
    // Offset: 0x10
    ::StringW oid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String attrValue
    // Size: 0x8
    // Offset: 0x18
    ::StringW attrValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 upperBound
    // Size: 0x4
    // Offset: 0x20
    int upperBound;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte encoding
    // Size: 0x1
    // Offset: 0x24
    uint8_t encoding;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Get instance field reference: private System.String oid
    [[deprecated("Use field access instead!")]] ::StringW& dyn_oid();
    // Get instance field reference: private System.String attrValue
    [[deprecated("Use field access instead!")]] ::StringW& dyn_attrValue();
    // Get instance field reference: private System.Int32 upperBound
    [[deprecated("Use field access instead!")]] int& dyn_upperBound();
    // Get instance field reference: private System.Byte encoding
    [[deprecated("Use field access instead!")]] uint8_t& dyn_encoding();
    // protected System.Void .ctor(System.String oid, System.Int32 upperBound)
    // Offset: 0x1B2B94C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X520::AttributeTypeAndValue* New_ctor(::StringW oid, int upperBound) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::X520::AttributeTypeAndValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X520::AttributeTypeAndValue*, creationType>(oid, upperBound)));
    }
    // protected System.Void .ctor(System.String oid, System.Int32 upperBound, System.Byte encoding)
    // Offset: 0x1B2B990
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X520::AttributeTypeAndValue* New_ctor(::StringW oid, int upperBound, uint8_t encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::X520::AttributeTypeAndValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X520::AttributeTypeAndValue*, creationType>(oid, upperBound, encoding)));
    }
    // public System.String get_Value()
    // Offset: 0x1B2B9D4
    ::StringW get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x1B2B9DC
    void set_Value(::StringW value);
    // public Mono.Security.ASN1 get_ASN1()
    // Offset: 0x1B2BAC4
    ::Mono::Security::ASN1* get_ASN1();
    // Mono.Security.ASN1 GetASN1(System.Byte encoding)
    // Offset: 0x1B2BAD4
    ::Mono::Security::ASN1* GetASN1(uint8_t encoding);
    // Mono.Security.ASN1 GetASN1()
    // Offset: 0x1B2BACC
    ::Mono::Security::ASN1* GetASN1();
    // public System.Byte[] GetBytes(System.Byte encoding)
    // Offset: 0x1B2BCF0
    ::ArrayW<uint8_t> GetBytes(uint8_t encoding);
    // public System.Byte[] GetBytes()
    // Offset: 0x1B2BD14
    ::ArrayW<uint8_t> GetBytes();
    // private System.Byte SelectBestEncoding()
    // Offset: 0x1B2BC68
    uint8_t SelectBestEncoding();
  }; // Mono.Security.X509.X520/AttributeTypeAndValue
  #pragma pack(pop)
  static check_size<sizeof(X520::AttributeTypeAndValue), 36 + sizeof(uint8_t)> __Mono_Security_X509_X520_AttributeTypeAndValueSizeCheck;
  static_assert(sizeof(X520::AttributeTypeAndValue) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X520::AttributeTypeAndValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X520::AttributeTypeAndValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X520::AttributeTypeAndValue::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::X509::X520::AttributeTypeAndValue::*)()>(&Mono::Security::X509::X520::AttributeTypeAndValue::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X520::AttributeTypeAndValue*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X520::AttributeTypeAndValue::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X520::AttributeTypeAndValue::*)(::StringW)>(&Mono::Security::X509::X520::AttributeTypeAndValue::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X520::AttributeTypeAndValue*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X520::AttributeTypeAndValue::get_ASN1
// Il2CppName: get_ASN1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (Mono::Security::X509::X520::AttributeTypeAndValue::*)()>(&Mono::Security::X509::X520::AttributeTypeAndValue::get_ASN1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X520::AttributeTypeAndValue*), "get_ASN1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X520::AttributeTypeAndValue::GetASN1
// Il2CppName: GetASN1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (Mono::Security::X509::X520::AttributeTypeAndValue::*)(uint8_t)>(&Mono::Security::X509::X520::AttributeTypeAndValue::GetASN1)> {
  static const MethodInfo* get() {
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X520::AttributeTypeAndValue*), "GetASN1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoding});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X520::AttributeTypeAndValue::GetASN1
// Il2CppName: GetASN1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (Mono::Security::X509::X520::AttributeTypeAndValue::*)()>(&Mono::Security::X509::X520::AttributeTypeAndValue::GetASN1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X520::AttributeTypeAndValue*), "GetASN1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X520::AttributeTypeAndValue::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X520::AttributeTypeAndValue::*)(uint8_t)>(&Mono::Security::X509::X520::AttributeTypeAndValue::GetBytes)> {
  static const MethodInfo* get() {
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X520::AttributeTypeAndValue*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoding});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X520::AttributeTypeAndValue::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X520::AttributeTypeAndValue::*)()>(&Mono::Security::X509::X520::AttributeTypeAndValue::GetBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X520::AttributeTypeAndValue*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X520::AttributeTypeAndValue::SelectBestEncoding
// Il2CppName: SelectBestEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Mono::Security::X509::X520::AttributeTypeAndValue::*)()>(&Mono::Security::X509::X520::AttributeTypeAndValue::SelectBestEncoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X520::AttributeTypeAndValue*), "SelectBestEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
