// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem.XInput
namespace UnityEngine::InputSystem::XInput {
  // Forward declaring type: XInputSupport
  class XInputSupport;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::XInput::XInputSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XInput::XInputSupport*, "UnityEngine.InputSystem.XInput", "XInputSupport");
// Type namespace: UnityEngine.InputSystem.XInput
namespace UnityEngine::InputSystem::XInput {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.XInput.XInputSupport
  // [TokenAttribute] Offset: FFFFFFFF
  class XInputSupport : public ::Il2CppObject {
    public:
    // static public System.Void Initialize()
    // Offset: 0x1AA1824
    static void Initialize();
  }; // UnityEngine.InputSystem.XInput.XInputSupport
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::XInput::XInputSupport::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::XInput::XInputSupport::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XInput::XInputSupport*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
