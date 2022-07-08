// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: PlayFab.CloudScriptModels.CloudScriptRevisionOption
#include "PlayFab/CloudScriptModels/CloudScriptRevisionOption.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: EntityKey
  class EntityKey;
}
// Completed forward declares
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: ExecuteEntityCloudScriptRequest
  class ExecuteEntityCloudScriptRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*, "PlayFab.CloudScriptModels", "ExecuteEntityCloudScriptRequest");
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.CloudScriptModels.ExecuteEntityCloudScriptRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ExecuteEntityCloudScriptRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public PlayFab.CloudScriptModels.EntityKey Entity
    // Size: 0x8
    // Offset: 0x18
    ::PlayFab::CloudScriptModels::EntityKey* Entity;
    // Field size check
    static_assert(sizeof(::PlayFab::CloudScriptModels::EntityKey*) == 0x8);
    // public System.String FunctionName
    // Size: 0x8
    // Offset: 0x20
    ::StringW FunctionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Object FunctionParameter
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* FunctionParameter;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Nullable`1<System.Boolean> GeneratePlayStreamEvent
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::System::Nullable_1<bool> GeneratePlayStreamEvent;
    // public System.Nullable`1<PlayFab.CloudScriptModels.CloudScriptRevisionOption> RevisionSelection
    // Size: 0xFFFFFFFF
    // Offset: 0x34
    ::System::Nullable_1<::PlayFab::CloudScriptModels::CloudScriptRevisionOption> RevisionSelection;
    // public System.Nullable`1<System.Int32> SpecificRevision
    // Size: 0xFFFFFFFF
    // Offset: 0x3C
    ::System::Nullable_1<int> SpecificRevision;
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public PlayFab.CloudScriptModels.EntityKey Entity
    [[deprecated("Use field access instead!")]] ::PlayFab::CloudScriptModels::EntityKey*& dyn_Entity();
    // Get instance field reference: public System.String FunctionName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FunctionName();
    // Get instance field reference: public System.Object FunctionParameter
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_FunctionParameter();
    // Get instance field reference: public System.Nullable`1<System.Boolean> GeneratePlayStreamEvent
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_GeneratePlayStreamEvent();
    // Get instance field reference: public System.Nullable`1<PlayFab.CloudScriptModels.CloudScriptRevisionOption> RevisionSelection
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::CloudScriptModels::CloudScriptRevisionOption>& dyn_RevisionSelection();
    // Get instance field reference: public System.Nullable`1<System.Int32> SpecificRevision
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_SpecificRevision();
    // public System.Void .ctor()
    // Offset: 0xB5D620
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecuteEntityCloudScriptRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecuteEntityCloudScriptRequest*, creationType>()));
    }
  }; // PlayFab.CloudScriptModels.ExecuteEntityCloudScriptRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
