// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Sensor
#include "UnityEngine/InputSystem/Sensor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: Vector3Control
  class Vector3Control;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: Gyroscope
  class Gyroscope;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Gyroscope);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Gyroscope*, "UnityEngine.InputSystem", "Gyroscope");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x158
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Gyroscope
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: AB7698
  // [PreserveAttribute] Offset: FFFFFFFF
  class Gyroscope : public ::UnityEngine::InputSystem::Sensor {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABA704
    // private UnityEngine.InputSystem.Controls.Vector3Control <angularVelocity>k__BackingField
    // Size: 0x8
    // Offset: 0x150
    ::UnityEngine::InputSystem::Controls::Vector3Control* angularVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::InputSystem::Controls::Vector3Control*
    constexpr operator ::UnityEngine::InputSystem::Controls::Vector3Control*() const noexcept {
      return angularVelocity;
    }
    // [CompilerGeneratedAttribute] Offset: 0xABA714
    // Get static field: static private UnityEngine.InputSystem.Gyroscope <current>k__BackingField
    static ::UnityEngine::InputSystem::Gyroscope* _get_$current$k__BackingField();
    // Set static field: static private UnityEngine.InputSystem.Gyroscope <current>k__BackingField
    static void _set_$current$k__BackingField(::UnityEngine::InputSystem::Gyroscope* value);
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector3Control <angularVelocity>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector3Control*& dyn_$angularVelocity$k__BackingField();
    // public UnityEngine.InputSystem.Controls.Vector3Control get_angularVelocity()
    // Offset: 0xDA4580
    ::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity();
    // private System.Void set_angularVelocity(UnityEngine.InputSystem.Controls.Vector3Control value)
    // Offset: 0xDA4588
    void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);
    // static public UnityEngine.InputSystem.Gyroscope get_current()
    // Offset: 0xDA4590
    static ::UnityEngine::InputSystem::Gyroscope* get_current();
    // static private System.Void set_current(UnityEngine.InputSystem.Gyroscope value)
    // Offset: 0xDA45E0
    static void set_current(::UnityEngine::InputSystem::Gyroscope* value);
    // public override System.Void MakeCurrent()
    // Offset: 0xDA4634
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::MakeCurrent()
    void MakeCurrent();
    // protected override System.Void OnRemoved()
    // Offset: 0xDA4690
    // Implemented from: UnityEngine.InputSystem.InputDevice
    // Base method: System.Void InputDevice::OnRemoved()
    void OnRemoved();
    // protected override System.Void FinishSetup()
    // Offset: 0xDA4724
    // Implemented from: UnityEngine.InputSystem.InputControl
    // Base method: System.Void InputControl::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0xD99D00
    // Implemented from: UnityEngine.InputSystem.Sensor
    // Base method: System.Void Sensor::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gyroscope* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Gyroscope::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gyroscope*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Gyroscope
  #pragma pack(pop)
  static check_size<sizeof(Gyroscope), 336 + sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*)> __UnityEngine_InputSystem_GyroscopeSizeCheck;
  static_assert(sizeof(Gyroscope) == 0x158);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Gyroscope::get_angularVelocity
// Il2CppName: get_angularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (UnityEngine::InputSystem::Gyroscope::*)()>(&UnityEngine::InputSystem::Gyroscope::get_angularVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Gyroscope*), "get_angularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Gyroscope::set_angularVelocity
// Il2CppName: set_angularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Gyroscope::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&UnityEngine::InputSystem::Gyroscope::set_angularVelocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector3Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Gyroscope*), "set_angularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Gyroscope::get_current
// Il2CppName: get_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Gyroscope* (*)()>(&UnityEngine::InputSystem::Gyroscope::get_current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Gyroscope*), "get_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Gyroscope::set_current
// Il2CppName: set_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Gyroscope*)>(&UnityEngine::InputSystem::Gyroscope::set_current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "Gyroscope")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Gyroscope*), "set_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Gyroscope::MakeCurrent
// Il2CppName: MakeCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Gyroscope::*)()>(&UnityEngine::InputSystem::Gyroscope::MakeCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Gyroscope*), "MakeCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Gyroscope::OnRemoved
// Il2CppName: OnRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Gyroscope::*)()>(&UnityEngine::InputSystem::Gyroscope::OnRemoved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Gyroscope*), "OnRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Gyroscope::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Gyroscope::*)()>(&UnityEngine::InputSystem::Gyroscope::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Gyroscope*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Gyroscope::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
