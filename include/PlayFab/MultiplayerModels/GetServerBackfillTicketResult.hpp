// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: MatchmakingPlayerWithTeamAssignment
  class MatchmakingPlayerWithTeamAssignment;
  // Forward declaring type: ServerDetails
  class ServerDetails;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: GetServerBackfillTicketResult
  class GetServerBackfillTicketResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::GetServerBackfillTicketResult*, "PlayFab.MultiplayerModels", "GetServerBackfillTicketResult");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.GetServerBackfillTicketResult
  // [TokenAttribute] Offset: FFFFFFFF
  class GetServerBackfillTicketResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.String CancellationReasonString
    // Size: 0x8
    // Offset: 0x20
    ::StringW CancellationReasonString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.DateTime Created
    // Size: 0x8
    // Offset: 0x28
    ::System::DateTime Created;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public System.Int32 GiveUpAfterSeconds
    // Size: 0x4
    // Offset: 0x30
    int GiveUpAfterSeconds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: GiveUpAfterSeconds and: MatchId
    char __padding2[0x4] = {};
    // public System.String MatchId
    // Size: 0x8
    // Offset: 0x38
    ::StringW MatchId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.MatchmakingPlayerWithTeamAssignment> Members
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>* Members;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*) == 0x8);
    // public System.String QueueName
    // Size: 0x8
    // Offset: 0x48
    ::StringW QueueName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public PlayFab.MultiplayerModels.ServerDetails ServerDetails
    // Size: 0x8
    // Offset: 0x50
    ::PlayFab::MultiplayerModels::ServerDetails* ServerDetails;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::ServerDetails*) == 0x8);
    // public System.String Status
    // Size: 0x8
    // Offset: 0x58
    ::StringW Status;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String TicketId
    // Size: 0x8
    // Offset: 0x60
    ::StringW TicketId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String CancellationReasonString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CancellationReasonString();
    // Get instance field reference: public System.DateTime Created
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_Created();
    // Get instance field reference: public System.Int32 GiveUpAfterSeconds
    [[deprecated("Use field access instead!")]] int& dyn_GiveUpAfterSeconds();
    // Get instance field reference: public System.String MatchId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_MatchId();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.MatchmakingPlayerWithTeamAssignment> Members
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*& dyn_Members();
    // Get instance field reference: public System.String QueueName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_QueueName();
    // Get instance field reference: public PlayFab.MultiplayerModels.ServerDetails ServerDetails
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::ServerDetails*& dyn_ServerDetails();
    // Get instance field reference: public System.String Status
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Status();
    // Get instance field reference: public System.String TicketId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TicketId();
    // public System.Void .ctor()
    // Offset: 0xBCC9A0
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetServerBackfillTicketResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::GetServerBackfillTicketResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetServerBackfillTicketResult*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.GetServerBackfillTicketResult
  #pragma pack(pop)
  static check_size<sizeof(GetServerBackfillTicketResult), 96 + sizeof(::StringW)> __PlayFab_MultiplayerModels_GetServerBackfillTicketResultSizeCheck;
  static_assert(sizeof(GetServerBackfillTicketResult) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::GetServerBackfillTicketResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
