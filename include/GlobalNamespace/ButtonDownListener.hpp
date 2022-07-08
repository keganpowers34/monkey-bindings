// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerDownHandler
#include "UnityEngine/EventSystems/IPointerDownHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ButtonDownListener
  class ButtonDownListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ButtonDownListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ButtonDownListener*, "", "ButtonDownListener");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ButtonDownListener
  // [TokenAttribute] Offset: FFFFFFFF
  class ButtonDownListener : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::EventSystems::IPointerDownHandler*/ {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAF302C
    // private System.Action onButtonDown
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* onButtonDown;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerDownHandler
    operator ::UnityEngine::EventSystems::IPointerDownHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action onButtonDown
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_onButtonDown();
    // public System.Void add_onButtonDown(System.Action value)
    // Offset: 0x1B5FAD0
    void add_onButtonDown(::System::Action* value);
    // public System.Void remove_onButtonDown(System.Action value)
    // Offset: 0x1B5FB74
    void remove_onButtonDown(::System::Action* value);
    // public System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1B5FC18
    void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x1B5FC2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonDownListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ButtonDownListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonDownListener*, creationType>()));
    }
  }; // ButtonDownListener
  #pragma pack(pop)
  static check_size<sizeof(ButtonDownListener), 24 + sizeof(::System::Action*)> __GlobalNamespace_ButtonDownListenerSizeCheck;
  static_assert(sizeof(ButtonDownListener) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ButtonDownListener::add_onButtonDown
// Il2CppName: add_onButtonDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ButtonDownListener::*)(::System::Action*)>(&GlobalNamespace::ButtonDownListener::add_onButtonDown)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ButtonDownListener*), "add_onButtonDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ButtonDownListener::remove_onButtonDown
// Il2CppName: remove_onButtonDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ButtonDownListener::*)(::System::Action*)>(&GlobalNamespace::ButtonDownListener::remove_onButtonDown)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ButtonDownListener*), "remove_onButtonDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ButtonDownListener::OnPointerDown
// Il2CppName: OnPointerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ButtonDownListener::*)(::UnityEngine::EventSystems::PointerEventData*)>(&GlobalNamespace::ButtonDownListener::OnPointerDown)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ButtonDownListener*), "OnPointerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ButtonDownListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
