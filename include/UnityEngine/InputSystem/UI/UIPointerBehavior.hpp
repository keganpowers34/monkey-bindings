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
// Type namespace: UnityEngine.InputSystem.UI
namespace UnityEngine::InputSystem::UI {
  // Forward declaring type: UIPointerBehavior
  struct UIPointerBehavior;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::UIPointerBehavior, "UnityEngine.InputSystem.UI", "UIPointerBehavior");
// Type namespace: UnityEngine.InputSystem.UI
namespace UnityEngine::InputSystem::UI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.UI.UIPointerBehavior
  // [TokenAttribute] Offset: FFFFFFFF
  struct UIPointerBehavior/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UIPointerBehavior
    constexpr UIPointerBehavior(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.UI.UIPointerBehavior SingleMouseOrPenButMultiTouchAndTrack
    static constexpr const int SingleMouseOrPenButMultiTouchAndTrack = 0;
    // Get static field: static public UnityEngine.InputSystem.UI.UIPointerBehavior SingleMouseOrPenButMultiTouchAndTrack
    static ::UnityEngine::InputSystem::UI::UIPointerBehavior _get_SingleMouseOrPenButMultiTouchAndTrack();
    // Set static field: static public UnityEngine.InputSystem.UI.UIPointerBehavior SingleMouseOrPenButMultiTouchAndTrack
    static void _set_SingleMouseOrPenButMultiTouchAndTrack(::UnityEngine::InputSystem::UI::UIPointerBehavior value);
    // static field const value: static public UnityEngine.InputSystem.UI.UIPointerBehavior SingleUnifiedPointer
    static constexpr const int SingleUnifiedPointer = 1;
    // Get static field: static public UnityEngine.InputSystem.UI.UIPointerBehavior SingleUnifiedPointer
    static ::UnityEngine::InputSystem::UI::UIPointerBehavior _get_SingleUnifiedPointer();
    // Set static field: static public UnityEngine.InputSystem.UI.UIPointerBehavior SingleUnifiedPointer
    static void _set_SingleUnifiedPointer(::UnityEngine::InputSystem::UI::UIPointerBehavior value);
    // static field const value: static public UnityEngine.InputSystem.UI.UIPointerBehavior AllPointersAsIs
    static constexpr const int AllPointersAsIs = 2;
    // Get static field: static public UnityEngine.InputSystem.UI.UIPointerBehavior AllPointersAsIs
    static ::UnityEngine::InputSystem::UI::UIPointerBehavior _get_AllPointersAsIs();
    // Set static field: static public UnityEngine.InputSystem.UI.UIPointerBehavior AllPointersAsIs
    static void _set_AllPointersAsIs(::UnityEngine::InputSystem::UI::UIPointerBehavior value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InputSystem.UI.UIPointerBehavior
  #pragma pack(pop)
  static check_size<sizeof(UIPointerBehavior), 0 + sizeof(int)> __UnityEngine_InputSystem_UI_UIPointerBehaviorSizeCheck;
  static_assert(sizeof(UIPointerBehavior) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
