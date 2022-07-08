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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Forward declaring type: PKCS5
  class PKCS5;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::PKCS5);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::PKCS5*, "Mono.Security.X509", "PKCS5");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.PKCS5
  // [TokenAttribute] Offset: FFFFFFFF
  class PKCS5 : public ::Il2CppObject {
    public:
    // static field const value: static public System.String pbeWithMD2AndDESCBC
    static constexpr const char* pbeWithMD2AndDESCBC = "1.2.840.113549.1.5.1";
    // Get static field: static public System.String pbeWithMD2AndDESCBC
    static ::StringW _get_pbeWithMD2AndDESCBC();
    // Set static field: static public System.String pbeWithMD2AndDESCBC
    static void _set_pbeWithMD2AndDESCBC(::StringW value);
    // static field const value: static public System.String pbeWithMD5AndDESCBC
    static constexpr const char* pbeWithMD5AndDESCBC = "1.2.840.113549.1.5.3";
    // Get static field: static public System.String pbeWithMD5AndDESCBC
    static ::StringW _get_pbeWithMD5AndDESCBC();
    // Set static field: static public System.String pbeWithMD5AndDESCBC
    static void _set_pbeWithMD5AndDESCBC(::StringW value);
    // static field const value: static public System.String pbeWithMD2AndRC2CBC
    static constexpr const char* pbeWithMD2AndRC2CBC = "1.2.840.113549.1.5.4";
    // Get static field: static public System.String pbeWithMD2AndRC2CBC
    static ::StringW _get_pbeWithMD2AndRC2CBC();
    // Set static field: static public System.String pbeWithMD2AndRC2CBC
    static void _set_pbeWithMD2AndRC2CBC(::StringW value);
    // static field const value: static public System.String pbeWithMD5AndRC2CBC
    static constexpr const char* pbeWithMD5AndRC2CBC = "1.2.840.113549.1.5.6";
    // Get static field: static public System.String pbeWithMD5AndRC2CBC
    static ::StringW _get_pbeWithMD5AndRC2CBC();
    // Set static field: static public System.String pbeWithMD5AndRC2CBC
    static void _set_pbeWithMD5AndRC2CBC(::StringW value);
    // static field const value: static public System.String pbeWithSHA1AndDESCBC
    static constexpr const char* pbeWithSHA1AndDESCBC = "1.2.840.113549.1.5.10";
    // Get static field: static public System.String pbeWithSHA1AndDESCBC
    static ::StringW _get_pbeWithSHA1AndDESCBC();
    // Set static field: static public System.String pbeWithSHA1AndDESCBC
    static void _set_pbeWithSHA1AndDESCBC(::StringW value);
    // static field const value: static public System.String pbeWithSHA1AndRC2CBC
    static constexpr const char* pbeWithSHA1AndRC2CBC = "1.2.840.113549.1.5.11";
    // Get static field: static public System.String pbeWithSHA1AndRC2CBC
    static ::StringW _get_pbeWithSHA1AndRC2CBC();
    // Set static field: static public System.String pbeWithSHA1AndRC2CBC
    static void _set_pbeWithSHA1AndRC2CBC(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x15EFF24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS5* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::PKCS5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS5*, creationType>()));
    }
  }; // Mono.Security.X509.PKCS5
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::PKCS5::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
