// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.PropagationPaths
#include "UnityEngine/UIElements/PropagationPaths.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropagationPaths::Type, "UnityEngine.UIElements", "PropagationPaths/Type");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.PropagationPaths/Type
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct PropagationPaths::Type/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Type
    constexpr Type(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.PropagationPaths/Type None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.UIElements.PropagationPaths/Type None
    static ::UnityEngine::UIElements::PropagationPaths::Type _get_None();
    // Set static field: static public UnityEngine.UIElements.PropagationPaths/Type None
    static void _set_None(::UnityEngine::UIElements::PropagationPaths::Type value);
    // static field const value: static public UnityEngine.UIElements.PropagationPaths/Type TrickleDown
    static constexpr const int TrickleDown = 1;
    // Get static field: static public UnityEngine.UIElements.PropagationPaths/Type TrickleDown
    static ::UnityEngine::UIElements::PropagationPaths::Type _get_TrickleDown();
    // Set static field: static public UnityEngine.UIElements.PropagationPaths/Type TrickleDown
    static void _set_TrickleDown(::UnityEngine::UIElements::PropagationPaths::Type value);
    // static field const value: static public UnityEngine.UIElements.PropagationPaths/Type BubbleUp
    static constexpr const int BubbleUp = 2;
    // Get static field: static public UnityEngine.UIElements.PropagationPaths/Type BubbleUp
    static ::UnityEngine::UIElements::PropagationPaths::Type _get_BubbleUp();
    // Set static field: static public UnityEngine.UIElements.PropagationPaths/Type BubbleUp
    static void _set_BubbleUp(::UnityEngine::UIElements::PropagationPaths::Type value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.PropagationPaths/Type
  #pragma pack(pop)
  static check_size<sizeof(PropagationPaths::Type), 0 + sizeof(int)> __UnityEngine_UIElements_PropagationPaths_TypeSizeCheck;
  static_assert(sizeof(PropagationPaths::Type) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
