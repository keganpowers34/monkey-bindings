// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: PlayFab.CloudScriptModels.LoginIdentityProvider
#include "PlayFab/CloudScriptModels/LoginIdentityProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: LinkedPlatformAccountModel
  class LinkedPlatformAccountModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::CloudScriptModels::LinkedPlatformAccountModel);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::CloudScriptModels::LinkedPlatformAccountModel*, "PlayFab.CloudScriptModels", "LinkedPlatformAccountModel");
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.CloudScriptModels.LinkedPlatformAccountModel
  // [TokenAttribute] Offset: FFFFFFFF
  class LinkedPlatformAccountModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String Email
    // Size: 0x8
    // Offset: 0x10
    ::StringW Email;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<PlayFab.CloudScriptModels.LoginIdentityProvider> Platform
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<::PlayFab::CloudScriptModels::LoginIdentityProvider> Platform;
    // public System.String PlatformUserId
    // Size: 0x8
    // Offset: 0x20
    ::StringW PlatformUserId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Username
    // Size: 0x8
    // Offset: 0x28
    ::StringW Username;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String Email
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Email();
    // Get instance field reference: public System.Nullable`1<PlayFab.CloudScriptModels.LoginIdentityProvider> Platform
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::CloudScriptModels::LoginIdentityProvider>& dyn_Platform();
    // Get instance field reference: public System.String PlatformUserId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PlatformUserId();
    // Get instance field reference: public System.String Username
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Username();
    // public System.Void .ctor()
    // Offset: 0xB5D650
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinkedPlatformAccountModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::CloudScriptModels::LinkedPlatformAccountModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinkedPlatformAccountModel*, creationType>()));
    }
  }; // PlayFab.CloudScriptModels.LinkedPlatformAccountModel
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::CloudScriptModels::LinkedPlatformAccountModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
