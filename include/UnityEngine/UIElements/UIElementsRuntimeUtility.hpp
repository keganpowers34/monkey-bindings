// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Profiling.ProfilerMarker
#include "Unity/Profiling/ProfilerMarker.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: EventDispatcher
  class EventDispatcher;
  // Forward declaring type: Panel
  class Panel;
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
  // Forward declaring type: UIElementsRuntimeUtility
  class UIElementsRuntimeUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsRuntimeUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsRuntimeUtility*, "UnityEngine.UIElements", "UIElementsRuntimeUtility");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIElementsRuntimeUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A9FB94
  class UIElementsRuntimeUtility : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.UIElements.EventDispatcher s_RuntimeDispatcher
    static ::UnityEngine::UIElements::EventDispatcher* _get_s_RuntimeDispatcher();
    // Set static field: static private UnityEngine.UIElements.EventDispatcher s_RuntimeDispatcher
    static void _set_s_RuntimeDispatcher(::UnityEngine::UIElements::EventDispatcher* value);
    // Get static field: static private System.Boolean s_RegisteredPlayerloopCallback
    static bool _get_s_RegisteredPlayerloopCallback();
    // Set static field: static private System.Boolean s_RegisteredPlayerloopCallback
    static void _set_s_RegisteredPlayerloopCallback(bool value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.UIElements.Panel> panelsIteration
    static ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* _get_panelsIteration();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.UIElements.Panel> panelsIteration
    static void _set_panelsIteration(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* value);
    // Get static field: static readonly System.String s_RepaintProfilerMarkerName
    static ::StringW _get_s_RepaintProfilerMarkerName();
    // Set static field: static readonly System.String s_RepaintProfilerMarkerName
    static void _set_s_RepaintProfilerMarkerName(::StringW value);
    // Get static field: static private readonly Unity.Profiling.ProfilerMarker s_RepaintProfilerMarker
    static ::Unity::Profiling::ProfilerMarker _get_s_RepaintProfilerMarker();
    // Set static field: static private readonly Unity.Profiling.ProfilerMarker s_RepaintProfilerMarker
    static void _set_s_RepaintProfilerMarker(::Unity::Profiling::ProfilerMarker value);
    // static public System.Void RepaintOverlayPanels()
    // Offset: 0xD50EE4
    static void RepaintOverlayPanels();
    // static private System.Void .cctor()
    // Offset: 0xD512EC
    static void _cctor();
  }; // UnityEngine.UIElements.UIElementsRuntimeUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIElementsRuntimeUtility::RepaintOverlayPanels
// Il2CppName: RepaintOverlayPanels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIElementsRuntimeUtility::RepaintOverlayPanels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIElementsRuntimeUtility*), "RepaintOverlayPanels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIElementsRuntimeUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIElementsRuntimeUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIElementsRuntimeUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
