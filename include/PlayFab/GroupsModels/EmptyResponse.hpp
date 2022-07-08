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
// Completed includes
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: EmptyResponse
  class EmptyResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::GroupsModels::EmptyResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::GroupsModels::EmptyResponse*, "PlayFab.GroupsModels", "EmptyResponse");
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.GroupsModels.EmptyResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class EmptyResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    // public System.Void .ctor()
    // Offset: 0xBB69B0
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::GroupsModels::EmptyResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyResponse*, creationType>()));
    }
  }; // PlayFab.GroupsModels.EmptyResponse
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::GroupsModels::EmptyResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
