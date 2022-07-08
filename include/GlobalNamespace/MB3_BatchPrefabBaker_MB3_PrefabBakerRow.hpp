// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MB3_BatchPrefabBaker
#include "GlobalNamespace/MB3_BatchPrefabBaker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB3_BatchPrefabBaker::MB3_PrefabBakerRow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB3_BatchPrefabBaker::MB3_PrefabBakerRow*, "", "MB3_BatchPrefabBaker/MB3_PrefabBakerRow");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MB3_BatchPrefabBaker/MB3_PrefabBakerRow
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_BatchPrefabBaker::MB3_PrefabBakerRow : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.GameObject sourcePrefab
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* sourcePrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject resultPrefab
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* resultPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.GameObject sourcePrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_sourcePrefab();
    // Get instance field reference: public UnityEngine.GameObject resultPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_resultPrefab();
    // public System.Void .ctor()
    // Offset: 0x1134A38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_BatchPrefabBaker::MB3_PrefabBakerRow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB3_BatchPrefabBaker::MB3_PrefabBakerRow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_BatchPrefabBaker::MB3_PrefabBakerRow*, creationType>()));
    }
  }; // MB3_BatchPrefabBaker/MB3_PrefabBakerRow
  #pragma pack(pop)
  static check_size<sizeof(MB3_BatchPrefabBaker::MB3_PrefabBakerRow), 24 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_MB3_BatchPrefabBaker_MB3_PrefabBakerRowSizeCheck;
  static_assert(sizeof(MB3_BatchPrefabBaker::MB3_PrefabBakerRow) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB3_BatchPrefabBaker::MB3_PrefabBakerRow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
