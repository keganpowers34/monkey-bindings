// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.TrackedDevice
#include "UnityEngine/InputSystem/TrackedDevice.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: IntegerControl
  class IntegerControl;
  // Forward declaring type: ButtonControl
  class ButtonControl;
}
// Completed forward declares
// Type namespace: Unity.XR.Oculus.Input
namespace Unity::XR::Oculus::Input {
  // Forward declaring type: OculusTrackingReference
  class OculusTrackingReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::Oculus::Input::OculusTrackingReference);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::OculusTrackingReference*, "Unity.XR.Oculus.Input", "OculusTrackingReference");
// Type namespace: Unity.XR.Oculus.Input
namespace Unity::XR::Oculus::Input {
  // Size: 0x180
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.Oculus.Input.OculusTrackingReference
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class OculusTrackingReference : public ::UnityEngine::InputSystem::TrackedDevice {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAB9DCC
    // private UnityEngine.InputSystem.Controls.IntegerControl <trackingState>k__BackingField
    // Size: 0x8
    // Offset: 0x170
    ::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::IntegerControl*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB9DDC
    // private UnityEngine.InputSystem.Controls.ButtonControl <isTracked>k__BackingField
    // Size: 0x8
    // Offset: 0x178
    ::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.InputSystem.Controls.IntegerControl <trackingState>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::IntegerControl*& dyn_$trackingState$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.ButtonControl <isTracked>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::ButtonControl*& dyn_$isTracked$k__BackingField();
    // public UnityEngine.InputSystem.Controls.IntegerControl get_trackingState()
    // Offset: 0xD98D48
    // Implemented from: UnityEngine.InputSystem.TrackedDevice
    // Base method: UnityEngine.InputSystem.Controls.IntegerControl TrackedDevice::get_trackingState()
    ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();
    // private System.Void set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl value)
    // Offset: 0xD98D50
    // Implemented from: UnityEngine.InputSystem.TrackedDevice
    // Base method: System.Void TrackedDevice::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl value)
    void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);
    // public UnityEngine.InputSystem.Controls.ButtonControl get_isTracked()
    // Offset: 0xD98D58
    // Implemented from: UnityEngine.InputSystem.TrackedDevice
    // Base method: UnityEngine.InputSystem.Controls.ButtonControl TrackedDevice::get_isTracked()
    ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();
    // private System.Void set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl value)
    // Offset: 0xD98D60
    // Implemented from: UnityEngine.InputSystem.TrackedDevice
    // Base method: System.Void TrackedDevice::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl value)
    void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);
    // protected override System.Void FinishSetup()
    // Offset: 0xD98D68
    // Implemented from: UnityEngine.InputSystem.TrackedDevice
    // Base method: System.Void TrackedDevice::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0xD98DFC
    // Implemented from: UnityEngine.InputSystem.TrackedDevice
    // Base method: System.Void TrackedDevice::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusTrackingReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::XR::Oculus::Input::OculusTrackingReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusTrackingReference*, creationType>()));
    }
  }; // Unity.XR.Oculus.Input.OculusTrackingReference
  #pragma pack(pop)
  static check_size<sizeof(OculusTrackingReference), 376 + sizeof(::UnityEngine::InputSystem::Controls::ButtonControl*)> __Unity_XR_Oculus_Input_OculusTrackingReferenceSizeCheck;
  static_assert(sizeof(OculusTrackingReference) == 0x180);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusTrackingReference::get_trackingState
// Il2CppName: get_trackingState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (Unity::XR::Oculus::Input::OculusTrackingReference::*)()>(&Unity::XR::Oculus::Input::OculusTrackingReference::get_trackingState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Input::OculusTrackingReference*), "get_trackingState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusTrackingReference::set_trackingState
// Il2CppName: set_trackingState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::Oculus::Input::OculusTrackingReference::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(&Unity::XR::Oculus::Input::OculusTrackingReference::set_trackingState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "IntegerControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Input::OculusTrackingReference*), "set_trackingState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusTrackingReference::get_isTracked
// Il2CppName: get_isTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (Unity::XR::Oculus::Input::OculusTrackingReference::*)()>(&Unity::XR::Oculus::Input::OculusTrackingReference::get_isTracked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Input::OculusTrackingReference*), "get_isTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusTrackingReference::set_isTracked
// Il2CppName: set_isTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::Oculus::Input::OculusTrackingReference::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&Unity::XR::Oculus::Input::OculusTrackingReference::set_isTracked)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "ButtonControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Input::OculusTrackingReference*), "set_isTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusTrackingReference::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::Oculus::Input::OculusTrackingReference::*)()>(&Unity::XR::Oculus::Input::OculusTrackingReference::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Input::OculusTrackingReference*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Input::OculusTrackingReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
