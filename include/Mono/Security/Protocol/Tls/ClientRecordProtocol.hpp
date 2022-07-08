// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Protocol.Tls.RecordProtocol
#include "Mono/Security/Protocol/Tls/RecordProtocol.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: Mono::Security::Protocol::Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: ClientContext
  class ClientContext;
  // Forward declaring type: TlsStream
  class TlsStream;
}
// Forward declaring namespace: Mono::Security::Protocol::Tls::Handshake
namespace Mono::Security::Protocol::Tls::Handshake {
  // Forward declaring type: HandshakeMessage
  class HandshakeMessage;
  // Forward declaring type: HandshakeType
  struct HandshakeType;
}
// Completed forward declares
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: ClientRecordProtocol
  class ClientRecordProtocol;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Tls::ClientRecordProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Tls::ClientRecordProtocol*, "Mono.Security.Protocol.Tls", "ClientRecordProtocol");
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Tls.ClientRecordProtocol
  // [TokenAttribute] Offset: FFFFFFFF
  class ClientRecordProtocol : public ::Mono::Security::Protocol::Tls::RecordProtocol {
    public:
    // public System.Void .ctor(System.IO.Stream innerStream, Mono.Security.Protocol.Tls.ClientContext context)
    // Offset: 0x1072E88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientRecordProtocol* New_ctor(::System::IO::Stream* innerStream, ::Mono::Security::Protocol::Tls::ClientContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Tls::ClientRecordProtocol::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientRecordProtocol*, creationType>(innerStream, context)));
    }
    // private Mono.Security.Protocol.Tls.Handshake.HandshakeMessage createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType type)
    // Offset: 0x1072F5C
    ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* createClientHandshakeMessage(::Mono::Security::Protocol::Tls::Handshake::HandshakeType type);
    // private Mono.Security.Protocol.Tls.Handshake.HandshakeMessage createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType type, System.Byte[] buffer)
    // Offset: 0x10732EC
    ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* createServerHandshakeMessage(::Mono::Security::Protocol::Tls::Handshake::HandshakeType type, ::ArrayW<uint8_t> buffer);
    // public override Mono.Security.Protocol.Tls.Handshake.HandshakeMessage GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType type)
    // Offset: 0x1072F58
    // Implemented from: Mono.Security.Protocol.Tls.RecordProtocol
    // Base method: Mono.Security.Protocol.Tls.Handshake.HandshakeMessage RecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType type)
    ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* GetMessage(::Mono::Security::Protocol::Tls::Handshake::HandshakeType type);
    // protected override System.Void ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream handMsg)
    // Offset: 0x107315C
    // Implemented from: Mono.Security.Protocol.Tls.RecordProtocol
    // Base method: System.Void RecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream handMsg)
    void ProcessHandshakeMessage(::Mono::Security::Protocol::Tls::TlsStream* handMsg);
  }; // Mono.Security.Protocol.Tls.ClientRecordProtocol
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ClientRecordProtocol::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ClientRecordProtocol::createClientHandshakeMessage
// Il2CppName: createClientHandshakeMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* (Mono::Security::Protocol::Tls::ClientRecordProtocol::*)(::Mono::Security::Protocol::Tls::Handshake::HandshakeType)>(&Mono::Security::Protocol::Tls::ClientRecordProtocol::createClientHandshakeMessage)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("Mono.Security.Protocol.Tls.Handshake", "HandshakeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::ClientRecordProtocol*), "createClientHandshakeMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ClientRecordProtocol::createServerHandshakeMessage
// Il2CppName: createServerHandshakeMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* (Mono::Security::Protocol::Tls::ClientRecordProtocol::*)(::Mono::Security::Protocol::Tls::Handshake::HandshakeType, ::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Tls::ClientRecordProtocol::createServerHandshakeMessage)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("Mono.Security.Protocol.Tls.Handshake", "HandshakeType")->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::ClientRecordProtocol*), "createServerHandshakeMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, buffer});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ClientRecordProtocol::GetMessage
// Il2CppName: GetMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* (Mono::Security::Protocol::Tls::ClientRecordProtocol::*)(::Mono::Security::Protocol::Tls::Handshake::HandshakeType)>(&Mono::Security::Protocol::Tls::ClientRecordProtocol::GetMessage)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("Mono.Security.Protocol.Tls.Handshake", "HandshakeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::ClientRecordProtocol*), "GetMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::ClientRecordProtocol::ProcessHandshakeMessage
// Il2CppName: ProcessHandshakeMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::ClientRecordProtocol::*)(::Mono::Security::Protocol::Tls::TlsStream*)>(&Mono::Security::Protocol::Tls::ClientRecordProtocol::ProcessHandshakeMessage)> {
  static const MethodInfo* get() {
    static auto* handMsg = &::il2cpp_utils::GetClassFromName("Mono.Security.Protocol.Tls", "TlsStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::ClientRecordProtocol*), "ProcessHandshakeMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handMsg});
  }
};
