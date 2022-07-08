// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Protocol::Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: Context
  class Context;
}
// Completed forward declares
// Type namespace: Mono.Security.Protocol.Tls.Handshake.Server
namespace Mono::Security::Protocol::Tls::Handshake::Server {
  // Forward declaring type: TlsClientKeyExchange
  class TlsClientKeyExchange;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange*, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientKeyExchange");
// Type namespace: Mono.Security.Protocol.Tls.Handshake.Server
namespace Mono::Security::Protocol::Tls::Handshake::Server {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange
  // [TokenAttribute] Offset: FFFFFFFF
  class TlsClientKeyExchange : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage {
    public:
    // public System.Void .ctor(Mono.Security.Protocol.Tls.Context context, System.Byte[] buffer)
    // Offset: 0x107A6A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TlsClientKeyExchange* New_ctor(::Mono::Security::Protocol::Tls::Context* context, ::ArrayW<uint8_t> buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TlsClientKeyExchange*, creationType>(context, buffer)));
    }
    // protected override System.Void ProcessAsSsl3()
    // Offset: 0x107A6DC
    // Implemented from: Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
    // Base method: System.Void HandshakeMessage::ProcessAsSsl3()
    void ProcessAsSsl3();
    // protected override System.Void ProcessAsTls1()
    // Offset: 0x107A914
    // Implemented from: Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
    // Base method: System.Void HandshakeMessage::ProcessAsTls1()
    void ProcessAsTls1();
  }; // Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange::ProcessAsSsl3
// Il2CppName: ProcessAsSsl3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange::*)()>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange::ProcessAsSsl3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange*), "ProcessAsSsl3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange::ProcessAsTls1
// Il2CppName: ProcessAsTls1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange::*)()>(&Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange::ProcessAsTls1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange*), "ProcessAsTls1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
