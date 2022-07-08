// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Spatializer.Propagation.MeshGroup
#include "Oculus/Spatializer/Propagation/MeshGroup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Terrain
  class Terrain;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ONSPPropagationMaterial
  class ONSPPropagationMaterial;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ONSPPropagationGeometry
  class ONSPPropagationGeometry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ONSPPropagationGeometry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ONSPPropagationGeometry*, "", "ONSPPropagationGeometry");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ONSPPropagationGeometry
  // [TokenAttribute] Offset: FFFFFFFF
  class ONSPPropagationGeometry : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::ONSPPropagationGeometry::MeshMaterial
    struct MeshMaterial;
    // Nested type: ::GlobalNamespace::ONSPPropagationGeometry::TerrainMaterial
    struct TerrainMaterial;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: ONSPPropagationGeometry/MeshMaterial
    // [TokenAttribute] Offset: FFFFFFFF
    struct MeshMaterial/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.MeshFilter meshFilter
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::MeshFilter* meshFilter;
      // Field size check
      static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
      // public ONSPPropagationMaterial[] materials
      // Size: 0x8
      // Offset: 0x8
      ::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*> materials;
      // Field size check
      static_assert(sizeof(::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*>) == 0x8);
      public:
      // Creating value type constructor for type: MeshMaterial
      constexpr MeshMaterial(::UnityEngine::MeshFilter* meshFilter_ = {}, ::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*> materials_ = ::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*>(static_cast<void*>(nullptr))) noexcept : meshFilter{meshFilter_}, materials{materials_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.MeshFilter meshFilter
      [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn_meshFilter();
      // Get instance field reference: public ONSPPropagationMaterial[] materials
      [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*>& dyn_materials();
    }; // ONSPPropagationGeometry/MeshMaterial
    #pragma pack(pop)
    static check_size<sizeof(ONSPPropagationGeometry::MeshMaterial), 8 + sizeof(::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*>)> __GlobalNamespace_ONSPPropagationGeometry_MeshMaterialSizeCheck;
    static_assert(sizeof(ONSPPropagationGeometry::MeshMaterial) == 0x10);
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: ONSPPropagationGeometry/TerrainMaterial
    // [TokenAttribute] Offset: FFFFFFFF
    struct TerrainMaterial/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Terrain terrain
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::Terrain* terrain;
      // Field size check
      static_assert(sizeof(::UnityEngine::Terrain*) == 0x8);
      // public ONSPPropagationMaterial[] materials
      // Size: 0x8
      // Offset: 0x8
      ::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*> materials;
      // Field size check
      static_assert(sizeof(::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*>) == 0x8);
      // public UnityEngine.Mesh[] treePrototypeMeshes
      // Size: 0x8
      // Offset: 0x10
      ::ArrayW<::UnityEngine::Mesh*> treePrototypeMeshes;
      // Field size check
      static_assert(sizeof(::ArrayW<::UnityEngine::Mesh*>) == 0x8);
      public:
      // Creating value type constructor for type: TerrainMaterial
      constexpr TerrainMaterial(::UnityEngine::Terrain* terrain_ = {}, ::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*> materials_ = ::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*>(static_cast<void*>(nullptr)), ::ArrayW<::UnityEngine::Mesh*> treePrototypeMeshes_ = ::ArrayW<::UnityEngine::Mesh*>(static_cast<void*>(nullptr))) noexcept : terrain{terrain_}, materials{materials_}, treePrototypeMeshes{treePrototypeMeshes_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Terrain terrain
      [[deprecated("Use field access instead!")]] ::UnityEngine::Terrain*& dyn_terrain();
      // Get instance field reference: public ONSPPropagationMaterial[] materials
      [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*>& dyn_materials();
      // Get instance field reference: public UnityEngine.Mesh[] treePrototypeMeshes
      [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Mesh*>& dyn_treePrototypeMeshes();
    }; // ONSPPropagationGeometry/TerrainMaterial
    #pragma pack(pop)
    static check_size<sizeof(ONSPPropagationGeometry::TerrainMaterial), 16 + sizeof(::ArrayW<::UnityEngine::Mesh*>)> __GlobalNamespace_ONSPPropagationGeometry_TerrainMaterialSizeCheck;
    static_assert(sizeof(ONSPPropagationGeometry::TerrainMaterial) == 0x18);
    public:
    // public System.String filePathRelative
    // Size: 0x8
    // Offset: 0x18
    ::StringW filePathRelative;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean fileEnabled
    // Size: 0x1
    // Offset: 0x20
    bool fileEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean includeChildMeshes
    // Size: 0x1
    // Offset: 0x21
    bool includeChildMeshes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: includeChildMeshes and: geometryHandle
    char __padding2[0x6] = {};
    // private System.IntPtr geometryHandle
    // Size: 0x8
    // Offset: 0x28
    ::System::IntPtr geometryHandle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public System.String GeometryAssetDirectory
    static ::StringW _get_GeometryAssetDirectory();
    // Set static field: static public System.String GeometryAssetDirectory
    static void _set_GeometryAssetDirectory(::StringW value);
    // Get static field: static public System.Int32 OSPSuccess
    static int _get_OSPSuccess();
    // Set static field: static public System.Int32 OSPSuccess
    static void _set_OSPSuccess(int value);
    // static field const value: static public System.String GEOMETRY_FILE_EXTENSION
    static constexpr const char* GEOMETRY_FILE_EXTENSION = "ovramesh";
    // Get static field: static public System.String GEOMETRY_FILE_EXTENSION
    static ::StringW _get_GEOMETRY_FILE_EXTENSION();
    // Set static field: static public System.String GEOMETRY_FILE_EXTENSION
    static void _set_GEOMETRY_FILE_EXTENSION(::StringW value);
    // Get static field: static private System.Int32 terrainDecimation
    static int _get_terrainDecimation();
    // Set static field: static private System.Int32 terrainDecimation
    static void _set_terrainDecimation(int value);
    // Get instance field reference: public System.String filePathRelative
    [[deprecated("Use field access instead!")]] ::StringW& dyn_filePathRelative();
    // Get instance field reference: public System.Boolean fileEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_fileEnabled();
    // Get instance field reference: public System.Boolean includeChildMeshes
    [[deprecated("Use field access instead!")]] bool& dyn_includeChildMeshes();
    // Get instance field reference: private System.IntPtr geometryHandle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_geometryHandle();
    // static public System.String get_GeometryAssetPath()
    // Offset: 0x1BF2A50
    static ::StringW get_GeometryAssetPath();
    // public System.String get_filePath()
    // Offset: 0x1BF2ADC
    ::StringW get_filePath();
    // static private System.String GetPath(UnityEngine.Transform current)
    // Offset: 0x1BF2B54
    static ::StringW GetPath(::UnityEngine::Transform* current);
    // private System.Void Awake()
    // Offset: 0x1BF2C9C
    void Awake();
    // private System.Void CreatePropagationGeometry()
    // Offset: 0x1BF2CA0
    void CreatePropagationGeometry();
    // private System.Void Update()
    // Offset: 0x1BF3200
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0x1BF3598
    void OnDestroy();
    // static private System.Void traverseMeshHierarchy(UnityEngine.GameObject obj, ONSPPropagationMaterial[] currentMaterials, System.Boolean includeChildren, System.Collections.Generic.List`1<ONSPPropagationGeometry/MeshMaterial> meshMaterials, System.Collections.Generic.List`1<ONSPPropagationGeometry/TerrainMaterial> terrainMaterials, System.Boolean ignoreStatic, ref System.Int32 ignoredMeshCount)
    // Offset: 0x1BF36F4
    static void traverseMeshHierarchy(::UnityEngine::GameObject* obj, ::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*> currentMaterials, bool includeChildren, ::System::Collections::Generic::List_1<::GlobalNamespace::ONSPPropagationGeometry::MeshMaterial>* meshMaterials, ::System::Collections::Generic::List_1<::GlobalNamespace::ONSPPropagationGeometry::TerrainMaterial>* terrainMaterials, bool ignoreStatic, ByRef<int> ignoredMeshCount);
    // private System.Int32 uploadMesh(System.IntPtr geometryHandle, UnityEngine.GameObject meshObject, UnityEngine.Matrix4x4 worldToLocal)
    // Offset: 0x1BF3DDC
    int uploadMesh(::System::IntPtr geometryHandle, ::UnityEngine::GameObject* meshObject, ::UnityEngine::Matrix4x4 worldToLocal);
    // private System.Int32 uploadMesh(System.IntPtr geometryHandle, UnityEngine.GameObject meshObject, UnityEngine.Matrix4x4 worldToLocal, System.Boolean ignoreStatic, ref System.Int32 ignoredMeshCount)
    // Offset: 0x1BF3E18
    int uploadMesh(::System::IntPtr geometryHandle, ::UnityEngine::GameObject* meshObject, ::UnityEngine::Matrix4x4 worldToLocal, bool ignoreStatic, ByRef<int> ignoredMeshCount);
    // static private System.Void uploadMeshFilter(System.Collections.Generic.List`1<UnityEngine.Vector3> tempVertices, System.Collections.Generic.List`1<System.Int32> tempIndices, Oculus.Spatializer.Propagation.MeshGroup[] groups, System.Single[] vertices, System.Int32[] indices, ref System.Int32 vertexOffset, ref System.Int32 indexOffset, ref System.Int32 groupOffset, UnityEngine.Mesh mesh, ONSPPropagationMaterial[] materials, UnityEngine.Matrix4x4 matrix)
    // Offset: 0x1BF5634
    static void uploadMeshFilter(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* tempVertices, ::System::Collections::Generic::List_1<int>* tempIndices, ::ArrayW<::Oculus::Spatializer::Propagation::MeshGroup> groups, ::ArrayW<float> vertices, ::ArrayW<int> indices, ByRef<int> vertexOffset, ByRef<int> indexOffset, ByRef<int> groupOffset, ::UnityEngine::Mesh* mesh, ::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*> materials, ::UnityEngine::Matrix4x4 matrix);
    // static private System.Void updateCountsForMesh(ref System.Int32 totalVertexCount, ref System.UInt32 totalIndexCount, ref System.Int32 totalFaceCount, ref System.Int32 totalMaterialCount, UnityEngine.Mesh mesh)
    // Offset: 0x1BF550C
    static void updateCountsForMesh(ByRef<int> totalVertexCount, ByRef<uint> totalIndexCount, ByRef<int> totalFaceCount, ByRef<int> totalMaterialCount, ::UnityEngine::Mesh* mesh);
    // public System.Void UploadGeometry()
    // Offset: 0x1BF3038
    void UploadGeometry();
    // public System.Boolean ReadFile()
    // Offset: 0x1BF2E6C
    bool ReadFile();
    // public System.Boolean WriteToObj()
    // Offset: 0x1BF5C48
    bool WriteToObj();
    // public System.Void .ctor()
    // Offset: 0x1BF6084
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ONSPPropagationGeometry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ONSPPropagationGeometry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ONSPPropagationGeometry*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1BF60E8
    static void _cctor();
  }; // ONSPPropagationGeometry
  #pragma pack(pop)
  static check_size<sizeof(ONSPPropagationGeometry), 40 + sizeof(::System::IntPtr)> __GlobalNamespace_ONSPPropagationGeometrySizeCheck;
  static_assert(sizeof(ONSPPropagationGeometry) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ONSPPropagationGeometry::TerrainMaterial, "", "ONSPPropagationGeometry/TerrainMaterial");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ONSPPropagationGeometry::MeshMaterial, "", "ONSPPropagationGeometry/MeshMaterial");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::get_GeometryAssetPath
// Il2CppName: get_GeometryAssetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::ONSPPropagationGeometry::get_GeometryAssetPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "get_GeometryAssetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::get_filePath
// Il2CppName: get_filePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::ONSPPropagationGeometry::*)()>(&GlobalNamespace::ONSPPropagationGeometry::get_filePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "get_filePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::GetPath
// Il2CppName: GetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Transform*)>(&GlobalNamespace::ONSPPropagationGeometry::GetPath)> {
  static const MethodInfo* get() {
    static auto* current = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "GetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{current});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPPropagationGeometry::*)()>(&GlobalNamespace::ONSPPropagationGeometry::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::CreatePropagationGeometry
// Il2CppName: CreatePropagationGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPPropagationGeometry::*)()>(&GlobalNamespace::ONSPPropagationGeometry::CreatePropagationGeometry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "CreatePropagationGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPPropagationGeometry::*)()>(&GlobalNamespace::ONSPPropagationGeometry::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPPropagationGeometry::*)()>(&GlobalNamespace::ONSPPropagationGeometry::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::traverseMeshHierarchy
// Il2CppName: traverseMeshHierarchy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*>, bool, ::System::Collections::Generic::List_1<::GlobalNamespace::ONSPPropagationGeometry::MeshMaterial>*, ::System::Collections::Generic::List_1<::GlobalNamespace::ONSPPropagationGeometry::TerrainMaterial>*, bool, ByRef<int>)>(&GlobalNamespace::ONSPPropagationGeometry::traverseMeshHierarchy)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* currentMaterials = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "ONSPPropagationMaterial"), 1)->byval_arg;
    static auto* includeChildren = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* meshMaterials = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ONSPPropagationGeometry/MeshMaterial")})->byval_arg;
    static auto* terrainMaterials = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ONSPPropagationGeometry/TerrainMaterial")})->byval_arg;
    static auto* ignoreStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ignoredMeshCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "traverseMeshHierarchy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, currentMaterials, includeChildren, meshMaterials, terrainMaterials, ignoreStatic, ignoredMeshCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::uploadMesh
// Il2CppName: uploadMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagationGeometry::*)(::System::IntPtr, ::UnityEngine::GameObject*, ::UnityEngine::Matrix4x4)>(&GlobalNamespace::ONSPPropagationGeometry::uploadMesh)> {
  static const MethodInfo* get() {
    static auto* geometryHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* meshObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* worldToLocal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "uploadMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometryHandle, meshObject, worldToLocal});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::uploadMesh
// Il2CppName: uploadMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ONSPPropagationGeometry::*)(::System::IntPtr, ::UnityEngine::GameObject*, ::UnityEngine::Matrix4x4, bool, ByRef<int>)>(&GlobalNamespace::ONSPPropagationGeometry::uploadMesh)> {
  static const MethodInfo* get() {
    static auto* geometryHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* meshObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* worldToLocal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* ignoreStatic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ignoredMeshCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "uploadMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{geometryHandle, meshObject, worldToLocal, ignoreStatic, ignoredMeshCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::uploadMeshFilter
// Il2CppName: uploadMeshFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<int>*, ::ArrayW<::Oculus::Spatializer::Propagation::MeshGroup>, ::ArrayW<float>, ::ArrayW<int>, ByRef<int>, ByRef<int>, ByRef<int>, ::UnityEngine::Mesh*, ::ArrayW<::GlobalNamespace::ONSPPropagationMaterial*>, ::UnityEngine::Matrix4x4)>(&GlobalNamespace::ONSPPropagationGeometry::uploadMeshFilter)> {
  static const MethodInfo* get() {
    static auto* tempVertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* tempIndices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* groups = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Oculus.Spatializer.Propagation", "MeshGroup"), 1)->byval_arg;
    static auto* vertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* indices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* vertexOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* indexOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* groupOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* materials = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "ONSPPropagationMaterial"), 1)->byval_arg;
    static auto* matrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "uploadMeshFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tempVertices, tempIndices, groups, vertices, indices, vertexOffset, indexOffset, groupOffset, mesh, materials, matrix});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::updateCountsForMesh
// Il2CppName: updateCountsForMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int>, ByRef<uint>, ByRef<int>, ByRef<int>, ::UnityEngine::Mesh*)>(&GlobalNamespace::ONSPPropagationGeometry::updateCountsForMesh)> {
  static const MethodInfo* get() {
    static auto* totalVertexCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* totalIndexCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* totalFaceCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* totalMaterialCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "updateCountsForMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{totalVertexCount, totalIndexCount, totalFaceCount, totalMaterialCount, mesh});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::UploadGeometry
// Il2CppName: UploadGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPPropagationGeometry::*)()>(&GlobalNamespace::ONSPPropagationGeometry::UploadGeometry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "UploadGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::ReadFile
// Il2CppName: ReadFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ONSPPropagationGeometry::*)()>(&GlobalNamespace::ONSPPropagationGeometry::ReadFile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "ReadFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::WriteToObj
// Il2CppName: WriteToObj
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ONSPPropagationGeometry::*)()>(&GlobalNamespace::ONSPPropagationGeometry::WriteToObj)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), "WriteToObj", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationGeometry::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ONSPPropagationGeometry::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationGeometry*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
