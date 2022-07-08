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
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Forward declaring type: EntityKey
  class EntityKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::GroupsModels::EntityKey);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::GroupsModels::EntityKey*, "PlayFab.GroupsModels", "EntityKey");
// Type namespace: PlayFab.GroupsModels
namespace PlayFab::GroupsModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.GroupsModels.EntityKey
  // [TokenAttribute] Offset: FFFFFFFF
  class EntityKey : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String Id
    // Size: 0x8
    // Offset: 0x10
    ::StringW Id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Type
    // Size: 0x8
    // Offset: 0x18
    ::StringW Type;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String Id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Id();
    // Get instance field reference: public System.String Type
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Type();
    // public System.Void .ctor()
    // Offset: 0xBB69B8
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EntityKey* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::GroupsModels::EntityKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EntityKey*, creationType>()));
    }
  }; // PlayFab.GroupsModels.EntityKey
  #pragma pack(pop)
  static check_size<sizeof(EntityKey), 24 + sizeof(::StringW)> __PlayFab_GroupsModels_EntityKeySizeCheck;
  static_assert(sizeof(EntityKey) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::GroupsModels::EntityKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
