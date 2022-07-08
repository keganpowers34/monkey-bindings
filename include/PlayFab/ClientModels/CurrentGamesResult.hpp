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
  // Forward declaring type: GameInfo
  class GameInfo;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: CurrentGamesResult
  class CurrentGamesResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::CurrentGamesResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::CurrentGamesResult*, "PlayFab.ClientModels", "CurrentGamesResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.CurrentGamesResult
  // [TokenAttribute] Offset: FFFFFFFF
  class CurrentGamesResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Int32 GameCount
    // Size: 0x4
    // Offset: 0x20
    int GameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: GameCount and: Games
    char __padding0[0x4] = {};
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.GameInfo> Games
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameInfo*>* Games;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameInfo*>*) == 0x8);
    // public System.Int32 PlayerCount
    // Size: 0x4
    // Offset: 0x30
    int PlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 GameCount
    [[deprecated("Use field access instead!")]] int& dyn_GameCount();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.GameInfo> Games
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameInfo*>*& dyn_Games();
    // Get instance field reference: public System.Int32 PlayerCount
    [[deprecated("Use field access instead!")]] int& dyn_PlayerCount();
    // public System.Void .ctor()
    // Offset: 0xB5CBA0
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurrentGamesResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::CurrentGamesResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurrentGamesResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.CurrentGamesResult
  #pragma pack(pop)
  static check_size<sizeof(CurrentGamesResult), 48 + sizeof(int)> __PlayFab_ClientModels_CurrentGamesResultSizeCheck;
  static_assert(sizeof(CurrentGamesResult) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::CurrentGamesResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
