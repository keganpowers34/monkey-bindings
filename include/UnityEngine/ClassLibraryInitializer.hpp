// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ClassLibraryInitializer
  class ClassLibraryInitializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ClassLibraryInitializer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ClassLibraryInitializer*, "UnityEngine", "ClassLibraryInitializer");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ClassLibraryInitializer
  // [TokenAttribute] Offset: FFFFFFFF
  class ClassLibraryInitializer : public ::Il2CppObject {
    public:
    // static private System.Void Init()
    // Offset: 0x15A59CC
    static void Init();
  }; // UnityEngine.ClassLibraryInitializer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ClassLibraryInitializer::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ClassLibraryInitializer::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ClassLibraryInitializer*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
