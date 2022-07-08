// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.XR.XRController
#include "UnityEngine/InputSystem/XR/XRController.hpp"
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
  // Forward declaring type: ButtonControl
  class ButtonControl;
  // Forward declaring type: AxisControl
  class AxisControl;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.WindowsMR.Input
namespace UnityEngine::XR::WindowsMR::Input {
  // Forward declaring type: HololensHand
  class HololensHand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::WindowsMR::Input::HololensHand);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::WindowsMR::Input::HololensHand*, "UnityEngine.XR.WindowsMR.Input", "HololensHand");
// Type namespace: UnityEngine.XR.WindowsMR.Input
namespace UnityEngine::XR::WindowsMR::Input {
  // Size: 0x190
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.WindowsMR.Input.HololensHand
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: AB6F3C
  class HololensHand : public ::UnityEngine::InputSystem::XR::XRController {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAB9F8C
    // private UnityEngine.InputSystem.Controls.Vector3Control <deviceVelocity>k__BackingField
    // Size: 0x8
    // Offset: 0x170
    ::UnityEngine::InputSystem::Controls::Vector3Control* deviceVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB9F9C
    // private UnityEngine.InputSystem.Controls.ButtonControl <airTap>k__BackingField
    // Size: 0x8
    // Offset: 0x178
    ::UnityEngine::InputSystem::Controls::ButtonControl* airTap;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB9FAC
    // private UnityEngine.InputSystem.Controls.AxisControl <sourceLossRisk>k__BackingField
    // Size: 0x8
    // Offset: 0x180
    ::UnityEngine::InputSystem::Controls::AxisControl* sourceLossRisk;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB9FBC
    // private UnityEngine.InputSystem.Controls.Vector3Control <sourceLossMitigationDirection>k__BackingField
    // Size: 0x8
    // Offset: 0x188
    ::UnityEngine::InputSystem::Controls::Vector3Control* sourceLossMitigationDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector3Control <deviceVelocity>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector3Control*& dyn_$deviceVelocity$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <airTap>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$airTap$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <sourceLossRisk>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$sourceLossRisk$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.Vector3Control <sourceLossMitigationDirection>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::Vector3Control*& dyn_$sourceLossMitigationDirection$k__BackingField();
    // public UnityEngine.InputSystem.Controls.Vector3Control get_deviceVelocity()
    // Offset: 0x1AA5098
    ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity();
    // private System.Void set_deviceVelocity(UnityEngine.InputSystem.Controls.Vector3Control value)
    // Offset: 0x1AA50A0
    void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_airTap()
    // Offset: 0x1AA50A8
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_airTap();
    // private System.Void set_airTap(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0x1AA50B0
    void set_airTap(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // public UnityEngine.InputSystem.Controls.AxisControl get_sourceLossRisk()
    // Offset: 0x1AA50B8
    ::UnityEngine::InputSystem::Controls::AxisControl* get_sourceLossRisk();
    // private System.Void set_sourceLossRisk(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x1AA50C0
    void set_sourceLossRisk(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.InputSystem.Controls.Vector3Control get_sourceLossMitigationDirection()
    // Offset: 0x1AA50C8
    ::UnityEngine::InputSystem::Controls::Vector3Control* get_sourceLossMitigationDirection();
    // private System.Void set_sourceLossMitigationDirection(UnityEngine.InputSystem.Controls.Vector3Control value)
    // Offset: 0x1AA50D0
    void set_sourceLossMitigationDirection(::UnityEngine::InputSystem::Controls::Vector3Control* value);
    // protected override System.Void FinishSetup()
    // Offset: 0x1AA50D8
    // Implemented from: UnityEngine.InputSystem.XR.XRController
    // Base method: System.Void XRController::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0x1AA51A8
    // Implemented from: UnityEngine.InputSystem.XR.XRController
    // Base method: System.Void XRController::.ctor()
    // Base method: System.Void TrackedDevice::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HololensHand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::WindowsMR::Input::HololensHand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HololensHand*, creationType>()));
    }
  }; // UnityEngine.XR.WindowsMR.Input.HololensHand
  #pragma pack(pop)
  static check_size<sizeof(HololensHand), 392 + sizeof(::UnityEngine::InputSystem::Controls::Vector3Control*)> __UnityEngine_XR_WindowsMR_Input_HololensHandSizeCheck;
  static_assert(sizeof(HololensHand) == 0x190);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::WindowsMR::Input::HololensHand::get_deviceVelocity
// Il2CppName: get_deviceVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (UnityEngine::XR::WindowsMR::Input::HololensHand::*)()>(&UnityEngine::XR::WindowsMR::Input::HololensHand::get_deviceVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::WindowsMR::Input::HololensHand*), "get_deviceVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::WindowsMR::Input::HololensHand::set_deviceVelocity
// Il2CppName: set_deviceVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::WindowsMR::Input::HololensHand::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&UnityEngine::XR::WindowsMR::Input::HololensHand::set_deviceVelocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector3Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::WindowsMR::Input::HololensHand*), "set_deviceVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::WindowsMR::Input::HololensHand::get_airTap
// Il2CppName: get_airTap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (UnityEngine::XR::WindowsMR::Input::HololensHand::*)()>(&UnityEngine::XR::WindowsMR::Input::HololensHand::get_airTap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::WindowsMR::Input::HololensHand*), "get_airTap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::WindowsMR::Input::HololensHand::set_airTap
// Il2CppName: set_airTap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::WindowsMR::Input::HololensHand::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&UnityEngine::XR::WindowsMR::Input::HololensHand::set_airTap)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::WindowsMR::Input::HololensHand*), "set_airTap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::WindowsMR::Input::HololensHand::get_sourceLossRisk
// Il2CppName: get_sourceLossRisk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::XR::WindowsMR::Input::HololensHand::*)()>(&UnityEngine::XR::WindowsMR::Input::HololensHand::get_sourceLossRisk)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::WindowsMR::Input::HololensHand*), "get_sourceLossRisk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::WindowsMR::Input::HololensHand::set_sourceLossRisk
// Il2CppName: set_sourceLossRisk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::WindowsMR::Input::HololensHand::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::XR::WindowsMR::Input::HololensHand::set_sourceLossRisk)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::WindowsMR::Input::HololensHand*), "set_sourceLossRisk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::WindowsMR::Input::HololensHand::get_sourceLossMitigationDirection
// Il2CppName: get_sourceLossMitigationDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (UnityEngine::XR::WindowsMR::Input::HololensHand::*)()>(&UnityEngine::XR::WindowsMR::Input::HololensHand::get_sourceLossMitigationDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::WindowsMR::Input::HololensHand*), "get_sourceLossMitigationDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::WindowsMR::Input::HololensHand::set_sourceLossMitigationDirection
// Il2CppName: set_sourceLossMitigationDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::WindowsMR::Input::HololensHand::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&UnityEngine::XR::WindowsMR::Input::HololensHand::set_sourceLossMitigationDirection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "Vector3Control")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::WindowsMR::Input::HololensHand*), "set_sourceLossMitigationDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::WindowsMR::Input::HololensHand::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::WindowsMR::Input::HololensHand::*)()>(&UnityEngine::XR::WindowsMR::Input::HololensHand::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::WindowsMR::Input::HololensHand*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::WindowsMR::Input::HololensHand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
