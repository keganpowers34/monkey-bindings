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
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: Variable
  class Variable;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: TreatmentAssignment
  class TreatmentAssignment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::TreatmentAssignment);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::TreatmentAssignment*, "PlayFab.ClientModels", "TreatmentAssignment");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.TreatmentAssignment
  // [TokenAttribute] Offset: FFFFFFFF
  class TreatmentAssignment : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.Variable> Variables
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Variable*>* Variables;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::Variable*>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> Variants
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::StringW>* Variants;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.Variable> Variables
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Variable*>*& dyn_Variables();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> Variants
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_Variants();
    // public System.Void .ctor()
    // Offset: 0xB5D340
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TreatmentAssignment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::TreatmentAssignment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TreatmentAssignment*, creationType>()));
    }
  }; // PlayFab.ClientModels.TreatmentAssignment
  #pragma pack(pop)
  static check_size<sizeof(TreatmentAssignment), 24 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __PlayFab_ClientModels_TreatmentAssignmentSizeCheck;
  static_assert(sizeof(TreatmentAssignment) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::TreatmentAssignment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
