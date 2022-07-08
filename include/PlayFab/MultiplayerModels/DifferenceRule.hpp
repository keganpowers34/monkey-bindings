// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: PlayFab.MultiplayerModels.AttributeNotSpecifiedBehavior
#include "PlayFab/MultiplayerModels/AttributeNotSpecifiedBehavior.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: PlayFab.MultiplayerModels.AttributeMergeFunction
#include "PlayFab/MultiplayerModels/AttributeMergeFunction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: QueueRuleAttribute
  class QueueRuleAttribute;
  // Forward declaring type: CustomDifferenceRuleExpansion
  class CustomDifferenceRuleExpansion;
  // Forward declaring type: LinearDifferenceRuleExpansion
  class LinearDifferenceRuleExpansion;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: DifferenceRule
  class DifferenceRule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::DifferenceRule);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::DifferenceRule*, "PlayFab.MultiplayerModels", "DifferenceRule");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.MultiplayerModels.DifferenceRule
  // [TokenAttribute] Offset: FFFFFFFF
  class DifferenceRule : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public PlayFab.MultiplayerModels.QueueRuleAttribute Attribute
    // Size: 0x8
    // Offset: 0x10
    ::PlayFab::MultiplayerModels::QueueRuleAttribute* Attribute;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::QueueRuleAttribute*) == 0x8);
    // public PlayFab.MultiplayerModels.AttributeNotSpecifiedBehavior AttributeNotSpecifiedBehavior
    // Size: 0x4
    // Offset: 0x18
    ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior AttributeNotSpecifiedBehavior;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior) == 0x4);
    // public PlayFab.MultiplayerModels.CustomDifferenceRuleExpansion CustomExpansion
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion* CustomExpansion;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion*) == 0x8);
    // public System.Nullable`1<System.Double> DefaultAttributeValue
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<double> DefaultAttributeValue;
    // public System.Double Difference
    // Size: 0x8
    // Offset: 0x38
    double Difference;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public PlayFab.MultiplayerModels.LinearDifferenceRuleExpansion LinearExpansion
    // Size: 0x8
    // Offset: 0x40
    ::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion* LinearExpansion;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion*) == 0x8);
    // public PlayFab.MultiplayerModels.AttributeMergeFunction MergeFunction
    // Size: 0x4
    // Offset: 0x48
    ::PlayFab::MultiplayerModels::AttributeMergeFunction MergeFunction;
    // Field size check
    static_assert(sizeof(::PlayFab::MultiplayerModels::AttributeMergeFunction) == 0x4);
    // public System.String Name
    // Size: 0x8
    // Offset: 0x50
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<System.UInt32> SecondsUntilOptional
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    ::System::Nullable_1<uint> SecondsUntilOptional;
    // public System.Double Weight
    // Size: 0x8
    // Offset: 0x60
    double Weight;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Get instance field reference: public PlayFab.MultiplayerModels.QueueRuleAttribute Attribute
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::QueueRuleAttribute*& dyn_Attribute();
    // Get instance field reference: public PlayFab.MultiplayerModels.AttributeNotSpecifiedBehavior AttributeNotSpecifiedBehavior
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior& dyn_AttributeNotSpecifiedBehavior();
    // Get instance field reference: public PlayFab.MultiplayerModels.CustomDifferenceRuleExpansion CustomExpansion
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion*& dyn_CustomExpansion();
    // Get instance field reference: public System.Nullable`1<System.Double> DefaultAttributeValue
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<double>& dyn_DefaultAttributeValue();
    // Get instance field reference: public System.Double Difference
    [[deprecated("Use field access instead!")]] double& dyn_Difference();
    // Get instance field reference: public PlayFab.MultiplayerModels.LinearDifferenceRuleExpansion LinearExpansion
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion*& dyn_LinearExpansion();
    // Get instance field reference: public PlayFab.MultiplayerModels.AttributeMergeFunction MergeFunction
    [[deprecated("Use field access instead!")]] ::PlayFab::MultiplayerModels::AttributeMergeFunction& dyn_MergeFunction();
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: public System.Nullable`1<System.UInt32> SecondsUntilOptional
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<uint>& dyn_SecondsUntilOptional();
    // Get instance field reference: public System.Double Weight
    [[deprecated("Use field access instead!")]] double& dyn_Weight();
    // public System.Void .ctor()
    // Offset: 0xBCC8A0
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DifferenceRule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::DifferenceRule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DifferenceRule*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.DifferenceRule
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::DifferenceRule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
