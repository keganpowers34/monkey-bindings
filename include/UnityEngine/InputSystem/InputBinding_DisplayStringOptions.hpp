// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputBinding
#include "UnityEngine/InputSystem/InputBinding.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBinding::DisplayStringOptions, "UnityEngine.InputSystem", "InputBinding/DisplayStringOptions");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.InputBinding/DisplayStringOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct InputBinding::DisplayStringOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DisplayStringOptions
    constexpr DisplayStringOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.InputBinding/DisplayStringOptions DontUseShortDisplayNames
    static constexpr const int DontUseShortDisplayNames = 1;
    // Get static field: static public UnityEngine.InputSystem.InputBinding/DisplayStringOptions DontUseShortDisplayNames
    static ::UnityEngine::InputSystem::InputBinding::DisplayStringOptions _get_DontUseShortDisplayNames();
    // Set static field: static public UnityEngine.InputSystem.InputBinding/DisplayStringOptions DontUseShortDisplayNames
    static void _set_DontUseShortDisplayNames(::UnityEngine::InputSystem::InputBinding::DisplayStringOptions value);
    // static field const value: static public UnityEngine.InputSystem.InputBinding/DisplayStringOptions DontOmitDevice
    static constexpr const int DontOmitDevice = 2;
    // Get static field: static public UnityEngine.InputSystem.InputBinding/DisplayStringOptions DontOmitDevice
    static ::UnityEngine::InputSystem::InputBinding::DisplayStringOptions _get_DontOmitDevice();
    // Set static field: static public UnityEngine.InputSystem.InputBinding/DisplayStringOptions DontOmitDevice
    static void _set_DontOmitDevice(::UnityEngine::InputSystem::InputBinding::DisplayStringOptions value);
    // static field const value: static public UnityEngine.InputSystem.InputBinding/DisplayStringOptions DontIncludeInteractions
    static constexpr const int DontIncludeInteractions = 4;
    // Get static field: static public UnityEngine.InputSystem.InputBinding/DisplayStringOptions DontIncludeInteractions
    static ::UnityEngine::InputSystem::InputBinding::DisplayStringOptions _get_DontIncludeInteractions();
    // Set static field: static public UnityEngine.InputSystem.InputBinding/DisplayStringOptions DontIncludeInteractions
    static void _set_DontIncludeInteractions(::UnityEngine::InputSystem::InputBinding::DisplayStringOptions value);
    // static field const value: static public UnityEngine.InputSystem.InputBinding/DisplayStringOptions IgnoreBindingOverrides
    static constexpr const int IgnoreBindingOverrides = 8;
    // Get static field: static public UnityEngine.InputSystem.InputBinding/DisplayStringOptions IgnoreBindingOverrides
    static ::UnityEngine::InputSystem::InputBinding::DisplayStringOptions _get_IgnoreBindingOverrides();
    // Set static field: static public UnityEngine.InputSystem.InputBinding/DisplayStringOptions IgnoreBindingOverrides
    static void _set_IgnoreBindingOverrides(::UnityEngine::InputSystem::InputBinding::DisplayStringOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InputSystem.InputBinding/DisplayStringOptions
  #pragma pack(pop)
  static check_size<sizeof(InputBinding::DisplayStringOptions), 0 + sizeof(int)> __UnityEngine_InputSystem_InputBinding_DisplayStringOptionsSizeCheck;
  static_assert(sizeof(InputBinding::DisplayStringOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
