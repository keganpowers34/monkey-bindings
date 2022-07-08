// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputEventPtr
#include "UnityEngine/InputSystem/LowLevel/InputEventPtr.hpp"
// Including type: UnityEngine.InputSystem.Utilities.InlinedArray`1
#include "UnityEngine/InputSystem/Utilities/InlinedArray_1.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputControl
  class InputControl;
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.OnScreen
namespace UnityEngine::InputSystem::OnScreen {
  // Forward declaring type: OnScreenControl
  class OnScreenControl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::OnScreen::OnScreenControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::OnScreenControl*, "UnityEngine.InputSystem.OnScreen", "OnScreenControl");
// Type namespace: UnityEngine.InputSystem.OnScreen
namespace UnityEngine::InputSystem::OnScreen {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.OnScreen.OnScreenControl
  // [TokenAttribute] Offset: FFFFFFFF
  class OnScreenControl : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::UnityEngine::InputSystem::OnScreen::OnScreenControl::OnScreenDeviceInfo
    struct OnScreenDeviceInfo;
    // WARNING Size may be invalid!
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo
    // [TokenAttribute] Offset: FFFFFFFF
    struct OnScreenDeviceInfo/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr;
      // Field size check
      static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputEventPtr) == 0x8);
      // public Unity.Collections.NativeArray`1<System.Byte> buffer
      // Size: 0xFFFFFFFF
      // Offset: 0x8
      ::Unity::Collections::NativeArray_1<uint8_t> buffer;
      // public UnityEngine.InputSystem.InputDevice device
      // Size: 0x8
      // Offset: 0x18
      ::UnityEngine::InputSystem::InputDevice* device;
      // Field size check
      static_assert(sizeof(::UnityEngine::InputSystem::InputDevice*) == 0x8);
      // public UnityEngine.InputSystem.OnScreen.OnScreenControl firstControl
      // Size: 0x8
      // Offset: 0x20
      ::UnityEngine::InputSystem::OnScreen::OnScreenControl* firstControl;
      // Field size check
      static_assert(sizeof(::UnityEngine::InputSystem::OnScreen::OnScreenControl*) == 0x8);
      public:
      // Creating value type constructor for type: OnScreenDeviceInfo
      constexpr OnScreenDeviceInfo(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr_ = {}, ::Unity::Collections::NativeArray_1<uint8_t> buffer_ = {}, ::UnityEngine::InputSystem::InputDevice* device_ = {}, ::UnityEngine::InputSystem::OnScreen::OnScreenControl* firstControl_ = {}) noexcept : eventPtr{eventPtr_}, buffer{buffer_}, device{device_}, firstControl{firstControl_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr
      [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputEventPtr& dyn_eventPtr();
      // Get instance field reference: public Unity.Collections.NativeArray`1<System.Byte> buffer
      [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<uint8_t>& dyn_buffer();
      // Get instance field reference: public UnityEngine.InputSystem.InputDevice device
      [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputDevice*& dyn_device();
      // Get instance field reference: public UnityEngine.InputSystem.OnScreen.OnScreenControl firstControl
      [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::OnScreen::OnScreenControl*& dyn_firstControl();
      // public UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo AddControl(UnityEngine.InputSystem.OnScreen.OnScreenControl control)
      // Offset: 0x9907D8
      ::UnityEngine::InputSystem::OnScreen::OnScreenControl::OnScreenDeviceInfo AddControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* control);
      // public UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo RemoveControl(UnityEngine.InputSystem.OnScreen.OnScreenControl control)
      // Offset: 0x990804
      ::UnityEngine::InputSystem::OnScreen::OnScreenControl::OnScreenDeviceInfo RemoveControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl* control);
      // public System.Void Destroy()
      // Offset: 0x99080C
      void Destroy();
    }; // UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo
    // WARNING Not writing size check since size may be invalid!
    public:
    // private UnityEngine.InputSystem.InputControl m_Control
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::InputSystem::InputControl* m_Control;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputControl*) == 0x8);
    // private UnityEngine.InputSystem.OnScreen.OnScreenControl m_NextControlOnDevice
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::InputSystem::OnScreen::OnScreenControl* m_NextControlOnDevice;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::OnScreen::OnScreenControl*) == 0x8);
    // private UnityEngine.InputSystem.LowLevel.InputEventPtr m_InputEventPtr
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr m_InputEventPtr;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputEventPtr) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo> s_OnScreenDevices
    static ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::OnScreenControl::OnScreenDeviceInfo> _get_s_OnScreenDevices();
    // Set static field: static private UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.OnScreen.OnScreenControl/OnScreenDeviceInfo> s_OnScreenDevices
    static void _set_s_OnScreenDevices(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::OnScreenControl::OnScreenDeviceInfo> value);
    // Get instance field reference: private UnityEngine.InputSystem.InputControl m_Control
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputControl*& dyn_m_Control();
    // Get instance field reference: private UnityEngine.InputSystem.OnScreen.OnScreenControl m_NextControlOnDevice
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::OnScreen::OnScreenControl*& dyn_m_NextControlOnDevice();
    // Get instance field reference: private UnityEngine.InputSystem.LowLevel.InputEventPtr m_InputEventPtr
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputEventPtr& dyn_m_InputEventPtr();
    // public System.String get_controlPath()
    // Offset: 0xC85538
    ::StringW get_controlPath();
    // public System.Void set_controlPath(System.String value)
    // Offset: 0xC85544
    void set_controlPath(::StringW value);
    // public UnityEngine.InputSystem.InputControl get_control()
    // Offset: 0xC85DC4
    ::UnityEngine::InputSystem::InputControl* get_control();
    // protected System.String get_controlPathInternal()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_controlPathInternal();
    // protected System.Void set_controlPathInternal(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_controlPathInternal(::StringW value);
    // private System.Void SetupInputControl()
    // Offset: 0xC8558C
    void SetupInputControl();
    // protected System.Void SendValueToControl(TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TValue>
    void SendValueToControl(TValue value) {
      static_assert(std::is_convertible_v<TValue, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::OnScreen::OnScreenControl::SendValueToControl");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SendValueToControl", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, value);
    }
    // private System.Void OnEnable()
    // Offset: 0xC85EA4
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xC85EA8
    void OnDisable();
    // protected System.Void .ctor()
    // Offset: 0xC85530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnScreenControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::OnScreen::OnScreenControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnScreenControl*, creationType>()));
    }
  }; // UnityEngine.InputSystem.OnScreen.OnScreenControl
  #pragma pack(pop)
  static check_size<sizeof(OnScreenControl), 40 + sizeof(::UnityEngine::InputSystem::LowLevel::InputEventPtr)> __UnityEngine_InputSystem_OnScreen_OnScreenControlSizeCheck;
  static_assert(sizeof(OnScreenControl) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::OnScreenControl::OnScreenDeviceInfo, "UnityEngine.InputSystem.OnScreen", "OnScreenControl/OnScreenDeviceInfo");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPath
// Il2CppName: get_controlPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::OnScreen::OnScreenControl*), "get_controlPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPath
// Il2CppName: set_controlPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)(::StringW)>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPath)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::OnScreen::OnScreenControl*), "set_controlPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::OnScreen::OnScreenControl::get_control
// Il2CppName: get_control
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::get_control)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::OnScreen::OnScreenControl*), "get_control", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPathInternal
// Il2CppName: get_controlPathInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::get_controlPathInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::OnScreen::OnScreenControl*), "get_controlPathInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPathInternal
// Il2CppName: set_controlPathInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)(::StringW)>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::set_controlPathInternal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::OnScreen::OnScreenControl*), "set_controlPathInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::OnScreen::OnScreenControl::SetupInputControl
// Il2CppName: SetupInputControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::SetupInputControl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::OnScreen::OnScreenControl*), "SetupInputControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::OnScreen::OnScreenControl::SendValueToControl
// Il2CppName: SendValueToControl
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::OnScreen::OnScreenControl::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::OnScreen::OnScreenControl*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::OnScreen::OnScreenControl::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::OnScreen::OnScreenControl::*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenControl::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::OnScreen::OnScreenControl*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::OnScreen::OnScreenControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
