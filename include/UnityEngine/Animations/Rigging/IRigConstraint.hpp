// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Forward declaring type: IAnimationJob
  class IAnimationJob;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: IAnimationJobData
  class IAnimationJobData;
  // Forward declaring type: IAnimationJobBinder
  class IAnimationJobBinder;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: IRigConstraint
  class IRigConstraint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::IRigConstraint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::IRigConstraint*, "UnityEngine.Animations.Rigging", "IRigConstraint");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.IRigConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  class IRigConstraint {
    public:
    // public System.Boolean IsValid()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsValid();
    // public UnityEngine.Animations.IAnimationJob CreateJob(UnityEngine.Animator animator)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Animations::IAnimationJob* CreateJob(::UnityEngine::Animator* animator);
    // public System.Void UpdateJob(UnityEngine.Animations.IAnimationJob job)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateJob(::UnityEngine::Animations::IAnimationJob* job);
    // public System.Void DestroyJob(UnityEngine.Animations.IAnimationJob job)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void DestroyJob(::UnityEngine::Animations::IAnimationJob* job);
    // public UnityEngine.Animations.Rigging.IAnimationJobData get_data()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Animations::Rigging::IAnimationJobData* get_data();
    // public UnityEngine.Animations.Rigging.IAnimationJobBinder get_binder()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Animations::Rigging::IAnimationJobBinder* get_binder();
    // public System.Single get_weight()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_weight();
    // public System.Void set_weight(System.Single value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_weight(float value);
  }; // UnityEngine.Animations.Rigging.IRigConstraint
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IRigConstraint::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::IRigConstraint::*)()>(&UnityEngine::Animations::Rigging::IRigConstraint::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IRigConstraint*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IRigConstraint::CreateJob
// Il2CppName: CreateJob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::IAnimationJob* (UnityEngine::Animations::Rigging::IRigConstraint::*)(::UnityEngine::Animator*)>(&UnityEngine::Animations::Rigging::IRigConstraint::CreateJob)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IRigConstraint*), "CreateJob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IRigConstraint::UpdateJob
// Il2CppName: UpdateJob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::IRigConstraint::*)(::UnityEngine::Animations::IAnimationJob*)>(&UnityEngine::Animations::Rigging::IRigConstraint::UpdateJob)> {
  static const MethodInfo* get() {
    static auto* job = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "IAnimationJob")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IRigConstraint*), "UpdateJob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{job});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IRigConstraint::DestroyJob
// Il2CppName: DestroyJob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::IRigConstraint::*)(::UnityEngine::Animations::IAnimationJob*)>(&UnityEngine::Animations::Rigging::IRigConstraint::DestroyJob)> {
  static const MethodInfo* get() {
    static auto* job = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "IAnimationJob")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IRigConstraint*), "DestroyJob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{job});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IRigConstraint::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::IAnimationJobData* (UnityEngine::Animations::Rigging::IRigConstraint::*)()>(&UnityEngine::Animations::Rigging::IRigConstraint::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IRigConstraint*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IRigConstraint::get_binder
// Il2CppName: get_binder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::IAnimationJobBinder* (UnityEngine::Animations::Rigging::IRigConstraint::*)()>(&UnityEngine::Animations::Rigging::IRigConstraint::get_binder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IRigConstraint*), "get_binder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IRigConstraint::get_weight
// Il2CppName: get_weight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Animations::Rigging::IRigConstraint::*)()>(&UnityEngine::Animations::Rigging::IRigConstraint::get_weight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IRigConstraint*), "get_weight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IRigConstraint::set_weight
// Il2CppName: set_weight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::IRigConstraint::*)(float)>(&UnityEngine::Animations::Rigging::IRigConstraint::set_weight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IRigConstraint*), "set_weight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
