// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: EventModifiers
  struct EventModifiers;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IMouseEvent
  class IMouseEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IMouseEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMouseEvent*, "UnityEngine.UIElements", "IMouseEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IMouseEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class IMouseEvent {
    public:
    // public UnityEngine.EventModifiers get_modifiers()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::EventModifiers get_modifiers();
    // public UnityEngine.Vector2 get_mousePosition()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector2 get_mousePosition();
    // public UnityEngine.Vector2 get_mouseDelta()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector2 get_mouseDelta();
    // public System.Int32 get_clickCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_clickCount();
    // public System.Int32 get_button()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_button();
    // public System.Int32 get_pressedButtons()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_pressedButtons();
  }; // UnityEngine.UIElements.IMouseEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IMouseEvent::get_modifiers
// Il2CppName: get_modifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventModifiers (UnityEngine::UIElements::IMouseEvent::*)()>(&UnityEngine::UIElements::IMouseEvent::get_modifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMouseEvent*), "get_modifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMouseEvent::get_mousePosition
// Il2CppName: get_mousePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::UIElements::IMouseEvent::*)()>(&UnityEngine::UIElements::IMouseEvent::get_mousePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMouseEvent*), "get_mousePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMouseEvent::get_mouseDelta
// Il2CppName: get_mouseDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::UIElements::IMouseEvent::*)()>(&UnityEngine::UIElements::IMouseEvent::get_mouseDelta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMouseEvent*), "get_mouseDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMouseEvent::get_clickCount
// Il2CppName: get_clickCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::IMouseEvent::*)()>(&UnityEngine::UIElements::IMouseEvent::get_clickCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMouseEvent*), "get_clickCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMouseEvent::get_button
// Il2CppName: get_button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::IMouseEvent::*)()>(&UnityEngine::UIElements::IMouseEvent::get_button)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMouseEvent*), "get_button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMouseEvent::get_pressedButtons
// Il2CppName: get_pressedButtons
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::IMouseEvent::*)()>(&UnityEngine::UIElements::IMouseEvent::get_pressedButtons)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMouseEvent*), "get_pressedButtons", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
