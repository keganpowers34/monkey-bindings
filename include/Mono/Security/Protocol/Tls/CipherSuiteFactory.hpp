// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Protocol::Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: CipherSuiteCollection
  class CipherSuiteCollection;
  // Forward declaring type: SecurityProtocolType
  struct SecurityProtocolType;
}
// Completed forward declares
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: CipherSuiteFactory
  class CipherSuiteFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Tls::CipherSuiteFactory);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Tls::CipherSuiteFactory*, "Mono.Security.Protocol.Tls", "CipherSuiteFactory");
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Tls.CipherSuiteFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class CipherSuiteFactory : public ::Il2CppObject {
    public:
    // static public Mono.Security.Protocol.Tls.CipherSuiteCollection GetSupportedCiphers(System.Boolean server, Mono.Security.Protocol.Tls.SecurityProtocolType protocol)
    // Offset: 0x10727B0
    static ::Mono::Security::Protocol::Tls::CipherSuiteCollection* GetSupportedCiphers(bool server, ::Mono::Security::Protocol::Tls::SecurityProtocolType protocol);
    // static private Mono.Security.Protocol.Tls.CipherSuiteCollection GetTls1SupportedCiphers()
    // Offset: 0x107285C
    static ::Mono::Security::Protocol::Tls::CipherSuiteCollection* GetTls1SupportedCiphers();
    // static private Mono.Security.Protocol.Tls.CipherSuiteCollection GetSsl3SupportedCiphers()
    // Offset: 0x1072A70
    static ::Mono::Security::Protocol::Tls::CipherSuiteCollection* GetSsl3SupportedCiphers();
  }; // Mono.Security.Protocol.Tls.CipherSuiteFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::CipherSuiteFactory::GetSupportedCiphers
// Il2CppName: GetSupportedCiphers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Tls::CipherSuiteCollection* (*)(bool, ::Mono::Security::Protocol::Tls::SecurityProtocolType)>(&Mono::Security::Protocol::Tls::CipherSuiteFactory::GetSupportedCiphers)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* protocol = &::il2cpp_utils::GetClassFromName("Mono.Security.Protocol.Tls", "SecurityProtocolType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::CipherSuiteFactory*), "GetSupportedCiphers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server, protocol});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::CipherSuiteFactory::GetTls1SupportedCiphers
// Il2CppName: GetTls1SupportedCiphers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Tls::CipherSuiteCollection* (*)()>(&Mono::Security::Protocol::Tls::CipherSuiteFactory::GetTls1SupportedCiphers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::CipherSuiteFactory*), "GetTls1SupportedCiphers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::CipherSuiteFactory::GetSsl3SupportedCiphers
// Il2CppName: GetSsl3SupportedCiphers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Tls::CipherSuiteCollection* (*)()>(&Mono::Security::Protocol::Tls::CipherSuiteFactory::GetSsl3SupportedCiphers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::CipherSuiteFactory*), "GetSsl3SupportedCiphers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
