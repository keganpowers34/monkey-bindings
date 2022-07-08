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
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: TagModel
  class TagModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::TagModel);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::TagModel*, "PlayFab.ClientModels", "TagModel");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.TagModel
  // [TokenAttribute] Offset: FFFFFFFF
  class TagModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String TagValue
    // Size: 0x8
    // Offset: 0x10
    ::StringW TagValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return TagValue;
    }
    // Get instance field reference: public System.String TagValue
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TagValue();
    // public System.Void .ctor()
    // Offset: 0xB5D328
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TagModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::TagModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TagModel*, creationType>()));
    }
  }; // PlayFab.ClientModels.TagModel
  #pragma pack(pop)
  static check_size<sizeof(TagModel), 16 + sizeof(::StringW)> __PlayFab_ClientModels_TagModelSizeCheck;
  static_assert(sizeof(TagModel) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::TagModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
