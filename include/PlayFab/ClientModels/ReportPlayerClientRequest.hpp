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
  // Forward declaring type: ReportPlayerClientRequest
  class ReportPlayerClientRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::ReportPlayerClientRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::ReportPlayerClientRequest*, "PlayFab.ClientModels", "ReportPlayerClientRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.ReportPlayerClientRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ReportPlayerClientRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String Comment
    // Size: 0x8
    // Offset: 0x18
    ::StringW Comment;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ReporteeId
    // Size: 0x8
    // Offset: 0x20
    ::StringW ReporteeId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String Comment
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Comment();
    // Get instance field reference: public System.String ReporteeId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ReporteeId();
    // public System.Void .ctor()
    // Offset: 0xB5D250
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReportPlayerClientRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::ReportPlayerClientRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReportPlayerClientRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.ReportPlayerClientRequest
  #pragma pack(pop)
  static check_size<sizeof(ReportPlayerClientRequest), 32 + sizeof(::StringW)> __PlayFab_ClientModels_ReportPlayerClientRequestSizeCheck;
  static_assert(sizeof(ReportPlayerClientRequest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::ReportPlayerClientRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
