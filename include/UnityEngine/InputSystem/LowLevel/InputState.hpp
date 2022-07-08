// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputEventPtr
#include "UnityEngine/InputSystem/LowLevel/InputEventPtr.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputUpdateType
#include "UnityEngine/InputSystem/LowLevel/InputUpdateType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: IInputStateChangeMonitor
  class IInputStateChangeMonitor;
}
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: FourCC
  struct FourCC;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Skipping declaration: ValueType because it is already included!
  // Forward declaring type: Action`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Action_4;
}
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: InputControl
  class InputControl;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputState
  class InputState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputState*, "UnityEngine.InputSystem.LowLevel", "InputState");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputState
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class InputState : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::InputSystem::LowLevel::InputState::StateChangeMonitorDelegate
    class StateChangeMonitorDelegate;
    // static public UnityEngine.InputSystem.LowLevel.InputUpdateType get_currentUpdateType()
    // Offset: 0x111BAE8
    static ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_currentUpdateType();
    // static public System.UInt32 get_updateCount()
    // Offset: 0x111BB38
    static uint get_updateCount();
    // static public System.Double get_currentTime()
    // Offset: 0x111BB88
    static double get_currentTime();
    // static public System.Void add_onChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr> value)
    // Offset: 0x111BC5C
    static void add_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);
    // static public System.Void remove_onChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr> value)
    // Offset: 0x111BCD8
    static void remove_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);
    // static public System.Void Change(UnityEngine.InputSystem.InputDevice device, UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr, UnityEngine.InputSystem.LowLevel.InputUpdateType updateType)
    // Offset: 0x111BD54
    static void Change(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);
    // static public System.Void Change(UnityEngine.InputSystem.InputControl control, TState state, UnityEngine.InputSystem.LowLevel.InputUpdateType updateType, UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TState>
    static void Change(::UnityEngine::InputSystem::InputControl* control, TState state, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
      static_assert(std::is_convertible_v<TState, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::LowLevel::InputState::Change");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.InputSystem.LowLevel", "InputState", "Change", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(control), ::il2cpp_utils::ExtractType(state), ::il2cpp_utils::ExtractType(updateType), ::il2cpp_utils::ExtractType(eventPtr)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, control, state, updateType, eventPtr);
    }
    // static public System.Boolean IsIntegerFormat(UnityEngine.InputSystem.Utilities.FourCC format)
    // Offset: 0x111BFB4
    static bool IsIntegerFormat(::UnityEngine::InputSystem::Utilities::FourCC format);
    // static public System.Void AddChangeMonitor(UnityEngine.InputSystem.InputControl control, UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor monitor, System.Int64 monitorIndex)
    // Offset: 0x111C1DC
    static void AddChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex);
    // static public UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor AddChangeMonitor(UnityEngine.InputSystem.InputControl control, System.Action`4<UnityEngine.InputSystem.InputControl,System.Double,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Int64> valueChangeCallback, System.Int32 monitorIndex, System.Action`4<UnityEngine.InputSystem.InputControl,System.Double,System.Int64,System.Int32> timerExpiredCallback)
    // Offset: 0x111C358
    static ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* AddChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>* valueChangeCallback, int monitorIndex, ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double, int64_t, int>* timerExpiredCallback);
    // static public System.Void RemoveChangeMonitor(UnityEngine.InputSystem.InputControl control, UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor monitor, System.Int64 monitorIndex)
    // Offset: 0x111C438
    static void RemoveChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex);
    // static public System.Void AddChangeMonitorTimeout(UnityEngine.InputSystem.InputControl control, UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor monitor, System.Double time, System.Int64 monitorIndex, System.Int32 timerIndex)
    // Offset: 0x111C52C
    static void AddChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, double time, int64_t monitorIndex, int timerIndex);
    // static public System.Void RemoveChangeMonitorTimeout(UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor monitor, System.Int64 monitorIndex, System.Int32 timerIndex)
    // Offset: 0x111C620
    static void RemoveChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, int64_t monitorIndex, int timerIndex);
  }; // UnityEngine.InputSystem.LowLevel.InputState
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::get_currentUpdateType
// Il2CppName: get_currentUpdateType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (*)()>(&UnityEngine::InputSystem::LowLevel::InputState::get_currentUpdateType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState*), "get_currentUpdateType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::get_updateCount
// Il2CppName: get_updateCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)()>(&UnityEngine::InputSystem::LowLevel::InputState::get_updateCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState*), "get_updateCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::get_currentTime
// Il2CppName: get_currentTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)()>(&UnityEngine::InputSystem::LowLevel::InputState::get_currentTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState*), "get_currentTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::add_onChange
// Il2CppName: add_onChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&UnityEngine::InputSystem::LowLevel::InputState::add_onChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice"), ::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState*), "add_onChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::remove_onChange
// Il2CppName: remove_onChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(&UnityEngine::InputSystem::LowLevel::InputState::remove_onChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice"), ::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState*), "remove_onChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::Change
// Il2CppName: Change
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::LowLevel::InputState::Change)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    static auto* eventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputUpdateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState*), "Change", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, eventPtr, updateType});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::Change
// Il2CppName: Change
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::IsIntegerFormat
// Il2CppName: IsIntegerFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::FourCC)>(&UnityEngine::InputSystem::LowLevel::InputState::IsIntegerFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Utilities", "FourCC")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState*), "IsIntegerFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor
// Il2CppName: AddChangeMonitor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t)>(&UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    static auto* monitor = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "IInputStateChangeMonitor")->byval_arg;
    static auto* monitorIndex = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState*), "AddChangeMonitor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control, monitor, monitorIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor
// Il2CppName: AddChangeMonitor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* (*)(::UnityEngine::InputSystem::InputControl*, ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, int64_t>*, int, ::System::Action_4<::UnityEngine::InputSystem::InputControl*, double, int64_t, int>*)>(&UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitor)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    static auto* valueChangeCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`4"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl"), ::il2cpp_utils::GetClassFromName("System", "Double"), ::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr"), ::il2cpp_utils::GetClassFromName("System", "Int64")})->byval_arg;
    static auto* monitorIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timerExpiredCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`4"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl"), ::il2cpp_utils::GetClassFromName("System", "Double"), ::il2cpp_utils::GetClassFromName("System", "Int64"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState*), "AddChangeMonitor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control, valueChangeCallback, monitorIndex, timerExpiredCallback});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitor
// Il2CppName: RemoveChangeMonitor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t)>(&UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitor)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    static auto* monitor = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "IInputStateChangeMonitor")->byval_arg;
    static auto* monitorIndex = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState*), "RemoveChangeMonitor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control, monitor, monitorIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitorTimeout
// Il2CppName: AddChangeMonitorTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, double, int64_t, int)>(&UnityEngine::InputSystem::LowLevel::InputState::AddChangeMonitorTimeout)> {
  static const MethodInfo* get() {
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    static auto* monitor = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "IInputStateChangeMonitor")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* monitorIndex = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* timerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState*), "AddChangeMonitorTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{control, monitor, time, monitorIndex, timerIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitorTimeout
// Il2CppName: RemoveChangeMonitorTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, int)>(&UnityEngine::InputSystem::LowLevel::InputState::RemoveChangeMonitorTimeout)> {
  static const MethodInfo* get() {
    static auto* monitor = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "IInputStateChangeMonitor")->byval_arg;
    static auto* monitorIndex = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* timerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputState*), "RemoveChangeMonitorTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{monitor, monitorIndex, timerIndex});
  }
};
