// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Camera/GateFitMode
#include "UnityEngine/Camera_GateFitMode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Camera because it is already included!
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: LensSettings
  struct LensSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::LensSettings, "Cinemachine", "LensSettings");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x2E
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Cinemachine.LensSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [DocumentationSortingAttribute] Offset: AE6044
  struct LensSettings/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::Cinemachine::LensSettings::OverrideModes
    struct OverrideModes;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Cinemachine.LensSettings/OverrideModes
    // [TokenAttribute] Offset: FFFFFFFF
    struct OverrideModes/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: OverrideModes
      constexpr OverrideModes(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Cinemachine.LensSettings/OverrideModes None
      static constexpr const int None = 0;
      // Get static field: static public Cinemachine.LensSettings/OverrideModes None
      static ::Cinemachine::LensSettings::OverrideModes _get_None();
      // Set static field: static public Cinemachine.LensSettings/OverrideModes None
      static void _set_None(::Cinemachine::LensSettings::OverrideModes value);
      // static field const value: static public Cinemachine.LensSettings/OverrideModes Orthographic
      static constexpr const int Orthographic = 1;
      // Get static field: static public Cinemachine.LensSettings/OverrideModes Orthographic
      static ::Cinemachine::LensSettings::OverrideModes _get_Orthographic();
      // Set static field: static public Cinemachine.LensSettings/OverrideModes Orthographic
      static void _set_Orthographic(::Cinemachine::LensSettings::OverrideModes value);
      // static field const value: static public Cinemachine.LensSettings/OverrideModes Perspective
      static constexpr const int Perspective = 2;
      // Get static field: static public Cinemachine.LensSettings/OverrideModes Perspective
      static ::Cinemachine::LensSettings::OverrideModes _get_Perspective();
      // Set static field: static public Cinemachine.LensSettings/OverrideModes Perspective
      static void _set_Perspective(::Cinemachine::LensSettings::OverrideModes value);
      // static field const value: static public Cinemachine.LensSettings/OverrideModes Physical
      static constexpr const int Physical = 3;
      // Get static field: static public Cinemachine.LensSettings/OverrideModes Physical
      static ::Cinemachine::LensSettings::OverrideModes _get_Physical();
      // Set static field: static public Cinemachine.LensSettings/OverrideModes Physical
      static void _set_Physical(::Cinemachine::LensSettings::OverrideModes value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Cinemachine.LensSettings/OverrideModes
    #pragma pack(pop)
    static check_size<sizeof(LensSettings::OverrideModes), 0 + sizeof(int)> __Cinemachine_LensSettings_OverrideModesSizeCheck;
    static_assert(sizeof(LensSettings::OverrideModes) == 0x4);
    public:
    // [RangeAttribute] Offset: 0xAEB564
    // [TooltipAttribute] Offset: 0xAEB564
    // public System.Single FieldOfView
    // Size: 0x4
    // Offset: 0x0
    float FieldOfView;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEB5BC
    // public System.Single OrthographicSize
    // Size: 0x4
    // Offset: 0x4
    float OrthographicSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEB5F4
    // public System.Single NearClipPlane
    // Size: 0x4
    // Offset: 0x8
    float NearClipPlane;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEB62C
    // public System.Single FarClipPlane
    // Size: 0x4
    // Offset: 0xC
    float FarClipPlane;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xAEB664
    // [TooltipAttribute] Offset: 0xAEB664
    // public System.Single Dutch
    // Size: 0x4
    // Offset: 0x10
    float Dutch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEB6C0
    // public Cinemachine.LensSettings/OverrideModes ModeOverride
    // Size: 0x4
    // Offset: 0x14
    ::Cinemachine::LensSettings::OverrideModes ModeOverride;
    // Field size check
    static_assert(sizeof(::Cinemachine::LensSettings::OverrideModes) == 0x4);
    // public UnityEngine.Vector2 LensShift
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Vector2 LensShift;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Camera/GateFitMode GateFit
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::Camera::GateFitMode GateFit;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera::GateFitMode) == 0x4);
    // private UnityEngine.Vector2 m_SensorSize
    // Size: 0x8
    // Offset: 0x24
    ::UnityEngine::Vector2 m_SensorSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Boolean m_OrthoFromCamera
    // Size: 0x1
    // Offset: 0x2C
    bool m_OrthoFromCamera;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_PhysicalFromCamera
    // Size: 0x1
    // Offset: 0x2D
    bool m_PhysicalFromCamera;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: LensSettings
    constexpr LensSettings(float FieldOfView_ = {}, float OrthographicSize_ = {}, float NearClipPlane_ = {}, float FarClipPlane_ = {}, float Dutch_ = {}, ::Cinemachine::LensSettings::OverrideModes ModeOverride_ = {}, ::UnityEngine::Vector2 LensShift_ = {}, ::UnityEngine::Camera::GateFitMode GateFit_ = {}, ::UnityEngine::Vector2 m_SensorSize_ = {}, bool m_OrthoFromCamera_ = {}, bool m_PhysicalFromCamera_ = {}) noexcept : FieldOfView{FieldOfView_}, OrthographicSize{OrthographicSize_}, NearClipPlane{NearClipPlane_}, FarClipPlane{FarClipPlane_}, Dutch{Dutch_}, ModeOverride{ModeOverride_}, LensShift{LensShift_}, GateFit{GateFit_}, m_SensorSize{m_SensorSize_}, m_OrthoFromCamera{m_OrthoFromCamera_}, m_PhysicalFromCamera{m_PhysicalFromCamera_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public Cinemachine.LensSettings Default
    static ::Cinemachine::LensSettings _get_Default();
    // Set static field: static public Cinemachine.LensSettings Default
    static void _set_Default(::Cinemachine::LensSettings value);
    // Get instance field reference: public System.Single FieldOfView
    [[deprecated("Use field access instead!")]] float& dyn_FieldOfView();
    // Get instance field reference: public System.Single OrthographicSize
    [[deprecated("Use field access instead!")]] float& dyn_OrthographicSize();
    // Get instance field reference: public System.Single NearClipPlane
    [[deprecated("Use field access instead!")]] float& dyn_NearClipPlane();
    // Get instance field reference: public System.Single FarClipPlane
    [[deprecated("Use field access instead!")]] float& dyn_FarClipPlane();
    // Get instance field reference: public System.Single Dutch
    [[deprecated("Use field access instead!")]] float& dyn_Dutch();
    // Get instance field reference: public Cinemachine.LensSettings/OverrideModes ModeOverride
    [[deprecated("Use field access instead!")]] ::Cinemachine::LensSettings::OverrideModes& dyn_ModeOverride();
    // Get instance field reference: public UnityEngine.Vector2 LensShift
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_LensShift();
    // Get instance field reference: public UnityEngine.Camera/GateFitMode GateFit
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera::GateFitMode& dyn_GateFit();
    // Get instance field reference: private UnityEngine.Vector2 m_SensorSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_SensorSize();
    // Get instance field reference: private System.Boolean m_OrthoFromCamera
    [[deprecated("Use field access instead!")]] bool& dyn_m_OrthoFromCamera();
    // Get instance field reference: private System.Boolean m_PhysicalFromCamera
    [[deprecated("Use field access instead!")]] bool& dyn_m_PhysicalFromCamera();
    // public System.Boolean get_Orthographic()
    // Offset: 0x9B1B34
    bool get_Orthographic();
    // public System.Void set_Orthographic(System.Boolean value)
    // Offset: 0x9B1B64
    void set_Orthographic(bool value);
    // public UnityEngine.Vector2 get_SensorSize()
    // Offset: 0x9B1B80
    ::UnityEngine::Vector2 get_SensorSize();
    // public System.Void set_SensorSize(UnityEngine.Vector2 value)
    // Offset: 0x9B1B88
    void set_SensorSize(::UnityEngine::Vector2 value);
    // public System.Single get_Aspect()
    // Offset: 0x9B1B90
    float get_Aspect();
    // public System.Boolean get_IsPhysicalCamera()
    // Offset: 0x9B1BA8
    bool get_IsPhysicalCamera();
    // public System.Void set_IsPhysicalCamera(System.Boolean value)
    // Offset: 0x9B1BD8
    void set_IsPhysicalCamera(bool value);
    // static public Cinemachine.LensSettings FromCamera(UnityEngine.Camera fromCamera)
    // Offset: 0x138E108
    static ::Cinemachine::LensSettings FromCamera(::UnityEngine::Camera* fromCamera);
    // public System.Void SnapshotCameraReadOnlyProperties(UnityEngine.Camera camera)
    // Offset: 0x9B1BF4
    void SnapshotCameraReadOnlyProperties(::UnityEngine::Camera* camera);
    // public System.Void SnapshotCameraReadOnlyProperties(ref Cinemachine.LensSettings lens)
    // Offset: 0x9B1BFC
    void SnapshotCameraReadOnlyProperties(ByRef<::Cinemachine::LensSettings> lens);
    // public System.Void .ctor(System.Single verticalFOV, System.Single orthographicSize, System.Single nearClip, System.Single farClip, System.Single dutch)
    // Offset: 0x9B1C04
    LensSettings(float verticalFOV, float orthographicSize, float nearClip, float farClip, float dutch);
    // static public Cinemachine.LensSettings Lerp(Cinemachine.LensSettings lensA, Cinemachine.LensSettings lensB, System.Single t)
    // Offset: 0x138E388
    static ::Cinemachine::LensSettings Lerp(::Cinemachine::LensSettings lensA, ::Cinemachine::LensSettings lensB, float t);
    // public System.Void Validate()
    // Offset: 0x9B1C5C
    void Validate();
    // static private System.Void .cctor()
    // Offset: 0x138E588
    static void _cctor();
  }; // Cinemachine.LensSettings
  #pragma pack(pop)
  static check_size<sizeof(LensSettings), 45 + sizeof(bool)> __Cinemachine_LensSettingsSizeCheck;
  static_assert(sizeof(LensSettings) == 0x2E);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::LensSettings::OverrideModes, "Cinemachine", "LensSettings/OverrideModes");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::LensSettings::get_Orthographic
// Il2CppName: get_Orthographic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::LensSettings::*)()>(&Cinemachine::LensSettings::get_Orthographic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::LensSettings), "get_Orthographic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::LensSettings::set_Orthographic
// Il2CppName: set_Orthographic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::LensSettings::*)(bool)>(&Cinemachine::LensSettings::set_Orthographic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::LensSettings), "set_Orthographic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cinemachine::LensSettings::get_SensorSize
// Il2CppName: get_SensorSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (Cinemachine::LensSettings::*)()>(&Cinemachine::LensSettings::get_SensorSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::LensSettings), "get_SensorSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::LensSettings::set_SensorSize
// Il2CppName: set_SensorSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::LensSettings::*)(::UnityEngine::Vector2)>(&Cinemachine::LensSettings::set_SensorSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::LensSettings), "set_SensorSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cinemachine::LensSettings::get_Aspect
// Il2CppName: get_Aspect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::LensSettings::*)()>(&Cinemachine::LensSettings::get_Aspect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::LensSettings), "get_Aspect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::LensSettings::get_IsPhysicalCamera
// Il2CppName: get_IsPhysicalCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::LensSettings::*)()>(&Cinemachine::LensSettings::get_IsPhysicalCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::LensSettings), "get_IsPhysicalCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::LensSettings::set_IsPhysicalCamera
// Il2CppName: set_IsPhysicalCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::LensSettings::*)(bool)>(&Cinemachine::LensSettings::set_IsPhysicalCamera)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::LensSettings), "set_IsPhysicalCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cinemachine::LensSettings::FromCamera
// Il2CppName: FromCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::LensSettings (*)(::UnityEngine::Camera*)>(&Cinemachine::LensSettings::FromCamera)> {
  static const MethodInfo* get() {
    static auto* fromCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::LensSettings), "FromCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromCamera});
  }
};
// Writing MetadataGetter for method: Cinemachine::LensSettings::SnapshotCameraReadOnlyProperties
// Il2CppName: SnapshotCameraReadOnlyProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::LensSettings::*)(::UnityEngine::Camera*)>(&Cinemachine::LensSettings::SnapshotCameraReadOnlyProperties)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::LensSettings), "SnapshotCameraReadOnlyProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera});
  }
};
// Writing MetadataGetter for method: Cinemachine::LensSettings::SnapshotCameraReadOnlyProperties
// Il2CppName: SnapshotCameraReadOnlyProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::LensSettings::*)(ByRef<::Cinemachine::LensSettings>)>(&Cinemachine::LensSettings::SnapshotCameraReadOnlyProperties)> {
  static const MethodInfo* get() {
    static auto* lens = &::il2cpp_utils::GetClassFromName("Cinemachine", "LensSettings")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::LensSettings), "SnapshotCameraReadOnlyProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lens});
  }
};
// Writing MetadataGetter for method: Cinemachine::LensSettings::LensSettings
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::LensSettings::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::LensSettings (*)(::Cinemachine::LensSettings, ::Cinemachine::LensSettings, float)>(&Cinemachine::LensSettings::Lerp)> {
  static const MethodInfo* get() {
    static auto* lensA = &::il2cpp_utils::GetClassFromName("Cinemachine", "LensSettings")->byval_arg;
    static auto* lensB = &::il2cpp_utils::GetClassFromName("Cinemachine", "LensSettings")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::LensSettings), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lensA, lensB, t});
  }
};
// Writing MetadataGetter for method: Cinemachine::LensSettings::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::LensSettings::*)()>(&Cinemachine::LensSettings::Validate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::LensSettings), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::LensSettings::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Cinemachine::LensSettings::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::LensSettings), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
