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
  // Forward declaring type: SubtractUserVirtualCurrencyRequest
  class SubtractUserVirtualCurrencyRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest*, "PlayFab.ClientModels", "SubtractUserVirtualCurrencyRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.SubtractUserVirtualCurrencyRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class SubtractUserVirtualCurrencyRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.Int32 Amount
    // Size: 0x4
    // Offset: 0x18
    int Amount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Amount and: VirtualCurrency
    char __padding0[0x4] = {};
    // public System.String VirtualCurrency
    // Size: 0x8
    // Offset: 0x20
    ::StringW VirtualCurrency;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.Int32 Amount
    [[deprecated("Use field access instead!")]] int& dyn_Amount();
    // Get instance field reference: public System.String VirtualCurrency
    [[deprecated("Use field access instead!")]] ::StringW& dyn_VirtualCurrency();
    // public System.Void .ctor()
    // Offset: 0xB5D320
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubtractUserVirtualCurrencyRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubtractUserVirtualCurrencyRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.SubtractUserVirtualCurrencyRequest
  #pragma pack(pop)
  static check_size<sizeof(SubtractUserVirtualCurrencyRequest), 32 + sizeof(::StringW)> __PlayFab_ClientModels_SubtractUserVirtualCurrencyRequestSizeCheck;
  static_assert(sizeof(SubtractUserVirtualCurrencyRequest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
