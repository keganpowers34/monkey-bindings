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
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Forward declaring type: YogaMeasureMode
  struct YogaMeasureMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaMeasureMode, "UnityEngine.Yoga", "YogaMeasureMode");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.YogaMeasureMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct YogaMeasureMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: YogaMeasureMode
    constexpr YogaMeasureMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Yoga.YogaMeasureMode Undefined
    static constexpr const int Undefined = 0;
    // Get static field: static public UnityEngine.Yoga.YogaMeasureMode Undefined
    static ::UnityEngine::Yoga::YogaMeasureMode _get_Undefined();
    // Set static field: static public UnityEngine.Yoga.YogaMeasureMode Undefined
    static void _set_Undefined(::UnityEngine::Yoga::YogaMeasureMode value);
    // static field const value: static public UnityEngine.Yoga.YogaMeasureMode Exactly
    static constexpr const int Exactly = 1;
    // Get static field: static public UnityEngine.Yoga.YogaMeasureMode Exactly
    static ::UnityEngine::Yoga::YogaMeasureMode _get_Exactly();
    // Set static field: static public UnityEngine.Yoga.YogaMeasureMode Exactly
    static void _set_Exactly(::UnityEngine::Yoga::YogaMeasureMode value);
    // static field const value: static public UnityEngine.Yoga.YogaMeasureMode AtMost
    static constexpr const int AtMost = 2;
    // Get static field: static public UnityEngine.Yoga.YogaMeasureMode AtMost
    static ::UnityEngine::Yoga::YogaMeasureMode _get_AtMost();
    // Set static field: static public UnityEngine.Yoga.YogaMeasureMode AtMost
    static void _set_AtMost(::UnityEngine::Yoga::YogaMeasureMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Yoga.YogaMeasureMode
  #pragma pack(pop)
  static check_size<sizeof(YogaMeasureMode), 0 + sizeof(int)> __UnityEngine_Yoga_YogaMeasureModeSizeCheck;
  static_assert(sizeof(YogaMeasureMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
