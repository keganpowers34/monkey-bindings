// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Forward declaring type: TextToggleIsOnTransition
  class TextToggleIsOnTransition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::TextToggleIsOnTransition);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::TextToggleIsOnTransition*, "Photon.Pun.UtilityScripts", "TextToggleIsOnTransition");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.TextToggleIsOnTransition
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AF0EEC
  class TextToggleIsOnTransition : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::EventSystems::IPointerEnterHandler, public ::UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    public:
    // public UnityEngine.UI.Toggle toggle
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Toggle* toggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Text _text
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Text* text;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // public UnityEngine.Color NormalOnColor
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color NormalOnColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color NormalOffColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color NormalOffColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color HoverOnColor
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color HoverOnColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color HoverOffColor
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Color HoverOffColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean isHover
    // Size: 0x1
    // Offset: 0x68
    bool isHover;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerEnterHandler
    operator ::UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerExitHandler
    operator ::UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.UI.Toggle toggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn_toggle();
    // Get instance field reference: private UnityEngine.UI.Text _text
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn__text();
    // Get instance field reference: public UnityEngine.Color NormalOnColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_NormalOnColor();
    // Get instance field reference: public UnityEngine.Color NormalOffColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_NormalOffColor();
    // Get instance field reference: public UnityEngine.Color HoverOnColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_HoverOnColor();
    // Get instance field reference: public UnityEngine.Color HoverOffColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_HoverOffColor();
    // Get instance field reference: private System.Boolean isHover
    [[deprecated("Use field access instead!")]] bool& dyn_isHover();
    // public System.Void OnEnable()
    // Offset: 0x159CD84
    void OnEnable();
    // public System.Void OnDisable()
    // Offset: 0x159CEB8
    void OnDisable();
    // public System.Void OnValueChanged(System.Boolean isOn)
    // Offset: 0x159CE54
    void OnValueChanged(bool isOn);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x159CF5C
    void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x159CFD4
    void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x159D048
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextToggleIsOnTransition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::UtilityScripts::TextToggleIsOnTransition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextToggleIsOnTransition*, creationType>()));
    }
  }; // Photon.Pun.UtilityScripts.TextToggleIsOnTransition
  #pragma pack(pop)
  static check_size<sizeof(TextToggleIsOnTransition), 104 + sizeof(bool)> __Photon_Pun_UtilityScripts_TextToggleIsOnTransitionSizeCheck;
  static_assert(sizeof(TextToggleIsOnTransition) == 0x69);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TextToggleIsOnTransition::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::TextToggleIsOnTransition::*)()>(&Photon::Pun::UtilityScripts::TextToggleIsOnTransition::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TextToggleIsOnTransition*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TextToggleIsOnTransition::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::TextToggleIsOnTransition::*)()>(&Photon::Pun::UtilityScripts::TextToggleIsOnTransition::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TextToggleIsOnTransition*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TextToggleIsOnTransition::OnValueChanged
// Il2CppName: OnValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::TextToggleIsOnTransition::*)(bool)>(&Photon::Pun::UtilityScripts::TextToggleIsOnTransition::OnValueChanged)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TextToggleIsOnTransition*), "OnValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TextToggleIsOnTransition::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::TextToggleIsOnTransition::*)(::UnityEngine::EventSystems::PointerEventData*)>(&Photon::Pun::UtilityScripts::TextToggleIsOnTransition::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TextToggleIsOnTransition*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TextToggleIsOnTransition::OnPointerExit
// Il2CppName: OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::TextToggleIsOnTransition::*)(::UnityEngine::EventSystems::PointerEventData*)>(&Photon::Pun::UtilityScripts::TextToggleIsOnTransition::OnPointerExit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TextToggleIsOnTransition*), "OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TextToggleIsOnTransition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
