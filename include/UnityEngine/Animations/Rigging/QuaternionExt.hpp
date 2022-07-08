// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: QuaternionExt
  class QuaternionExt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::QuaternionExt);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::QuaternionExt*, "UnityEngine.Animations.Rigging", "QuaternionExt");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.QuaternionExt
  // [TokenAttribute] Offset: FFFFFFFF
  class QuaternionExt : public ::Il2CppObject {
    public:
    // static field const value: static private System.Single k_FloatMin
    static constexpr const float k_FloatMin = 1e-10;
    // Get static field: static private System.Single k_FloatMin
    static float _get_k_FloatMin();
    // Set static field: static private System.Single k_FloatMin
    static void _set_k_FloatMin(float value);
    // Get static field: static public readonly UnityEngine.Quaternion zero
    static ::UnityEngine::Quaternion _get_zero();
    // Set static field: static public readonly UnityEngine.Quaternion zero
    static void _set_zero(::UnityEngine::Quaternion value);
    // static public UnityEngine.Quaternion FromToRotation(UnityEngine.Vector3 from, UnityEngine.Vector3 to)
    // Offset: 0x1158250
    static ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to);
    // static public UnityEngine.Quaternion Add(UnityEngine.Quaternion rhs, UnityEngine.Quaternion lhs)
    // Offset: 0x115C884
    static ::UnityEngine::Quaternion Add(::UnityEngine::Quaternion rhs, ::UnityEngine::Quaternion lhs);
    // static public UnityEngine.Quaternion Scale(UnityEngine.Quaternion q, System.Single scale)
    // Offset: 0x115C844
    static ::UnityEngine::Quaternion Scale(::UnityEngine::Quaternion q, float scale);
    // static public UnityEngine.Quaternion NormalizeSafe(UnityEngine.Quaternion q)
    // Offset: 0x115C9C4
    static ::UnityEngine::Quaternion NormalizeSafe(::UnityEngine::Quaternion q);
    // static private System.Void .cctor()
    // Offset: 0x1160D1C
    static void _cctor();
  }; // UnityEngine.Animations.Rigging.QuaternionExt
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::QuaternionExt::FromToRotation
// Il2CppName: FromToRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&UnityEngine::Animations::Rigging::QuaternionExt::FromToRotation)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::QuaternionExt*), "FromToRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::QuaternionExt::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&UnityEngine::Animations::Rigging::QuaternionExt::Add)> {
  static const MethodInfo* get() {
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* lhs = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::QuaternionExt*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rhs, lhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::QuaternionExt::Scale
// Il2CppName: Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, float)>(&UnityEngine::Animations::Rigging::QuaternionExt::Scale)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::QuaternionExt*), "Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q, scale});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::QuaternionExt::NormalizeSafe
// Il2CppName: NormalizeSafe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&UnityEngine::Animations::Rigging::QuaternionExt::NormalizeSafe)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::QuaternionExt*), "NormalizeSafe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::QuaternionExt::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Animations::Rigging::QuaternionExt::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::QuaternionExt*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
