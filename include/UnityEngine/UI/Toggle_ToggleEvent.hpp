// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Toggle
#include "UnityEngine/UI/Toggle.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Toggle::ToggleEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Toggle::ToggleEvent*, "UnityEngine.UI", "Toggle/ToggleEvent");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.Toggle/ToggleEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class Toggle::ToggleEvent : public ::UnityEngine::Events::UnityEvent_1<bool> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1AFE278
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Toggle::ToggleEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Toggle::ToggleEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Toggle::ToggleEvent*, creationType>()));
    }
  }; // UnityEngine.UI.Toggle/ToggleEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Toggle::ToggleEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
