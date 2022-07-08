// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.BaseInput
#include "UnityEngine/EventSystems/BaseInput.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem.UI
namespace UnityEngine::InputSystem::UI {
  // Forward declaring type: BaseInputOverride
  class BaseInputOverride;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::UI::BaseInputOverride);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::BaseInputOverride*, "UnityEngine.InputSystem.UI", "BaseInputOverride");
// Type namespace: UnityEngine.InputSystem.UI
namespace UnityEngine::InputSystem::UI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.UI.BaseInputOverride
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseInputOverride : public ::UnityEngine::EventSystems::BaseInput {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xABB070
    // private readonly System.String <compositionString>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW compositionString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly System.String <compositionString>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$compositionString$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0xC926C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseInputOverride* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::UI::BaseInputOverride::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseInputOverride*, creationType>()));
    }
    // public override System.String get_compositionString()
    // Offset: 0xC926BC
    // Implemented from: UnityEngine.EventSystems.BaseInput
    // Base method: System.String BaseInput::get_compositionString()
    ::StringW get_compositionString();
  }; // UnityEngine.InputSystem.UI.BaseInputOverride
  #pragma pack(pop)
  static check_size<sizeof(BaseInputOverride), 24 + sizeof(::StringW)> __UnityEngine_InputSystem_UI_BaseInputOverrideSizeCheck;
  static_assert(sizeof(BaseInputOverride) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::BaseInputOverride::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::BaseInputOverride::get_compositionString
// Il2CppName: get_compositionString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::UI::BaseInputOverride::*)()>(&UnityEngine::InputSystem::UI::BaseInputOverride::get_compositionString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::BaseInputOverride*), "get_compositionString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
