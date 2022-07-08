// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ShadowCastingMode
  struct ShadowCastingMode;
  // Forward declaring type: LightProbeUsage
  struct LightProbeUsage;
  // Forward declaring type: ReflectionProbeUsage
  struct ReflectionProbeUsage;
}
// Forward declaring namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Forward declaring type: LightmapType
  struct LightmapType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Renderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Renderer*, "UnityEngine", "Renderer");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Renderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: A68EE0
  // [NativeHeaderAttribute] Offset: A68EE0
  // [UsedByNativeCodeAttribute] Offset: A68EE0
  // [NativeHeaderAttribute] Offset: A68EE0
  class Renderer : public ::UnityEngine::Component {
    public:
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x15B4394
    ::UnityEngine::Bounds get_bounds();
    // private System.Void SetStaticLightmapST(UnityEngine.Vector4 st)
    // Offset: 0x15B4450
    void SetStaticLightmapST(::UnityEngine::Vector4 st);
    // private UnityEngine.Material GetMaterial()
    // Offset: 0x15B44F8
    ::UnityEngine::Material* GetMaterial();
    // private UnityEngine.Material GetSharedMaterial()
    // Offset: 0x15B4538
    ::UnityEngine::Material* GetSharedMaterial();
    // private System.Void SetMaterial(UnityEngine.Material m)
    // Offset: 0x15B4578
    void SetMaterial(::UnityEngine::Material* m);
    // private UnityEngine.Material[] GetMaterialArray()
    // Offset: 0x15B45C8
    ::ArrayW<::UnityEngine::Material*> GetMaterialArray();
    // private System.Void CopyMaterialArray(out UnityEngine.Material[] m)
    // Offset: 0x15B4608
    void CopyMaterialArray(ByRef<::ArrayW<::UnityEngine::Material*>> m);
    // private System.Void CopySharedMaterialArray(out UnityEngine.Material[] m)
    // Offset: 0x15B4658
    void CopySharedMaterialArray(ByRef<::ArrayW<::UnityEngine::Material*>> m);
    // private System.Void SetMaterialArray(UnityEngine.Material[] m)
    // Offset: 0x15B46A8
    void SetMaterialArray(::ArrayW<::UnityEngine::Material*> m);
    // System.Void Internal_SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x15B46F8
    void Internal_SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);
    // System.Void Internal_GetPropertyBlock(UnityEngine.MaterialPropertyBlock dest)
    // Offset: 0x15B4748
    void Internal_GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* dest);
    // public System.Void SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x15B4798
    void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);
    // public System.Void GetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x15B47E8
    void GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);
    // public System.Boolean get_enabled()
    // Offset: 0x15B4838
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x15B4878
    void set_enabled(bool value);
    // public System.Void set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode value)
    // Offset: 0x15B48C8
    void set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode value);
    // public System.Void set_receiveShadows(System.Boolean value)
    // Offset: 0x15B4918
    void set_receiveShadows(bool value);
    // public System.Void set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage value)
    // Offset: 0x15B4968
    void set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage value);
    // public System.Void set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage value)
    // Offset: 0x15B49B8
    void set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage value);
    // public System.Int32 get_sortingLayerID()
    // Offset: 0x15B4A08
    int get_sortingLayerID();
    // public System.Int32 get_sortingOrder()
    // Offset: 0x15B4A48
    int get_sortingOrder();
    // public System.Void set_sortingOrder(System.Int32 value)
    // Offset: 0x15B4A88
    void set_sortingOrder(int value);
    // public System.Void set_allowOcclusionWhenDynamic(System.Boolean value)
    // Offset: 0x15B4AD8
    void set_allowOcclusionWhenDynamic(bool value);
    // public System.Boolean get_isPartOfStaticBatch()
    // Offset: 0x15B4B28
    bool get_isPartOfStaticBatch();
    // public UnityEngine.Matrix4x4 get_worldToLocalMatrix()
    // Offset: 0x15B4B68
    ::UnityEngine::Matrix4x4 get_worldToLocalMatrix();
    // private System.Int32 GetLightmapIndex(UnityEngineInternal.LightmapType lt)
    // Offset: 0x15B4C30
    int GetLightmapIndex(::UnityEngineInternal::LightmapType lt);
    // private System.Void SetLightmapIndex(System.Int32 index, UnityEngineInternal.LightmapType lt)
    // Offset: 0x15B4C80
    void SetLightmapIndex(int index, ::UnityEngineInternal::LightmapType lt);
    // private UnityEngine.Vector4 GetLightmapST(UnityEngineInternal.LightmapType lt)
    // Offset: 0x15B4CD8
    ::UnityEngine::Vector4 GetLightmapST(::UnityEngineInternal::LightmapType lt);
    // public System.Int32 get_lightmapIndex()
    // Offset: 0x15B4D9C
    int get_lightmapIndex();
    // public System.Void set_lightmapIndex(System.Int32 value)
    // Offset: 0x15B4DE0
    void set_lightmapIndex(int value);
    // public UnityEngine.Vector4 get_lightmapScaleOffset()
    // Offset: 0x15B4E34
    ::UnityEngine::Vector4 get_lightmapScaleOffset();
    // public System.Void set_lightmapScaleOffset(UnityEngine.Vector4 value)
    // Offset: 0x15B4E3C
    void set_lightmapScaleOffset(::UnityEngine::Vector4 value);
    // private System.Int32 GetMaterialCount()
    // Offset: 0x15B4E40
    int GetMaterialCount();
    // private UnityEngine.Material[] GetSharedMaterialArray()
    // Offset: 0x15B4E80
    ::ArrayW<::UnityEngine::Material*> GetSharedMaterialArray();
    // public UnityEngine.Material[] get_materials()
    // Offset: 0x15B4EC0
    ::ArrayW<::UnityEngine::Material*> get_materials();
    // public System.Void set_materials(UnityEngine.Material[] value)
    // Offset: 0x15B4F00
    void set_materials(::ArrayW<::UnityEngine::Material*> value);
    // public UnityEngine.Material get_material()
    // Offset: 0x15B4F50
    ::UnityEngine::Material* get_material();
    // public System.Void set_material(UnityEngine.Material value)
    // Offset: 0x15B4F90
    void set_material(::UnityEngine::Material* value);
    // public UnityEngine.Material get_sharedMaterial()
    // Offset: 0x15B4FE0
    ::UnityEngine::Material* get_sharedMaterial();
    // public System.Void set_sharedMaterial(UnityEngine.Material value)
    // Offset: 0x15B5020
    void set_sharedMaterial(::UnityEngine::Material* value);
    // public UnityEngine.Material[] get_sharedMaterials()
    // Offset: 0x15B5070
    ::ArrayW<::UnityEngine::Material*> get_sharedMaterials();
    // public System.Void set_sharedMaterials(UnityEngine.Material[] value)
    // Offset: 0x15B50B0
    void set_sharedMaterials(::ArrayW<::UnityEngine::Material*> value);
    // public System.Void GetMaterials(System.Collections.Generic.List`1<UnityEngine.Material> m)
    // Offset: 0x15B5100
    void GetMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* m);
    // public System.Void GetSharedMaterials(System.Collections.Generic.List`1<UnityEngine.Material> m)
    // Offset: 0x15B5218
    void GetSharedMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* m);
    // private System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x15B4400
    void get_bounds_Injected(ByRef<::UnityEngine::Bounds> ret);
    // private System.Void SetStaticLightmapST_Injected(ref UnityEngine.Vector4 st)
    // Offset: 0x15B44A8
    void SetStaticLightmapST_Injected(ByRef<::UnityEngine::Vector4> st);
    // private System.Void get_worldToLocalMatrix_Injected(out UnityEngine.Matrix4x4 ret)
    // Offset: 0x15B4BE0
    void get_worldToLocalMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);
    // private System.Void GetLightmapST_Injected(UnityEngineInternal.LightmapType lt, out UnityEngine.Vector4 ret)
    // Offset: 0x15B4D44
    void GetLightmapST_Injected(::UnityEngineInternal::LightmapType lt, ByRef<::UnityEngine::Vector4> ret);
  }; // UnityEngine.Renderer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Renderer::get_bounds
// Il2CppName: get_bounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_bounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_bounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetStaticLightmapST
// Il2CppName: SetStaticLightmapST
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Vector4)>(&UnityEngine::Renderer::SetStaticLightmapST)> {
  static const MethodInfo* get() {
    static auto* st = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetStaticLightmapST", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{st});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetMaterial
// Il2CppName: GetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetSharedMaterial
// Il2CppName: GetSharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetSharedMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetSharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetMaterial
// Il2CppName: SetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Material*)>(&UnityEngine::Renderer::SetMaterial)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetMaterialArray
// Il2CppName: GetMaterialArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetMaterialArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetMaterialArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::CopyMaterialArray
// Il2CppName: CopyMaterialArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(ByRef<::ArrayW<::UnityEngine::Material*>>)>(&UnityEngine::Renderer::CopyMaterialArray)> {
  static const MethodInfo* get() {
    static auto* m = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "CopyMaterialArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::CopySharedMaterialArray
// Il2CppName: CopySharedMaterialArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(ByRef<::ArrayW<::UnityEngine::Material*>>)>(&UnityEngine::Renderer::CopySharedMaterialArray)> {
  static const MethodInfo* get() {
    static auto* m = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "CopySharedMaterialArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetMaterialArray
// Il2CppName: SetMaterialArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::ArrayW<::UnityEngine::Material*>)>(&UnityEngine::Renderer::SetMaterialArray)> {
  static const MethodInfo* get() {
    static auto* m = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetMaterialArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::Internal_SetPropertyBlock
// Il2CppName: Internal_SetPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(&UnityEngine::Renderer::Internal_SetPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* properties = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "Internal_SetPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{properties});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::Internal_GetPropertyBlock
// Il2CppName: Internal_GetPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(&UnityEngine::Renderer::Internal_GetPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "Internal_GetPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetPropertyBlock
// Il2CppName: SetPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(&UnityEngine::Renderer::SetPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* properties = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{properties});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetPropertyBlock
// Il2CppName: GetPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(&UnityEngine::Renderer::GetPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* properties = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{properties});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_enabled
// Il2CppName: get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(bool)>(&UnityEngine::Renderer::set_enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_shadowCastingMode
// Il2CppName: set_shadowCastingMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Rendering::ShadowCastingMode)>(&UnityEngine::Renderer::set_shadowCastingMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShadowCastingMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_shadowCastingMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_receiveShadows
// Il2CppName: set_receiveShadows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(bool)>(&UnityEngine::Renderer::set_receiveShadows)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_receiveShadows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_lightProbeUsage
// Il2CppName: set_lightProbeUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Rendering::LightProbeUsage)>(&UnityEngine::Renderer::set_lightProbeUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "LightProbeUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_lightProbeUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_reflectionProbeUsage
// Il2CppName: set_reflectionProbeUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Rendering::ReflectionProbeUsage)>(&UnityEngine::Renderer::set_reflectionProbeUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ReflectionProbeUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_reflectionProbeUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_sortingLayerID
// Il2CppName: get_sortingLayerID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_sortingLayerID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_sortingLayerID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_sortingOrder
// Il2CppName: get_sortingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_sortingOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_sortingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_sortingOrder
// Il2CppName: set_sortingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(int)>(&UnityEngine::Renderer::set_sortingOrder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_sortingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_allowOcclusionWhenDynamic
// Il2CppName: set_allowOcclusionWhenDynamic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(bool)>(&UnityEngine::Renderer::set_allowOcclusionWhenDynamic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_allowOcclusionWhenDynamic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_isPartOfStaticBatch
// Il2CppName: get_isPartOfStaticBatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_isPartOfStaticBatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_isPartOfStaticBatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_worldToLocalMatrix
// Il2CppName: get_worldToLocalMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_worldToLocalMatrix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_worldToLocalMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetLightmapIndex
// Il2CppName: GetLightmapIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Renderer::*)(::UnityEngineInternal::LightmapType)>(&UnityEngine::Renderer::GetLightmapIndex)> {
  static const MethodInfo* get() {
    static auto* lt = &::il2cpp_utils::GetClassFromName("UnityEngineInternal", "LightmapType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetLightmapIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lt});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetLightmapIndex
// Il2CppName: SetLightmapIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(int, ::UnityEngineInternal::LightmapType)>(&UnityEngine::Renderer::SetLightmapIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lt = &::il2cpp_utils::GetClassFromName("UnityEngineInternal", "LightmapType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetLightmapIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, lt});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetLightmapST
// Il2CppName: GetLightmapST
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (UnityEngine::Renderer::*)(::UnityEngineInternal::LightmapType)>(&UnityEngine::Renderer::GetLightmapST)> {
  static const MethodInfo* get() {
    static auto* lt = &::il2cpp_utils::GetClassFromName("UnityEngineInternal", "LightmapType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetLightmapST", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lt});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_lightmapIndex
// Il2CppName: get_lightmapIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_lightmapIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_lightmapIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_lightmapIndex
// Il2CppName: set_lightmapIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(int)>(&UnityEngine::Renderer::set_lightmapIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_lightmapIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_lightmapScaleOffset
// Il2CppName: get_lightmapScaleOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_lightmapScaleOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_lightmapScaleOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_lightmapScaleOffset
// Il2CppName: set_lightmapScaleOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Vector4)>(&UnityEngine::Renderer::set_lightmapScaleOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_lightmapScaleOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetMaterialCount
// Il2CppName: GetMaterialCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetMaterialCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetMaterialCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetSharedMaterialArray
// Il2CppName: GetSharedMaterialArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetSharedMaterialArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetSharedMaterialArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_materials
// Il2CppName: get_materials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_materials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_materials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_materials
// Il2CppName: set_materials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::ArrayW<::UnityEngine::Material*>)>(&UnityEngine::Renderer::set_materials)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_materials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_material
// Il2CppName: get_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_material)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_material
// Il2CppName: set_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Material*)>(&UnityEngine::Renderer::set_material)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_sharedMaterial
// Il2CppName: get_sharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_sharedMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_sharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_sharedMaterial
// Il2CppName: set_sharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Material*)>(&UnityEngine::Renderer::set_sharedMaterial)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_sharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_sharedMaterials
// Il2CppName: get_sharedMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_sharedMaterials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_sharedMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_sharedMaterials
// Il2CppName: set_sharedMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::ArrayW<::UnityEngine::Material*>)>(&UnityEngine::Renderer::set_sharedMaterials)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_sharedMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetMaterials
// Il2CppName: GetMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::System::Collections::Generic::List_1<::UnityEngine::Material*>*)>(&UnityEngine::Renderer::GetMaterials)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Material")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetSharedMaterials
// Il2CppName: GetSharedMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::System::Collections::Generic::List_1<::UnityEngine::Material*>*)>(&UnityEngine::Renderer::GetSharedMaterials)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Material")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetSharedMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_bounds_Injected
// Il2CppName: get_bounds_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(ByRef<::UnityEngine::Bounds>)>(&UnityEngine::Renderer::get_bounds_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_bounds_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetStaticLightmapST_Injected
// Il2CppName: SetStaticLightmapST_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(ByRef<::UnityEngine::Vector4>)>(&UnityEngine::Renderer::SetStaticLightmapST_Injected)> {
  static const MethodInfo* get() {
    static auto* st = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetStaticLightmapST_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{st});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_worldToLocalMatrix_Injected
// Il2CppName: get_worldToLocalMatrix_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(ByRef<::UnityEngine::Matrix4x4>)>(&UnityEngine::Renderer::get_worldToLocalMatrix_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_worldToLocalMatrix_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetLightmapST_Injected
// Il2CppName: GetLightmapST_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngineInternal::LightmapType, ByRef<::UnityEngine::Vector4>)>(&UnityEngine::Renderer::GetLightmapST_Injected)> {
  static const MethodInfo* get() {
    static auto* lt = &::il2cpp_utils::GetClassFromName("UnityEngineInternal", "LightmapType")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetLightmapST_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lt, ret});
  }
};
