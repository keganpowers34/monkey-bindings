// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.CallbackEventHandler
#include "UnityEngine/UIElements/CallbackEventHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: FocusController
  class FocusController;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Focusable
  class Focusable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::Focusable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Focusable*, "UnityEngine.UIElements", "Focusable");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.Focusable
  // [TokenAttribute] Offset: FFFFFFFF
  class Focusable : public ::UnityEngine::UIElements::CallbackEventHandler {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xA9FDC8
    // [CompilerGeneratedAttribute] Offset: 0xA9FDC8
    // private System.Boolean <focusable>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool focusable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isIMGUIContainer
    // Size: 0x1
    // Offset: 0x19
    bool isIMGUIContainer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::UnityEngine::UIElements::EventCallbackRegistry*
    constexpr operator ::UnityEngine::UIElements::EventCallbackRegistry*() const noexcept = delete;
    // Get instance field reference: private System.Boolean <focusable>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$focusable$k__BackingField();
    // Get instance field reference: System.Boolean isIMGUIContainer
    [[deprecated("Use field access instead!")]] bool& dyn_isIMGUIContainer();
    // public UnityEngine.UIElements.FocusController get_focusController()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::FocusController* get_focusController();
    // public System.Boolean get_focusable()
    // Offset: 0xD45680
    bool get_focusable();
    // public System.Boolean get_canGrabFocus()
    // Offset: 0xD45688
    bool get_canGrabFocus();
  }; // UnityEngine.UIElements.Focusable
  #pragma pack(pop)
  static check_size<sizeof(Focusable), 25 + sizeof(bool)> __UnityEngine_UIElements_FocusableSizeCheck;
  static_assert(sizeof(Focusable) == 0x1A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Focusable::get_focusController
// Il2CppName: get_focusController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusController* (UnityEngine::UIElements::Focusable::*)()>(&UnityEngine::UIElements::Focusable::get_focusController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Focusable*), "get_focusController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Focusable::get_focusable
// Il2CppName: get_focusable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::Focusable::*)()>(&UnityEngine::UIElements::Focusable::get_focusable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Focusable*), "get_focusable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Focusable::get_canGrabFocus
// Il2CppName: get_canGrabFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::Focusable::*)()>(&UnityEngine::UIElements::Focusable::get_canGrabFocus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Focusable*), "get_canGrabFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
