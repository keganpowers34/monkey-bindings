// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
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
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: Container_Dictionary_String_String
  class Container_Dictionary_String_String;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::Container_Dictionary_String_String);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::Container_Dictionary_String_String*, "PlayFab.ClientModels", "Container_Dictionary_String_String");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.Container_Dictionary_String_String
  // [TokenAttribute] Offset: FFFFFFFF
  class Container_Dictionary_String_String : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> Data
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Data;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*() const noexcept {
      return Data;
    }
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.String> Data
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_Data();
    // public System.Void .ctor()
    // Offset: 0xB5CB80
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Container_Dictionary_String_String* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::Container_Dictionary_String_String::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Container_Dictionary_String_String*, creationType>()));
    }
  }; // PlayFab.ClientModels.Container_Dictionary_String_String
  #pragma pack(pop)
  static check_size<sizeof(Container_Dictionary_String_String), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)> __PlayFab_ClientModels_Container_Dictionary_String_StringSizeCheck;
  static_assert(sizeof(Container_Dictionary_String_String) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::Container_Dictionary_String_String::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
