// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Protocol.Tls.SslClientStream
#include "Mono/Security/Protocol/Tls/SslClientStream.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: Mono.Security.Protocol.Tls.SslClientStream/NegotiateState
#include "Mono/Security/Protocol/Tls/SslClientStream_NegotiateState.hpp"
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
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult*, "Mono.Security.Protocol.Tls", "SslClientStream/NegotiateAsyncResult");
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Size: 0x3D
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Tls.SslClientStream/NegotiateAsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  class SslClientStream::NegotiateAsyncResult : public ::Il2CppObject/*, public ::System::IAsyncResult*/ {
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
    // private Mono.Security.Protocol.Tls.SslClientStream/NegotiateState _state
    // Size: 0x4
    // Offset: 0x38
    ::Mono::Security::Protocol::Tls::SslClientStream::NegotiateState state;
    // Field size check
    static_assert(sizeof(::Mono::Security::Protocol::Tls::SslClientStream::NegotiateState) == 0x4);
    // private System.Boolean completed
    // Size: 0x1
    // Offset: 0x3C
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
    // Get instance field reference: private Mono.Security.Protocol.Tls.SslClientStream/NegotiateState _state
    [[deprecated("Use field access instead!")]] ::Mono::Security::Protocol::Tls::SslClientStream::NegotiateState& dyn__state();
    // Get instance field reference: private System.Boolean completed
    [[deprecated("Use field access instead!")]] bool& dyn_completed();
    // public System.Void .ctor(System.AsyncCallback userCallback, System.Object userState, Mono.Security.Protocol.Tls.SslClientStream/NegotiateState state)
    // Offset: 0x1081980
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SslClientStream::NegotiateAsyncResult* New_ctor(::System::AsyncCallback* userCallback, ::Il2CppObject* userState, ::Mono::Security::Protocol::Tls::SslClientStream::NegotiateState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SslClientStream::NegotiateAsyncResult*, creationType>(userCallback, userState, state)));
    }
    // public Mono.Security.Protocol.Tls.SslClientStream/NegotiateState get_State()
    // Offset: 0x1082B1C
    ::Mono::Security::Protocol::Tls::SslClientStream::NegotiateState get_State();
    // public System.Void set_State(Mono.Security.Protocol.Tls.SslClientStream/NegotiateState value)
    // Offset: 0x1082B24
    void set_State(::Mono::Security::Protocol::Tls::SslClientStream::NegotiateState value);
    // public System.Object get_AsyncState()
    // Offset: 0x1082B2C
    ::Il2CppObject* get_AsyncState();
    // public System.Exception get_AsyncException()
    // Offset: 0x1082B34
    ::System::Exception* get_AsyncException();
    // public System.Boolean get_CompletedWithError()
    // Offset: 0x1081CC0
    bool get_CompletedWithError();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x1081BBC
    ::System::Threading::WaitHandle* get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x1082B3C
    bool get_CompletedSynchronously();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x1081B10
    bool get_IsCompleted();
    // public System.Void SetComplete(System.Exception ex)
    // Offset: 0x108293C
    void SetComplete(::System::Exception* ex);
    // public System.Void SetComplete()
    // Offset: 0x1082934
    void SetComplete();
  }; // Mono.Security.Protocol.Tls.SslClientStream/NegotiateAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(SslClientStream::NegotiateAsyncResult), 60 + sizeof(bool)> __Mono_Security_Protocol_Tls_SslClientStream_NegotiateAsyncResultSizeCheck;
  static_assert(sizeof(SslClientStream::NegotiateAsyncResult) == 0x3D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_State
// Il2CppName: get_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Tls::SslClientStream::NegotiateState (Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::*)()>(&Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult*), "get_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::set_State
// Il2CppName: set_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::*)(::Mono::Security::Protocol::Tls::SslClientStream::NegotiateState)>(&Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::set_State)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security.Protocol.Tls", "SslClientStream/NegotiateState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult*), "set_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::*)()>(&Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_AsyncState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_AsyncException
// Il2CppName: get_AsyncException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::*)()>(&Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_AsyncException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult*), "get_AsyncException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_CompletedWithError
// Il2CppName: get_CompletedWithError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::*)()>(&Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_CompletedWithError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult*), "get_CompletedWithError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::*)()>(&Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::*)()>(&Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_CompletedSynchronously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::*)()>(&Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::SetComplete
// Il2CppName: SetComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::*)(::System::Exception*)>(&Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::SetComplete)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult*), "SetComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::SetComplete
// Il2CppName: SetComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::*)()>(&Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult::SetComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::SslClientStream::NegotiateAsyncResult*), "SetComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
