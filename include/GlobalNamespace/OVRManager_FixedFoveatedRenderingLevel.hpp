// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FixedFoveatedRenderingLevel
  struct OVRManager_FixedFoveatedRenderingLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel, "", "OVRManager/FixedFoveatedRenderingLevel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/FixedFoveatedRenderingLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRManager_FixedFoveatedRenderingLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OVRManager_FixedFoveatedRenderingLevel
    constexpr OVRManager_FixedFoveatedRenderingLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRManager/FixedFoveatedRenderingLevel Off
    static constexpr const int Off = 0;
    // Get static field: static public OVRManager/FixedFoveatedRenderingLevel Off
    static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel _get_Off();
    // Set static field: static public OVRManager/FixedFoveatedRenderingLevel Off
    static void _set_Off(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel value);
    // static field const value: static public OVRManager/FixedFoveatedRenderingLevel Low
    static constexpr const int Low = 1;
    // Get static field: static public OVRManager/FixedFoveatedRenderingLevel Low
    static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel _get_Low();
    // Set static field: static public OVRManager/FixedFoveatedRenderingLevel Low
    static void _set_Low(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel value);
    // static field const value: static public OVRManager/FixedFoveatedRenderingLevel Medium
    static constexpr const int Medium = 2;
    // Get static field: static public OVRManager/FixedFoveatedRenderingLevel Medium
    static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel _get_Medium();
    // Set static field: static public OVRManager/FixedFoveatedRenderingLevel Medium
    static void _set_Medium(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel value);
    // static field const value: static public OVRManager/FixedFoveatedRenderingLevel High
    static constexpr const int High = 3;
    // Get static field: static public OVRManager/FixedFoveatedRenderingLevel High
    static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel _get_High();
    // Set static field: static public OVRManager/FixedFoveatedRenderingLevel High
    static void _set_High(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel value);
    // static field const value: static public OVRManager/FixedFoveatedRenderingLevel HighTop
    static constexpr const int HighTop = 4;
    // Get static field: static public OVRManager/FixedFoveatedRenderingLevel HighTop
    static ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel _get_HighTop();
    // Set static field: static public OVRManager/FixedFoveatedRenderingLevel HighTop
    static void _set_HighTop(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRManager/FixedFoveatedRenderingLevel
  #pragma pack(pop)
  static check_size<sizeof(OVRManager_FixedFoveatedRenderingLevel), 0 + sizeof(int)> __GlobalNamespace_OVRManager_FixedFoveatedRenderingLevelSizeCheck;
  static_assert(sizeof(OVRManager_FixedFoveatedRenderingLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
