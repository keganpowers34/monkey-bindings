// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem.OnScreen
namespace UnityEngine::InputSystem::OnScreen {
  // Forward declaring type: OnScreenSupport
  class OnScreenSupport;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::OnScreen::OnScreenSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::OnScreenSupport*, "UnityEngine.InputSystem.OnScreen", "OnScreenSupport");
// Type namespace: UnityEngine.InputSystem.OnScreen
namespace UnityEngine::InputSystem::OnScreen {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.OnScreen.OnScreenSupport
  // [TokenAttribute] Offset: FFFFFFFF
  class OnScreenSupport : public ::Il2CppObject {
    public:
    // static public System.Void Initialize()
    // Offset: 0xC86724
    static void Initialize();
  }; // UnityEngine.InputSystem.OnScreen.OnScreenSupport
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::OnScreen::OnScreenSupport::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::OnScreen::OnScreenSupport::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::OnScreen::OnScreenSupport*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
