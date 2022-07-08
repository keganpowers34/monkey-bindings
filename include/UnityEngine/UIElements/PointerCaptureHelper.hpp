// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: PointerDispatchState
  class PointerDispatchState;
  // Forward declaring type: IEventHandler
  class IEventHandler;
  // Forward declaring type: IPanel
  class IPanel;
  // Forward declaring type: IPointerEvent
  class IPointerEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: PointerCaptureHelper
  class PointerCaptureHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureHelper*, "UnityEngine.UIElements", "PointerCaptureHelper");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.PointerCaptureHelper
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class PointerCaptureHelper : public ::Il2CppObject {
    public:
    // static private UnityEngine.UIElements.PointerDispatchState GetStateFor(UnityEngine.UIElements.IEventHandler handler)
    // Offset: 0xD4B1B4
    static ::UnityEngine::UIElements::PointerDispatchState* GetStateFor(::UnityEngine::UIElements::IEventHandler* handler);
    // static public System.Boolean HasPointerCapture(UnityEngine.UIElements.IEventHandler handler, System.Int32 pointerId)
    // Offset: 0xD47D5C
    static bool HasPointerCapture(::UnityEngine::UIElements::IEventHandler* handler, int pointerId);
    // static public System.Void CapturePointer(UnityEngine.UIElements.IEventHandler handler, System.Int32 pointerId)
    // Offset: 0xD47E6C
    static void CapturePointer(::UnityEngine::UIElements::IEventHandler* handler, int pointerId);
    // static public System.Void ReleasePointer(UnityEngine.UIElements.IEventHandler handler, System.Int32 pointerId)
    // Offset: 0xD4805C
    static void ReleasePointer(::UnityEngine::UIElements::IEventHandler* handler, int pointerId);
    // static public UnityEngine.UIElements.IEventHandler GetCapturingElement(UnityEngine.UIElements.IPanel panel, System.Int32 pointerId)
    // Offset: 0xD4884C
    static ::UnityEngine::UIElements::IEventHandler* GetCapturingElement(::UnityEngine::UIElements::IPanel* panel, int pointerId);
    // static public System.Void ReleasePointer(UnityEngine.UIElements.IPanel panel, System.Int32 pointerId)
    // Offset: 0xD4AB14
    static void ReleasePointer(::UnityEngine::UIElements::IPanel* panel, int pointerId);
    // static System.Void ActivateCompatibilityMouseEvents(UnityEngine.UIElements.IPanel panel, System.Int32 pointerId)
    // Offset: 0xD4B524
    static void ActivateCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, int pointerId);
    // static System.Void PreventCompatibilityMouseEvents(UnityEngine.UIElements.IPanel panel, System.Int32 pointerId)
    // Offset: 0xD4B644
    static void PreventCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, int pointerId);
    // static System.Boolean ShouldSendCompatibilityMouseEvents(UnityEngine.UIElements.IPanel panel, UnityEngine.UIElements.IPointerEvent evt)
    // Offset: 0xD4ABF4
    static bool ShouldSendCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, ::UnityEngine::UIElements::IPointerEvent* evt);
    // static System.Void ProcessPointerCapture(UnityEngine.UIElements.IPanel panel, System.Int32 pointerId)
    // Offset: 0xD47EA8
    static void ProcessPointerCapture(::UnityEngine::UIElements::IPanel* panel, int pointerId);
  }; // UnityEngine.UIElements.PointerCaptureHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureHelper::GetStateFor
// Il2CppName: GetStateFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::PointerDispatchState* (*)(::UnityEngine::UIElements::IEventHandler*)>(&UnityEngine::UIElements::PointerCaptureHelper::GetStateFor)> {
  static const MethodInfo* get() {
    static auto* handler = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCaptureHelper*), "GetStateFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handler});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureHelper::HasPointerCapture
// Il2CppName: HasPointerCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::IEventHandler*, int)>(&UnityEngine::UIElements::PointerCaptureHelper::HasPointerCapture)> {
  static const MethodInfo* get() {
    static auto* handler = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IEventHandler")->byval_arg;
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCaptureHelper*), "HasPointerCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handler, pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureHelper::CapturePointer
// Il2CppName: CapturePointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IEventHandler*, int)>(&UnityEngine::UIElements::PointerCaptureHelper::CapturePointer)> {
  static const MethodInfo* get() {
    static auto* handler = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IEventHandler")->byval_arg;
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCaptureHelper*), "CapturePointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handler, pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureHelper::ReleasePointer
// Il2CppName: ReleasePointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IEventHandler*, int)>(&UnityEngine::UIElements::PointerCaptureHelper::ReleasePointer)> {
  static const MethodInfo* get() {
    static auto* handler = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IEventHandler")->byval_arg;
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCaptureHelper*), "ReleasePointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handler, pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureHelper::GetCapturingElement
// Il2CppName: GetCapturingElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IEventHandler* (*)(::UnityEngine::UIElements::IPanel*, int)>(&UnityEngine::UIElements::PointerCaptureHelper::GetCapturingElement)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCaptureHelper*), "GetCapturingElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel, pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureHelper::ReleasePointer
// Il2CppName: ReleasePointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*, int)>(&UnityEngine::UIElements::PointerCaptureHelper::ReleasePointer)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCaptureHelper*), "ReleasePointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel, pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureHelper::ActivateCompatibilityMouseEvents
// Il2CppName: ActivateCompatibilityMouseEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*, int)>(&UnityEngine::UIElements::PointerCaptureHelper::ActivateCompatibilityMouseEvents)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCaptureHelper*), "ActivateCompatibilityMouseEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel, pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureHelper::PreventCompatibilityMouseEvents
// Il2CppName: PreventCompatibilityMouseEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*, int)>(&UnityEngine::UIElements::PointerCaptureHelper::PreventCompatibilityMouseEvents)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCaptureHelper*), "PreventCompatibilityMouseEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel, pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureHelper::ShouldSendCompatibilityMouseEvents
// Il2CppName: ShouldSendCompatibilityMouseEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::IPointerEvent*)>(&UnityEngine::UIElements::PointerCaptureHelper::ShouldSendCompatibilityMouseEvents)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPointerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCaptureHelper*), "ShouldSendCompatibilityMouseEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel, evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureHelper::ProcessPointerCapture
// Il2CppName: ProcessPointerCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*, int)>(&UnityEngine::UIElements::PointerCaptureHelper::ProcessPointerCapture)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCaptureHelper*), "ProcessPointerCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel, pointerId});
  }
};
