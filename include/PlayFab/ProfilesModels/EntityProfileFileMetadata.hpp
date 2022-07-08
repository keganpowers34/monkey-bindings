// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ProfilesModels
namespace PlayFab::ProfilesModels {
  // Forward declaring type: EntityProfileFileMetadata
  class EntityProfileFileMetadata;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ProfilesModels::EntityProfileFileMetadata);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ProfilesModels::EntityProfileFileMetadata*, "PlayFab.ProfilesModels", "EntityProfileFileMetadata");
// Type namespace: PlayFab.ProfilesModels
namespace PlayFab::ProfilesModels {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ProfilesModels.EntityProfileFileMetadata
  // [TokenAttribute] Offset: FFFFFFFF
  class EntityProfileFileMetadata : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String Checksum
    // Size: 0x8
    // Offset: 0x10
    ::StringW Checksum;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String FileName
    // Size: 0x8
    // Offset: 0x18
    ::StringW FileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.DateTime LastModified
    // Size: 0x8
    // Offset: 0x20
    ::System::DateTime LastModified;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public System.Int32 Size
    // Size: 0x4
    // Offset: 0x28
    int Size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String Checksum
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Checksum();
    // Get instance field reference: public System.String FileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FileName();
    // Get instance field reference: public System.DateTime LastModified
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_LastModified();
    // Get instance field reference: public System.Int32 Size
    [[deprecated("Use field access instead!")]] int& dyn_Size();
    // public System.Void .ctor()
    // Offset: 0x199E668
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EntityProfileFileMetadata* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ProfilesModels::EntityProfileFileMetadata::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EntityProfileFileMetadata*, creationType>()));
    }
  }; // PlayFab.ProfilesModels.EntityProfileFileMetadata
  #pragma pack(pop)
  static check_size<sizeof(EntityProfileFileMetadata), 40 + sizeof(int)> __PlayFab_ProfilesModels_EntityProfileFileMetadataSizeCheck;
  static_assert(sizeof(EntityProfileFileMetadata) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ProfilesModels::EntityProfileFileMetadata::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
