// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSACryptoServiceProvider
  class RSACryptoServiceProvider;
}
// Completed forward declares
// Type namespace: PublicKeyConvert
namespace PublicKeyConvert {
  // Forward declaring type: PEMKeyLoader
  class PEMKeyLoader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PublicKeyConvert::PEMKeyLoader);
DEFINE_IL2CPP_ARG_TYPE(::PublicKeyConvert::PEMKeyLoader*, "PublicKeyConvert", "PEMKeyLoader");
// Type namespace: PublicKeyConvert
namespace PublicKeyConvert {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PublicKeyConvert.PEMKeyLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class PEMKeyLoader : public ::Il2CppObject {
    public:
    // Get static field: static private System.Byte[] SeqOID
    static ::ArrayW<uint8_t> _get_SeqOID();
    // Set static field: static private System.Byte[] SeqOID
    static void _set_SeqOID(::ArrayW<uint8_t> value);
    // static private System.Boolean CompareBytearrays(System.Byte[] a, System.Byte[] b)
    // Offset: 0x1B9C8F8
    static bool CompareBytearrays(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b);
    // static public System.Security.Cryptography.RSACryptoServiceProvider CryptoServiceProviderFromPublicKeyInfo(System.Byte[] x509key)
    // Offset: 0x1B9C974
    static ::System::Security::Cryptography::RSACryptoServiceProvider* CryptoServiceProviderFromPublicKeyInfo(::ArrayW<uint8_t> x509key);
    // static public System.Security.Cryptography.RSACryptoServiceProvider CryptoServiceProviderFromPublicKeyInfo(System.String base64EncodedKey)
    // Offset: 0x1B9CE80
    static ::System::Security::Cryptography::RSACryptoServiceProvider* CryptoServiceProviderFromPublicKeyInfo(::StringW base64EncodedKey);
    // public System.Void .ctor()
    // Offset: 0x1B9CF94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PEMKeyLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PublicKeyConvert::PEMKeyLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PEMKeyLoader*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1B9CF9C
    static void _cctor();
  }; // PublicKeyConvert.PEMKeyLoader
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PublicKeyConvert::PEMKeyLoader::CompareBytearrays
// Il2CppName: CompareBytearrays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&PublicKeyConvert::PEMKeyLoader::CompareBytearrays)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PublicKeyConvert::PEMKeyLoader*), "CompareBytearrays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: PublicKeyConvert::PEMKeyLoader::CryptoServiceProviderFromPublicKeyInfo
// Il2CppName: CryptoServiceProviderFromPublicKeyInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSACryptoServiceProvider* (*)(::ArrayW<uint8_t>)>(&PublicKeyConvert::PEMKeyLoader::CryptoServiceProviderFromPublicKeyInfo)> {
  static const MethodInfo* get() {
    static auto* x509key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PublicKeyConvert::PEMKeyLoader*), "CryptoServiceProviderFromPublicKeyInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x509key});
  }
};
// Writing MetadataGetter for method: PublicKeyConvert::PEMKeyLoader::CryptoServiceProviderFromPublicKeyInfo
// Il2CppName: CryptoServiceProviderFromPublicKeyInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSACryptoServiceProvider* (*)(::StringW)>(&PublicKeyConvert::PEMKeyLoader::CryptoServiceProviderFromPublicKeyInfo)> {
  static const MethodInfo* get() {
    static auto* base64EncodedKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PublicKeyConvert::PEMKeyLoader*), "CryptoServiceProviderFromPublicKeyInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{base64EncodedKey});
  }
};
// Writing MetadataGetter for method: PublicKeyConvert::PEMKeyLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PublicKeyConvert::PEMKeyLoader::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PublicKeyConvert::PEMKeyLoader::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PublicKeyConvert::PEMKeyLoader*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
