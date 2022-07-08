// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputInteractionContext
  struct InputInteractionContext;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: IInputInteraction
  class IInputInteraction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::IInputInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::IInputInteraction*, "UnityEngine.InputSystem", "IInputInteraction");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.IInputInteraction
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class IInputInteraction {
    public:
    // public System.Void Process(ref UnityEngine.InputSystem.InputInteractionContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context);
    // public System.Void Reset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Reset();
  }; // UnityEngine.InputSystem.IInputInteraction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::IInputInteraction::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::IInputInteraction::*)(ByRef<::UnityEngine::InputSystem::InputInteractionContext>)>(&UnityEngine::InputSystem::IInputInteraction::Process)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputInteractionContext")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::IInputInteraction*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::IInputInteraction::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::IInputInteraction::*)()>(&UnityEngine::InputSystem::IInputInteraction::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::IInputInteraction*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
