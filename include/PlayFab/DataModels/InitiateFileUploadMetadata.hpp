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
// Type namespace: PlayFab.DataModels
namespace PlayFab::DataModels {
  // Forward declaring type: InitiateFileUploadMetadata
  class InitiateFileUploadMetadata;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::DataModels::InitiateFileUploadMetadata);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::DataModels::InitiateFileUploadMetadata*, "PlayFab.DataModels", "InitiateFileUploadMetadata");
// Type namespace: PlayFab.DataModels
namespace PlayFab::DataModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.DataModels.InitiateFileUploadMetadata
  // [TokenAttribute] Offset: FFFFFFFF
  class InitiateFileUploadMetadata : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String FileName
    // Size: 0x8
    // Offset: 0x10
    ::StringW FileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String UploadUrl
    // Size: 0x8
    // Offset: 0x18
    ::StringW UploadUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String FileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FileName();
    // Get instance field reference: public System.String UploadUrl
    [[deprecated("Use field access instead!")]] ::StringW& dyn_UploadUrl();
    // public System.Void .ctor()
    // Offset: 0xB5D778
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitiateFileUploadMetadata* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::DataModels::InitiateFileUploadMetadata::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitiateFileUploadMetadata*, creationType>()));
    }
  }; // PlayFab.DataModels.InitiateFileUploadMetadata
  #pragma pack(pop)
  static check_size<sizeof(InitiateFileUploadMetadata), 24 + sizeof(::StringW)> __PlayFab_DataModels_InitiateFileUploadMetadataSizeCheck;
  static_assert(sizeof(InitiateFileUploadMetadata) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::DataModels::InitiateFileUploadMetadata::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
