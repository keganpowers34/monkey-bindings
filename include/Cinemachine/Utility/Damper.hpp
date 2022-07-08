// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: Cinemachine.Utility
namespace Cinemachine::Utility {
  // Forward declaring type: Damper
  class Damper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::Utility::Damper);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::Utility::Damper*, "Cinemachine.Utility", "Damper");
// Type namespace: Cinemachine.Utility
namespace Cinemachine::Utility {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.Utility.Damper
  // [TokenAttribute] Offset: FFFFFFFF
  class Damper : public ::Il2CppObject {
    public:
    // static field const value: static private System.Single Epsilon
    static constexpr const float Epsilon = 0.0001;
    // Get static field: static private System.Single Epsilon
    static float _get_Epsilon();
    // Set static field: static private System.Single Epsilon
    static void _set_Epsilon(float value);
    // static field const value: static public System.Single kNegligibleResidual
    static constexpr const float kNegligibleResidual = 0.01;
    // Get static field: static public System.Single kNegligibleResidual
    static float _get_kNegligibleResidual();
    // Set static field: static public System.Single kNegligibleResidual
    static void _set_kNegligibleResidual(float value);
    // static field const value: static private System.Single kLogNegligibleResidual
    static constexpr const float kLogNegligibleResidual = -4.6051702;
    // Get static field: static private System.Single kLogNegligibleResidual
    static float _get_kLogNegligibleResidual();
    // Set static field: static private System.Single kLogNegligibleResidual
    static void _set_kLogNegligibleResidual(float value);
    // static private System.Single DecayConstant(System.Single time, System.Single residual)
    // Offset: 0x1AE5540
    static float DecayConstant(float time, float residual);
    // static private System.Single DecayedRemainder(System.Single initial, System.Single decayConstant, System.Single deltaTime)
    // Offset: 0x1AE55BC
    static float DecayedRemainder(float initial, float decayConstant, float deltaTime);
    // static public System.Single Damp(System.Single initial, System.Single dampTime, System.Single deltaTime)
    // Offset: 0x1AE5640
    static float Damp(float initial, float dampTime, float deltaTime);
    // static public UnityEngine.Vector3 Damp(UnityEngine.Vector3 initial, UnityEngine.Vector3 dampTime, System.Single deltaTime)
    // Offset: 0x1AE5720
    static ::UnityEngine::Vector3 Damp(::UnityEngine::Vector3 initial, ::UnityEngine::Vector3 dampTime, float deltaTime);
    // static public UnityEngine.Vector3 Damp(UnityEngine.Vector3 initial, System.Single dampTime, System.Single deltaTime)
    // Offset: 0x1AE57B8
    static ::UnityEngine::Vector3 Damp(::UnityEngine::Vector3 initial, float dampTime, float deltaTime);
  }; // Cinemachine.Utility.Damper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::Utility::Damper::DecayConstant
// Il2CppName: DecayConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&Cinemachine::Utility::Damper::DecayConstant)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* residual = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Utility::Damper*), "DecayConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, residual});
  }
};
// Writing MetadataGetter for method: Cinemachine::Utility::Damper::DecayedRemainder
// Il2CppName: DecayedRemainder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&Cinemachine::Utility::Damper::DecayedRemainder)> {
  static const MethodInfo* get() {
    static auto* initial = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* decayConstant = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Utility::Damper*), "DecayedRemainder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initial, decayConstant, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::Utility::Damper::Damp
// Il2CppName: Damp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&Cinemachine::Utility::Damper::Damp)> {
  static const MethodInfo* get() {
    static auto* initial = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* dampTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Utility::Damper*), "Damp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initial, dampTime, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::Utility::Damper::Damp
// Il2CppName: Damp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&Cinemachine::Utility::Damper::Damp)> {
  static const MethodInfo* get() {
    static auto* initial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* dampTime = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Utility::Damper*), "Damp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initial, dampTime, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::Utility::Damper::Damp
// Il2CppName: Damp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float, float)>(&Cinemachine::Utility::Damper::Damp)> {
  static const MethodInfo* get() {
    static auto* initial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* dampTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Utility::Damper*), "Damp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initial, dampTime, deltaTime});
  }
};
