// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ButtonReadType because it is already included!
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: InputDevice
  struct InputDevice;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: InputHelpers
  class InputHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::InputHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InputHelpers*, "", "InputHelpers");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: InputHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class InputHelpers : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::InputHelpers::Button
    struct Button;
    // Nested type: ::GlobalNamespace::InputHelpers::ButtonReadType
    struct ButtonReadType;
    // Nested type: ::GlobalNamespace::InputHelpers::ButtonInfo
    struct ButtonInfo;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: InputHelpers/ButtonReadType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ButtonReadType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ButtonReadType
      constexpr ButtonReadType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public InputHelpers/ButtonReadType None
      static constexpr const int None = 0;
      // Get static field: static public InputHelpers/ButtonReadType None
      static ::GlobalNamespace::InputHelpers::ButtonReadType _get_None();
      // Set static field: static public InputHelpers/ButtonReadType None
      static void _set_None(::GlobalNamespace::InputHelpers::ButtonReadType value);
      // static field const value: static public InputHelpers/ButtonReadType Binary
      static constexpr const int Binary = 1;
      // Get static field: static public InputHelpers/ButtonReadType Binary
      static ::GlobalNamespace::InputHelpers::ButtonReadType _get_Binary();
      // Set static field: static public InputHelpers/ButtonReadType Binary
      static void _set_Binary(::GlobalNamespace::InputHelpers::ButtonReadType value);
      // static field const value: static public InputHelpers/ButtonReadType Axis1D
      static constexpr const int Axis1D = 2;
      // Get static field: static public InputHelpers/ButtonReadType Axis1D
      static ::GlobalNamespace::InputHelpers::ButtonReadType _get_Axis1D();
      // Set static field: static public InputHelpers/ButtonReadType Axis1D
      static void _set_Axis1D(::GlobalNamespace::InputHelpers::ButtonReadType value);
      // static field const value: static public InputHelpers/ButtonReadType Axis2DUp
      static constexpr const int Axis2DUp = 3;
      // Get static field: static public InputHelpers/ButtonReadType Axis2DUp
      static ::GlobalNamespace::InputHelpers::ButtonReadType _get_Axis2DUp();
      // Set static field: static public InputHelpers/ButtonReadType Axis2DUp
      static void _set_Axis2DUp(::GlobalNamespace::InputHelpers::ButtonReadType value);
      // static field const value: static public InputHelpers/ButtonReadType Axis2DDown
      static constexpr const int Axis2DDown = 4;
      // Get static field: static public InputHelpers/ButtonReadType Axis2DDown
      static ::GlobalNamespace::InputHelpers::ButtonReadType _get_Axis2DDown();
      // Set static field: static public InputHelpers/ButtonReadType Axis2DDown
      static void _set_Axis2DDown(::GlobalNamespace::InputHelpers::ButtonReadType value);
      // static field const value: static public InputHelpers/ButtonReadType Axis2DLeft
      static constexpr const int Axis2DLeft = 5;
      // Get static field: static public InputHelpers/ButtonReadType Axis2DLeft
      static ::GlobalNamespace::InputHelpers::ButtonReadType _get_Axis2DLeft();
      // Set static field: static public InputHelpers/ButtonReadType Axis2DLeft
      static void _set_Axis2DLeft(::GlobalNamespace::InputHelpers::ButtonReadType value);
      // static field const value: static public InputHelpers/ButtonReadType Axis2DRight
      static constexpr const int Axis2DRight = 6;
      // Get static field: static public InputHelpers/ButtonReadType Axis2DRight
      static ::GlobalNamespace::InputHelpers::ButtonReadType _get_Axis2DRight();
      // Set static field: static public InputHelpers/ButtonReadType Axis2DRight
      static void _set_Axis2DRight(::GlobalNamespace::InputHelpers::ButtonReadType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // InputHelpers/ButtonReadType
    #pragma pack(pop)
    static check_size<sizeof(InputHelpers::ButtonReadType), 0 + sizeof(int)> __GlobalNamespace_InputHelpers_ButtonReadTypeSizeCheck;
    static_assert(sizeof(InputHelpers::ButtonReadType) == 0x4);
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: InputHelpers/ButtonInfo
    // [TokenAttribute] Offset: FFFFFFFF
    struct ButtonInfo/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.String name
      // Size: 0x8
      // Offset: 0x0
      ::StringW name;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // public InputHelpers/ButtonReadType type
      // Size: 0x4
      // Offset: 0x8
      ::GlobalNamespace::InputHelpers::ButtonReadType type;
      // Field size check
      static_assert(sizeof(::GlobalNamespace::InputHelpers::ButtonReadType) == 0x4);
      public:
      // Creating value type constructor for type: ButtonInfo
      constexpr ButtonInfo(::StringW name_ = {}, ::GlobalNamespace::InputHelpers::ButtonReadType type_ = {}) noexcept : name{name_}, type{type_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.String name
      [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
      // Get instance field reference: public InputHelpers/ButtonReadType type
      [[deprecated("Use field access instead!")]] ::GlobalNamespace::InputHelpers::ButtonReadType& dyn_type();
      // public System.Void .ctor(System.String name, InputHelpers/ButtonReadType type)
      // Offset: 0x9A1724
      // ABORTED: conflicts with another method.  ButtonInfo(::StringW name, ::GlobalNamespace::InputHelpers::ButtonReadType type);
    }; // InputHelpers/ButtonInfo
    #pragma pack(pop)
    static check_size<sizeof(InputHelpers::ButtonInfo), 8 + sizeof(::GlobalNamespace::InputHelpers::ButtonReadType)> __GlobalNamespace_InputHelpers_ButtonInfoSizeCheck;
    static_assert(sizeof(InputHelpers::ButtonInfo) == 0xC);
    // Get static field: static private readonly InputHelpers/ButtonInfo[] s_ButtonData
    static ::ArrayW<::GlobalNamespace::InputHelpers::ButtonInfo> _get_s_ButtonData();
    // Set static field: static private readonly InputHelpers/ButtonInfo[] s_ButtonData
    static void _set_s_ButtonData(::ArrayW<::GlobalNamespace::InputHelpers::ButtonInfo> value);
    // static field const value: static private System.Single k_DefaultPressThreshold
    static constexpr const float k_DefaultPressThreshold = 0.1;
    // Get static field: static private System.Single k_DefaultPressThreshold
    static float _get_k_DefaultPressThreshold();
    // Set static field: static private System.Single k_DefaultPressThreshold
    static void _set_k_DefaultPressThreshold(float value);
    // static public System.Boolean IsPressed(UnityEngine.XR.InputDevice device, InputHelpers/Button button, out System.Boolean isPressed, System.Single pressThreshold)
    // Offset: 0xF5062C
    static bool IsPressed(::UnityEngine::XR::InputDevice device, ::GlobalNamespace::InputHelpers::Button button, ByRef<bool> isPressed, float pressThreshold);
    // static private System.Void .cctor()
    // Offset: 0xF50954
    static void _cctor();
  }; // InputHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InputHelpers::ButtonInfo, "", "InputHelpers/ButtonInfo");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InputHelpers::ButtonReadType, "", "InputHelpers/ButtonReadType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::InputHelpers::IsPressed
// Il2CppName: IsPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::InputDevice, ::GlobalNamespace::InputHelpers::Button, ByRef<bool>, float)>(&GlobalNamespace::InputHelpers::IsPressed)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")->byval_arg;
    static auto* button = &::il2cpp_utils::GetClassFromName("", "InputHelpers/Button")->byval_arg;
    static auto* isPressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* pressThreshold = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InputHelpers*), "IsPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, button, isPressed, pressThreshold});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InputHelpers::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::InputHelpers::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InputHelpers*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
