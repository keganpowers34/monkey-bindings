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
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GenericServiceId
  class GenericServiceId;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: RemoveGenericIDRequest
  class RemoveGenericIDRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::RemoveGenericIDRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::RemoveGenericIDRequest*, "PlayFab.ClientModels", "RemoveGenericIDRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.RemoveGenericIDRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class RemoveGenericIDRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public PlayFab.ClientModels.GenericServiceId GenericId
    // Size: 0x8
    // Offset: 0x18
    ::PlayFab::ClientModels::GenericServiceId* GenericId;
    // Field size check
    static_assert(sizeof(::PlayFab::ClientModels::GenericServiceId*) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public PlayFab.ClientModels.GenericServiceId GenericId
    [[deprecated("Use field access instead!")]] ::PlayFab::ClientModels::GenericServiceId*& dyn_GenericId();
    // public System.Void .ctor()
    // Offset: 0xB5D220
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoveGenericIDRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::RemoveGenericIDRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoveGenericIDRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.RemoveGenericIDRequest
  #pragma pack(pop)
  static check_size<sizeof(RemoveGenericIDRequest), 24 + sizeof(::PlayFab::ClientModels::GenericServiceId*)> __PlayFab_ClientModels_RemoveGenericIDRequestSizeCheck;
  static_assert(sizeof(RemoveGenericIDRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::RemoveGenericIDRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
