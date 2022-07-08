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
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventTriggerType
  struct EventTriggerType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::EventTriggerType, "UnityEngine.EventSystems", "EventTriggerType");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.EventTriggerType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EventTriggerType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EventTriggerType
    constexpr EventTriggerType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType PointerEnter
    static constexpr const int PointerEnter = 0;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType PointerEnter
    static ::UnityEngine::EventSystems::EventTriggerType _get_PointerEnter();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType PointerEnter
    static void _set_PointerEnter(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType PointerExit
    static constexpr const int PointerExit = 1;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType PointerExit
    static ::UnityEngine::EventSystems::EventTriggerType _get_PointerExit();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType PointerExit
    static void _set_PointerExit(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType PointerDown
    static constexpr const int PointerDown = 2;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType PointerDown
    static ::UnityEngine::EventSystems::EventTriggerType _get_PointerDown();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType PointerDown
    static void _set_PointerDown(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType PointerUp
    static constexpr const int PointerUp = 3;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType PointerUp
    static ::UnityEngine::EventSystems::EventTriggerType _get_PointerUp();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType PointerUp
    static void _set_PointerUp(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType PointerClick
    static constexpr const int PointerClick = 4;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType PointerClick
    static ::UnityEngine::EventSystems::EventTriggerType _get_PointerClick();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType PointerClick
    static void _set_PointerClick(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType Drag
    static constexpr const int Drag = 5;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType Drag
    static ::UnityEngine::EventSystems::EventTriggerType _get_Drag();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType Drag
    static void _set_Drag(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType Drop
    static constexpr const int Drop = 6;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType Drop
    static ::UnityEngine::EventSystems::EventTriggerType _get_Drop();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType Drop
    static void _set_Drop(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType Scroll
    static constexpr const int Scroll = 7;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType Scroll
    static ::UnityEngine::EventSystems::EventTriggerType _get_Scroll();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType Scroll
    static void _set_Scroll(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType UpdateSelected
    static constexpr const int UpdateSelected = 8;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType UpdateSelected
    static ::UnityEngine::EventSystems::EventTriggerType _get_UpdateSelected();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType UpdateSelected
    static void _set_UpdateSelected(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType Select
    static constexpr const int Select = 9;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType Select
    static ::UnityEngine::EventSystems::EventTriggerType _get_Select();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType Select
    static void _set_Select(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType Deselect
    static constexpr const int Deselect = 10;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType Deselect
    static ::UnityEngine::EventSystems::EventTriggerType _get_Deselect();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType Deselect
    static void _set_Deselect(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType Move
    static constexpr const int Move = 11;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType Move
    static ::UnityEngine::EventSystems::EventTriggerType _get_Move();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType Move
    static void _set_Move(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType InitializePotentialDrag
    static constexpr const int InitializePotentialDrag = 12;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType InitializePotentialDrag
    static ::UnityEngine::EventSystems::EventTriggerType _get_InitializePotentialDrag();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType InitializePotentialDrag
    static void _set_InitializePotentialDrag(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType BeginDrag
    static constexpr const int BeginDrag = 13;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType BeginDrag
    static ::UnityEngine::EventSystems::EventTriggerType _get_BeginDrag();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType BeginDrag
    static void _set_BeginDrag(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType EndDrag
    static constexpr const int EndDrag = 14;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType EndDrag
    static ::UnityEngine::EventSystems::EventTriggerType _get_EndDrag();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType EndDrag
    static void _set_EndDrag(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType Submit
    static constexpr const int Submit = 15;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType Submit
    static ::UnityEngine::EventSystems::EventTriggerType _get_Submit();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType Submit
    static void _set_Submit(::UnityEngine::EventSystems::EventTriggerType value);
    // static field const value: static public UnityEngine.EventSystems.EventTriggerType Cancel
    static constexpr const int Cancel = 16;
    // Get static field: static public UnityEngine.EventSystems.EventTriggerType Cancel
    static ::UnityEngine::EventSystems::EventTriggerType _get_Cancel();
    // Set static field: static public UnityEngine.EventSystems.EventTriggerType Cancel
    static void _set_Cancel(::UnityEngine::EventSystems::EventTriggerType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.EventSystems.EventTriggerType
  #pragma pack(pop)
  static check_size<sizeof(EventTriggerType), 0 + sizeof(int)> __UnityEngine_EventSystems_EventTriggerTypeSizeCheck;
  static_assert(sizeof(EventTriggerType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
