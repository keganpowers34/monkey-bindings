// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TerrainData
  class TerrainData;
  // Forward declaring type: RectInt
  struct RectInt;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // Forward declaring type: TerrainCallbacks
  class TerrainCallbacks;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks*, "UnityEngine.Experimental.TerrainAPI", "TerrainCallbacks");
// Type namespace: UnityEngine.Experimental.TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.TerrainAPI.TerrainCallbacks
  // [TokenAttribute] Offset: FFFFFFFF
  class TerrainCallbacks : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback
    class HeightmapChangedCallback;
    // Nested type: ::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback
    class TextureChangedCallback;
    // [DebuggerBrowsableAttribute] Offset: 0xA9CEA0
    // [CompilerGeneratedAttribute] Offset: 0xA9CEA0
    // Get static field: static private UnityEngine.Experimental.TerrainAPI.TerrainCallbacks/HeightmapChangedCallback heightmapChanged
    static ::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback* _get_heightmapChanged();
    // Set static field: static private UnityEngine.Experimental.TerrainAPI.TerrainCallbacks/HeightmapChangedCallback heightmapChanged
    static void _set_heightmapChanged(::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::HeightmapChangedCallback* value);
    // [DebuggerBrowsableAttribute] Offset: 0xA9CEDC
    // [CompilerGeneratedAttribute] Offset: 0xA9CEDC
    // Get static field: static private UnityEngine.Experimental.TerrainAPI.TerrainCallbacks/TextureChangedCallback textureChanged
    static ::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback* _get_textureChanged();
    // Set static field: static private UnityEngine.Experimental.TerrainAPI.TerrainCallbacks/TextureChangedCallback textureChanged
    static void _set_textureChanged(::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback* value);
    // static System.Void InvokeHeightmapChangedCallback(UnityEngine.TerrainData terrainData, UnityEngine.RectInt heightRegion, System.Boolean synched)
    // Offset: 0x1B3D9D4
    static void InvokeHeightmapChangedCallback(::UnityEngine::TerrainData* terrainData, ::UnityEngine::RectInt heightRegion, bool synched);
    // static System.Void InvokeTextureChangedCallback(UnityEngine.TerrainData terrainData, System.String textureName, UnityEngine.RectInt texelRegion, System.Boolean synched)
    // Offset: 0x1B3DFA4
    static void InvokeTextureChangedCallback(::UnityEngine::TerrainData* terrainData, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched);
  }; // UnityEngine.Experimental.TerrainAPI.TerrainCallbacks
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::InvokeHeightmapChangedCallback
// Il2CppName: InvokeHeightmapChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TerrainData*, ::UnityEngine::RectInt, bool)>(&UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::InvokeHeightmapChangedCallback)> {
  static const MethodInfo* get() {
    static auto* terrainData = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData")->byval_arg;
    static auto* heightRegion = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectInt")->byval_arg;
    static auto* synched = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainCallbacks*), "InvokeHeightmapChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terrainData, heightRegion, synched});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::InvokeTextureChangedCallback
// Il2CppName: InvokeTextureChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TerrainData*, ::StringW, ::UnityEngine::RectInt, bool)>(&UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::InvokeTextureChangedCallback)> {
  static const MethodInfo* get() {
    static auto* terrainData = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData")->byval_arg;
    static auto* textureName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* texelRegion = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectInt")->byval_arg;
    static auto* synched = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainCallbacks*), "InvokeTextureChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terrainData, textureName, texelRegion, synched});
  }
};
