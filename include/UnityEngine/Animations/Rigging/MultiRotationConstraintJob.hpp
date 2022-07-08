// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Animations.Rigging.IWeightedAnimationJob
#include "UnityEngine/Animations/Rigging/IWeightedAnimationJob.hpp"
// Including type: UnityEngine.Animations.Rigging.ReadWriteTransformHandle
#include "UnityEngine/Animations/Rigging/ReadWriteTransformHandle.hpp"
// Including type: UnityEngine.Animations.Rigging.ReadOnlyTransformHandle
#include "UnityEngine/Animations/Rigging/ReadOnlyTransformHandle.hpp"
// Including type: UnityEngine.Animations.Rigging.Vector3Property
#include "UnityEngine/Animations/Rigging/Vector3Property.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Animations.Rigging.FloatProperty
#include "UnityEngine/Animations/Rigging/FloatProperty.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Skipping declaration: AnimationStream because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: MultiRotationConstraintJob
  struct MultiRotationConstraintJob;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::MultiRotationConstraintJob, "UnityEngine.Animations.Rigging", "MultiRotationConstraintJob");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.Rigging.MultiRotationConstraintJob
  // [TokenAttribute] Offset: FFFFFFFF
  // [BurstCompileAttribute] Offset: FFFFFFFF
  struct MultiRotationConstraintJob/*, public ::System::ValueType, public ::UnityEngine::Animations::Rigging::IWeightedAnimationJob*/ {
    public:
    public:
    // public UnityEngine.Animations.Rigging.ReadWriteTransformHandle driven
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Animations::Rigging::ReadWriteTransformHandle driven;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::ReadWriteTransformHandle) == 0xC);
    // public UnityEngine.Animations.Rigging.ReadOnlyTransformHandle drivenParent
    // Size: 0x15
    // Offset: 0xC
    ::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle drivenParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle) == 0x15);
    // public UnityEngine.Animations.Rigging.Vector3Property drivenOffset
    // Size: 0x30
    // Offset: 0x24
    ::UnityEngine::Animations::Rigging::Vector3Property drivenOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::Vector3Property) == 0x30);
    // public Unity.Collections.NativeArray`1<UnityEngine.Animations.Rigging.ReadOnlyTransformHandle> sourceTransforms
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle> sourceTransforms;
    // public Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle> sourceWeights
    // Size: 0xFFFFFFFF
    // Offset: 0x68
    ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle> sourceWeights;
    // public Unity.Collections.NativeArray`1<UnityEngine.Quaternion> sourceOffsets
    // Size: 0xFFFFFFFF
    // Offset: 0x78
    ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> sourceOffsets;
    // public Unity.Collections.NativeArray`1<System.Single> weightBuffer
    // Size: 0xFFFFFFFF
    // Offset: 0x88
    ::Unity::Collections::NativeArray_1<float> weightBuffer;
    // public UnityEngine.Vector3 axesMask
    // Size: 0xC
    // Offset: 0x98
    ::UnityEngine::Vector3 axesMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xADA920
    // private UnityEngine.Animations.Rigging.FloatProperty <jobWeight>k__BackingField
    // Size: 0x10
    // Offset: 0xA4
    ::UnityEngine::Animations::Rigging::FloatProperty jobWeight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::FloatProperty) == 0x10);
    public:
    // Creating value type constructor for type: MultiRotationConstraintJob
    constexpr MultiRotationConstraintJob(::UnityEngine::Animations::Rigging::ReadWriteTransformHandle driven_ = {}, ::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle drivenParent_ = {}, ::UnityEngine::Animations::Rigging::Vector3Property drivenOffset_ = {}, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle> sourceTransforms_ = {}, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle> sourceWeights_ = {}, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> sourceOffsets_ = {}, ::Unity::Collections::NativeArray_1<float> weightBuffer_ = {}, ::UnityEngine::Vector3 axesMask_ = {}, ::UnityEngine::Animations::Rigging::FloatProperty jobWeight_ = {}) noexcept : driven{driven_}, drivenParent{drivenParent_}, drivenOffset{drivenOffset_}, sourceTransforms{sourceTransforms_}, sourceWeights{sourceWeights_}, sourceOffsets{sourceOffsets_}, weightBuffer{weightBuffer_}, axesMask{axesMask_}, jobWeight{jobWeight_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IWeightedAnimationJob
    operator ::UnityEngine::Animations::Rigging::IWeightedAnimationJob() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IWeightedAnimationJob*>(this);
    }
    // static field const value: static private System.Single k_Epsilon
    static constexpr const float k_Epsilon = 1e-05;
    // Get static field: static private System.Single k_Epsilon
    static float _get_k_Epsilon();
    // Set static field: static private System.Single k_Epsilon
    static void _set_k_Epsilon(float value);
    // Get instance field reference: public UnityEngine.Animations.Rigging.ReadWriteTransformHandle driven
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::ReadWriteTransformHandle& dyn_driven();
    // Get instance field reference: public UnityEngine.Animations.Rigging.ReadOnlyTransformHandle drivenParent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle& dyn_drivenParent();
    // Get instance field reference: public UnityEngine.Animations.Rigging.Vector3Property drivenOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::Vector3Property& dyn_drivenOffset();
    // Get instance field reference: public Unity.Collections.NativeArray`1<UnityEngine.Animations.Rigging.ReadOnlyTransformHandle> sourceTransforms
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle>& dyn_sourceTransforms();
    // Get instance field reference: public Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle> sourceWeights
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>& dyn_sourceWeights();
    // Get instance field reference: public Unity.Collections.NativeArray`1<UnityEngine.Quaternion> sourceOffsets
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>& dyn_sourceOffsets();
    // Get instance field reference: public Unity.Collections.NativeArray`1<System.Single> weightBuffer
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<float>& dyn_weightBuffer();
    // Get instance field reference: public UnityEngine.Vector3 axesMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_axesMask();
    // Get instance field reference: private UnityEngine.Animations.Rigging.FloatProperty <jobWeight>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::FloatProperty& dyn_$jobWeight$k__BackingField();
    // public UnityEngine.Animations.Rigging.FloatProperty get_jobWeight()
    // Offset: 0x9ABDD8
    ::UnityEngine::Animations::Rigging::FloatProperty get_jobWeight();
    // public System.Void set_jobWeight(UnityEngine.Animations.Rigging.FloatProperty value)
    // Offset: 0x9ABDE0
    void set_jobWeight(::UnityEngine::Animations::Rigging::FloatProperty value);
    // public System.Void ProcessRootMotion(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x9ABDE8
    void ProcessRootMotion(::UnityEngine::Animations::AnimationStream stream);
    // public System.Void ProcessAnimation(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x9ABDEC
    void ProcessAnimation(::UnityEngine::Animations::AnimationStream stream);
  }; // UnityEngine.Animations.Rigging.MultiRotationConstraintJob
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintJob::get_jobWeight
// Il2CppName: get_jobWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::FloatProperty (UnityEngine::Animations::Rigging::MultiRotationConstraintJob::*)()>(&UnityEngine::Animations::Rigging::MultiRotationConstraintJob::get_jobWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintJob), "get_jobWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintJob::set_jobWeight
// Il2CppName: set_jobWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiRotationConstraintJob::*)(::UnityEngine::Animations::Rigging::FloatProperty)>(&UnityEngine::Animations::Rigging::MultiRotationConstraintJob::set_jobWeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "FloatProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintJob), "set_jobWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintJob::ProcessRootMotion
// Il2CppName: ProcessRootMotion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiRotationConstraintJob::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::MultiRotationConstraintJob::ProcessRootMotion)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintJob), "ProcessRootMotion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::MultiRotationConstraintJob::ProcessAnimation
// Il2CppName: ProcessAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::MultiRotationConstraintJob::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::MultiRotationConstraintJob::ProcessAnimation)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::MultiRotationConstraintJob), "ProcessAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
