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
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeInputEventType
  struct NativeInputEventType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputEventType, "UnityEngineInternal.Input", "NativeInputEventType");
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngineInternal.Input.NativeInputEventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct NativeInputEventType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NativeInputEventType
    constexpr NativeInputEventType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngineInternal.Input.NativeInputEventType DeviceRemoved
    static constexpr const int DeviceRemoved = 1146242381;
    // Get static field: static public UnityEngineInternal.Input.NativeInputEventType DeviceRemoved
    static ::UnityEngineInternal::Input::NativeInputEventType _get_DeviceRemoved();
    // Set static field: static public UnityEngineInternal.Input.NativeInputEventType DeviceRemoved
    static void _set_DeviceRemoved(::UnityEngineInternal::Input::NativeInputEventType value);
    // static field const value: static public UnityEngineInternal.Input.NativeInputEventType DeviceConfigChanged
    static constexpr const int DeviceConfigChanged = 1145259591;
    // Get static field: static public UnityEngineInternal.Input.NativeInputEventType DeviceConfigChanged
    static ::UnityEngineInternal::Input::NativeInputEventType _get_DeviceConfigChanged();
    // Set static field: static public UnityEngineInternal.Input.NativeInputEventType DeviceConfigChanged
    static void _set_DeviceConfigChanged(::UnityEngineInternal::Input::NativeInputEventType value);
    // static field const value: static public UnityEngineInternal.Input.NativeInputEventType Text
    static constexpr const int Text = 1413830740;
    // Get static field: static public UnityEngineInternal.Input.NativeInputEventType Text
    static ::UnityEngineInternal::Input::NativeInputEventType _get_Text();
    // Set static field: static public UnityEngineInternal.Input.NativeInputEventType Text
    static void _set_Text(::UnityEngineInternal::Input::NativeInputEventType value);
    // static field const value: static public UnityEngineInternal.Input.NativeInputEventType State
    static constexpr const int State = 1398030676;
    // Get static field: static public UnityEngineInternal.Input.NativeInputEventType State
    static ::UnityEngineInternal::Input::NativeInputEventType _get_State();
    // Set static field: static public UnityEngineInternal.Input.NativeInputEventType State
    static void _set_State(::UnityEngineInternal::Input::NativeInputEventType value);
    // static field const value: static public UnityEngineInternal.Input.NativeInputEventType Delta
    static constexpr const int Delta = 1145852993;
    // Get static field: static public UnityEngineInternal.Input.NativeInputEventType Delta
    static ::UnityEngineInternal::Input::NativeInputEventType _get_Delta();
    // Set static field: static public UnityEngineInternal.Input.NativeInputEventType Delta
    static void _set_Delta(::UnityEngineInternal::Input::NativeInputEventType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngineInternal.Input.NativeInputEventType
  #pragma pack(pop)
  static check_size<sizeof(NativeInputEventType), 0 + sizeof(int)> __UnityEngineInternal_Input_NativeInputEventTypeSizeCheck;
  static_assert(sizeof(NativeInputEventType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
