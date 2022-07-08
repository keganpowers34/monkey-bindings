// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: PlayFab.ClientModels.UserDataPermission
#include "PlayFab/ClientModels/UserDataPermission.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: UpdateUserDataRequest
  class UpdateUserDataRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::UpdateUserDataRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::UpdateUserDataRequest*, "PlayFab.ClientModels", "UpdateUserDataRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.UpdateUserDataRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class UpdateUserDataRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> Data
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Data;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> KeysToRemove
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::StringW>* KeysToRemove;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public System.Nullable`1<PlayFab.ClientModels.UserDataPermission> Permission
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission> Permission;
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.String> Data
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_Data();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> KeysToRemove
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_KeysToRemove();
    // Get instance field reference: public System.Nullable`1<PlayFab.ClientModels.UserDataPermission> Permission
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>& dyn_Permission();
    // public System.Void .ctor()
    // Offset: 0xB5D4A8
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UpdateUserDataRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::UpdateUserDataRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UpdateUserDataRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.UpdateUserDataRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::UpdateUserDataRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
