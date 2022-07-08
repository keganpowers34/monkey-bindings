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
  // Forward declaring type: PayForPurchaseRequest
  class PayForPurchaseRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::PayForPurchaseRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::PayForPurchaseRequest*, "PlayFab.ClientModels", "PayForPurchaseRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.PayForPurchaseRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class PayForPurchaseRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String Currency
    // Size: 0x8
    // Offset: 0x18
    ::StringW Currency;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String OrderId
    // Size: 0x8
    // Offset: 0x20
    ::StringW OrderId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ProviderName
    // Size: 0x8
    // Offset: 0x28
    ::StringW ProviderName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ProviderTransactionId
    // Size: 0x8
    // Offset: 0x30
    ::StringW ProviderTransactionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String Currency
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Currency();
    // Get instance field reference: public System.String OrderId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrderId();
    // Get instance field reference: public System.String ProviderName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ProviderName();
    // Get instance field reference: public System.String ProviderTransactionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ProviderTransactionId();
    // public System.Void .ctor()
    // Offset: 0xB5D160
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PayForPurchaseRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::PayForPurchaseRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PayForPurchaseRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.PayForPurchaseRequest
  #pragma pack(pop)
  static check_size<sizeof(PayForPurchaseRequest), 48 + sizeof(::StringW)> __PlayFab_ClientModels_PayForPurchaseRequestSizeCheck;
  static_assert(sizeof(PayForPurchaseRequest) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::PayForPurchaseRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
