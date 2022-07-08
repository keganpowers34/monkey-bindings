// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: ContainerImageReference
  class ContainerImageReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::ContainerImageReference);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::ContainerImageReference*, "PlayFab.MultiplayerModels", "ContainerImageReference");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.ContainerImageReference
  // [TokenAttribute] Offset: FFFFFFFF
  class ContainerImageReference : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String ImageName
    // Size: 0x8
    // Offset: 0x10
    ::StringW ImageName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Tag
    // Size: 0x8
    // Offset: 0x18
    ::StringW Tag;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String ImageName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ImageName();
    // Get instance field reference: public System.String Tag
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Tag();
    // public System.Void .ctor()
    // Offset: 0xBCC7C8
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContainerImageReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::ContainerImageReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContainerImageReference*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.ContainerImageReference
  #pragma pack(pop)
  static check_size<sizeof(ContainerImageReference), 24 + sizeof(::StringW)> __PlayFab_MultiplayerModels_ContainerImageReferenceSizeCheck;
  static_assert(sizeof(ContainerImageReference) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::ContainerImageReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
