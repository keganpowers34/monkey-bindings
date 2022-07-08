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
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: UnlinkIOSDeviceIDRequest
  class UnlinkIOSDeviceIDRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::UnlinkIOSDeviceIDRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::UnlinkIOSDeviceIDRequest*, "PlayFab.ClientModels", "UnlinkIOSDeviceIDRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.UnlinkIOSDeviceIDRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class UnlinkIOSDeviceIDRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String DeviceId
    // Size: 0x8
    // Offset: 0x18
    ::StringW DeviceId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String DeviceId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DeviceId();
    // public System.Void .ctor()
    // Offset: 0xB5D3B8
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnlinkIOSDeviceIDRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::UnlinkIOSDeviceIDRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnlinkIOSDeviceIDRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.UnlinkIOSDeviceIDRequest
  #pragma pack(pop)
  static check_size<sizeof(UnlinkIOSDeviceIDRequest), 24 + sizeof(::StringW)> __PlayFab_ClientModels_UnlinkIOSDeviceIDRequestSizeCheck;
  static_assert(sizeof(UnlinkIOSDeviceIDRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::UnlinkIOSDeviceIDRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
