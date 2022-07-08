// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
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
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: BuildRegion
  class BuildRegion;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: BuildSummary
  class BuildSummary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::BuildSummary);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::BuildSummary*, "PlayFab.MultiplayerModels", "BuildSummary");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.MultiplayerModels.BuildSummary
  // [TokenAttribute] Offset: FFFFFFFF
  class BuildSummary : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String BuildId
    // Size: 0x8
    // Offset: 0x10
    ::StringW BuildId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String BuildName
    // Size: 0x8
    // Offset: 0x18
    ::StringW BuildName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.DateTime> CreationTime
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::System::Nullable_1<::System::DateTime> CreationTime;
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> Metadata
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Metadata;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.BuildRegion> RegionConfigurations
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>* RegionConfigurations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*) == 0x8);
    public:
    // Get instance field reference: public System.String BuildId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_BuildId();
    // Get instance field reference: public System.String BuildName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_BuildName();
    // Get instance field reference: public System.Nullable`1<System.DateTime> CreationTime
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_CreationTime();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.String> Metadata
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_Metadata();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.BuildRegion> RegionConfigurations
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*& dyn_RegionConfigurations();
    // public System.Void .ctor()
    // Offset: 0xBCC768
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuildSummary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::BuildSummary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuildSummary*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.BuildSummary
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::BuildSummary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
