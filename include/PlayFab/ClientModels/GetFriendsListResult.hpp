// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: FriendInfo
  class FriendInfo;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetFriendsListResult
  class GetFriendsListResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetFriendsListResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetFriendsListResult*, "PlayFab.ClientModels", "GetFriendsListResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.GetFriendsListResult
  // [TokenAttribute] Offset: FFFFFFFF
  class GetFriendsListResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.FriendInfo> Friends
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>* Friends;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>*
    constexpr operator ::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>*() const noexcept {
      return Friends;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.FriendInfo> Friends
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>*& dyn_Friends();
    // public System.Void .ctor()
    // Offset: 0xB5CCC8
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetFriendsListResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetFriendsListResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetFriendsListResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetFriendsListResult
  #pragma pack(pop)
  static check_size<sizeof(GetFriendsListResult), 32 + sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>*)> __PlayFab_ClientModels_GetFriendsListResultSizeCheck;
  static_assert(sizeof(GetFriendsListResult) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetFriendsListResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
