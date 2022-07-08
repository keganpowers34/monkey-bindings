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
  // Forward declaring type: DeleteContainerImageRequest
  class DeleteContainerImageRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::DeleteContainerImageRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::DeleteContainerImageRequest*, "PlayFab.MultiplayerModels", "DeleteContainerImageRequest");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.DeleteContainerImageRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class DeleteContainerImageRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String ImageName
    // Size: 0x8
    // Offset: 0x18
    ::StringW ImageName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String ImageName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ImageName();
    // public System.Void .ctor()
    // Offset: 0xBCC890
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeleteContainerImageRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::DeleteContainerImageRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeleteContainerImageRequest*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.DeleteContainerImageRequest
  #pragma pack(pop)
  static check_size<sizeof(DeleteContainerImageRequest), 24 + sizeof(::StringW)> __PlayFab_MultiplayerModels_DeleteContainerImageRequestSizeCheck;
  static_assert(sizeof(DeleteContainerImageRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::DeleteContainerImageRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
