// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.UI.ICanvasElement
#include "UnityEngine/UI/ICanvasElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Forward declaring type: ToggleGroup
  class ToggleGroup;
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Toggle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Toggle*, "UnityEngine.UI", "Toggle");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x111
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Toggle
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AB11C8
  // [RequireComponent] Offset: AB11C8
  class Toggle : public ::UnityEngine::UI::Selectable/*, public ::UnityEngine::EventSystems::IPointerClickHandler, public ::UnityEngine::EventSystems::ISubmitHandler, public ::UnityEngine::UI::ICanvasElement*/ {
    public:
    // Nested type: ::UnityEngine::UI::Toggle::ToggleTransition
    struct ToggleTransition;
    // Nested type: ::UnityEngine::UI::Toggle::ToggleEvent
    class ToggleEvent;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.Toggle/ToggleTransition
    // [TokenAttribute] Offset: FFFFFFFF
    struct ToggleTransition/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ToggleTransition
      constexpr ToggleTransition(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.Toggle/ToggleTransition None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.UI.Toggle/ToggleTransition None
      static ::UnityEngine::UI::Toggle::ToggleTransition _get_None();
      // Set static field: static public UnityEngine.UI.Toggle/ToggleTransition None
      static void _set_None(::UnityEngine::UI::Toggle::ToggleTransition value);
      // static field const value: static public UnityEngine.UI.Toggle/ToggleTransition Fade
      static constexpr const int Fade = 1;
      // Get static field: static public UnityEngine.UI.Toggle/ToggleTransition Fade
      static ::UnityEngine::UI::Toggle::ToggleTransition _get_Fade();
      // Set static field: static public UnityEngine.UI.Toggle/ToggleTransition Fade
      static void _set_Fade(::UnityEngine::UI::Toggle::ToggleTransition value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.UI.Toggle/ToggleTransition
    #pragma pack(pop)
    static check_size<sizeof(Toggle::ToggleTransition), 0 + sizeof(int)> __UnityEngine_UI_Toggle_ToggleTransitionSizeCheck;
    static_assert(sizeof(Toggle::ToggleTransition) == 0x4);
    public:
    // public UnityEngine.UI.Toggle/ToggleTransition toggleTransition
    // Size: 0x4
    // Offset: 0xF0
    ::UnityEngine::UI::Toggle::ToggleTransition toggleTransition;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle::ToggleTransition) == 0x4);
    // Padding between fields: toggleTransition and: graphic
    char __padding0[0x4] = {};
    // public UnityEngine.UI.Graphic graphic
    // Size: 0x8
    // Offset: 0xF8
    ::UnityEngine::UI::Graphic* graphic;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Graphic*) == 0x8);
    // private UnityEngine.UI.ToggleGroup m_Group
    // Size: 0x8
    // Offset: 0x100
    ::UnityEngine::UI::ToggleGroup* m_Group;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::ToggleGroup*) == 0x8);
    // public UnityEngine.UI.Toggle/ToggleEvent onValueChanged
    // Size: 0x8
    // Offset: 0x108
    ::UnityEngine::UI::Toggle::ToggleEvent* onValueChanged;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle::ToggleEvent*) == 0x8);
    // [TooltipAttribute] Offset: 0xAB3254
    // private System.Boolean m_IsOn
    // Size: 0x1
    // Offset: 0x110
    bool m_IsOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerClickHandler
    operator ::UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::ISubmitHandler
    operator ::UnityEngine::EventSystems::ISubmitHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::ISubmitHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::UI::ICanvasElement
    operator ::UnityEngine::UI::ICanvasElement() noexcept {
      return *reinterpret_cast<::UnityEngine::UI::ICanvasElement*>(this);
    }
    // Get instance field reference: public UnityEngine.UI.Toggle/ToggleTransition toggleTransition
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle::ToggleTransition& dyn_toggleTransition();
    // Get instance field reference: public UnityEngine.UI.Graphic graphic
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Graphic*& dyn_graphic();
    // Get instance field reference: private UnityEngine.UI.ToggleGroup m_Group
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::ToggleGroup*& dyn_m_Group();
    // Get instance field reference: public UnityEngine.UI.Toggle/ToggleEvent onValueChanged
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle::ToggleEvent*& dyn_onValueChanged();
    // Get instance field reference: private System.Boolean m_IsOn
    [[deprecated("Use field access instead!")]] bool& dyn_m_IsOn();
    // public UnityEngine.UI.ToggleGroup get_group()
    // Offset: 0x1AFDF7C
    ::UnityEngine::UI::ToggleGroup* get_group();
    // public System.Void set_group(UnityEngine.UI.ToggleGroup value)
    // Offset: 0x1AFDF84
    void set_group(::UnityEngine::UI::ToggleGroup* value);
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x1AFE2C8
    void Rebuild(::UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0x1AFE2CC
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x1AFE2D0
    void GraphicUpdateComplete();
    // private System.Void SetToggleGroup(UnityEngine.UI.ToggleGroup newGroup, System.Boolean setMemberValue)
    // Offset: 0x1AFDFB0
    void SetToggleGroup(::UnityEngine::UI::ToggleGroup* newGroup, bool setMemberValue);
    // public System.Boolean get_isOn()
    // Offset: 0x1AFE950
    bool get_isOn();
    // public System.Void set_isOn(System.Boolean value)
    // Offset: 0x1AFE958
    void set_isOn(bool value);
    // public System.Void SetIsOnWithoutNotify(System.Boolean value)
    // Offset: 0x1AFE964
    void SetIsOnWithoutNotify(bool value);
    // private System.Void Set(System.Boolean value, System.Boolean sendCallback)
    // Offset: 0x1AFE590
    void Set(bool value, bool sendCallback);
    // private System.Void PlayEffect(System.Boolean instant)
    // Offset: 0x1AFE118
    void PlayEffect(bool instant);
    // private System.Void InternalToggle()
    // Offset: 0x1AFEAA8
    void InternalToggle();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1AFEB0C
    void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1AFEB2C
    void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x1AFEB30
    ::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
    // protected System.Void .ctor()
    // Offset: 0x1AFE1EC
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Toggle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Toggle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Toggle*, creationType>()));
    }
    // protected override System.Void OnDestroy()
    // Offset: 0x1AFE2D4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.Void OnEnable()
    // Offset: 0x1AFE418
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1AFE454
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x1AFE484
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void Start()
    // Offset: 0x1AFEAA0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
  }; // UnityEngine.UI.Toggle
  #pragma pack(pop)
  static check_size<sizeof(Toggle), 272 + sizeof(bool)> __UnityEngine_UI_ToggleSizeCheck;
  static_assert(sizeof(Toggle) == 0x111);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Toggle::ToggleTransition, "UnityEngine.UI", "Toggle/ToggleTransition");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::get_group
// Il2CppName: get_group
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::ToggleGroup* (UnityEngine::UI::Toggle::*)()>(&UnityEngine::UI::Toggle::get_group)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "get_group", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::set_group
// Il2CppName: set_group
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)(::UnityEngine::UI::ToggleGroup*)>(&UnityEngine::UI::Toggle::set_group)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ToggleGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "set_group", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::Rebuild
// Il2CppName: Rebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)(::UnityEngine::UI::CanvasUpdate)>(&UnityEngine::UI::Toggle::Rebuild)> {
  static const MethodInfo* get() {
    static auto* executing = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "CanvasUpdate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "Rebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{executing});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::LayoutComplete
// Il2CppName: LayoutComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)()>(&UnityEngine::UI::Toggle::LayoutComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "LayoutComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::GraphicUpdateComplete
// Il2CppName: GraphicUpdateComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)()>(&UnityEngine::UI::Toggle::GraphicUpdateComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "GraphicUpdateComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::SetToggleGroup
// Il2CppName: SetToggleGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)(::UnityEngine::UI::ToggleGroup*, bool)>(&UnityEngine::UI::Toggle::SetToggleGroup)> {
  static const MethodInfo* get() {
    static auto* newGroup = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ToggleGroup")->byval_arg;
    static auto* setMemberValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "SetToggleGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newGroup, setMemberValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::get_isOn
// Il2CppName: get_isOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Toggle::*)()>(&UnityEngine::UI::Toggle::get_isOn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "get_isOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::set_isOn
// Il2CppName: set_isOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)(bool)>(&UnityEngine::UI::Toggle::set_isOn)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "set_isOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::SetIsOnWithoutNotify
// Il2CppName: SetIsOnWithoutNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)(bool)>(&UnityEngine::UI::Toggle::SetIsOnWithoutNotify)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "SetIsOnWithoutNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)(bool, bool)>(&UnityEngine::UI::Toggle::Set)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* sendCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, sendCallback});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::PlayEffect
// Il2CppName: PlayEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)(bool)>(&UnityEngine::UI::Toggle::PlayEffect)> {
  static const MethodInfo* get() {
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "PlayEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instant});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::InternalToggle
// Il2CppName: InternalToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)()>(&UnityEngine::UI::Toggle::InternalToggle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "InternalToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::OnPointerClick
// Il2CppName: OnPointerClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::UI::Toggle::OnPointerClick)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "OnPointerClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::OnSubmit
// Il2CppName: OnSubmit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)(::UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::UI::Toggle::OnSubmit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "OnSubmit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::UnityEngine_UI_ICanvasElement_get_transform
// Il2CppName: UnityEngine.UI.ICanvasElement.get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::UI::Toggle::*)()>(&UnityEngine::UI::Toggle::UnityEngine_UI_ICanvasElement_get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "UnityEngine.UI.ICanvasElement.get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)()>(&UnityEngine::UI::Toggle::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)()>(&UnityEngine::UI::Toggle::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)()>(&UnityEngine::UI::Toggle::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::OnDidApplyAnimationProperties
// Il2CppName: OnDidApplyAnimationProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)()>(&UnityEngine::UI::Toggle::OnDidApplyAnimationProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "OnDidApplyAnimationProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Toggle::*)()>(&UnityEngine::UI::Toggle::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Toggle*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
