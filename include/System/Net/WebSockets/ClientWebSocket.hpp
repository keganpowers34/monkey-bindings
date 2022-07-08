// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebSockets.WebSocket
#include "System/Net/WebSockets/WebSocket.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::WebSockets
namespace System::Net::WebSockets {
  // Forward declaring type: ClientWebSocketOptions
  class ClientWebSocketOptions;
  // Forward declaring type: WebSocketHandle
  class WebSocketHandle;
  // Forward declaring type: WebSocketState
  struct WebSocketState;
  // Forward declaring type: WebSocketMessageType
  struct WebSocketMessageType;
  // Forward declaring type: WebSocketReceiveResult
  class WebSocketReceiveResult;
  // Forward declaring type: WebSocketCloseStatus
  struct WebSocketCloseStatus;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: ArraySegment`1<T>
  template<typename T>
  struct ArraySegment_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: System.Net.WebSockets
namespace System::Net::WebSockets {
  // Forward declaring type: ClientWebSocket
  class ClientWebSocket;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebSockets::ClientWebSocket);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::ClientWebSocket*, "System.Net.WebSockets", "ClientWebSocket");
// Type namespace: System.Net.WebSockets
namespace System::Net::WebSockets {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebSockets.ClientWebSocket
  // [TokenAttribute] Offset: FFFFFFFF
  class ClientWebSocket : public ::System::Net::WebSockets::WebSocket {
    public:
    // Nested type: ::System::Net::WebSockets::ClientWebSocket::InternalState
    struct InternalState;
    // Nested type: ::System::Net::WebSockets::ClientWebSocket::$ConnectAsyncCore$d__16
    struct $ConnectAsyncCore$d__16;
    public:
    // private readonly System.Net.WebSockets.ClientWebSocketOptions _options
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::WebSockets::ClientWebSocketOptions* options;
    // Field size check
    static_assert(sizeof(::System::Net::WebSockets::ClientWebSocketOptions*) == 0x8);
    // private System.Net.WebSockets.WebSocketHandle _innerWebSocket
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::WebSockets::WebSocketHandle* innerWebSocket;
    // Field size check
    static_assert(sizeof(::System::Net::WebSockets::WebSocketHandle*) == 0x8);
    // private System.Int32 _state
    // Size: 0x4
    // Offset: 0x20
    int state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly System.Net.WebSockets.ClientWebSocketOptions _options
    [[deprecated("Use field access instead!")]] ::System::Net::WebSockets::ClientWebSocketOptions*& dyn__options();
    // Get instance field reference: private System.Net.WebSockets.WebSocketHandle _innerWebSocket
    [[deprecated("Use field access instead!")]] ::System::Net::WebSockets::WebSocketHandle*& dyn__innerWebSocket();
    // Get instance field reference: private System.Int32 _state
    [[deprecated("Use field access instead!")]] int& dyn__state();
    // public System.Net.WebSockets.ClientWebSocketOptions get_Options()
    // Offset: 0xD8379C
    ::System::Net::WebSockets::ClientWebSocketOptions* get_Options();
    // public System.Threading.Tasks.Task ConnectAsync(System.Uri uri, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xD83938
    ::System::Threading::Tasks::Task* ConnectAsync(::System::Uri* uri, ::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task ConnectAsyncCore(System.Uri uri, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xD83B84
    ::System::Threading::Tasks::Task* ConnectAsyncCore(::System::Uri* uri, ::System::Threading::CancellationToken cancellationToken);
    // private System.Void ThrowIfNotConnected()
    // Offset: 0xD83D00
    void ThrowIfNotConnected();
    // public System.Void .ctor()
    // Offset: 0xD83594
    // Implemented from: System.Net.WebSockets.WebSocket
    // Base method: System.Void WebSocket::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientWebSocket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebSockets::ClientWebSocket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientWebSocket*, creationType>()));
    }
    // public override System.String get_CloseStatusDescription()
    // Offset: 0xD837A4
    // Implemented from: System.Net.WebSockets.WebSocket
    // Base method: System.String WebSocket::get_CloseStatusDescription()
    ::StringW get_CloseStatusDescription();
    // public override System.Net.WebSockets.WebSocketState get_State()
    // Offset: 0xD83860
    // Implemented from: System.Net.WebSockets.WebSocket
    // Base method: System.Net.WebSockets.WebSocketState WebSocket::get_State()
    ::System::Net::WebSockets::WebSocketState get_State();
    // public override System.Threading.Tasks.Task SendAsync(System.ArraySegment`1<System.Byte> buffer, System.Net.WebSockets.WebSocketMessageType messageType, System.Boolean endOfMessage, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xD83C8C
    // Implemented from: System.Net.WebSockets.WebSocket
    // Base method: System.Threading.Tasks.Task WebSocket::SendAsync(System.ArraySegment`1<System.Byte> buffer, System.Net.WebSockets.WebSocketMessageType messageType, System.Boolean endOfMessage, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task* SendAsync(::System::ArraySegment_1<uint8_t> buffer, ::System::Net::WebSockets::WebSocketMessageType messageType, bool endOfMessage, ::System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult> ReceiveAsync(System.ArraySegment`1<System.Byte> buffer, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xD83E18
    // Implemented from: System.Net.WebSockets.WebSocket
    // Base method: System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult> WebSocket::ReceiveAsync(System.ArraySegment`1<System.Byte> buffer, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* ReceiveAsync(::System::ArraySegment_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task CloseOutputAsync(System.Net.WebSockets.WebSocketCloseStatus closeStatus, System.String statusDescription, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xD83E94
    // Implemented from: System.Net.WebSockets.WebSocket
    // Base method: System.Threading.Tasks.Task WebSocket::CloseOutputAsync(System.Net.WebSockets.WebSocketCloseStatus closeStatus, System.String statusDescription, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task* CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus closeStatus, ::StringW statusDescription, ::System::Threading::CancellationToken cancellationToken);
    // public override System.Void Abort()
    // Offset: 0xD83F10
    // Implemented from: System.Net.WebSockets.WebSocket
    // Base method: System.Void WebSocket::Abort()
    void Abort();
    // public override System.Void Dispose()
    // Offset: 0xD84000
    // Implemented from: System.Net.WebSockets.WebSocket
    // Base method: System.Void WebSocket::Dispose()
    void Dispose();
  }; // System.Net.WebSockets.ClientWebSocket
  #pragma pack(pop)
  static check_size<sizeof(ClientWebSocket), 32 + sizeof(int)> __System_Net_WebSockets_ClientWebSocketSizeCheck;
  static_assert(sizeof(ClientWebSocket) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebSockets::ClientWebSocket::get_Options
// Il2CppName: get_Options
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebSockets::ClientWebSocketOptions* (System::Net::WebSockets::ClientWebSocket::*)()>(&System::Net::WebSockets::ClientWebSocket::get_Options)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ClientWebSocket*), "get_Options", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ClientWebSocket::ConnectAsync
// Il2CppName: ConnectAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebSockets::ClientWebSocket::*)(::System::Uri*, ::System::Threading::CancellationToken)>(&System::Net::WebSockets::ClientWebSocket::ConnectAsync)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ClientWebSocket*), "ConnectAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ClientWebSocket::ConnectAsyncCore
// Il2CppName: ConnectAsyncCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebSockets::ClientWebSocket::*)(::System::Uri*, ::System::Threading::CancellationToken)>(&System::Net::WebSockets::ClientWebSocket::ConnectAsyncCore)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ClientWebSocket*), "ConnectAsyncCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ClientWebSocket::ThrowIfNotConnected
// Il2CppName: ThrowIfNotConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebSockets::ClientWebSocket::*)()>(&System::Net::WebSockets::ClientWebSocket::ThrowIfNotConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ClientWebSocket*), "ThrowIfNotConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ClientWebSocket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebSockets::ClientWebSocket::get_CloseStatusDescription
// Il2CppName: get_CloseStatusDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::WebSockets::ClientWebSocket::*)()>(&System::Net::WebSockets::ClientWebSocket::get_CloseStatusDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ClientWebSocket*), "get_CloseStatusDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ClientWebSocket::get_State
// Il2CppName: get_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebSockets::WebSocketState (System::Net::WebSockets::ClientWebSocket::*)()>(&System::Net::WebSockets::ClientWebSocket::get_State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ClientWebSocket*), "get_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ClientWebSocket::SendAsync
// Il2CppName: SendAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebSockets::ClientWebSocket::*)(::System::ArraySegment_1<uint8_t>, ::System::Net::WebSockets::WebSocketMessageType, bool, ::System::Threading::CancellationToken)>(&System::Net::WebSockets::ClientWebSocket::SendAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ArraySegment`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* messageType = &::il2cpp_utils::GetClassFromName("System.Net.WebSockets", "WebSocketMessageType")->byval_arg;
    static auto* endOfMessage = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ClientWebSocket*), "SendAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, messageType, endOfMessage, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ClientWebSocket::ReceiveAsync
// Il2CppName: ReceiveAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* (System::Net::WebSockets::ClientWebSocket::*)(::System::ArraySegment_1<uint8_t>, ::System::Threading::CancellationToken)>(&System::Net::WebSockets::ClientWebSocket::ReceiveAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ArraySegment`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ClientWebSocket*), "ReceiveAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ClientWebSocket::CloseOutputAsync
// Il2CppName: CloseOutputAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebSockets::ClientWebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(&System::Net::WebSockets::ClientWebSocket::CloseOutputAsync)> {
  static const MethodInfo* get() {
    static auto* closeStatus = &::il2cpp_utils::GetClassFromName("System.Net.WebSockets", "WebSocketCloseStatus")->byval_arg;
    static auto* statusDescription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ClientWebSocket*), "CloseOutputAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{closeStatus, statusDescription, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ClientWebSocket::Abort
// Il2CppName: Abort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebSockets::ClientWebSocket::*)()>(&System::Net::WebSockets::ClientWebSocket::Abort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ClientWebSocket*), "Abort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebSockets::ClientWebSocket::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebSockets::ClientWebSocket::*)()>(&System::Net::WebSockets::ClientWebSocket::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebSockets::ClientWebSocket*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
