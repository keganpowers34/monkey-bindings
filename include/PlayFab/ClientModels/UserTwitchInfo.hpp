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
  // Forward declaring type: UserTwitchInfo
  class UserTwitchInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::UserTwitchInfo);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::UserTwitchInfo*, "PlayFab.ClientModels", "UserTwitchInfo");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.UserTwitchInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class UserTwitchInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String TwitchId
    // Size: 0x8
    // Offset: 0x10
    ::StringW TwitchId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String TwitchUserName
    // Size: 0x8
    // Offset: 0x18
    ::StringW TwitchUserName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String TwitchId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TwitchId();
    // Get instance field reference: public System.String TwitchUserName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TwitchUserName();
    // public System.Void .ctor()
    // Offset: 0xB5D560
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserTwitchInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::UserTwitchInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserTwitchInfo*, creationType>()));
    }
  }; // PlayFab.ClientModels.UserTwitchInfo
  #pragma pack(pop)
  static check_size<sizeof(UserTwitchInfo), 24 + sizeof(::StringW)> __PlayFab_ClientModels_UserTwitchInfoSizeCheck;
  static_assert(sizeof(UserTwitchInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::UserTwitchInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
