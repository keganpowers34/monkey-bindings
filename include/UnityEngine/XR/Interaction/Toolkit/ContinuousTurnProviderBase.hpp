// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
#include "UnityEngine/XR/Interaction/Toolkit/LocomotionProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: ContinuousTurnProviderBase
  class ContinuousTurnProviderBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*, "UnityEngine.XR.Interaction.Toolkit", "ContinuousTurnProviderBase");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.ContinuousTurnProviderBase
  // [TokenAttribute] Offset: FFFFFFFF
  class ContinuousTurnProviderBase : public ::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider {
    public:
    public:
    // [TooltipAttribute] Offset: 0xAE0764
    // private System.Single m_TurnSpeed
    // Size: 0x4
    // Offset: 0x30
    float m_TurnSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single m_TurnSpeed
    [[deprecated("Use field access instead!")]] float& dyn_m_TurnSpeed();
    // public System.Single get_turnSpeed()
    // Offset: 0xF53B08
    float get_turnSpeed();
    // public System.Void set_turnSpeed(System.Single value)
    // Offset: 0xF53B10
    void set_turnSpeed(float value);
    // protected System.Void Update()
    // Offset: 0xF53B18
    void Update();
    // protected UnityEngine.Vector2 ReadInput()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector2 ReadInput();
    // protected System.Single GetTurnAmount(UnityEngine.Vector2 input)
    // Offset: 0xF53C58
    float GetTurnAmount(::UnityEngine::Vector2 input);
    // protected System.Void TurnRig(System.Single turnAmount)
    // Offset: 0xF53B54
    void TurnRig(float turnAmount);
    // protected System.Void .ctor()
    // Offset: 0xF513EC
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
    // Base method: System.Void LocomotionProvider::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContinuousTurnProviderBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContinuousTurnProviderBase*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.ContinuousTurnProviderBase
  #pragma pack(pop)
  static check_size<sizeof(ContinuousTurnProviderBase), 48 + sizeof(float)> __UnityEngine_XR_Interaction_Toolkit_ContinuousTurnProviderBaseSizeCheck;
  static_assert(sizeof(ContinuousTurnProviderBase) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::get_turnSpeed
// Il2CppName: get_turnSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::*)()>(&UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::get_turnSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*), "get_turnSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::set_turnSpeed
// Il2CppName: set_turnSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::set_turnSpeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*), "set_turnSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::*)()>(&UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::ReadInput
// Il2CppName: ReadInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::*)()>(&UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::ReadInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*), "ReadInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::GetTurnAmount
// Il2CppName: GetTurnAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::*)(::UnityEngine::Vector2)>(&UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::GetTurnAmount)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*), "GetTurnAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::TurnRig
// Il2CppName: TurnRig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::TurnRig)> {
  static const MethodInfo* get() {
    static auto* turnAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase*), "TurnRig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{turnAmount});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
