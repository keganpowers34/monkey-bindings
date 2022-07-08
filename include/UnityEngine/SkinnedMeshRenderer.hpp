// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Bounds
  struct Bounds;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SkinnedMeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SkinnedMeshRenderer*, "UnityEngine", "SkinnedMeshRenderer");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SkinnedMeshRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A693D0
  class SkinnedMeshRenderer : public ::UnityEngine::Renderer {
    public:
    // public System.Boolean get_updateWhenOffscreen()
    // Offset: 0x15BA940
    bool get_updateWhenOffscreen();
    // public System.Void set_updateWhenOffscreen(System.Boolean value)
    // Offset: 0x15BA980
    void set_updateWhenOffscreen(bool value);
    // public UnityEngine.Transform[] get_bones()
    // Offset: 0x15BA9D0
    ::ArrayW<::UnityEngine::Transform*> get_bones();
    // public System.Void set_bones(UnityEngine.Transform[] value)
    // Offset: 0x15BAA10
    void set_bones(::ArrayW<::UnityEngine::Transform*> value);
    // public UnityEngine.Mesh get_sharedMesh()
    // Offset: 0x15BAA60
    ::UnityEngine::Mesh* get_sharedMesh();
    // public System.Void set_sharedMesh(UnityEngine.Mesh value)
    // Offset: 0x15BAAA0
    void set_sharedMesh(::UnityEngine::Mesh* value);
    // private System.Void SetLocalAABB(UnityEngine.Bounds b)
    // Offset: 0x15BAAF0
    void SetLocalAABB(::UnityEngine::Bounds b);
    // public System.Void set_localBounds(UnityEngine.Bounds value)
    // Offset: 0x15BAB90
    void set_localBounds(::UnityEngine::Bounds value);
    // private System.Void SetLocalAABB_Injected(ref UnityEngine.Bounds b)
    // Offset: 0x15BAB40
    void SetLocalAABB_Injected(ByRef<::UnityEngine::Bounds> b);
  }; // UnityEngine.SkinnedMeshRenderer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_updateWhenOffscreen
// Il2CppName: get_updateWhenOffscreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_updateWhenOffscreen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_updateWhenOffscreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_updateWhenOffscreen
// Il2CppName: set_updateWhenOffscreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(bool)>(&UnityEngine::SkinnedMeshRenderer::set_updateWhenOffscreen)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_updateWhenOffscreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_bones
// Il2CppName: get_bones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*> (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_bones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_bones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_bones
// Il2CppName: set_bones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(::ArrayW<::UnityEngine::Transform*>)>(&UnityEngine::SkinnedMeshRenderer::set_bones)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_bones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_sharedMesh
// Il2CppName: get_sharedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_sharedMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_sharedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_sharedMesh
// Il2CppName: set_sharedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::Mesh*)>(&UnityEngine::SkinnedMeshRenderer::set_sharedMesh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_sharedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::SetLocalAABB
// Il2CppName: SetLocalAABB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::Bounds)>(&UnityEngine::SkinnedMeshRenderer::SetLocalAABB)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "SetLocalAABB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_localBounds
// Il2CppName: set_localBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(::UnityEngine::Bounds)>(&UnityEngine::SkinnedMeshRenderer::set_localBounds)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_localBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::SetLocalAABB_Injected
// Il2CppName: SetLocalAABB_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(ByRef<::UnityEngine::Bounds>)>(&UnityEngine::SkinnedMeshRenderer::SetLocalAABB_Injected)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "SetLocalAABB_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
