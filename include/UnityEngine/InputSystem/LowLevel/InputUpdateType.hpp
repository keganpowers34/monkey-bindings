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
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputUpdateType
  struct InputUpdateType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputUpdateType, "UnityEngine.InputSystem.LowLevel", "InputUpdateType");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputUpdateType
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct InputUpdateType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InputUpdateType
    constexpr InputUpdateType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.LowLevel.InputUpdateType None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType None
    static ::UnityEngine::InputSystem::LowLevel::InputUpdateType _get_None();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType None
    static void _set_None(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Dynamic
    static constexpr const int Dynamic = 1;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Dynamic
    static ::UnityEngine::InputSystem::LowLevel::InputUpdateType _get_Dynamic();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Dynamic
    static void _set_Dynamic(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Fixed
    static constexpr const int Fixed = 2;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Fixed
    static ::UnityEngine::InputSystem::LowLevel::InputUpdateType _get_Fixed();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Fixed
    static void _set_Fixed(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.InputUpdateType BeforeRender
    static constexpr const int BeforeRender = 4;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType BeforeRender
    static ::UnityEngine::InputSystem::LowLevel::InputUpdateType _get_BeforeRender();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType BeforeRender
    static void _set_BeforeRender(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Editor
    static constexpr const int Editor = 8;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Editor
    static ::UnityEngine::InputSystem::LowLevel::InputUpdateType _get_Editor();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Editor
    static void _set_Editor(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Manual
    static constexpr const int Manual = 16;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Manual
    static ::UnityEngine::InputSystem::LowLevel::InputUpdateType _get_Manual();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Manual
    static void _set_Manual(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Default
    static constexpr const int Default = 11;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Default
    static ::UnityEngine::InputSystem::LowLevel::InputUpdateType _get_Default();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType Default
    static void _set_Default(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InputSystem.LowLevel.InputUpdateType
  #pragma pack(pop)
  static check_size<sizeof(InputUpdateType), 0 + sizeof(int)> __UnityEngine_InputSystem_LowLevel_InputUpdateTypeSizeCheck;
  static_assert(sizeof(InputUpdateType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
