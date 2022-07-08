// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: IMaterialModifier
  class IMaterialModifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::IMaterialModifier);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IMaterialModifier*, "UnityEngine.UI", "IMaterialModifier");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.IMaterialModifier
  // [TokenAttribute] Offset: FFFFFFFF
  class IMaterialModifier {
    public:
    // public UnityEngine.Material GetModifiedMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial);
  }; // UnityEngine.UI.IMaterialModifier
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::IMaterialModifier::GetModifiedMaterial
// Il2CppName: GetModifiedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (UnityEngine::UI::IMaterialModifier::*)(::UnityEngine::Material*)>(&UnityEngine::UI::IMaterialModifier::GetModifiedMaterial)> {
  static const MethodInfo* get() {
    static auto* baseMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::IMaterialModifier*), "GetModifiedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseMaterial});
  }
};
