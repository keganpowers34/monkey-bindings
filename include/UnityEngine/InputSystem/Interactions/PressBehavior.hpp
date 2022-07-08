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
// Type namespace: UnityEngine.InputSystem.Interactions
namespace UnityEngine::InputSystem::Interactions {
  // Forward declaring type: PressBehavior
  struct PressBehavior;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::PressBehavior, "UnityEngine.InputSystem.Interactions", "PressBehavior");
// Type namespace: UnityEngine.InputSystem.Interactions
namespace UnityEngine::InputSystem::Interactions {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Interactions.PressBehavior
  // [TokenAttribute] Offset: FFFFFFFF
  struct PressBehavior/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PressBehavior
    constexpr PressBehavior(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.Interactions.PressBehavior PressOnly
    static constexpr const int PressOnly = 0;
    // Get static field: static public UnityEngine.InputSystem.Interactions.PressBehavior PressOnly
    static ::UnityEngine::InputSystem::Interactions::PressBehavior _get_PressOnly();
    // Set static field: static public UnityEngine.InputSystem.Interactions.PressBehavior PressOnly
    static void _set_PressOnly(::UnityEngine::InputSystem::Interactions::PressBehavior value);
    // static field const value: static public UnityEngine.InputSystem.Interactions.PressBehavior ReleaseOnly
    static constexpr const int ReleaseOnly = 1;
    // Get static field: static public UnityEngine.InputSystem.Interactions.PressBehavior ReleaseOnly
    static ::UnityEngine::InputSystem::Interactions::PressBehavior _get_ReleaseOnly();
    // Set static field: static public UnityEngine.InputSystem.Interactions.PressBehavior ReleaseOnly
    static void _set_ReleaseOnly(::UnityEngine::InputSystem::Interactions::PressBehavior value);
    // static field const value: static public UnityEngine.InputSystem.Interactions.PressBehavior PressAndRelease
    static constexpr const int PressAndRelease = 2;
    // Get static field: static public UnityEngine.InputSystem.Interactions.PressBehavior PressAndRelease
    static ::UnityEngine::InputSystem::Interactions::PressBehavior _get_PressAndRelease();
    // Set static field: static public UnityEngine.InputSystem.Interactions.PressBehavior PressAndRelease
    static void _set_PressAndRelease(::UnityEngine::InputSystem::Interactions::PressBehavior value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InputSystem.Interactions.PressBehavior
  #pragma pack(pop)
  static check_size<sizeof(PressBehavior), 0 + sizeof(int)> __UnityEngine_InputSystem_Interactions_PressBehaviorSizeCheck;
  static_assert(sizeof(PressBehavior) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
