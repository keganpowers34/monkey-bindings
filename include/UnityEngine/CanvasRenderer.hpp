// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Including type: UnityEngine.UIVertex
#include "UnityEngine/UIVertex.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Mesh
  class Mesh;
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
  // Forward declaring type: CanvasRenderer
  class CanvasRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::CanvasRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CanvasRenderer*, "UnityEngine", "CanvasRenderer");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CanvasRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: AA2E50
  // [NativeHeaderAttribute] Offset: AA2E50
  class CanvasRenderer : public ::UnityEngine::Component {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAA30B4
    // [DebuggerBrowsableAttribute] Offset: 0xAA30B4
    // private System.Boolean <isMask>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool isMask;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean <isMask>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isMask$k__BackingField();
    // public System.Void set_hasPopInstruction(System.Boolean value)
    // Offset: 0x1B50394
    void set_hasPopInstruction(bool value);
    // public System.Int32 get_materialCount()
    // Offset: 0x1B503E4
    int get_materialCount();
    // public System.Void set_materialCount(System.Int32 value)
    // Offset: 0x1B50424
    void set_materialCount(int value);
    // public System.Void set_popMaterialCount(System.Int32 value)
    // Offset: 0x1B50474
    void set_popMaterialCount(int value);
    // public System.Int32 get_absoluteDepth()
    // Offset: 0x1B504C4
    int get_absoluteDepth();
    // public System.Boolean get_hasMoved()
    // Offset: 0x1B50504
    bool get_hasMoved();
    // public System.Boolean get_cull()
    // Offset: 0x1B50544
    bool get_cull();
    // public System.Void set_cull(System.Boolean value)
    // Offset: 0x1B50584
    void set_cull(bool value);
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x1B505D4
    void SetColor(::UnityEngine::Color color);
    // public UnityEngine.Color GetColor()
    // Offset: 0x1B5067C
    ::UnityEngine::Color GetColor();
    // public System.Void EnableRectClipping(UnityEngine.Rect rect)
    // Offset: 0x1B50728
    void EnableRectClipping(::UnityEngine::Rect rect);
    // public System.Void DisableRectClipping()
    // Offset: 0x1B507D0
    void DisableRectClipping();
    // public System.Void SetMaterial(UnityEngine.Material material, System.Int32 index)
    // Offset: 0x1B50810
    void SetMaterial(::UnityEngine::Material* material, int index);
    // public System.Void SetPopMaterial(UnityEngine.Material material, System.Int32 index)
    // Offset: 0x1B50868
    void SetPopMaterial(::UnityEngine::Material* material, int index);
    // public System.Void SetTexture(UnityEngine.Texture texture)
    // Offset: 0x1B508C0
    void SetTexture(::UnityEngine::Texture* texture);
    // public System.Void SetAlphaTexture(UnityEngine.Texture texture)
    // Offset: 0x1B50910
    void SetAlphaTexture(::UnityEngine::Texture* texture);
    // public System.Void SetMesh(UnityEngine.Mesh mesh)
    // Offset: 0x1B50960
    void SetMesh(::UnityEngine::Mesh* mesh);
    // public System.Void Clear()
    // Offset: 0x1B509B0
    void Clear();
    // public System.Void SetMaterial(UnityEngine.Material material, UnityEngine.Texture texture)
    // Offset: 0x1B509F0
    void SetMaterial(::UnityEngine::Material* material, ::UnityEngine::Texture* texture);
    // static public System.Void SplitUIVertexStreams(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector2> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x1B50B30
    static void SplitUIVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<int>* indices);
    // static public System.Void CreateUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector2> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x1B50CFC
    static void CreateUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents, ::System::Collections::Generic::List_1<int>* indices);
    // static public System.Void AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<UnityEngine.Vector3> positions, System.Collections.Generic.List`1<UnityEngine.Color32> colors, System.Collections.Generic.List`1<UnityEngine.Vector2> uv0S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv1S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv2S, System.Collections.Generic.List`1<UnityEngine.Vector2> uv3S, System.Collections.Generic.List`1<UnityEngine.Vector3> normals, System.Collections.Generic.List`1<UnityEngine.Vector4> tangents)
    // Offset: 0x1B50E44
    static void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv0S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv1S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv2S, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv3S, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents);
    // static private System.Void SplitIndicesStreamsInternal(System.Object verts, System.Object indices)
    // Offset: 0x1B50CAC
    static void SplitIndicesStreamsInternal(::Il2CppObject* verts, ::Il2CppObject* indices);
    // static private System.Void SplitUIVertexStreamsInternal(System.Object verts, System.Object positions, System.Object colors, System.Object uv0S, System.Object uv1S, System.Object uv2S, System.Object uv3S, System.Object normals, System.Object tangents)
    // Offset: 0x1B50C0C
    static void SplitUIVertexStreamsInternal(::Il2CppObject* verts, ::Il2CppObject* positions, ::Il2CppObject* colors, ::Il2CppObject* uv0S, ::Il2CppObject* uv1S, ::Il2CppObject* uv2S, ::Il2CppObject* uv3S, ::Il2CppObject* normals, ::Il2CppObject* tangents);
    // static private System.Void CreateUIVertexStreamInternal(System.Object verts, System.Object positions, System.Object colors, System.Object uv0S, System.Object uv1S, System.Object uv2S, System.Object uv3S, System.Object normals, System.Object tangents, System.Object indices)
    // Offset: 0x1B50DA0
    static void CreateUIVertexStreamInternal(::Il2CppObject* verts, ::Il2CppObject* positions, ::Il2CppObject* colors, ::Il2CppObject* uv0S, ::Il2CppObject* uv1S, ::Il2CppObject* uv2S, ::Il2CppObject* uv3S, ::Il2CppObject* normals, ::Il2CppObject* tangents, ::Il2CppObject* indices);
    // private System.Void SetColor_Injected(ref UnityEngine.Color color)
    // Offset: 0x1B5062C
    void SetColor_Injected(ByRef<::UnityEngine::Color> color);
    // private System.Void GetColor_Injected(out UnityEngine.Color ret)
    // Offset: 0x1B506D8
    void GetColor_Injected(ByRef<::UnityEngine::Color> ret);
    // private System.Void EnableRectClipping_Injected(ref UnityEngine.Rect rect)
    // Offset: 0x1B50780
    void EnableRectClipping_Injected(ByRef<::UnityEngine::Rect> rect);
  }; // UnityEngine.CanvasRenderer
  #pragma pack(pop)
  static check_size<sizeof(CanvasRenderer), 24 + sizeof(bool)> __UnityEngine_CanvasRendererSizeCheck;
  static_assert(sizeof(CanvasRenderer) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::set_hasPopInstruction
// Il2CppName: set_hasPopInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(bool)>(&UnityEngine::CanvasRenderer::set_hasPopInstruction)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "set_hasPopInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::get_materialCount
// Il2CppName: get_materialCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::CanvasRenderer::*)()>(&UnityEngine::CanvasRenderer::get_materialCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "get_materialCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::set_materialCount
// Il2CppName: set_materialCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(int)>(&UnityEngine::CanvasRenderer::set_materialCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "set_materialCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::set_popMaterialCount
// Il2CppName: set_popMaterialCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(int)>(&UnityEngine::CanvasRenderer::set_popMaterialCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "set_popMaterialCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::get_absoluteDepth
// Il2CppName: get_absoluteDepth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::CanvasRenderer::*)()>(&UnityEngine::CanvasRenderer::get_absoluteDepth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "get_absoluteDepth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::get_hasMoved
// Il2CppName: get_hasMoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CanvasRenderer::*)()>(&UnityEngine::CanvasRenderer::get_hasMoved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "get_hasMoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::get_cull
// Il2CppName: get_cull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CanvasRenderer::*)()>(&UnityEngine::CanvasRenderer::get_cull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "get_cull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::set_cull
// Il2CppName: set_cull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(bool)>(&UnityEngine::CanvasRenderer::set_cull)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "set_cull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(::UnityEngine::Color)>(&UnityEngine::CanvasRenderer::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::GetColor
// Il2CppName: GetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::CanvasRenderer::*)()>(&UnityEngine::CanvasRenderer::GetColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "GetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::EnableRectClipping
// Il2CppName: EnableRectClipping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(::UnityEngine::Rect)>(&UnityEngine::CanvasRenderer::EnableRectClipping)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "EnableRectClipping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::DisableRectClipping
// Il2CppName: DisableRectClipping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)()>(&UnityEngine::CanvasRenderer::DisableRectClipping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "DisableRectClipping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::SetMaterial
// Il2CppName: SetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(::UnityEngine::Material*, int)>(&UnityEngine::CanvasRenderer::SetMaterial)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "SetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material, index});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::SetPopMaterial
// Il2CppName: SetPopMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(::UnityEngine::Material*, int)>(&UnityEngine::CanvasRenderer::SetPopMaterial)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "SetPopMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material, index});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::SetTexture
// Il2CppName: SetTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(::UnityEngine::Texture*)>(&UnityEngine::CanvasRenderer::SetTexture)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "SetTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::SetAlphaTexture
// Il2CppName: SetAlphaTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(::UnityEngine::Texture*)>(&UnityEngine::CanvasRenderer::SetAlphaTexture)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "SetAlphaTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::SetMesh
// Il2CppName: SetMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(::UnityEngine::Mesh*)>(&UnityEngine::CanvasRenderer::SetMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "SetMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)()>(&UnityEngine::CanvasRenderer::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::SetMaterial
// Il2CppName: SetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(::UnityEngine::Material*, ::UnityEngine::Texture*)>(&UnityEngine::CanvasRenderer::SetMaterial)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "SetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material, texture});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::SplitUIVertexStreams
// Il2CppName: SplitUIVertexStreams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<int>*)>(&UnityEngine::CanvasRenderer::SplitUIVertexStreams)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex")})->byval_arg;
    static auto* positions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* colors = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")})->byval_arg;
    static auto* uv0S = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* uv1S = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* uv2S = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* uv3S = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* normals = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* tangents = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")})->byval_arg;
    static auto* indices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "SplitUIVertexStreams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, indices});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::CreateUIVertexStream
// Il2CppName: CreateUIVertexStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<int>*)>(&UnityEngine::CanvasRenderer::CreateUIVertexStream)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex")})->byval_arg;
    static auto* positions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* colors = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")})->byval_arg;
    static auto* uv0S = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* uv1S = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* uv2S = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* uv3S = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* normals = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* tangents = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")})->byval_arg;
    static auto* indices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "CreateUIVertexStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, indices});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::AddUIVertexStream
// Il2CppName: AddUIVertexStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&UnityEngine::CanvasRenderer::AddUIVertexStream)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "UIVertex")})->byval_arg;
    static auto* positions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* colors = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")})->byval_arg;
    static auto* uv0S = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* uv1S = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* uv2S = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* uv3S = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* normals = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* tangents = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "AddUIVertexStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::SplitIndicesStreamsInternal
// Il2CppName: SplitIndicesStreamsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&UnityEngine::CanvasRenderer::SplitIndicesStreamsInternal)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* indices = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "SplitIndicesStreamsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, indices});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::SplitUIVertexStreamsInternal
// Il2CppName: SplitUIVertexStreamsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*)>(&UnityEngine::CanvasRenderer::SplitUIVertexStreamsInternal)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* positions = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* colors = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* uv0S = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* uv1S = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* uv2S = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* uv3S = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* normals = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* tangents = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "SplitUIVertexStreamsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::CreateUIVertexStreamInternal
// Il2CppName: CreateUIVertexStreamInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*, ::Il2CppObject*)>(&UnityEngine::CanvasRenderer::CreateUIVertexStreamInternal)> {
  static const MethodInfo* get() {
    static auto* verts = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* positions = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* colors = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* uv0S = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* uv1S = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* uv2S = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* uv3S = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* normals = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* tangents = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* indices = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "CreateUIVertexStreamInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verts, positions, colors, uv0S, uv1S, uv2S, uv3S, normals, tangents, indices});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::SetColor_Injected
// Il2CppName: SetColor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(ByRef<::UnityEngine::Color>)>(&UnityEngine::CanvasRenderer::SetColor_Injected)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "SetColor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::GetColor_Injected
// Il2CppName: GetColor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(ByRef<::UnityEngine::Color>)>(&UnityEngine::CanvasRenderer::GetColor_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "GetColor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::CanvasRenderer::EnableRectClipping_Injected
// Il2CppName: EnableRectClipping_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CanvasRenderer::*)(ByRef<::UnityEngine::Rect>)>(&UnityEngine::CanvasRenderer::EnableRectClipping_Injected)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CanvasRenderer*), "EnableRectClipping_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
