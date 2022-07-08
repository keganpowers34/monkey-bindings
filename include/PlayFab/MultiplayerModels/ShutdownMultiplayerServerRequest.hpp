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
  // Forward declaring type: ShutdownMultiplayerServerRequest
  class ShutdownMultiplayerServerRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::ShutdownMultiplayerServerRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::ShutdownMultiplayerServerRequest*, "PlayFab.MultiplayerModels", "ShutdownMultiplayerServerRequest");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.ShutdownMultiplayerServerRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ShutdownMultiplayerServerRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String BuildId
    // Size: 0x8
    // Offset: 0x18
    ::StringW BuildId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Region
    // Size: 0x8
    // Offset: 0x20
    ::StringW Region;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String SessionId
    // Size: 0x8
    // Offset: 0x28
    ::StringW SessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String BuildId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_BuildId();
    // Get instance field reference: public System.String Region
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Region();
    // Get instance field reference: public System.String SessionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_SessionId();
    // public System.Void .ctor()
    // Offset: 0xBCCBA8
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShutdownMultiplayerServerRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::ShutdownMultiplayerServerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShutdownMultiplayerServerRequest*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.ShutdownMultiplayerServerRequest
  #pragma pack(pop)
  static check_size<sizeof(ShutdownMultiplayerServerRequest), 40 + sizeof(::StringW)> __PlayFab_MultiplayerModels_ShutdownMultiplayerServerRequestSizeCheck;
  static_assert(sizeof(ShutdownMultiplayerServerRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::ShutdownMultiplayerServerRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
