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
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: EntityKey
  class EntityKey;
  // Forward declaring type: ExecuteFunctionResult
  class ExecuteFunctionResult;
}
// Completed forward declares
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: PostFunctionResultForFunctionExecutionRequest
  class PostFunctionResultForFunctionExecutionRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest*, "PlayFab.CloudScriptModels", "PostFunctionResultForFunctionExecutionRequest");
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.CloudScriptModels.PostFunctionResultForFunctionExecutionRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class PostFunctionResultForFunctionExecutionRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public PlayFab.CloudScriptModels.EntityKey Entity
    // Size: 0x8
    // Offset: 0x18
    ::PlayFab::CloudScriptModels::EntityKey* Entity;
    // Field size check
    static_assert(sizeof(::PlayFab::CloudScriptModels::EntityKey*) == 0x8);
    // public PlayFab.CloudScriptModels.ExecuteFunctionResult FunctionResult
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::CloudScriptModels::ExecuteFunctionResult* FunctionResult;
    // Field size check
    static_assert(sizeof(::PlayFab::CloudScriptModels::ExecuteFunctionResult*) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public PlayFab.CloudScriptModels.EntityKey Entity
    [[deprecated("Use field access instead!")]] ::PlayFab::CloudScriptModels::EntityKey*& dyn_Entity();
    // Get instance field reference: public PlayFab.CloudScriptModels.ExecuteFunctionResult FunctionResult
    [[deprecated("Use field access instead!")]] ::PlayFab::CloudScriptModels::ExecuteFunctionResult*& dyn_FunctionResult();
    // public System.Void .ctor()
    // Offset: 0xB5D6B0
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PostFunctionResultForFunctionExecutionRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PostFunctionResultForFunctionExecutionRequest*, creationType>()));
    }
  }; // PlayFab.CloudScriptModels.PostFunctionResultForFunctionExecutionRequest
  #pragma pack(pop)
  static check_size<sizeof(PostFunctionResultForFunctionExecutionRequest), 32 + sizeof(::PlayFab::CloudScriptModels::ExecuteFunctionResult*)> __PlayFab_CloudScriptModels_PostFunctionResultForFunctionExecutionRequestSizeCheck;
  static_assert(sizeof(PostFunctionResultForFunctionExecutionRequest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
