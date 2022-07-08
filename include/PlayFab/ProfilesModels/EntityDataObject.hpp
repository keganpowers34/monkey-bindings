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
// Type namespace: PlayFab.ProfilesModels
namespace PlayFab::ProfilesModels {
  // Forward declaring type: EntityDataObject
  class EntityDataObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ProfilesModels::EntityDataObject);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ProfilesModels::EntityDataObject*, "PlayFab.ProfilesModels", "EntityDataObject");
// Type namespace: PlayFab.ProfilesModels
namespace PlayFab::ProfilesModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ProfilesModels.EntityDataObject
  // [TokenAttribute] Offset: FFFFFFFF
  class EntityDataObject : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Object DataObject
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* DataObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.String EscapedDataObject
    // Size: 0x8
    // Offset: 0x18
    ::StringW EscapedDataObject;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ObjectName
    // Size: 0x8
    // Offset: 0x20
    ::StringW ObjectName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Object DataObject
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_DataObject();
    // Get instance field reference: public System.String EscapedDataObject
    [[deprecated("Use field access instead!")]] ::StringW& dyn_EscapedDataObject();
    // Get instance field reference: public System.String ObjectName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ObjectName();
    // public System.Void .ctor()
    // Offset: 0x199E638
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EntityDataObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ProfilesModels::EntityDataObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EntityDataObject*, creationType>()));
    }
  }; // PlayFab.ProfilesModels.EntityDataObject
  #pragma pack(pop)
  static check_size<sizeof(EntityDataObject), 32 + sizeof(::StringW)> __PlayFab_ProfilesModels_EntityDataObjectSizeCheck;
  static_assert(sizeof(EntityDataObject) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ProfilesModels::EntityDataObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
