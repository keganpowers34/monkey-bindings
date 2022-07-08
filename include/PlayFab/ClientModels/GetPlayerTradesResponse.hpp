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
  // Forward declaring type: TradeInfo
  class TradeInfo;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetPlayerTradesResponse
  class GetPlayerTradesResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetPlayerTradesResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetPlayerTradesResponse*, "PlayFab.ClientModels", "GetPlayerTradesResponse");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.GetPlayerTradesResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class GetPlayerTradesResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.TradeInfo> AcceptedTrades
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>* AcceptedTrades;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.TradeInfo> OpenedTrades
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>* OpenedTrades;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.TradeInfo> AcceptedTrades
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*& dyn_AcceptedTrades();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.TradeInfo> OpenedTrades
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*& dyn_OpenedTrades();
    // public System.Void .ctor()
    // Offset: 0xB5CE58
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetPlayerTradesResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetPlayerTradesResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetPlayerTradesResponse*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetPlayerTradesResponse
  #pragma pack(pop)
  static check_size<sizeof(GetPlayerTradesResponse), 40 + sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*)> __PlayFab_ClientModels_GetPlayerTradesResponseSizeCheck;
  static_assert(sizeof(GetPlayerTradesResponse) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetPlayerTradesResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
