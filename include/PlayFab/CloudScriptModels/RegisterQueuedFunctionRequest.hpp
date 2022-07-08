// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: RegisterQueuedFunctionRequest
  class RegisterQueuedFunctionRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*, "PlayFab.CloudScriptModels", "RegisterQueuedFunctionRequest");
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.CloudScriptModels.RegisterQueuedFunctionRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class RegisterQueuedFunctionRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String ConnectionString
    // Size: 0x8
    // Offset: 0x18
    ::StringW ConnectionString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String FunctionName
    // Size: 0x8
    // Offset: 0x20
    ::StringW FunctionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String QueueName
    // Size: 0x8
    // Offset: 0x28
    ::StringW QueueName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String ConnectionString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ConnectionString();
    // Get instance field reference: public System.String FunctionName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FunctionName();
    // Get instance field reference: public System.String QueueName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_QueueName();
    // public System.Void .ctor()
    // Offset: 0xB5D6E0
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegisterQueuedFunctionRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegisterQueuedFunctionRequest*, creationType>()));
    }
  }; // PlayFab.CloudScriptModels.RegisterQueuedFunctionRequest
  #pragma pack(pop)
  static check_size<sizeof(RegisterQueuedFunctionRequest), 40 + sizeof(::StringW)> __PlayFab_CloudScriptModels_RegisterQueuedFunctionRequestSizeCheck;
  static_assert(sizeof(RegisterQueuedFunctionRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
