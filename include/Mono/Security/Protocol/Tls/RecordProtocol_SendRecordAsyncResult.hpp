// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Protocol.Tls.RecordProtocol
#include "Mono/Security/Protocol/Tls/RecordProtocol.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: Mono::Security::Protocol::Tls::Handshake
namespace Mono::Security::Protocol::Tls::Handshake {
  // Forward declaring type: HandshakeMessage
  class HandshakeMessage;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult*, "Mono.Security.Protocol.Tls", "RecordProtocol/SendRecordAsyncResult");
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  class RecordProtocol::SendRecordAsyncResult : public ::Il2CppObject/*, public ::System::IAsyncResult*/ {
    public:
    public:
    // private System.Object locker
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.AsyncCallback _userCallback
    // Size: 0x8
    // Offset: 0x18
    ::System::AsyncCallback* userCallback;
    // Field size check
    static_assert(sizeof(::System::AsyncCallback*) == 0x8);
    // private System.Object _userState
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* userState;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Exception _asyncException
    // Size: 0x8
    // Offset: 0x28
    ::System::Exception* asyncException;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // private System.Threading.ManualResetEvent handle
    // Size: 0x8
    // Offset: 0x30
    ::System::Threading::ManualResetEvent* handle;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEvent*) == 0x8);
    // private Mono.Security.Protocol.Tls.Handshake.HandshakeMessage _message
    // Size: 0x8
    // Offset: 0x38
    ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* message;
    // Field size check
    static_assert(sizeof(::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage*) == 0x8);
    // private System.Boolean completed
    // Size: 0x1
    // Offset: 0x40
    bool completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IAsyncResult
    operator ::System::IAsyncResult() noexcept {
      return *reinterpret_cast<::System::IAsyncResult*>(this);
    }
    // Get instance field reference: private System.Object locker
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_locker();
    // Get instance field reference: private System.AsyncCallback _userCallback
    [[deprecated("Use field access instead!")]] ::System::AsyncCallback*& dyn__userCallback();
    // Get instance field reference: private System.Object _userState
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__userState();
    // Get instance field reference: private System.Exception _asyncException
    [[deprecated("Use field access instead!")]] ::System::Exception*& dyn__asyncException();
    // Get instance field reference: private System.Threading.ManualResetEvent handle
    [[deprecated("Use field access instead!")]] ::System::Threading::ManualResetEvent*& dyn_handle();
    // Get instance field reference: private Mono.Security.Protocol.Tls.Handshake.HandshakeMessage _message
    [[deprecated("Use field access instead!")]] ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage*& dyn__message();
    // Get instance field reference: private System.Boolean completed
    [[deprecated("Use field access instead!")]] bool& dyn_completed();
    // public System.Void .ctor(System.AsyncCallback userCallback, System.Object userState, Mono.Security.Protocol.Tls.Handshake.HandshakeMessage message)
    // Offset: 0x107EA80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecordProtocol::SendRecordAsyncResult* New_ctor(::System::AsyncCallback* userCallback, ::Il2CppObject* userState, ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecordProtocol::SendRecordAsyncResult*, creationType>(userCallback, userState, message)));
    }
    // public Mono.Security.Protocol.Tls.Handshake.HandshakeMessage get_Message()
    // Offset: 0x107F590
    ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* get_Message();
    // public System.Object get_AsyncState()
    // Offset: 0x107F598
    ::Il2CppObject* get_AsyncState();
    // public System.Exception get_AsyncException()
    // Offset: 0x107F5A0
    ::System::Exception* get_AsyncException();
    // public System.Boolean get_CompletedWithError()
    // Offset: 0x107EFC4
    bool get_CompletedWithError();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x107EEC0
    ::System::Threading::WaitHandle* get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x107F5A8
    bool get_CompletedSynchronously();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x107EE14
    bool get_IsCompleted();
    // public System.Void SetComplete(System.Exception ex)
    // Offset: 0x107ED00
    void SetComplete(::System::Exception* ex);
    // public System.Void SetComplete()
    // Offset: 0x107ECF8
    void SetComplete();
  }; // Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(RecordProtocol::SendRecordAsyncResult), 64 + sizeof(bool)> __Mono_Security_Protocol_Tls_RecordProtocol_SendRecordAsyncResultSizeCheck;
  static_assert(sizeof(RecordProtocol::SendRecordAsyncResult) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* (Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::*)()>(&Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::*)()>(&Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_AsyncState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_AsyncException
// Il2CppName: get_AsyncException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::*)()>(&Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_AsyncException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult*), "get_AsyncException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_CompletedWithError
// Il2CppName: get_CompletedWithError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::*)()>(&Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_CompletedWithError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult*), "get_CompletedWithError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::*)()>(&Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::*)()>(&Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_CompletedSynchronously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::*)()>(&Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::SetComplete
// Il2CppName: SetComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::*)(::System::Exception*)>(&Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::SetComplete)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult*), "SetComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::SetComplete
// Il2CppName: SetComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::*)()>(&Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult::SetComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::RecordProtocol::SendRecordAsyncResult*), "SetComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
