// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputState
#include "UnityEngine/InputSystem/LowLevel/InputState.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor
#include "UnityEngine/InputSystem/LowLevel/IInputStateChangeMonitor.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputEventPtr
#include "UnityEngine/InputSystem/LowLevel/InputEventPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Action_4;
}
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputControl
  class InputControl;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputState::StateChangeMonitorDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputState::StateChangeMonitorDelegate*, "UnityEngine.InputSystem.LowLevel", "InputState/StateChangeMonitorDelegate");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputState/StateChangeMonitorDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class InputState::StateChangeMonitorDelegate : public ::Il2CppObject/*, public ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*/ {
    public:
    public:
    // public System.Action`4<UnityEngine.InputSystem.InputControl,System.Double,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Int64> valueChangeCallback
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* valueChangeCallback;
    // Field size check
    static_assert(sizeof(::System::Action_4<::UnityEngine::InputSystem::InputControl*, double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*) == 0x8);
    // public System.Action`4<UnityEngine.InputSystem.InputControl,System.Double,System.Int64,System.Int32> timerExpiredCallback
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double, int64_t, int>* timerExpiredCallback;
    // Field size check
    static_assert(sizeof(::System::Action_4<::UnityEngine::InputSystem::InputControl*, double, int64_t, int>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor
    operator ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(this);
    }
    // Get instance field reference: public System.Action`4<UnityEngine.InputSystem.InputControl,System.Double,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Int64> valueChangeCallback
    [[deprecated("Use field access instead!")]] ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*& dyn_valueChangeCallback();
    // Get instance field reference: public System.Action`4<UnityEngine.InputSystem.InputControl,System.Double,System.Int64,System.Int32> timerExpiredCallback
    [[deprecated("Use field access instead!")]] ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double, int64_t, int>*& dyn_timerExpiredCallback();
    // public System.Void NotifyControlStateChanged(UnityEngine.InputSystem.InputControl control, System.Double time, UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr, System.Int64 monitorIndex)
    // Offset: 0x111C6F4
    void NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, double time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex);
    // public System.Void NotifyTimerExpired(UnityEngine.InputSystem.InputControl control, System.Double time, System.Int64 monitorIndex, System.Int32 timerIndex)
    // Offset: 0x111C784
    void NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, double time, int64_t monitorIndex, int timerIndex);
    // public System.Void .ctor()
    // Offset: 0x111C430
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputState::StateChangeMonitorDelegate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::LowLevel::InputState::StateChangeMonitorDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputState::StateChangeMonitorDelegate*, creationType>()));
    }
  }; // UnityEngine.InputSystem.LowLevel.InputState/StateChangeMonitorDelegate
  #pragma pack(pop)
  static check_size<sizeof(InputState::StateChangeMonitorDelegate), 24 + sizeof(::System::Action_4<::UnityEngine::InputSystem::InputControl*, double, int64_t, int>*)> __UnityEngine_InputSystem_LowLevel_InputState_StateChangeMonitorDelegateSizeCheck;
  static_assert(sizeof(InputState::StateChangeMonitorDelegate) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::StateChangeMonitorDelegate::NotifyControlStateChanged
// Il2CppName: NotifyControlStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputState::StateChangeMonitorDelegate::*)(::UnityEngine::InputSystem::InputControl*, double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t)>(&UnityEngine::InputSystem::LowLevel::InputState::StateChangeMonitorDelegate::NotifyControlStateChanged)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* eventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    static auto* monitorIndex = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState::StateChangeMonitorDelegate*), "NotifyControlStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control, time, eventPtr, monitorIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::StateChangeMonitorDelegate::NotifyTimerExpired
// Il2CppName: NotifyTimerExpired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputState::StateChangeMonitorDelegate::*)(::UnityEngine::InputSystem::InputControl*, double, int64_t, int)>(&UnityEngine::InputSystem::LowLevel::InputState::StateChangeMonitorDelegate::NotifyTimerExpired)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* monitorIndex = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* timerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState::StateChangeMonitorDelegate*), "NotifyTimerExpired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control, time, monitorIndex, timerIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::StateChangeMonitorDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
