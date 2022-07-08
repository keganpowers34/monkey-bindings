// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Including type: UnityEngine.InputSystem.UI.UIPointerType
#include "UnityEngine/InputSystem/UI/UIPointerType.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.UI
namespace UnityEngine::InputSystem::UI {
  // Forward declaring type: ExtendedPointerEventData
  class ExtendedPointerEventData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::UI::ExtendedPointerEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, "UnityEngine.InputSystem.UI", "ExtendedPointerEventData");
// Type namespace: UnityEngine.InputSystem.UI
namespace UnityEngine::InputSystem::UI {
  // Size: 0x15C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.UI.ExtendedPointerEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class ExtendedPointerEventData : public ::UnityEngine::EventSystems::PointerEventData {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABB080
    // private UnityEngine.InputSystem.InputDevice <device>k__BackingField
    // Size: 0x8
    // Offset: 0x130
    ::UnityEngine::InputSystem::InputDevice* device;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputDevice*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xABB090
    // private System.Int32 <touchId>k__BackingField
    // Size: 0x4
    // Offset: 0x138
    int touchId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xABB0A0
    // private UnityEngine.InputSystem.UI.UIPointerType <pointerType>k__BackingField
    // Size: 0x4
    // Offset: 0x13C
    ::UnityEngine::InputSystem::UI::UIPointerType pointerType;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::UI::UIPointerType) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xABB0B0
    // private UnityEngine.Vector3 <trackedDevicePosition>k__BackingField
    // Size: 0xC
    // Offset: 0x140
    ::UnityEngine::Vector3 trackedDevicePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xABB0C0
    // private UnityEngine.Quaternion <trackedDeviceOrientation>k__BackingField
    // Size: 0x10
    // Offset: 0x14C
    ::UnityEngine::Quaternion trackedDeviceOrientation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Get instance field reference: private UnityEngine.InputSystem.InputDevice <device>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputDevice*& dyn_$device$k__BackingField();
    // Get instance field reference: private System.Int32 <touchId>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$touchId$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.UI.UIPointerType <pointerType>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::UI::UIPointerType& dyn_$pointerType$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <trackedDevicePosition>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$trackedDevicePosition$k__BackingField();
    // Get instance field reference: private UnityEngine.Quaternion <trackedDeviceOrientation>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_$trackedDeviceOrientation$k__BackingField();
    // public System.Void .ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    // Offset: 0xC926CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExtendedPointerEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::UI::ExtendedPointerEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExtendedPointerEventData*, creationType>(eventSystem)));
    }
    // public UnityEngine.InputSystem.InputDevice get_device()
    // Offset: 0xC926D4
    ::UnityEngine::InputSystem::InputDevice* get_device();
    // public System.Void set_device(UnityEngine.InputSystem.InputDevice value)
    // Offset: 0xC926DC
    void set_device(::UnityEngine::InputSystem::InputDevice* value);
    // public System.Int32 get_touchId()
    // Offset: 0xC926E4
    int get_touchId();
    // public System.Void set_touchId(System.Int32 value)
    // Offset: 0xC926EC
    void set_touchId(int value);
    // public UnityEngine.InputSystem.UI.UIPointerType get_pointerType()
    // Offset: 0xC926F4
    ::UnityEngine::InputSystem::UI::UIPointerType get_pointerType();
    // public System.Void set_pointerType(UnityEngine.InputSystem.UI.UIPointerType value)
    // Offset: 0xC926FC
    void set_pointerType(::UnityEngine::InputSystem::UI::UIPointerType value);
    // public UnityEngine.Vector3 get_trackedDevicePosition()
    // Offset: 0xC92704
    ::UnityEngine::Vector3 get_trackedDevicePosition();
    // public System.Void set_trackedDevicePosition(UnityEngine.Vector3 value)
    // Offset: 0xC92714
    void set_trackedDevicePosition(::UnityEngine::Vector3 value);
    // public UnityEngine.Quaternion get_trackedDeviceOrientation()
    // Offset: 0xC92724
    ::UnityEngine::Quaternion get_trackedDeviceOrientation();
    // public System.Void set_trackedDeviceOrientation(UnityEngine.Quaternion value)
    // Offset: 0xC92738
    void set_trackedDeviceOrientation(::UnityEngine::Quaternion value);
    // static System.Int32 MakePointerIdForTouch(System.Int32 deviceId, System.Int32 touchId)
    // Offset: 0xC92938
    static int MakePointerIdForTouch(int deviceId, int touchId);
    // public override System.String ToString()
    // Offset: 0xC9274C
    // Implemented from: UnityEngine.EventSystems.PointerEventData
    // Base method: System.String PointerEventData::ToString()
    ::StringW ToString();
  }; // UnityEngine.InputSystem.UI.ExtendedPointerEventData
  #pragma pack(pop)
  static check_size<sizeof(ExtendedPointerEventData), 332 + sizeof(::UnityEngine::Quaternion)> __UnityEngine_InputSystem_UI_ExtendedPointerEventDataSizeCheck;
  static_assert(sizeof(ExtendedPointerEventData) == 0x15C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::ExtendedPointerEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_device
// Il2CppName: get_device
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(&UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_device)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::ExtendedPointerEventData*), "get_device", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_device
// Il2CppName: set_device
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::InputSystem::InputDevice*)>(&UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_device)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::ExtendedPointerEventData*), "set_device", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_touchId
// Il2CppName: get_touchId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(&UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_touchId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::ExtendedPointerEventData*), "get_touchId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_touchId
// Il2CppName: set_touchId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(int)>(&UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_touchId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::ExtendedPointerEventData*), "set_touchId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_pointerType
// Il2CppName: get_pointerType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::UI::UIPointerType (UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(&UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_pointerType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::ExtendedPointerEventData*), "get_pointerType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_pointerType
// Il2CppName: set_pointerType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::InputSystem::UI::UIPointerType)>(&UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_pointerType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.UI", "UIPointerType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::ExtendedPointerEventData*), "set_pointerType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_trackedDevicePosition
// Il2CppName: get_trackedDevicePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(&UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_trackedDevicePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::ExtendedPointerEventData*), "get_trackedDevicePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_trackedDevicePosition
// Il2CppName: set_trackedDevicePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::Vector3)>(&UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_trackedDevicePosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::ExtendedPointerEventData*), "set_trackedDevicePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_trackedDeviceOrientation
// Il2CppName: get_trackedDeviceOrientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(&UnityEngine::InputSystem::UI::ExtendedPointerEventData::get_trackedDeviceOrientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::ExtendedPointerEventData*), "get_trackedDeviceOrientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_trackedDeviceOrientation
// Il2CppName: set_trackedDeviceOrientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)(::UnityEngine::Quaternion)>(&UnityEngine::InputSystem::UI::ExtendedPointerEventData::set_trackedDeviceOrientation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::ExtendedPointerEventData*), "set_trackedDeviceOrientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::ExtendedPointerEventData::MakePointerIdForTouch
// Il2CppName: MakePointerIdForTouch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&UnityEngine::InputSystem::UI::ExtendedPointerEventData::MakePointerIdForTouch)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* touchId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::ExtendedPointerEventData*), "MakePointerIdForTouch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, touchId});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::ExtendedPointerEventData::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::UI::ExtendedPointerEventData::*)()>(&UnityEngine::InputSystem::UI::ExtendedPointerEventData::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::ExtendedPointerEventData*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
