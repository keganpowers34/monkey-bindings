// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Focusable
  class Focusable;
  // Forward declaring type: IFocusRing
  class IFocusRing;
  // Forward declaring type: FocusChangeDirection
  class FocusChangeDirection;
  // Forward declaring type: EventBase
  class EventBase;
  // Forward declaring type: VisualElement
  class VisualElement;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: FocusController
  class FocusController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::FocusController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusController*, "UnityEngine.UIElements", "FocusController");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.FocusController
  // [TokenAttribute] Offset: FFFFFFFF
  class FocusController : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::UIElements::FocusController::FocusedElement
    struct FocusedElement;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.UIElements.FocusController/FocusedElement
    // [TokenAttribute] Offset: FFFFFFFF
    struct FocusedElement/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.UIElements.VisualElement m_SubTreeRoot
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::UIElements::VisualElement* m_SubTreeRoot;
      // Field size check
      static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
      // public UnityEngine.UIElements.Focusable m_FocusedElement
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::UIElements::Focusable* m_FocusedElement;
      // Field size check
      static_assert(sizeof(::UnityEngine::UIElements::Focusable*) == 0x8);
      public:
      // Creating value type constructor for type: FocusedElement
      constexpr FocusedElement(::UnityEngine::UIElements::VisualElement* m_SubTreeRoot_ = {}, ::UnityEngine::UIElements::Focusable* m_FocusedElement_ = {}) noexcept : m_SubTreeRoot{m_SubTreeRoot_}, m_FocusedElement{m_FocusedElement_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.UIElements.VisualElement m_SubTreeRoot
      [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_SubTreeRoot();
      // Get instance field reference: public UnityEngine.UIElements.Focusable m_FocusedElement
      [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Focusable*& dyn_m_FocusedElement();
    }; // UnityEngine.UIElements.FocusController/FocusedElement
    #pragma pack(pop)
    static check_size<sizeof(FocusController::FocusedElement), 8 + sizeof(::UnityEngine::UIElements::Focusable*)> __UnityEngine_UIElements_FocusController_FocusedElementSizeCheck;
    static_assert(sizeof(FocusController::FocusedElement) == 0x10);
    public:
    // [CompilerGeneratedAttribute] Offset: 0xA9FEB8
    // [DebuggerBrowsableAttribute] Offset: 0xA9FEB8
    // private readonly UnityEngine.UIElements.IFocusRing <focusRing>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::IFocusRing* focusRing;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::IFocusRing*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.UIElements.FocusController/FocusedElement> m_FocusedElements
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController::FocusedElement>* m_FocusedElements;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController::FocusedElement>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xA9FEF4
    // [CompilerGeneratedAttribute] Offset: 0xA9FEF4
    // private System.Int32 <imguiKeyboardControl>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int imguiKeyboardControl;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly UnityEngine.UIElements.IFocusRing <focusRing>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::IFocusRing*& dyn_$focusRing$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UIElements.FocusController/FocusedElement> m_FocusedElements
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::FocusController::FocusedElement>*& dyn_m_FocusedElements();
    // Get instance field reference: private System.Int32 <imguiKeyboardControl>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$imguiKeyboardControl$k__BackingField();
    // private UnityEngine.UIElements.IFocusRing get_focusRing()
    // Offset: 0xD448CC
    ::UnityEngine::UIElements::IFocusRing* get_focusRing();
    // UnityEngine.UIElements.Focusable GetLeafFocusedElement()
    // Offset: 0xD3FD0C
    ::UnityEngine::UIElements::Focusable* GetLeafFocusedElement();
    // System.Void DoFocusChange(UnityEngine.UIElements.Focusable f)
    // Offset: 0xD3F5B4
    void DoFocusChange(::UnityEngine::UIElements::Focusable* f);
    // private System.Void AboutToReleaseFocus(UnityEngine.UIElements.Focusable focusable, UnityEngine.UIElements.Focusable willGiveFocusTo, UnityEngine.UIElements.FocusChangeDirection direction)
    // Offset: 0xD448D4
    void AboutToReleaseFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection* direction);
    // private System.Void ReleaseFocus(UnityEngine.UIElements.Focusable focusable, UnityEngine.UIElements.Focusable willGiveFocusTo, UnityEngine.UIElements.FocusChangeDirection direction)
    // Offset: 0xD44A20
    void ReleaseFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection* direction);
    // private System.Void AboutToGrabFocus(UnityEngine.UIElements.Focusable focusable, UnityEngine.UIElements.Focusable willTakeFocusFrom, UnityEngine.UIElements.FocusChangeDirection direction)
    // Offset: 0xD44B6C
    void AboutToGrabFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection* direction);
    // private System.Void GrabFocus(UnityEngine.UIElements.Focusable focusable, UnityEngine.UIElements.Focusable willTakeFocusFrom, UnityEngine.UIElements.FocusChangeDirection direction)
    // Offset: 0xD44CB8
    void GrabFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection* direction);
    // private System.Void SwitchFocus(UnityEngine.UIElements.Focusable newFocusedElement, UnityEngine.UIElements.FocusChangeDirection direction)
    // Offset: 0xD44E04
    void SwitchFocus(::UnityEngine::UIElements::Focusable* newFocusedElement, ::UnityEngine::UIElements::FocusChangeDirection* direction);
    // UnityEngine.UIElements.Focusable SwitchFocusOnEvent(UnityEngine.UIElements.EventBase e)
    // Offset: 0xD4509C
    ::UnityEngine::UIElements::Focusable* SwitchFocusOnEvent(::UnityEngine::UIElements::EventBase* e);
    // System.Int32 get_imguiKeyboardControl()
    // Offset: 0xD452A0
    int get_imguiKeyboardControl();
    // System.Void set_imguiKeyboardControl(System.Int32 value)
    // Offset: 0xD452A8
    void set_imguiKeyboardControl(int value);
    // System.Void SyncIMGUIFocus(System.Int32 imguiKeyboardControlID, UnityEngine.UIElements.Focusable imguiContainerHavingKeyboardControl, System.Boolean forceSwitch)
    // Offset: 0xD452B0
    void SyncIMGUIFocus(int imguiKeyboardControlID, ::UnityEngine::UIElements::Focusable* imguiContainerHavingKeyboardControl, bool forceSwitch);
  }; // UnityEngine.UIElements.FocusController
  #pragma pack(pop)
  static check_size<sizeof(FocusController), 32 + sizeof(int)> __UnityEngine_UIElements_FocusControllerSizeCheck;
  static_assert(sizeof(FocusController) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusController::FocusedElement, "UnityEngine.UIElements", "FocusController/FocusedElement");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusController::get_focusRing
// Il2CppName: get_focusRing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IFocusRing* (UnityEngine::UIElements::FocusController::*)()>(&UnityEngine::UIElements::FocusController::get_focusRing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusController*), "get_focusRing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusController::GetLeafFocusedElement
// Il2CppName: GetLeafFocusedElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (UnityEngine::UIElements::FocusController::*)()>(&UnityEngine::UIElements::FocusController::GetLeafFocusedElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusController*), "GetLeafFocusedElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusController::DoFocusChange
// Il2CppName: DoFocusChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*)>(&UnityEngine::UIElements::FocusController::DoFocusChange)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusController*), "DoFocusChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusController::AboutToReleaseFocus
// Il2CppName: AboutToReleaseFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(&UnityEngine::UIElements::FocusController::AboutToReleaseFocus)> {
  static const MethodInfo* get() {
    static auto* focusable = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* willGiveFocusTo = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "FocusChangeDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusController*), "AboutToReleaseFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{focusable, willGiveFocusTo, direction});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusController::ReleaseFocus
// Il2CppName: ReleaseFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(&UnityEngine::UIElements::FocusController::ReleaseFocus)> {
  static const MethodInfo* get() {
    static auto* focusable = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* willGiveFocusTo = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "FocusChangeDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusController*), "ReleaseFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{focusable, willGiveFocusTo, direction});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusController::AboutToGrabFocus
// Il2CppName: AboutToGrabFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(&UnityEngine::UIElements::FocusController::AboutToGrabFocus)> {
  static const MethodInfo* get() {
    static auto* focusable = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* willTakeFocusFrom = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "FocusChangeDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusController*), "AboutToGrabFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{focusable, willTakeFocusFrom, direction});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusController::GrabFocus
// Il2CppName: GrabFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(&UnityEngine::UIElements::FocusController::GrabFocus)> {
  static const MethodInfo* get() {
    static auto* focusable = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* willTakeFocusFrom = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "FocusChangeDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusController*), "GrabFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{focusable, willTakeFocusFrom, direction});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusController::SwitchFocus
// Il2CppName: SwitchFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(&UnityEngine::UIElements::FocusController::SwitchFocus)> {
  static const MethodInfo* get() {
    static auto* newFocusedElement = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "FocusChangeDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusController*), "SwitchFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newFocusedElement, direction});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusController::SwitchFocusOnEvent
// Il2CppName: SwitchFocusOnEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::EventBase*)>(&UnityEngine::UIElements::FocusController::SwitchFocusOnEvent)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusController*), "SwitchFocusOnEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusController::get_imguiKeyboardControl
// Il2CppName: get_imguiKeyboardControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::FocusController::*)()>(&UnityEngine::UIElements::FocusController::get_imguiKeyboardControl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusController*), "get_imguiKeyboardControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusController::set_imguiKeyboardControl
// Il2CppName: set_imguiKeyboardControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::FocusController::*)(int)>(&UnityEngine::UIElements::FocusController::set_imguiKeyboardControl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusController*), "set_imguiKeyboardControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusController::SyncIMGUIFocus
// Il2CppName: SyncIMGUIFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::FocusController::*)(int, ::UnityEngine::UIElements::Focusable*, bool)>(&UnityEngine::UIElements::FocusController::SyncIMGUIFocus)> {
  static const MethodInfo* get() {
    static auto* imguiKeyboardControlID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* imguiContainerHavingKeyboardControl = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* forceSwitch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusController*), "SyncIMGUIFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{imguiKeyboardControlID, imguiContainerHavingKeyboardControl, forceSwitch});
  }
};
