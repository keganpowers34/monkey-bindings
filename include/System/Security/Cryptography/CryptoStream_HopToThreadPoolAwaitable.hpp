// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.CryptoStream
#include "System/Security/Cryptography/CryptoStream.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.INotifyCompletion
#include "System/Runtime/CompilerServices/INotifyCompletion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable, "System.Security.Cryptography", "CryptoStream/HopToThreadPoolAwaitable");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable
  // [TokenAttribute] Offset: FFFFFFFF
  struct CryptoStream::HopToThreadPoolAwaitable/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::INotifyCompletion*/ {
    public:
    // Creating value type constructor for type: HopToThreadPoolAwaitable
    constexpr HopToThreadPoolAwaitable() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::INotifyCompletion
    operator ::System::Runtime::CompilerServices::INotifyCompletion() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(this);
    }
    // public System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable GetAwaiter()
    // Offset: 0x9AD838
    ::System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable GetAwaiter();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x9AD840
    bool get_IsCompleted();
    // public System.Void OnCompleted(System.Action continuation)
    // Offset: 0x9AD848
    void OnCompleted(::System::Action* continuation);
    // public System.Void GetResult()
    // Offset: 0x9AD84C
    void GetResult();
  }; // System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable::GetAwaiter
// Il2CppName: GetAwaiter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable (System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable::*)()>(&System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable::GetAwaiter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable), "GetAwaiter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable::*)()>(&System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable::OnCompleted
// Il2CppName: OnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable::*)(::System::Action*)>(&System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable::OnCompleted)> {
  static const MethodInfo* get() {
    static auto* continuation = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable), "OnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{continuation});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable::GetResult
// Il2CppName: GetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable::*)()>(&System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable::GetResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable), "GetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
