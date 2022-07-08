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
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Forward declaring type: ValueToDateModel
  class ValueToDateModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::CloudScriptModels::ValueToDateModel);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::CloudScriptModels::ValueToDateModel*, "PlayFab.CloudScriptModels", "ValueToDateModel");
// Type namespace: PlayFab.CloudScriptModels
namespace PlayFab::CloudScriptModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.CloudScriptModels.ValueToDateModel
  // [TokenAttribute] Offset: FFFFFFFF
  class ValueToDateModel : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String Currency
    // Size: 0x8
    // Offset: 0x10
    ::StringW Currency;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.UInt32 TotalValue
    // Size: 0x4
    // Offset: 0x18
    uint TotalValue;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: TotalValue and: TotalValueAsDecimal
    char __padding1[0x4] = {};
    // public System.String TotalValueAsDecimal
    // Size: 0x8
    // Offset: 0x20
    ::StringW TotalValueAsDecimal;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String Currency
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Currency();
    // Get instance field reference: public System.UInt32 TotalValue
    [[deprecated("Use field access instead!")]] uint& dyn_TotalValue();
    // Get instance field reference: public System.String TotalValueAsDecimal
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TotalValueAsDecimal();
    // public System.Void .ctor()
    // Offset: 0xB5D710
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueToDateModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::CloudScriptModels::ValueToDateModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueToDateModel*, creationType>()));
    }
  }; // PlayFab.CloudScriptModels.ValueToDateModel
  #pragma pack(pop)
  static check_size<sizeof(ValueToDateModel), 32 + sizeof(::StringW)> __PlayFab_CloudScriptModels_ValueToDateModelSizeCheck;
  static_assert(sizeof(ValueToDateModel) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::CloudScriptModels::ValueToDateModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
