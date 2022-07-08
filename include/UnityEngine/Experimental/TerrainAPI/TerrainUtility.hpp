// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // Forward declaring type: TerrainUtility
  class TerrainUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::TerrainAPI::TerrainUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::TerrainAPI::TerrainUtility*, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility");
// Type namespace: UnityEngine.Experimental.TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.TerrainAPI.TerrainUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class TerrainUtility : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap
    class TerrainMap;
    // Nested type: ::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainGroups
    class TerrainGroups;
    // Nested type: ::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: ::UnityEngine::Experimental::TerrainAPI::TerrainUtility::$$c__DisplayClass4_1
    class $$c__DisplayClass4_1;
    // static System.Boolean HasValidTerrains()
    // Offset: 0x1B3E710
    static bool HasValidTerrains();
    // static System.Void ClearConnectivity()
    // Offset: 0x1B3E7B8
    static void ClearConnectivity();
    // static UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainGroups CollectTerrains(System.Boolean onlyAutoConnectedTerrains)
    // Offset: 0x1B3E8FC
    static ::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainGroups* CollectTerrains(bool onlyAutoConnectedTerrains);
    // static public System.Void AutoConnect()
    // Offset: 0x1B3EF34
    static void AutoConnect();
  }; // UnityEngine.Experimental.TerrainAPI.TerrainUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::HasValidTerrains
// Il2CppName: HasValidTerrains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::HasValidTerrains)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility*), "HasValidTerrains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::ClearConnectivity
// Il2CppName: ClearConnectivity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::ClearConnectivity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility*), "ClearConnectivity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::CollectTerrains
// Il2CppName: CollectTerrains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainGroups* (*)(bool)>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::CollectTerrains)> {
  static const MethodInfo* get() {
    static auto* onlyAutoConnectedTerrains = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility*), "CollectTerrains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onlyAutoConnectedTerrains});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::AutoConnect
// Il2CppName: AutoConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::AutoConnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility*), "AutoConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
