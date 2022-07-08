// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.LightmapBakeType
#include "UnityEngine/LightmapBakeType.hpp"
// Including type: UnityEngine.LightmapsMode
#include "UnityEngine/LightmapsMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Skipping declaration: LightmapMixedBakeModes because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MixedLightingMode
  struct MixedLightingMode;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: SupportedRenderingFeatures
  class SupportedRenderingFeatures;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::SupportedRenderingFeatures);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SupportedRenderingFeatures*, "UnityEngine.Rendering", "SupportedRenderingFeatures");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.SupportedRenderingFeatures
  // [TokenAttribute] Offset: FFFFFFFF
  class SupportedRenderingFeatures : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes
    struct ReflectionProbeModes;
    // Nested type: ::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes
    struct LightmapMixedBakeModes;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes
    // [TokenAttribute] Offset: FFFFFFFF
    // [FlagsAttribute] Offset: FFFFFFFF
    struct ReflectionProbeModes/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ReflectionProbeModes
      constexpr ReflectionProbeModes(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes None
      static ::UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes _get_None();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes None
      static void _set_None(::UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes value);
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes Rotation
      static constexpr const int Rotation = 1;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes Rotation
      static ::UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes _get_Rotation();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes Rotation
      static void _set_Rotation(::UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes
    #pragma pack(pop)
    static check_size<sizeof(SupportedRenderingFeatures::ReflectionProbeModes), 0 + sizeof(int)> __UnityEngine_Rendering_SupportedRenderingFeatures_ReflectionProbeModesSizeCheck;
    static_assert(sizeof(SupportedRenderingFeatures::ReflectionProbeModes) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes
    // [TokenAttribute] Offset: FFFFFFFF
    // [FlagsAttribute] Offset: FFFFFFFF
    struct LightmapMixedBakeModes/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: LightmapMixedBakeModes
      constexpr LightmapMixedBakeModes(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes None
      static ::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_None();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes None
      static void _set_None(::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes IndirectOnly
      static constexpr const int IndirectOnly = 1;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes IndirectOnly
      static ::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_IndirectOnly();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes IndirectOnly
      static void _set_IndirectOnly(::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes Subtractive
      static constexpr const int Subtractive = 2;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes Subtractive
      static ::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_Subtractive();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes Subtractive
      static void _set_Subtractive(::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes Shadowmask
      static constexpr const int Shadowmask = 4;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes Shadowmask
      static ::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_Shadowmask();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes Shadowmask
      static void _set_Shadowmask(::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes
    #pragma pack(pop)
    static check_size<sizeof(SupportedRenderingFeatures::LightmapMixedBakeModes), 0 + sizeof(int)> __UnityEngine_Rendering_SupportedRenderingFeatures_LightmapMixedBakeModesSizeCheck;
    static_assert(sizeof(SupportedRenderingFeatures::LightmapMixedBakeModes) == 0x4);
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xA6E7A4
    // [CompilerGeneratedAttribute] Offset: 0xA6E7A4
    // private UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes <reflectionProbeModes>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes reflectionProbeModes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xA6E7E0
    // [CompilerGeneratedAttribute] Offset: 0xA6E7E0
    // private UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes <defaultMixedLightingModes>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    ::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes defaultMixedLightingModes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xA6E81C
    // [CompilerGeneratedAttribute] Offset: 0xA6E81C
    // private UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes <mixedLightingModes>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes mixedLightingModes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xA6E858
    // [CompilerGeneratedAttribute] Offset: 0xA6E858
    // private UnityEngine.LightmapBakeType <lightmapBakeTypes>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::LightmapBakeType lightmapBakeTypes;
    // Field size check
    static_assert(sizeof(::UnityEngine::LightmapBakeType) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xA6E894
    // [DebuggerBrowsableAttribute] Offset: 0xA6E894
    // private UnityEngine.LightmapsMode <lightmapsModes>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::LightmapsMode lightmapsModes;
    // Field size check
    static_assert(sizeof(::UnityEngine::LightmapsMode) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xA6E8D0
    // [DebuggerBrowsableAttribute] Offset: 0xA6E8D0
    // private System.Boolean <enlighten>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    bool enlighten;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xA6E90C
    // [CompilerGeneratedAttribute] Offset: 0xA6E90C
    // private System.Boolean <lightProbeProxyVolumes>k__BackingField
    // Size: 0x1
    // Offset: 0x25
    bool lightProbeProxyVolumes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xA6E948
    // [DebuggerBrowsableAttribute] Offset: 0xA6E948
    // private System.Boolean <motionVectors>k__BackingField
    // Size: 0x1
    // Offset: 0x26
    bool motionVectors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xA6E984
    // [CompilerGeneratedAttribute] Offset: 0xA6E984
    // private System.Boolean <receiveShadows>k__BackingField
    // Size: 0x1
    // Offset: 0x27
    bool receiveShadows;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xA6E9C0
    // [CompilerGeneratedAttribute] Offset: 0xA6E9C0
    // private System.Boolean <reflectionProbes>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool reflectionProbes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xA6E9FC
    // [CompilerGeneratedAttribute] Offset: 0xA6E9FC
    // private System.Boolean <rendererPriority>k__BackingField
    // Size: 0x1
    // Offset: 0x29
    bool rendererPriority;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xA6EA38
    // [DebuggerBrowsableAttribute] Offset: 0xA6EA38
    // private System.Boolean <terrainDetailUnsupported>k__BackingField
    // Size: 0x1
    // Offset: 0x2A
    bool terrainDetailUnsupported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xA6EA74
    // [DebuggerBrowsableAttribute] Offset: 0xA6EA74
    // private System.Boolean <overridesEnvironmentLighting>k__BackingField
    // Size: 0x1
    // Offset: 0x2B
    bool overridesEnvironmentLighting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xA6EAB0
    // [DebuggerBrowsableAttribute] Offset: 0xA6EAB0
    // private System.Boolean <overridesFog>k__BackingField
    // Size: 0x1
    // Offset: 0x2C
    bool overridesFog;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xA6EAEC
    // [CompilerGeneratedAttribute] Offset: 0xA6EAEC
    // private System.Boolean <overridesOtherLightingSettings>k__BackingField
    // Size: 0x1
    // Offset: 0x2D
    bool overridesOtherLightingSettings;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xA6EB28
    // [DebuggerBrowsableAttribute] Offset: 0xA6EB28
    // private System.Boolean <editableMaterialRenderQueue>k__BackingField
    // Size: 0x1
    // Offset: 0x2E
    bool editableMaterialRenderQueue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xA6EB64
    // [DebuggerBrowsableAttribute] Offset: 0xA6EB64
    // private System.Boolean <overridesLODBias>k__BackingField
    // Size: 0x1
    // Offset: 0x2F
    bool overridesLODBias;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xA6EBA0
    // [DebuggerBrowsableAttribute] Offset: 0xA6EBA0
    // private System.Boolean <overridesMaximumLODLevel>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool overridesMaximumLODLevel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private UnityEngine.Rendering.SupportedRenderingFeatures s_Active
    static ::UnityEngine::Rendering::SupportedRenderingFeatures* _get_s_Active();
    // Set static field: static private UnityEngine.Rendering.SupportedRenderingFeatures s_Active
    static void _set_s_Active(::UnityEngine::Rendering::SupportedRenderingFeatures* value);
    // Get instance field reference: private UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes <reflectionProbeModes>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes& dyn_$reflectionProbeModes$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes <defaultMixedLightingModes>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes& dyn_$defaultMixedLightingModes$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes <mixedLightingModes>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes& dyn_$mixedLightingModes$k__BackingField();
    // Get instance field reference: private UnityEngine.LightmapBakeType <lightmapBakeTypes>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::LightmapBakeType& dyn_$lightmapBakeTypes$k__BackingField();
    // Get instance field reference: private UnityEngine.LightmapsMode <lightmapsModes>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::LightmapsMode& dyn_$lightmapsModes$k__BackingField();
    // Get instance field reference: private System.Boolean <enlighten>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$enlighten$k__BackingField();
    // Get instance field reference: private System.Boolean <lightProbeProxyVolumes>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$lightProbeProxyVolumes$k__BackingField();
    // Get instance field reference: private System.Boolean <motionVectors>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$motionVectors$k__BackingField();
    // Get instance field reference: private System.Boolean <receiveShadows>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$receiveShadows$k__BackingField();
    // Get instance field reference: private System.Boolean <reflectionProbes>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$reflectionProbes$k__BackingField();
    // Get instance field reference: private System.Boolean <rendererPriority>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$rendererPriority$k__BackingField();
    // Get instance field reference: private System.Boolean <terrainDetailUnsupported>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$terrainDetailUnsupported$k__BackingField();
    // Get instance field reference: private System.Boolean <overridesEnvironmentLighting>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$overridesEnvironmentLighting$k__BackingField();
    // Get instance field reference: private System.Boolean <overridesFog>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$overridesFog$k__BackingField();
    // Get instance field reference: private System.Boolean <overridesOtherLightingSettings>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$overridesOtherLightingSettings$k__BackingField();
    // Get instance field reference: private System.Boolean <editableMaterialRenderQueue>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$editableMaterialRenderQueue$k__BackingField();
    // Get instance field reference: private System.Boolean <overridesLODBias>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$overridesLODBias$k__BackingField();
    // Get instance field reference: private System.Boolean <overridesMaximumLODLevel>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$overridesMaximumLODLevel$k__BackingField();
    // static public UnityEngine.Rendering.SupportedRenderingFeatures get_active()
    // Offset: 0x15B7E58
    static ::UnityEngine::Rendering::SupportedRenderingFeatures* get_active();
    // static public System.Void set_active(UnityEngine.Rendering.SupportedRenderingFeatures value)
    // Offset: 0x15B6C08
    static void set_active(::UnityEngine::Rendering::SupportedRenderingFeatures* value);
    // public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes get_defaultMixedLightingModes()
    // Offset: 0x15B7F50
    ::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes get_defaultMixedLightingModes();
    // public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes get_mixedLightingModes()
    // Offset: 0x15B7F58
    ::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes get_mixedLightingModes();
    // public UnityEngine.LightmapBakeType get_lightmapBakeTypes()
    // Offset: 0x15B7F60
    ::UnityEngine::LightmapBakeType get_lightmapBakeTypes();
    // public UnityEngine.LightmapsMode get_lightmapsModes()
    // Offset: 0x15B7F68
    ::UnityEngine::LightmapsMode get_lightmapsModes();
    // public System.Boolean get_enlighten()
    // Offset: 0x15B7F70
    bool get_enlighten();
    // static System.Void FallbackMixedLightingModeByRef(System.IntPtr fallbackModePtr)
    // Offset: 0x15B7F78
    static void FallbackMixedLightingModeByRef(::System::IntPtr fallbackModePtr);
    // static System.Boolean IsMixedLightingModeSupported(UnityEngine.MixedLightingMode mixedMode)
    // Offset: 0x15B80DC
    static bool IsMixedLightingModeSupported(::UnityEngine::MixedLightingMode mixedMode);
    // static System.Void IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode mixedMode, System.IntPtr isSupportedPtr)
    // Offset: 0x15B8158
    static void IsMixedLightingModeSupportedByRef(::UnityEngine::MixedLightingMode mixedMode, ::System::IntPtr isSupportedPtr);
    // static System.Boolean IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType bakeType)
    // Offset: 0x15B8288
    static bool IsLightmapBakeTypeSupported(::UnityEngine::LightmapBakeType bakeType);
    // static System.Void IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType bakeType, System.IntPtr isSupportedPtr)
    // Offset: 0x15B8304
    static void IsLightmapBakeTypeSupportedByRef(::UnityEngine::LightmapBakeType bakeType, ::System::IntPtr isSupportedPtr);
    // static System.Void IsLightmapsModeSupportedByRef(UnityEngine.LightmapsMode mode, System.IntPtr isSupportedPtr)
    // Offset: 0x15B8454
    static void IsLightmapsModeSupportedByRef(::UnityEngine::LightmapsMode mode, ::System::IntPtr isSupportedPtr);
    // static System.Void IsLightmapperSupportedByRef(System.Int32 lightmapper, System.IntPtr isSupportedPtr)
    // Offset: 0x15B84F0
    static void IsLightmapperSupportedByRef(int lightmapper, ::System::IntPtr isSupportedPtr);
    // static System.Void FallbackLightmapperByRef(System.IntPtr lightmapperPtr)
    // Offset: 0x15B85B8
    static void FallbackLightmapperByRef(::System::IntPtr lightmapperPtr);
    // public System.Void .ctor()
    // Offset: 0x15B6BCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SupportedRenderingFeatures* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::SupportedRenderingFeatures::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SupportedRenderingFeatures*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x15B85D8
    static void _cctor();
  }; // UnityEngine.Rendering.SupportedRenderingFeatures
  #pragma pack(pop)
  static check_size<sizeof(SupportedRenderingFeatures), 48 + sizeof(bool)> __UnityEngine_Rendering_SupportedRenderingFeaturesSizeCheck;
  static_assert(sizeof(SupportedRenderingFeatures) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/LightmapMixedBakeModes");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/ReflectionProbeModes");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::get_active
// Il2CppName: get_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SupportedRenderingFeatures* (*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "get_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::set_active
// Il2CppName: set_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::SupportedRenderingFeatures*)>(&UnityEngine::Rendering::SupportedRenderingFeatures::set_active)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "SupportedRenderingFeatures")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "set_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes
// Il2CppName: get_defaultMixedLightingModes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_defaultMixedLightingModes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "get_defaultMixedLightingModes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes
// Il2CppName: get_mixedLightingModes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_mixedLightingModes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "get_mixedLightingModes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes
// Il2CppName: get_lightmapBakeTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LightmapBakeType (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapBakeTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "get_lightmapBakeTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes
// Il2CppName: get_lightmapsModes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LightmapsMode (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_lightmapsModes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "get_lightmapsModes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten
// Il2CppName: get_enlighten
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::SupportedRenderingFeatures::*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::get_enlighten)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "get_enlighten", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef
// Il2CppName: FallbackMixedLightingModeByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::Rendering::SupportedRenderingFeatures::FallbackMixedLightingModeByRef)> {
  static const MethodInfo* get() {
    static auto* fallbackModePtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "FallbackMixedLightingModeByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fallbackModePtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported
// Il2CppName: IsMixedLightingModeSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::MixedLightingMode)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupported)> {
  static const MethodInfo* get() {
    static auto* mixedMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "MixedLightingMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "IsMixedLightingModeSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mixedMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef
// Il2CppName: IsMixedLightingModeSupportedByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::MixedLightingMode, ::System::IntPtr)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsMixedLightingModeSupportedByRef)> {
  static const MethodInfo* get() {
    static auto* mixedMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "MixedLightingMode")->byval_arg;
    static auto* isSupportedPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "IsMixedLightingModeSupportedByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mixedMode, isSupportedPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported
// Il2CppName: IsLightmapBakeTypeSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::LightmapBakeType)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupported)> {
  static const MethodInfo* get() {
    static auto* bakeType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LightmapBakeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "IsLightmapBakeTypeSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bakeType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef
// Il2CppName: IsLightmapBakeTypeSupportedByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LightmapBakeType, ::System::IntPtr)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapBakeTypeSupportedByRef)> {
  static const MethodInfo* get() {
    static auto* bakeType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LightmapBakeType")->byval_arg;
    static auto* isSupportedPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "IsLightmapBakeTypeSupportedByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bakeType, isSupportedPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef
// Il2CppName: IsLightmapsModeSupportedByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LightmapsMode, ::System::IntPtr)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapsModeSupportedByRef)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine", "LightmapsMode")->byval_arg;
    static auto* isSupportedPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "IsLightmapsModeSupportedByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode, isSupportedPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef
// Il2CppName: IsLightmapperSupportedByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::System::IntPtr)>(&UnityEngine::Rendering::SupportedRenderingFeatures::IsLightmapperSupportedByRef)> {
  static const MethodInfo* get() {
    static auto* lightmapper = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isSupportedPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "IsLightmapperSupportedByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightmapper, isSupportedPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef
// Il2CppName: FallbackLightmapperByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::Rendering::SupportedRenderingFeatures::FallbackLightmapperByRef)> {
  static const MethodInfo* get() {
    static auto* lightmapperPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), "FallbackLightmapperByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightmapperPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::SupportedRenderingFeatures::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::SupportedRenderingFeatures::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SupportedRenderingFeatures*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
