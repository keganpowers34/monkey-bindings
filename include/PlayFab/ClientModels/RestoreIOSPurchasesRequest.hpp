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
  // Forward declaring type: RestoreIOSPurchasesRequest
  class RestoreIOSPurchasesRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::RestoreIOSPurchasesRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::RestoreIOSPurchasesRequest*, "PlayFab.ClientModels", "RestoreIOSPurchasesRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.RestoreIOSPurchasesRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class RestoreIOSPurchasesRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String CatalogVersion
    // Size: 0x8
    // Offset: 0x18
    ::StringW CatalogVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ReceiptData
    // Size: 0x8
    // Offset: 0x20
    ::StringW ReceiptData;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String CatalogVersion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CatalogVersion();
    // Get instance field reference: public System.String ReceiptData
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ReceiptData();
    // public System.Void .ctor()
    // Offset: 0xB5D260
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RestoreIOSPurchasesRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::RestoreIOSPurchasesRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RestoreIOSPurchasesRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.RestoreIOSPurchasesRequest
  #pragma pack(pop)
  static check_size<sizeof(RestoreIOSPurchasesRequest), 32 + sizeof(::StringW)> __PlayFab_ClientModels_RestoreIOSPurchasesRequestSizeCheck;
  static_assert(sizeof(RestoreIOSPurchasesRequest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::RestoreIOSPurchasesRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
