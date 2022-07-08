// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetPlayerTagsResult
  class GetPlayerTagsResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetPlayerTagsResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetPlayerTagsResult*, "PlayFab.ClientModels", "GetPlayerTagsResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.GetPlayerTagsResult
  // [TokenAttribute] Offset: FFFFFFFF
  class GetPlayerTagsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.String PlayFabId
    // Size: 0x8
    // Offset: 0x20
    ::StringW PlayFabId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<System.String> Tags
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::StringW>* Tags;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Get instance field reference: public System.String PlayFabId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PlayFabId();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> Tags
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_Tags();
    // public System.Void .ctor()
    // Offset: 0xB5CE48
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetPlayerTagsResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetPlayerTagsResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetPlayerTagsResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetPlayerTagsResult
  #pragma pack(pop)
  static check_size<sizeof(GetPlayerTagsResult), 40 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __PlayFab_ClientModels_GetPlayerTagsResultSizeCheck;
  static_assert(sizeof(GetPlayerTagsResult) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetPlayerTagsResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
