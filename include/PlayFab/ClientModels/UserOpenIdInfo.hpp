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
  // Forward declaring type: UserOpenIdInfo
  class UserOpenIdInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::UserOpenIdInfo);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::UserOpenIdInfo*, "PlayFab.ClientModels", "UserOpenIdInfo");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.UserOpenIdInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class UserOpenIdInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String ConnectionId
    // Size: 0x8
    // Offset: 0x10
    ::StringW ConnectionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Issuer
    // Size: 0x8
    // Offset: 0x18
    ::StringW Issuer;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Subject
    // Size: 0x8
    // Offset: 0x20
    ::StringW Subject;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String ConnectionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ConnectionId();
    // Get instance field reference: public System.String Issuer
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Issuer();
    // Get instance field reference: public System.String Subject
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Subject();
    // public System.Void .ctor()
    // Offset: 0xB5D530
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserOpenIdInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::UserOpenIdInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserOpenIdInfo*, creationType>()));
    }
  }; // PlayFab.ClientModels.UserOpenIdInfo
  #pragma pack(pop)
  static check_size<sizeof(UserOpenIdInfo), 32 + sizeof(::StringW)> __PlayFab_ClientModels_UserOpenIdInfoSizeCheck;
  static_assert(sizeof(UserOpenIdInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::UserOpenIdInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
