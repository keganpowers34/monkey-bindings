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
  // Forward declaring type: UserFacebookInfo
  class UserFacebookInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::UserFacebookInfo);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::UserFacebookInfo*, "PlayFab.ClientModels", "UserFacebookInfo");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.UserFacebookInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class UserFacebookInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String FacebookId
    // Size: 0x8
    // Offset: 0x10
    ::StringW FacebookId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String FullName
    // Size: 0x8
    // Offset: 0x18
    ::StringW FullName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String FacebookId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FacebookId();
    // Get instance field reference: public System.String FullName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FullName();
    // public System.Void .ctor()
    // Offset: 0xB5D4F0
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserFacebookInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::UserFacebookInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserFacebookInfo*, creationType>()));
    }
  }; // PlayFab.ClientModels.UserFacebookInfo
  #pragma pack(pop)
  static check_size<sizeof(UserFacebookInfo), 24 + sizeof(::StringW)> __PlayFab_ClientModels_UserFacebookInfoSizeCheck;
  static_assert(sizeof(UserFacebookInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::UserFacebookInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
