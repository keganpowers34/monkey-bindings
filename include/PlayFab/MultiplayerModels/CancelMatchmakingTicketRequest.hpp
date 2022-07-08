// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: CancelMatchmakingTicketRequest
  class CancelMatchmakingTicketRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest*, "PlayFab.MultiplayerModels", "CancelMatchmakingTicketRequest");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.CancelMatchmakingTicketRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class CancelMatchmakingTicketRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String QueueName
    // Size: 0x8
    // Offset: 0x18
    ::StringW QueueName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String TicketId
    // Size: 0x8
    // Offset: 0x20
    ::StringW TicketId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String QueueName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_QueueName();
    // Get instance field reference: public System.String TicketId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TicketId();
    // public System.Void .ctor()
    // Offset: 0xBCC790
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CancelMatchmakingTicketRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CancelMatchmakingTicketRequest*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.CancelMatchmakingTicketRequest
  #pragma pack(pop)
  static check_size<sizeof(CancelMatchmakingTicketRequest), 32 + sizeof(::StringW)> __PlayFab_MultiplayerModels_CancelMatchmakingTicketRequestSizeCheck;
  static_assert(sizeof(CancelMatchmakingTicketRequest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
