// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: MouseEventBase`1<T>
  template<typename T>
  class MouseEventBase_1;
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: IMouseEvent
  class IMouseEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: MouseEventsHelper
  class MouseEventsHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::MouseEventsHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEventsHelper*, "UnityEngine.UIElements", "MouseEventsHelper");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.MouseEventsHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class MouseEventsHelper : public ::Il2CppObject {
    public:
    // static System.Void SendEnterLeave(UnityEngine.UIElements.VisualElement previousTopElementUnderMouse, UnityEngine.UIElements.VisualElement currentTopElementUnderMouse, UnityEngine.UIElements.IMouseEvent triggerEvent, UnityEngine.Vector2 mousePosition)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TLeaveEvent, class TEnterEvent>
    static void SendEnterLeave(::UnityEngine::UIElements::VisualElement* previousTopElementUnderMouse, ::UnityEngine::UIElements::VisualElement* currentTopElementUnderMouse, ::UnityEngine::UIElements::IMouseEvent* triggerEvent, ::UnityEngine::Vector2 mousePosition) {
      static_assert(std::is_convertible_v<TLeaveEvent, ::UnityEngine::UIElements::MouseEventBase_1<TLeaveEvent>*>);
      static_assert(std::is_convertible_v<TEnterEvent, ::UnityEngine::UIElements::MouseEventBase_1<TEnterEvent>*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::MouseEventsHelper::SendEnterLeave");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.UIElements", "MouseEventsHelper", "SendEnterLeave", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TLeaveEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnterEvent>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(previousTopElementUnderMouse), ::il2cpp_utils::ExtractType(currentTopElementUnderMouse), ::il2cpp_utils::ExtractType(triggerEvent), ::il2cpp_utils::ExtractType(mousePosition)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TLeaveEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnterEvent>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, previousTopElementUnderMouse, currentTopElementUnderMouse, triggerEvent, mousePosition);
    }
    // static System.Void SendMouseOverMouseOut(UnityEngine.UIElements.VisualElement previousTopElementUnderMouse, UnityEngine.UIElements.VisualElement currentTopElementUnderMouse, UnityEngine.UIElements.IMouseEvent triggerEvent, UnityEngine.Vector2 mousePosition)
    // Offset: 0xD41FEC
    static void SendMouseOverMouseOut(::UnityEngine::UIElements::VisualElement* previousTopElementUnderMouse, ::UnityEngine::UIElements::VisualElement* currentTopElementUnderMouse, ::UnityEngine::UIElements::IMouseEvent* triggerEvent, ::UnityEngine::Vector2 mousePosition);
  }; // UnityEngine.UIElements.MouseEventsHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseEventsHelper::SendEnterLeave
// Il2CppName: SendEnterLeave
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseEventsHelper::SendMouseOverMouseOut
// Il2CppName: SendMouseOverMouseOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IMouseEvent*, ::UnityEngine::Vector2)>(&UnityEngine::UIElements::MouseEventsHelper::SendMouseOverMouseOut)> {
  static const MethodInfo* get() {
    static auto* previousTopElementUnderMouse = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* currentTopElementUnderMouse = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* triggerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IMouseEvent")->byval_arg;
    static auto* mousePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MouseEventsHelper*), "SendMouseOverMouseOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previousTopElementUnderMouse, currentTopElementUnderMouse, triggerEvent, mousePosition});
  }
};
