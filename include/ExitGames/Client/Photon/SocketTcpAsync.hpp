// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.IPhotonSocket
#include "ExitGames/Client/Photon/IPhotonSocket.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: PeerBase
  class PeerBase;
  // Forward declaring type: PhotonSocketError
  struct PhotonSocketError;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: SocketTcpAsync
  class SocketTcpAsync;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::SocketTcpAsync);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SocketTcpAsync*, "ExitGames.Client.Photon", "SocketTcpAsync");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.SocketTcpAsync
  // [TokenAttribute] Offset: FFFFFFFF
  class SocketTcpAsync : public ::ExitGames::Client::Photon::IPhotonSocket/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::ExitGames::Client::Photon::SocketTcpAsync::ReceiveContext
    class ReceiveContext;
    public:
    // private System.Net.Sockets.Socket sock
    // Size: 0x8
    // Offset: 0x50
    ::System::Net::Sockets::Socket* sock;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket*) == 0x8);
    // private readonly System.Object syncer
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppObject* syncer;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Net.Sockets.Socket sock
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::Socket*& dyn_sock();
    // Get instance field reference: private readonly System.Object syncer
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_syncer();
    // public System.Void Dispose()
    // Offset: 0x1640118
    void Dispose();
    // System.Void DnsAndConnect()
    // Offset: 0x1640A68
    void DnsAndConnect();
    // private System.Void ReceiveAsync(ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext context)
    // Offset: 0x1641164
    void ReceiveAsync(::ExitGames::Client::Photon::SocketTcpAsync::ReceiveContext* context);
    // private System.Void ReceiveAsync(System.IAsyncResult ar)
    // Offset: 0x16415C8
    void ReceiveAsync(::System::IAsyncResult* ar);
    // public System.Void .ctor(ExitGames.Client.Photon.PeerBase npeer)
    // Offset: 0x163FF88
    // Implemented from: ExitGames.Client.Photon.IPhotonSocket
    // Base method: System.Void IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase npeer)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketTcpAsync* New_ctor(::ExitGames::Client::Photon::PeerBase* npeer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::SocketTcpAsync::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketTcpAsync*, creationType>(npeer)));
    }
    // protected override System.Void Finalize()
    // Offset: 0x16400B0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Boolean Connect()
    // Offset: 0x1640244
    // Implemented from: ExitGames.Client.Photon.IPhotonSocket
    // Base method: System.Boolean IPhotonSocket::Connect()
    bool Connect();
    // public override System.Boolean Disconnect()
    // Offset: 0x16403D8
    // Implemented from: ExitGames.Client.Photon.IPhotonSocket
    // Base method: System.Boolean IPhotonSocket::Disconnect()
    bool Disconnect();
    // public override ExitGames.Client.Photon.PhotonSocketError Send(System.Byte[] data, System.Int32 length)
    // Offset: 0x1640624
    // Implemented from: ExitGames.Client.Photon.IPhotonSocket
    // Base method: ExitGames.Client.Photon.PhotonSocketError IPhotonSocket::Send(System.Byte[] data, System.Int32 length)
    ::ExitGames::Client::Photon::PhotonSocketError Send(::ArrayW<uint8_t> data, int length);
    // public override ExitGames.Client.Photon.PhotonSocketError Receive(out System.Byte[] data)
    // Offset: 0x1640A5C
    // Implemented from: ExitGames.Client.Photon.IPhotonSocket
    // Base method: ExitGames.Client.Photon.PhotonSocketError IPhotonSocket::Receive(out System.Byte[] data)
    ::ExitGames::Client::Photon::PhotonSocketError Receive(ByRef<::ArrayW<uint8_t>> data);
  }; // ExitGames.Client.Photon.SocketTcpAsync
  #pragma pack(pop)
  static check_size<sizeof(SocketTcpAsync), 88 + sizeof(::Il2CppObject*)> __ExitGames_Client_Photon_SocketTcpAsyncSizeCheck;
  static_assert(sizeof(SocketTcpAsync) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcpAsync::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::SocketTcpAsync::*)()>(&ExitGames::Client::Photon::SocketTcpAsync::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcpAsync*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcpAsync::DnsAndConnect
// Il2CppName: DnsAndConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::SocketTcpAsync::*)()>(&ExitGames::Client::Photon::SocketTcpAsync::DnsAndConnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcpAsync*), "DnsAndConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcpAsync::ReceiveAsync
// Il2CppName: ReceiveAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::SocketTcpAsync::*)(::ExitGames::Client::Photon::SocketTcpAsync::ReceiveContext*)>(&ExitGames::Client::Photon::SocketTcpAsync::ReceiveAsync)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "SocketTcpAsync/ReceiveContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcpAsync*), "ReceiveAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcpAsync::ReceiveAsync
// Il2CppName: ReceiveAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::SocketTcpAsync::*)(::System::IAsyncResult*)>(&ExitGames::Client::Photon::SocketTcpAsync::ReceiveAsync)> {
  static const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcpAsync*), "ReceiveAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcpAsync::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcpAsync::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::SocketTcpAsync::*)()>(&ExitGames::Client::Photon::SocketTcpAsync::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcpAsync*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcpAsync::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::SocketTcpAsync::*)()>(&ExitGames::Client::Photon::SocketTcpAsync::Connect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcpAsync*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcpAsync::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::SocketTcpAsync::*)()>(&ExitGames::Client::Photon::SocketTcpAsync::Disconnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcpAsync*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcpAsync::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (ExitGames::Client::Photon::SocketTcpAsync::*)(::ArrayW<uint8_t>, int)>(&ExitGames::Client::Photon::SocketTcpAsync::Send)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcpAsync*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, length});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SocketTcpAsync::Receive
// Il2CppName: Receive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (ExitGames::Client::Photon::SocketTcpAsync::*)(ByRef<::ArrayW<uint8_t>>)>(&ExitGames::Client::Photon::SocketTcpAsync::Receive)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SocketTcpAsync*), "Receive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
