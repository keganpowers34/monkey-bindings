// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.HID.HID
#include "UnityEngine/InputSystem/HID/HID.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID::Button, "UnityEngine.InputSystem.HID", "HID/Button");
// Type namespace: UnityEngine.InputSystem.HID
namespace UnityEngine::InputSystem::HID {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.HID.HID/Button
  // [TokenAttribute] Offset: FFFFFFFF
  struct HID::Button/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Button
    constexpr Button(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Button Undefined
    static constexpr const int Undefined = 0;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Button Undefined
    static ::UnityEngine::InputSystem::HID::HID::Button _get_Undefined();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Button Undefined
    static void _set_Undefined(::UnityEngine::InputSystem::HID::HID::Button value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Button Primary
    static constexpr const int Primary = 1;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Button Primary
    static ::UnityEngine::InputSystem::HID::HID::Button _get_Primary();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Button Primary
    static void _set_Primary(::UnityEngine::InputSystem::HID::HID::Button value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Button Secondary
    static constexpr const int Secondary = 2;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Button Secondary
    static ::UnityEngine::InputSystem::HID::HID::Button _get_Secondary();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Button Secondary
    static void _set_Secondary(::UnityEngine::InputSystem::HID::HID::Button value);
    // static field const value: static public UnityEngine.InputSystem.HID.HID/Button Tertiary
    static constexpr const int Tertiary = 3;
    // Get static field: static public UnityEngine.InputSystem.HID.HID/Button Tertiary
    static ::UnityEngine::InputSystem::HID::HID::Button _get_Tertiary();
    // Set static field: static public UnityEngine.InputSystem.HID.HID/Button Tertiary
    static void _set_Tertiary(::UnityEngine::InputSystem::HID::HID::Button value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.InputSystem.HID.HID/Button
  #pragma pack(pop)
  static check_size<sizeof(HID::Button), 0 + sizeof(int)> __UnityEngine_InputSystem_HID_HID_ButtonSizeCheck;
  static_assert(sizeof(HID::Button) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
