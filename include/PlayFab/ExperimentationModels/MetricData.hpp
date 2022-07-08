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
// Type namespace: PlayFab.ExperimentationModels
namespace PlayFab::ExperimentationModels {
  // Forward declaring type: MetricData
  class MetricData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ExperimentationModels::MetricData);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ExperimentationModels::MetricData*, "PlayFab.ExperimentationModels", "MetricData");
// Type namespace: PlayFab.ExperimentationModels
namespace PlayFab::ExperimentationModels {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ExperimentationModels.MetricData
  // [TokenAttribute] Offset: FFFFFFFF
  class MetricData : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Double ConfidenceIntervalEnd
    // Size: 0x8
    // Offset: 0x10
    double ConfidenceIntervalEnd;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double ConfidenceIntervalStart
    // Size: 0x8
    // Offset: 0x18
    double ConfidenceIntervalStart;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Single DeltaAbsoluteChange
    // Size: 0x4
    // Offset: 0x20
    float DeltaAbsoluteChange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single DeltaRelativeChange
    // Size: 0x4
    // Offset: 0x24
    float DeltaRelativeChange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.String InternalName
    // Size: 0x8
    // Offset: 0x28
    ::StringW InternalName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Movement
    // Size: 0x8
    // Offset: 0x30
    ::StringW Movement;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Name
    // Size: 0x8
    // Offset: 0x38
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single PMove
    // Size: 0x4
    // Offset: 0x40
    float PMove;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single PValue
    // Size: 0x4
    // Offset: 0x44
    float PValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single PValueThreshold
    // Size: 0x4
    // Offset: 0x48
    float PValueThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: PValueThreshold and: StatSigLevel
    char __padding9[0x4] = {};
    // public System.String StatSigLevel
    // Size: 0x8
    // Offset: 0x50
    ::StringW StatSigLevel;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single StdDev
    // Size: 0x4
    // Offset: 0x58
    float StdDev;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Value
    // Size: 0x4
    // Offset: 0x5C
    float Value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Double ConfidenceIntervalEnd
    [[deprecated("Use field access instead!")]] double& dyn_ConfidenceIntervalEnd();
    // Get instance field reference: public System.Double ConfidenceIntervalStart
    [[deprecated("Use field access instead!")]] double& dyn_ConfidenceIntervalStart();
    // Get instance field reference: public System.Single DeltaAbsoluteChange
    [[deprecated("Use field access instead!")]] float& dyn_DeltaAbsoluteChange();
    // Get instance field reference: public System.Single DeltaRelativeChange
    [[deprecated("Use field access instead!")]] float& dyn_DeltaRelativeChange();
    // Get instance field reference: public System.String InternalName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_InternalName();
    // Get instance field reference: public System.String Movement
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Movement();
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: public System.Single PMove
    [[deprecated("Use field access instead!")]] float& dyn_PMove();
    // Get instance field reference: public System.Single PValue
    [[deprecated("Use field access instead!")]] float& dyn_PValue();
    // Get instance field reference: public System.Single PValueThreshold
    [[deprecated("Use field access instead!")]] float& dyn_PValueThreshold();
    // Get instance field reference: public System.String StatSigLevel
    [[deprecated("Use field access instead!")]] ::StringW& dyn_StatSigLevel();
    // Get instance field reference: public System.Single StdDev
    [[deprecated("Use field access instead!")]] float& dyn_StdDev();
    // Get instance field reference: public System.Single Value
    [[deprecated("Use field access instead!")]] float& dyn_Value();
    // public System.Void .ctor()
    // Offset: 0xBB6900
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MetricData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ExperimentationModels::MetricData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MetricData*, creationType>()));
    }
  }; // PlayFab.ExperimentationModels.MetricData
  #pragma pack(pop)
  static check_size<sizeof(MetricData), 92 + sizeof(float)> __PlayFab_ExperimentationModels_MetricDataSizeCheck;
  static_assert(sizeof(MetricData) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ExperimentationModels::MetricData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
