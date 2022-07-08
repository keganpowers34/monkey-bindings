// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: Cinemachine.Utility
namespace Cinemachine::Utility {
  // Forward declaring type: UnityRectExtensions
  class UnityRectExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::Utility::UnityRectExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::Utility::UnityRectExtensions*, "Cinemachine.Utility", "UnityRectExtensions");
// Type namespace: Cinemachine.Utility
namespace Cinemachine::Utility {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.Utility.UnityRectExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class UnityRectExtensions : public ::Il2CppObject {
    public:
    // static public UnityEngine.Rect Inflated(UnityEngine.Rect r, UnityEngine.Vector2 delta)
    // Offset: 0x1AE8A38
    static ::UnityEngine::Rect Inflated(::UnityEngine::Rect r, ::UnityEngine::Vector2 delta);
  }; // Cinemachine.Utility.UnityRectExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::Utility::UnityRectExtensions::Inflated
// Il2CppName: Inflated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Vector2)>(&Cinemachine::Utility::UnityRectExtensions::Inflated)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* delta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::Utility::UnityRectExtensions*), "Inflated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, delta});
  }
};
